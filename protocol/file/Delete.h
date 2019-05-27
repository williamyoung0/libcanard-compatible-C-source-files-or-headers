/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: E:\DSDL\libcanard\dsdl_compiler\pyuavcan\uavcan\dsdl_files\uavcan\protocol\file\47.Delete.uavcan
 */

#ifndef __UAVCAN_PROTOCOL_FILE_DELETE
#define __UAVCAN_PROTOCOL_FILE_DELETE

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include <uavcan\protocol\file\Error.h>
#include <uavcan\protocol\file\Path.h>

/******************************* Source text **********************************
#
# Delete remote file system entry.
# If the remote entry is a directory, all nested entries will be removed too.
#

Path path

---

Error error
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.file.Delete
uavcan.protocol.file.Path path
---
uavcan.protocol.file.Error error
******************************************************************************/

#define UAVCAN_PROTOCOL_FILE_DELETE_ID                     47
#define UAVCAN_PROTOCOL_FILE_DELETE_NAME                   "uavcan.protocol.file.Delete"
#define UAVCAN_PROTOCOL_FILE_DELETE_SIGNATURE              (0x78648C99170B47AAULL)

#define UAVCAN_PROTOCOL_FILE_DELETE_REQUEST_MAX_SIZE       ((1608 + 7)/8)

// Constants

typedef struct
{
    // FieldTypes
    uavcan_protocol_file_Path path;                          //

} uavcan_protocol_file_DeleteRequest;

extern
uint32_t uavcan_protocol_file_DeleteRequest_encode(uavcan_protocol_file_DeleteRequest* source, void* msg_buf);

extern
int32_t uavcan_protocol_file_DeleteRequest_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_file_DeleteRequest* dest, uint8_t** dyn_arr_buf);

extern
uint32_t uavcan_protocol_file_DeleteRequest_encode_internal(uavcan_protocol_file_DeleteRequest* source, void* msg_buf, uint32_t offset, uint8_t root_item);

extern
int32_t uavcan_protocol_file_DeleteRequest_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_file_DeleteRequest* dest, uint8_t** dyn_arr_buf, int32_t offset);

#define UAVCAN_PROTOCOL_FILE_DELETE_RESPONSE_MAX_SIZE      ((16 + 7)/8)

// Constants

typedef struct
{
    // FieldTypes
    uavcan_protocol_file_Error error;                         //

} uavcan_protocol_file_DeleteResponse;

extern
uint32_t uavcan_protocol_file_DeleteResponse_encode(uavcan_protocol_file_DeleteResponse* source, void* msg_buf);

extern
int32_t uavcan_protocol_file_DeleteResponse_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_file_DeleteResponse* dest, uint8_t** dyn_arr_buf);

extern
uint32_t uavcan_protocol_file_DeleteResponse_encode_internal(uavcan_protocol_file_DeleteResponse* source, void* msg_buf, uint32_t offset, uint8_t root_item);

extern
int32_t uavcan_protocol_file_DeleteResponse_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_file_DeleteResponse* dest, uint8_t** dyn_arr_buf, int32_t offset);

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_PROTOCOL_FILE_DELETE