#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        namespace host_dll {
            namespace EmptyTestScript {
                constexpr std::ptrdiff_t m_hTest = 0x10;  
            }
            namespace CAnimScriptBase {
                constexpr std::ptrdiff_t m_bIsValid = 0x8;  
            }
        }
    }
}
