#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        namespace scenesystem_dll {
            enum class DisableShadows_t : uint8_t {
                kDisableShadows_None = 0x0,
                kDisableShadows_All = 0x1,
                kDisableShadows_Baked = 0x2,
                kDisableShadows_Realtime = 0x3
            };
            namespace CSSDSMsg_ViewTarget {
                constexpr std::ptrdiff_t m_Name = 0x0;  
                constexpr std::ptrdiff_t m_TextureId = 0x8;  
                constexpr std::ptrdiff_t m_nWidth = 0x10;  
                constexpr std::ptrdiff_t m_nHeight = 0x14;  
                constexpr std::ptrdiff_t m_nRequestedWidth = 0x18;  
                constexpr std::ptrdiff_t m_nRequestedHeight = 0x1C;  
                constexpr std::ptrdiff_t m_nNumMipLevels = 0x20;  
                constexpr std::ptrdiff_t m_nDepth = 0x24;  
                constexpr std::ptrdiff_t m_nMultisampleNumSamples = 0x28;  
                constexpr std::ptrdiff_t m_nFormat = 0x2C;  
            }
            namespace SceneViewId_t {
                constexpr std::ptrdiff_t m_nViewId = 0x0;  
                constexpr std::ptrdiff_t m_nFrameCount = 0x8;  
            }
            namespace CSSDSEndFrameViewInfo {
                constexpr std::ptrdiff_t m_nViewId = 0x0;  
                constexpr std::ptrdiff_t m_ViewName = 0x8;  
            }
            namespace CSSDSMsg_PostLayer {
            }
            namespace CSSDSMsg_LayerBase {
                constexpr std::ptrdiff_t m_viewId = 0x0;  
                constexpr std::ptrdiff_t m_ViewName = 0x10;  
                constexpr std::ptrdiff_t m_nLayerIndex = 0x18;  
                constexpr std::ptrdiff_t m_nLayerId = 0x20;  
                constexpr std::ptrdiff_t m_LayerName = 0x28;  
                constexpr std::ptrdiff_t m_displayText = 0x30;  
            }
            namespace CSSDSMsg_PreLayer {
            }
            namespace CSSDSMsg_ViewTargetList {
                constexpr std::ptrdiff_t m_viewId = 0x0;  
                constexpr std::ptrdiff_t m_ViewName = 0x10;  
                constexpr std::ptrdiff_t m_Targets = 0x18;  
            }
            namespace CSSDSMsg_ViewRender {
                constexpr std::ptrdiff_t m_viewId = 0x0;  
                constexpr std::ptrdiff_t m_ViewName = 0x10;  
            }
            namespace CSSDSMsg_EndFrame {
                constexpr std::ptrdiff_t m_Views = 0x0;  
            }
        }
    }
}
