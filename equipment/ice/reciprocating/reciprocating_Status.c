/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: E:\DSDL\libcanard\dsdl_compiler\pyuavcan\uavcan\dsdl_files\uavcan\equipment\ice\reciprocating\1120.Status.uavcan
 */
#include "uavcan\equipment\ice\reciprocating\Status.h"
#include "canard.h"

#ifndef CANARD_INTERNAL_SATURATE
#define CANARD_INTERNAL_SATURATE(x, max) ( ((x) > max) ? max : ( (-(x) > max) ? (-max) : (x) ) );
#endif

#ifndef CANARD_INTERNAL_SATURATE_UNSIGNED
#define CANARD_INTERNAL_SATURATE_UNSIGNED(x, max) ( ((x) >= max) ? max : (x) );
#endif

#if defined(__GNUC__)
# define CANARD_MAYBE_UNUSED(x) x __attribute__((unused))
#else
# define CANARD_MAYBE_UNUSED(x) x
#endif

/**
  * @brief uavcan_equipment_ice_reciprocating_Status_encode_internal
  * @param source : pointer to source data struct
  * @param msg_buf: pointer to msg storage
  * @param offset: bit offset to msg storage
  * @param root_item: for detecting if TAO should be used
  * @retval returns new offset
  */
uint32_t uavcan_equipment_ice_reciprocating_Status_encode_internal(uavcan_equipment_ice_reciprocating_Status* source,
  void* msg_buf,
  uint32_t offset,
  uint8_t CANARD_MAYBE_UNUSED(root_item))
{
    uint32_t c = 0;
#ifndef CANARD_USE_FLOAT16_CAST
    uint16_t tmp_float = 0;
#else
    CANARD_USE_FLOAT16_CAST tmp_float = 0;
#endif

    source->state = CANARD_INTERNAL_SATURATE_UNSIGNED(source->state, 3)
    canardEncodeScalar(msg_buf, offset, 2, (void*)&source->state); // 3
    offset += 2;

    source->flags = CANARD_INTERNAL_SATURATE_UNSIGNED(source->flags, 1073741823)
    canardEncodeScalar(msg_buf, offset, 30, (void*)&source->flags); // 1073741823
    offset += 30;

    // Void16
    offset += 16;
    source->engine_load_percent = CANARD_INTERNAL_SATURATE_UNSIGNED(source->engine_load_percent, 127)
    canardEncodeScalar(msg_buf, offset, 7, (void*)&source->engine_load_percent); // 127
    offset += 7;

    source->engine_speed_rpm = CANARD_INTERNAL_SATURATE_UNSIGNED(source->engine_speed_rpm, 131071)
    canardEncodeScalar(msg_buf, offset, 17, (void*)&source->engine_speed_rpm); // 131071
    offset += 17;

    // float16 special handling
#ifndef CANARD_USE_FLOAT16_CAST
    tmp_float = canardConvertNativeFloatToFloat16(source->spark_dwell_time_ms);
#else
    tmp_float = (CANARD_USE_FLOAT16_CAST)source->spark_dwell_time_ms;
#endif
    canardEncodeScalar(msg_buf, offset, 16, (void*)&tmp_float); // 32767
    offset += 16;

    // float16 special handling
#ifndef CANARD_USE_FLOAT16_CAST
    tmp_float = canardConvertNativeFloatToFloat16(source->atmospheric_pressure_kpa);
#else
    tmp_float = (CANARD_USE_FLOAT16_CAST)source->atmospheric_pressure_kpa;
#endif
    canardEncodeScalar(msg_buf, offset, 16, (void*)&tmp_float); // 32767
    offset += 16;

    // float16 special handling
#ifndef CANARD_USE_FLOAT16_CAST
    tmp_float = canardConvertNativeFloatToFloat16(source->intake_manifold_pressure_kpa);
#else
    tmp_float = (CANARD_USE_FLOAT16_CAST)source->intake_manifold_pressure_kpa;
#endif
    canardEncodeScalar(msg_buf, offset, 16, (void*)&tmp_float); // 32767
    offset += 16;

    // float16 special handling
#ifndef CANARD_USE_FLOAT16_CAST
    tmp_float = canardConvertNativeFloatToFloat16(source->intake_manifold_temperature);
#else
    tmp_float = (CANARD_USE_FLOAT16_CAST)source->intake_manifold_temperature;
#endif
    canardEncodeScalar(msg_buf, offset, 16, (void*)&tmp_float); // 32767
    offset += 16;

    // float16 special handling
#ifndef CANARD_USE_FLOAT16_CAST
    tmp_float = canardConvertNativeFloatToFloat16(source->coolant_temperature);
#else
    tmp_float = (CANARD_USE_FLOAT16_CAST)source->coolant_temperature;
#endif
    canardEncodeScalar(msg_buf, offset, 16, (void*)&tmp_float); // 32767
    offset += 16;

    // float16 special handling
#ifndef CANARD_USE_FLOAT16_CAST
    tmp_float = canardConvertNativeFloatToFloat16(source->oil_pressure);
#else
    tmp_float = (CANARD_USE_FLOAT16_CAST)source->oil_pressure;
#endif
    canardEncodeScalar(msg_buf, offset, 16, (void*)&tmp_float); // 32767
    offset += 16;

    // float16 special handling
#ifndef CANARD_USE_FLOAT16_CAST
    tmp_float = canardConvertNativeFloatToFloat16(source->oil_temperature);
#else
    tmp_float = (CANARD_USE_FLOAT16_CAST)source->oil_temperature;
#endif
    canardEncodeScalar(msg_buf, offset, 16, (void*)&tmp_float); // 32767
    offset += 16;

    // float16 special handling
#ifndef CANARD_USE_FLOAT16_CAST
    tmp_float = canardConvertNativeFloatToFloat16(source->fuel_pressure);
#else
    tmp_float = (CANARD_USE_FLOAT16_CAST)source->fuel_pressure;
#endif
    canardEncodeScalar(msg_buf, offset, 16, (void*)&tmp_float); // 32767
    offset += 16;
    canardEncodeScalar(msg_buf, offset, 32, (void*)&source->fuel_consumption_rate_cm3pm); // 2147483647
    offset += 32;

    canardEncodeScalar(msg_buf, offset, 32, (void*)&source->estimated_consumed_fuel_volume_cm3); // 2147483647
    offset += 32;

    source->throttle_position_percent = CANARD_INTERNAL_SATURATE_UNSIGNED(source->throttle_position_percent, 127)
    canardEncodeScalar(msg_buf, offset, 7, (void*)&source->throttle_position_percent); // 127
    offset += 7;

    source->ecu_index = CANARD_INTERNAL_SATURATE_UNSIGNED(source->ecu_index, 63)
    canardEncodeScalar(msg_buf, offset, 6, (void*)&source->ecu_index); // 63
    offset += 6;

    source->spark_plug_usage = CANARD_INTERNAL_SATURATE_UNSIGNED(source->spark_plug_usage, 7)
    canardEncodeScalar(msg_buf, offset, 3, (void*)&source->spark_plug_usage); // 7
    offset += 3;

    // Dynamic Array (cylinder_status)
    if (! root_item)
    {
        // - Add array length
        canardEncodeScalar(msg_buf, offset, 5, (void*)&source->cylinder_status.len);
        offset += 5;
    }

    // - Add array items
    for (c = 0; c < source->cylinder_status.len; c++)
    {
        offset = uavcan_equipment_ice_reciprocating_CylinderStatus_encode_internal((void*)&source->cylinder_status.data[c], msg_buf, offset, 0);
    }

    return offset;
}

/**
  * @brief uavcan_equipment_ice_reciprocating_Status_encode
  * @param source : Pointer to source data struct
  * @param msg_buf: Pointer to msg storage
  * @retval returns message length as bytes
  */
uint32_t uavcan_equipment_ice_reciprocating_Status_encode(uavcan_equipment_ice_reciprocating_Status* source, void* msg_buf)
{
    uint32_t offset = 0;

    offset = uavcan_equipment_ice_reciprocating_Status_encode_internal(source, msg_buf, offset, 1);

    return (offset + 7 ) / 8;
}

/**
  * @brief uavcan_equipment_ice_reciprocating_Status_decode_internal
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_equipment_ice_reciprocating_Status dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @param offset: Call with 0, bit offset to msg storage
  * @retval new offset or ERROR value if < 0
  */
int32_t uavcan_equipment_ice_reciprocating_Status_decode_internal(
  const CanardRxTransfer* transfer,
  uint16_t CANARD_MAYBE_UNUSED(payload_len),
  uavcan_equipment_ice_reciprocating_Status* dest,
  uint8_t** CANARD_MAYBE_UNUSED(dyn_arr_buf),
  int32_t offset)
{
    int32_t ret = 0;
    uint32_t c = 0;
#ifndef CANARD_USE_FLOAT16_CAST
    uint16_t tmp_float = 0;
#else
    CANARD_USE_FLOAT16_CAST tmp_float = 0;
#endif

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 2, false, (void*)&dest->state);
    if (ret != 2)
    {
        goto uavcan_equipment_ice_reciprocating_Status_error_exit;
    }
    offset += 2;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 30, false, (void*)&dest->flags);
    if (ret != 30)
    {
        goto uavcan_equipment_ice_reciprocating_Status_error_exit;
    }
    offset += 30;

    // Void16
    offset += 16;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 7, false, (void*)&dest->engine_load_percent);
    if (ret != 7)
    {
        goto uavcan_equipment_ice_reciprocating_Status_error_exit;
    }
    offset += 7;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 17, false, (void*)&dest->engine_speed_rpm);
    if (ret != 17)
    {
        goto uavcan_equipment_ice_reciprocating_Status_error_exit;
    }
    offset += 17;

    // float16 special handling
    ret = canardDecodeScalar(transfer, (uint32_t)offset, 16, false, (void*)&tmp_float);

    if (ret != 16)
    {
        goto uavcan_equipment_ice_reciprocating_Status_error_exit;
    }
#ifndef CANARD_USE_FLOAT16_CAST
    dest->spark_dwell_time_ms = canardConvertFloat16ToNativeFloat(tmp_float);
#else
    dest->spark_dwell_time_ms = (float)tmp_float;
#endif
    offset += 16;

    // float16 special handling
    ret = canardDecodeScalar(transfer, (uint32_t)offset, 16, false, (void*)&tmp_float);

    if (ret != 16)
    {
        goto uavcan_equipment_ice_reciprocating_Status_error_exit;
    }
#ifndef CANARD_USE_FLOAT16_CAST
    dest->atmospheric_pressure_kpa = canardConvertFloat16ToNativeFloat(tmp_float);
#else
    dest->atmospheric_pressure_kpa = (float)tmp_float;
#endif
    offset += 16;

    // float16 special handling
    ret = canardDecodeScalar(transfer, (uint32_t)offset, 16, false, (void*)&tmp_float);

    if (ret != 16)
    {
        goto uavcan_equipment_ice_reciprocating_Status_error_exit;
    }
#ifndef CANARD_USE_FLOAT16_CAST
    dest->intake_manifold_pressure_kpa = canardConvertFloat16ToNativeFloat(tmp_float);
#else
    dest->intake_manifold_pressure_kpa = (float)tmp_float;
#endif
    offset += 16;

    // float16 special handling
    ret = canardDecodeScalar(transfer, (uint32_t)offset, 16, false, (void*)&tmp_float);

    if (ret != 16)
    {
        goto uavcan_equipment_ice_reciprocating_Status_error_exit;
    }
#ifndef CANARD_USE_FLOAT16_CAST
    dest->intake_manifold_temperature = canardConvertFloat16ToNativeFloat(tmp_float);
#else
    dest->intake_manifold_temperature = (float)tmp_float;
#endif
    offset += 16;

    // float16 special handling
    ret = canardDecodeScalar(transfer, (uint32_t)offset, 16, false, (void*)&tmp_float);

    if (ret != 16)
    {
        goto uavcan_equipment_ice_reciprocating_Status_error_exit;
    }
#ifndef CANARD_USE_FLOAT16_CAST
    dest->coolant_temperature = canardConvertFloat16ToNativeFloat(tmp_float);
#else
    dest->coolant_temperature = (float)tmp_float;
#endif
    offset += 16;

    // float16 special handling
    ret = canardDecodeScalar(transfer, (uint32_t)offset, 16, false, (void*)&tmp_float);

    if (ret != 16)
    {
        goto uavcan_equipment_ice_reciprocating_Status_error_exit;
    }
#ifndef CANARD_USE_FLOAT16_CAST
    dest->oil_pressure = canardConvertFloat16ToNativeFloat(tmp_float);
#else
    dest->oil_pressure = (float)tmp_float;
#endif
    offset += 16;

    // float16 special handling
    ret = canardDecodeScalar(transfer, (uint32_t)offset, 16, false, (void*)&tmp_float);

    if (ret != 16)
    {
        goto uavcan_equipment_ice_reciprocating_Status_error_exit;
    }
#ifndef CANARD_USE_FLOAT16_CAST
    dest->oil_temperature = canardConvertFloat16ToNativeFloat(tmp_float);
#else
    dest->oil_temperature = (float)tmp_float;
#endif
    offset += 16;

    // float16 special handling
    ret = canardDecodeScalar(transfer, (uint32_t)offset, 16, false, (void*)&tmp_float);

    if (ret != 16)
    {
        goto uavcan_equipment_ice_reciprocating_Status_error_exit;
    }
#ifndef CANARD_USE_FLOAT16_CAST
    dest->fuel_pressure = canardConvertFloat16ToNativeFloat(tmp_float);
#else
    dest->fuel_pressure = (float)tmp_float;
#endif
    offset += 16;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 32, false, (void*)&dest->fuel_consumption_rate_cm3pm);
    if (ret != 32)
    {
        goto uavcan_equipment_ice_reciprocating_Status_error_exit;
    }
    offset += 32;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 32, false, (void*)&dest->estimated_consumed_fuel_volume_cm3);
    if (ret != 32)
    {
        goto uavcan_equipment_ice_reciprocating_Status_error_exit;
    }
    offset += 32;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 7, false, (void*)&dest->throttle_position_percent);
    if (ret != 7)
    {
        goto uavcan_equipment_ice_reciprocating_Status_error_exit;
    }
    offset += 7;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 6, false, (void*)&dest->ecu_index);
    if (ret != 6)
    {
        goto uavcan_equipment_ice_reciprocating_Status_error_exit;
    }
    offset += 6;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 3, false, (void*)&dest->spark_plug_usage);
    if (ret != 3)
    {
        goto uavcan_equipment_ice_reciprocating_Status_error_exit;
    }
    offset += 3;

    // Dynamic Array (cylinder_status)
    //  - Last item in struct & Root item & (Array Size > 8 bit), tail array optimization
    if (payload_len)
    {
        //  - Calculate Array length from MSG length
        dest->cylinder_status.len = ((payload_len * 8) - offset ) / 80; // 80 bit array item size
    }
    else
    {
        // - Array length 5 bits
        ret = canardDecodeScalar(transfer,
                                 (uint32_t)offset,
                                 5,
                                 false,
                                 (void*)&dest->cylinder_status.len); // 0
        if (ret != 5)
        {
            goto uavcan_equipment_ice_reciprocating_Status_error_exit;
        }
        offset += 5;
    }

    //  - Get Array
    if (dyn_arr_buf)
    {
        dest->cylinder_status.data = (uavcan_equipment_ice_reciprocating_CylinderStatus*)*dyn_arr_buf;
    }

    for (c = 0; c < dest->cylinder_status.len; c++)
    {
        offset = uavcan_equipment_ice_reciprocating_CylinderStatus_decode_internal(transfer,
                                                0,
                                                (void*)&dest->cylinder_status.data[c],
                                                dyn_arr_buf,
                                                offset);
    }
    return offset;

uavcan_equipment_ice_reciprocating_Status_error_exit:
    if (ret < 0)
    {
        return ret;
    }
    else
    {
        return -CANARD_ERROR_INTERNAL;
    }
}

/**
  * @brief uavcan_equipment_ice_reciprocating_Status_decode
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_equipment_ice_reciprocating_Status dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_equipment_ice_reciprocating_Status_decode(const CanardRxTransfer* transfer,
  uint16_t payload_len,
  uavcan_equipment_ice_reciprocating_Status* dest,
  uint8_t** dyn_arr_buf)
{
    const int32_t offset = 0;
    int32_t ret = 0;

    // Clear the destination struct
    for (uint32_t c = 0; c < sizeof(uavcan_equipment_ice_reciprocating_Status); c++)
    {
        ((uint8_t*)dest)[c] = 0x00;
    }

    ret = uavcan_equipment_ice_reciprocating_Status_decode_internal(transfer, payload_len, dest, dyn_arr_buf, offset);

    return ret;
}
