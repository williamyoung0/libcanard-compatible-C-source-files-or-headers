/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: E:\DSDL\libcanard\dsdl_compiler\pyuavcan\uavcan\dsdl_files\uavcan\equipment\indication\1081.LightsCommand.uavcan
 */

#ifndef __UAVCAN_EQUIPMENT_INDICATION_LIGHTSCOMMAND
#define __UAVCAN_EQUIPMENT_INDICATION_LIGHTSCOMMAND

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include <uavcan\equipment\indication\SingleLightCommand.h>

/******************************* Source text **********************************
#
# Lights control command.
#

SingleLightCommand[<=20] commands
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.indication.LightsCommand
uavcan.equipment.indication.SingleLightCommand[<=20] commands
******************************************************************************/

#define UAVCAN_EQUIPMENT_INDICATION_LIGHTSCOMMAND_ID       1081
#define UAVCAN_EQUIPMENT_INDICATION_LIGHTSCOMMAND_NAME     "uavcan.equipment.indication.LightsCommand"
#define UAVCAN_EQUIPMENT_INDICATION_LIGHTSCOMMAND_SIGNATURE (0x2031D93C8BDD1EC4ULL)

#define UAVCAN_EQUIPMENT_INDICATION_LIGHTSCOMMAND_MAX_SIZE ((485 + 7)/8)

// Constants

#define UAVCAN_EQUIPMENT_INDICATION_LIGHTSCOMMAND_COMMANDS_MAX_LENGTH                    20

typedef struct
{
    // FieldTypes
    struct
    {
        uint8_t    len;                       // Dynamic array length
        uavcan_equipment_indication_SingleLightCommand* data;                      // Dynamic Array 24bit[20] max items
    } commands;

} uavcan_equipment_indication_LightsCommand;

extern
uint32_t uavcan_equipment_indication_LightsCommand_encode(uavcan_equipment_indication_LightsCommand* source, void* msg_buf);

extern
int32_t uavcan_equipment_indication_LightsCommand_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_equipment_indication_LightsCommand* dest, uint8_t** dyn_arr_buf);

extern
uint32_t uavcan_equipment_indication_LightsCommand_encode_internal(uavcan_equipment_indication_LightsCommand* source, void* msg_buf, uint32_t offset, uint8_t root_item);

extern
int32_t uavcan_equipment_indication_LightsCommand_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_equipment_indication_LightsCommand* dest, uint8_t** dyn_arr_buf, int32_t offset);

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_EQUIPMENT_INDICATION_LIGHTSCOMMAND