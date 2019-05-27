/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: E:\DSDL\libcanard\dsdl_compiler\pyuavcan\uavcan\dsdl_files\uavcan\protocol\DataTypeKind.uavcan
 */

#ifndef __UAVCAN_PROTOCOL_DATATYPEKIND
#define __UAVCAN_PROTOCOL_DATATYPEKIND

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************* Source text **********************************
#
# Data type kind (message or service).
#

uint8 SERVICE = 0
uint8 MESSAGE = 1
uint8 value
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.DataTypeKind
saturated uint8 value
******************************************************************************/

#define UAVCAN_PROTOCOL_DATATYPEKIND_NAME                  "uavcan.protocol.DataTypeKind"
#define UAVCAN_PROTOCOL_DATATYPEKIND_SIGNATURE             (0x9420A73E008E5930ULL)

#define UAVCAN_PROTOCOL_DATATYPEKIND_MAX_SIZE              ((8 + 7)/8)

// Constants
#define UAVCAN_PROTOCOL_DATATYPEKIND_SERVICE                                  0 // 0
#define UAVCAN_PROTOCOL_DATATYPEKIND_MESSAGE                                  1 // 1

typedef struct
{
    // FieldTypes
    uint8_t    value;                         // bit len 8

} uavcan_protocol_DataTypeKind;

extern
uint32_t uavcan_protocol_DataTypeKind_encode(uavcan_protocol_DataTypeKind* source, void* msg_buf);

extern
int32_t uavcan_protocol_DataTypeKind_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_DataTypeKind* dest, uint8_t** dyn_arr_buf);

extern
uint32_t uavcan_protocol_DataTypeKind_encode_internal(uavcan_protocol_DataTypeKind* source, void* msg_buf, uint32_t offset, uint8_t root_item);

extern
int32_t uavcan_protocol_DataTypeKind_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_DataTypeKind* dest, uint8_t** dyn_arr_buf, int32_t offset);

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_PROTOCOL_DATATYPEKIND