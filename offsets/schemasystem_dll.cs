namespace CS2Dumper.Schemas {
    public static class SchemasystemDll {
        public enum fieldtype_t : byte {
            FIELD_VOID = 0x0,
            FIELD_FLOAT32 = 0x1,
            FIELD_STRING = 0x2,
            FIELD_VECTOR = 0x3,
            FIELD_QUATERNION = 0x4,
            FIELD_INT32 = 0x5,
            FIELD_BOOLEAN = 0x6,
            FIELD_INT16 = 0x7,
            FIELD_CHARACTER = 0x8,
            FIELD_COLOR32 = 0x9,
            FIELD_EMBEDDED = 0xA,
            FIELD_CUSTOM = 0xB,
            FIELD_CLASSPTR = 0xC,
            FIELD_EHANDLE = 0xD,
            FIELD_POSITION_VECTOR = 0xE,
            FIELD_TIME = 0xF,
            FIELD_TICK = 0x10,
            FIELD_SOUNDNAME = 0x11,
            FIELD_INPUT = 0x12,
            FIELD_FUNCTION = 0x13,
            FIELD_VMATRIX = 0x14,
            FIELD_VMATRIX_WORLDSPACE = 0x15,
            FIELD_MATRIX3X4_WORLDSPACE = 0x16,
            FIELD_INTERVAL = 0x17,
            FIELD_UNUSED = 0x18,
            FIELD_VECTOR2D = 0x19,
            FIELD_INT64 = 0x1A,
            FIELD_VECTOR4D = 0x1B,
            FIELD_RESOURCE = 0x1C,
            FIELD_TYPEUNKNOWN = 0x1D,
            FIELD_CSTRING = 0x1E,
            FIELD_HSCRIPT = 0x1F,
            FIELD_VARIANT = 0x20,
            FIELD_UINT64 = 0x21,
            FIELD_FLOAT64 = 0x22,
            FIELD_POSITIVEINTEGER_OR_NULL = 0x23,
            FIELD_HSCRIPT_NEW_INSTANCE = 0x24,
            FIELD_UINT32 = 0x25,
            FIELD_UTLSTRINGTOKEN = 0x26,
            FIELD_QANGLE = 0x27,
            FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR = 0x28,
            FIELD_HMATERIAL = 0x29,
            FIELD_HMODEL = 0x2A,
            FIELD_NETWORK_QUANTIZED_VECTOR = 0x2B,
            FIELD_NETWORK_QUANTIZED_FLOAT = 0x2C,
            FIELD_DIRECTION_VECTOR_WORLDSPACE = 0x2D,
            FIELD_QANGLE_WORLDSPACE = 0x2E,
            FIELD_QUATERNION_WORLDSPACE = 0x2F,
            FIELD_HSCRIPT_LIGHTBINDING = 0x30,
            FIELD_V8_VALUE = 0x31,
            FIELD_V8_OBJECT = 0x32,
            FIELD_V8_ARRAY = 0x33,
            FIELD_V8_CALLBACK_INFO = 0x34,
            FIELD_UTLSTRING = 0x35,
            FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR = 0x36,
            FIELD_HRENDERTEXTURE = 0x37,
            FIELD_HPARTICLESYSTEMDEFINITION = 0x38,
            FIELD_UINT8 = 0x39,
            FIELD_UINT16 = 0x3A,
            FIELD_CTRANSFORM = 0x3B,
            FIELD_CTRANSFORM_WORLDSPACE = 0x3C,
            FIELD_HPOSTPROCESSING = 0x3D,
            FIELD_MATRIX3X4 = 0x3E,
            FIELD_SHIM = 0x3F,
            FIELD_CMOTIONTRANSFORM = 0x40,
            FIELD_CMOTIONTRANSFORM_WORLDSPACE = 0x41,
            FIELD_ATTACHMENT_HANDLE = 0x42,
            FIELD_AMMO_INDEX = 0x43,
            FIELD_CONDITION_ID = 0x44,
            FIELD_AI_SCHEDULE_BITS = 0x45,
            FIELD_MODIFIER_HANDLE = 0x46,
            FIELD_ROTATION_VECTOR = 0x47,
            FIELD_ROTATION_VECTOR_WORLDSPACE = 0x48,
            FIELD_HVDATA = 0x49,
            FIELD_SCALE32 = 0x4A,
            FIELD_STRING_AND_TOKEN = 0x4B,
            FIELD_ENGINE_TIME = 0x4C,
            FIELD_ENGINE_TICK = 0x4D,
            FIELD_WORLD_GROUP_ID = 0x4E,
            FIELD_GLOBALSYMBOL = 0x4F,
            FIELD_TYPECOUNT = 0x50
        }
        public enum ThreeState_t : uint {
            TRS_FALSE = 0x0,
            TRS_TRUE = 0x1,
            TRS_NONE = 0x2
        }
        public static class InfoForResourceTypeCResourceManifestInternal {
        }
        public static class CSchemaSystemInternalRegistration {
            public const nint m_Vector2D = 0x0;  
            public const nint m_Vector = 0x8;  
            public const nint m_VectorAligned = 0x20;  
            public const nint m_Quaternion = 0x30;  
            public const nint m_QAngle = 0x40;  
            public const nint m_RotationVector = 0x4C;  
            public const nint m_RadianEuler = 0x58;  
            public const nint m_DegreeEuler = 0x64;  
            public const nint m_QuaternionStorage = 0x70;  
            public const nint m_matrix3x4_t = 0x80;  
            public const nint m_matrix3x4a_t = 0xB0;  
            public const nint m_Color = 0xE0;  
            public const nint m_Vector4D = 0xE4;  
            public const nint m_CTransform = 0x100;  
            public const nint m_pKeyValues = 0x120;  
            public const nint m_CUtlBinaryBlock = 0x128;  
            public const nint m_CUtlString = 0x140;  
            public const nint m_CUtlSymbol = 0x148;  
            public const nint m_stringToken = 0x14C;  
            public const nint m_stringTokenWithStorage = 0x150;  
            public const nint m_ResourceTypes = 0x168;  
            public const nint m_KV3 = 0x170;  
        }
        public static class CExampleSchemaVData_PolymorphicDerivedA {
            public const nint m_nDerivedA = 0x10;  
        }
        public static class CExampleSchemaVData_PolymorphicBase {
            public const nint m_nBase = 0x8;  
        }
        public static class CExampleSchemaVData_PolymorphicDerivedB {
            public const nint m_nDerivedB = 0x10;  
        }
        public static class ResourceId_t {
            public const nint m_Value = 0x0;  
        }
        public static class CExampleSchemaVData_Monomorphic {
            public const nint m_nExample1 = 0x0;  
            public const nint m_nExample2 = 0x4;  
        }
    }
}
