/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: E:\DSDL\libcanard\dsdl_compiler\pyuavcan\uavcan\dsdl_files\uavcan\equipment\air_data\1028.StaticPressure.uavcan
 */

#ifndef __UAVCAN_EQUIPMENT_AIR_DATA_STATICPRESSURE
#define __UAVCAN_EQUIPMENT_AIR_DATA_STATICPRESSURE

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************* Source text **********************************
#
# Static pressure.
#

float32 static_pressure                 # Pascal
float16 static_pressure_variance        # Pascal^2
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.air_data.StaticPressure
saturated float32 static_pressure
saturated float16 static_pressure_variance
******************************************************************************/

#define UAVCAN_EQUIPMENT_AIR_DATA_STATICPRESSURE_ID        1028
#define UAVCAN_EQUIPMENT_AIR_DATA_STATICPRESSURE_NAME      "uavcan.equipment.air_data.StaticPressure"
#define UAVCAN_EQUIPMENT_AIR_DATA_STATICPRESSURE_SIGNATURE (0xCDC7C43412BDC89AULL)

#define UAVCAN_EQUIPMENT_AIR_DATA_STATICPRESSURE_MAX_SIZE  ((48 + 7)/8)

// Constants

typedef struct
{
    // FieldTypes
    float      static_pressure;               // float32 Saturate
    float      static_pressure_variance;      // float16 Saturate

} uavcan_equipment_air_data_StaticPressure;

extern
uint32_t uavcan_equipment_air_data_StaticPressure_encode(uavcan_equipment_air_data_StaticPressure* source, void* msg_buf);

extern
int32_t uavcan_equipment_air_data_StaticPressure_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_equipment_air_data_StaticPressure* dest, uint8_t** dyn_arr_buf);

extern
uint32_t uavcan_equipment_air_data_StaticPressure_encode_internal(uavcan_equipment_air_data_StaticPressure* source, void* msg_buf, uint32_t offset, uint8_t root_item);

extern
int32_t uavcan_equipment_air_data_StaticPressure_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_equipment_air_data_StaticPressure* dest, uint8_t** dyn_arr_buf, int32_t offset);

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_EQUIPMENT_AIR_DATA_STATICPRESSURE