#ifndef _JSEVENT_H_
#define _JSEVENT_H_

struct JSEvent_Struct {
  bool buttonX; // Cross
  bool buttonO; // Circle
  bool buttonS; // Square
  bool buttonT; // Triangle
  bool buttonLeft;
  bool buttonRight;
  bool buttonUp;
  bool buttonDown;
  bool buttonL1;
  bool buttonR1;
  bool buttonL3;
  bool buttonR3;
  bool buttonStart;
  bool buttonSelect;
  bool buttonGuide;
  bool _dummy;
  short buttonL2;
  short buttonR2;
  short axisLeftX;
  short axisLeftY;
  short axisRightX;
  short axisRightY;
};

#endif
