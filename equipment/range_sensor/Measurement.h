/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: E:\DSDL\libcanard\dsdl_compiler\pyuavcan\uavcan\dsdl_files\uavcan\equipment\range_sensor\1050.Measurement.uavcan
 */

#ifndef __UAVCAN_EQUIPMENT_RANGE_SENSOR_MEASUREMENT
#define __UAVCAN_EQUIPMENT_RANGE_SENSOR_MEASUREMENT

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include <uavcan\CoarseOrientation.h>
#include <uavcan\Timestamp.h>

/******************************* Source text **********************************
#
# Generic narrow-beam range sensor data.
#

uavcan.Timestamp timestamp

uint8 sensor_id

uavcan.CoarseOrientation beam_orientation_in_body_frame

float16 field_of_view                # Radians

uint5 SENSOR_TYPE_UNDEFINED = 0
uint5 SENSOR_TYPE_SONAR     = 1
uint5 SENSOR_TYPE_LIDAR     = 2
uint5 SENSOR_TYPE_RADAR     = 3
uint5 sensor_type

uint3 READING_TYPE_UNDEFINED   = 0   # Range is unknown
uint3 READING_TYPE_VALID_RANGE = 1   # Range field contains valid distance
uint3 READING_TYPE_TOO_CLOSE   = 2   # Range field contains min range for the sensor
uint3 READING_TYPE_TOO_FAR     = 3   # Range field contains max range for the sensor
uint3 reading_type

float16 range                        # Meters
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.range_sensor.Measurement
uavcan.Timestamp timestamp
saturated uint8 sensor_id
uavcan.CoarseOrientation beam_orientation_in_body_frame
saturated float16 field_of_view
saturated uint5 sensor_type
saturated uint3 reading_type
saturated float16 range
******************************************************************************/

#define UAVCAN_EQUIPMENT_RANGE_SENSOR_MEASUREMENT_ID       1050
#define UAVCAN_EQUIPMENT_RANGE_SENSOR_MEASUREMENT_NAME     "uavcan.equipment.range_sensor.Measurement"
#define UAVCAN_EQUIPMENT_RANGE_SENSOR_MEASUREMENT_SIGNATURE (0x68FFFE70FC771952ULL)

#define UAVCAN_EQUIPMENT_RANGE_SENSOR_MEASUREMENT_MAX_SIZE ((120 + 7)/8)

// Constants
#define UAVCAN_EQUIPMENT_RANGE_SENSOR_MEASUREMENT_SENSOR_TYPE_UNDEFINED          0 // 0
#define UAVCAN_EQUIPMENT_RANGE_SENSOR_MEASUREMENT_SENSOR_TYPE_SONAR           1 // 1
#define UAVCAN_EQUIPMENT_RANGE_SENSOR_MEASUREMENT_SENSOR_TYPE_LIDAR           2 // 2
#define UAVCAN_EQUIPMENT_RANGE_SENSOR_MEASUREMENT_SENSOR_TYPE_RADAR           3 // 3
#define UAVCAN_EQUIPMENT_RANGE_SENSOR_MEASUREMENT_READING_TYPE_UNDEFINED          0 // 0
#define UAVCAN_EQUIPMENT_RANGE_SENSOR_MEASUREMENT_READING_TYPE_VALID_RANGE          1 // 1
#define UAVCAN_EQUIPMENT_RANGE_SENSOR_MEASUREMENT_READING_TYPE_TOO_CLOSE          2 // 2
#define UAVCAN_EQUIPMENT_RANGE_SENSOR_MEASUREMENT_READING_TYPE_TOO_FAR          3 // 3

typedef struct
{
    // FieldTypes
    uavcan_Timestamp timestamp;                     //
    uint8_t    sensor_id;                     // bit len 8
    uavcan_CoarseOrientation beam_orientation_in_body_frame; //
    float      field_of_view;                 // float16 Saturate
    uint8_t    sensor_type;                   // bit len 5
    uint8_t    reading_type;                  // bit len 3
    float      range;                         // float16 Saturate

} uavcan_equipment_range_sensor_Measurement;

extern
uint32_t uavcan_equipment_range_sensor_Measurement_encode(uavcan_equipment_range_sensor_Measurement* source, void* msg_buf);

extern
int32_t uavcan_equipment_range_sensor_Measurement_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_equipment_range_sensor_Measurement* dest, uint8_t** dyn_arr_buf);

extern
uint32_t uavcan_equipment_range_sensor_Measurement_encode_internal(uavcan_equipment_range_sensor_Measurement* source, void* msg_buf, uint32_t offset, uint8_t root_item);

extern
int32_t uavcan_equipment_range_sensor_Measurement_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_equipment_range_sensor_Measurement* dest, uint8_t** dyn_arr_buf, int32_t offset);

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_EQUIPMENT_RANGE_SENSOR_MEASUREMENT