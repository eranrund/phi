import Live
from _Framework.EncoderElement import EncoderElement
from _Framework.InputControlElement import *
from Cenx4Mgr import Cenx4Mgr
import time


class Cenx4EncoderElement(EncoderElement):
    def __init__(self, type, ch, msg, report=False):
        super(Cenx4EncoderElement, self).__init__(type, ch, msg, Live.MidiMap.MapMode.relative_smooth_binary_offset)
        self._report_name_val = report
        self._last_time = 0

    def connect_to(self, param):
        Cenx4Mgr.log('Cenx4EncoderElement connect to %r -> %r' % (param.name, self._msg_identifier))
        if self._parameter_to_map_to is not None:
            try:
                self._parameter_to_map_to.remove_value_listener(self._on_value_changed)
            except:
                pass

        super(Cenx4EncoderElement, self).connect_to(param)

        if param is not None:
            if not self._parameter_to_map_to.value_has_listener(self._on_value_changed):
                self._parameter_to_map_to.add_value_listener(self._on_value_changed)

        self._send_param_val(True)

    def release_parameter(self):
        super(Cenx4EncoderElement, self).release_parameter()
        self._send_param_val(True)

    def disconnect(self):
        if self._parameter_to_map_to is not None:
            if hasattr(self._parameter_to_map_to, 'name'):
                self._parameter_to_map_to.remove_value_listener(self._on_value_changed)
        super(Cenx4EncoderElement, self).disconnect()

    def _on_value_changed(self):
        if self._report_name_val:
            self._send_param_val()

    def _send_param_val(self, force = False):
        if self._parameter_to_map_to is not None:
            if hasattr(self, 'select_parameter'):
                if self._report_name_val:
                    self.select_parameter(self._parameter_to_map_to)
        #if time.clock() > self._last_time + 0.01 or force:
        if True:
            if hasattr(self._parameter_to_map_to, 'name'):
                # Remember, value gets sent as CC
                Cenx4Mgr.log('Cenx4EncoderElement _send_param_val %r :: %s :: %s :: %r' % (self._msg_identifier, unicode(self._parameter_to_map_to), self._parameter_to_map_to.name, self._parameter_to_map_to.value))

                param = self._parameter_to_map_to
                pot_num = self._msg_identifier # this is the cc number
                if pot_num < Cenx4Mgr.cfg.num_pots:
                    Cenx4Mgr.sysex.set_pot_text(pot_num, param.name, unicode(param))
                    Cenx4Mgr.sysex.set_pot_val_scaled(pot_num, param.value, param.min, param.max)

                # sysex = LC2Sysex('PARAM_VALS')
                # if self.message_type() == MIDI_PB_TYPE:
                #     sysex.byte(16)
                #     sysex.byte(self.message_channel())
                # else:
                #     sysex.byte(self.message_channel())
                #     sysex.byte(self.message_identifier())
                # if self._parameter_to_map_to is not None:
                #     sysex.ascii(unicode(self._parameter_to_map_to.name))
                #     sysex.ascii(unicode(self._parameter_to_map_to))
                #     sysex.byte(self._parameter_to_map_to.is_enabled)
                # else:
                #     sysex.ascii(' ')
                #     sysex.ascii(' ')
                #     sysex.byte(0)
                #     self.send_value(0)
                # sysex.send()
            self._last_time = time.clock()

    def settings(self):
        Cenx4Mgr.log('Cenx4EncoderElement.settings called!')

        if self._parameter_to_map_to is not None:
            parent = self._parameter_to_map_to.canonical_parent
            if not hasattr(parent, 'name'):
                parent = parent.canonical_parent
            return [unicode(parent.name), unicode(self._parameter_to_map_to.name)]
        else:
            return ['', '']
