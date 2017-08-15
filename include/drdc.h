/****************************************************************************
 *
 *  DRD - Robotic SDK ver 3.5.1
 *  Copyright (C) 2001-2014
 *  Force Dimension, Switzerland
 *  All Rights Reserved.
 *
 *  contact: support@forcedimension.com
 *
 ****************************************************************************/


/* C header */

#ifndef __DRDC_H__
#define __DRDC_H__

#include "dhdc.h"


/****************************************************************************
 *  GLOBAL DEFINITIONS
 ****************************************************************************/

#if (defined(WIN32) | defined(WIN64)) & !defined(WINCE7)
#ifndef __SDK
#define __SDK __stdcall
#endif
#else
#define __SDK
#endif

#ifdef __cplusplus
extern "C" {
#endif


/****************************************************************************
 *  SDK
 ****************************************************************************/

  int    __SDK drdOpen                             ();
  int    __SDK drdOpenID                           (char ID);
  int    __SDK drdSetDevice                        (char ID);
  int    __SDK drdGetDeviceID                      ();
  int    __SDK drdClose                            (char ID = -1);
  bool   __SDK drdIsSupported                      (char ID = -1);
  bool   __SDK drdIsRunning                        (char ID = -1);
  bool   __SDK drdIsMoving                         (char ID = -1);
  bool   __SDK drdIsFiltering                      (char ID = -1);
  double __SDK drdGetTime                          ();
  void   __SDK drdSleep                            (double sec);
  void   __SDK drdWaitForTick                      (char ID = -1);
  bool   __SDK drdIsInitialized                    (char ID = -1);
  int    __SDK drdAutoInit                         (char ID = -1);
  int    __SDK drdGetPos                           (double *px, double *py, double *pz, char ID = -1);
  double __SDK drdGetCtrlFreq                      (char ID = -1);
  int    __SDK drdStart                            (char ID = -1);
  int    __SDK drdEnableFilter                     (bool on, char ID = -1);
  int    __SDK drdMoveToPos                        (double px, double py, double pz, bool block = true, char ID = -1);
  int    __SDK drdMoveToEnc                        (int enc0, int enc1, int enc2, bool block = true, char ID = -1);
  int    __SDK drdTrackPos                         (double px, double py, double pz, char ID = -1);
  int    __SDK drdTrackEnc                         (int enc0, int enc1, int enc2, char ID = -1);
  int    __SDK drdHold                             (char ID = -1);
  int    __SDK drdStop                             (bool frc=false, char ID = -1);
  int    __SDK drdGetPriorities                    (int *prio, int *ctrlprio, char ID = -1);
  int    __SDK drdSetPriorities                    (int prio, int ctrlprio, char ID = -1);
  int    __SDK drdSetEncPGain                      (double gain, char ID = -1);
  double __SDK drdGetEncPGain                      (char ID = -1);
  int    __SDK drdSetEncIGain                      (double gain, char ID = -1);
  double __SDK drdGetEncIGain                      (char ID = -1);
  int    __SDK drdSetEncDGain                      (double gain, char ID = -1);
  double __SDK drdGetEncDGain                      (char ID = -1);
  int    __SDK drdSetMotRatioMax                   (double scale, char ID = -1);
  double __SDK drdGetMotRatioMax                   (char ID = -1);
  int    __SDK drdSetEncMoveParam                  (double  amax, double  vmax, double  jerk, char ID = -1);
  int    __SDK drdSetEncTrackParam                 (double  amax, double  vmax, double  jerk, char ID = -1);
  int    __SDK drdSetPosMoveParam                  (double  amax, double  vmax, double  jerk, char ID = -1);
  int    __SDK drdSetPosTrackParam                 (double  amax, double  vmax, double  jerk, char ID = -1);
  int    __SDK drdGetEncMoveParam                  (double *amax, double *vmax, double *jerk, char ID = -1);
  int    __SDK drdGetEncTrackParam                 (double *amax, double *vmax, double *jerk, char ID = -1);
  int    __SDK drdGetPosMoveParam                  (double *amax, double *vmax, double *jerk, char ID = -1);
  int    __SDK drdGetPosTrackParam                 (double *amax, double *vmax, double *jerk, char ID = -1);


#ifdef __cplusplus
}
#endif


#endif
