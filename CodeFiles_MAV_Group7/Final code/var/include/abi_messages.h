/* Automatically generated by gen_abi from /home/hem/paparazzi/conf/abi.xml */
/* Version v5.14.0_stable-12-gbf6642b09-dirty */
/* Please DO NOT EDIT */

/* Onboard middleware library ABI
 * send and receive messages of class airborne
 */

#ifndef ABI_MESSAGES_H
#define ABI_MESSAGES_H

#include "subsystems/abi_common.h"

/* Messages IDs */
#define ABI_BARO_ABS_ID 0
#define ABI_BARO_DIFF_ID 1
#define ABI_AGL_ID 2
#define ABI_TEMPERATURE_ID 3
#define ABI_IMU_GYRO_INT32_ID 4
#define ABI_IMU_ACCEL_INT32_ID 5
#define ABI_IMU_MAG_INT32_ID 6
#define ABI_IMU_LOWPASSED_ID 7
#define ABI_BODY_TO_IMU_QUAT_ID 8
#define ABI_GEO_MAG_ID 9
#define ABI_GPS_ID 10
#define ABI_OPTICAL_FLOW_ID 11
#define ABI_VELOCITY_ESTIMATE_ID 12
#define ABI_RSSI_ID 13
#define ABI_AIRSPEED_ID 14
#define ABI_RPM_ID 15
#define ABI_THRUST_ID 16
#define ABI_OBSTACLE_DETECTION_ID 17
#define ABI_POSITION_ESTIMATE_ID 18
#define ABI_UWB_COMMUNICATION_ID 19
#define ABI_RANGE_FORCEFIELD_ID 20
#define ABI_JEVOIS_MSG_ID 21
#define ABI_FOLLOW_TARGET_ID 22
#define ABI_ACCEL_SP_ID 23
#define ABI_RELATIVE_LOCALIZATION_ID 24
#define ABI_INCIDENCE_ID 25
#define ABI_MANUAL_SETPOINT_ID 26
#define ABI_VISUAL_DETECTION_ID 27
#define ABI_ORANGE_COLOR_COLUMNS_ID 28

/* Array and linked list structure */
#define ABI_MESSAGE_NB 29

ABI_EXTERN abi_event* abi_queues[ABI_MESSAGE_NB];

/* Callbacks */
typedef void (*abi_callbackBARO_ABS)(uint8_t sender_id, float pressure);
typedef void (*abi_callbackBARO_DIFF)(uint8_t sender_id, float pressure);
typedef void (*abi_callbackAGL)(uint8_t sender_id, float distance);
typedef void (*abi_callbackTEMPERATURE)(uint8_t sender_id, float temp);
typedef void (*abi_callbackIMU_GYRO_INT32)(uint8_t sender_id, uint32_t stamp, struct Int32Rates * gyro);
typedef void (*abi_callbackIMU_ACCEL_INT32)(uint8_t sender_id, uint32_t stamp, struct Int32Vect3 * accel);
typedef void (*abi_callbackIMU_MAG_INT32)(uint8_t sender_id, uint32_t stamp, struct Int32Vect3 * mag);
typedef void (*abi_callbackIMU_LOWPASSED)(uint8_t sender_id, uint32_t stamp, struct Int32Rates * gyro, struct Int32Vect3 * accel, struct Int32Vect3 * mag);
typedef void (*abi_callbackBODY_TO_IMU_QUAT)(uint8_t sender_id, struct FloatQuat * q_b2i_f);
typedef void (*abi_callbackGEO_MAG)(uint8_t sender_id, struct FloatVect3 * h);
typedef void (*abi_callbackGPS)(uint8_t sender_id, uint32_t stamp, struct GpsState * gps_s);
typedef void (*abi_callbackOPTICAL_FLOW)(uint8_t sender_id, uint32_t stamp, int16_t flow_x, int16_t flow_y, int16_t flow_der_x, int16_t flow_der_y, float quality, float size_divergence);
typedef void (*abi_callbackVELOCITY_ESTIMATE)(uint8_t sender_id, uint32_t stamp, float x, float y, float z, float noise_x, float noise_y, float noise_z);
typedef void (*abi_callbackRSSI)(uint8_t sender_id, uint8_t ac_id, int8_t source_strength, int8_t rssi);
typedef void (*abi_callbackAIRSPEED)(uint8_t sender_id, float eas);
typedef void (*abi_callbackRPM)(uint8_t sender_id, uint16_t * rpm, uint8_t num_act);
typedef void (*abi_callbackTHRUST)(uint8_t sender_id, float thrust_increment);
typedef void (*abi_callbackOBSTACLE_DETECTION)(uint8_t sender_id, float distance, float elevation, float heading);
typedef void (*abi_callbackPOSITION_ESTIMATE)(uint8_t sender_id, uint32_t stamp, float x, float y, float z, float noise_x, float noise_y, float noise_z);
typedef void (*abi_callbackUWB_COMMUNICATION)(uint8_t sender_id, uint8_t id, float range, float vx, float vy, float h, float ax, float ay, float yawr);
typedef void (*abi_callbackRANGE_FORCEFIELD)(uint8_t sender_id, float vel_body_x_FF, float vel_body_y_FF, float vel_body_z_FF);
typedef void (*abi_callbackJEVOIS_MSG)(uint8_t sender_id, uint8_t type, char * id, uint8_t nb, int16_t * coord, uint16_t * dim, struct FloatQuat quat, char * extra);
typedef void (*abi_callbackFOLLOW_TARGET)(uint8_t sender_id, uint32_t id, uint8_t frame, float bearing, float height, float distance);
typedef void (*abi_callbackACCEL_SP)(uint8_t sender_id, uint8_t flag, struct FloatVect3 * accel_sp);
typedef void (*abi_callbackRELATIVE_LOCALIZATION)(uint8_t sender_id, int32_t id, float x, float y, float z, float vx, float vy, float vz);
typedef void (*abi_callbackINCIDENCE)(uint8_t sender_id, uint8_t flag, float aoa, float sideslip);
typedef void (*abi_callbackMANUAL_SETPOINT)(uint8_t sender_id, float thrust, float roll, float pitch, float yaw);
typedef void (*abi_callbackVISUAL_DETECTION)(uint8_t sender_id, int16_t pixel_x, int16_t pixel_y, int16_t pixel_width, int16_t pixel_height, int32_t quality, int16_t extra);
typedef void (*abi_callbackORANGE_COLOR_COLUMNS)(uint8_t sender_id, double cnt_1, double cnt_2, double cnt_3, double cnt_4, double cnt_5,double cnt_6,double cnt_7,double cnt_8,double cnt_9,double cnt_10,double cnt_11,double cnt_12,double cnt_13,double cnt_14,double cnt_15);

/* Bind and Send functions */

static inline void AbiBindMsgBARO_ABS(uint8_t sender_id, abi_event * ev, abi_callbackBARO_ABS cb) {
  if (abi_queues[ABI_BARO_ABS_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_BARO_ABS_ID],ev);
}

static inline void AbiSendMsgBARO_ABS(uint8_t sender_id, float pressure) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_BARO_ABS_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackBARO_ABS cb = (abi_callbackBARO_ABS)(e->cb);
      cb(sender_id, pressure);
    }
  }
}

static inline void AbiBindMsgBARO_DIFF(uint8_t sender_id, abi_event * ev, abi_callbackBARO_DIFF cb) {
  if (abi_queues[ABI_BARO_DIFF_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_BARO_DIFF_ID],ev);
}

static inline void AbiSendMsgBARO_DIFF(uint8_t sender_id, float pressure) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_BARO_DIFF_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackBARO_DIFF cb = (abi_callbackBARO_DIFF)(e->cb);
      cb(sender_id, pressure);
    }
  }
}

static inline void AbiBindMsgAGL(uint8_t sender_id, abi_event * ev, abi_callbackAGL cb) {
  if (abi_queues[ABI_AGL_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_AGL_ID],ev);
}

static inline void AbiSendMsgAGL(uint8_t sender_id, float distance) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_AGL_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackAGL cb = (abi_callbackAGL)(e->cb);
      cb(sender_id, distance);
    }
  }
}

static inline void AbiBindMsgTEMPERATURE(uint8_t sender_id, abi_event * ev, abi_callbackTEMPERATURE cb) {
  if (abi_queues[ABI_TEMPERATURE_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_TEMPERATURE_ID],ev);
}

static inline void AbiSendMsgTEMPERATURE(uint8_t sender_id, float temp) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_TEMPERATURE_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackTEMPERATURE cb = (abi_callbackTEMPERATURE)(e->cb);
      cb(sender_id, temp);
    }
  }
}

static inline void AbiBindMsgIMU_GYRO_INT32(uint8_t sender_id, abi_event * ev, abi_callbackIMU_GYRO_INT32 cb) {
  if (abi_queues[ABI_IMU_GYRO_INT32_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_IMU_GYRO_INT32_ID],ev);
}

static inline void AbiSendMsgIMU_GYRO_INT32(uint8_t sender_id, uint32_t stamp, struct Int32Rates * gyro) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_IMU_GYRO_INT32_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackIMU_GYRO_INT32 cb = (abi_callbackIMU_GYRO_INT32)(e->cb);
      cb(sender_id, stamp, gyro);
    }
  }
}

static inline void AbiBindMsgIMU_ACCEL_INT32(uint8_t sender_id, abi_event * ev, abi_callbackIMU_ACCEL_INT32 cb) {
  if (abi_queues[ABI_IMU_ACCEL_INT32_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_IMU_ACCEL_INT32_ID],ev);
}

static inline void AbiSendMsgIMU_ACCEL_INT32(uint8_t sender_id, uint32_t stamp, struct Int32Vect3 * accel) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_IMU_ACCEL_INT32_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackIMU_ACCEL_INT32 cb = (abi_callbackIMU_ACCEL_INT32)(e->cb);
      cb(sender_id, stamp, accel);
    }
  }
}

static inline void AbiBindMsgIMU_MAG_INT32(uint8_t sender_id, abi_event * ev, abi_callbackIMU_MAG_INT32 cb) {
  if (abi_queues[ABI_IMU_MAG_INT32_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_IMU_MAG_INT32_ID],ev);
}

static inline void AbiSendMsgIMU_MAG_INT32(uint8_t sender_id, uint32_t stamp, struct Int32Vect3 * mag) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_IMU_MAG_INT32_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackIMU_MAG_INT32 cb = (abi_callbackIMU_MAG_INT32)(e->cb);
      cb(sender_id, stamp, mag);
    }
  }
}

static inline void AbiBindMsgIMU_LOWPASSED(uint8_t sender_id, abi_event * ev, abi_callbackIMU_LOWPASSED cb) {
  if (abi_queues[ABI_IMU_LOWPASSED_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_IMU_LOWPASSED_ID],ev);
}

static inline void AbiSendMsgIMU_LOWPASSED(uint8_t sender_id, uint32_t stamp, struct Int32Rates * gyro, struct Int32Vect3 * accel, struct Int32Vect3 * mag) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_IMU_LOWPASSED_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackIMU_LOWPASSED cb = (abi_callbackIMU_LOWPASSED)(e->cb);
      cb(sender_id, stamp, gyro, accel, mag);
    }
  }
}

static inline void AbiBindMsgBODY_TO_IMU_QUAT(uint8_t sender_id, abi_event * ev, abi_callbackBODY_TO_IMU_QUAT cb) {
  if (abi_queues[ABI_BODY_TO_IMU_QUAT_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_BODY_TO_IMU_QUAT_ID],ev);
}

static inline void AbiSendMsgBODY_TO_IMU_QUAT(uint8_t sender_id, struct FloatQuat * q_b2i_f) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_BODY_TO_IMU_QUAT_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackBODY_TO_IMU_QUAT cb = (abi_callbackBODY_TO_IMU_QUAT)(e->cb);
      cb(sender_id, q_b2i_f);
    }
  }
}

static inline void AbiBindMsgGEO_MAG(uint8_t sender_id, abi_event * ev, abi_callbackGEO_MAG cb) {
  if (abi_queues[ABI_GEO_MAG_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_GEO_MAG_ID],ev);
}

static inline void AbiSendMsgGEO_MAG(uint8_t sender_id, struct FloatVect3 * h) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_GEO_MAG_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackGEO_MAG cb = (abi_callbackGEO_MAG)(e->cb);
      cb(sender_id, h);
    }
  }
}

static inline void AbiBindMsgGPS(uint8_t sender_id, abi_event * ev, abi_callbackGPS cb) {
  if (abi_queues[ABI_GPS_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_GPS_ID],ev);
}

static inline void AbiSendMsgGPS(uint8_t sender_id, uint32_t stamp, struct GpsState * gps_s) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_GPS_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackGPS cb = (abi_callbackGPS)(e->cb);
      cb(sender_id, stamp, gps_s);
    }
  }
}

static inline void AbiBindMsgOPTICAL_FLOW(uint8_t sender_id, abi_event * ev, abi_callbackOPTICAL_FLOW cb) {
  if (abi_queues[ABI_OPTICAL_FLOW_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_OPTICAL_FLOW_ID],ev);
}

static inline void AbiSendMsgOPTICAL_FLOW(uint8_t sender_id, uint32_t stamp, int16_t flow_x, int16_t flow_y, int16_t flow_der_x, int16_t flow_der_y, float quality, float size_divergence) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_OPTICAL_FLOW_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackOPTICAL_FLOW cb = (abi_callbackOPTICAL_FLOW)(e->cb);
      cb(sender_id, stamp, flow_x, flow_y, flow_der_x, flow_der_y, quality, size_divergence);
    }
  }
}

static inline void AbiBindMsgVELOCITY_ESTIMATE(uint8_t sender_id, abi_event * ev, abi_callbackVELOCITY_ESTIMATE cb) {
  if (abi_queues[ABI_VELOCITY_ESTIMATE_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_VELOCITY_ESTIMATE_ID],ev);
}

static inline void AbiSendMsgVELOCITY_ESTIMATE(uint8_t sender_id, uint32_t stamp, float x, float y, float z, float noise_x, float noise_y, float noise_z) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_VELOCITY_ESTIMATE_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackVELOCITY_ESTIMATE cb = (abi_callbackVELOCITY_ESTIMATE)(e->cb);
      cb(sender_id, stamp, x, y, z, noise_x, noise_y, noise_z);
    }
  }
}

static inline void AbiBindMsgRSSI(uint8_t sender_id, abi_event * ev, abi_callbackRSSI cb) {
  if (abi_queues[ABI_RSSI_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_RSSI_ID],ev);
}

static inline void AbiSendMsgRSSI(uint8_t sender_id, uint8_t ac_id, int8_t source_strength, int8_t rssi) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_RSSI_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackRSSI cb = (abi_callbackRSSI)(e->cb);
      cb(sender_id, ac_id, source_strength, rssi);
    }
  }
}

static inline void AbiBindMsgAIRSPEED(uint8_t sender_id, abi_event * ev, abi_callbackAIRSPEED cb) {
  if (abi_queues[ABI_AIRSPEED_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_AIRSPEED_ID],ev);
}

static inline void AbiSendMsgAIRSPEED(uint8_t sender_id, float eas) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_AIRSPEED_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackAIRSPEED cb = (abi_callbackAIRSPEED)(e->cb);
      cb(sender_id, eas);
    }
  }
}

static inline void AbiBindMsgRPM(uint8_t sender_id, abi_event * ev, abi_callbackRPM cb) {
  if (abi_queues[ABI_RPM_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_RPM_ID],ev);
}

static inline void AbiSendMsgRPM(uint8_t sender_id, uint16_t * rpm, uint8_t num_act) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_RPM_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackRPM cb = (abi_callbackRPM)(e->cb);
      cb(sender_id, rpm, num_act);
    }
  }
}

static inline void AbiBindMsgTHRUST(uint8_t sender_id, abi_event * ev, abi_callbackTHRUST cb) {
  if (abi_queues[ABI_THRUST_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_THRUST_ID],ev);
}

static inline void AbiSendMsgTHRUST(uint8_t sender_id, float thrust_increment) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_THRUST_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackTHRUST cb = (abi_callbackTHRUST)(e->cb);
      cb(sender_id, thrust_increment);
    }
  }
}

static inline void AbiBindMsgOBSTACLE_DETECTION(uint8_t sender_id, abi_event * ev, abi_callbackOBSTACLE_DETECTION cb) {
  if (abi_queues[ABI_OBSTACLE_DETECTION_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_OBSTACLE_DETECTION_ID],ev);
}

static inline void AbiSendMsgOBSTACLE_DETECTION(uint8_t sender_id, float distance, float elevation, float heading) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_OBSTACLE_DETECTION_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackOBSTACLE_DETECTION cb = (abi_callbackOBSTACLE_DETECTION)(e->cb);
      cb(sender_id, distance, elevation, heading);
    }
  }
}

static inline void AbiBindMsgPOSITION_ESTIMATE(uint8_t sender_id, abi_event * ev, abi_callbackPOSITION_ESTIMATE cb) {
  if (abi_queues[ABI_POSITION_ESTIMATE_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_POSITION_ESTIMATE_ID],ev);
}

static inline void AbiSendMsgPOSITION_ESTIMATE(uint8_t sender_id, uint32_t stamp, float x, float y, float z, float noise_x, float noise_y, float noise_z) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_POSITION_ESTIMATE_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackPOSITION_ESTIMATE cb = (abi_callbackPOSITION_ESTIMATE)(e->cb);
      cb(sender_id, stamp, x, y, z, noise_x, noise_y, noise_z);
    }
  }
}

static inline void AbiBindMsgUWB_COMMUNICATION(uint8_t sender_id, abi_event * ev, abi_callbackUWB_COMMUNICATION cb) {
  if (abi_queues[ABI_UWB_COMMUNICATION_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_UWB_COMMUNICATION_ID],ev);
}

static inline void AbiSendMsgUWB_COMMUNICATION(uint8_t sender_id, uint8_t id, float range, float vx, float vy, float h, float ax, float ay, float yawr) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_UWB_COMMUNICATION_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackUWB_COMMUNICATION cb = (abi_callbackUWB_COMMUNICATION)(e->cb);
      cb(sender_id, id, range, vx, vy, h, ax, ay, yawr);
    }
  }
}

static inline void AbiBindMsgRANGE_FORCEFIELD(uint8_t sender_id, abi_event * ev, abi_callbackRANGE_FORCEFIELD cb) {
  if (abi_queues[ABI_RANGE_FORCEFIELD_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_RANGE_FORCEFIELD_ID],ev);
}

static inline void AbiSendMsgRANGE_FORCEFIELD(uint8_t sender_id, float vel_body_x_FF, float vel_body_y_FF, float vel_body_z_FF) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_RANGE_FORCEFIELD_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackRANGE_FORCEFIELD cb = (abi_callbackRANGE_FORCEFIELD)(e->cb);
      cb(sender_id, vel_body_x_FF, vel_body_y_FF, vel_body_z_FF);
    }
  }
}

static inline void AbiBindMsgJEVOIS_MSG(uint8_t sender_id, abi_event * ev, abi_callbackJEVOIS_MSG cb) {
  if (abi_queues[ABI_JEVOIS_MSG_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_JEVOIS_MSG_ID],ev);
}

static inline void AbiSendMsgJEVOIS_MSG(uint8_t sender_id, uint8_t type, char * id, uint8_t nb, int16_t * coord, uint16_t * dim, struct FloatQuat quat, char * extra) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_JEVOIS_MSG_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackJEVOIS_MSG cb = (abi_callbackJEVOIS_MSG)(e->cb);
      cb(sender_id, type, id, nb, coord, dim, quat, extra);
    }
  }
}

static inline void AbiBindMsgFOLLOW_TARGET(uint8_t sender_id, abi_event * ev, abi_callbackFOLLOW_TARGET cb) {
  if (abi_queues[ABI_FOLLOW_TARGET_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_FOLLOW_TARGET_ID],ev);
}

static inline void AbiSendMsgFOLLOW_TARGET(uint8_t sender_id, uint32_t id, uint8_t frame, float bearing, float height, float distance) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_FOLLOW_TARGET_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackFOLLOW_TARGET cb = (abi_callbackFOLLOW_TARGET)(e->cb);
      cb(sender_id, id, frame, bearing, height, distance);
    }
  }
}

static inline void AbiBindMsgACCEL_SP(uint8_t sender_id, abi_event * ev, abi_callbackACCEL_SP cb) {
  if (abi_queues[ABI_ACCEL_SP_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_ACCEL_SP_ID],ev);
}

static inline void AbiSendMsgACCEL_SP(uint8_t sender_id, uint8_t flag, struct FloatVect3 * accel_sp) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_ACCEL_SP_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackACCEL_SP cb = (abi_callbackACCEL_SP)(e->cb);
      cb(sender_id, flag, accel_sp);
    }
  }
}

static inline void AbiBindMsgRELATIVE_LOCALIZATION(uint8_t sender_id, abi_event * ev, abi_callbackRELATIVE_LOCALIZATION cb) {
  if (abi_queues[ABI_RELATIVE_LOCALIZATION_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_RELATIVE_LOCALIZATION_ID],ev);
}

static inline void AbiSendMsgRELATIVE_LOCALIZATION(uint8_t sender_id, int32_t id, float x, float y, float z, float vx, float vy, float vz) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_RELATIVE_LOCALIZATION_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackRELATIVE_LOCALIZATION cb = (abi_callbackRELATIVE_LOCALIZATION)(e->cb);
      cb(sender_id, id, x, y, z, vx, vy, vz);
    }
  }
}

static inline void AbiBindMsgINCIDENCE(uint8_t sender_id, abi_event * ev, abi_callbackINCIDENCE cb) {
  if (abi_queues[ABI_INCIDENCE_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_INCIDENCE_ID],ev);
}

static inline void AbiSendMsgINCIDENCE(uint8_t sender_id, uint8_t flag, float aoa, float sideslip) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_INCIDENCE_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackINCIDENCE cb = (abi_callbackINCIDENCE)(e->cb);
      cb(sender_id, flag, aoa, sideslip);
    }
  }
}

static inline void AbiBindMsgMANUAL_SETPOINT(uint8_t sender_id, abi_event * ev, abi_callbackMANUAL_SETPOINT cb) {
  if (abi_queues[ABI_MANUAL_SETPOINT_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_MANUAL_SETPOINT_ID],ev);
}

static inline void AbiSendMsgMANUAL_SETPOINT(uint8_t sender_id, float thrust, float roll, float pitch, float yaw) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_MANUAL_SETPOINT_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackMANUAL_SETPOINT cb = (abi_callbackMANUAL_SETPOINT)(e->cb);
      cb(sender_id, thrust, roll, pitch, yaw);
    }
  }
}

static inline void AbiBindMsgVISUAL_DETECTION(uint8_t sender_id, abi_event * ev, abi_callbackVISUAL_DETECTION cb) {
  if (abi_queues[ABI_VISUAL_DETECTION_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_VISUAL_DETECTION_ID],ev);
}

static inline void AbiSendMsgVISUAL_DETECTION(uint8_t sender_id, int16_t pixel_x, int16_t pixel_y, int16_t pixel_width, int16_t pixel_height, int32_t quality, int16_t extra) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_VISUAL_DETECTION_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackVISUAL_DETECTION cb = (abi_callbackVISUAL_DETECTION)(e->cb);
      cb(sender_id, pixel_x, pixel_y, pixel_width, pixel_height, quality, extra);
    }
  }
}

static inline void AbiBindMsgORANGE_COLOR_COLUMNS(uint8_t sender_id, abi_event * ev, abi_callbackORANGE_COLOR_COLUMNS cb) {
  if (abi_queues[ABI_ORANGE_COLOR_COLUMNS_ID] == ev) return;
  ev->id = sender_id;
  ev->cb = (abi_callback)cb;
  ABI_PREPEND(abi_queues[ABI_ORANGE_COLOR_COLUMNS_ID],ev);
}

static inline void AbiSendMsgORANGE_COLOR_COLUMNS(uint8_t sender_id, double cnt_1, double cnt_2, double cnt_3, double cnt_4, double cnt_5, double cnt_6, double cnt_7, double cnt_8,double cnt_9,double cnt_10,double cnt_11,double cnt_12,double cnt_13,double cnt_14,double cnt_15) {
  abi_event* e;
  ABI_FOREACH(abi_queues[ABI_ORANGE_COLOR_COLUMNS_ID],e) {
    if (e->id == ABI_BROADCAST || e->id == sender_id) {
      abi_callbackORANGE_COLOR_COLUMNS cb = (abi_callbackORANGE_COLOR_COLUMNS)(e->cb);
      cb(sender_id, cnt_1, cnt_2,cnt_3,cnt_4,cnt_5,cnt_6,cnt_7,cnt_8,cnt_9,cnt_10,cnt_11,cnt_12,cnt_13,cnt_14, cnt_15);
    }
  }
}

#endif // ABI_MESSAGES_H
