#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        namespace engine2_dll {
            enum class EntityDormancyType_t : uint32_t {
                ENTITY_NOT_DORMANT = 0x0,
                ENTITY_DORMANT = 0x1,
                ENTITY_SUSPENDED = 0x2
            };
            enum class EntityIOTargetType_t : uint32_t {
                ENTITY_IO_TARGET_INVALID = 0xFFFFFFFFFFFFFFFF,
                ENTITY_IO_TARGET_ENTITYNAME = 0x2,
                ENTITY_IO_TARGET_EHANDLE = 0x6,
                ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7
            };
            enum class SpawnDebugOverrideState_t : uint32_t {
                SPAWN_DEBUG_OVERRIDE_NONE = 0x0,
                SPAWN_DEBUG_OVERRIDE_FORCE_ENABLED = 0x1,
                SPAWN_DEBUG_OVERRIDE_FORCE_DISABLED = 0x2
            };
            enum class SpawnDebugRestrictionOverrideState_t : uint32_t {
                SPAWN_DEBUG_RESTRICT_NONE = 0x0,
                SPAWN_DEBUG_RESTRICT_IGNORE_MANAGER_DISTANCE_REQS = 0x1,
                SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_DISTANCE_LOS_REQS = 0x2,
                SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_COOLDOWN_LIMITS = 0x4,
                SPAWN_DEBUG_RESTRICT_IGNORE_TARGET_COOLDOWN_LIMITS = 0x8
            };
            namespace EventClientPostSimulate_t {
            }
            namespace EventSimpleLoopFrameUpdate_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0;  
                constexpr std::ptrdiff_t m_flRealTime = 0x28;  
                constexpr std::ptrdiff_t m_flFrameTime = 0x2C;  
            }
            namespace EventPostAdvanceTick_t {
                constexpr std::ptrdiff_t m_nCurrentTick = 0x30;  
                constexpr std::ptrdiff_t m_nCurrentTickThisFrame = 0x34;  
                constexpr std::ptrdiff_t m_nTotalTicksThisFrame = 0x38;  
                constexpr std::ptrdiff_t m_nTotalTicks = 0x3C;  
            }
            namespace CEntityIOOutput {
                constexpr std::ptrdiff_t m_Value = 0x18;  
            }
            namespace EventClientSceneSystemThreadStateChange_t {
                constexpr std::ptrdiff_t m_bThreadsActive = 0x0;  
            }
            namespace EventClientOutput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0;  
                constexpr std::ptrdiff_t m_flRenderTime = 0x28;  
                constexpr std::ptrdiff_t m_flRealTime = 0x2C;  
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x30;  
                constexpr std::ptrdiff_t m_bRenderOnly = 0x34;  
            }
            namespace EventServerPostSimulate_t {
            }
            namespace CEntityComponentHelper {
                constexpr std::ptrdiff_t m_flags = 0x8;  
                constexpr std::ptrdiff_t m_pInfo = 0x10;  
                constexpr std::ptrdiff_t m_nPriority = 0x18;  
                constexpr std::ptrdiff_t m_pNext = 0x20;  
            }
            namespace GameTime_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace EventServerEndAsyncPostTickWork_t {
            }
            namespace EventClientAdvanceTick_t {
            }
            namespace EntInput_t {
            }
            namespace CNetworkVarChainer {
                constexpr std::ptrdiff_t m_PathIndex = 0x20;  
            }
            namespace EventClientSimulate_t {
            }
            namespace EventClientPostOutput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0;  
                constexpr std::ptrdiff_t m_flRenderTime = 0x28;  
                constexpr std::ptrdiff_t m_flRenderFrameTime = 0x30;  
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x34;  
                constexpr std::ptrdiff_t m_bRenderOnly = 0x38;  
            }
            namespace GameTick_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace EventClientPollInput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0;  
                constexpr std::ptrdiff_t m_flRealTime = 0x28;  
            }
            namespace EventPreDataUpdate_t {
                constexpr std::ptrdiff_t m_nCount = 0x0;  
            }
            namespace EventClientProcessGameInput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0;  
                constexpr std::ptrdiff_t m_flRealTime = 0x28;  
                constexpr std::ptrdiff_t m_flFrameTime = 0x2C;  
            }
            namespace EventFrameBoundary_t {
                constexpr std::ptrdiff_t m_flFrameTime = 0x0;  
            }
            namespace EventAppShutdown_t {
                constexpr std::ptrdiff_t m_nDummy0 = 0x0;  
            }
            namespace EventServerSimulate_t {
            }
            namespace EventServerPostAdvanceTick_t {
            }
            namespace EventProfileStorageAvailable_t {
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x0;  
            }
            namespace EventPostDataUpdate_t {
                constexpr std::ptrdiff_t m_nCount = 0x0;  
            }
            namespace EventClientPreSimulate_t {
            }
            namespace EventClientPauseSimulate_t {
            }
            namespace EventClientProcessNetworking_t {
                constexpr std::ptrdiff_t m_nTickCount = 0x0;  
            }
            namespace EventAdvanceTick_t {
                constexpr std::ptrdiff_t m_nCurrentTick = 0x30;  
                constexpr std::ptrdiff_t m_nCurrentTickThisFrame = 0x34;  
                constexpr std::ptrdiff_t m_nTotalTicksThisFrame = 0x38;  
                constexpr std::ptrdiff_t m_nTotalTicks = 0x3C;  
            }
            namespace EventSplitScreenStateChanged_t {
            }
            namespace EventClientPostAdvanceTick_t {
            }
            namespace CVariantDefaultAllocator {
            }
            namespace EventModInitialized_t {
            }
            namespace EventClientPreOutput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0;  
                constexpr std::ptrdiff_t m_flRenderTime = 0x28;  
                constexpr std::ptrdiff_t m_flRenderFrameTime = 0x30;  
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x38;  
                constexpr std::ptrdiff_t m_flRealTime = 0x40;  
                constexpr std::ptrdiff_t m_bRenderOnly = 0x44;  
            }
            namespace EventClientFrameSimulate_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0;  
                constexpr std::ptrdiff_t m_flRealTime = 0x28;  
                constexpr std::ptrdiff_t m_flFrameTime = 0x2C;  
                constexpr std::ptrdiff_t m_bScheduleSendTickPacket = 0x30;  
            }
            namespace EventServerAdvanceTick_t {
            }
            namespace EventSetTime_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0;  
                constexpr std::ptrdiff_t m_nClientOutputFrames = 0x28;  
                constexpr std::ptrdiff_t m_flRealTime = 0x30;  
                constexpr std::ptrdiff_t m_flRenderTime = 0x38;  
                constexpr std::ptrdiff_t m_flRenderFrameTime = 0x40;  
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x48;  
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnscaled = 0x50;  
                constexpr std::ptrdiff_t m_flTickRemainder = 0x58;  
            }
            namespace EntOutput_t {
            }
            namespace EventSimulate_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0;  
                constexpr std::ptrdiff_t m_bFirstTick = 0x28;  
                constexpr std::ptrdiff_t m_bLastTick = 0x29;  
            }
            namespace EventClientAdvanceNonRenderedFrame_t {
            }
            namespace EventServerProcessNetworking_t {
            }
            namespace CEmptyEntityInstance {
            }
            namespace EntComponentInfo_t {
                constexpr std::ptrdiff_t m_pName = 0x0;  
                constexpr std::ptrdiff_t m_pCPPClassname = 0x8;  
                constexpr std::ptrdiff_t m_pNetworkDataReferencedDescription = 0x10;  
                constexpr std::ptrdiff_t m_pNetworkDataReferencedPtrPropDescription = 0x18;  
                constexpr std::ptrdiff_t m_nRuntimeIndex = 0x20;  
                constexpr std::ptrdiff_t m_nFlags = 0x24;  
                constexpr std::ptrdiff_t m_pBaseClassComponentHelper = 0x60;  
            }
            namespace EngineLoopState_t {
                constexpr std::ptrdiff_t m_nPlatWindowWidth = 0x18;  
                constexpr std::ptrdiff_t m_nPlatWindowHeight = 0x1C;  
                constexpr std::ptrdiff_t m_nRenderWidth = 0x20;  
                constexpr std::ptrdiff_t m_nRenderHeight = 0x24;  
            }
            namespace EventClientPollNetworking_t {
                constexpr std::ptrdiff_t m_nTickCount = 0x0;  
            }
            namespace EventServerBeginAsyncPostTickWork_t {
            }
            namespace EventClientProcessInput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0;  
                constexpr std::ptrdiff_t m_flRealTime = 0x28;  
                constexpr std::ptrdiff_t m_flTickInterval = 0x2C;  
                constexpr std::ptrdiff_t m_flTickStartTime = 0x30;  
            }
            namespace EventServerPollNetworking_t {
            }
        }
    }
}
