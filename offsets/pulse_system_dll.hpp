#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        namespace pulse_system_dll {
            enum class EPulseGraphExecutionHistoryFlag : uint32_t {
                NO_FLAGS = 0x0,
                CURSOR_ADD_TAG = 0x1,
                CURSOR_REMOVE_TAG = 0x2,
                CURSOR_RETIRED = 0x4,
                REQUIREMENT_PASS = 0x8,
                REQUIREMENT_FAIL = 0x10
            };
            enum class PulseTestEnumShape_t : uint32_t {
                CIRCLE = 0x64,
                SQUARE = 0xC8,
                TRIANGLE = 0x12C
            };
            enum class PulseMethodCallMode_t : uint32_t {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            };
            enum class PulseCursorExecResult_t : uint32_t {
                Succeeded = 0x0,
                Canceled = 0x1,
                Failed = 0x2,
                OngoingNotify = 0x3
            };
            enum class PulseValueType_t : uint32_t {
                PVAL_INVALID = 0xFFFFFFFFFFFFFFFF,
                PVAL_BOOL = 0x0,
                PVAL_INT = 0x1,
                PVAL_FLOAT = 0x2,
                PVAL_STRING = 0x3,
                PVAL_VEC3 = 0x4,
                PVAL_TRANSFORM = 0x5,
                PVAL_COLOR_RGB = 0x6,
                PVAL_EHANDLE = 0x7,
                PVAL_RESOURCE = 0x8,
                PVAL_SNDEVT_GUID = 0x9,
                PVAL_SNDEVT_NAME = 0xA,
                PVAL_ENTITY_NAME = 0xB,
                PVAL_OPAQUE_HANDLE = 0xC,
                PVAL_TYPESAFE_INT = 0xD,
                PVAL_CURSOR_FLOW = 0xE,
                PVAL_ANY = 0xF,
                PVAL_SCHEMA_ENUM = 0x10,
                PVAL_PANORAMA_PANEL_HANDLE = 0x11,
                PVAL_TEST_HANDLE = 0x12,
                PVAL_COUNT = 0x13
            };
            enum class PulseInstructionCode_t : uint16_t {
                INVALID = 0x0,
                IMMEDIATE_HALT = 0x1,
                RETURN_VOID = 0x2,
                RETURN_VALUE = 0x3,
                NOP = 0x4,
                JUMP = 0x5,
                JUMP_COND = 0x6,
                CHUNK_LEAP = 0x7,
                CHUNK_LEAP_COND = 0x8,
                PULSE_CALL_SYNC = 0x9,
                PULSE_CALL_ASYNC_FIRE = 0xA,
                CELL_INVOKE = 0xB,
                LIBRARY_INVOKE = 0xC,
                SET_VAR = 0xD,
                GET_VAR = 0xE,
                GET_CONST = 0xF,
                GET_DOMAIN_VALUE = 0x10,
                COPY = 0x11,
                NOT = 0x12,
                NEGATE = 0x13,
                ADD = 0x14,
                SUB = 0x15,
                MUL = 0x16,
                DIV = 0x17,
                MOD = 0x18,
                LT = 0x19,
                LTE = 0x1A,
                EQ = 0x1B,
                NE = 0x1C,
                AND = 0x1D,
                OR = 0x1E,
                CONVERT_VALUE = 0x1F,
                REINTERPRET_INSTANCE = 0x20,
                GET_BLACKBOARD_REFERENCE = 0x21,
                SET_BLACKBOARD_REFERENCE = 0x22,
                REQUIREMENT_RESULT = 0x23,
                LAST_SERIALIZED_CODE = 0x24,
                NEGATE_INT = 0x25,
                NEGATE_FLOAT = 0x26,
                ADD_INT = 0x27,
                ADD_FLOAT = 0x28,
                ADD_STRING = 0x29,
                SUB_INT = 0x2A,
                SUB_FLOAT = 0x2B,
                MUL_INT = 0x2C,
                MUL_FLOAT = 0x2D,
                DIV_INT = 0x2E,
                DIV_FLOAT = 0x2F,
                MOD_INT = 0x30,
                MOD_FLOAT = 0x31,
                LT_INT = 0x32,
                LT_FLOAT = 0x33,
                LTE_INT = 0x34,
                LTE_FLOAT = 0x35,
                EQ_BOOL = 0x36,
                EQ_INT = 0x37,
                EQ_FLOAT = 0x38,
                EQ_STRING = 0x39,
                EQ_ENTITY_NAME = 0x3A,
                EQ_SCHEMA_ENUM = 0x3B,
                EQ_EHANDLE = 0x3C,
                EQ_PANEL_HANDLE = 0x3D,
                EQ_OPAQUE_HANDLE = 0x3E,
                EQ_TEST_HANDLE = 0x3F,
                NE_BOOL = 0x40,
                NE_INT = 0x41,
                NE_FLOAT = 0x42,
                NE_STRING = 0x43,
                NE_ENTITY_NAME = 0x44,
                NE_SCHEMA_ENUM = 0x45,
                NE_EHANDLE = 0x46,
                NE_PANEL_HANDLE = 0x47,
                NE_OPAQUE_HANDLE = 0x48,
                NE_TEST_HANDLE = 0x49,
                GET_CONST_INLINE_STORAGE = 0x4A
            };
            enum class PulseTestEnumColor_t : uint32_t {
                BLACK = 0x0,
                WHITE = 0x1,
                RED = 0x2,
                GREEN = 0x3,
                BLUE = 0x4
            };
            enum class PulseCursorCancelPriority_t : uint32_t {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            };
            enum class PulseDomainValueType_t : uint32_t {
                INVALID = 0xFFFFFFFFFFFFFFFF,
                ENTITY_NAME = 0x0,
                PANEL_ID = 0x1,
                COUNT = 0x2
            };
            namespace CPulseCell_Step_PublicOutput {
                constexpr std::ptrdiff_t m_OutputIndex = 0x48;  
            }
            namespace CPulseCell_Val_TestDomainFindEntityByName {
            }
            namespace CPulseTestFuncs_LibraryA {
            }
            namespace CPulseCell_Step_TestDomainDestroyFakeEntity {
            }
            namespace CPulseCell_Test_MultiOutflow_WithParams {
                constexpr std::ptrdiff_t m_Out1 = 0x48;  
                constexpr std::ptrdiff_t m_Out2 = 0x78;  
            }
            namespace PulseRuntimeVarIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace PulseRuntimeEntrypointIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace PulseRuntimeDomainValueIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace CPulse_Chunk {
                constexpr std::ptrdiff_t m_Instructions = 0x0;  
                constexpr std::ptrdiff_t m_Registers = 0x10;  
                constexpr std::ptrdiff_t m_InstructionEditorIDs = 0x20;  
            }
            namespace PulseRuntimeInvokeIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                constexpr std::ptrdiff_t m_nNextIndex = 0x0;  
            }
            namespace CPulseCell_WaitForCursorsWithTagBase {
                constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48;  
                constexpr std::ptrdiff_t m_WaitComplete = 0x50;  
            }
            namespace CPulseTestScriptLib {
            }
            namespace PulseRuntimeRegisterIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace CPulseCell_Timeline__TimelineEvent_t {
                constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0;  
                constexpr std::ptrdiff_t m_bPauseForPreviousEvents = 0x4;  
                constexpr std::ptrdiff_t m_bCallModeSync = 0x5;  
                constexpr std::ptrdiff_t m_EventOutflow = 0x8;  
            }
            namespace CPulse_OutflowConnection {
                constexpr std::ptrdiff_t m_SourceOutflowName = 0x0;  
                constexpr std::ptrdiff_t m_nDestChunk = 0x8;  
                constexpr std::ptrdiff_t m_nInstruction = 0xC;  
                constexpr std::ptrdiff_t m_OutflowRegisterMap = 0x10;  
            }
            namespace PulseCursorID_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace CBasePulseGraphInstance {
            }
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8;  
            }
            namespace CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
                constexpr std::ptrdiff_t nTestStep = 0x0;  
            }
            namespace PulseGraphExecutionHistoryCursorDesc_t {
                constexpr std::ptrdiff_t vecAncestorCursorIDs = 0x0;  
                constexpr std::ptrdiff_t nSpawnNodeID = 0x18;  
                constexpr std::ptrdiff_t nRetiredAtNodeID = 0x1C;  
                constexpr std::ptrdiff_t flLastReferenced = 0x20;  
                constexpr std::ptrdiff_t nLastValidEntryIdx = 0x24;  
            }
            namespace CPulseCell_Inflow_Yield {
                constexpr std::ptrdiff_t m_UnyieldResume = 0x48;  
            }
            namespace CPulseCell_Inflow_GraphHook {
                constexpr std::ptrdiff_t m_HookName = 0x70;  
            }
            namespace CPulseCell_Inflow_Wait {
                constexpr std::ptrdiff_t m_WakeResume = 0x48;  
            }
            namespace CTestDomainDerived_Cursor {
                constexpr std::ptrdiff_t m_nCursorValueA = 0xA8;  
                constexpr std::ptrdiff_t m_nCursorValueB = 0xAC;  
            }
            namespace PulseRegisterMap_t {
                constexpr std::ptrdiff_t m_Inparams = 0x0;  
                constexpr std::ptrdiff_t m_Outparams = 0x10;  
            }
            namespace CPulseCell_CursorQueue {
                constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x80;  
            }
            namespace CPulseCell_BaseRequirement {
            }
            namespace PulseNodeDynamicOutflows_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0;  
            }
            namespace CPulseCell_Value_TestValue50 {
            }
            namespace CPulseCell_Test_MultiInflow_WithDefault {
            }
            namespace IGapHost_ExecLog {
            }
            namespace CPulseTestGapTypeQueryRegistration {
            }
            namespace CPulseCell_Unknown {
                constexpr std::ptrdiff_t m_UnknownKeys = 0x48;  
            }
            namespace CPulseCell_Outflow_StringSwitch {
                constexpr std::ptrdiff_t m_DefaultCaseOutflow = 0x48;  
                constexpr std::ptrdiff_t m_CaseOutflows = 0x78;  
            }
            namespace CPulseCell_Test_NoInflow {
            }
            namespace CPulseCell_FireCursors {
                constexpr std::ptrdiff_t m_Outflows = 0x48;  
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60;  
                constexpr std::ptrdiff_t m_OnFinished = 0x68;  
                constexpr std::ptrdiff_t m_OnCanceled = 0x98;  
            }
            namespace CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                constexpr std::ptrdiff_t m_Shuffle = 0x0;  
                constexpr std::ptrdiff_t m_nNextShuffle = 0x20;  
            }
            namespace CPulseCell_BaseValue {
            }
            namespace CPulse_ResumePoint {
            }
            namespace CPulseCell_Outflow_CycleRandom {
                constexpr std::ptrdiff_t m_Outputs = 0x48;  
            }
            namespace CPulseCell_Inflow_EventHandler {
                constexpr std::ptrdiff_t m_EventName = 0x70;  
            }
            namespace CPulseCell_BaseLerp__CursorState_t {
                constexpr std::ptrdiff_t m_StartTime = 0x0;  
                constexpr std::ptrdiff_t m_EndTime = 0x4;  
            }
            namespace IGapHost_Cursor {
            }
            namespace CPulse_PublicOutput {
                constexpr std::ptrdiff_t m_Name = 0x0;  
                constexpr std::ptrdiff_t m_Description = 0x8;  
                constexpr std::ptrdiff_t m_ParamType = 0x10;  
            }
            namespace CPulseCursorFuncs {
            }
            namespace CPulseCell_Timeline {
                constexpr std::ptrdiff_t m_TimelineEvents = 0x48;  
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60;  
                constexpr std::ptrdiff_t m_OnFinished = 0x68;  
                constexpr std::ptrdiff_t m_OnCanceled = 0x98;  
            }
            namespace CPulse_OutputConnection {
                constexpr std::ptrdiff_t m_SourceOutput = 0x0;  
                constexpr std::ptrdiff_t m_TargetEntity = 0x8;  
                constexpr std::ptrdiff_t m_TargetInput = 0x10;  
                constexpr std::ptrdiff_t m_Param = 0x18;  
            }
            namespace CPulseCell_LimitCount {
                constexpr std::ptrdiff_t m_nLimitCount = 0x48;  
            }
            namespace PulseGraphExecutionHistoryNodeDesc_t {
                constexpr std::ptrdiff_t strCellDesc = 0x0;  
                constexpr std::ptrdiff_t strBindingName = 0x10;  
            }
            namespace SignatureOutflow_Resume {
            }
            namespace FakeEntity_tAPI {
            }
            namespace CPulseCell_Step_CallExternalMethod {
                constexpr std::ptrdiff_t m_MethodName = 0x48;  
                constexpr std::ptrdiff_t m_GameBlackboard = 0x50;  
                constexpr std::ptrdiff_t m_ExpectedArgs = 0x58;  
                constexpr std::ptrdiff_t m_nAsyncCallMode = 0x68;  
                constexpr std::ptrdiff_t m_OnFinished = 0x70;  
            }
            namespace CPulseGraphInstance_TurtleGraphics {
            }
            namespace CPulseCell_BaseFlow {
            }
            namespace PulseGraphExecutionHistoryEntry_t {
                constexpr std::ptrdiff_t nCursorID = 0x0;  
                constexpr std::ptrdiff_t nEditorID = 0x4;  
                constexpr std::ptrdiff_t flExecTime = 0x8;  
                constexpr std::ptrdiff_t unFlags = 0xC;  
                constexpr std::ptrdiff_t tagName = 0x10;  
            }
            namespace PulseCursorYieldToken_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace CPulseGraphExecutionHistory {
                constexpr std::ptrdiff_t m_nInstanceID = 0x0;  
                constexpr std::ptrdiff_t m_strFileName = 0x8;  
                constexpr std::ptrdiff_t m_vecHistory = 0x10;  
                constexpr std::ptrdiff_t m_mapCellDesc = 0x28;  
                constexpr std::ptrdiff_t m_mapCursorDesc = 0x50;  
            }
            namespace CPulseCell_TestWaitWithCursorState {
                constexpr std::ptrdiff_t m_WakeResume = 0x48;  
                constexpr std::ptrdiff_t m_WakeCancel = 0x78;  
                constexpr std::ptrdiff_t m_WakeFail = 0xA8;  
            }
            namespace CPulseCell_Inflow_ObservableVariableListener {
                constexpr std::ptrdiff_t m_BlackboardReference = 0x70;  
                constexpr std::ptrdiff_t m_bSelfReference = 0x168;  
            }
            namespace CPulseCell_BaseYieldingInflow {
            }
            namespace PGDInstruction_t {
                constexpr std::ptrdiff_t m_nCode = 0x0;  
                constexpr std::ptrdiff_t m_nVar = 0x4;  
                constexpr std::ptrdiff_t m_nReg0 = 0x8;  
                constexpr std::ptrdiff_t m_nReg1 = 0xA;  
                constexpr std::ptrdiff_t m_nReg2 = 0xC;  
                constexpr std::ptrdiff_t m_nInvokeBindingIndex = 0x10;  
                constexpr std::ptrdiff_t m_nChunk = 0x14;  
                constexpr std::ptrdiff_t m_nDestInstruction = 0x18;  
                constexpr std::ptrdiff_t m_nCallInfoIndex = 0x1C;  
                constexpr std::ptrdiff_t m_nConstIdx = 0x20;  
                constexpr std::ptrdiff_t m_nDomainValueIdx = 0x22;  
                constexpr std::ptrdiff_t m_nBlackboardReferenceIdx = 0x24;  
            }
            namespace CPulse_InvokeBinding {
                constexpr std::ptrdiff_t m_RegisterMap = 0x0;  
                constexpr std::ptrdiff_t m_FuncName = 0x20;  
                constexpr std::ptrdiff_t m_nCellIndex = 0x28;  
                constexpr std::ptrdiff_t m_nSrcChunk = 0x2C;  
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x30;  
            }
            namespace CPulse_Variable {
                constexpr std::ptrdiff_t m_Name = 0x0;  
                constexpr std::ptrdiff_t m_Description = 0x8;  
                constexpr std::ptrdiff_t m_Type = 0x10;  
                constexpr std::ptrdiff_t m_DefaultValue = 0x20;  
                constexpr std::ptrdiff_t m_bIsPublic = 0x32;  
                constexpr std::ptrdiff_t m_bIsObservable = 0x33;  
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x34;  
            }
            namespace CPulseCell_Inflow_Method {
                constexpr std::ptrdiff_t m_MethodName = 0x70;  
                constexpr std::ptrdiff_t m_Description = 0x78;  
                constexpr std::ptrdiff_t m_bIsPublic = 0x80;  
                constexpr std::ptrdiff_t m_ReturnType = 0x88;  
                constexpr std::ptrdiff_t m_Args = 0x98;  
            }
            namespace CPulseGraphInstance_TestDomain {
                constexpr std::ptrdiff_t m_bIsRunningUnitTests = 0xF8;  
                constexpr std::ptrdiff_t m_bExplicitTimeStepping = 0xF9;  
                constexpr std::ptrdiff_t m_bExpectingToDestroyWithYieldedCursors = 0xFA;  
                constexpr std::ptrdiff_t m_nNextValidateIndex = 0xFC;  
                constexpr std::ptrdiff_t m_Tracepoints = 0x100;  
                constexpr std::ptrdiff_t m_bTestYesOrNoPath = 0x118;  
            }
            namespace FakeEntityDerivedB_tAPI {
            }
            namespace PulseNodeDynamicOutflows_t__DynamicOutflow_t {
                constexpr std::ptrdiff_t m_OutflowID = 0x0;  
                constexpr std::ptrdiff_t m_Connection = 0x8;  
            }
            namespace CPulseCell_Outflow_CycleShuffled {
                constexpr std::ptrdiff_t m_Outputs = 0x48;  
            }
            namespace PulseRuntimeOutputIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
                constexpr std::ptrdiff_t m_TagName = 0x0;  
            }
            namespace CPulseCell_TestWaitWithCursorState__CursorState_t {
                constexpr std::ptrdiff_t flWaitValue = 0x0;  
                constexpr std::ptrdiff_t bFailOnCancel = 0x4;  
            }
            namespace CPulse_DomainValue {
                constexpr std::ptrdiff_t m_nType = 0x0;  
                constexpr std::ptrdiff_t m_Value = 0x8;  
                constexpr std::ptrdiff_t m_ExpectedRuntimeType = 0x10;  
            }
            namespace CPulseCell_Step_TestDomainCreateFakeEntity {
            }
            namespace CPulseCell_Step_TestDomainEntFire {
                constexpr std::ptrdiff_t m_Input = 0x48;  
            }
            namespace CPulseMathlib {
            }
            namespace PulseRuntimeBlackboardReferenceIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace IGapHost_YieldingCursor {
            }
            namespace SignatureOutflow_Continue {
            }
            namespace CPulseCell_Test_MultiOutflow_WithParams_Yielding {
                constexpr std::ptrdiff_t m_Out1 = 0x48;  
                constexpr std::ptrdiff_t m_AsyncChild1 = 0x78;  
                constexpr std::ptrdiff_t m_AsyncChild2 = 0xA8;  
                constexpr std::ptrdiff_t m_YieldResume1 = 0xD8;  
                constexpr std::ptrdiff_t m_YieldResume2 = 0x108;  
            }
            namespace CPulseGraphInstance_TestDomain_Derived {
                constexpr std::ptrdiff_t m_nInstanceValueX = 0x120;  
            }
            namespace CPulseCell_Inflow_EntOutputHandler {
                constexpr std::ptrdiff_t m_SourceEntity = 0x70;  
                constexpr std::ptrdiff_t m_SourceOutput = 0x78;  
                constexpr std::ptrdiff_t m_TargetInput = 0x80;  
                constexpr std::ptrdiff_t m_ExpectedParamType = 0x88;  
            }
            namespace PulseRuntimeConstantIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace FakeEntityDerivedA_tAPI {
            }
            namespace CPulseCell_Step_TestDomainTracepoint {
            }
            namespace PulseDocNodeID_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace CPulse_BlackboardReference {
                constexpr std::ptrdiff_t m_hBlackboardResource = 0x0;  
                constexpr std::ptrdiff_t m_BlackboardResource = 0xE0;  
                constexpr std::ptrdiff_t m_nNodeID = 0xE8;  
                constexpr std::ptrdiff_t m_NodeName = 0xF0;  
            }
            namespace CPulseCell_LimitCount__InstanceState_t {
                constexpr std::ptrdiff_t m_nCurrentCount = 0x0;  
            }
            namespace CPulseCell_Val_TestDomainGetEntityName {
            }
            namespace CPulse_CallInfo {
                constexpr std::ptrdiff_t m_PortName = 0x0;  
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8;  
                constexpr std::ptrdiff_t m_RegisterMap = 0x10;  
                constexpr std::ptrdiff_t m_CallMethodID = 0x30;  
                constexpr std::ptrdiff_t m_nSrcChunk = 0x34;  
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x38;  
            }
            namespace CPulse_RegisterInfo {
                constexpr std::ptrdiff_t m_nReg = 0x0;  
                constexpr std::ptrdiff_t m_Type = 0x8;  
                constexpr std::ptrdiff_t m_OriginName = 0x18;  
                constexpr std::ptrdiff_t m_nWrittenByInstruction = 0x50;  
                constexpr std::ptrdiff_t m_nLastReadByInstruction = 0x54;  
            }
            namespace CPulseCell_Value_RandomFloat {
            }
            namespace PulseRuntimeCellIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace CPulseExecCursor {
            }
            namespace PulseGraphInstanceID_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace CPulseCell_Outflow_IntSwitch {
                constexpr std::ptrdiff_t m_DefaultCaseOutflow = 0x48;  
                constexpr std::ptrdiff_t m_CaseOutflows = 0x78;  
            }
            namespace CPulseGraphDef {
                constexpr std::ptrdiff_t m_DomainIdentifier = 0x8;  
                constexpr std::ptrdiff_t m_ParentMapName = 0x10;  
                constexpr std::ptrdiff_t m_ParentXmlName = 0x18;  
                constexpr std::ptrdiff_t m_vecGameBlackboards = 0x20;  
                constexpr std::ptrdiff_t m_Chunks = 0x38;  
                constexpr std::ptrdiff_t m_Cells = 0x50;  
                constexpr std::ptrdiff_t m_Vars = 0x68;  
                constexpr std::ptrdiff_t m_PublicOutputs = 0x80;  
                constexpr std::ptrdiff_t m_InvokeBindings = 0x98;  
                constexpr std::ptrdiff_t m_CallInfos = 0xB0;  
                constexpr std::ptrdiff_t m_Constants = 0xC8;  
                constexpr std::ptrdiff_t m_DomainValues = 0xE0;  
                constexpr std::ptrdiff_t m_BlackboardReferences = 0xF8;  
                constexpr std::ptrdiff_t m_OutputConnections = 0x110;  
            }
            namespace CPulseCell_Test_MultiInflow_NoDefault {
            }
            namespace CPulse_Constant {
                constexpr std::ptrdiff_t m_Type = 0x0;  
                constexpr std::ptrdiff_t m_Value = 0x10;  
            }
            namespace CPulseCell_WaitForCursorsWithTag {
                constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x80;  
                constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x84;  
            }
            namespace CPulseCell_Inflow_BaseEntrypoint {
                constexpr std::ptrdiff_t m_EntryChunk = 0x48;  
                constexpr std::ptrdiff_t m_RegisterMap = 0x50;  
            }
            namespace PulseRuntimeCallInfoIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace CPulseCell_BaseLerp {
                constexpr std::ptrdiff_t m_WakeResume = 0x48;  
            }
            namespace CPulseCell_Outflow_TestExplicitYesNo {
                constexpr std::ptrdiff_t m_Yes = 0x48;  
                constexpr std::ptrdiff_t m_No = 0x78;  
            }
            namespace CPulseCell_Outflow_TestRandomYesNo {
                constexpr std::ptrdiff_t m_Yes = 0x48;  
                constexpr std::ptrdiff_t m_No = 0x78;  
            }
            namespace CPulseCell_Step_DebugLog {
            }
            namespace PulseRuntimeChunkIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace CPulseCell_Outflow_CycleOrdered {
                constexpr std::ptrdiff_t m_Outputs = 0x48;  
            }
            namespace CPulseRuntimeMethodArg {
                constexpr std::ptrdiff_t m_Name = 0x0;  
                constexpr std::ptrdiff_t m_Description = 0x38;  
                constexpr std::ptrdiff_t m_Type = 0x40;  
            }
            namespace PulseRuntimeStateOffset_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace CPulseCell_Value_RandomInt {
            }
            namespace CPulseTurtleGraphicsCursor {
                constexpr std::ptrdiff_t m_Color = 0xA8;  
                constexpr std::ptrdiff_t m_vPos = 0xAC;  
                constexpr std::ptrdiff_t m_flHeadingDeg = 0xB4;  
                constexpr std::ptrdiff_t m_bPenUp = 0xB8;  
            }
        }
    }
}
