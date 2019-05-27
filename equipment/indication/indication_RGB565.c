/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: E:\DSDL\libcanard\dsdl_compiler\pyuavcan\uavcan\dsdl_files\uavcan\equipment\indication\RGB565.uavcan
 */
#include "uavcan\equipment\indication\RGB565.h"
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
  * @brief uavcan_equipment_indication_RGB565_encode_internal
  * @param source : pointer to source data struct
  * @param msg_buf: pointer to msg storage
  * @param offset: bit offset to msg storage
  * @param root_item: for detecting if TAO should be used
  * @retval returns new offset
  */
uint32_t uavcan_equipment_indication_RGB565_encode_internal(uavcan_equipment_indication_RGB565* source,
  void* msg_buf,
  uint32_t offset,
  uint8_t CANARD_MAYBE_UNUSED(root_item))
{
    source->red = CANARD_INTERNAL_SATURATE_UNSIGNED(source->red, 31)
    canardEncodeScalar(msg_buf, offset, 5, (void*)&source->red); // 31
    offset += 5;

    source->green = CANARD_INTERNAL_SATURATE_UNSIGNED(source->green, 63)
    canardEncodeScalar(msg_buf, offset, 6, (void*)&source->green); // 63
    offset += 6;

    source->blue = CANARD_INTERNAL_SATURATE_UNSIGNED(source->blue, 31)
    canardEncodeScalar(msg_buf, offset, 5, (void*)&source->blue); // 31
    offset += 5;

    return offset;
}

/**
  * @brief uavcan_equipment_indication_RGB565_encode
  * @param source : Pointer to source data struct
  * @param msg_buf: Pointer to msg storage
  * @retval returns message length as bytes
  */
uint32_t uavcan_equipment_indication_RGB565_encode(uavcan_equipment_indication_RGB565* source, void* msg_buf)
{
    uint32_t offset = 0;

    offset = uavcan_equipment_indication_RGB565_encode_internal(source, msg_buf, offset, 1);

    return (offset + 7 ) / 8;
}

/**
  * @brief uavcan_equipment_indication_RGB565_decode_internal
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_equipment_indication_RGB565 dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @param offset: Call with 0, bit offset to msg storage
  * @retval new offset or ERROR value if < 0
  */
int32_t uavcan_equipment_indication_RGB565_decode_internal(
  const CanardRxTransfer* transfer,
  uint16_t CANARD_MAYBE_UNUSED(payload_len),
  uavcan_equipment_indication_RGB565* dest,
  uint8_t** CANARD_MAYBE_UNUSED(dyn_arr_buf),
  int32_t offset)
{
    int32_t ret = 0;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 5, false, (void*)&dest->red);
    if (ret != 5)
    {
        goto uavcan_equipment_indication_RGB565_error_exit;
    }
    offset += 5;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 6, false, (void*)&dest->green);
    if (ret != 6)
    {
        goto uavcan_equipment_indication_RGB565_error_exit;
    }
    offset += 6;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 5, false, (void*)&dest->blue);
    if (ret != 5)
    {
        goto uavcan_equipment_indication_RGB565_error_exit;
    }
    offset += 5;
    return offset;

uavcan_equipment_indication_RGB565_error_exit:
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
  * @brief uavcan_equipment_indication_RGB565_decode
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_equipment_indication_RGB565 dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_equipment_indication_RGB565_decode(const CanardRxTransfer* transfer,
  uint16_t payload_len,
  uavcan_equipment_indication_RGB565* dest,
  uint8_t** dyn_arr_buf)
{
    const int32_t offset = 0;
    int32_t ret = 0;

    // Clear the destination struct
    for (uint32_t c = 0; c < sizeof(uavcan_equipment_indication_RGB565); c++)
    {
        ((uint8_t*)dest)[c] = 0x00;
    }

    ret = uavcan_equipment_indication_RGB565_decode_internal(transfer, payload_len, dest, dyn_arr_buf, offset);

    return ret;
}
