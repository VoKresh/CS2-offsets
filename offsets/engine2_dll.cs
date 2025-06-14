namespace CS2Dumper.Schemas {
    public static class Engine2Dll {
        public enum EntityDormancyType_t : uint {
            ENTITY_NOT_DORMANT = 0x0,
            ENTITY_DORMANT = 0x1,
            ENTITY_SUSPENDED = 0x2
        }
        public enum EntityIOTargetType_t : uint {
            ENTITY_IO_TARGET_INVALID = unchecked((uint)-1),
            ENTITY_IO_TARGET_ENTITYNAME = 0x2,
            ENTITY_IO_TARGET_EHANDLE = 0x6,
            ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7
        }
        public enum SpawnDebugOverrideState_t : uint {
            SPAWN_DEBUG_OVERRIDE_NONE = 0x0,
            SPAWN_DEBUG_OVERRIDE_FORCE_ENABLED = 0x1,
            SPAWN_DEBUG_OVERRIDE_FORCE_DISABLED = 0x2
        }
        public enum SpawnDebugRestrictionOverrideState_t : uint {
            SPAWN_DEBUG_RESTRICT_NONE = 0x0,
            SPAWN_DEBUG_RESTRICT_IGNORE_MANAGER_DISTANCE_REQS = 0x1,
            SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_DISTANCE_LOS_REQS = 0x2,
            SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_COOLDOWN_LIMITS = 0x4,
            SPAWN_DEBUG_RESTRICT_IGNORE_TARGET_COOLDOWN_LIMITS = 0x8
        }
        public static class EventClientPostSimulate_t {
        }
        public static class EventSimpleLoopFrameUpdate_t {
            public const nint m_LoopState = 0x0;  
            public const nint m_flRealTime = 0x28;  
            public const nint m_flFrameTime = 0x2C;  
        }
        public static class EventPostAdvanceTick_t {
            public const nint m_nCurrentTick = 0x30;  
            public const nint m_nCurrentTickThisFrame = 0x34;  
            public const nint m_nTotalTicksThisFrame = 0x38;  
            public const nint m_nTotalTicks = 0x3C;  
        }
        public static class CEntityIOOutput {
            public const nint m_Value = 0x18;  
        }
        public static class EventClientSceneSystemThreadStateChange_t {
            public const nint m_bThreadsActive = 0x0;  
        }
        public static class EventClientOutput_t {
            public const nint m_LoopState = 0x0;  
            public const nint m_flRenderTime = 0x28;  
            public const nint m_flRealTime = 0x2C;  
            public const nint m_flRenderFrameTimeUnbounded = 0x30;  
            public const nint m_bRenderOnly = 0x34;  
        }
        public static class EventServerPostSimulate_t {
        }
        public static class CEntityComponentHelper {
            public const nint m_flags = 0x8;  
            public const nint m_pInfo = 0x10;  
            public const nint m_nPriority = 0x18;  
            public const nint m_pNext = 0x20;  
        }
        public static class GameTime_t {
            public const nint m_Value = 0x0;  
        }
        public static class EventServerEndAsyncPostTickWork_t {
        }
        public static class EventClientAdvanceTick_t {
        }
        public static class EntInput_t {
        }
        public static class CNetworkVarChainer {
            public const nint m_PathIndex = 0x20;  
        }
        public static class EventClientSimulate_t {
        }
        public static class EventClientPostOutput_t {
            public const nint m_LoopState = 0x0;  
            public const nint m_flRenderTime = 0x28;  
            public const nint m_flRenderFrameTime = 0x30;  
            public const nint m_flRenderFrameTimeUnbounded = 0x34;  
            public const nint m_bRenderOnly = 0x38;  
        }
        public static class GameTick_t {
            public const nint m_Value = 0x0;  
        }
        public static class EventClientPollInput_t {
            public const nint m_LoopState = 0x0;  
            public const nint m_flRealTime = 0x28;  
        }
        public static class EventPreDataUpdate_t {
            public const nint m_nCount = 0x0;  
        }
        public static class EventClientProcessGameInput_t {
            public const nint m_LoopState = 0x0;  
            public const nint m_flRealTime = 0x28;  
            public const nint m_flFrameTime = 0x2C;  
        }
        public static class EventFrameBoundary_t {
            public const nint m_flFrameTime = 0x0;  
        }
        public static class EventAppShutdown_t {
            public const nint m_nDummy0 = 0x0;  
        }
        public static class EventServerSimulate_t {
        }
        public static class EventServerPostAdvanceTick_t {
        }
        public static class EventProfileStorageAvailable_t {
            public const nint m_nSplitScreenSlot = 0x0;  
        }
        public static class EventPostDataUpdate_t {
            public const nint m_nCount = 0x0;  
        }
        public static class EventClientPreSimulate_t {
        }
        public static class EventClientPauseSimulate_t {
        }
        public static class EventClientProcessNetworking_t {
            public const nint m_nTickCount = 0x0;  
        }
        public static class EventAdvanceTick_t {
            public const nint m_nCurrentTick = 0x30;  
            public const nint m_nCurrentTickThisFrame = 0x34;  
            public const nint m_nTotalTicksThisFrame = 0x38;  
            public const nint m_nTotalTicks = 0x3C;  
        }
        public static class EventSplitScreenStateChanged_t {
        }
        public static class EventClientPostAdvanceTick_t {
        }
        public static class CVariantDefaultAllocator {
        }
        public static class EventModInitialized_t {
        }
        public static class EventClientPreOutput_t {
            public const nint m_LoopState = 0x0;  
            public const nint m_flRenderTime = 0x28;  
            public const nint m_flRenderFrameTime = 0x30;  
            public const nint m_flRenderFrameTimeUnbounded = 0x38;  
            public const nint m_flRealTime = 0x40;  
            public const nint m_bRenderOnly = 0x44;  
        }
        public static class EventClientFrameSimulate_t {
            public const nint m_LoopState = 0x0;  
            public const nint m_flRealTime = 0x28;  
            public const nint m_flFrameTime = 0x2C;  
            public const nint m_bScheduleSendTickPacket = 0x30;  
        }
        public static class EventServerAdvanceTick_t {
        }
        public static class EventSetTime_t {
            public const nint m_LoopState = 0x0;  
            public const nint m_nClientOutputFrames = 0x28;  
            public const nint m_flRealTime = 0x30;  
            public const nint m_flRenderTime = 0x38;  
            public const nint m_flRenderFrameTime = 0x40;  
            public const nint m_flRenderFrameTimeUnbounded = 0x48;  
            public const nint m_flRenderFrameTimeUnscaled = 0x50;  
            public const nint m_flTickRemainder = 0x58;  
        }
        public static class EntOutput_t {
        }
        public static class EventSimulate_t {
            public const nint m_LoopState = 0x0;  
            public const nint m_bFirstTick = 0x28;  
            public const nint m_bLastTick = 0x29;  
        }
        public static class EventClientAdvanceNonRenderedFrame_t {
        }
        public static class EventServerProcessNetworking_t {
        }
        public static class CEmptyEntityInstance {
        }
        public static class EntComponentInfo_t {
            public const nint m_pName = 0x0;  
            public const nint m_pCPPClassname = 0x8;  
            public const nint m_pNetworkDataReferencedDescription = 0x10;  
            public const nint m_pNetworkDataReferencedPtrPropDescription = 0x18;  
            public const nint m_nRuntimeIndex = 0x20;  
            public const nint m_nFlags = 0x24;  
            public const nint m_pBaseClassComponentHelper = 0x60;  
        }
        public static class EngineLoopState_t {
            public const nint m_nPlatWindowWidth = 0x18;  
            public const nint m_nPlatWindowHeight = 0x1C;  
            public const nint m_nRenderWidth = 0x20;  
            public const nint m_nRenderHeight = 0x24;  
        }
        public static class EventClientPollNetworking_t {
            public const nint m_nTickCount = 0x0;  
        }
        public static class EventServerBeginAsyncPostTickWork_t {
        }
        public static class EventClientProcessInput_t {
            public const nint m_LoopState = 0x0;  
            public const nint m_flRealTime = 0x28;  
            public const nint m_flTickInterval = 0x2C;  
            public const nint m_flTickStartTime = 0x30;  
        }
        public static class EventServerPollNetworking_t {
        }
    }
}
