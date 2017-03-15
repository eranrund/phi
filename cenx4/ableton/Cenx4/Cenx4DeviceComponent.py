from _Framework.DeviceComponent import DeviceComponent
from Cenx4Mgr import Cenx4Mgr

# LOOK AT https://github.com/gluon/AbletonLive9_RemoteScripts/blob/3bda4608810249b9be3034d3e8eb77fbb0d7c39f/_Generic/Devices.py


class Cenx4DeviceComponent(DeviceComponent):
    def __init__(self):
        super(Cenx4DeviceComponent, self).__init__()
        self.song().view.add_selected_parameter_listener(self._on_selected_parameter_changed)

    def disconnect(self):
        self.song().view.remove_selected_parameter_listener(self._on_selected_parameter_changed)
        super(Cenx4DeviceComponent, self).disconnect()

    def set_device(self, device):
        super(Cenx4DeviceComponent, self).set_device(device)
        Cenx4Mgr.log_message('Cenx4DeviceComponent.set_device! %r' % (device, ))

        Cenx4Mgr.dbg = self

        if device:
            #Cenx4Mgr.log_message('Cenx4DeviceComponent.set_device num banks: %d banks, %d params %r' % (self.number_of_parameter_banks(device), len(list(device.parameters)), dir(self)))
            for i, param in enumerate(device.parameters):
            #     if i < Cenx4Mgr.cfg.num_pots:
            #         Cenx4Mgr.sysex.set_pot_text(i, param.name, unicode(param))
            #         Cenx4Mgr.sysex.set_pot_val_scaled(i, param.value, param.min, param.max)

                Cenx4Mgr.log_message('Cenx4DeviceComponent.set_device param %d: %s %r %r %r %r' % (i, param.name, param.min, param.max, param.value, type(param)))

    def number_of_parameter_banks(self, device):
        result = 0
        if device != None:
            param_count = len(list(device.parameters))
            # TODO number needs to come from hardware
            result = param_count / 16
            if not param_count % 16 == 0:
                result += 1
        return result

    def send_params(self):
        Cenx4Mgr.log_message('Cenx4DeviceComponent.send_params!')
        if self._parameter_controls is not None:
            for p in self._parameter_controls:
                p._send_param_val(True)
                Cenx4Mgr.log_message('Cenx4DeviceComponent.send_params: %r' % (p, ))

        self._on_device_name_changed()

    def _on_device_name_changed(self):
        super(Cenx4DeviceComponent, self)._on_device_name_changed()
        name = 'Please select a device in Live'
        if self._device is not None:
            if self._device.canonical_parent.name:
                pre = self._device.canonical_parent.name
            else:
                pre = 'Chain'
            name = pre + ': ' + unicode(self._device.name)

        Cenx4Mgr.log_message('Cenx4DeviceComponent._on_device_name_changed: ' + name)

    def _on_selected_parameter_changed(self):
        self._selected_parameter = self.song().view.selected_parameter
        Cenx4Mgr.log_message('Cenx4DeviceComponent._on_selected_paramater_changed!')


    def _assign_parameters(self):
        Cenx4Mgr.log('Cenx4DeviceComponent._assign_parameters!')
        assert self.is_enabled()
        assert self._device != None
        assert self._parameter_controls != None
        parameters = self._device_parameters_to_map()
        num_controls = len(self._parameter_controls)
        # index = self._bank_index * num_controls
        index = 0
        for control in self._parameter_controls:
            if index < len(parameters):
                control.connect_to(parameters[index])
            else:
                control.release_parameter()
            index += 1
