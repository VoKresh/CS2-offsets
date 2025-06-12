#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        namespace materialsystem2_dll {
            enum class VertJustification_e : uint32_t {
                VERT_JUSTIFICATION_TOP = 0x0,
                VERT_JUSTIFICATION_CENTER = 0x1,
                VERT_JUSTIFICATION_BOTTOM = 0x2,
                VERT_JUSTIFICATION_NONE = 0x3
            };
            enum class LayoutPositionType_e : uint32_t {
                LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0x0,
                LAYOUTPOSITIONTYPE_FRACTIONAL = 0x1,
                LAYOUTPOSITIONTYPE_NONE = 0x2
            };
            enum class ViewFadeMode_t : uint32_t {
                VIEW_FADE_CONSTANT_COLOR = 0x0,
                VIEW_FADE_MODULATE = 0x1,
                VIEW_FADE_MOD2X = 0x2
            };
            enum class BloomBlendMode_t : uint32_t {
                BLOOM_BLEND_ADD = 0x0,
                BLOOM_BLEND_SCREEN = 0x1,
                BLOOM_BLEND_BLUR = 0x2
            };
            enum class HorizJustification_e : uint32_t {
                HORIZ_JUSTIFICATION_LEFT = 0x0,
                HORIZ_JUSTIFICATION_CENTER = 0x1,
                HORIZ_JUSTIFICATION_RIGHT = 0x2,
                HORIZ_JUSTIFICATION_NONE = 0x3
            };
            namespace MaterialParam_t {
                constexpr std::ptrdiff_t m_name = 0x0;  
            }
            namespace MaterialParamVector_t {
                constexpr std::ptrdiff_t m_value = 0x8;  
            }
            namespace MaterialParamString_t {
                constexpr std::ptrdiff_t m_value = 0x8;  
            }
            namespace PostProcessingResource_t {
                constexpr std::ptrdiff_t m_bHasTonemapParams = 0x0;  
                constexpr std::ptrdiff_t m_toneMapParams = 0x4;  
                constexpr std::ptrdiff_t m_bHasBloomParams = 0x40;  
                constexpr std::ptrdiff_t m_bloomParams = 0x44;  
                constexpr std::ptrdiff_t m_bHasVignetteParams = 0xB4;  
                constexpr std::ptrdiff_t m_vignetteParams = 0xB8;  
                constexpr std::ptrdiff_t m_bHasLocalContrastParams = 0xDC;  
                constexpr std::ptrdiff_t m_localConstrastParams = 0xE0;  
                constexpr std::ptrdiff_t m_nColorCorrectionVolumeDim = 0xF4;  
                constexpr std::ptrdiff_t m_colorCorrectionVolumeData = 0xF8;  
                constexpr std::ptrdiff_t m_bHasColorCorrection = 0x110;  
            }
            namespace MaterialParamInt_t {
                constexpr std::ptrdiff_t m_nValue = 0x8;  
            }
            namespace PostProcessingVignetteParameters_t {
                constexpr std::ptrdiff_t m_flVignetteStrength = 0x0;  
                constexpr std::ptrdiff_t m_vCenter = 0x4;  
                constexpr std::ptrdiff_t m_flRadius = 0xC;  
                constexpr std::ptrdiff_t m_flRoundness = 0x10;  
                constexpr std::ptrdiff_t m_flFeather = 0x14;  
                constexpr std::ptrdiff_t m_vColorTint = 0x18;  
            }
            namespace PostProcessingLocalContrastParameters_t {
                constexpr std::ptrdiff_t m_flLocalContrastStrength = 0x0;  
                constexpr std::ptrdiff_t m_flLocalContrastEdgeStrength = 0x4;  
                constexpr std::ptrdiff_t m_flLocalContrastVignetteStart = 0x8;  
                constexpr std::ptrdiff_t m_flLocalContrastVignetteEnd = 0xC;  
                constexpr std::ptrdiff_t m_flLocalContrastVignetteBlur = 0x10;  
            }
            namespace PostProcessingTonemapParameters_t {
                constexpr std::ptrdiff_t m_flExposureBias = 0x0;  
                constexpr std::ptrdiff_t m_flShoulderStrength = 0x4;  
                constexpr std::ptrdiff_t m_flLinearStrength = 0x8;  
                constexpr std::ptrdiff_t m_flLinearAngle = 0xC;  
                constexpr std::ptrdiff_t m_flToeStrength = 0x10;  
                constexpr std::ptrdiff_t m_flToeNum = 0x14;  
                constexpr std::ptrdiff_t m_flToeDenom = 0x18;  
                constexpr std::ptrdiff_t m_flWhitePoint = 0x1C;  
                constexpr std::ptrdiff_t m_flLuminanceSource = 0x20;  
                constexpr std::ptrdiff_t m_flExposureBiasShadows = 0x24;  
                constexpr std::ptrdiff_t m_flExposureBiasHighlights = 0x28;  
                constexpr std::ptrdiff_t m_flMinShadowLum = 0x2C;  
                constexpr std::ptrdiff_t m_flMaxShadowLum = 0x30;  
                constexpr std::ptrdiff_t m_flMinHighlightLum = 0x34;  
                constexpr std::ptrdiff_t m_flMaxHighlightLum = 0x38;  
            }
            namespace MaterialParamBuffer_t {
                constexpr std::ptrdiff_t m_value = 0x8;  
            }
            namespace MaterialResourceData_t {
                constexpr std::ptrdiff_t m_materialName = 0x0;  
                constexpr std::ptrdiff_t m_shaderName = 0x8;  
                constexpr std::ptrdiff_t m_intParams = 0x10;  
                constexpr std::ptrdiff_t m_floatParams = 0x28;  
                constexpr std::ptrdiff_t m_vectorParams = 0x40;  
                constexpr std::ptrdiff_t m_textureParams = 0x58;  
                constexpr std::ptrdiff_t m_dynamicParams = 0x70;  
                constexpr std::ptrdiff_t m_dynamicTextureParams = 0x88;  
                constexpr std::ptrdiff_t m_intAttributes = 0xA0;  
                constexpr std::ptrdiff_t m_floatAttributes = 0xB8;  
                constexpr std::ptrdiff_t m_vectorAttributes = 0xD0;  
                constexpr std::ptrdiff_t m_textureAttributes = 0xE8;  
                constexpr std::ptrdiff_t m_stringAttributes = 0x100;  
                constexpr std::ptrdiff_t m_renderAttributesUsed = 0x118;  
            }
            namespace PostProcessingBloomParameters_t {
                constexpr std::ptrdiff_t m_blendMode = 0x0;  
                constexpr std::ptrdiff_t m_flBloomStrength = 0x4;  
                constexpr std::ptrdiff_t m_flScreenBloomStrength = 0x8;  
                constexpr std::ptrdiff_t m_flBlurBloomStrength = 0xC;  
                constexpr std::ptrdiff_t m_flBloomThreshold = 0x10;  
                constexpr std::ptrdiff_t m_flBloomThresholdWidth = 0x14;  
                constexpr std::ptrdiff_t m_flSkyboxBloomStrength = 0x18;  
                constexpr std::ptrdiff_t m_flBloomStartValue = 0x1C;  
                constexpr std::ptrdiff_t m_flBlurWeight = 0x20;  
                constexpr std::ptrdiff_t m_vBlurTint = 0x34;  
            }
            namespace MaterialParamFloat_t {
                constexpr std::ptrdiff_t m_flValue = 0x8;  
            }
            namespace MaterialParamTexture_t {
                constexpr std::ptrdiff_t m_pValue = 0x8;  
            }
        }
    }
}
