# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: mars_rover.proto
# Protobuf Python Version: 4.25.1
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x10mars_rover.proto\x12\tmarsrover\"\x1d\n\x0c\x44riveRequest\x12\r\n\x05speed\x18\x01 \x01(\x02\"\r\n\x0bStopRequest\"\x1c\n\x0bTurnRequest\x12\r\n\x05\x61ngle\x18\x01 \x01(\x02\"\x1e\n\rRotateRequest\x12\r\n\x05\x61ngle\x18\x01 \x01(\x02\"3\n\x0f\x43ommandResponse\x12\x0f\n\x07success\x18\x01 \x01(\x08\x12\x0f\n\x07message\x18\x02 \x01(\t\"\x18\n\nLEDRequest\x12\n\n\x02on\x18\x01 \x01(\x08\"3\n\x0fWheelLEDRequest\x12\x14\n\x0cwheel_number\x18\x01 \x01(\x05\x12\n\n\x02on\x18\x02 \x01(\x08\"\x13\n\x11UltrasoundRequest\"&\n\x12UltrasoundResponse\x12\x10\n\x08\x64istance\x18\x01 \x01(\x02\"\x15\n\x13\x43\x61meraStreamRequest\"*\n\x14\x43\x61meraStreamResponse\x12\x12\n\nstream_url\x18\x01 \x01(\t2\xe0\x06\n\x0cRoverService\x12\x43\n\x0c\x44riveForward\x12\x17.marsrover.DriveRequest\x1a\x1a.marsrover.CommandResponse\x12:\n\x04Stop\x12\x16.marsrover.StopRequest\x1a\x1a.marsrover.CommandResponse\x12>\n\x07Reverse\x12\x17.marsrover.DriveRequest\x1a\x1a.marsrover.CommandResponse\x12>\n\x08TurnLeft\x12\x16.marsrover.TurnRequest\x1a\x1a.marsrover.CommandResponse\x12?\n\tTurnRight\x12\x16.marsrover.TurnRequest\x1a\x1a.marsrover.CommandResponse\x12@\n\nTurnOnSpot\x12\x16.marsrover.TurnRequest\x1a\x1a.marsrover.CommandResponse\x12\x42\n\x0cStopMovement\x12\x16.marsrover.StopRequest\x1a\x1a.marsrover.CommandResponse\x12G\n\x0fRotatePeriscope\x12\x18.marsrover.RotateRequest\x1a\x1a.marsrover.CommandResponse\x12\x46\n\x11\x43ontrolHeadlights\x12\x15.marsrover.LEDRequest\x1a\x1a.marsrover.CommandResponse\x12J\n\x10\x43ontrolWheelLEDs\x12\x1a.marsrover.WheelLEDRequest\x1a\x1a.marsrover.CommandResponse\x12W\n\x18GetUltrasoundMeasurement\x12\x1c.marsrover.UltrasoundRequest\x1a\x1d.marsrover.UltrasoundResponse\x12R\n\x0fGetCameraStream\x12\x1e.marsrover.CameraStreamRequest\x1a\x1f.marsrover.CameraStreamResponseb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'mars_rover_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:
  DESCRIPTOR._options = None
  _globals['_DRIVEREQUEST']._serialized_start=31
  _globals['_DRIVEREQUEST']._serialized_end=60
  _globals['_STOPREQUEST']._serialized_start=62
  _globals['_STOPREQUEST']._serialized_end=75
  _globals['_TURNREQUEST']._serialized_start=77
  _globals['_TURNREQUEST']._serialized_end=105
  _globals['_ROTATEREQUEST']._serialized_start=107
  _globals['_ROTATEREQUEST']._serialized_end=137
  _globals['_COMMANDRESPONSE']._serialized_start=139
  _globals['_COMMANDRESPONSE']._serialized_end=190
  _globals['_LEDREQUEST']._serialized_start=192
  _globals['_LEDREQUEST']._serialized_end=216
  _globals['_WHEELLEDREQUEST']._serialized_start=218
  _globals['_WHEELLEDREQUEST']._serialized_end=269
  _globals['_ULTRASOUNDREQUEST']._serialized_start=271
  _globals['_ULTRASOUNDREQUEST']._serialized_end=290
  _globals['_ULTRASOUNDRESPONSE']._serialized_start=292
  _globals['_ULTRASOUNDRESPONSE']._serialized_end=330
  _globals['_CAMERASTREAMREQUEST']._serialized_start=332
  _globals['_CAMERASTREAMREQUEST']._serialized_end=353
  _globals['_CAMERASTREAMRESPONSE']._serialized_start=355
  _globals['_CAMERASTREAMRESPONSE']._serialized_end=397
  _globals['_ROVERSERVICE']._serialized_start=400
  _globals['_ROVERSERVICE']._serialized_end=1264
# @@protoc_insertion_point(module_scope)
