#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        namespace soundsystem_dll {
            enum class EMode_t : uint32_t {
                Peak = 0x0,
                RMS = 0x1
            };
            enum class EWaveform : uint8_t {
                Sine = 0x0,
                Square = 0x1,
                Saw = 0x2,
                Triangle = 0x3,
                Noise = 0x4
            };
            enum class VMixLFOShape_t : uint32_t {
                LFO_SHAPE_SINE = 0x0,
                LFO_SHAPE_SQUARE = 0x1,
                LFO_SHAPE_TRI = 0x2,
                LFO_SHAPE_SAW = 0x3,
                LFO_SHAPE_NOISE = 0x4
            };
            enum class VMixFilterType_t : uint16_t {
                FILTER_UNKNOWN = 0xFFFFFFFFFFFFFFFF,
                FILTER_LOWPASS = 0x0,
                FILTER_HIGHPASS = 0x1,
                FILTER_BANDPASS = 0x2,
                FILTER_NOTCH = 0x3,
                FILTER_PEAKING_EQ = 0x4,
                FILTER_LOW_SHELF = 0x5,
                FILTER_HIGH_SHELF = 0x6,
                FILTER_ALLPASS = 0x7,
                FILTER_PASSTHROUGH = 0x8
            };
            enum class SosActionStopType_t : uint32_t {
                SOS_STOPTYPE_NONE = 0x0,
                SOS_STOPTYPE_TIME = 0x1,
                SOS_STOPTYPE_OPVAR = 0x2
            };
            enum class SosEditItemType_t : uint32_t {
                SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0x0,
                SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 0x1,
                SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 0x2,
                SOS_EDIT_ITEM_TYPE_STACK = 0x3,
                SOS_EDIT_ITEM_TYPE_OPERATOR = 0x4,
                SOS_EDIT_ITEM_TYPE_FIELD = 0x5
            };
            enum class SosActionSortType_t : uint32_t {
                SOS_SORTTYPE_HIGHEST = 0x0,
                SOS_SORTTYPE_LOWEST = 0x1
            };
            enum class PlayBackMode_t : uint32_t {
                Random = 0x0,
                RandomNoRepeats = 0x1,
                RandomAvoidLast = 0x2,
                Sequential = 0x3,
                RandomWeights = 0x4
            };
            enum class VMixProcessorType_t : uint16_t {
                VPROCESSOR_UNKNOWN = 0x0,
                VPROCESSOR_RT_PITCH = 0x1,
                VPROCESSOR_STEAMAUDIO_HRTF = 0x2,
                VPROCESSOR_DYNAMICS = 0x3,
                VPROCESSOR_PRESETDSP = 0x4,
                VPROCESSOR_DELAY = 0x5,
                VPROCESSOR_MOD_DELAY = 0x6,
                VPROCESSOR_DIFFUSOR = 0x7,
                VPROCESSOR_BOXVERB = 0x8,
                VPROCESSOR_FREEVERB = 0x9,
                VPROCESSOR_PLATEVERB = 0xA,
                VPROCESSOR_FULLWAVE_INTEGRATOR = 0xB,
                VPROCESSOR_FILTER = 0xC,
                VPROCESSOR_STEAMAUDIO_PATHING = 0xD,
                VPROCESSOR_EQ8 = 0xE,
                VPROCESSOR_ENVELOPE = 0xF,
                VPROCESSOR_VOCODER = 0x10,
                VPROCESSOR_CONVOLUTION = 0x11,
                VPROCESSOR_DYNAMICS_3BAND = 0x12,
                VPROCESSOR_DYNAMICS_COMPRESSOR = 0x13,
                VPROCESSOR_SHAPER = 0x14,
                VPROCESSOR_PANNER = 0x15,
                VPROCESSOR_UTILITY = 0x16,
                VPROCESSOR_AUTOFILTER = 0x17,
                VPROCESSOR_OSC = 0x18,
                VPROCESSOR_STEREODELAY = 0x19,
                VPROCESSOR_EFFECT_CHAIN = 0x1A,
                VPROCESSOR_SUBGRAPH_SWITCH = 0x1B,
                VPROCESSOR_STEAMAUDIO_DIRECT = 0x1C,
                VPROCESSOR_STEAMAUDIO_HYBRIDREVERB = 0x1D
            };
            enum class soundlevel_t : uint32_t {
                SNDLVL_NONE = 0x0,
                SNDLVL_20dB = 0x14,
                SNDLVL_25dB = 0x19,
                SNDLVL_30dB = 0x1E,
                SNDLVL_35dB = 0x23,
                SNDLVL_40dB = 0x28,
                SNDLVL_45dB = 0x2D,
                SNDLVL_50dB = 0x32,
                SNDLVL_55dB = 0x37,
                SNDLVL_IDLE = 0x3C,
                SNDLVL_60dB = 0x3C,
                SNDLVL_65dB = 0x41,
                SNDLVL_STATIC = 0x42,
                SNDLVL_70dB = 0x46,
                SNDLVL_NORM = 0x4B,
                SNDLVL_75dB = 0x4B,
                SNDLVL_80dB = 0x50,
                SNDLVL_TALKING = 0x50,
                SNDLVL_85dB = 0x55,
                SNDLVL_90dB = 0x5A,
                SNDLVL_95dB = 0x5F,
                SNDLVL_100dB = 0x64,
                SNDLVL_105dB = 0x69,
                SNDLVL_110dB = 0x6E,
                SNDLVL_120dB = 0x78,
                SNDLVL_130dB = 0x82,
                SNDLVL_GUNFIRE = 0x8C,
                SNDLVL_140dB = 0x8C,
                SNDLVL_150dB = 0x96,
                SNDLVL_180dB = 0xB4
            };
            enum class VMixPannerType_t : uint32_t {
                PANNER_TYPE_LINEAR = 0x0,
                PANNER_TYPE_EQUAL_POWER = 0x1
            };
            enum class VMixChannelOperation_t : uint32_t {
                VMIX_CHAN_STEREO = 0x0,
                VMIX_CHAN_LEFT = 0x1,
                VMIX_CHAN_RIGHT = 0x2,
                VMIX_CHAN_SWAP = 0x3,
                VMIX_CHAN_MONO = 0x4,
                VMIX_CHAN_MID_SIDE = 0x5
            };
            enum class EMidiNote : uint8_t {
                C = 0x0,
                C_Sharp = 0x1,
                D = 0x2,
                D_Sharp = 0x3,
                E = 0x4,
                F = 0x5,
                F_Sharp = 0x6,
                G = 0x7,
                G_Sharp = 0x8,
                A = 0x9,
                A_Sharp = 0xA,
                B = 0xB,
                Count = 0xC
            };
            enum class CVSoundFormat_t : uint8_t {
                PCM16 = 0x0,
                PCM8 = 0x1,
                MP3 = 0x2,
                ADPCM = 0x3
            };
            enum class VMixFilterSlope_t : uint8_t {
                FILTER_SLOPE_1POLE_6dB = 0x0,
                FILTER_SLOPE_1POLE_12dB = 0x1,
                FILTER_SLOPE_1POLE_18dB = 0x2,
                FILTER_SLOPE_1POLE_24dB = 0x3,
                FILTER_SLOPE_12dB = 0x4,
                FILTER_SLOPE_24dB = 0x5,
                FILTER_SLOPE_36dB = 0x6,
                FILTER_SLOPE_48dB = 0x7,
                FILTER_SLOPE_MAX = 0x7
            };
            enum class ActionType_t : uint32_t {
                SOS_ACTION_NONE = 0x0,
                SOS_ACTION_LIMITER = 0x1,
                SOS_ACTION_TIME_LIMIT = 0x2,
                SOS_ACTION_TIME_BLOCK_LIMITER = 0x3,
                SOS_ACTION_SET_SOUNDEVENT_PARAM = 0x4,
                SOS_ACTION_SOUNDEVENT_CLUSTER = 0x5,
                SOS_ACTION_SOUNDEVENT_PRIORITY = 0x6,
                SOS_ACTION_COUNT_ENVELOPE = 0x7,
                SOS_ACTION_SOUNDEVENT_COUNT = 0x8,
                SOS_ACTION_SOUNDEVENT_MIN_MAX_VALUES = 0x9
            };
            enum class VMixSubgraphSwitchInterpolationType_t : uint32_t {
                SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0x0,
                SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 0x1,
                SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 0x2
            };
            enum class SosGroupType_t : uint32_t {
                SOS_GROUPTYPE_DYNAMIC = 0x0,
                SOS_GROUPTYPE_STATIC = 0x1
            };
            namespace CVoiceContainerBlender {
                constexpr std::ptrdiff_t m_firstSound = 0xC0;  
                constexpr std::ptrdiff_t m_secondSound = 0xD8;  
                constexpr std::ptrdiff_t m_flBlendFactor = 0xF0;  
            }
            namespace VMixFreeverbDesc_t {
                constexpr std::ptrdiff_t m_flRoomSize = 0x0;  
                constexpr std::ptrdiff_t m_flDamp = 0x4;  
                constexpr std::ptrdiff_t m_flWidth = 0x8;  
                constexpr std::ptrdiff_t m_flLateReflections = 0xC;  
            }
            namespace CVoiceContainerStaticAdditiveSynth__CHarmonic {
                constexpr std::ptrdiff_t m_nWaveform = 0x0;  
                constexpr std::ptrdiff_t m_nFundamental = 0x1;  
                constexpr std::ptrdiff_t m_nOctave = 0x4;  
                constexpr std::ptrdiff_t m_flCents = 0x8;  
                constexpr std::ptrdiff_t m_flPhase = 0xC;  
                constexpr std::ptrdiff_t m_curve = 0x10;  
                constexpr std::ptrdiff_t m_volumeScaling = 0x50;  
            }
            namespace CVoiceContainerStaticAdditiveSynth__CTone {
                constexpr std::ptrdiff_t m_harmonics = 0x0;  
                constexpr std::ptrdiff_t m_curve = 0x18;  
                constexpr std::ptrdiff_t m_bSyncInstances = 0x58;  
            }
            namespace CVoiceContainerRandomSampler {
                constexpr std::ptrdiff_t m_flAmplitude = 0xC0;  
                constexpr std::ptrdiff_t m_flAmplitudeJitter = 0xC4;  
                constexpr std::ptrdiff_t m_flTimeJitter = 0xC8;  
                constexpr std::ptrdiff_t m_flMaxLength = 0xCC;  
                constexpr std::ptrdiff_t m_nNumDelayVariations = 0xD0;  
                constexpr std::ptrdiff_t m_grainResources = 0xD8;  
            }
            namespace CVoiceContainerDefault {
            }
            namespace CVSound {
                constexpr std::ptrdiff_t m_nRate = 0x0;  
                constexpr std::ptrdiff_t m_nFormat = 0x4;  
                constexpr std::ptrdiff_t m_nChannels = 0x8;  
                constexpr std::ptrdiff_t m_nLoopStart = 0xC;  
                constexpr std::ptrdiff_t m_nSampleCount = 0x10;  
                constexpr std::ptrdiff_t m_flDuration = 0x14;  
                constexpr std::ptrdiff_t m_Sentences = 0x18;  
                constexpr std::ptrdiff_t m_nStreamingSize = 0x30;  
                constexpr std::ptrdiff_t m_nSeekTable = 0x38;  
                constexpr std::ptrdiff_t m_nLoopEnd = 0x50;  
                constexpr std::ptrdiff_t m_encodedHeader = 0x58;  
            }
            namespace CDSPPresetMixgroupModifierTable {
                constexpr std::ptrdiff_t m_table = 0x0;  
            }
            namespace CSosGroupActionSoundeventClusterSchema {
                constexpr std::ptrdiff_t m_nMinNearby = 0x18;  
                constexpr std::ptrdiff_t m_flClusterEpsilon = 0x1C;  
                constexpr std::ptrdiff_t m_shouldPlayOpvar = 0x20;  
                constexpr std::ptrdiff_t m_shouldPlayClusterChild = 0x28;  
                constexpr std::ptrdiff_t m_clusterSizeOpvar = 0x30;  
                constexpr std::ptrdiff_t m_groupBoundingBoxMinsOpvar = 0x38;  
                constexpr std::ptrdiff_t m_groupBoundingBoxMaxsOpvar = 0x40;  
            }
            namespace CSosGroupActionSetSoundeventParameterSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x18;  
                constexpr std::ptrdiff_t m_flMinValue = 0x1C;  
                constexpr std::ptrdiff_t m_flMaxValue = 0x20;  
                constexpr std::ptrdiff_t m_opvarName = 0x28;  
                constexpr std::ptrdiff_t m_nSortType = 0x30;  
            }
            namespace CSoundContainerReference {
                constexpr std::ptrdiff_t m_bUseReference = 0x0;  
                constexpr std::ptrdiff_t m_sound = 0x8;  
                constexpr std::ptrdiff_t m_pSound = 0x10;  
            }
            namespace CVoiceContainerNull {
            }
            namespace VMixSubgraphSwitchDesc_t {
                constexpr std::ptrdiff_t m_interpolationMode = 0x0;  
                constexpr std::ptrdiff_t m_bOnlyTailsOnFadeOut = 0x4;  
                constexpr std::ptrdiff_t m_flInterpolationTime = 0x8;  
            }
            namespace CVoiceContainerAnalysisBase {
                constexpr std::ptrdiff_t m_bRegenerateCurveOnCompile = 0x8;  
                constexpr std::ptrdiff_t m_curve = 0x10;  
            }
            namespace CSosGroupActionSoundeventMinMaxValuesSchema {
                constexpr std::ptrdiff_t m_strQueryPublicFieldName = 0x18;  
                constexpr std::ptrdiff_t m_strDelayPublicFieldName = 0x20;  
                constexpr std::ptrdiff_t m_bExcludeStoppedSounds = 0x28;  
                constexpr std::ptrdiff_t m_bExcludeDelayedSounds = 0x29;  
                constexpr std::ptrdiff_t m_bExcludeSoundsBelowThreshold = 0x2A;  
                constexpr std::ptrdiff_t m_flExcludeSoundsMinThresholdValue = 0x2C;  
                constexpr std::ptrdiff_t m_bExcludSoundsAboveThreshold = 0x30;  
                constexpr std::ptrdiff_t m_flExcludeSoundsMaxThresholdValue = 0x34;  
                constexpr std::ptrdiff_t m_strMinValueName = 0x38;  
                constexpr std::ptrdiff_t m_strMaxValueName = 0x40;  
            }
            namespace VMixPannerDesc_t {
                constexpr std::ptrdiff_t m_type = 0x0;  
                constexpr std::ptrdiff_t m_flStrength = 0x4;  
            }
            namespace CSosGroupActionSoundeventPrioritySchema {
                constexpr std::ptrdiff_t m_priorityValue = 0x18;  
                constexpr std::ptrdiff_t m_priorityVolumeScalar = 0x20;  
                constexpr std::ptrdiff_t m_priorityContributeButDontRead = 0x28;  
                constexpr std::ptrdiff_t m_bPriorityReadButDontContribute = 0x30;  
            }
            namespace CVoiceContainerRealtimeFMSineWave {
                constexpr std::ptrdiff_t m_flCarrierFrequency = 0xC0;  
                constexpr std::ptrdiff_t m_flModulatorFrequency = 0xC4;  
                constexpr std::ptrdiff_t m_flModulatorAmount = 0xC8;  
            }
            namespace SelectedEditItemInfo_t {
                constexpr std::ptrdiff_t m_EditItems = 0x0;  
            }
            namespace VMixModDelayDesc_t {
                constexpr std::ptrdiff_t m_feedbackFilter = 0x0;  
                constexpr std::ptrdiff_t m_bPhaseInvert = 0x10;  
                constexpr std::ptrdiff_t m_flGlideTime = 0x14;  
                constexpr std::ptrdiff_t m_flDelay = 0x18;  
                constexpr std::ptrdiff_t m_flOutputGain = 0x1C;  
                constexpr std::ptrdiff_t m_flFeedbackGain = 0x20;  
                constexpr std::ptrdiff_t m_flModRate = 0x24;  
                constexpr std::ptrdiff_t m_flModDepth = 0x28;  
                constexpr std::ptrdiff_t m_bApplyAntialiasing = 0x2C;  
            }
            namespace VMixBoxverbDesc_t {
                constexpr std::ptrdiff_t m_flSizeMax = 0x0;  
                constexpr std::ptrdiff_t m_flSizeMin = 0x4;  
                constexpr std::ptrdiff_t m_flComplexity = 0x8;  
                constexpr std::ptrdiff_t m_flDiffusion = 0xC;  
                constexpr std::ptrdiff_t m_flModDepth = 0x10;  
                constexpr std::ptrdiff_t m_flModRate = 0x14;  
                constexpr std::ptrdiff_t m_bParallel = 0x18;  
                constexpr std::ptrdiff_t m_filterType = 0x1C;  
                constexpr std::ptrdiff_t m_flWidth = 0x2C;  
                constexpr std::ptrdiff_t m_flHeight = 0x30;  
                constexpr std::ptrdiff_t m_flDepth = 0x34;  
                constexpr std::ptrdiff_t m_flFeedbackScale = 0x38;  
                constexpr std::ptrdiff_t m_flFeedbackWidth = 0x3C;  
                constexpr std::ptrdiff_t m_flFeedbackHeight = 0x40;  
                constexpr std::ptrdiff_t m_flFeedbackDepth = 0x44;  
                constexpr std::ptrdiff_t m_flOutputGain = 0x48;  
                constexpr std::ptrdiff_t m_flTaps = 0x4C;  
            }
            namespace CSosGroupActionSchema {
                constexpr std::ptrdiff_t m_name = 0x8;  
                constexpr std::ptrdiff_t m_actionType = 0x10;  
                constexpr std::ptrdiff_t m_actionInstanceType = 0x14;  
            }
            namespace CSosSoundEventGroupSchema {
                constexpr std::ptrdiff_t m_name = 0x0;  
                constexpr std::ptrdiff_t m_nType = 0x8;  
                constexpr std::ptrdiff_t m_bIsBlocking = 0xC;  
                constexpr std::ptrdiff_t m_nBlockMaxCount = 0x10;  
                constexpr std::ptrdiff_t m_bInvertMatch = 0x14;  
                constexpr std::ptrdiff_t m_matchPattern = 0x18;  
                constexpr std::ptrdiff_t m_branchPattern = 0x48;  
                constexpr std::ptrdiff_t m_flLifeSpanTime = 0x58;  
                constexpr std::ptrdiff_t m_vActions = 0xC0;  
            }
            namespace CSosGroupBranchPattern {
                constexpr std::ptrdiff_t m_bMatchEventName = 0x8;  
                constexpr std::ptrdiff_t m_bMatchEventSubString = 0x9;  
                constexpr std::ptrdiff_t m_bMatchEntIndex = 0xA;  
                constexpr std::ptrdiff_t m_bMatchOpvar = 0xB;  
                constexpr std::ptrdiff_t m_bMatchString = 0xC;  
            }
            namespace VMixDynamics3BandDesc_t {
                constexpr std::ptrdiff_t m_fldbGainOutput = 0x0;  
                constexpr std::ptrdiff_t m_flRMSTimeMS = 0x4;  
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x8;  
                constexpr std::ptrdiff_t m_flDepth = 0xC;  
                constexpr std::ptrdiff_t m_flWetMix = 0x10;  
                constexpr std::ptrdiff_t m_flTimeScale = 0x14;  
                constexpr std::ptrdiff_t m_flLowCutoffFreq = 0x18;  
                constexpr std::ptrdiff_t m_flHighCutoffFreq = 0x1C;  
                constexpr std::ptrdiff_t m_bPeakMode = 0x20;  
                constexpr std::ptrdiff_t m_bandDesc = 0x24;  
            }
            namespace CDSPMixgroupModifier {
                constexpr std::ptrdiff_t m_mixgroup = 0x0;  
                constexpr std::ptrdiff_t m_flModifier = 0x8;  
                constexpr std::ptrdiff_t m_flModifierMin = 0xC;  
                constexpr std::ptrdiff_t m_flSourceModifier = 0x10;  
                constexpr std::ptrdiff_t m_flSourceModifierMin = 0x14;  
                constexpr std::ptrdiff_t m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18;  
            }
            namespace CAudioMorphData {
                constexpr std::ptrdiff_t m_times = 0x0;  
                constexpr std::ptrdiff_t m_nameHashCodes = 0x18;  
                constexpr std::ptrdiff_t m_nameStrings = 0x30;  
                constexpr std::ptrdiff_t m_samples = 0x48;  
                constexpr std::ptrdiff_t m_flEaseIn = 0x60;  
                constexpr std::ptrdiff_t m_flEaseOut = 0x64;  
            }
            namespace CVoiceContainerStaticAdditiveSynth {
                constexpr std::ptrdiff_t m_tones = 0xC0;  
            }
            namespace CVoiceContainerShapedNoise {
                constexpr std::ptrdiff_t m_bUseCurveForFrequency = 0xC0;  
                constexpr std::ptrdiff_t m_flFrequency = 0xC4;  
                constexpr std::ptrdiff_t m_frequencySweep = 0xC8;  
                constexpr std::ptrdiff_t m_bUseCurveForResonance = 0x108;  
                constexpr std::ptrdiff_t m_flResonance = 0x10C;  
                constexpr std::ptrdiff_t m_resonanceSweep = 0x110;  
                constexpr std::ptrdiff_t m_bUseCurveForAmplitude = 0x150;  
                constexpr std::ptrdiff_t m_flGainInDecibels = 0x154;  
                constexpr std::ptrdiff_t m_gainSweep = 0x158;  
            }
            namespace CDspPresetModifierList {
                constexpr std::ptrdiff_t m_dspName = 0x0;  
                constexpr std::ptrdiff_t m_modifiers = 0x8;  
            }
            namespace CVoiceContainerBase {
                constexpr std::ptrdiff_t m_vSound = 0x38;  
                constexpr std::ptrdiff_t m_pEnvelopeAnalyzer = 0xB8;  
            }
            namespace CVoiceContainerGranulator {
                constexpr std::ptrdiff_t m_flGrainLength = 0xC0;  
                constexpr std::ptrdiff_t m_flGrainCrossfadeAmount = 0xC4;  
                constexpr std::ptrdiff_t m_flStartJitter = 0xC8;  
                constexpr std::ptrdiff_t m_flPlaybackJitter = 0xCC;  
                constexpr std::ptrdiff_t m_sourceAudio = 0xD0;  
            }
            namespace VMixDelayDesc_t {
                constexpr std::ptrdiff_t m_feedbackFilter = 0x0;  
                constexpr std::ptrdiff_t m_bEnableFilter = 0x10;  
                constexpr std::ptrdiff_t m_flDelay = 0x14;  
                constexpr std::ptrdiff_t m_flDirectGain = 0x18;  
                constexpr std::ptrdiff_t m_flDelayGain = 0x1C;  
                constexpr std::ptrdiff_t m_flFeedbackGain = 0x20;  
                constexpr std::ptrdiff_t m_flWidth = 0x24;  
            }
            namespace VMixEQ8Desc_t {
                constexpr std::ptrdiff_t m_stages = 0x0;  
            }
            namespace CAudioPhonemeTag {
                constexpr std::ptrdiff_t m_flStartTime = 0x0;  
                constexpr std::ptrdiff_t m_flEndTime = 0x4;  
                constexpr std::ptrdiff_t m_nPhonemeCode = 0x8;  
            }
            namespace CSosGroupActionSoundeventCountSchema {
                constexpr std::ptrdiff_t m_bExcludeStoppedSounds = 0x18;  
                constexpr std::ptrdiff_t m_strCountKeyName = 0x20;  
            }
            namespace CVoiceContainerEnvelopeAnalyzer {
                constexpr std::ptrdiff_t m_mode = 0x50;  
                constexpr std::ptrdiff_t m_nSamples = 0x54;  
                constexpr std::ptrdiff_t m_flThreshold = 0x58;  
            }
            namespace CSoundEventMetaData {
                constexpr std::ptrdiff_t m_soundEventVMix = 0x0;  
            }
            namespace VMixPitchShiftDesc_t {
                constexpr std::ptrdiff_t m_nGrainSampleCount = 0x0;  
                constexpr std::ptrdiff_t m_flPitchShift = 0x4;  
                constexpr std::ptrdiff_t m_nQuality = 0x8;  
                constexpr std::ptrdiff_t m_nProcType = 0xC;  
            }
            namespace CAudioEmphasisSample {
                constexpr std::ptrdiff_t m_flTime = 0x0;  
                constexpr std::ptrdiff_t m_flValue = 0x4;  
            }
            namespace CVoiceContainerSet {
                constexpr std::ptrdiff_t m_soundsToPlay = 0xC0;  
            }
            namespace VMixConvolutionDesc_t {
                constexpr std::ptrdiff_t m_fldbGain = 0x0;  
                constexpr std::ptrdiff_t m_flPreDelayMS = 0x4;  
                constexpr std::ptrdiff_t m_flWetMix = 0x8;  
                constexpr std::ptrdiff_t m_fldbLow = 0xC;  
                constexpr std::ptrdiff_t m_fldbMid = 0x10;  
                constexpr std::ptrdiff_t m_fldbHigh = 0x14;  
                constexpr std::ptrdiff_t m_flLowCutoffFreq = 0x18;  
                constexpr std::ptrdiff_t m_flHighCutoffFreq = 0x1C;  
            }
            namespace CVoiceContainerSetElement {
                constexpr std::ptrdiff_t m_sound = 0x0;  
                constexpr std::ptrdiff_t m_flVolumeDB = 0x18;  
            }
            namespace CSoundInfoHeader {
            }
            namespace CSosSoundEventGroupListSchema {
                constexpr std::ptrdiff_t m_groupList = 0x0;  
            }
            namespace CSosGroupMatchPattern {
                constexpr std::ptrdiff_t m_matchSoundEventName = 0x10;  
                constexpr std::ptrdiff_t m_matchSoundEventSubString = 0x18;  
                constexpr std::ptrdiff_t m_flEntIndex = 0x20;  
                constexpr std::ptrdiff_t m_flOpvar = 0x24;  
                constexpr std::ptrdiff_t m_opvarString = 0x28;  
            }
            namespace SosEditItemInfo_t {
                constexpr std::ptrdiff_t itemType = 0x0;  
                constexpr std::ptrdiff_t itemName = 0x8;  
                constexpr std::ptrdiff_t itemTypeName = 0x10;  
                constexpr std::ptrdiff_t itemKVString = 0x20;  
                constexpr std::ptrdiff_t itemPos = 0x28;  
            }
            namespace VMixPlateverbDesc_t {
                constexpr std::ptrdiff_t m_flPrefilter = 0x0;  
                constexpr std::ptrdiff_t m_flInputDiffusion1 = 0x4;  
                constexpr std::ptrdiff_t m_flInputDiffusion2 = 0x8;  
                constexpr std::ptrdiff_t m_flDecay = 0xC;  
                constexpr std::ptrdiff_t m_flDamp = 0x10;  
                constexpr std::ptrdiff_t m_flFeedbackDiffusion1 = 0x14;  
                constexpr std::ptrdiff_t m_flFeedbackDiffusion2 = 0x18;  
            }
            namespace CSoundContainerReferenceArray {
                constexpr std::ptrdiff_t m_bUseReference = 0x0;  
                constexpr std::ptrdiff_t m_sounds = 0x8;  
                constexpr std::ptrdiff_t m_pSounds = 0x20;  
            }
            namespace VMixDiffusorDesc_t {
                constexpr std::ptrdiff_t m_flSize = 0x0;  
                constexpr std::ptrdiff_t m_flComplexity = 0x4;  
                constexpr std::ptrdiff_t m_flFeedback = 0x8;  
                constexpr std::ptrdiff_t m_flOutputGain = 0xC;  
            }
            namespace VMixDynamicsCompressorDesc_t {
                constexpr std::ptrdiff_t m_fldbOutputGain = 0x0;  
                constexpr std::ptrdiff_t m_fldbCompressionThreshold = 0x4;  
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x8;  
                constexpr std::ptrdiff_t m_flCompressionRatio = 0xC;  
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x10;  
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x14;  
                constexpr std::ptrdiff_t m_flRMSTimeMS = 0x18;  
                constexpr std::ptrdiff_t m_flWetMix = 0x1C;  
                constexpr std::ptrdiff_t m_bPeakMode = 0x20;  
            }
            namespace VMixShaperDesc_t {
                constexpr std::ptrdiff_t m_nShape = 0x0;  
                constexpr std::ptrdiff_t m_fldbDrive = 0x4;  
                constexpr std::ptrdiff_t m_fldbOutputGain = 0x8;  
                constexpr std::ptrdiff_t m_flWetMix = 0xC;  
                constexpr std::ptrdiff_t m_nOversampleFactor = 0x10;  
            }
            namespace VMixEnvelopeDesc_t {
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x0;  
                constexpr std::ptrdiff_t m_flHoldTimeMS = 0x4;  
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x8;  
            }
            namespace CAudioSentence {
                constexpr std::ptrdiff_t m_bShouldVoiceDuck = 0x0;  
                constexpr std::ptrdiff_t m_RunTimePhonemes = 0x8;  
                constexpr std::ptrdiff_t m_EmphasisSamples = 0x20;  
                constexpr std::ptrdiff_t m_morphData = 0x38;  
            }
            namespace CSosGroupActionLimitSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x18;  
                constexpr std::ptrdiff_t m_nStopType = 0x1C;  
                constexpr std::ptrdiff_t m_nSortType = 0x20;  
            }
            namespace CVoiceContainerAmpedDecayingSineWave {
                constexpr std::ptrdiff_t m_flGainAmount = 0xC8;  
            }
            namespace CVoiceContainerEnvelope {
                constexpr std::ptrdiff_t m_sound = 0xC0;  
                constexpr std::ptrdiff_t m_analysisContainer = 0xC8;  
            }
            namespace VMixAutoFilterDesc_t {
                constexpr std::ptrdiff_t m_flEnvelopeAmount = 0x0;  
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x4;  
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x8;  
                constexpr std::ptrdiff_t m_filter = 0xC;  
                constexpr std::ptrdiff_t m_flLFOAmount = 0x1C;  
                constexpr std::ptrdiff_t m_flLFORate = 0x20;  
                constexpr std::ptrdiff_t m_flPhase = 0x24;  
                constexpr std::ptrdiff_t m_nLFOShape = 0x28;  
            }
            namespace VMixDynamicsBand_t {
                constexpr std::ptrdiff_t m_fldbGainInput = 0x0;  
                constexpr std::ptrdiff_t m_fldbGainOutput = 0x4;  
                constexpr std::ptrdiff_t m_fldbThresholdBelow = 0x8;  
                constexpr std::ptrdiff_t m_fldbThresholdAbove = 0xC;  
                constexpr std::ptrdiff_t m_flRatioBelow = 0x10;  
                constexpr std::ptrdiff_t m_flRatioAbove = 0x14;  
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x18;  
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x1C;  
                constexpr std::ptrdiff_t m_bEnable = 0x20;  
                constexpr std::ptrdiff_t m_bSolo = 0x21;  
            }
            namespace VMixEffectChainDesc_t {
                constexpr std::ptrdiff_t m_flCrossfadeTime = 0x0;  
            }
            namespace CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance {
                constexpr std::ptrdiff_t m_flMinVolume = 0x0;  
                constexpr std::ptrdiff_t m_nInstancesAtMinVolume = 0x4;  
                constexpr std::ptrdiff_t m_flMaxVolume = 0x8;  
                constexpr std::ptrdiff_t m_nInstancesAtMaxVolume = 0xC;  
            }
            namespace CVoiceContainerSelector {
                constexpr std::ptrdiff_t m_mode = 0xC0;  
                constexpr std::ptrdiff_t m_soundsToPlay = 0xC8;  
                constexpr std::ptrdiff_t m_fProbabilityWeights = 0x100;  
            }
            namespace CSosGroupActionTimeBlockLimitSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x18;  
                constexpr std::ptrdiff_t m_flMaxDuration = 0x1C;  
            }
            namespace CTestBlendContainer {
                constexpr std::ptrdiff_t m_firstSound = 0xC0;  
                constexpr std::ptrdiff_t m_secondSound = 0xC8;  
            }
            namespace CSosGroupActionMemberCountEnvelopeSchema {
                constexpr std::ptrdiff_t m_nBaseCount = 0x18;  
                constexpr std::ptrdiff_t m_nTargetCount = 0x1C;  
                constexpr std::ptrdiff_t m_flBaseValue = 0x20;  
                constexpr std::ptrdiff_t m_flTargetValue = 0x24;  
                constexpr std::ptrdiff_t m_flAttack = 0x28;  
                constexpr std::ptrdiff_t m_flDecay = 0x2C;  
                constexpr std::ptrdiff_t m_resultVarName = 0x30;  
                constexpr std::ptrdiff_t m_bSaveToGroup = 0x38;  
            }
            namespace CVoiceContainerSwitch {
                constexpr std::ptrdiff_t m_soundsToPlay = 0xC0;  
            }
            namespace CSosGroupActionTimeLimitSchema {
                constexpr std::ptrdiff_t m_flMaxDuration = 0x18;  
            }
            namespace VMixVocoderDesc_t {
                constexpr std::ptrdiff_t m_nBandCount = 0x0;  
                constexpr std::ptrdiff_t m_flBandwidth = 0x4;  
                constexpr std::ptrdiff_t m_fldBModGain = 0x8;  
                constexpr std::ptrdiff_t m_flFreqRangeStart = 0xC;  
                constexpr std::ptrdiff_t m_flFreqRangeEnd = 0x10;  
                constexpr std::ptrdiff_t m_fldBUnvoicedGain = 0x14;  
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x18;  
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x1C;  
                constexpr std::ptrdiff_t m_nDebugBand = 0x20;  
                constexpr std::ptrdiff_t m_bPeakMode = 0x24;  
            }
            namespace VMixUtilityDesc_t {
                constexpr std::ptrdiff_t m_nOp = 0x0;  
                constexpr std::ptrdiff_t m_flInputPan = 0x4;  
                constexpr std::ptrdiff_t m_flOutputBalance = 0x8;  
                constexpr std::ptrdiff_t m_fldbOutputGain = 0xC;  
                constexpr std::ptrdiff_t m_bBassMono = 0x10;  
                constexpr std::ptrdiff_t m_flBassFreq = 0x14;  
            }
            namespace CVoiceContainerLoopTrigger {
                constexpr std::ptrdiff_t m_sound = 0xC0;  
                constexpr std::ptrdiff_t m_flRetriggerTimeMin = 0xD8;  
                constexpr std::ptrdiff_t m_flRetriggerTimeMax = 0xDC;  
                constexpr std::ptrdiff_t m_flFadeTime = 0xE0;  
                constexpr std::ptrdiff_t m_bCrossFade = 0xE4;  
            }
            namespace CVoiceContainerDecayingSineWave {
                constexpr std::ptrdiff_t m_flFrequency = 0xC0;  
                constexpr std::ptrdiff_t m_flDecayTime = 0xC4;  
            }
            namespace VMixFilterDesc_t {
                constexpr std::ptrdiff_t m_nFilterType = 0x0;  
                constexpr std::ptrdiff_t m_nFilterSlope = 0x2;  
                constexpr std::ptrdiff_t m_bEnabled = 0x3;  
                constexpr std::ptrdiff_t m_fldbGain = 0x4;  
                constexpr std::ptrdiff_t m_flCutoffFreq = 0x8;  
                constexpr std::ptrdiff_t m_flQ = 0xC;  
            }
            namespace VMixOscDesc_t {
                constexpr std::ptrdiff_t oscType = 0x0;  
                constexpr std::ptrdiff_t m_freq = 0x4;  
                constexpr std::ptrdiff_t m_flPhase = 0x8;  
            }
            namespace VMixDynamicsDesc_t {
                constexpr std::ptrdiff_t m_fldbGain = 0x0;  
                constexpr std::ptrdiff_t m_fldbNoiseGateThreshold = 0x4;  
                constexpr std::ptrdiff_t m_fldbCompressionThreshold = 0x8;  
                constexpr std::ptrdiff_t m_fldbLimiterThreshold = 0xC;  
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x10;  
                constexpr std::ptrdiff_t m_flRatio = 0x14;  
                constexpr std::ptrdiff_t m_flLimiterRatio = 0x18;  
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x1C;  
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x20;  
                constexpr std::ptrdiff_t m_flRMSTimeMS = 0x24;  
                constexpr std::ptrdiff_t m_flWetMix = 0x28;  
                constexpr std::ptrdiff_t m_bPeakMode = 0x2C;  
            }
        }
    }
}
