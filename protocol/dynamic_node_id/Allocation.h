/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: E:\DSDL\libcanard\dsdl_compiler\pyuavcan\uavcan\dsdl_files\uavcan\protocol\dynamic_node_id\1.Allocation.uavcan
 */

#ifndef __UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_ALLOCATION
#define __UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_ALLOCATION

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************* Source text **********************************
#
# This message is used for dynamic Node ID allocation.
#
# When a node needs to request a node ID dynamically, it will transmit an anonymous message transfer of this type.
# In order to reduce probability of CAN ID collisions when multiple nodes are publishing this request, the CAN ID
# field of anonymous message transfer includes a Discriminator, which is a special field that has to be filled with
# random data by the transmitting node. Since Discriminator collisions are likely to happen (probability approx.
# 0.006%), nodes that are requesting dynamic allocations need to be able to handle them correctly. Hence, a collision
# resolution protocol is defined (alike CSMA/CD). The collision resolution protocol is based on two randomized
# transmission intervals:
#
# - Request period - Trequest.
# - Followup delay - Tfollowup.
#
# Recommended randomization ranges for these intervals are documented in the costants of this message type (see below).
# Random intervals must be chosen anew per transmission, whereas the Discriminator value is allowed to stay constant
# per node.
#
# In the below description the following terms are used:
# - Allocator - the node that serves allocation requests.
# - Allocatee - the node that requests an allocation from the Allocator.
#
# The response timeout is not explicitly defined for this protocol, as the Allocatee will request the allocation
# Trequest units of time later again, unless the allocation has been granted. Despite this, the implementation can
# consider the value of FOLLOWUP_TIMEOUT_MS as an allocation timeout, if necessary.
#
# On the allocatee's side the protocol is defined through the following set of rules:
#
# Rule A. On initialization:
# 1. The allocatee subscribes to this message.
# 2. The allocatee starts the Request Timer with a random interval of Trequest.
#
# Rule B. On expiration of Request Timer:
# 1. Request Timer restarts with a random interval of Trequest.
# 2. The allocatee broadcasts a first-stage Allocation request message, where the fields are assigned following values:
#    node_id                 - preferred node ID, or zero if the allocatee doesn't have any preference
#    first_part_of_unique_id - true
#    unique_id               - first MAX_LENGTH_OF_UNIQUE_ID_IN_REQUEST bytes of unique ID
#
# Rule C. On any Allocation message, even if other rules also match:
# 1. Request Timer restarts with a random interval of Trequest.
#
# Rule D. On an Allocation message WHERE (source node ID is non-anonymous) AND (allocatee's unique ID starts with the
# bytes available in the field unique_id) AND (unique_id is less than 16 bytes long):
# 1. The allocatee waits for Tfollowup units of time, while listening for other Allocation messages. If an Allocation
#    message is received during this time, the execution of this rule will be terminated. Also see rule C.
# 2. The allocatee broadcasts a second-stage Allocation request message, where the fields are assigned following values:
#    node_id                 - same value as in the first-stage
#    first_part_of_unique_id - false
#    unique_id               - at most MAX_LENGTH_OF_UNIQUE_ID_IN_REQUEST bytes of local unique ID with an offset
#                              equal to number of bytes in the received unique ID
#
# Rule E. On an Allocation message WHERE (source node ID is non-anonymous) AND (unique_id fully matches allocatee's
# unique ID) AND (node_id in the received message is not zero):
# 1. Request Timer stops.
# 2. The allocatee initializes its node_id with the received value.
# 3. The allocatee terminates subscription to Allocation messages.
# 4. Exit.
#

#
# Recommended randomization range for request period.
#
# These definitions have an advisory status; it is OK to pick higher values for both bounds, as it won't affect
# protocol compatibility. In fact, it is advised to pick higher values if the target application is not concerned
# about the time it will spend on completing the dynamic node ID allocation procedure, as it will reduce
# interference with other nodes, possibly of higher importance.
#
# The lower bound shall not be lower than FOLLOWUP_TIMEOUT_MS, otherwise the request may conflict with a followup.
#
uint16 MAX_REQUEST_PERIOD_MS = 1000     # It is OK to exceed this value
uint16 MIN_REQUEST_PERIOD_MS = 600      # It is OK to exceed this value

#
# Recommended randomization range for followup delay.
# The upper bound shall not exceed FOLLOWUP_TIMEOUT_MS, because the allocator will reset the state on its end.
#
uint16 MAX_FOLLOWUP_DELAY_MS = 400
uint16 MIN_FOLLOWUP_DELAY_MS = 0        # Defined only for regularity; will always be zero.

#
# Allocator will reset its state if there was no follow-up request in this amount of time.
#
uint16 FOLLOWUP_TIMEOUT_MS = 500

#
# Any request message can accommodate no more than this number of bytes of unique ID.
# This limitation is needed to ensure that all request transfers are single-frame.
# This limitation does not apply to CAN FD transport.
#
uint8 MAX_LENGTH_OF_UNIQUE_ID_IN_REQUEST = 6

#
# When requesting an allocation, set the field 'node_id' to this value if there's no preference.
#
uint7 ANY_NODE_ID = 0

#
# If transfer is anonymous, this is the preferred ID.
# If transfer is non-anonymous, this is allocated ID.
#
# If the allocatee does not have any preference, this value must be set to zero. In this case, the allocator
# must choose the highest unused node ID value for this allocation (except 126 and 127, that are reserved for
# network maintenance tools). E.g., if the allocation table is empty and the node has requested an allocation
# without any preference, the allocator will grant the node ID 125.
#
# If the preferred node ID is not zero, the allocator will traverse the allocation table starting from the
# prefferred node ID upward, untill a free node ID is found. If a free node ID could not be found, the
# allocator will restart the search from the preferred node ID downward, until a free node ID is found.
#
# In pseudocode:
#   int findFreeNodeID(const int preferred)
#   {
#       // Search up
#       int candidate = (preferred > 0) ? preferred : 125;
#       while (candidate <= 125)
#       {
#           if (!isOccupied(candidate))
#               return candidate;
#           candidate++;
#       }
#       // Search down
#       candidate = (preferred > 0) ? preferred : 125;
#       while (candidate > 0)
#       {
#           if (!isOccupied(candidate))
#               return candidate;
#           candidate--;
#       }
#       // Not found
#       return -1;
#   }
#
uint7 node_id

#
# If transfer is anonymous, this field indicates first-stage request.
# If transfer is non-anonymous, this field should be assigned zero and ignored.
#
bool first_part_of_unique_id

#
# If transfer is anonymous, this array must not contain more than MAX_LENGTH_OF_UNIQUE_ID_IN_REQUEST items.
# Note that array is tail-optimized, i.e. it will not be prepended with length field.
#
uint8[<=16] unique_id
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.dynamic_node_id.Allocation
saturated uint7 node_id
saturated bool first_part_of_unique_id
saturated uint8[<=16] unique_id
******************************************************************************/

#define UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_ALLOCATION_ID      1
#define UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_ALLOCATION_NAME    "uavcan.protocol.dynamic_node_id.Allocation"
#define UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_ALLOCATION_SIGNATURE (0xB2A812620A11D40ULL)

#define UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_ALLOCATION_MAX_SIZE ((141 + 7)/8)

// Constants
#define UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_ALLOCATION_MAX_REQUEST_PERIOD_MS       1000 // 1000
#define UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_ALLOCATION_MIN_REQUEST_PERIOD_MS        600 // 600
#define UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_ALLOCATION_MAX_FOLLOWUP_DELAY_MS        400 // 400
#define UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_ALLOCATION_MIN_FOLLOWUP_DELAY_MS          0 // 0
#define UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_ALLOCATION_FOLLOWUP_TIMEOUT_MS        500 // 500
#define UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_ALLOCATION_MAX_LENGTH_OF_UNIQUE_ID_IN_REQUEST          6 // 6
#define UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_ALLOCATION_ANY_NODE_ID                0 // 0

#define UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_ALLOCATION_UNIQUE_ID_MAX_LENGTH                  16

typedef struct
{
    // FieldTypes
    uint8_t    node_id;                       // bit len 7
    bool       first_part_of_unique_id;       // bit len 1
    struct
    {
        uint8_t    len;                       // Dynamic array length
        uint8_t*   data;                      // Dynamic Array 8bit[16] max items
    } unique_id;

} uavcan_protocol_dynamic_node_id_Allocation;

extern
uint32_t uavcan_protocol_dynamic_node_id_Allocation_encode(uavcan_protocol_dynamic_node_id_Allocation* source, void* msg_buf);

extern
int32_t uavcan_protocol_dynamic_node_id_Allocation_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_dynamic_node_id_Allocation* dest, uint8_t** dyn_arr_buf);

extern
uint32_t uavcan_protocol_dynamic_node_id_Allocation_encode_internal(uavcan_protocol_dynamic_node_id_Allocation* source, void* msg_buf, uint32_t offset, uint8_t root_item);

extern
int32_t uavcan_protocol_dynamic_node_id_Allocation_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_dynamic_node_id_Allocation* dest, uint8_t** dyn_arr_buf, int32_t offset);

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_PROTOCOL_DYNAMIC_NODE_ID_ALLOCATION