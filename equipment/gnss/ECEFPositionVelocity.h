/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: E:\DSDL\libcanard\dsdl_compiler\pyuavcan\uavcan\dsdl_files\uavcan\equipment\gnss\ECEFPositionVelocity.uavcan
 */

#ifndef __UAVCAN_EQUIPMENT_GNSS_ECEFPOSITIONVELOCITY
#define __UAVCAN_EQUIPMENT_GNSS_ECEFPOSITIONVELOCITY

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************* Source text **********************************
#
# Nested type.
# GNSS ECEF high resolution position and velocity.
#
# ECEF is an acronym for Earth-Centered-Earth-Fixed, which is a cartesian
# coordinate system which rotates with the earth. The origin (0,0,0) is
# located at the center of the earth. The x-axis is a vector pointing from
# the origin with positive direction towards 0 degrees latitude and
# longitude (equator, at the prime meridian). The z-axis is a vector
# pointing from the origin towards the north-pole. The y-axis completes a
# right-handed coordinate system.
#

float32[3] velocity_xyz            # XYZ velocity in m/s

int36[3] position_xyz_mm           # XYZ-axis coordinates in mm

void6                              # Aligns the following array at byte boundary

float16[<=36] covariance           # Position and velocity covariance in the ECEF frame. Units are m^2 for position,
                                   # (m/s)^2 for velocity, and m^2/s for position/velocity.
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.gnss.ECEFPositionVelocity
saturated float32[3] velocity_xyz
saturated int36[3] position_xyz_mm
void6
saturated float16[<=36] covariance
******************************************************************************/

#define UAVCAN_EQUIPMENT_GNSS_ECEFPOSITIONVELOCITY_NAME    "uavcan.equipment.gnss.ECEFPositionVelocity"
#define UAVCAN_EQUIPMENT_GNSS_ECEFPOSITIONVELOCITY_SIGNATURE (0x24A5DA4ABEE3A248ULL)

#define UAVCAN_EQUIPMENT_GNSS_ECEFPOSITIONVELOCITY_MAX_SIZE ((792 + 7)/8)

// Constants

#define UAVCAN_EQUIPMENT_GNSS_ECEFPOSITIONVELOCITY_VELOCITY_XYZ_LENGTH                   3
#define UAVCAN_EQUIPMENT_GNSS_ECEFPOSITIONVELOCITY_POSITION_XYZ_MM_LENGTH                3
#define UAVCAN_EQUIPMENT_GNSS_ECEFPOSITIONVELOCITY_COVARIANCE_MAX_LENGTH                 36

typedef struct
{
    // FieldTypes
    float      velocity_xyz[3];               // Static Array 32bit[3] max items
    int64_t    position_xyz_mm[3];            // Static Array 36bit[3] max items
    // void6
    struct
    {
        uint8_t    len;                       // Dynamic array length
        float*     data;                      // Dynamic Array 16bit[36] max items
    } covariance;

} uavcan_equipment_gnss_ECEFPositionVelocity;

extern
uint32_t uavcan_equipment_gnss_ECEFPositionVelocity_encode(uavcan_equipment_gnss_ECEFPositionVelocity* source, void* msg_buf);

extern
int32_t uavcan_equipment_gnss_ECEFPositionVelocity_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_equipment_gnss_ECEFPositionVelocity* dest, uint8_t** dyn_arr_buf);

extern
uint32_t uavcan_equipment_gnss_ECEFPositionVelocity_encode_internal(uavcan_equipment_gnss_ECEFPositionVelocity* source, void* msg_buf, uint32_t offset, uint8_t root_item);

extern
int32_t uavcan_equipment_gnss_ECEFPositionVelocity_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_equipment_gnss_ECEFPositionVelocity* dest, uint8_t** dyn_arr_buf, int32_t offset);

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_EQUIPMENT_GNSS_ECEFPOSITIONVELOCITY