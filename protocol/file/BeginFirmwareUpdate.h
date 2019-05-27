/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: E:\DSDL\libcanard\dsdl_compiler\pyuavcan\uavcan\dsdl_files\uavcan\protocol\file\40.BeginFirmwareUpdate.uavcan
 */

#ifndef __UAVCAN_PROTOCOL_FILE_BEGINFIRMWAREUPDATE
#define __UAVCAN_PROTOCOL_FILE_BEGINFIRMWAREUPDATE

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include <uavcan\protocol\file\Path.h>

/******************************* Source text **********************************
#
# This service initiates firmware update on a remote node.
#
# The node that is being updated (slave) will retrieve the firmware image file 'image_file_remote_path' from the node
# 'source_node_id' using the file read service, then it will update the firmware and reboot.
#
# The slave can explicitly reject this request if it is not possible to update the firmware at the moment
# (e.g. if the node is busy).
#
# If the slave node accepts this request, the initiator will get a response immediately, before the update process
# actually begins.
#
# While the firmware is being updated, the slave should set its mode (uavcan.protocol.NodeStatus.mode) to
# MODE_SOFTWARE_UPDATE.
#

uint8 source_node_id         # If this field is zero, the caller's Node ID will be used instead.
Path image_file_remote_path

---

#
# Other error codes may be added in the future.
#
uint8 ERROR_OK               = 0
uint8 ERROR_INVALID_MODE     = 1    # Cannot perform the update in the current operating mode or state.
uint8 ERROR_IN_PROGRESS      = 2    # Firmware update is already in progess, and the slave doesn't want to restart.
uint8 ERROR_UNKNOWN          = 255
uint8 error

uint8[<128] optional_error_message   # Detailed description of the error.
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.file.BeginFirmwareUpdate
saturated uint8 source_node_id
uavcan.protocol.file.Path image_file_remote_path
---
saturated uint8 error
saturated uint8[<=127] optional_error_message
******************************************************************************/

#define UAVCAN_PROTOCOL_FILE_BEGINFIRMWAREUPDATE_ID        40
#define UAVCAN_PROTOCOL_FILE_BEGINFIRMWAREUPDATE_NAME      "uavcan.protocol.file.BeginFirmwareUpdate"
#define UAVCAN_PROTOCOL_FILE_BEGINFIRMWAREUPDATE_SIGNATURE (0xB7D725DF72724126ULL)

#define UAVCAN_PROTOCOL_FILE_BEGINFIRMWAREUPDATE_REQUEST_MAX_SIZE ((1616 + 7)/8)

// Constants

typedef struct
{
    // FieldTypes
    uint8_t    source_node_id;                // bit len 8
    uavcan_protocol_file_Path image_file_remote_path;        //

} uavcan_protocol_file_BeginFirmwareUpdateRequest;

extern
uint32_t uavcan_protocol_file_BeginFirmwareUpdateRequest_encode(uavcan_protocol_file_BeginFirmwareUpdateRequest* source, void* msg_buf);

extern
int32_t uavcan_protocol_file_BeginFirmwareUpdateRequest_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_file_BeginFirmwareUpdateRequest* dest, uint8_t** dyn_arr_buf);

extern
uint32_t uavcan_protocol_file_BeginFirmwareUpdateRequest_encode_internal(uavcan_protocol_file_BeginFirmwareUpdateRequest* source, void* msg_buf, uint32_t offset, uint8_t root_item);

extern
int32_t uavcan_protocol_file_BeginFirmwareUpdateRequest_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_file_BeginFirmwareUpdateRequest* dest, uint8_t** dyn_arr_buf, int32_t offset);

#define UAVCAN_PROTOCOL_FILE_BEGINFIRMWAREUPDATE_RESPONSE_MAX_SIZE ((1031 + 7)/8)

// Constants
#define UAVCAN_PROTOCOL_FILE_BEGINFIRMWAREUPDATE_RESPONSE_ERROR_OK            0 // 0
#define UAVCAN_PROTOCOL_FILE_BEGINFIRMWAREUPDATE_RESPONSE_ERROR_INVALID_MODE          1 // 1
#define UAVCAN_PROTOCOL_FILE_BEGINFIRMWAREUPDATE_RESPONSE_ERROR_IN_PROGRESS          2 // 2
#define UAVCAN_PROTOCOL_FILE_BEGINFIRMWAREUPDATE_RESPONSE_ERROR_UNKNOWN        255 // 255

#define UAVCAN_PROTOCOL_FILE_BEGINFIRMWAREUPDATE_RESPONSE_OPTIONAL_ERROR_MESSAGE_MAX_LENGTH 127

typedef struct
{
    // FieldTypes
    uint8_t    error;                         // bit len 8
    struct
    {
        uint8_t    len;                       // Dynamic array length
        uint8_t*   data;                      // Dynamic Array 8bit[127] max items
    } optional_error_message;

} uavcan_protocol_file_BeginFirmwareUpdateResponse;

extern
uint32_t uavcan_protocol_file_BeginFirmwareUpdateResponse_encode(uavcan_protocol_file_BeginFirmwareUpdateResponse* source, void* msg_buf);

extern
int32_t uavcan_protocol_file_BeginFirmwareUpdateResponse_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_file_BeginFirmwareUpdateResponse* dest, uint8_t** dyn_arr_buf);

extern
uint32_t uavcan_protocol_file_BeginFirmwareUpdateResponse_encode_internal(uavcan_protocol_file_BeginFirmwareUpdateResponse* source, void* msg_buf, uint32_t offset, uint8_t root_item);

extern
int32_t uavcan_protocol_file_BeginFirmwareUpdateResponse_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_file_BeginFirmwareUpdateResponse* dest, uint8_t** dyn_arr_buf, int32_t offset);

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_PROTOCOL_FILE_BEGINFIRMWAREUPDATE