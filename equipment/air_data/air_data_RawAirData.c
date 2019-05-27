/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: E:\DSDL\libcanard\dsdl_compiler\pyuavcan\uavcan\dsdl_files\uavcan\equipment\air_data\1027.RawAirData.uavcan
 */
#include "uavcan\equipment\air_data\RawAirData.h"
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
  * @brief uavcan_equipment_air_data_RawAirData_encode_internal
  * @param source : pointer to source data struct
  * @param msg_buf: pointer to msg storage
  * @param offset: bit offset to msg storage
  * @param root_item: for detecting if TAO should be used
  * @retval returns new offset
  */
uint32_t uavcan_equipment_air_data_RawAirData_encode_internal(uavcan_equipment_air_data_RawAirData* source,
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

    canardEncodeScalar(msg_buf, offset, 8, (void*)&source->flags); // 255
    offset += 8;

    canardEncodeScalar(msg_buf, offset, 32, (void*)&source->static_pressure); // 2147483647
    offset += 32;

    canardEncodeScalar(msg_buf, offset, 32, (void*)&source->differential_pressure); // 2147483647
    offset += 32;

    // float16 special handling
#ifndef CANARD_USE_FLOAT16_CAST
    tmp_float = canardConvertNativeFloatToFloat16(source->static_pressure_sensor_temperature);
#else
    tmp_float = (CANARD_USE_FLOAT16_CAST)source->static_pressure_sensor_temperature;
#endif
    canardEncodeScalar(msg_buf, offset, 16, (void*)&tmp_float); // 32767
    offset += 16;

    // float16 special handling
#ifndef CANARD_USE_FLOAT16_CAST
    tmp_float = canardConvertNativeFloatToFloat16(source->differential_pressure_sensor_temperature);
#else
    tmp_float = (CANARD_USE_FLOAT16_CAST)source->differential_pressure_sensor_temperature;
#endif
    canardEncodeScalar(msg_buf, offset, 16, (void*)&tmp_float); // 32767
    offset += 16;

    // float16 special handling
#ifndef CANARD_USE_FLOAT16_CAST
    tmp_float = canardConvertNativeFloatToFloat16(source->static_air_temperature);
#else
    tmp_float = (CANARD_USE_FLOAT16_CAST)source->static_air_temperature;
#endif
    canardEncodeScalar(msg_buf, offset, 16, (void*)&tmp_float); // 32767
    offset += 16;

    // float16 special handling
#ifndef CANARD_USE_FLOAT16_CAST
    tmp_float = canardConvertNativeFloatToFloat16(source->pitot_temperature);
#else
    tmp_float = (CANARD_USE_FLOAT16_CAST)source->pitot_temperature;
#endif
    canardEncodeScalar(msg_buf, offset, 16, (void*)&tmp_float); // 32767
    offset += 16;

    // Dynamic Array (covariance)
    if (! root_item)
    {
        // - Add array length
        canardEncodeScalar(msg_buf, offset, 5, (void*)&source->covariance.len);
        offset += 5;
    }

    // - Add array items
    for (c = 0; c < source->covariance.len; c++)
    {
        canardEncodeScalar(msg_buf,
                           offset,
                           16,
                           (void*)(source->covariance.data + c));// 32767
        offset += 16;
    }

    return offset;
}

/**
  * @brief uavcan_equipment_air_data_RawAirData_encode
  * @param source : Pointer to source data struct
  * @param msg_buf: Pointer to msg storage
  * @retval returns message length as bytes
  */
uint32_t uavcan_equipment_air_data_RawAirData_encode(uavcan_equipment_air_data_RawAirData* source, void* msg_buf)
{
    uint32_t offset = 0;

    offset = uavcan_equipment_air_data_RawAirData_encode_internal(source, msg_buf, offset, 1);

    return (offset + 7 ) / 8;
}

/**
  * @brief uavcan_equipment_air_data_RawAirData_decode_internal
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_equipment_air_data_RawAirData dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @param offset: Call with 0, bit offset to msg storage
  * @retval new offset or ERROR value if < 0
  */
int32_t uavcan_equipment_air_data_RawAirData_decode_internal(
  const CanardRxTransfer* transfer,
  uint16_t CANARD_MAYBE_UNUSED(payload_len),
  uavcan_equipment_air_data_RawAirData* dest,
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

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 8, false, (void*)&dest->flags);
    if (ret != 8)
    {
        goto uavcan_equipment_air_data_RawAirData_error_exit;
    }
    offset += 8;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 32, false, (void*)&dest->static_pressure);
    if (ret != 32)
    {
        goto uavcan_equipment_air_data_RawAirData_error_exit;
    }
    offset += 32;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 32, false, (void*)&dest->differential_pressure);
    if (ret != 32)
    {
        goto uavcan_equipment_air_data_RawAirData_error_exit;
    }
    offset += 32;

    // float16 special handling
    ret = canardDecodeScalar(transfer, (uint32_t)offset, 16, false, (void*)&tmp_float);

    if (ret != 16)
    {
        goto uavcan_equipment_air_data_RawAirData_error_exit;
    }
#ifndef CANARD_USE_FLOAT16_CAST
    dest->static_pressure_sensor_temperature = canardConvertFloat16ToNativeFloat(tmp_float);
#else
    dest->static_pressure_sensor_temperature = (float)tmp_float;
#endif
    offset += 16;

    // float16 special handling
    ret = canardDecodeScalar(transfer, (uint32_t)offset, 16, false, (void*)&tmp_float);

    if (ret != 16)
    {
        goto uavcan_equipment_air_data_RawAirData_error_exit;
    }
#ifndef CANARD_USE_FLOAT16_CAST
    dest->differential_pressure_sensor_temperature = canardConvertFloat16ToNativeFloat(tmp_float);
#else
    dest->differential_pressure_sensor_temperature = (float)tmp_float;
#endif
    offset += 16;

    // float16 special handling
    ret = canardDecodeScalar(transfer, (uint32_t)offset, 16, false, (void*)&tmp_float);

    if (ret != 16)
    {
        goto uavcan_equipment_air_data_RawAirData_error_exit;
    }
#ifndef CANARD_USE_FLOAT16_CAST
    dest->static_air_temperature = canardConvertFloat16ToNativeFloat(tmp_float);
#else
    dest->static_air_temperature = (float)tmp_float;
#endif
    offset += 16;

    // float16 special handling
    ret = canardDecodeScalar(transfer, (uint32_t)offset, 16, false, (void*)&tmp_float);

    if (ret != 16)
    {
        goto uavcan_equipment_air_data_RawAirData_error_exit;
    }
#ifndef CANARD_USE_FLOAT16_CAST
    dest->pitot_temperature = canardConvertFloat16ToNativeFloat(tmp_float);
#else
    dest->pitot_temperature = (float)tmp_float;
#endif
    offset += 16;

    // Dynamic Array (covariance)
    //  - Last item in struct & Root item & (Array Size > 8 bit), tail array optimization
    if (payload_len)
    {
        //  - Calculate Array length from MSG length
        dest->covariance.len = ((payload_len * 8) - offset ) / 16; // 16 bit array item size
    }
    else
    {
        // - Array length 5 bits
        ret = canardDecodeScalar(transfer,
                                 (uint32_t)offset,
                                 5,
                                 false,
                                 (void*)&dest->covariance.len); // 32767
        if (ret != 5)
        {
            goto uavcan_equipment_air_data_RawAirData_error_exit;
        }
        offset += 5;
    }

    //  - Get Array
    if (dyn_arr_buf)
    {
        dest->covariance.data = (float*)*dyn_arr_buf;
    }

    for (c = 0; c < dest->covariance.len; c++)
    {
        if (dyn_arr_buf)
        {
            ret = canardDecodeScalar(transfer,
                                     (uint32_t)offset,
                                     16,
                                     false,
                                     (void*)*dyn_arr_buf); // 32767
            if (ret != 16)
            {
                goto uavcan_equipment_air_data_RawAirData_error_exit;
            }
            *dyn_arr_buf = (uint8_t*)(((float*)*dyn_arr_buf) + 1);
        }
        offset += 16;
    }
    return offset;

uavcan_equipment_air_data_RawAirData_error_exit:
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
  * @brief uavcan_equipment_air_data_RawAirData_decode
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_equipment_air_data_RawAirData dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_equipment_air_data_RawAirData_decode(const CanardRxTransfer* transfer,
  uint16_t payload_len,
  uavcan_equipment_air_data_RawAirData* dest,
  uint8_t** dyn_arr_buf)
{
    const int32_t offset = 0;
    int32_t ret = 0;

    // Clear the destination struct
    for (uint32_t c = 0; c < sizeof(uavcan_equipment_air_data_RawAirData); c++)
    {
        ((uint8_t*)dest)[c] = 0x00;
    }

    ret = uavcan_equipment_air_data_RawAirData_decode_internal(transfer, payload_len, dest, dyn_arr_buf, offset);

    return ret;
}