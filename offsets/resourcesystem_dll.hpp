#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        namespace resourcesystem_dll {
            enum class FuseVariableType_t : uint8_t {
                INVALID = 0x0,
                BOOL = 0x1,
                INT8 = 0x2,
                INT16 = 0x3,
                INT32 = 0x4,
                UINT8 = 0x5,
                UINT16 = 0x6,
                UINT32 = 0x7,
                FLOAT32 = 0x8
            };
            enum class FuseVariableAccess_t : uint8_t {
                WRITABLE = 0x0,
                READ_ONLY = 0x1
            };
            namespace InfoForResourceTypeCNmIKRig {
            }
            namespace InfoForResourceTypeCResponseRulesList {
            }
            namespace InfoForResourceTypeCDotaItemDefinitionResource {
            }
            namespace InfoForResourceTypeCMorphSetData {
            }
            namespace InfoForResourceTypeCChoreoSceneFileData {
            }
            namespace InfoForResourceTypeCVSoundStackScriptList {
            }
            namespace PackedAABB_t {
                constexpr std::ptrdiff_t m_nPackedMin = 0x0;  
                constexpr std::ptrdiff_t m_nPackedMax = 0x4;  
            }
            namespace InfoForResourceTypeCVPhysXSurfacePropertiesList {
            }
            namespace InfoForResourceTypeManifestTestResource_t {
            }
            namespace ConstantInfo_t {
                constexpr std::ptrdiff_t m_name = 0x0;  
                constexpr std::ptrdiff_t m_nameToken = 0x8;  
                constexpr std::ptrdiff_t m_flValue = 0xC;  
            }
            namespace FuseFunctionIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace InfoForResourceTypeCGcExportableExternalData {
            }
            namespace InfoForResourceTypeIAnimGraphModelBinding {
            }
            namespace InfoForResourceTypeCJavaScriptResource {
            }
            namespace CFuseSymbolTable {
                constexpr std::ptrdiff_t m_constants = 0x0;  
                constexpr std::ptrdiff_t m_variables = 0x18;  
                constexpr std::ptrdiff_t m_functions = 0x30;  
                constexpr std::ptrdiff_t m_constantMap = 0x48;  
                constexpr std::ptrdiff_t m_variableMap = 0x68;  
                constexpr std::ptrdiff_t m_functionMap = 0x88;  
            }
            namespace InfoForResourceTypeCRenderMesh {
            }
            namespace InfoForResourceTypeCVoxelVisibility {
            }
            namespace TestResource_t {
                constexpr std::ptrdiff_t m_name = 0x0;  
            }
            namespace InfoForResourceTypeCPhysAggregateData {
            }
            namespace InfoForResourceTypeCNmClip {
            }
            namespace InfoForResourceTypeWorld_t {
            }
            namespace InfoForResourceTypeProceduralTestResource_t {
            }
            namespace AABB_t {
                constexpr std::ptrdiff_t m_vMinBounds = 0x0;  
                constexpr std::ptrdiff_t m_vMaxBounds = 0xC;  
            }
            namespace InfoForResourceTypeCPostProcessingResource {
            }
            namespace VariableInfo_t {
                constexpr std::ptrdiff_t m_name = 0x0;  
                constexpr std::ptrdiff_t m_nameToken = 0x8;  
                constexpr std::ptrdiff_t m_nIndex = 0xC;  
                constexpr std::ptrdiff_t m_nNumComponents = 0xE;  
                constexpr std::ptrdiff_t m_eVarType = 0xF;  
                constexpr std::ptrdiff_t m_eAccess = 0x10;  
            }
            namespace InfoForResourceTypeIParticleSnapshot {
            }
            namespace FourQuaternions {
                constexpr std::ptrdiff_t x = 0x0;  
                constexpr std::ptrdiff_t y = 0x10;  
                constexpr std::ptrdiff_t z = 0x20;  
                constexpr std::ptrdiff_t w = 0x30;  
            }
            namespace InfoForResourceTypeCPanoramaLayout {
            }
            namespace InfoForResourceTypeCTypeScriptResource {
            }
            namespace InfoForResourceTypeCNmSkeleton {
            }
            namespace InfoForResourceTypeTestResource_t {
            }
            namespace InfoForResourceTypeCAnimationGroup {
            }
            namespace InfoForResourceTypeCVSoundEventScriptList {
            }
            namespace InfoForResourceTypeCVoiceContainerBase {
            }
            namespace InfoForResourceTypeCPanoramaStyle {
            }
            namespace InfoForResourceTypeCWorldNode {
            }
            namespace InfoForResourceTypeCNmGraphVariation {
            }
            namespace InfoForResourceTypeCCSGOEconItem {
            }
            namespace InfoForResourceTypeCNmGraphDefinition {
            }
            namespace InfoForResourceTypeCSmartProp {
            }
            namespace CFuseProgram {
                constexpr std::ptrdiff_t m_programBuffer = 0x0;  
                constexpr std::ptrdiff_t m_variablesRead = 0x18;  
                constexpr std::ptrdiff_t m_variablesWritten = 0x30;  
                constexpr std::ptrdiff_t m_nMaxTempVarsUsed = 0x48;  
            }
            namespace InfoForResourceTypeCCompositeMaterialKit {
            }
            namespace InfoForResourceTypeCVMixListResource {
            }
            namespace InfoForResourceTypeCAnimData {
            }
            namespace InfoForResourceTypeIMaterial2 {
            }
            namespace InfoForResourceTypeIVectorGraphic {
            }
            namespace InfoForResourceTypeCPanoramaDynamicImages {
            }
            namespace InfoForResourceTypeIPulseGraphDef {
            }
            namespace FunctionInfo_t {
                constexpr std::ptrdiff_t m_name = 0x8;  
                constexpr std::ptrdiff_t m_nameToken = 0x10;  
                constexpr std::ptrdiff_t m_nParamCount = 0x14;  
                constexpr std::ptrdiff_t m_nIndex = 0x18;  
                constexpr std::ptrdiff_t m_bIsPure = 0x1A;  
            }
            namespace InfoForResourceTypeCVDataResource {
            }
            namespace InfoForResourceTypeCModel {
            }
            namespace InfoForResourceTypeCDOTANovelsList {
            }
            namespace InfoForResourceTypeCTextureBase {
            }
            namespace FuseVariableIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0;  
            }
            namespace InfoForResourceTypeIParticleSystemDefinition {
            }
            namespace InfoForResourceTypeCSequenceGroupData {
            }
            namespace ManifestTestResource_t {
                constexpr std::ptrdiff_t m_name = 0x0;  
                constexpr std::ptrdiff_t m_child = 0x8;  
            }
            namespace InfoForResourceTypeCEntityLump {
            }
            namespace InfoForResourceTypeCDOTAPatchNotesList {
            }
        }
    }
}
