#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        namespace client_dll {
            enum class CompositeMaterialInputLooseVariableType_t : uint32_t {
                LOOSE_VARIABLE_TYPE_BOOLEAN = 0x0,
                LOOSE_VARIABLE_TYPE_INTEGER1 = 0x1,
                LOOSE_VARIABLE_TYPE_INTEGER2 = 0x2,
                LOOSE_VARIABLE_TYPE_INTEGER3 = 0x3,
                LOOSE_VARIABLE_TYPE_INTEGER4 = 0x4,
                LOOSE_VARIABLE_TYPE_FLOAT1 = 0x5,
                LOOSE_VARIABLE_TYPE_FLOAT2 = 0x6,
                LOOSE_VARIABLE_TYPE_FLOAT3 = 0x7,
                LOOSE_VARIABLE_TYPE_FLOAT4 = 0x8,
                LOOSE_VARIABLE_TYPE_COLOR4 = 0x9,
                LOOSE_VARIABLE_TYPE_STRING = 0xA,
                LOOSE_VARIABLE_TYPE_SYSTEMVAR = 0xB,
                LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 0xC,
                LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 0xD,
                LOOSE_VARIABLE_TYPE_PANORAMA_RENDER = 0xE
            };
            enum class CompositeMaterialInputTextureType_t : uint32_t {
                INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
                INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
                INPUT_TEXTURE_TYPE_COLOR = 0x2,
                INPUT_TEXTURE_TYPE_MASKS = 0x3,
                INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
                INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
                INPUT_TEXTURE_TYPE_AO = 0x6
            };
            enum class CompositeMaterialInputContainerSourceType_t : uint32_t {
                CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
                CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
                CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
                CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
                CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
                CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
            };
            enum class CompMatPropertyMutatorType_t : uint32_t {
                COMP_MAT_PROPERTY_MUTATOR_INIT = 0x0,
                COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 0x1,
                COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 0x2,
                COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 0x3,
                COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 0x4,
                COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 0x5,
                COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 0x6,
                COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 0x7,
                COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 0x8,
                COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 0x9
            };
            enum class CompositeMaterialVarSystemVar_t : uint32_t {
                COMPMATSYSVAR_COMPOSITETIME = 0x0,
                COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
            };
            enum class CompositeMaterialMatchFilterType_t : uint32_t {
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
                MATCH_FILTER_MATERIAL_SHADER = 0x1,
                MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
                MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
                MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
            };
            enum class CompMatPropertyMutatorConditionType_t : uint32_t {
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
            };
            namespace C_CSGO_TeamSelectCharacterPosition {
            }
            namespace C_HEGrenade {
            }
            namespace C_FuncMover {
            }
            namespace C_TriggerLerpObject {
            }
            namespace CCSPlayer_MovementServices {
                constexpr std::ptrdiff_t m_vecLadderNormal = 0x218;  
                constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x224;  
                constexpr std::ptrdiff_t m_flDuckAmount = 0x228;  
                constexpr std::ptrdiff_t m_flDuckSpeed = 0x22C;  
                constexpr std::ptrdiff_t m_bDuckOverride = 0x230;  
                constexpr std::ptrdiff_t m_bDesiresDuck = 0x231;  
                constexpr std::ptrdiff_t m_flDuckOffset = 0x234;  
                constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x238;  
                constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x23C;  
                constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x240;  
                constexpr std::ptrdiff_t m_flLastDuckTime = 0x244;  
                constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x250;  
                constexpr std::ptrdiff_t m_duckUntilOnGround = 0x258;  
                constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x259;  
                constexpr std::ptrdiff_t m_bInStuckTest = 0x25A;  
                constexpr std::ptrdiff_t m_flStuckCheckTime = 0x268;  
                constexpr std::ptrdiff_t m_nTraceCount = 0x468;  
                constexpr std::ptrdiff_t m_StuckLast = 0x46C;  
                constexpr std::ptrdiff_t m_bSpeedCropped = 0x470;  
                constexpr std::ptrdiff_t m_flGroundMoveEfficiency = 0x474;  
                constexpr std::ptrdiff_t m_nOldWaterLevel = 0x478;  
                constexpr std::ptrdiff_t m_flWaterEntryTime = 0x47C;  
                constexpr std::ptrdiff_t m_vecForward = 0x480;  
                constexpr std::ptrdiff_t m_vecLeft = 0x48C;  
                constexpr std::ptrdiff_t m_vecUp = 0x498;  
                constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x4A4;  
                constexpr std::ptrdiff_t m_bOldJumpPressed = 0x4A8;  
                constexpr std::ptrdiff_t m_flJumpPressedTime = 0x4AC;  
                constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x4B0;  
                constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x4B8;  
                constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x4C0;  
                constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x4C4;  
                constexpr std::ptrdiff_t m_flStamina = 0x4C8;  
                constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x4CC;  
                constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x4D0;  
                constexpr std::ptrdiff_t m_flMaxJumpHeightLastJump = 0x4D4;  
                constexpr std::ptrdiff_t m_flStaminaAtJumpStart = 0x4D8;  
                constexpr std::ptrdiff_t m_flAccumulatedJumpError = 0x4DC;  
            }
            namespace sky3dparams_t {
                constexpr std::ptrdiff_t scale = 0x8;  
                constexpr std::ptrdiff_t origin = 0xC;  
                constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18;  
                constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C;  
                constexpr std::ptrdiff_t fog = 0x20;  
                constexpr std::ptrdiff_t m_nWorldGroupID = 0x88;  
            }
            namespace C_WeaponM4A1 {
            }
            namespace C_Item {
                constexpr std::ptrdiff_t m_pReticleHintTextName = 0x1668;  
            }
            namespace C_SoundEventPathCornerEntity {
                constexpr std::ptrdiff_t m_vecCornerPairsNetworked = 0x628;  
            }
            namespace C_WeaponM249 {
            }
            namespace C_CSGameRules {
                constexpr std::ptrdiff_t m_bFreezePeriod = 0x40;  
                constexpr std::ptrdiff_t m_bWarmupPeriod = 0x41;  
                constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0x44;  
                constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0x48;  
                constexpr std::ptrdiff_t m_bServerPaused = 0x4C;  
                constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0x4D;  
                constexpr std::ptrdiff_t m_bCTTimeOutActive = 0x4E;  
                constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0x50;  
                constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0x54;  
                constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0x58;  
                constexpr std::ptrdiff_t m_nCTTimeOuts = 0x5C;  
                constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0x60;  
                constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0x61;  
                constexpr std::ptrdiff_t m_iRoundTime = 0x64;  
                constexpr std::ptrdiff_t m_fMatchStartTime = 0x68;  
                constexpr std::ptrdiff_t m_fRoundStartTime = 0x6C;  
                constexpr std::ptrdiff_t m_flRestartRoundTime = 0x70;  
                constexpr std::ptrdiff_t m_bGameRestart = 0x74;  
                constexpr std::ptrdiff_t m_flGameStartTime = 0x78;  
                constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x7C;  
                constexpr std::ptrdiff_t m_gamePhase = 0x80;  
                constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x84;  
                constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x88;  
                constexpr std::ptrdiff_t m_nOvertimePlaying = 0x8C;  
                constexpr std::ptrdiff_t m_iHostagesRemaining = 0x90;  
                constexpr std::ptrdiff_t m_bAnyHostageReached = 0x94;  
                constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x95;  
                constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x96;  
                constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x97;  
                constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x98;  
                constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x9C;  
                constexpr std::ptrdiff_t m_bIsValveDS = 0xA0;  
                constexpr std::ptrdiff_t m_bLogoMap = 0xA1;  
                constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0xA2;  
                constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0xA4;  
                constexpr std::ptrdiff_t m_MatchDevice = 0xA8;  
                constexpr std::ptrdiff_t m_bHasMatchStarted = 0xAC;  
                constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0xB0;  
                constexpr std::ptrdiff_t m_szTournamentEventName = 0xB4;  
                constexpr std::ptrdiff_t m_szTournamentEventStage = 0x2B4;  
                constexpr std::ptrdiff_t m_szMatchStatTxt = 0x4B4;  
                constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x6B4;  
                constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x8B4;  
                constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x8B8;  
                constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x8BC;  
                constexpr std::ptrdiff_t m_bIsDroppingItems = 0x8C0;  
                constexpr std::ptrdiff_t m_bIsQuestEligible = 0x8C1;  
                constexpr std::ptrdiff_t m_bIsHltvActive = 0x8C2;  
                constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x8C4;  
                constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0x98C;  
                constexpr std::ptrdiff_t m_numBestOfMaps = 0x99C;  
                constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0x9A0;  
                constexpr std::ptrdiff_t m_bBombDropped = 0x9A4;  
                constexpr std::ptrdiff_t m_bBombPlanted = 0x9A5;  
                constexpr std::ptrdiff_t m_iRoundWinStatus = 0x9A8;  
                constexpr std::ptrdiff_t m_eRoundWinReason = 0x9AC;  
                constexpr std::ptrdiff_t m_bTCantBuy = 0x9B0;  
                constexpr std::ptrdiff_t m_bCTCantBuy = 0x9B1;  
                constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0x9B4;  
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xA2C;  
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xAA4;  
                constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xB1C;  
                constexpr std::ptrdiff_t m_flNextRespawnWave = 0xB9C;  
                constexpr std::ptrdiff_t m_vMinimapMins = 0xC1C;  
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0xC28;  
                constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xC34;  
                constexpr std::ptrdiff_t m_bSpawnedTerrorHuntHeavy = 0xC54;  
                constexpr std::ptrdiff_t m_ullLocalMatchID = 0xC58;  
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xC60;  
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xC88;  
                constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xCB0;  
                constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xCB4;  
                constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xCB8;  
                constexpr std::ptrdiff_t m_bMarkClientStopRecordAtRoundEnd = 0xCD8;  
                constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0xD80;  
                constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0xD84;  
                constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0xD85;  
                constexpr std::ptrdiff_t m_pGameModeRules = 0xDA0;  
                constexpr std::ptrdiff_t m_RetakeRules = 0xDA8;  
                constexpr std::ptrdiff_t m_nMatchEndCount = 0xEC0;  
                constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0xEC4;  
                constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0xEC8;  
                constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0xECC;  
                constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0xED0;  
                constexpr std::ptrdiff_t m_eRoundEndReason = 0xED4;  
                constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0xED8;  
                constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0xEDC;  
                constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0xEE0;  
                constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0xEE8;  
                constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0xEEC;  
                constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0xEF0;  
                constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0xEF4;  
                constexpr std::ptrdiff_t m_sRoundEndMessage = 0xEF8;  
                constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0xF00;  
                constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0xF04;  
                constexpr std::ptrdiff_t m_iRoundEndLegacy = 0xF08;  
                constexpr std::ptrdiff_t m_nRoundEndCount = 0xF0C;  
                constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0xF10;  
                constexpr std::ptrdiff_t m_nRoundStartCount = 0xF14;  
                constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x4F20;  
            }
            namespace CBodyComponentSkeletonInstance {
                constexpr std::ptrdiff_t m_skeletonInstance = 0x50;  
            }
            namespace C_WeaponCZ75a {
            }
            namespace C_BaseModelEntity {
                constexpr std::ptrdiff_t m_CRenderComponent = 0xA50;  
                constexpr std::ptrdiff_t m_CHitboxComponent = 0xA58;  
                constexpr std::ptrdiff_t m_LastHitGroup = 0xA80;  
                constexpr std::ptrdiff_t m_bInitModelEffects = 0xAA8;  
                constexpr std::ptrdiff_t m_bIsStaticProp = 0xAA9;  
                constexpr std::ptrdiff_t m_nLastAddDecal = 0xAAC;  
                constexpr std::ptrdiff_t m_nDecalsAdded = 0xAB0;  
                constexpr std::ptrdiff_t m_iOldHealth = 0xAB4;  
                constexpr std::ptrdiff_t m_nRenderMode = 0xAB8;  
                constexpr std::ptrdiff_t m_nRenderFX = 0xAB9;  
                constexpr std::ptrdiff_t m_bAllowFadeInView = 0xABA;  
                constexpr std::ptrdiff_t m_clrRender = 0xAD8;  
                constexpr std::ptrdiff_t m_vecRenderAttributes = 0xAE0;  
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0xB48;  
                constexpr std::ptrdiff_t m_bNoInterpolate = 0xB49;  
                constexpr std::ptrdiff_t m_Collision = 0xB50;  
                constexpr std::ptrdiff_t m_Glow = 0xC00;  
                constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0xC58;  
                constexpr std::ptrdiff_t m_fadeMinDist = 0xC5C;  
                constexpr std::ptrdiff_t m_fadeMaxDist = 0xC60;  
                constexpr std::ptrdiff_t m_flFadeScale = 0xC64;  
                constexpr std::ptrdiff_t m_flShadowStrength = 0xC68;  
                constexpr std::ptrdiff_t m_nObjectCulling = 0xC6C;  
                constexpr std::ptrdiff_t m_nAddDecal = 0xC70;  
                constexpr std::ptrdiff_t m_vDecalPosition = 0xC74;  
                constexpr std::ptrdiff_t m_vDecalForwardAxis = 0xC80;  
                constexpr std::ptrdiff_t m_flDecalHealBloodRate = 0xC8C;  
                constexpr std::ptrdiff_t m_flDecalHealHeightRate = 0xC90;  
                constexpr std::ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xC98;  
                constexpr std::ptrdiff_t m_vecViewOffset = 0xCB0;  
                constexpr std::ptrdiff_t m_pClientAlphaProperty = 0xCE0;  
                constexpr std::ptrdiff_t m_ClientOverrideTint = 0xCE8;  
                constexpr std::ptrdiff_t m_bUseClientOverrideTint = 0xCEC;  
            }
            namespace C_FootstepControl {
                constexpr std::ptrdiff_t m_source = 0xD30;  
                constexpr std::ptrdiff_t m_destination = 0xD38;  
            }
            namespace C_PointClientUIHUD {
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xD60;  
                constexpr std::ptrdiff_t m_bIgnoreInput = 0xEE0;  
                constexpr std::ptrdiff_t m_flWidth = 0xEE4;  
                constexpr std::ptrdiff_t m_flHeight = 0xEE8;  
                constexpr std::ptrdiff_t m_flDPI = 0xEEC;  
                constexpr std::ptrdiff_t m_flInteractDistance = 0xEF0;  
                constexpr std::ptrdiff_t m_flDepthOffset = 0xEF4;  
                constexpr std::ptrdiff_t m_unOwnerContext = 0xEF8;  
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0xEFC;  
                constexpr std::ptrdiff_t m_unVerticalAlign = 0xF00;  
                constexpr std::ptrdiff_t m_unOrientation = 0xF04;  
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xF08;  
                constexpr std::ptrdiff_t m_vecCSSClasses = 0xF10;  
            }
            namespace C_SpotlightEnd {
                constexpr std::ptrdiff_t m_flLightScale = 0xD28;  
                constexpr std::ptrdiff_t m_Radius = 0xD2C;  
            }
            namespace CEconItemAttribute {
                constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30;  
                constexpr std::ptrdiff_t m_flValue = 0x34;  
                constexpr std::ptrdiff_t m_flInitialValue = 0x38;  
                constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3C;  
                constexpr std::ptrdiff_t m_bSetBonus = 0x40;  
            }
            namespace C_PointCamera {
                constexpr std::ptrdiff_t m_FOV = 0x568;  
                constexpr std::ptrdiff_t m_Resolution = 0x56C;  
                constexpr std::ptrdiff_t m_bFogEnable = 0x570;  
                constexpr std::ptrdiff_t m_FogColor = 0x571;  
                constexpr std::ptrdiff_t m_flFogStart = 0x578;  
                constexpr std::ptrdiff_t m_flFogEnd = 0x57C;  
                constexpr std::ptrdiff_t m_flFogMaxDensity = 0x580;  
                constexpr std::ptrdiff_t m_bActive = 0x584;  
                constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x585;  
                constexpr std::ptrdiff_t m_flAspectRatio = 0x588;  
                constexpr std::ptrdiff_t m_bNoSky = 0x58C;  
                constexpr std::ptrdiff_t m_fBrightness = 0x590;  
                constexpr std::ptrdiff_t m_flZFar = 0x594;  
                constexpr std::ptrdiff_t m_flZNear = 0x598;  
                constexpr std::ptrdiff_t m_bCanHLTVUse = 0x59C;  
                constexpr std::ptrdiff_t m_bAlignWithParent = 0x59D;  
                constexpr std::ptrdiff_t m_bDofEnabled = 0x59E;  
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x5A0;  
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x5A4;  
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x5A8;  
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x5AC;  
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x5B0;  
                constexpr std::ptrdiff_t m_TargetFOV = 0x5B4;  
                constexpr std::ptrdiff_t m_DegreesPerSecond = 0x5B8;  
                constexpr std::ptrdiff_t m_bIsOn = 0x5BC;  
                constexpr std::ptrdiff_t m_pNext = 0x5C0;  
            }
            namespace CCSPointScriptExtensions_weapon_cs_base {
            }
            namespace C_LightSpotEntity {
            }
            namespace C_EnvWind {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x568;  
            }
            namespace C_GameRulesProxy {
            }
            namespace C_BaseCombatCharacter {
                constexpr std::ptrdiff_t m_hMyWearables = 0x1120;  
                constexpr std::ptrdiff_t m_leftFootAttachment = 0x1138;  
                constexpr std::ptrdiff_t m_rightFootAttachment = 0x1139;  
                constexpr std::ptrdiff_t m_nWaterWakeMode = 0x113C;  
                constexpr std::ptrdiff_t m_flWaterWorldZ = 0x1140;  
                constexpr std::ptrdiff_t m_flWaterNextTraceTime = 0x1144;  
            }
            namespace C_FlashbangProjectile {
            }
            namespace CEnvSoundscapeTriggerable {
            }
            namespace C_SoundEventSphereEntity {
                constexpr std::ptrdiff_t m_flRadius = 0x628;  
            }
            namespace CPlayer_ViewModelServices {
            }
            namespace CCSGO_WingmanIntroCounterTerroristPosition {
            }
            namespace C_DynamicPropAlias_cable_dynamic {
            }
            namespace C_InfoInstructorHintHostageRescueZone {
            }
            namespace C_SceneEntity {
                constexpr std::ptrdiff_t m_bIsPlayingBack = 0x570;  
                constexpr std::ptrdiff_t m_bPaused = 0x571;  
                constexpr std::ptrdiff_t m_bMultiplayer = 0x572;  
                constexpr std::ptrdiff_t m_bAutogenerated = 0x573;  
                constexpr std::ptrdiff_t m_flForceClientTime = 0x574;  
                constexpr std::ptrdiff_t m_nSceneStringIndex = 0x578;  
                constexpr std::ptrdiff_t m_bClientOnly = 0x57A;  
                constexpr std::ptrdiff_t m_hOwner = 0x57C;  
                constexpr std::ptrdiff_t m_hActorList = 0x580;  
                constexpr std::ptrdiff_t m_bWasPlaying = 0x598;  
                constexpr std::ptrdiff_t m_QueuedEvents = 0x5A8;  
                constexpr std::ptrdiff_t m_flCurrentTime = 0x5C0;  
            }
            namespace CPlayer_CameraServices {
                constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x40;  
                constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x4C;  
                constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x50;  
                constexpr std::ptrdiff_t m_PlayerFog = 0x58;  
                constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0x98;  
                constexpr std::ptrdiff_t m_hViewEntity = 0x9C;  
                constexpr std::ptrdiff_t m_hTonemapController = 0xA0;  
                constexpr std::ptrdiff_t m_audio = 0xA8;  
                constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x120;  
                constexpr std::ptrdiff_t m_flOldPlayerZ = 0x138;  
                constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x13C;  
                constexpr std::ptrdiff_t m_CurrentFog = 0x140;  
                constexpr std::ptrdiff_t m_hOldFogController = 0x1A8;  
                constexpr std::ptrdiff_t m_bOverrideFogColor = 0x1AC;  
                constexpr std::ptrdiff_t m_OverrideFogColor = 0x1B1;  
                constexpr std::ptrdiff_t m_bOverrideFogStartEnd = 0x1C5;  
                constexpr std::ptrdiff_t m_fOverrideFogStart = 0x1CC;  
                constexpr std::ptrdiff_t m_fOverrideFogEnd = 0x1E0;  
                constexpr std::ptrdiff_t m_hActivePostProcessingVolume = 0x1F4;  
                constexpr std::ptrdiff_t m_angDemoViewAngles = 0x1F8;  
            }
            namespace C_BaseCSGrenade {
                constexpr std::ptrdiff_t m_bClientPredictDelete = 0x1B20;  
                constexpr std::ptrdiff_t m_bRedraw = 0x1B21;  
                constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x1B22;  
                constexpr std::ptrdiff_t m_bPinPulled = 0x1B23;  
                constexpr std::ptrdiff_t m_bJumpThrow = 0x1B24;  
                constexpr std::ptrdiff_t m_bThrowAnimating = 0x1B25;  
                constexpr std::ptrdiff_t m_fThrowTime = 0x1B28;  
                constexpr std::ptrdiff_t m_flThrowStrength = 0x1B2C;  
                constexpr std::ptrdiff_t m_flThrowStrengthApproach = 0x1B30;  
                constexpr std::ptrdiff_t m_fDropTime = 0x1B34;  
                constexpr std::ptrdiff_t m_fPinPullTime = 0x1B38;  
                constexpr std::ptrdiff_t m_bJustPulledPin = 0x1B3C;  
                constexpr std::ptrdiff_t m_nNextHoldTick = 0x1B40;  
                constexpr std::ptrdiff_t m_flNextHoldFrac = 0x1B44;  
                constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x1B48;  
            }
            namespace C_FuncMonitor {
                constexpr std::ptrdiff_t m_targetCamera = 0xD28;  
                constexpr std::ptrdiff_t m_nResolutionEnum = 0xD30;  
                constexpr std::ptrdiff_t m_bRenderShadows = 0xD34;  
                constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0xD35;  
                constexpr std::ptrdiff_t m_brushModelName = 0xD38;  
                constexpr std::ptrdiff_t m_hTargetCamera = 0xD40;  
                constexpr std::ptrdiff_t m_bEnabled = 0xD44;  
                constexpr std::ptrdiff_t m_bDraw3DSkybox = 0xD45;  
            }
            namespace C_TriggerMultiple {
            }
            namespace C_RopeKeyframe__CPhysicsDelegate {
                constexpr std::ptrdiff_t m_pKeyframe = 0x8;  
            }
            namespace CBodyComponent {
                constexpr std::ptrdiff_t m_pSceneNode = 0x8;  
                constexpr std::ptrdiff_t __m_pChainEntity = 0x20;  
            }
            namespace C_SoundAreaEntitySphere {
                constexpr std::ptrdiff_t m_flRadius = 0x590;  
            }
            namespace CCSObserver_MovementServices {
            }
            namespace C_LightGlow {
                constexpr std::ptrdiff_t m_nHorizontalSize = 0xD28;  
                constexpr std::ptrdiff_t m_nVerticalSize = 0xD2C;  
                constexpr std::ptrdiff_t m_nMinDist = 0xD30;  
                constexpr std::ptrdiff_t m_nMaxDist = 0xD34;  
                constexpr std::ptrdiff_t m_nOuterMaxDist = 0xD38;  
                constexpr std::ptrdiff_t m_flGlowProxySize = 0xD3C;  
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xD40;  
                constexpr std::ptrdiff_t m_GlowOverlay = 0xD48;  
            }
            namespace CountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8;  
                constexpr std::ptrdiff_t m_timestamp = 0xC;  
                constexpr std::ptrdiff_t m_timescale = 0x10;  
                constexpr std::ptrdiff_t m_nWorldGroupId = 0x14;  
            }
            namespace CGameSceneNodeHandle {
                constexpr std::ptrdiff_t m_hOwner = 0x8;  
                constexpr std::ptrdiff_t m_name = 0xC;  
            }
            namespace PredictedDamageTag_t {
                constexpr std::ptrdiff_t nTagTick = 0x30;  
                constexpr std::ptrdiff_t flFlinchModSmall = 0x34;  
                constexpr std::ptrdiff_t flFlinchModLarge = 0x38;  
                constexpr std::ptrdiff_t flFriendlyFireDamageReductionRatio = 0x3C;  
            }
            namespace C_ClientRagdoll {
                constexpr std::ptrdiff_t m_bFadeOut = 0xF88;  
                constexpr std::ptrdiff_t m_bImportant = 0xF89;  
                constexpr std::ptrdiff_t m_flEffectTime = 0xF8C;  
                constexpr std::ptrdiff_t m_gibDespawnTime = 0xF90;  
                constexpr std::ptrdiff_t m_iCurrentFriction = 0xF94;  
                constexpr std::ptrdiff_t m_iMinFriction = 0xF98;  
                constexpr std::ptrdiff_t m_iMaxFriction = 0xF9C;  
                constexpr std::ptrdiff_t m_iFrictionAnimState = 0xFA0;  
                constexpr std::ptrdiff_t m_bReleaseRagdoll = 0xFA4;  
                constexpr std::ptrdiff_t m_iEyeAttachment = 0xFA5;  
                constexpr std::ptrdiff_t m_bFadingOut = 0xFA6;  
                constexpr std::ptrdiff_t m_flScaleEnd = 0xFA8;  
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0xFD0;  
                constexpr std::ptrdiff_t m_flScaleTimeEnd = 0xFF8;  
            }
            namespace C_GlobalLight {
                constexpr std::ptrdiff_t m_WindClothForceHandle = 0xA30;  
            }
            namespace C_CSPlayerResource {
                constexpr std::ptrdiff_t m_bHostageAlive = 0x568;  
                constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x574;  
                constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x580;  
                constexpr std::ptrdiff_t m_bombsiteCenterA = 0x5B0;  
                constexpr std::ptrdiff_t m_bombsiteCenterB = 0x5BC;  
                constexpr std::ptrdiff_t m_hostageRescueX = 0x5C8;  
                constexpr std::ptrdiff_t m_hostageRescueY = 0x5D8;  
                constexpr std::ptrdiff_t m_hostageRescueZ = 0x5E8;  
                constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x5F8;  
                constexpr std::ptrdiff_t m_foundGoalPositions = 0x5F9;  
            }
            namespace CSkeletonInstance {
                constexpr std::ptrdiff_t m_modelState = 0x170;  
                constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x3A0;  
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x3A1;  
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x3A2;  
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0;  
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0;  
                constexpr std::ptrdiff_t m_materialGroup = 0x3A4;  
                constexpr std::ptrdiff_t m_nHitboxSet = 0x3A8;  
            }
            namespace CBodyComponentBaseAnimGraph {
                constexpr std::ptrdiff_t m_animationController = 0x490;  
            }
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x50;  
            }
            namespace C_SmokeGrenadeProjectile {
                constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0x1210;  
                constexpr std::ptrdiff_t m_bDidSmokeEffect = 0x1214;  
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1218;  
                constexpr std::ptrdiff_t m_vSmokeColor = 0x121C;  
                constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0x1228;  
                constexpr std::ptrdiff_t m_VoxelFrameData = 0x1238;  
                constexpr std::ptrdiff_t m_nVoxelFrameDataSize = 0x1250;  
                constexpr std::ptrdiff_t m_nVoxelUpdate = 0x1254;  
                constexpr std::ptrdiff_t m_bSmokeVolumeDataReceived = 0x1258;  
                constexpr std::ptrdiff_t m_bSmokeEffectSpawned = 0x1259;  
            }
            namespace C_SoundEventEntityAlias_snd_event_point {
            }
            namespace C_CSGO_MapPreviewCameraPath {
                constexpr std::ptrdiff_t m_flZFar = 0x568;  
                constexpr std::ptrdiff_t m_flZNear = 0x56C;  
                constexpr std::ptrdiff_t m_bLoop = 0x570;  
                constexpr std::ptrdiff_t m_bVerticalFOV = 0x571;  
                constexpr std::ptrdiff_t m_bConstantSpeed = 0x572;  
                constexpr std::ptrdiff_t m_flDuration = 0x574;  
                constexpr std::ptrdiff_t m_flPathLength = 0x5B8;  
                constexpr std::ptrdiff_t m_flPathDuration = 0x5BC;  
            }
            namespace CCSGO_WingmanIntroTerroristPosition {
            }
            namespace C_Inferno {
                constexpr std::ptrdiff_t m_nfxFireDamageEffect = 0xD68;  
                constexpr std::ptrdiff_t m_hInfernoPointsSnapshot = 0xD70;  
                constexpr std::ptrdiff_t m_hInfernoFillerPointsSnapshot = 0xD78;  
                constexpr std::ptrdiff_t m_hInfernoOutlinePointsSnapshot = 0xD80;  
                constexpr std::ptrdiff_t m_hInfernoClimbingOutlinePointsSnapshot = 0xD88;  
                constexpr std::ptrdiff_t m_hInfernoDecalsSnapshot = 0xD90;  
                constexpr std::ptrdiff_t m_firePositions = 0xD98;  
                constexpr std::ptrdiff_t m_fireParentPositions = 0x1098;  
                constexpr std::ptrdiff_t m_bFireIsBurning = 0x1398;  
                constexpr std::ptrdiff_t m_BurnNormal = 0x13D8;  
                constexpr std::ptrdiff_t m_fireCount = 0x16D8;  
                constexpr std::ptrdiff_t m_nInfernoType = 0x16DC;  
                constexpr std::ptrdiff_t m_nFireLifetime = 0x16E0;  
                constexpr std::ptrdiff_t m_bInPostEffectTime = 0x16E4;  
                constexpr std::ptrdiff_t m_lastFireCount = 0x16E8;  
                constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x16EC;  
                constexpr std::ptrdiff_t m_drawableCount = 0x82F0;  
                constexpr std::ptrdiff_t m_blosCheck = 0x82F4;  
                constexpr std::ptrdiff_t m_nlosperiod = 0x82F8;  
                constexpr std::ptrdiff_t m_maxFireHalfWidth = 0x82FC;  
                constexpr std::ptrdiff_t m_maxFireHeight = 0x8300;  
                constexpr std::ptrdiff_t m_minBounds = 0x8304;  
                constexpr std::ptrdiff_t m_maxBounds = 0x8310;  
                constexpr std::ptrdiff_t m_flLastGrassBurnThink = 0x831C;  
            }
            namespace C_HostageCarriableProp {
            }
            namespace C_CSGO_TerroristWingmanIntroCamera {
            }
            namespace C_PlayerPing {
                constexpr std::ptrdiff_t m_hPlayer = 0x598;  
                constexpr std::ptrdiff_t m_hPingedEntity = 0x59C;  
                constexpr std::ptrdiff_t m_iType = 0x5A0;  
                constexpr std::ptrdiff_t m_bUrgent = 0x5A4;  
                constexpr std::ptrdiff_t m_szPlaceName = 0x5A5;  
            }
            namespace C_WeaponMP7 {
            }
            namespace C_CSTeam {
                constexpr std::ptrdiff_t m_szTeamMatchStat = 0x620;  
                constexpr std::ptrdiff_t m_numMapVictories = 0x820;  
                constexpr std::ptrdiff_t m_bSurrendered = 0x824;  
                constexpr std::ptrdiff_t m_scoreFirstHalf = 0x828;  
                constexpr std::ptrdiff_t m_scoreSecondHalf = 0x82C;  
                constexpr std::ptrdiff_t m_scoreOvertime = 0x830;  
                constexpr std::ptrdiff_t m_szClanTeamname = 0x834;  
                constexpr std::ptrdiff_t m_iClanID = 0x8B8;  
                constexpr std::ptrdiff_t m_szTeamFlagImage = 0x8BC;  
                constexpr std::ptrdiff_t m_szTeamLogoImage = 0x8C4;  
            }
            namespace C_CSGO_MapPreviewCameraPathNode {
                constexpr std::ptrdiff_t m_szParentPathUniqueID = 0x568;  
                constexpr std::ptrdiff_t m_nPathIndex = 0x570;  
                constexpr std::ptrdiff_t m_vInTangentLocal = 0x574;  
                constexpr std::ptrdiff_t m_vOutTangentLocal = 0x580;  
                constexpr std::ptrdiff_t m_flFOV = 0x58C;  
                constexpr std::ptrdiff_t m_flCameraSpeed = 0x590;  
                constexpr std::ptrdiff_t m_flEaseIn = 0x594;  
                constexpr std::ptrdiff_t m_flEaseOut = 0x598;  
                constexpr std::ptrdiff_t m_vInTangentWorld = 0x59C;  
                constexpr std::ptrdiff_t m_vOutTangentWorld = 0x5A8;  
            }
            namespace C_WeaponMag7 {
            }
            namespace C_DEagle {
            }
            namespace C_CSPlayerPawn {
                constexpr std::ptrdiff_t m_pBulletServices = 0x1518;  
                constexpr std::ptrdiff_t m_pHostageServices = 0x1520;  
                constexpr std::ptrdiff_t m_pBuyServices = 0x1528;  
                constexpr std::ptrdiff_t m_pGlowServices = 0x1530;  
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x1538;  
                constexpr std::ptrdiff_t m_pDamageReactServices = 0x1540;  
                constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x1548;  
                constexpr std::ptrdiff_t m_flLastFiredWeaponTime = 0x154C;  
                constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x1550;  
                constexpr std::ptrdiff_t m_flLandingTimeSeconds = 0x1554;  
                constexpr std::ptrdiff_t m_flOldFallVelocity = 0x1558;  
                constexpr std::ptrdiff_t m_szLastPlaceName = 0x155C;  
                constexpr std::ptrdiff_t m_bPrevDefuser = 0x156E;  
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x156F;  
                constexpr std::ptrdiff_t m_nPrevArmorVal = 0x1570;  
                constexpr std::ptrdiff_t m_nPrevGrenadeAmmoCount = 0x1574;  
                constexpr std::ptrdiff_t m_unPreviousWeaponHash = 0x1578;  
                constexpr std::ptrdiff_t m_unWeaponHash = 0x157C;  
                constexpr std::ptrdiff_t m_bInBuyZone = 0x1580;  
                constexpr std::ptrdiff_t m_bPreviouslyInBuyZone = 0x1581;  
                constexpr std::ptrdiff_t m_aimPunchAngle = 0x1584;  
                constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x1590;  
                constexpr std::ptrdiff_t m_aimPunchTickBase = 0x159C;  
                constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x15A0;  
                constexpr std::ptrdiff_t m_aimPunchCache = 0x15A8;  
                constexpr std::ptrdiff_t m_bInLanding = 0x15C8;  
                constexpr std::ptrdiff_t m_flLandingStartTime = 0x15CC;  
                constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x15D0;  
                constexpr std::ptrdiff_t m_bInBombZone = 0x15D1;  
                constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x15D2;  
                constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x15D4;  
                constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x15D8;  
                constexpr std::ptrdiff_t m_iRetakesOffering = 0x1730;  
                constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x1734;  
                constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x1738;  
                constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x1739;  
                constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x173C;  
                constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x1740;  
                constexpr std::ptrdiff_t m_bNeedToReApplyGloves = 0x1760;  
                constexpr std::ptrdiff_t m_EconGloves = 0x1768;  
                constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x1BB0;  
                constexpr std::ptrdiff_t m_bMustSyncRagdollState = 0x1BB1;  
                constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x1BB4;  
                constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x1BB8;  
                constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x1BC4;  
                constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x1BD0;  
                constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1C10;  
                constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x1C14;  
                constexpr std::ptrdiff_t m_bLastHeadBoneTransformIsValid = 0x2290;  
                constexpr std::ptrdiff_t m_lastLandTime = 0x2294;  
                constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x2298;  
                constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x22B4;  
                constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x22C0;  
                constexpr std::ptrdiff_t m_bLeftHanded = 0x22C1;  
                constexpr std::ptrdiff_t m_fSwitchedHandednessTime = 0x22C4;  
                constexpr std::ptrdiff_t m_flViewmodelOffsetX = 0x22C8;  
                constexpr std::ptrdiff_t m_flViewmodelOffsetY = 0x22CC;  
                constexpr std::ptrdiff_t m_flViewmodelOffsetZ = 0x22D0;  
                constexpr std::ptrdiff_t m_flViewmodelFOV = 0x22D4;  
                constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x22D8;  
                constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x2310;  
                constexpr std::ptrdiff_t m_vecBulletHitModels = 0x2360;  
                constexpr std::ptrdiff_t m_bIsWalking = 0x2378;  
                constexpr std::ptrdiff_t m_thirdPersonHeading = 0x2380;  
                constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x2398;  
                constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x23A8;  
                constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x23B8;  
                constexpr std::ptrdiff_t m_entitySpottedState = 0x23D0;  
                constexpr std::ptrdiff_t m_bIsScoped = 0x23E8;  
                constexpr std::ptrdiff_t m_bResumeZoom = 0x23E9;  
                constexpr std::ptrdiff_t m_bIsDefusing = 0x23EA;  
                constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x23EB;  
                constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x23EC;  
                constexpr std::ptrdiff_t m_flEmitSoundTime = 0x23F0;  
                constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x23F4;  
                constexpr std::ptrdiff_t m_nWhichBombZone = 0x23F8;  
                constexpr std::ptrdiff_t m_iShotsFired = 0x23FC;  
                constexpr std::ptrdiff_t m_flFlinchStack = 0x2400;  
                constexpr std::ptrdiff_t m_flVelocityModifier = 0x2404;  
                constexpr std::ptrdiff_t m_flHitHeading = 0x2408;  
                constexpr std::ptrdiff_t m_nHitBodyPart = 0x240C;  
                constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x2410;  
                constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x2414;  
                constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x2419;  
                constexpr std::ptrdiff_t m_ArmorValue = 0x241C;  
                constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x2420;  
                constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x2422;  
                constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x2424;  
                constexpr std::ptrdiff_t m_nLastKillerIndex = 0x2428;  
                constexpr std::ptrdiff_t m_bOldIsScoped = 0x242C;  
                constexpr std::ptrdiff_t m_bHasDeathInfo = 0x242D;  
                constexpr std::ptrdiff_t m_flDeathInfoTime = 0x2430;  
                constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x2434;  
                constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x2440;  
                constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x2444;  
                constexpr std::ptrdiff_t m_angStashedShootAngles = 0x2448;  
                constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x2454;  
                constexpr std::ptrdiff_t m_vecStashedVelocity = 0x2460;  
                constexpr std::ptrdiff_t m_angShootAngleHistory = 0x246C;  
                constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x2484;  
                constexpr std::ptrdiff_t m_vecVelocityHistory = 0x249C;  
                constexpr std::ptrdiff_t m_PredictedDamageTags = 0x24B8;  
                constexpr std::ptrdiff_t m_nPrevHighestReceivedDamageTagTick = 0x2508;  
                constexpr std::ptrdiff_t m_nHighestAppliedDamageTagTick = 0x250C;  
            }
            namespace C_RagdollPropAttached {
                constexpr std::ptrdiff_t m_boneIndexAttached = 0x1000;  
                constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0x1004;  
                constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0x1008;  
                constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0x1014;  
                constexpr std::ptrdiff_t m_vecOffset = 0x1020;  
                constexpr std::ptrdiff_t m_parentTime = 0x102C;  
                constexpr std::ptrdiff_t m_bHasParent = 0x1030;  
            }
            namespace C_BaseCSGrenadeProjectile {
                constexpr std::ptrdiff_t m_vInitialPosition = 0x1170;  
                constexpr std::ptrdiff_t m_vInitialVelocity = 0x117C;  
                constexpr std::ptrdiff_t m_nBounces = 0x1188;  
                constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0x1190;  
                constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0x1198;  
                constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0x119C;  
                constexpr std::ptrdiff_t m_flSpawnTime = 0x11A8;  
                constexpr std::ptrdiff_t vecLastTrailLinePos = 0x11AC;  
                constexpr std::ptrdiff_t flNextTrailLineTime = 0x11B8;  
                constexpr std::ptrdiff_t m_bExplodeEffectBegan = 0x11BC;  
                constexpr std::ptrdiff_t m_bCanCreateGrenadeTrail = 0x11BD;  
                constexpr std::ptrdiff_t m_nSnapshotTrajectoryEffectIndex = 0x11C0;  
                constexpr std::ptrdiff_t m_hSnapshotTrajectoryParticleSnapshot = 0x11C8;  
                constexpr std::ptrdiff_t m_arrTrajectoryTrailPoints = 0x11D0;  
                constexpr std::ptrdiff_t m_arrTrajectoryTrailPointCreationTimes = 0x11E8;  
                constexpr std::ptrdiff_t m_flTrajectoryTrailEffectCreationTime = 0x1200;  
            }
            namespace C_BaseTrigger {
                constexpr std::ptrdiff_t m_bDisabled = 0xD28;  
                constexpr std::ptrdiff_t m_bClientSidePredicted = 0xD29;  
            }
            namespace C_WeaponBaseItem {
                constexpr std::ptrdiff_t m_SequenceCompleteTimer = 0x1B20;  
                constexpr std::ptrdiff_t m_bRedraw = 0x1B38;  
            }
            namespace CEffectData {
                constexpr std::ptrdiff_t m_vOrigin = 0x8;  
                constexpr std::ptrdiff_t m_vStart = 0x14;  
                constexpr std::ptrdiff_t m_vNormal = 0x20;  
                constexpr std::ptrdiff_t m_vAngles = 0x2C;  
                constexpr std::ptrdiff_t m_hEntity = 0x38;  
                constexpr std::ptrdiff_t m_hOtherEntity = 0x3C;  
                constexpr std::ptrdiff_t m_flScale = 0x40;  
                constexpr std::ptrdiff_t m_flMagnitude = 0x44;  
                constexpr std::ptrdiff_t m_flRadius = 0x48;  
                constexpr std::ptrdiff_t m_nSurfaceProp = 0x4C;  
                constexpr std::ptrdiff_t m_nEffectIndex = 0x50;  
                constexpr std::ptrdiff_t m_nDamageType = 0x58;  
                constexpr std::ptrdiff_t m_nPenetrate = 0x5C;  
                constexpr std::ptrdiff_t m_nMaterial = 0x5E;  
                constexpr std::ptrdiff_t m_nHitBox = 0x60;  
                constexpr std::ptrdiff_t m_nColor = 0x62;  
                constexpr std::ptrdiff_t m_fFlags = 0x63;  
                constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64;  
                constexpr std::ptrdiff_t m_nAttachmentName = 0x68;  
                constexpr std::ptrdiff_t m_iEffectName = 0x6C;  
                constexpr std::ptrdiff_t m_nExplosionType = 0x6E;  
            }
            namespace C_MolotovGrenade {
            }
            namespace C_BaseButton {
                constexpr std::ptrdiff_t m_glowEntity = 0xD28;  
                constexpr std::ptrdiff_t m_usable = 0xD2C;  
                constexpr std::ptrdiff_t m_szDisplayText = 0xD30;  
            }
            namespace CCSPlayer_ViewModelServices {
                constexpr std::ptrdiff_t m_hViewModel = 0x40;  
            }
            namespace CInfoParticleTarget {
            }
            namespace CPlayer_MovementServices_Humanoid {
                constexpr std::ptrdiff_t m_flStepSoundTime = 0x1D8;  
                constexpr std::ptrdiff_t m_flFallVelocity = 0x1DC;  
                constexpr std::ptrdiff_t m_bInCrouch = 0x1E0;  
                constexpr std::ptrdiff_t m_nCrouchState = 0x1E4;  
                constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x1E8;  
                constexpr std::ptrdiff_t m_bDucked = 0x1EC;  
                constexpr std::ptrdiff_t m_bDucking = 0x1ED;  
                constexpr std::ptrdiff_t m_bInDuckJump = 0x1EE;  
                constexpr std::ptrdiff_t m_groundNormal = 0x1F0;  
                constexpr std::ptrdiff_t m_flSurfaceFriction = 0x1FC;  
                constexpr std::ptrdiff_t m_surfaceProps = 0x200;  
                constexpr std::ptrdiff_t m_nStepside = 0x210;  
            }
            namespace C_WeaponAug {
            }
            namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
            }
            namespace C_PointClientUIWorldPanel {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xD60;  
                constexpr std::ptrdiff_t m_bMoveViewToPlayerNextThink = 0xD61;  
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xD62;  
                constexpr std::ptrdiff_t m_anchorDeltaTransform = 0xD70;  
                constexpr std::ptrdiff_t m_pOffScreenIndicator = 0xF08;  
                constexpr std::ptrdiff_t m_bIgnoreInput = 0xF30;  
                constexpr std::ptrdiff_t m_bLit = 0xF31;  
                constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0xF32;  
                constexpr std::ptrdiff_t m_flWidth = 0xF34;  
                constexpr std::ptrdiff_t m_flHeight = 0xF38;  
                constexpr std::ptrdiff_t m_flDPI = 0xF3C;  
                constexpr std::ptrdiff_t m_flInteractDistance = 0xF40;  
                constexpr std::ptrdiff_t m_flDepthOffset = 0xF44;  
                constexpr std::ptrdiff_t m_unOwnerContext = 0xF48;  
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0xF4C;  
                constexpr std::ptrdiff_t m_unVerticalAlign = 0xF50;  
                constexpr std::ptrdiff_t m_unOrientation = 0xF54;  
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xF58;  
                constexpr std::ptrdiff_t m_vecCSSClasses = 0xF60;  
                constexpr std::ptrdiff_t m_bOpaque = 0xF78;  
                constexpr std::ptrdiff_t m_bNoDepth = 0xF79;  
                constexpr std::ptrdiff_t m_bRenderBackface = 0xF7A;  
                constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0xF7B;  
                constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0xF7C;  
                constexpr std::ptrdiff_t m_bGrabbable = 0xF7D;  
                constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0xF7E;  
                constexpr std::ptrdiff_t m_bDisableMipGen = 0xF7F;  
                constexpr std::ptrdiff_t m_nExplicitImageLayout = 0xF80;  
            }
            namespace C_CSMinimapBoundary {
            }
            namespace CCSGameModeRules_Deathmatch {
                constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x30;  
                constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x34;  
                constexpr std::ptrdiff_t m_sDMBonusWeapon = 0x38;  
            }
            namespace C_CSGO_EndOfMatchCharacterPosition {
            }
            namespace C_SoundOpvarSetAABBEntity {
            }
            namespace C_GameRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8;  
                constexpr std::ptrdiff_t m_nTotalPausedTicks = 0x30;  
                constexpr std::ptrdiff_t m_nPauseStartTick = 0x34;  
                constexpr std::ptrdiff_t m_bGamePaused = 0x38;  
            }
            namespace C_PropDoorRotating {
            }
            namespace C_Team {
                constexpr std::ptrdiff_t m_aPlayerControllers = 0x568;  
                constexpr std::ptrdiff_t m_aPlayers = 0x580;  
                constexpr std::ptrdiff_t m_iScore = 0x598;  
                constexpr std::ptrdiff_t m_szTeamname = 0x59C;  
            }
            namespace C_SoundAreaEntityOrientedBox {
                constexpr std::ptrdiff_t m_vMin = 0x590;  
                constexpr std::ptrdiff_t m_vMax = 0x59C;  
            }
            namespace C_TextureBasedAnimatable {
                constexpr std::ptrdiff_t m_bLoop = 0xD28;  
                constexpr std::ptrdiff_t m_flFPS = 0xD2C;  
                constexpr std::ptrdiff_t m_hPositionKeys = 0xD30;  
                constexpr std::ptrdiff_t m_hRotationKeys = 0xD38;  
                constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0xD40;  
                constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0xD4C;  
                constexpr std::ptrdiff_t m_flStartTime = 0xD58;  
                constexpr std::ptrdiff_t m_flStartFrame = 0xD5C;  
            }
            namespace C_SoundOpvarSetPointEntity {
            }
            namespace C_LightOrthoEntity {
            }
            namespace CCSPlayer_WaterServices {
                constexpr std::ptrdiff_t m_flWaterJumpTime = 0x40;  
                constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x44;  
                constexpr std::ptrdiff_t m_flSwimSoundTime = 0x50;  
            }
            namespace CSkyboxReference {
                constexpr std::ptrdiff_t m_worldGroupId = 0x568;  
                constexpr std::ptrdiff_t m_hSkyCamera = 0x56C;  
            }
            namespace C_TonemapController2Alias_env_tonemap_controller2 {
            }
            namespace CProjectedTextureBase {
                constexpr std::ptrdiff_t m_hTargetEntity = 0xC;  
                constexpr std::ptrdiff_t m_bState = 0x10;  
                constexpr std::ptrdiff_t m_bAlwaysUpdate = 0x11;  
                constexpr std::ptrdiff_t m_flLightFOV = 0x14;  
                constexpr std::ptrdiff_t m_bEnableShadows = 0x18;  
                constexpr std::ptrdiff_t m_bSimpleProjection = 0x19;  
                constexpr std::ptrdiff_t m_bLightOnlyTarget = 0x1A;  
                constexpr std::ptrdiff_t m_bLightWorld = 0x1B;  
                constexpr std::ptrdiff_t m_bCameraSpace = 0x1C;  
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x20;  
                constexpr std::ptrdiff_t m_LightColor = 0x24;  
                constexpr std::ptrdiff_t m_flIntensity = 0x28;  
                constexpr std::ptrdiff_t m_flLinearAttenuation = 0x2C;  
                constexpr std::ptrdiff_t m_flQuadraticAttenuation = 0x30;  
                constexpr std::ptrdiff_t m_bVolumetric = 0x34;  
                constexpr std::ptrdiff_t m_flVolumetricIntensity = 0x38;  
                constexpr std::ptrdiff_t m_flNoiseStrength = 0x3C;  
                constexpr std::ptrdiff_t m_flFlashlightTime = 0x40;  
                constexpr std::ptrdiff_t m_nNumPlanes = 0x44;  
                constexpr std::ptrdiff_t m_flPlaneOffset = 0x48;  
                constexpr std::ptrdiff_t m_flColorTransitionTime = 0x4C;  
                constexpr std::ptrdiff_t m_flAmbient = 0x50;  
                constexpr std::ptrdiff_t m_SpotlightTextureName = 0x54;  
                constexpr std::ptrdiff_t m_nSpotlightTextureFrame = 0x254;  
                constexpr std::ptrdiff_t m_nShadowQuality = 0x258;  
                constexpr std::ptrdiff_t m_flNearZ = 0x25C;  
                constexpr std::ptrdiff_t m_flFarZ = 0x260;  
                constexpr std::ptrdiff_t m_flProjectionSize = 0x264;  
                constexpr std::ptrdiff_t m_flRotation = 0x268;  
                constexpr std::ptrdiff_t m_bFlipHorizontal = 0x26C;  
            }
            namespace CCSPlayerController_InventoryServices {
                constexpr std::ptrdiff_t m_unMusicID = 0x40;  
                constexpr std::ptrdiff_t m_rank = 0x44;  
                constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x5C;  
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x60;  
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x64;  
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x68;  
                constexpr std::ptrdiff_t m_nPersonaDataXpTrailLevel = 0x6C;  
                constexpr std::ptrdiff_t m_vecServerAuthoritativeWeaponSlots = 0x70;  
            }
            namespace C_PathParticleRopeAlias_path_particle_rope_clientside {
            }
            namespace CPlayer_UseServices {
            }
            namespace C_CSGOViewModel {
                constexpr std::ptrdiff_t m_bShouldIgnoreOffsetAndAccuracy = 0x1021;  
                constexpr std::ptrdiff_t m_nLastKnownAssociatedWeaponEntIndex = 0x1024;  
                constexpr std::ptrdiff_t m_bNeedToQueueHighResComposite = 0x1028;  
                constexpr std::ptrdiff_t m_vLoweredWeaponOffset = 0x1078;  
            }
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30;  
            }
            namespace C_EnvLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture = 0x1548;  
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1550;  
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1558;  
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1560;  
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x1568;  
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x1574;  
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1580;  
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x1584;  
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x1588;  
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x158C;  
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1590;  
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1594;  
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1598;  
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x159C;  
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x15A0;  
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x15A4;  
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x15B1;  
            }
            namespace C_ViewmodelAttachmentModel {
                constexpr std::ptrdiff_t m_bShouldFrontFaceCullLeftHanded = 0xF90;  
                constexpr std::ptrdiff_t m_bCreatedLeftHanded = 0xF91;  
            }
            namespace CCSPointScriptExtensions_player_controller {
            }
            namespace C_Flashbang {
            }
            namespace CSPerRoundStats_t {
                constexpr std::ptrdiff_t m_iKills = 0x30;  
                constexpr std::ptrdiff_t m_iDeaths = 0x34;  
                constexpr std::ptrdiff_t m_iAssists = 0x38;  
                constexpr std::ptrdiff_t m_iDamage = 0x3C;  
                constexpr std::ptrdiff_t m_iEquipmentValue = 0x40;  
                constexpr std::ptrdiff_t m_iMoneySaved = 0x44;  
                constexpr std::ptrdiff_t m_iKillReward = 0x48;  
                constexpr std::ptrdiff_t m_iLiveTime = 0x4C;  
                constexpr std::ptrdiff_t m_iHeadShotKills = 0x50;  
                constexpr std::ptrdiff_t m_iObjective = 0x54;  
                constexpr std::ptrdiff_t m_iCashEarned = 0x58;  
                constexpr std::ptrdiff_t m_iUtilityDamage = 0x5C;  
                constexpr std::ptrdiff_t m_iEnemiesFlashed = 0x60;  
            }
            namespace CRagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x568;  
            }
            namespace C_TeamRoundTimer {
                constexpr std::ptrdiff_t m_bTimerPaused = 0x568;  
                constexpr std::ptrdiff_t m_flTimeRemaining = 0x56C;  
                constexpr std::ptrdiff_t m_flTimerEndTime = 0x570;  
                constexpr std::ptrdiff_t m_bIsDisabled = 0x574;  
                constexpr std::ptrdiff_t m_bShowInHUD = 0x575;  
                constexpr std::ptrdiff_t m_nTimerLength = 0x578;  
                constexpr std::ptrdiff_t m_nTimerInitialLength = 0x57C;  
                constexpr std::ptrdiff_t m_nTimerMaxLength = 0x580;  
                constexpr std::ptrdiff_t m_bAutoCountdown = 0x584;  
                constexpr std::ptrdiff_t m_nSetupTimeLength = 0x588;  
                constexpr std::ptrdiff_t m_nState = 0x58C;  
                constexpr std::ptrdiff_t m_bStartPaused = 0x590;  
                constexpr std::ptrdiff_t m_bInCaptureWatchState = 0x591;  
                constexpr std::ptrdiff_t m_flTotalTime = 0x594;  
                constexpr std::ptrdiff_t m_bStopWatchTimer = 0x598;  
                constexpr std::ptrdiff_t m_bFireFinished = 0x599;  
                constexpr std::ptrdiff_t m_bFire5MinRemain = 0x59A;  
                constexpr std::ptrdiff_t m_bFire4MinRemain = 0x59B;  
                constexpr std::ptrdiff_t m_bFire3MinRemain = 0x59C;  
                constexpr std::ptrdiff_t m_bFire2MinRemain = 0x59D;  
                constexpr std::ptrdiff_t m_bFire1MinRemain = 0x59E;  
                constexpr std::ptrdiff_t m_bFire30SecRemain = 0x59F;  
                constexpr std::ptrdiff_t m_bFire10SecRemain = 0x5A0;  
                constexpr std::ptrdiff_t m_bFire5SecRemain = 0x5A1;  
                constexpr std::ptrdiff_t m_bFire4SecRemain = 0x5A2;  
                constexpr std::ptrdiff_t m_bFire3SecRemain = 0x5A3;  
                constexpr std::ptrdiff_t m_bFire2SecRemain = 0x5A4;  
                constexpr std::ptrdiff_t m_bFire1SecRemain = 0x5A5;  
                constexpr std::ptrdiff_t m_nOldTimerLength = 0x5A8;  
                constexpr std::ptrdiff_t m_nOldTimerState = 0x5AC;  
            }
            namespace WeaponPurchaseCount_t {
                constexpr std::ptrdiff_t m_nItemDefIndex = 0x30;  
                constexpr std::ptrdiff_t m_nCount = 0x32;  
            }
            namespace C_SmokeGrenade {
            }
            namespace C_WeaponGalilAR {
            }
            namespace C_WorldModelGloves {
            }
            namespace C_EnvProjectedTexture {
            }
            namespace CPathSimple {
                constexpr std::ptrdiff_t m_pathString = 0x5C0;  
            }
            namespace CCSPlayerBase_CameraServices {
                constexpr std::ptrdiff_t m_iFOV = 0x210;  
                constexpr std::ptrdiff_t m_iFOVStart = 0x214;  
                constexpr std::ptrdiff_t m_flFOVTime = 0x218;  
                constexpr std::ptrdiff_t m_flFOVRate = 0x21C;  
                constexpr std::ptrdiff_t m_hZoomOwner = 0x220;  
                constexpr std::ptrdiff_t m_flLastShotFOV = 0x224;  
            }
            namespace CPointOffScreenIndicatorUi {
                constexpr std::ptrdiff_t m_bBeenEnabled = 0xF90;  
                constexpr std::ptrdiff_t m_bHide = 0xF91;  
                constexpr std::ptrdiff_t m_flSeenTargetTime = 0xF94;  
                constexpr std::ptrdiff_t m_pTargetPanel = 0xF98;  
            }
            namespace CCSPointScriptExtensions_entity {
            }
            namespace CBodyComponentBaseModelEntity {
            }
            namespace C_CSWeaponBaseGun {
                constexpr std::ptrdiff_t m_zoomLevel = 0x1B20;  
                constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x1B24;  
                constexpr std::ptrdiff_t m_iSilencerBodygroup = 0x1B28;  
                constexpr std::ptrdiff_t m_silencedModelIndex = 0x1B38;  
                constexpr std::ptrdiff_t m_inPrecache = 0x1B3C;  
                constexpr std::ptrdiff_t m_bNeedsBoltAction = 0x1B3D;  
            }
            namespace C_SkyCamera {
                constexpr std::ptrdiff_t m_skyboxData = 0x568;  
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x5F8;  
                constexpr std::ptrdiff_t m_bUseAngles = 0x5FC;  
                constexpr std::ptrdiff_t m_pNext = 0x600;  
            }
            namespace C_World {
            }
            namespace C_EntityDissolve {
                constexpr std::ptrdiff_t m_flStartTime = 0xD30;  
                constexpr std::ptrdiff_t m_flFadeInStart = 0xD34;  
                constexpr std::ptrdiff_t m_flFadeInLength = 0xD38;  
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0xD3C;  
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0xD40;  
                constexpr std::ptrdiff_t m_flFadeOutStart = 0xD44;  
                constexpr std::ptrdiff_t m_flFadeOutLength = 0xD48;  
                constexpr std::ptrdiff_t m_flNextSparkTime = 0xD4C;  
                constexpr std::ptrdiff_t m_nDissolveType = 0xD50;  
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0xD54;  
                constexpr std::ptrdiff_t m_nMagnitude = 0xD60;  
                constexpr std::ptrdiff_t m_bCoreExplode = 0xD64;  
                constexpr std::ptrdiff_t m_bLinkedToServerEnt = 0xD65;  
            }
            namespace CCSObserver_UseServices {
            }
            namespace C_fogplayerparams_t {
                constexpr std::ptrdiff_t m_hCtrl = 0x8;  
                constexpr std::ptrdiff_t m_flTransitionTime = 0xC;  
                constexpr std::ptrdiff_t m_OldColor = 0x10;  
                constexpr std::ptrdiff_t m_flOldStart = 0x14;  
                constexpr std::ptrdiff_t m_flOldEnd = 0x18;  
                constexpr std::ptrdiff_t m_flOldMaxDensity = 0x1C;  
                constexpr std::ptrdiff_t m_flOldHDRColorScale = 0x20;  
                constexpr std::ptrdiff_t m_flOldFarZ = 0x24;  
                constexpr std::ptrdiff_t m_NewColor = 0x28;  
                constexpr std::ptrdiff_t m_flNewStart = 0x2C;  
                constexpr std::ptrdiff_t m_flNewEnd = 0x30;  
                constexpr std::ptrdiff_t m_flNewMaxDensity = 0x34;  
                constexpr std::ptrdiff_t m_flNewHDRColorScale = 0x38;  
                constexpr std::ptrdiff_t m_flNewFarZ = 0x3C;  
            }
            namespace C_CSPlayerPawnBase {
                constexpr std::ptrdiff_t m_pPingServices = 0x1360;  
                constexpr std::ptrdiff_t m_pViewModelServices = 0x1368;  
                constexpr std::ptrdiff_t m_fRenderingClipPlane = 0x1370;  
                constexpr std::ptrdiff_t m_nLastClipPlaneSetupFrame = 0x1380;  
                constexpr std::ptrdiff_t m_vecLastClipCameraPos = 0x1384;  
                constexpr std::ptrdiff_t m_vecLastClipCameraForward = 0x1390;  
                constexpr std::ptrdiff_t m_bClipHitStaticWorld = 0x139C;  
                constexpr std::ptrdiff_t m_bCachedPlaneIsValid = 0x139D;  
                constexpr std::ptrdiff_t m_pClippingWeapon = 0x13A0;  
                constexpr std::ptrdiff_t m_previousPlayerState = 0x13A8;  
                constexpr std::ptrdiff_t m_iPlayerState = 0x13AC;  
                constexpr std::ptrdiff_t m_bIsRescuing = 0x13B0;  
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x13B4;  
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTimeLast = 0x13B8;  
                constexpr std::ptrdiff_t m_bGunGameImmunity = 0x13BC;  
                constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0x13BD;  
                constexpr std::ptrdiff_t m_fMolotovUseTime = 0x13C0;  
                constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x13C4;  
                constexpr std::ptrdiff_t m_iThrowGrenadeCounter = 0x13C8;  
                constexpr std::ptrdiff_t m_flLastSpawnTimeIndex = 0x13CC;  
                constexpr std::ptrdiff_t m_iProgressBarDuration = 0x13D0;  
                constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x13D4;  
                constexpr std::ptrdiff_t m_vecIntroStartEyePosition = 0x13D8;  
                constexpr std::ptrdiff_t m_vecIntroStartPlayerForward = 0x13E4;  
                constexpr std::ptrdiff_t m_flClientDeathTime = 0x13F0;  
                constexpr std::ptrdiff_t m_bScreenTearFrameCaptured = 0x13F4;  
                constexpr std::ptrdiff_t m_flFlashBangTime = 0x13F8;  
                constexpr std::ptrdiff_t m_flFlashScreenshotAlpha = 0x13FC;  
                constexpr std::ptrdiff_t m_flFlashOverlayAlpha = 0x1400;  
                constexpr std::ptrdiff_t m_bFlashBuildUp = 0x1404;  
                constexpr std::ptrdiff_t m_bFlashDspHasBeenCleared = 0x1405;  
                constexpr std::ptrdiff_t m_bFlashScreenshotHasBeenGrabbed = 0x1406;  
                constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x1408;  
                constexpr std::ptrdiff_t m_flFlashDuration = 0x140C;  
                constexpr std::ptrdiff_t m_iHealthBarRenderMaskIndex = 0x1410;  
                constexpr std::ptrdiff_t m_flHealthFadeValue = 0x1414;  
                constexpr std::ptrdiff_t m_flHealthFadeAlpha = 0x1418;  
                constexpr std::ptrdiff_t m_flDeathCCWeight = 0x1428;  
                constexpr std::ptrdiff_t m_flPrevRoundEndTime = 0x142C;  
                constexpr std::ptrdiff_t m_flPrevMatchEndTime = 0x1430;  
                constexpr std::ptrdiff_t m_angEyeAngles = 0x1438;  
                constexpr std::ptrdiff_t m_fNextThinkPushAway = 0x1450;  
                constexpr std::ptrdiff_t m_bShouldAutobuyDMWeapons = 0x1454;  
                constexpr std::ptrdiff_t m_bShouldAutobuyNow = 0x1455;  
                constexpr std::ptrdiff_t m_iIDEntIndex = 0x1458;  
                constexpr std::ptrdiff_t m_delayTargetIDTimer = 0x1460;  
                constexpr std::ptrdiff_t m_iTargetItemEntIdx = 0x1478;  
                constexpr std::ptrdiff_t m_iOldIDEntIndex = 0x147C;  
                constexpr std::ptrdiff_t m_holdTargetIDTimer = 0x1480;  
                constexpr std::ptrdiff_t m_flCurrentMusicStartTime = 0x149C;  
                constexpr std::ptrdiff_t m_flMusicRoundStartTime = 0x14A0;  
                constexpr std::ptrdiff_t m_bDeferStartMusicOnWarmup = 0x14A4;  
                constexpr std::ptrdiff_t m_cycleLatch = 0x14A8;  
                constexpr std::ptrdiff_t m_serverIntendedCycle = 0x14AC;  
                constexpr std::ptrdiff_t m_flLastSmokeOverlayAlpha = 0x14B0;  
                constexpr std::ptrdiff_t m_flLastSmokeAge = 0x14B4;  
                constexpr std::ptrdiff_t m_vLastSmokeOverlayColor = 0x14B8;  
                constexpr std::ptrdiff_t m_nPlayerSmokedFx = 0x14C4;  
                constexpr std::ptrdiff_t m_nPlayerInfernoBodyFx = 0x14C8;  
                constexpr std::ptrdiff_t m_nPlayerInfernoFootFx = 0x14CC;  
                constexpr std::ptrdiff_t m_flNextMagDropTime = 0x14D0;  
                constexpr std::ptrdiff_t m_nLastMagDropAttachmentIndex = 0x14D4;  
                constexpr std::ptrdiff_t m_vecLastAliveLocalVelocity = 0x14D8;  
                constexpr std::ptrdiff_t m_bGuardianShouldSprayCustomXMark = 0x1500;  
                constexpr std::ptrdiff_t m_hOriginalController = 0x1508;  
            }
            namespace C_Item_Healthshot {
            }
            namespace C_EnvWindShared {
                constexpr std::ptrdiff_t m_flStartTime = 0x8;  
                constexpr std::ptrdiff_t m_iWindSeed = 0xC;  
                constexpr std::ptrdiff_t m_iMinWind = 0x10;  
                constexpr std::ptrdiff_t m_iMaxWind = 0x12;  
                constexpr std::ptrdiff_t m_windRadius = 0x14;  
                constexpr std::ptrdiff_t m_iMinGust = 0x18;  
                constexpr std::ptrdiff_t m_iMaxGust = 0x1A;  
                constexpr std::ptrdiff_t m_flMinGustDelay = 0x1C;  
                constexpr std::ptrdiff_t m_flMaxGustDelay = 0x20;  
                constexpr std::ptrdiff_t m_flGustDuration = 0x24;  
                constexpr std::ptrdiff_t m_iGustDirChange = 0x28;  
                constexpr std::ptrdiff_t m_location = 0x2C;  
                constexpr std::ptrdiff_t m_iszGustSound = 0x38;  
                constexpr std::ptrdiff_t m_iWindDir = 0x3C;  
                constexpr std::ptrdiff_t m_flWindSpeed = 0x40;  
                constexpr std::ptrdiff_t m_currentWindVector = 0x44;  
                constexpr std::ptrdiff_t m_CurrentSwayVector = 0x50;  
                constexpr std::ptrdiff_t m_PrevSwayVector = 0x5C;  
                constexpr std::ptrdiff_t m_iInitialWindDir = 0x68;  
                constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x6C;  
                constexpr std::ptrdiff_t m_flVariationTime = 0x70;  
                constexpr std::ptrdiff_t m_flSwayTime = 0x74;  
                constexpr std::ptrdiff_t m_flSimTime = 0x78;  
                constexpr std::ptrdiff_t m_flSwitchTime = 0x7C;  
                constexpr std::ptrdiff_t m_flAveWindSpeed = 0x80;  
                constexpr std::ptrdiff_t m_bGusting = 0x84;  
                constexpr std::ptrdiff_t m_flWindAngleVariation = 0x88;  
                constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x8C;  
                constexpr std::ptrdiff_t m_hEntOwner = 0x90;  
            }
            namespace C_PostProcessingVolume {
                constexpr std::ptrdiff_t m_hPostSettings = 0xD40;  
                constexpr std::ptrdiff_t m_flFadeDuration = 0xD48;  
                constexpr std::ptrdiff_t m_flMinLogExposure = 0xD4C;  
                constexpr std::ptrdiff_t m_flMaxLogExposure = 0xD50;  
                constexpr std::ptrdiff_t m_flMinExposure = 0xD54;  
                constexpr std::ptrdiff_t m_flMaxExposure = 0xD58;  
                constexpr std::ptrdiff_t m_flExposureCompensation = 0xD5C;  
                constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0xD60;  
                constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0xD64;  
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0xD68;  
                constexpr std::ptrdiff_t m_bMaster = 0xD6C;  
                constexpr std::ptrdiff_t m_bExposureControl = 0xD6D;  
                constexpr std::ptrdiff_t m_flRate = 0xD70;  
                constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0xD74;  
                constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0xD78;  
                constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0xD7C;  
            }
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_hPlayerPing = 0x40;  
            }
            namespace CPlayer_FlashlightServices {
            }
            namespace CServerOnlyModelEntity {
            }
            namespace C_AttributeContainer {
                constexpr std::ptrdiff_t m_Item = 0x50;  
                constexpr std::ptrdiff_t m_iExternalItemProviderRegisteredToken = 0x498;  
                constexpr std::ptrdiff_t m_ullRegisteredAsItemID = 0x4A0;  
            }
            namespace C_FuncRotating {
            }
            namespace C_BaseFire {
                constexpr std::ptrdiff_t m_flScale = 0x568;  
                constexpr std::ptrdiff_t m_flStartScale = 0x56C;  
                constexpr std::ptrdiff_t m_flScaleTime = 0x570;  
                constexpr std::ptrdiff_t m_nFlags = 0x574;  
            }
            namespace CBasePlayerController {
                constexpr std::ptrdiff_t m_nFinalPredictedTick = 0x570;  
                constexpr std::ptrdiff_t m_CommandContext = 0x578;  
                constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x620;  
                constexpr std::ptrdiff_t m_nTickBase = 0x628;  
                constexpr std::ptrdiff_t m_hPawn = 0x62C;  
                constexpr std::ptrdiff_t m_bKnownTeamMismatch = 0x630;  
                constexpr std::ptrdiff_t m_hPredictedPawn = 0x634;  
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x638;  
                constexpr std::ptrdiff_t m_hSplitOwner = 0x63C;  
                constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x640;  
                constexpr std::ptrdiff_t m_bIsHLTV = 0x658;  
                constexpr std::ptrdiff_t m_iConnected = 0x65C;  
                constexpr std::ptrdiff_t m_iszPlayerName = 0x660;  
                constexpr std::ptrdiff_t m_steamID = 0x6E8;  
                constexpr std::ptrdiff_t m_bIsLocalPlayerController = 0x6F0;  
                constexpr std::ptrdiff_t m_iDesiredFOV = 0x6F4;  
            }
            namespace CPointTemplateAPI {
            }
            namespace C_DecoyProjectile {
                constexpr std::ptrdiff_t m_nDecoyShotTick = 0x1208;  
                constexpr std::ptrdiff_t m_nClientLastKnownDecoyShotTick = 0x120C;  
                constexpr std::ptrdiff_t m_flTimeParticleEffectSpawn = 0x1230;  
            }
            namespace C_WaterBullet {
            }
            namespace C_CSGO_PreviewPlayer {
                constexpr std::ptrdiff_t m_animgraph = 0x3A40;  
                constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x3A48;  
                constexpr std::ptrdiff_t m_flInitialModelScale = 0x3A50;  
            }
            namespace CBaseAnimGraphController {
                constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x18;  
                constexpr std::ptrdiff_t m_bSequenceFinished = 0x14A8;  
                constexpr std::ptrdiff_t m_flSoundSyncTime = 0x14AC;  
                constexpr std::ptrdiff_t m_nActiveIKChainMask = 0x14B0;  
                constexpr std::ptrdiff_t m_hSequence = 0x14B4;  
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x14B8;  
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x14BC;  
                constexpr std::ptrdiff_t m_nAnimLoopMode = 0x14C0;  
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x14C4;  
                constexpr std::ptrdiff_t m_nNotifyState = 0x14D0;  
                constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x14D2;  
                constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x14D3;  
                constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x14D4;  
                constexpr std::ptrdiff_t m_flPrevAnimUpdateTime = 0x14D8;  
            }
            namespace CCSPointScriptEntity {
            }
            namespace C_C4 {
                constexpr std::ptrdiff_t m_szScreenText = 0x1B20;  
                constexpr std::ptrdiff_t m_activeLightParticleIndex = 0x1B40;  
                constexpr std::ptrdiff_t m_eActiveLightEffect = 0x1B44;  
                constexpr std::ptrdiff_t m_bStartedArming = 0x1B48;  
                constexpr std::ptrdiff_t m_fArmedTime = 0x1B4C;  
                constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x1B50;  
                constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x1B51;  
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1B58;  
                constexpr std::ptrdiff_t m_nSpotRules = 0x1B70;  
                constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x1B74;  
                constexpr std::ptrdiff_t m_bBombPlanted = 0x1B7B;  
            }
            namespace CBaseAnimGraph {
                constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0xDA0;  
                constexpr std::ptrdiff_t m_bSuppressAnimEventSounds = 0xDA2;  
                constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0xDB0;  
                constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0xDB4;  
                constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0xDB8;  
                constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0xDC4;  
                constexpr std::ptrdiff_t m_vecForce = 0xDC8;  
                constexpr std::ptrdiff_t m_nForceBone = 0xDD4;  
                constexpr std::ptrdiff_t m_pClientsideRagdoll = 0xDD8;  
                constexpr std::ptrdiff_t m_bBuiltRagdoll = 0xDE0;  
                constexpr std::ptrdiff_t m_RagdollPose = 0xDF8;  
                constexpr std::ptrdiff_t m_bRagdollClientSide = 0xE40;  
                constexpr std::ptrdiff_t m_bHasAnimatedMaterialAttributes = 0xE50;  
            }
            namespace C_PointEntity {
            }
            namespace C_MultiplayRules {
            }
            namespace CBasePlayerControllerAPI {
            }
            namespace C_PathParticleRope {
                constexpr std::ptrdiff_t m_bStartActive = 0x570;  
                constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x574;  
                constexpr std::ptrdiff_t m_iszEffectName = 0x578;  
                constexpr std::ptrdiff_t m_PathNodes_Name = 0x580;  
                constexpr std::ptrdiff_t m_flParticleSpacing = 0x598;  
                constexpr std::ptrdiff_t m_flSlack = 0x59C;  
                constexpr std::ptrdiff_t m_flRadius = 0x5A0;  
                constexpr std::ptrdiff_t m_ColorTint = 0x5A4;  
                constexpr std::ptrdiff_t m_nEffectState = 0x5A8;  
                constexpr std::ptrdiff_t m_iEffectIndex = 0x5B0;  
                constexpr std::ptrdiff_t m_PathNodes_Position = 0x5B8;  
                constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x5D0;  
                constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x5E8;  
                constexpr std::ptrdiff_t m_PathNodes_Color = 0x600;  
                constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x618;  
                constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x630;  
            }
            namespace CCSPointScriptExtensions_CCSWeaponBaseVData {
            }
            namespace C_SoundEventAABBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x628;  
                constexpr std::ptrdiff_t m_vMaxs = 0x634;  
            }
            namespace C_WeaponP90 {
            }
            namespace CEnvSoundscapeAlias_snd_soundscape {
            }
            namespace C_BasePlayerWeapon {
                constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0x1668;  
                constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0x166C;  
                constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0x1670;  
                constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0x1674;  
                constexpr std::ptrdiff_t m_iClip1 = 0x1678;  
                constexpr std::ptrdiff_t m_iClip2 = 0x167C;  
                constexpr std::ptrdiff_t m_pReserveAmmo = 0x1680;  
            }
            namespace CBasePlayerWeaponVData {
                constexpr std::ptrdiff_t m_szWorldModel = 0x28;  
                constexpr std::ptrdiff_t m_sToolsOnlyOwnerModelName = 0x108;  
                constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x1E8;  
                constexpr std::ptrdiff_t m_bAllowFlipping = 0x1E9;  
                constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x1F0;  
                constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x210;  
                constexpr std::ptrdiff_t m_bLinkedCooldowns = 0x2F0;  
                constexpr std::ptrdiff_t m_iFlags = 0x2F1;  
                constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x2F2;  
                constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x2F3;  
                constexpr std::ptrdiff_t m_iMaxClip1 = 0x2F4;  
                constexpr std::ptrdiff_t m_iMaxClip2 = 0x2F8;  
                constexpr std::ptrdiff_t m_iDefaultClip1 = 0x2FC;  
                constexpr std::ptrdiff_t m_iDefaultClip2 = 0x300;  
                constexpr std::ptrdiff_t m_bReserveAmmoAsClips = 0x304;  
                constexpr std::ptrdiff_t m_iWeight = 0x308;  
                constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x30C;  
                constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x30D;  
                constexpr std::ptrdiff_t m_iRumbleEffect = 0x310;  
                constexpr std::ptrdiff_t m_iSlot = 0x314;  
                constexpr std::ptrdiff_t m_iPosition = 0x318;  
                constexpr std::ptrdiff_t m_aShootSounds = 0x320;  
            }
            namespace C_Fish {
                constexpr std::ptrdiff_t m_pos = 0xF88;  
                constexpr std::ptrdiff_t m_vel = 0xF94;  
                constexpr std::ptrdiff_t m_angles = 0xFA0;  
                constexpr std::ptrdiff_t m_localLifeState = 0xFAC;  
                constexpr std::ptrdiff_t m_deathDepth = 0xFB0;  
                constexpr std::ptrdiff_t m_deathAngle = 0xFB4;  
                constexpr std::ptrdiff_t m_buoyancy = 0xFB8;  
                constexpr std::ptrdiff_t m_wiggleTimer = 0xFC0;  
                constexpr std::ptrdiff_t m_wigglePhase = 0xFD8;  
                constexpr std::ptrdiff_t m_wiggleRate = 0xFDC;  
                constexpr std::ptrdiff_t m_actualPos = 0xFE0;  
                constexpr std::ptrdiff_t m_actualAngles = 0xFEC;  
                constexpr std::ptrdiff_t m_poolOrigin = 0xFF8;  
                constexpr std::ptrdiff_t m_waterLevel = 0x1004;  
                constexpr std::ptrdiff_t m_gotUpdate = 0x1008;  
                constexpr std::ptrdiff_t m_x = 0x100C;  
                constexpr std::ptrdiff_t m_y = 0x1010;  
                constexpr std::ptrdiff_t m_z = 0x1014;  
                constexpr std::ptrdiff_t m_angle = 0x1018;  
                constexpr std::ptrdiff_t m_errorHistory = 0x101C;  
                constexpr std::ptrdiff_t m_errorHistoryIndex = 0x106C;  
                constexpr std::ptrdiff_t m_errorHistoryCount = 0x1070;  
                constexpr std::ptrdiff_t m_averageError = 0x1074;  
            }
            namespace CTimeline {
                constexpr std::ptrdiff_t m_flValues = 0x10;  
                constexpr std::ptrdiff_t m_nValueCounts = 0x110;  
                constexpr std::ptrdiff_t m_nBucketCount = 0x210;  
                constexpr std::ptrdiff_t m_flInterval = 0x214;  
                constexpr std::ptrdiff_t m_flFinalValue = 0x218;  
                constexpr std::ptrdiff_t m_nCompressionType = 0x21C;  
                constexpr std::ptrdiff_t m_bStopped = 0x220;  
            }
            namespace C_WeaponAWP {
            }
            namespace C_BasePlayerPawn {
                constexpr std::ptrdiff_t m_pWeaponServices = 0x11A8;  
                constexpr std::ptrdiff_t m_pItemServices = 0x11B0;  
                constexpr std::ptrdiff_t m_pAutoaimServices = 0x11B8;  
                constexpr std::ptrdiff_t m_pObserverServices = 0x11C0;  
                constexpr std::ptrdiff_t m_pWaterServices = 0x11C8;  
                constexpr std::ptrdiff_t m_pUseServices = 0x11D0;  
                constexpr std::ptrdiff_t m_pFlashlightServices = 0x11D8;  
                constexpr std::ptrdiff_t m_pCameraServices = 0x11E0;  
                constexpr std::ptrdiff_t m_pMovementServices = 0x11E8;  
                constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0x11F8;  
                constexpr std::ptrdiff_t m_nHighestConsumedServerViewAngleChangeIndex = 0x1248;  
                constexpr std::ptrdiff_t v_angle = 0x124C;  
                constexpr std::ptrdiff_t v_anglePrevious = 0x1258;  
                constexpr std::ptrdiff_t m_iHideHUD = 0x1264;  
                constexpr std::ptrdiff_t m_skybox3d = 0x1268;  
                constexpr std::ptrdiff_t m_flDeathTime = 0x12F8;  
                constexpr std::ptrdiff_t m_vecPredictionError = 0x12FC;  
                constexpr std::ptrdiff_t m_flPredictionErrorTime = 0x1308;  
                constexpr std::ptrdiff_t m_vecLastCameraSetupLocalOrigin = 0x130C;  
                constexpr std::ptrdiff_t m_flLastCameraSetupTime = 0x1318;  
                constexpr std::ptrdiff_t m_flFOVSensitivityAdjust = 0x131C;  
                constexpr std::ptrdiff_t m_flMouseSensitivity = 0x1320;  
                constexpr std::ptrdiff_t m_vOldOrigin = 0x1324;  
                constexpr std::ptrdiff_t m_flOldSimulationTime = 0x1330;  
                constexpr std::ptrdiff_t m_nLastExecutedCommandNumber = 0x1334;  
                constexpr std::ptrdiff_t m_nLastExecutedCommandTick = 0x1338;  
                constexpr std::ptrdiff_t m_hController = 0x133C;  
                constexpr std::ptrdiff_t m_bIsSwappingToPredictableController = 0x1340;  
            }
            namespace CAttributeManager {
                constexpr std::ptrdiff_t m_Providers = 0x8;  
                constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x20;  
                constexpr std::ptrdiff_t m_hOuter = 0x24;  
                constexpr std::ptrdiff_t m_bPreventLoopback = 0x28;  
                constexpr std::ptrdiff_t m_ProviderType = 0x2C;  
                constexpr std::ptrdiff_t m_CachedResults = 0x30;  
            }
            namespace CLogicalEntity {
            }
            namespace CAnimGraphNetworkedVariables {
                constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8;  
                constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20;  
                constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38;  
                constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50;  
                constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68;  
                constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80;  
                constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98;  
                constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xB0;  
                constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xC8;  
                constexpr std::ptrdiff_t m_PredNetGlobalSymbolVariables = 0xE0;  
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xF8;  
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0x110;  
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x128;  
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x140;  
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x158;  
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x170;  
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x188;  
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x1A0;  
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1B8;  
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0;  
                constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1E8;  
                constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1EC;  
                constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1F0;  
                constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1F4;  
            }
            namespace C_TriggerBuoyancy {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0xD30;  
                constexpr std::ptrdiff_t m_flFluidDensity = 0xDB0;  
            }
            namespace C_RopeKeyframe {
                constexpr std::ptrdiff_t m_LinksTouchingSomething = 0xD30;  
                constexpr std::ptrdiff_t m_nLinksTouchingSomething = 0xD34;  
                constexpr std::ptrdiff_t m_bApplyWind = 0xD38;  
                constexpr std::ptrdiff_t m_fPrevLockedPoints = 0xD3C;  
                constexpr std::ptrdiff_t m_iForcePointMoveCounter = 0xD40;  
                constexpr std::ptrdiff_t m_bPrevEndPointPos = 0xD44;  
                constexpr std::ptrdiff_t m_vPrevEndPointPos = 0xD48;  
                constexpr std::ptrdiff_t m_flCurScroll = 0xD60;  
                constexpr std::ptrdiff_t m_flScrollSpeed = 0xD64;  
                constexpr std::ptrdiff_t m_RopeFlags = 0xD68;  
                constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0xD70;  
                constexpr std::ptrdiff_t m_LightValues = 0xFE8;  
                constexpr std::ptrdiff_t m_nSegments = 0x1060;  
                constexpr std::ptrdiff_t m_hStartPoint = 0x1064;  
                constexpr std::ptrdiff_t m_hEndPoint = 0x1068;  
                constexpr std::ptrdiff_t m_iStartAttachment = 0x106C;  
                constexpr std::ptrdiff_t m_iEndAttachment = 0x106D;  
                constexpr std::ptrdiff_t m_Subdiv = 0x106E;  
                constexpr std::ptrdiff_t m_RopeLength = 0x1070;  
                constexpr std::ptrdiff_t m_Slack = 0x1072;  
                constexpr std::ptrdiff_t m_TextureScale = 0x1074;  
                constexpr std::ptrdiff_t m_fLockedPoints = 0x1078;  
                constexpr std::ptrdiff_t m_nChangeCount = 0x1079;  
                constexpr std::ptrdiff_t m_Width = 0x107C;  
                constexpr std::ptrdiff_t m_PhysicsDelegate = 0x1080;  
                constexpr std::ptrdiff_t m_hMaterial = 0x1090;  
                constexpr std::ptrdiff_t m_TextureHeight = 0x1098;  
                constexpr std::ptrdiff_t m_vecImpulse = 0x109C;  
                constexpr std::ptrdiff_t m_vecPreviousImpulse = 0x10A8;  
                constexpr std::ptrdiff_t m_flCurrentGustTimer = 0x10B4;  
                constexpr std::ptrdiff_t m_flCurrentGustLifetime = 0x10B8;  
                constexpr std::ptrdiff_t m_flTimeToNextGust = 0x10BC;  
                constexpr std::ptrdiff_t m_vWindDir = 0x10C0;  
                constexpr std::ptrdiff_t m_vColorMod = 0x10CC;  
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentPos = 0x10D8;  
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentAngle = 0x10F0;  
                constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x1108;  
                constexpr std::ptrdiff_t m_bEndPointAttachmentPositionsDirty = 0x0;  
                constexpr std::ptrdiff_t m_bEndPointAttachmentAnglesDirty = 0x0;  
                constexpr std::ptrdiff_t m_bNewDataThisFrame = 0x0;  
                constexpr std::ptrdiff_t m_bPhysicsInitted = 0x0;  
            }
            namespace C_GradientFog {
                constexpr std::ptrdiff_t m_hGradientFogTexture = 0x568;  
                constexpr std::ptrdiff_t m_flFogStartDistance = 0x570;  
                constexpr std::ptrdiff_t m_flFogEndDistance = 0x574;  
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x578;  
                constexpr std::ptrdiff_t m_flFogStartHeight = 0x57C;  
                constexpr std::ptrdiff_t m_flFogEndHeight = 0x580;  
                constexpr std::ptrdiff_t m_flFarZ = 0x584;  
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x588;  
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x58C;  
                constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x590;  
                constexpr std::ptrdiff_t m_fogColor = 0x594;  
                constexpr std::ptrdiff_t m_flFogStrength = 0x598;  
                constexpr std::ptrdiff_t m_flFadeTime = 0x59C;  
                constexpr std::ptrdiff_t m_bStartDisabled = 0x5A0;  
                constexpr std::ptrdiff_t m_bIsEnabled = 0x5A1;  
                constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x5A2;  
            }
            namespace EntitySpottedState_t {
                constexpr std::ptrdiff_t m_bSpotted = 0x8;  
                constexpr std::ptrdiff_t m_bSpottedByMask = 0xC;  
            }
            namespace C_CSGO_TeamPreviewCamera {
                constexpr std::ptrdiff_t m_nVariant = 0x5D8;  
                constexpr std::ptrdiff_t m_bDofEnabled = 0x5DC;  
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x5E0;  
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x5E4;  
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x5E8;  
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x5EC;  
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x5F0;  
            }
            namespace CCSPlayer_CameraServices {
                constexpr std::ptrdiff_t m_flDeathCamTilt = 0x228;  
                constexpr std::ptrdiff_t m_vClientScopeInaccuracy = 0x230;  
            }
            namespace C_CSGO_TeamSelectCounterTerroristPosition {
            }
            namespace C_EconWearable {
                constexpr std::ptrdiff_t m_nForceSkin = 0x1668;  
                constexpr std::ptrdiff_t m_bAlwaysAllow = 0x166C;  
            }
            namespace CCSGO_WingmanIntroCharacterPosition {
            }
            namespace CSMatchStats_t {
                constexpr std::ptrdiff_t m_iEnemy5Ks = 0x68;  
                constexpr std::ptrdiff_t m_iEnemy4Ks = 0x6C;  
                constexpr std::ptrdiff_t m_iEnemy3Ks = 0x70;  
                constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x74;  
                constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x78;  
            }
            namespace C_BaseToggle {
            }
            namespace C_EnvVolumetricFogVolume {
                constexpr std::ptrdiff_t m_bActive = 0x568;  
                constexpr std::ptrdiff_t m_vBoxMins = 0x56C;  
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x578;  
                constexpr std::ptrdiff_t m_bStartDisabled = 0x584;  
                constexpr std::ptrdiff_t m_flStrength = 0x588;  
                constexpr std::ptrdiff_t m_nFalloffShape = 0x58C;  
                constexpr std::ptrdiff_t m_flFalloffExponent = 0x590;  
                constexpr std::ptrdiff_t m_flHeightFogDepth = 0x594;  
                constexpr std::ptrdiff_t m_fHeightFogEdgeWidth = 0x598;  
                constexpr std::ptrdiff_t m_fIndirectLightStrength = 0x59C;  
                constexpr std::ptrdiff_t m_fSunLightStrength = 0x5A0;  
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x5A4;  
                constexpr std::ptrdiff_t m_bOverrideIndirectLightStrength = 0x5A8;  
                constexpr std::ptrdiff_t m_bOverrideSunLightStrength = 0x5A9;  
                constexpr std::ptrdiff_t m_bOverrideNoiseStrength = 0x5AA;  
                constexpr std::ptrdiff_t m_bAllowLPVIndirect = 0x5AB;  
            }
            namespace CWaterSplasher {
            }
            namespace C_ModelPointEntity {
            }
            namespace CCSObserver_ViewModelServices {
            }
            namespace C_FireSmoke {
                constexpr std::ptrdiff_t m_nFlameModelIndex = 0x578;  
                constexpr std::ptrdiff_t m_nFlameFromAboveModelIndex = 0x57C;  
                constexpr std::ptrdiff_t m_flScaleRegister = 0x580;  
                constexpr std::ptrdiff_t m_flScaleStart = 0x584;  
                constexpr std::ptrdiff_t m_flScaleEnd = 0x588;  
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x58C;  
                constexpr std::ptrdiff_t m_flScaleTimeEnd = 0x590;  
                constexpr std::ptrdiff_t m_flChildFlameSpread = 0x594;  
                constexpr std::ptrdiff_t m_flClipPerc = 0x5A8;  
                constexpr std::ptrdiff_t m_bClipTested = 0x5AC;  
                constexpr std::ptrdiff_t m_bFadingOut = 0x5AD;  
                constexpr std::ptrdiff_t m_tParticleSpawn = 0x5B0;  
                constexpr std::ptrdiff_t m_pFireOverlay = 0x5B8;  
            }
            namespace C_WeaponRevolver {
            }
            namespace C_FireFromAboveSprite {
            }
            namespace C_EnvCombinedLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_Color = 0x15C8;  
                constexpr std::ptrdiff_t m_Entity_flBrightness = 0x15CC;  
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x15D0;  
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x15D8;  
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture = 0x15E0;  
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x15E8;  
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x15F0;  
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x15F8;  
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x1600;  
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x160C;  
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1618;  
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x161C;  
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x1620;  
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x1624;  
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x1628;  
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x162C;  
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x1630;  
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x163C;  
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1640;  
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1644;  
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x1648;  
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x164C;  
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1650;  
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1669;  
            }
            namespace C_SoundOpvarSetOBBWindEntity {
            }
            namespace ActiveModelConfig_t {
                constexpr std::ptrdiff_t m_Handle = 0x28;  
                constexpr std::ptrdiff_t m_Name = 0x30;  
                constexpr std::ptrdiff_t m_AssociatedEntities = 0x38;  
                constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x50;  
            }
            namespace C_WeaponMP5SD {
            }
            namespace C_DynamicPropAlias_dynamic_prop {
            }
            namespace CCSPlayer_BulletServices {
                constexpr std::ptrdiff_t m_totalHitsOnServer = 0x40;  
            }
            namespace CLogicRelay {
                constexpr std::ptrdiff_t m_OnTrigger = 0x568;  
                constexpr std::ptrdiff_t m_OnSpawn = 0x590;  
                constexpr std::ptrdiff_t m_bDisabled = 0x5B8;  
                constexpr std::ptrdiff_t m_bWaitForRefire = 0x5B9;  
                constexpr std::ptrdiff_t m_bTriggerOnce = 0x5BA;  
                constexpr std::ptrdiff_t m_bFastRetrigger = 0x5BB;  
                constexpr std::ptrdiff_t m_bPassthoughCaller = 0x5BC;  
            }
            namespace C_PointCameraVFOV {
                constexpr std::ptrdiff_t m_flVerticalFOV = 0x5C8;  
            }
            namespace CCSPlayer_ItemServices {
                constexpr std::ptrdiff_t m_bHasDefuser = 0x40;  
                constexpr std::ptrdiff_t m_bHasHelmet = 0x41;  
                constexpr std::ptrdiff_t m_bHasHeavyArmor = 0x42;  
            }
            namespace C_BarnLight {
                constexpr std::ptrdiff_t m_bEnabled = 0xD28;  
                constexpr std::ptrdiff_t m_nColorMode = 0xD2C;  
                constexpr std::ptrdiff_t m_Color = 0xD30;  
                constexpr std::ptrdiff_t m_flColorTemperature = 0xD34;  
                constexpr std::ptrdiff_t m_flBrightness = 0xD38;  
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xD3C;  
                constexpr std::ptrdiff_t m_nDirectLight = 0xD40;  
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0xD44;  
                constexpr std::ptrdiff_t m_nLuminaireShape = 0xD48;  
                constexpr std::ptrdiff_t m_flLuminaireSize = 0xD4C;  
                constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0xD50;  
                constexpr std::ptrdiff_t m_LightStyleString = 0xD58;  
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0xD60;  
                constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0xD68;  
                constexpr std::ptrdiff_t m_LightStyleEvents = 0xD80;  
                constexpr std::ptrdiff_t m_LightStyleTargets = 0xD98;  
                constexpr std::ptrdiff_t m_StyleEvent = 0xDB0;  
                constexpr std::ptrdiff_t m_hLightCookie = 0xE50;  
                constexpr std::ptrdiff_t m_flShape = 0xE58;  
                constexpr std::ptrdiff_t m_flSoftX = 0xE5C;  
                constexpr std::ptrdiff_t m_flSoftY = 0xE60;  
                constexpr std::ptrdiff_t m_flSkirt = 0xE64;  
                constexpr std::ptrdiff_t m_flSkirtNear = 0xE68;  
                constexpr std::ptrdiff_t m_vSizeParams = 0xE6C;  
                constexpr std::ptrdiff_t m_flRange = 0xE78;  
                constexpr std::ptrdiff_t m_vShear = 0xE7C;  
                constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0xE88;  
                constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0xE8C;  
                constexpr std::ptrdiff_t m_nCastShadows = 0xE98;  
                constexpr std::ptrdiff_t m_nShadowMapSize = 0xE9C;  
                constexpr std::ptrdiff_t m_nShadowPriority = 0xEA0;  
                constexpr std::ptrdiff_t m_bContactShadow = 0xEA4;  
                constexpr std::ptrdiff_t m_nBounceLight = 0xEA8;  
                constexpr std::ptrdiff_t m_flBounceScale = 0xEAC;  
                constexpr std::ptrdiff_t m_flMinRoughness = 0xEB0;  
                constexpr std::ptrdiff_t m_vAlternateColor = 0xEB4;  
                constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0xEC0;  
                constexpr std::ptrdiff_t m_nFog = 0xEC4;  
                constexpr std::ptrdiff_t m_flFogStrength = 0xEC8;  
                constexpr std::ptrdiff_t m_nFogShadows = 0xECC;  
                constexpr std::ptrdiff_t m_flFogScale = 0xED0;  
                constexpr std::ptrdiff_t m_bFogMixedShadows = 0xED4;  
                constexpr std::ptrdiff_t m_flFadeSizeStart = 0xED8;  
                constexpr std::ptrdiff_t m_flFadeSizeEnd = 0xEDC;  
                constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0xEE0;  
                constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0xEE4;  
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0xEE8;  
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0xEEC;  
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0xEF8;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0xF04;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0xF10;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0xF1C;  
                constexpr std::ptrdiff_t m_nPrecomputedSubFrusta = 0xF28;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin0 = 0xF2C;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles0 = 0xF38;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent0 = 0xF44;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin1 = 0xF50;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles1 = 0xF5C;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent1 = 0xF68;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin2 = 0xF74;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles2 = 0xF80;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent2 = 0xF8C;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin3 = 0xF98;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles3 = 0xFA4;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent3 = 0xFB0;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin4 = 0xFBC;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles4 = 0xFC8;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent4 = 0xFD4;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin5 = 0xFE0;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles5 = 0xFEC;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent5 = 0xFF8;  
                constexpr std::ptrdiff_t m_bInitialBoneSetup = 0x1048;  
                constexpr std::ptrdiff_t m_VisClusters = 0x1050;  
            }
            namespace C_TonemapController2 {
                constexpr std::ptrdiff_t m_flAutoExposureMin = 0x568;  
                constexpr std::ptrdiff_t m_flAutoExposureMax = 0x56C;  
                constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x570;  
                constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x574;  
                constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x578;  
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x57C;  
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x580;  
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x584;  
            }
            namespace C_WeaponG3SG1 {
            }
            namespace CFuncWater {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0xD28;  
            }
            namespace C_SoundOpvarSetAutoRoomEntity {
            }
            namespace C_EconEntity {
                constexpr std::ptrdiff_t m_flFlexDelayTime = 0x1130;  
                constexpr std::ptrdiff_t m_flFlexDelayedWeight = 0x1138;  
                constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1140;  
                constexpr std::ptrdiff_t m_AttributeManager = 0x1148;  
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x15F0;  
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x15F4;  
                constexpr std::ptrdiff_t m_nFallbackPaintKit = 0x15F8;  
                constexpr std::ptrdiff_t m_nFallbackSeed = 0x15FC;  
                constexpr std::ptrdiff_t m_flFallbackWear = 0x1600;  
                constexpr std::ptrdiff_t m_nFallbackStatTrak = 0x1604;  
                constexpr std::ptrdiff_t m_bClientside = 0x1608;  
                constexpr std::ptrdiff_t m_bParticleSystemsCreated = 0x1609;  
                constexpr std::ptrdiff_t m_vecAttachedParticles = 0x1610;  
                constexpr std::ptrdiff_t m_hViewmodelAttachment = 0x1628;  
                constexpr std::ptrdiff_t m_iOldTeam = 0x162C;  
                constexpr std::ptrdiff_t m_bAttachmentDirty = 0x1630;  
                constexpr std::ptrdiff_t m_nUnloadedModelIndex = 0x1634;  
                constexpr std::ptrdiff_t m_iNumOwnerValidationRetries = 0x1638;  
                constexpr std::ptrdiff_t m_hOldProvidee = 0x1648;  
                constexpr std::ptrdiff_t m_vecAttachedModels = 0x1650;  
            }
            namespace C_WeaponSG556 {
            }
            namespace C_RectLight {
                constexpr std::ptrdiff_t m_bShowLight = 0x1070;  
            }
            namespace C_ParticleSystem {
                constexpr std::ptrdiff_t m_szSnapshotFileName = 0xD28;  
                constexpr std::ptrdiff_t m_bActive = 0xF28;  
                constexpr std::ptrdiff_t m_bFrozen = 0xF29;  
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0xF2C;  
                constexpr std::ptrdiff_t m_nStopType = 0xF30;  
                constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0xF34;  
                constexpr std::ptrdiff_t m_iEffectIndex = 0xF38;  
                constexpr std::ptrdiff_t m_flStartTime = 0xF40;  
                constexpr std::ptrdiff_t m_flPreSimTime = 0xF44;  
                constexpr std::ptrdiff_t m_vServerControlPoints = 0xF48;  
                constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0xF78;  
                constexpr std::ptrdiff_t m_hControlPointEnts = 0xF7C;  
                constexpr std::ptrdiff_t m_bNoSave = 0x107C;  
                constexpr std::ptrdiff_t m_bNoFreeze = 0x107D;  
                constexpr std::ptrdiff_t m_bNoRamp = 0x107E;  
                constexpr std::ptrdiff_t m_bStartActive = 0x107F;  
                constexpr std::ptrdiff_t m_iszEffectName = 0x1080;  
                constexpr std::ptrdiff_t m_iszControlPointNames = 0x1088;  
                constexpr std::ptrdiff_t m_nDataCP = 0x1288;  
                constexpr std::ptrdiff_t m_vecDataCPValue = 0x128C;  
                constexpr std::ptrdiff_t m_nTintCP = 0x1298;  
                constexpr std::ptrdiff_t m_clrTint = 0x129C;  
                constexpr std::ptrdiff_t m_bOldActive = 0x12C0;  
                constexpr std::ptrdiff_t m_bOldFrozen = 0x12C1;  
            }
            namespace C_CSGO_TeamPreviewModel {
            }
            namespace C_WeaponGlock {
            }
            namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
            }
            namespace C_CSGameRulesProxy {
                constexpr std::ptrdiff_t m_pGameRules = 0x568;  
            }
            namespace CPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_iObserverMode = 0x40;  
                constexpr std::ptrdiff_t m_hObserverTarget = 0x44;  
                constexpr std::ptrdiff_t m_iObserverLastMode = 0x48;  
                constexpr std::ptrdiff_t m_bForcedObserverMode = 0x4C;  
                constexpr std::ptrdiff_t m_flObserverChaseDistance = 0x50;  
                constexpr std::ptrdiff_t m_flObserverChaseDistanceCalcTime = 0x54;  
            }
            namespace CPlayer_WaterServices {
            }
            namespace C_CSGO_EndOfMatchLineupEnd {
            }
            namespace SequenceHistory_t {
                constexpr std::ptrdiff_t m_hSequence = 0x0;  
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x4;  
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x8;  
                constexpr std::ptrdiff_t m_nSeqLoopMode = 0xC;  
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x10;  
                constexpr std::ptrdiff_t m_flCyclesPerSecond = 0x14;  
            }
            namespace C_Multimeter {
                constexpr std::ptrdiff_t m_hTargetC4 = 0xF90;  
            }
            namespace C_CsmFovOverride {
                constexpr std::ptrdiff_t m_cameraName = 0x568;  
                constexpr std::ptrdiff_t m_flCsmFovOverrideValue = 0x570;  
            }
            namespace C_EnvDecal {
                constexpr std::ptrdiff_t m_hDecalMaterial = 0xD28;  
                constexpr std::ptrdiff_t m_flWidth = 0xD30;  
                constexpr std::ptrdiff_t m_flHeight = 0xD34;  
                constexpr std::ptrdiff_t m_flDepth = 0xD38;  
                constexpr std::ptrdiff_t m_nRenderOrder = 0xD3C;  
                constexpr std::ptrdiff_t m_bProjectOnWorld = 0xD40;  
                constexpr std::ptrdiff_t m_bProjectOnCharacters = 0xD41;  
                constexpr std::ptrdiff_t m_bProjectOnWater = 0xD42;  
                constexpr std::ptrdiff_t m_flDepthSortBias = 0xD44;  
            }
            namespace CCSGameModeRules_Noop {
            }
            namespace C_ColorCorrection {
                constexpr std::ptrdiff_t m_vecOrigin = 0x568;  
                constexpr std::ptrdiff_t m_MinFalloff = 0x574;  
                constexpr std::ptrdiff_t m_MaxFalloff = 0x578;  
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x57C;  
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x580;  
                constexpr std::ptrdiff_t m_flMaxWeight = 0x584;  
                constexpr std::ptrdiff_t m_flCurWeight = 0x588;  
                constexpr std::ptrdiff_t m_netlookupFilename = 0x58C;  
                constexpr std::ptrdiff_t m_bEnabled = 0x78C;  
                constexpr std::ptrdiff_t m_bMaster = 0x78D;  
                constexpr std::ptrdiff_t m_bClientSide = 0x78E;  
                constexpr std::ptrdiff_t m_bExclusive = 0x78F;  
                constexpr std::ptrdiff_t m_bEnabledOnClient = 0x790;  
                constexpr std::ptrdiff_t m_flCurWeightOnClient = 0x794;  
                constexpr std::ptrdiff_t m_bFadingIn = 0x798;  
                constexpr std::ptrdiff_t m_flFadeStartWeight = 0x79C;  
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x7A0;  
                constexpr std::ptrdiff_t m_flFadeDuration = 0x7A4;  
            }
            namespace CHostageRescueZoneShim {
            }
            namespace CModelState {
                constexpr std::ptrdiff_t m_hModel = 0xA0;  
                constexpr std::ptrdiff_t m_ModelName = 0xA8;  
                constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0xE8;  
                constexpr std::ptrdiff_t m_MeshGroupMask = 0x198;  
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x21A;  
                constexpr std::ptrdiff_t m_nForceLOD = 0x21B;  
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x21C;  
            }
            namespace C_WeaponP250 {
            }
            namespace C_EconEntity__AttachedModelData_t {
                constexpr std::ptrdiff_t m_iModelDisplayFlags = 0x0;  
            }
            namespace CAttributeList {
                constexpr std::ptrdiff_t m_Attributes = 0x8;  
                constexpr std::ptrdiff_t m_pManager = 0x58;  
            }
            namespace C_TeamplayRules {
            }
            namespace C_CSGO_CounterTerroristWingmanIntroCamera {
            }
            namespace C_WeaponNOVA {
            }
            namespace C_HEGrenadeProjectile {
            }
            namespace C_BaseDoor {
                constexpr std::ptrdiff_t m_bIsUsable = 0xD28;  
            }
            namespace CGrenadeTracer {
                constexpr std::ptrdiff_t m_flTracerDuration = 0xD40;  
                constexpr std::ptrdiff_t m_nType = 0xD44;  
            }
            namespace CBombTarget {
                constexpr std::ptrdiff_t m_bBombPlantedHere = 0xD30;  
            }
            namespace C_PointClientUIDialog {
                constexpr std::ptrdiff_t m_hActivator = 0xD58;  
                constexpr std::ptrdiff_t m_bStartEnabled = 0xD5C;  
            }
            namespace CCSGameModeRules_ArmsRace {
                constexpr std::ptrdiff_t m_WeaponSequence = 0x30;  
            }
            namespace CPointChildModifier {
                constexpr std::ptrdiff_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x568;  
            }
            namespace CDamageRecord {
                constexpr std::ptrdiff_t m_PlayerDamager = 0x28;  
                constexpr std::ptrdiff_t m_PlayerRecipient = 0x2C;  
                constexpr std::ptrdiff_t m_hPlayerControllerDamager = 0x30;  
                constexpr std::ptrdiff_t m_hPlayerControllerRecipient = 0x34;  
                constexpr std::ptrdiff_t m_szPlayerDamagerName = 0x38;  
                constexpr std::ptrdiff_t m_szPlayerRecipientName = 0x40;  
                constexpr std::ptrdiff_t m_DamagerXuid = 0x48;  
                constexpr std::ptrdiff_t m_RecipientXuid = 0x50;  
                constexpr std::ptrdiff_t m_iBulletsDamage = 0x58;  
                constexpr std::ptrdiff_t m_iDamage = 0x5C;  
                constexpr std::ptrdiff_t m_iActualHealthRemoved = 0x60;  
                constexpr std::ptrdiff_t m_iNumHits = 0x64;  
                constexpr std::ptrdiff_t m_iLastBulletUpdate = 0x68;  
                constexpr std::ptrdiff_t m_bIsOtherEnemy = 0x6C;  
                constexpr std::ptrdiff_t m_killType = 0x6D;  
            }
            namespace C_InfoLadderDismount {
            }
            namespace CCSPlayerController_DamageServices {
                constexpr std::ptrdiff_t m_nSendUpdate = 0x40;  
                constexpr std::ptrdiff_t m_DamageList = 0x48;  
            }
            namespace CRenderComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x10;  
                constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50;  
                constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54;  
                constexpr std::ptrdiff_t m_bEnableRendering = 0x60;  
                constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xB0;  
            }
            namespace CEnvSoundscapeProxy {
                constexpr std::ptrdiff_t m_MainSoundscapeName = 0x608;  
            }
            namespace C_SoundEventOBBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x628;  
                constexpr std::ptrdiff_t m_vMaxs = 0x634;  
            }
            namespace CLightComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x38;  
                constexpr std::ptrdiff_t m_Color = 0x75;  
                constexpr std::ptrdiff_t m_SecondaryColor = 0x79;  
                constexpr std::ptrdiff_t m_flBrightness = 0x80;  
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x84;  
                constexpr std::ptrdiff_t m_flBrightnessMult = 0x88;  
                constexpr std::ptrdiff_t m_flRange = 0x8C;  
                constexpr std::ptrdiff_t m_flFalloff = 0x90;  
                constexpr std::ptrdiff_t m_flAttenuation0 = 0x94;  
                constexpr std::ptrdiff_t m_flAttenuation1 = 0x98;  
                constexpr std::ptrdiff_t m_flAttenuation2 = 0x9C;  
                constexpr std::ptrdiff_t m_flTheta = 0xA0;  
                constexpr std::ptrdiff_t m_flPhi = 0xA4;  
                constexpr std::ptrdiff_t m_hLightCookie = 0xA8;  
                constexpr std::ptrdiff_t m_nCascades = 0xB0;  
                constexpr std::ptrdiff_t m_nCastShadows = 0xB4;  
                constexpr std::ptrdiff_t m_nShadowWidth = 0xB8;  
                constexpr std::ptrdiff_t m_nShadowHeight = 0xBC;  
                constexpr std::ptrdiff_t m_bRenderDiffuse = 0xC0;  
                constexpr std::ptrdiff_t m_nRenderSpecular = 0xC4;  
                constexpr std::ptrdiff_t m_bRenderTransmissive = 0xC8;  
                constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xCC;  
                constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xD0;  
                constexpr std::ptrdiff_t m_nStyle = 0xD4;  
                constexpr std::ptrdiff_t m_Pattern = 0xD8;  
                constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xE0;  
                constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xE4;  
                constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xE8;  
                constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xEC;  
                constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0xF0;  
                constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0xF4;  
                constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0xF8;  
                constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0xFC;  
                constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x100;  
                constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x104;  
                constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x108;  
                constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x10C;  
                constexpr std::ptrdiff_t m_nShadowPriority = 0x110;  
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x114;  
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x118;  
                constexpr std::ptrdiff_t m_nDirectLight = 0x11C;  
                constexpr std::ptrdiff_t m_nIndirectLight = 0x120;  
                constexpr std::ptrdiff_t m_flFadeMinDist = 0x124;  
                constexpr std::ptrdiff_t m_flFadeMaxDist = 0x128;  
                constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x12C;  
                constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x130;  
                constexpr std::ptrdiff_t m_bEnabled = 0x134;  
                constexpr std::ptrdiff_t m_bFlicker = 0x135;  
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x136;  
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x138;  
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x144;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x150;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x15C;  
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x168;  
                constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x174;  
                constexpr std::ptrdiff_t m_nFogLightingMode = 0x178;  
                constexpr std::ptrdiff_t m_flFogContributionStength = 0x17C;  
                constexpr std::ptrdiff_t m_flNearClipPlane = 0x180;  
                constexpr std::ptrdiff_t m_SkyColor = 0x184;  
                constexpr std::ptrdiff_t m_flSkyIntensity = 0x188;  
                constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x18C;  
                constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x190;  
                constexpr std::ptrdiff_t m_bMixedShadows = 0x191;  
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x194;  
                constexpr std::ptrdiff_t m_flCapsuleLength = 0x198;  
                constexpr std::ptrdiff_t m_flMinRoughness = 0x19C;  
            }
            namespace C_CSGO_CounterTerroristTeamIntroCamera {
            }
            namespace CEntityComponent {
            }
            namespace C_EconItemView {
                constexpr std::ptrdiff_t m_bInventoryImageRgbaRequested = 0x60;  
                constexpr std::ptrdiff_t m_bInventoryImageTriedCache = 0x61;  
                constexpr std::ptrdiff_t m_nInventoryImageRgbaWidth = 0x80;  
                constexpr std::ptrdiff_t m_nInventoryImageRgbaHeight = 0x84;  
                constexpr std::ptrdiff_t m_szCurrentLoadCachedFileName = 0x88;  
                constexpr std::ptrdiff_t m_bRestoreCustomMaterialAfterPrecache = 0x1B8;  
                constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x1BA;  
                constexpr std::ptrdiff_t m_iEntityQuality = 0x1BC;  
                constexpr std::ptrdiff_t m_iEntityLevel = 0x1C0;  
                constexpr std::ptrdiff_t m_iItemID = 0x1C8;  
                constexpr std::ptrdiff_t m_iItemIDHigh = 0x1D0;  
                constexpr std::ptrdiff_t m_iItemIDLow = 0x1D4;  
                constexpr std::ptrdiff_t m_iAccountID = 0x1D8;  
                constexpr std::ptrdiff_t m_iInventoryPosition = 0x1DC;  
                constexpr std::ptrdiff_t m_bInitialized = 0x1E8;  
                constexpr std::ptrdiff_t m_bDisallowSOC = 0x1E9;  
                constexpr std::ptrdiff_t m_bIsStoreItem = 0x1EA;  
                constexpr std::ptrdiff_t m_bIsTradeItem = 0x1EB;  
                constexpr std::ptrdiff_t m_iEntityQuantity = 0x1EC;  
                constexpr std::ptrdiff_t m_iRarityOverride = 0x1F0;  
                constexpr std::ptrdiff_t m_iQualityOverride = 0x1F4;  
                constexpr std::ptrdiff_t m_iOriginOverride = 0x1F8;  
                constexpr std::ptrdiff_t m_unClientFlags = 0x1FC;  
                constexpr std::ptrdiff_t m_unOverrideStyle = 0x1FD;  
                constexpr std::ptrdiff_t m_AttributeList = 0x210;  
                constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0x270;  
                constexpr std::ptrdiff_t m_szCustomName = 0x2D0;  
                constexpr std::ptrdiff_t m_szCustomNameOverride = 0x371;  
                constexpr std::ptrdiff_t m_bInitializedTags = 0x440;  
            }
            namespace C_HandleTest {
                constexpr std::ptrdiff_t m_Handle = 0x568;  
                constexpr std::ptrdiff_t m_bSendHandle = 0x56C;  
            }
            namespace C_EnvWindClientside {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x568;  
            }
            namespace C_WeaponMAC10 {
            }
            namespace C_PointClientUIWorldTextPanel {
                constexpr std::ptrdiff_t m_messageText = 0xF90;  
            }
            namespace CCSPlayer_UseServices {
            }
            namespace CPlayer_MovementServices {
                constexpr std::ptrdiff_t m_nImpulse = 0x40;  
                constexpr std::ptrdiff_t m_nButtons = 0x48;  
                constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x68;  
                constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x70;  
                constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x78;  
                constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x80;  
                constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x180;  
                constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x188;  
                constexpr std::ptrdiff_t m_flMaxspeed = 0x198;  
                constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x19C;  
                constexpr std::ptrdiff_t m_flForwardMove = 0x1AC;  
                constexpr std::ptrdiff_t m_flLeftMove = 0x1B0;  
                constexpr std::ptrdiff_t m_flUpMove = 0x1B4;  
                constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1B8;  
                constexpr std::ptrdiff_t m_vecOldViewAngles = 0x1C4;  
            }
            namespace CEnvSoundscape {
                constexpr std::ptrdiff_t m_OnPlay = 0x568;  
                constexpr std::ptrdiff_t m_flRadius = 0x590;  
                constexpr std::ptrdiff_t m_soundEventName = 0x598;  
                constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x5A0;  
                constexpr std::ptrdiff_t m_soundscapeIndex = 0x5A4;  
                constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x5A8;  
                constexpr std::ptrdiff_t m_positionNames = 0x5B0;  
                constexpr std::ptrdiff_t m_hProxySoundscape = 0x5F0;  
                constexpr std::ptrdiff_t m_bDisabled = 0x5F4;  
                constexpr std::ptrdiff_t m_soundscapeName = 0x5F8;  
                constexpr std::ptrdiff_t m_soundEventHash = 0x600;  
            }
            namespace CBasePlayerVData {
                constexpr std::ptrdiff_t m_sModelName = 0x28;  
                constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x108;  
                constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x118;  
                constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x128;  
                constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x138;  
                constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x148;  
                constexpr std::ptrdiff_t m_flHoldBreathTime = 0x158;  
                constexpr std::ptrdiff_t m_flDrowningDamageInterval = 0x15C;  
                constexpr std::ptrdiff_t m_nDrowningDamageInitial = 0x160;  
                constexpr std::ptrdiff_t m_nDrowningDamageMax = 0x164;  
                constexpr std::ptrdiff_t m_nWaterSpeed = 0x168;  
                constexpr std::ptrdiff_t m_flUseRange = 0x16C;  
                constexpr std::ptrdiff_t m_flUseAngleTolerance = 0x170;  
                constexpr std::ptrdiff_t m_flCrouchTime = 0x174;  
            }
            namespace CCSPlayerController_InGameMoneyServices {
                constexpr std::ptrdiff_t m_iAccount = 0x40;  
                constexpr std::ptrdiff_t m_iStartAccount = 0x44;  
                constexpr std::ptrdiff_t m_iTotalCashSpent = 0x48;  
                constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x4C;  
            }
            namespace C_EnvWindShared__WindVariationEvent_t {
                constexpr std::ptrdiff_t m_flWindAngleVariation = 0x0;  
                constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x4;  
            }
            namespace C_WeaponUSPSilencer {
            }
            namespace CSpriteOriented {
            }
            namespace C_CSGO_EndOfMatchLineupStart {
            }
            namespace C_WeaponFamas {
            }
            namespace C_EnvParticleGlow {
                constexpr std::ptrdiff_t m_flAlphaScale = 0x12D8;  
                constexpr std::ptrdiff_t m_flRadiusScale = 0x12DC;  
                constexpr std::ptrdiff_t m_flSelfIllumScale = 0x12E0;  
                constexpr std::ptrdiff_t m_ColorTint = 0x12E4;  
                constexpr std::ptrdiff_t m_hTextureOverride = 0x12E8;  
            }
            namespace C_SoundEventEntity {
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x568;  
                constexpr std::ptrdiff_t m_bToLocalPlayer = 0x569;  
                constexpr std::ptrdiff_t m_bStopOnNew = 0x56A;  
                constexpr std::ptrdiff_t m_bSaveRestore = 0x56B;  
                constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x56C;  
                constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x570;  
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x578;  
                constexpr std::ptrdiff_t m_iszAttachmentName = 0x580;  
                constexpr std::ptrdiff_t m_onGUIDChanged = 0x588;  
                constexpr std::ptrdiff_t m_onSoundFinished = 0x5B0;  
                constexpr std::ptrdiff_t m_flClientCullRadius = 0x5D8;  
                constexpr std::ptrdiff_t m_iszSoundName = 0x608;  
                constexpr std::ptrdiff_t m_hSource = 0x618;  
                constexpr std::ptrdiff_t m_nEntityIndexSelection = 0x61C;  
                constexpr std::ptrdiff_t m_bClientSideOnly = 0x0;  
            }
            namespace C_CSGO_TeamIntroCharacterPosition {
            }
            namespace C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
            }
            namespace C_Sun {
                constexpr std::ptrdiff_t m_fxSSSunFlareEffectIndex = 0xD28;  
                constexpr std::ptrdiff_t m_fxSunFlareEffectIndex = 0xD2C;  
                constexpr std::ptrdiff_t m_fdistNormalize = 0xD30;  
                constexpr std::ptrdiff_t m_vSunPos = 0xD34;  
                constexpr std::ptrdiff_t m_vDirection = 0xD40;  
                constexpr std::ptrdiff_t m_iszEffectName = 0xD50;  
                constexpr std::ptrdiff_t m_iszSSEffectName = 0xD58;  
                constexpr std::ptrdiff_t m_clrOverlay = 0xD60;  
                constexpr std::ptrdiff_t m_bOn = 0xD64;  
                constexpr std::ptrdiff_t m_bmaxColor = 0xD65;  
                constexpr std::ptrdiff_t m_flSize = 0xD68;  
                constexpr std::ptrdiff_t m_flHazeScale = 0xD6C;  
                constexpr std::ptrdiff_t m_flRotation = 0xD70;  
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xD74;  
                constexpr std::ptrdiff_t m_flAlphaHaze = 0xD78;  
                constexpr std::ptrdiff_t m_flAlphaScale = 0xD7C;  
                constexpr std::ptrdiff_t m_flAlphaHdr = 0xD80;  
                constexpr std::ptrdiff_t m_flFarZScale = 0xD84;  
            }
            namespace C_CSGO_EndOfMatchLineupEndpoint {
            }
            namespace CCSPlayerController_ActionTrackingServices {
                constexpr std::ptrdiff_t m_perRoundStats = 0x40;  
                constexpr std::ptrdiff_t m_matchStats = 0x90;  
                constexpr std::ptrdiff_t m_iNumRoundKills = 0x110;  
                constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x114;  
                constexpr std::ptrdiff_t m_unTotalRoundDamageDealt = 0x118;  
            }
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x24;  
            }
            namespace C_ColorCorrectionVolume {
                constexpr std::ptrdiff_t m_LastEnterWeight = 0xD30;  
                constexpr std::ptrdiff_t m_LastEnterTime = 0xD34;  
                constexpr std::ptrdiff_t m_LastExitWeight = 0xD38;  
                constexpr std::ptrdiff_t m_LastExitTime = 0xD3C;  
                constexpr std::ptrdiff_t m_bEnabled = 0xD40;  
                constexpr std::ptrdiff_t m_MaxWeight = 0xD44;  
                constexpr std::ptrdiff_t m_FadeDuration = 0xD48;  
                constexpr std::ptrdiff_t m_Weight = 0xD4C;  
                constexpr std::ptrdiff_t m_lookupFilename = 0xD50;  
            }
            namespace C_PrecipitationBlocker {
            }
            namespace C_BulletHitModel {
                constexpr std::ptrdiff_t m_matLocal = 0xF88;  
                constexpr std::ptrdiff_t m_iBoneIndex = 0xFB8;  
                constexpr std::ptrdiff_t m_hPlayerParent = 0xFBC;  
                constexpr std::ptrdiff_t m_bIsHit = 0xFC0;  
                constexpr std::ptrdiff_t m_flTimeCreated = 0xFC4;  
                constexpr std::ptrdiff_t m_vecStartPos = 0xFC8;  
            }
            namespace C_MapVetoPickController {
                constexpr std::ptrdiff_t m_nDraftType = 0x578;  
                constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x57C;  
                constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x580;  
                constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x680;  
                constexpr std::ptrdiff_t m_nAccountIDs = 0x69C;  
                constexpr std::ptrdiff_t m_nMapId0 = 0x79C;  
                constexpr std::ptrdiff_t m_nMapId1 = 0x89C;  
                constexpr std::ptrdiff_t m_nMapId2 = 0x99C;  
                constexpr std::ptrdiff_t m_nMapId3 = 0xA9C;  
                constexpr std::ptrdiff_t m_nMapId4 = 0xB9C;  
                constexpr std::ptrdiff_t m_nMapId5 = 0xC9C;  
                constexpr std::ptrdiff_t m_nStartingSide0 = 0xD9C;  
                constexpr std::ptrdiff_t m_nCurrentPhase = 0xE9C;  
                constexpr std::ptrdiff_t m_nPhaseStartTick = 0xEA0;  
                constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xEA4;  
                constexpr std::ptrdiff_t m_nPostDataUpdateTick = 0xEA8;  
                constexpr std::ptrdiff_t m_bDisabledHud = 0xEAC;  
            }
            namespace CSharedGapTypeQueryRegistration {
            }
            namespace C_OmniLight {
                constexpr std::ptrdiff_t m_flInnerAngle = 0x1070;  
                constexpr std::ptrdiff_t m_flOuterAngle = 0x1074;  
                constexpr std::ptrdiff_t m_bShowLight = 0x1078;  
            }
            namespace C_FireCrackerBlast {
            }
            namespace C_WeaponMP9 {
            }
            namespace WeaponPurchaseTracker_t {
                constexpr std::ptrdiff_t m_weaponPurchases = 0x8;  
            }
            namespace C_RetakeGameRules {
                constexpr std::ptrdiff_t m_nMatchSeed = 0xF8;  
                constexpr std::ptrdiff_t m_bBlockersPresent = 0xFC;  
                constexpr std::ptrdiff_t m_bRoundInProgress = 0xFD;  
                constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x100;  
                constexpr std::ptrdiff_t m_iBombSite = 0x104;  
            }
            namespace EngineCountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8;  
                constexpr std::ptrdiff_t m_timestamp = 0xC;  
                constexpr std::ptrdiff_t m_timescale = 0x10;  
            }
            namespace CCSPlayer_GlowServices {
            }
            namespace C_BaseFlex__Emphasized_Phoneme {
                constexpr std::ptrdiff_t m_sClassName = 0x0;  
                constexpr std::ptrdiff_t m_flAmount = 0x18;  
                constexpr std::ptrdiff_t m_bRequired = 0x1C;  
                constexpr std::ptrdiff_t m_bBasechecked = 0x1D;  
                constexpr std::ptrdiff_t m_bValid = 0x1E;  
            }
            namespace IntervalTimer {
                constexpr std::ptrdiff_t m_timestamp = 0x8;  
                constexpr std::ptrdiff_t m_nWorldGroupId = 0xC;  
            }
            namespace C_WeaponSSG08 {
            }
            namespace C_FuncLadder {
                constexpr std::ptrdiff_t m_vecLadderDir = 0xD28;  
                constexpr std::ptrdiff_t m_Dismounts = 0xD38;  
                constexpr std::ptrdiff_t m_vecLocalTop = 0xD50;  
                constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0xD5C;  
                constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0xD68;  
                constexpr std::ptrdiff_t m_flAutoRideSpeed = 0xD74;  
                constexpr std::ptrdiff_t m_bDisabled = 0xD78;  
                constexpr std::ptrdiff_t m_bFakeLadder = 0xD79;  
                constexpr std::ptrdiff_t m_bHasSlack = 0xD7A;  
            }
            namespace C_SoundOpvarSetOBBEntity {
            }
            namespace CPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_hMyWeapons = 0x40;  
                constexpr std::ptrdiff_t m_hActiveWeapon = 0x58;  
                constexpr std::ptrdiff_t m_hLastWeapon = 0x5C;  
                constexpr std::ptrdiff_t m_iAmmo = 0x60;  
            }
            namespace CAttributeManager__cached_attribute_float_t {
                constexpr std::ptrdiff_t flIn = 0x0;  
                constexpr std::ptrdiff_t iAttribHook = 0x8;  
                constexpr std::ptrdiff_t flOut = 0x10;  
            }
            namespace C_BaseGrenade {
                constexpr std::ptrdiff_t m_bHasWarnedAI = 0x1120;  
                constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0x1121;  
                constexpr std::ptrdiff_t m_bIsLive = 0x1122;  
                constexpr std::ptrdiff_t m_DmgRadius = 0x1124;  
                constexpr std::ptrdiff_t m_flDetonateTime = 0x1128;  
                constexpr std::ptrdiff_t m_flWarnAITime = 0x112C;  
                constexpr std::ptrdiff_t m_flDamage = 0x1130;  
                constexpr std::ptrdiff_t m_iszBounceSound = 0x1138;  
                constexpr std::ptrdiff_t m_ExplosionSound = 0x1140;  
                constexpr std::ptrdiff_t m_hThrower = 0x114C;  
                constexpr std::ptrdiff_t m_flNextAttack = 0x1164;  
                constexpr std::ptrdiff_t m_hOriginalThrower = 0x1168;  
            }
            namespace CCSGameModeRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8;  
            }
            namespace VPhysicsCollisionAttribute_t {
                constexpr std::ptrdiff_t m_nInteractsAs = 0x8;  
                constexpr std::ptrdiff_t m_nInteractsWith = 0x10;  
                constexpr std::ptrdiff_t m_nInteractsExclude = 0x18;  
                constexpr std::ptrdiff_t m_nEntityId = 0x20;  
                constexpr std::ptrdiff_t m_nOwnerId = 0x24;  
                constexpr std::ptrdiff_t m_nHierarchyId = 0x28;  
                constexpr std::ptrdiff_t m_nCollisionGroup = 0x2A;  
                constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2B;  
            }
            namespace C_EnvVolumetricFogController {
                constexpr std::ptrdiff_t m_flScattering = 0x568;  
                constexpr std::ptrdiff_t m_flAnisotropy = 0x56C;  
                constexpr std::ptrdiff_t m_flFadeSpeed = 0x570;  
                constexpr std::ptrdiff_t m_flDrawDistance = 0x574;  
                constexpr std::ptrdiff_t m_flFadeInStart = 0x578;  
                constexpr std::ptrdiff_t m_flFadeInEnd = 0x57C;  
                constexpr std::ptrdiff_t m_flIndirectStrength = 0x580;  
                constexpr std::ptrdiff_t m_nVolumeDepth = 0x584;  
                constexpr std::ptrdiff_t m_fFirstVolumeSliceThickness = 0x588;  
                constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x58C;  
                constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x590;  
                constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x594;  
                constexpr std::ptrdiff_t m_vBoxMins = 0x598;  
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x5A4;  
                constexpr std::ptrdiff_t m_bActive = 0x5B0;  
                constexpr std::ptrdiff_t m_flStartAnisoTime = 0x5B4;  
                constexpr std::ptrdiff_t m_flStartScatterTime = 0x5B8;  
                constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x5BC;  
                constexpr std::ptrdiff_t m_flStartAnisotropy = 0x5C0;  
                constexpr std::ptrdiff_t m_flStartScattering = 0x5C4;  
                constexpr std::ptrdiff_t m_flStartDrawDistance = 0x5C8;  
                constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x5CC;  
                constexpr std::ptrdiff_t m_flDefaultScattering = 0x5D0;  
                constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x5D4;  
                constexpr std::ptrdiff_t m_bStartDisabled = 0x5D8;  
                constexpr std::ptrdiff_t m_bEnableIndirect = 0x5D9;  
                constexpr std::ptrdiff_t m_bIndirectUseLPVs = 0x5DA;  
                constexpr std::ptrdiff_t m_bIsMaster = 0x5DB;  
                constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x5E0;  
                constexpr std::ptrdiff_t m_nForceRefreshCount = 0x5E8;  
                constexpr std::ptrdiff_t m_fNoiseSpeed = 0x5EC;  
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x5F0;  
                constexpr std::ptrdiff_t m_vNoiseScale = 0x5F4;  
                constexpr std::ptrdiff_t m_bFirstTime = 0x600;  
            }
            namespace C_WeaponTec9 {
            }
            namespace C_PointCommentaryNode {
                constexpr std::ptrdiff_t m_bActive = 0xF90;  
                constexpr std::ptrdiff_t m_bWasActive = 0xF91;  
                constexpr std::ptrdiff_t m_flEndTime = 0xF94;  
                constexpr std::ptrdiff_t m_flStartTime = 0xF98;  
                constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0xF9C;  
                constexpr std::ptrdiff_t m_iszCommentaryFile = 0xFA0;  
                constexpr std::ptrdiff_t m_iszTitle = 0xFA8;  
                constexpr std::ptrdiff_t m_iszSpeakers = 0xFB0;  
                constexpr std::ptrdiff_t m_iNodeNumber = 0xFB8;  
                constexpr std::ptrdiff_t m_iNodeNumberMax = 0xFBC;  
                constexpr std::ptrdiff_t m_bListenedTo = 0xFC0;  
                constexpr std::ptrdiff_t m_hViewPosition = 0xFD0;  
                constexpr std::ptrdiff_t m_bRestartAfterRestore = 0xFD4;  
            }
            namespace CCSObserver_CameraServices {
            }
            namespace CCSClientPointScriptEntity {
            }
            namespace audioparams_t {
                constexpr std::ptrdiff_t localSound = 0x8;  
                constexpr std::ptrdiff_t soundscapeIndex = 0x68;  
                constexpr std::ptrdiff_t localBits = 0x6C;  
                constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70;  
                constexpr std::ptrdiff_t soundEventHash = 0x74;  
            }
            namespace C_CS2WeaponModuleBase {
            }
            namespace C_InfoVisibilityBox {
                constexpr std::ptrdiff_t m_nMode = 0x56C;  
                constexpr std::ptrdiff_t m_vBoxSize = 0x570;  
                constexpr std::ptrdiff_t m_bEnabled = 0x57C;  
            }
            namespace C_FireSprite {
                constexpr std::ptrdiff_t m_vecMoveDir = 0xE38;  
                constexpr std::ptrdiff_t m_bFadeFromAbove = 0xE44;  
            }
            namespace C_CSGO_TeamIntroTerroristPosition {
            }
            namespace C_Precipitation {
                constexpr std::ptrdiff_t m_flDensity = 0xD30;  
                constexpr std::ptrdiff_t m_flParticleInnerDist = 0xD40;  
                constexpr std::ptrdiff_t m_pParticleDef = 0xD48;  
                constexpr std::ptrdiff_t m_tParticlePrecipTraceTimer = 0xD70;  
                constexpr std::ptrdiff_t m_bActiveParticlePrecipEmitter = 0xD78;  
                constexpr std::ptrdiff_t m_bParticlePrecipInitialized = 0xD79;  
                constexpr std::ptrdiff_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0xD7A;  
                constexpr std::ptrdiff_t m_nAvailableSheetSequencesMaxIndex = 0xD7C;  
            }
            namespace CPrecipitationVData {
                constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28;  
                constexpr std::ptrdiff_t m_flInnerDistance = 0x108;  
                constexpr std::ptrdiff_t m_nAttachType = 0x10C;  
                constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x110;  
                constexpr std::ptrdiff_t m_nRTEnvCP = 0x114;  
                constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x118;  
                constexpr std::ptrdiff_t m_szModifier = 0x120;  
            }
            namespace CBuoyancyHelper {
                constexpr std::ptrdiff_t m_nFluidType = 0x18;  
                constexpr std::ptrdiff_t m_flFluidDensity = 0x1C;  
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelFriction = 0x20;  
                constexpr std::ptrdiff_t m_vecWheelFrictionScales = 0x38;  
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelDrag = 0x50;  
                constexpr std::ptrdiff_t m_vecWheelDrag = 0x68;  
            }
            namespace C_BaseClientUIEntity {
                constexpr std::ptrdiff_t m_bEnabled = 0xD30;  
                constexpr std::ptrdiff_t m_DialogXMLName = 0xD38;  
                constexpr std::ptrdiff_t m_PanelClassName = 0xD40;  
                constexpr std::ptrdiff_t m_PanelID = 0xD48;  
            }
            namespace C_FuncTrackTrain {
                constexpr std::ptrdiff_t m_nLongAxis = 0xD28;  
                constexpr std::ptrdiff_t m_flRadius = 0xD2C;  
                constexpr std::ptrdiff_t m_flLineLength = 0xD30;  
            }
            namespace CCSPlayer_ActionTrackingServices {
                constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x40;  
                constexpr std::ptrdiff_t m_bIsRescuing = 0x44;  
                constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x48;  
                constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0xA0;  
            }
            namespace shard_model_desc_t {
                constexpr std::ptrdiff_t m_nModelID = 0x8;  
                constexpr std::ptrdiff_t m_hMaterialBase = 0x10;  
                constexpr std::ptrdiff_t m_hMaterialDamageOverlay = 0x18;  
                constexpr std::ptrdiff_t m_solid = 0x20;  
                constexpr std::ptrdiff_t m_vecPanelSize = 0x24;  
                constexpr std::ptrdiff_t m_vecStressPositionA = 0x2C;  
                constexpr std::ptrdiff_t m_vecStressPositionB = 0x34;  
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x40;  
                constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x58;  
                constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x70;  
                constexpr std::ptrdiff_t m_bHasParent = 0x74;  
                constexpr std::ptrdiff_t m_bParentFrozen = 0x75;  
                constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x78;  
            }
            namespace C_SceneEntity__QueuedEvents_t {
                constexpr std::ptrdiff_t starttime = 0x0;  
            }
            namespace CBaseProp {
                constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0xF88;  
                constexpr std::ptrdiff_t m_iShapeType = 0xF8C;  
                constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0xF90;  
                constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0xF94;  
            }
            namespace C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
            }
            namespace CCSPointScriptExtensions_observer {
            }
            namespace CPointTemplate {
                constexpr std::ptrdiff_t m_iszWorldName = 0x568;  
                constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x570;  
                constexpr std::ptrdiff_t m_iszEntityFilterName = 0x578;  
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x580;  
                constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x584;  
                constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x588;  
                constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x5B0;  
                constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x5B4;  
                constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x5B8;  
                constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x5D0;  
                constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x5E8;  
                constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x5F0;  
            }
            namespace C_WeaponHKP2000 {
            }
            namespace C_CSGO_PreviewModel {
                constexpr std::ptrdiff_t m_animgraph = 0x1120;  
                constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x1128;  
                constexpr std::ptrdiff_t m_defaultAnim = 0x1130;  
                constexpr std::ptrdiff_t m_nDefaultAnimLoopMode = 0x1138;  
                constexpr std::ptrdiff_t m_flInitialModelScale = 0x113C;  
                constexpr std::ptrdiff_t m_sInitialWeaponState = 0x1140;  
            }
            namespace CInfoDynamicShadowHint {
                constexpr std::ptrdiff_t m_bDisabled = 0x568;  
                constexpr std::ptrdiff_t m_flRange = 0x56C;  
                constexpr std::ptrdiff_t m_nImportance = 0x570;  
                constexpr std::ptrdiff_t m_nLightChoice = 0x574;  
                constexpr std::ptrdiff_t m_hLight = 0x578;  
            }
            namespace CTakeDamageInfoAPI {
            }
            namespace C_BaseEntityAPI {
            }
            namespace C_WeaponXM1014 {
            }
            namespace C_MapPreviewParticleSystem {
            }
            namespace CGlowProperty {
                constexpr std::ptrdiff_t m_fGlowColor = 0x8;  
                constexpr std::ptrdiff_t m_iGlowType = 0x30;  
                constexpr std::ptrdiff_t m_iGlowTeam = 0x34;  
                constexpr std::ptrdiff_t m_nGlowRange = 0x38;  
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0x3C;  
                constexpr std::ptrdiff_t m_glowColorOverride = 0x40;  
                constexpr std::ptrdiff_t m_bFlashing = 0x44;  
                constexpr std::ptrdiff_t m_flGlowTime = 0x48;  
                constexpr std::ptrdiff_t m_flGlowStartTime = 0x4C;  
                constexpr std::ptrdiff_t m_bEligibleForScreenHighlight = 0x50;  
                constexpr std::ptrdiff_t m_bGlowing = 0x51;  
            }
            namespace C_TriggerPhysics {
                constexpr std::ptrdiff_t m_gravityScale = 0xD30;  
                constexpr std::ptrdiff_t m_linearLimit = 0xD34;  
                constexpr std::ptrdiff_t m_linearDamping = 0xD38;  
                constexpr std::ptrdiff_t m_angularLimit = 0xD3C;  
                constexpr std::ptrdiff_t m_angularDamping = 0xD40;  
                constexpr std::ptrdiff_t m_linearForce = 0xD44;  
                constexpr std::ptrdiff_t m_flFrequency = 0xD48;  
                constexpr std::ptrdiff_t m_flDampingRatio = 0xD4C;  
                constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0xD50;  
                constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0xD5C;  
                constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0xD60;  
                constexpr std::ptrdiff_t m_vecLinearForceDirection = 0xD6C;  
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0xD78;  
            }
            namespace CCSPlayer_HostageServices {
                constexpr std::ptrdiff_t m_hCarriedHostage = 0x40;  
                constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x44;  
            }
            namespace C_LightDirectionalEntity {
            }
            namespace C_EnvCubemap {
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x5E8;  
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x5F0;  
                constexpr std::ptrdiff_t m_Entity_flInfluenceRadius = 0x5F4;  
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMins = 0x5F8;  
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMaxs = 0x604;  
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x610;  
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x614;  
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x618;  
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x61C;  
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x620;  
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x624;  
                constexpr std::ptrdiff_t m_Entity_flDiffuseScale = 0x630;  
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x634;  
                constexpr std::ptrdiff_t m_Entity_bDefaultEnvMap = 0x635;  
                constexpr std::ptrdiff_t m_Entity_bDefaultSpecEnvMap = 0x636;  
                constexpr std::ptrdiff_t m_Entity_bIndoorCubeMap = 0x637;  
                constexpr std::ptrdiff_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x638;  
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x648;  
            }
            namespace C_PredictedViewModel {
                constexpr std::ptrdiff_t m_vPredictedLagOffset = 0xFF0;  
                constexpr std::ptrdiff_t m_targetSpeed = 0xFFC;  
                constexpr std::ptrdiff_t m_currentSpeed = 0x1008;  
            }
            namespace C_WeaponBizon {
            }
            namespace C_AK47 {
            }
            namespace C_PointValueRemapper {
                constexpr std::ptrdiff_t m_bDisabled = 0x568;  
                constexpr std::ptrdiff_t m_bDisabledOld = 0x569;  
                constexpr std::ptrdiff_t m_bUpdateOnClient = 0x56A;  
                constexpr std::ptrdiff_t m_nInputType = 0x56C;  
                constexpr std::ptrdiff_t m_hRemapLineStart = 0x570;  
                constexpr std::ptrdiff_t m_hRemapLineEnd = 0x574;  
                constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x578;  
                constexpr std::ptrdiff_t m_flDisengageDistance = 0x57C;  
                constexpr std::ptrdiff_t m_flEngageDistance = 0x580;  
                constexpr std::ptrdiff_t m_bRequiresUseKey = 0x584;  
                constexpr std::ptrdiff_t m_nOutputType = 0x588;  
                constexpr std::ptrdiff_t m_hOutputEntities = 0x590;  
                constexpr std::ptrdiff_t m_nHapticsType = 0x5A8;  
                constexpr std::ptrdiff_t m_nMomentumType = 0x5AC;  
                constexpr std::ptrdiff_t m_flMomentumModifier = 0x5B0;  
                constexpr std::ptrdiff_t m_flSnapValue = 0x5B4;  
                constexpr std::ptrdiff_t m_flCurrentMomentum = 0x5B8;  
                constexpr std::ptrdiff_t m_nRatchetType = 0x5BC;  
                constexpr std::ptrdiff_t m_flRatchetOffset = 0x5C0;  
                constexpr std::ptrdiff_t m_flInputOffset = 0x5C4;  
                constexpr std::ptrdiff_t m_bEngaged = 0x5C8;  
                constexpr std::ptrdiff_t m_bFirstUpdate = 0x5C9;  
                constexpr std::ptrdiff_t m_flPreviousValue = 0x5CC;  
                constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x5D0;  
                constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x5D4;  
            }
            namespace C_Knife {
                constexpr std::ptrdiff_t m_bFirstAttack = 0x1B20;  
            }
            namespace C_EnvCubemapBox {
            }
            namespace C_ItemDogtags {
                constexpr std::ptrdiff_t m_OwningPlayer = 0x1768;  
                constexpr std::ptrdiff_t m_KillingPlayer = 0x176C;  
            }
            namespace C_CSGO_EndOfMatchCamera {
            }
            namespace C_SoundOpvarSetPointBase {
                constexpr std::ptrdiff_t m_iszStackName = 0x568;  
                constexpr std::ptrdiff_t m_iszOperatorName = 0x570;  
                constexpr std::ptrdiff_t m_iszOpvarName = 0x578;  
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x580;  
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x584;  
            }
            namespace C_PhysBox {
            }
            namespace CCSPlayer_BuyServices {
                constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0x40;  
            }
            namespace CPathSimpleAPI {
            }
            namespace C_WeaponTaser {
                constexpr std::ptrdiff_t m_fFireTime = 0x1B40;  
                constexpr std::ptrdiff_t m_nLastAttackTick = 0x1B44;  
            }
            namespace C_PhysicsPropMultiplayer {
            }
            namespace CInfoDynamicShadowHintBox {
                constexpr std::ptrdiff_t m_vBoxMins = 0x580;  
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x58C;  
            }
            namespace CCS_PortraitWorldCallbackHandler {
            }
            namespace C_SoundOpvarSetPathCornerEntity {
            }
            namespace C_EnvCubemapFog {
                constexpr std::ptrdiff_t m_flEndDistance = 0x568;  
                constexpr std::ptrdiff_t m_flStartDistance = 0x56C;  
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x570;  
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x574;  
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x578;  
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x57C;  
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x580;  
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x584;  
                constexpr std::ptrdiff_t m_flLODBias = 0x588;  
                constexpr std::ptrdiff_t m_bActive = 0x58C;  
                constexpr std::ptrdiff_t m_bStartDisabled = 0x58D;  
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x590;  
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x594;  
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x598;  
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x5A0;  
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x5A8;  
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x5B0;  
                constexpr std::ptrdiff_t m_bFirstTime = 0x5B1;  
            }
            namespace C_WeaponSawedoff {
            }
            namespace CCollisionProperty {
                constexpr std::ptrdiff_t m_collisionAttribute = 0x10;  
                constexpr std::ptrdiff_t m_vecMins = 0x40;  
                constexpr std::ptrdiff_t m_vecMaxs = 0x4C;  
                constexpr std::ptrdiff_t m_usSolidFlags = 0x5A;  
                constexpr std::ptrdiff_t m_nSolidType = 0x5B;  
                constexpr std::ptrdiff_t m_triggerBloat = 0x5C;  
                constexpr std::ptrdiff_t m_nSurroundType = 0x5D;  
                constexpr std::ptrdiff_t m_CollisionGroup = 0x5E;  
                constexpr std::ptrdiff_t m_nEnablePhysics = 0x5F;  
                constexpr std::ptrdiff_t m_flBoundingRadius = 0x60;  
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64;  
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70;  
                constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7C;  
                constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88;  
                constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94;  
                constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xA0;  
                constexpr std::ptrdiff_t m_flCapsuleRadius = 0xAC;  
            }
            namespace CNetworkedSequenceOperation {
                constexpr std::ptrdiff_t m_hSequence = 0x8;  
                constexpr std::ptrdiff_t m_flPrevCycle = 0xC;  
                constexpr std::ptrdiff_t m_flCycle = 0x10;  
                constexpr std::ptrdiff_t m_flWeight = 0x14;  
                constexpr std::ptrdiff_t m_bSequenceChangeNetworked = 0x1C;  
                constexpr std::ptrdiff_t m_bDiscontinuity = 0x1D;  
                constexpr std::ptrdiff_t m_flPrevCycleFromDiscontinuity = 0x20;  
                constexpr std::ptrdiff_t m_flPrevCycleForAnimEventDetection = 0x24;  
            }
            namespace C_PlayerSprayDecal {
                constexpr std::ptrdiff_t m_nUniqueID = 0xD28;  
                constexpr std::ptrdiff_t m_unAccountID = 0xD2C;  
                constexpr std::ptrdiff_t m_unTraceID = 0xD30;  
                constexpr std::ptrdiff_t m_rtGcTime = 0xD34;  
                constexpr std::ptrdiff_t m_vecEndPos = 0xD38;  
                constexpr std::ptrdiff_t m_vecStart = 0xD44;  
                constexpr std::ptrdiff_t m_vecLeft = 0xD50;  
                constexpr std::ptrdiff_t m_vecNormal = 0xD5C;  
                constexpr std::ptrdiff_t m_nPlayer = 0xD68;  
                constexpr std::ptrdiff_t m_nEntity = 0xD6C;  
                constexpr std::ptrdiff_t m_nHitbox = 0xD70;  
                constexpr std::ptrdiff_t m_flCreationTime = 0xD74;  
                constexpr std::ptrdiff_t m_nTintID = 0xD78;  
                constexpr std::ptrdiff_t m_nVersion = 0xD7C;  
                constexpr std::ptrdiff_t m_ubSignature = 0xD7D;  
                constexpr std::ptrdiff_t m_SprayRenderHelper = 0xE08;  
            }
            namespace EntityRenderAttribute_t {
                constexpr std::ptrdiff_t m_ID = 0x30;  
                constexpr std::ptrdiff_t m_Values = 0x34;  
            }
            namespace C_ShatterGlassShardPhysics {
                constexpr std::ptrdiff_t m_ShardDesc = 0x1120;  
            }
            namespace C_WeaponElite {
            }
            namespace C_LightEntity {
                constexpr std::ptrdiff_t m_CLightComponent = 0xD28;  
            }
            namespace C_PlayerVisibility {
                constexpr std::ptrdiff_t m_flVisibilityStrength = 0x568;  
                constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x56C;  
                constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x570;  
                constexpr std::ptrdiff_t m_flFadeTime = 0x574;  
                constexpr std::ptrdiff_t m_bStartDisabled = 0x578;  
                constexpr std::ptrdiff_t m_bIsEnabled = 0x579;  
            }
            namespace fogparams_t {
                constexpr std::ptrdiff_t dirPrimary = 0x8;  
                constexpr std::ptrdiff_t colorPrimary = 0x14;  
                constexpr std::ptrdiff_t colorSecondary = 0x18;  
                constexpr std::ptrdiff_t colorPrimaryLerpTo = 0x1C;  
                constexpr std::ptrdiff_t colorSecondaryLerpTo = 0x20;  
                constexpr std::ptrdiff_t start = 0x24;  
                constexpr std::ptrdiff_t end = 0x28;  
                constexpr std::ptrdiff_t farz = 0x2C;  
                constexpr std::ptrdiff_t maxdensity = 0x30;  
                constexpr std::ptrdiff_t exponent = 0x34;  
                constexpr std::ptrdiff_t HDRColorScale = 0x38;  
                constexpr std::ptrdiff_t skyboxFogFactor = 0x3C;  
                constexpr std::ptrdiff_t skyboxFogFactorLerpTo = 0x40;  
                constexpr std::ptrdiff_t startLerpTo = 0x44;  
                constexpr std::ptrdiff_t endLerpTo = 0x48;  
                constexpr std::ptrdiff_t maxdensityLerpTo = 0x4C;  
                constexpr std::ptrdiff_t lerptime = 0x50;  
                constexpr std::ptrdiff_t duration = 0x54;  
                constexpr std::ptrdiff_t blendtobackground = 0x58;  
                constexpr std::ptrdiff_t scattering = 0x5C;  
                constexpr std::ptrdiff_t locallightscale = 0x60;  
                constexpr std::ptrdiff_t enable = 0x64;  
                constexpr std::ptrdiff_t blend = 0x65;  
                constexpr std::ptrdiff_t m_bNoReflectionFog = 0x66;  
                constexpr std::ptrdiff_t m_bPadding = 0x67;  
            }
            namespace C_BaseFlex {
                constexpr std::ptrdiff_t m_flexWeight = 0xF98;  
                constexpr std::ptrdiff_t m_vLookTargetPosition = 0xFB0;  
                constexpr std::ptrdiff_t m_blinktoggle = 0xFC8;  
                constexpr std::ptrdiff_t m_nLastFlexUpdateFrameCount = 0x1028;  
                constexpr std::ptrdiff_t m_CachedViewTarget = 0x102C;  
                constexpr std::ptrdiff_t m_nNextSceneEventId = 0x1038;  
                constexpr std::ptrdiff_t m_iBlink = 0x103C;  
                constexpr std::ptrdiff_t m_blinktime = 0x1040;  
                constexpr std::ptrdiff_t m_prevblinktoggle = 0x1044;  
                constexpr std::ptrdiff_t m_iJawOpen = 0x1048;  
                constexpr std::ptrdiff_t m_flJawOpenAmount = 0x104C;  
                constexpr std::ptrdiff_t m_flBlinkAmount = 0x1050;  
                constexpr std::ptrdiff_t m_iMouthAttachment = 0x1054;  
                constexpr std::ptrdiff_t m_iEyeAttachment = 0x1055;  
                constexpr std::ptrdiff_t m_bResetFlexWeightsOnModelChange = 0x1056;  
                constexpr std::ptrdiff_t m_nEyeOcclusionRendererBone = 0x1070;  
                constexpr std::ptrdiff_t m_mEyeOcclusionRendererCameraToBoneTransform = 0x1074;  
                constexpr std::ptrdiff_t m_vEyeOcclusionRendererHalfExtent = 0x10A4;  
                constexpr std::ptrdiff_t m_PhonemeClasses = 0x10C0;  
            }
            namespace C_EnvSky {
                constexpr std::ptrdiff_t m_hSkyMaterial = 0xD28;  
                constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0xD30;  
                constexpr std::ptrdiff_t m_bStartDisabled = 0xD38;  
                constexpr std::ptrdiff_t m_vTintColor = 0xD39;  
                constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0xD3D;  
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xD44;  
                constexpr std::ptrdiff_t m_nFogType = 0xD48;  
                constexpr std::ptrdiff_t m_flFogMinStart = 0xD4C;  
                constexpr std::ptrdiff_t m_flFogMinEnd = 0xD50;  
                constexpr std::ptrdiff_t m_flFogMaxStart = 0xD54;  
                constexpr std::ptrdiff_t m_flFogMaxEnd = 0xD58;  
                constexpr std::ptrdiff_t m_bEnabled = 0xD5C;  
            }
            namespace CInfoTarget {
            }
            namespace C_CSGO_TeamIntroCounterTerroristPosition {
            }
            namespace C_DynamicProp {
                constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0x1110;  
                constexpr std::ptrdiff_t m_bUseAnimGraph = 0x1111;  
                constexpr std::ptrdiff_t m_pOutputAnimBegun = 0x1118;  
                constexpr std::ptrdiff_t m_pOutputAnimOver = 0x1140;  
                constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0x1168;  
                constexpr std::ptrdiff_t m_OnAnimReachedStart = 0x1190;  
                constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0x11B8;  
                constexpr std::ptrdiff_t m_iszIdleAnim = 0x11E0;  
                constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0x11E8;  
                constexpr std::ptrdiff_t m_bRandomizeCycle = 0x11EC;  
                constexpr std::ptrdiff_t m_bStartDisabled = 0x11ED;  
                constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0x11EE;  
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0x11EF;  
                constexpr std::ptrdiff_t m_bCreateNonSolid = 0x11F0;  
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0x11F1;  
                constexpr std::ptrdiff_t m_iInitialGlowState = 0x11F4;  
                constexpr std::ptrdiff_t m_nGlowRange = 0x11F8;  
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0x11FC;  
                constexpr std::ptrdiff_t m_glowColor = 0x1200;  
                constexpr std::ptrdiff_t m_nGlowTeam = 0x1204;  
                constexpr std::ptrdiff_t m_iCachedFrameCount = 0x1208;  
                constexpr std::ptrdiff_t m_vecCachedRenderMins = 0x120C;  
                constexpr std::ptrdiff_t m_vecCachedRenderMaxs = 0x1218;  
            }
            namespace CPropDataComponent {
                constexpr std::ptrdiff_t m_flDmgModBullet = 0x10;  
                constexpr std::ptrdiff_t m_flDmgModClub = 0x14;  
                constexpr std::ptrdiff_t m_flDmgModExplosive = 0x18;  
                constexpr std::ptrdiff_t m_flDmgModFire = 0x1C;  
                constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x20;  
                constexpr std::ptrdiff_t m_iszBasePropData = 0x28;  
                constexpr std::ptrdiff_t m_nInteractions = 0x30;  
                constexpr std::ptrdiff_t m_bSpawnMotionDisabled = 0x34;  
                constexpr std::ptrdiff_t m_nDisableTakePhysicsDamageSpawnFlag = 0x38;  
                constexpr std::ptrdiff_t m_nMotionDisabledSpawnFlag = 0x3C;  
            }
            namespace C_WeaponSCAR20 {
            }
            namespace C_DecoyGrenade {
            }
            namespace CCSPointScriptExtensions_player {
            }
            namespace C_KeychainModule {
                constexpr std::ptrdiff_t m_nKeychainDefID = 0xF90;  
                constexpr std::ptrdiff_t m_nKeychainSeed = 0xF94;  
            }
            namespace CCitadelSoundOpvarSetOBB {
                constexpr std::ptrdiff_t m_iszStackName = 0x580;  
                constexpr std::ptrdiff_t m_iszOperatorName = 0x588;  
                constexpr std::ptrdiff_t m_iszOpvarName = 0x590;  
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x598;  
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x5A4;  
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x5B0;  
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x5BC;  
                constexpr std::ptrdiff_t m_nAABBDirection = 0x5C8;  
            }
            namespace SellbackPurchaseEntry_t {
                constexpr std::ptrdiff_t m_unDefIdx = 0x30;  
                constexpr std::ptrdiff_t m_nCost = 0x34;  
                constexpr std::ptrdiff_t m_nPrevArmor = 0x38;  
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x3C;  
                constexpr std::ptrdiff_t m_hItem = 0x40;  
            }
            namespace C_SingleplayRules {
            }
            namespace C_LocalTempEntity {
                constexpr std::ptrdiff_t flags = 0xF88;  
                constexpr std::ptrdiff_t die = 0xF8C;  
                constexpr std::ptrdiff_t m_flFrameMax = 0xF90;  
                constexpr std::ptrdiff_t x = 0xF94;  
                constexpr std::ptrdiff_t y = 0xF98;  
                constexpr std::ptrdiff_t fadeSpeed = 0xF9C;  
                constexpr std::ptrdiff_t bounceFactor = 0xFA0;  
                constexpr std::ptrdiff_t hitSound = 0xFA4;  
                constexpr std::ptrdiff_t priority = 0xFA8;  
                constexpr std::ptrdiff_t tentOffset = 0xFAC;  
                constexpr std::ptrdiff_t m_vecTempEntAngVelocity = 0xFB8;  
                constexpr std::ptrdiff_t tempent_renderamt = 0xFC4;  
                constexpr std::ptrdiff_t m_vecNormal = 0xFC8;  
                constexpr std::ptrdiff_t m_flSpriteScale = 0xFD4;  
                constexpr std::ptrdiff_t m_nFlickerFrame = 0xFD8;  
                constexpr std::ptrdiff_t m_flFrameRate = 0xFDC;  
                constexpr std::ptrdiff_t m_flFrame = 0xFE0;  
                constexpr std::ptrdiff_t m_pszImpactEffect = 0xFE8;  
                constexpr std::ptrdiff_t m_pszParticleEffect = 0xFF0;  
                constexpr std::ptrdiff_t m_bParticleCollision = 0xFF8;  
                constexpr std::ptrdiff_t m_iLastCollisionFrame = 0xFFC;  
                constexpr std::ptrdiff_t m_vLastCollisionOrigin = 0x1000;  
                constexpr std::ptrdiff_t m_vecTempEntVelocity = 0x100C;  
                constexpr std::ptrdiff_t m_vecPrevAbsOrigin = 0x1018;  
                constexpr std::ptrdiff_t m_vecTempEntAcceleration = 0x1024;  
            }
            namespace C_EnvWindShared__WindAveEvent_t {
                constexpr std::ptrdiff_t m_flStartWindSpeed = 0x0;  
                constexpr std::ptrdiff_t m_flAveWindSpeed = 0x4;  
            }
            namespace C_MolotovProjectile {
                constexpr std::ptrdiff_t m_bIsIncGrenade = 0x1208;  
            }
            namespace C_LightEnvironmentEntity {
            }
            namespace C_WeaponUMP45 {
            }
            namespace CInfoOffscreenPanoramaTexture {
                constexpr std::ptrdiff_t m_bDisabled = 0x568;  
                constexpr std::ptrdiff_t m_nResolutionX = 0x56C;  
                constexpr std::ptrdiff_t m_nResolutionY = 0x570;  
                constexpr std::ptrdiff_t m_szLayoutFileName = 0x578;  
                constexpr std::ptrdiff_t m_RenderAttrName = 0x580;  
                constexpr std::ptrdiff_t m_TargetEntities = 0x588;  
                constexpr std::ptrdiff_t m_nTargetChangeCount = 0x5A0;  
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x5A8;  
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x720;  
            }
            namespace C_DynamicLight {
                constexpr std::ptrdiff_t m_Flags = 0xD28;  
                constexpr std::ptrdiff_t m_LightStyle = 0xD29;  
                constexpr std::ptrdiff_t m_Radius = 0xD2C;  
                constexpr std::ptrdiff_t m_Exponent = 0xD30;  
                constexpr std::ptrdiff_t m_InnerAngle = 0xD34;  
                constexpr std::ptrdiff_t m_OuterAngle = 0xD38;  
                constexpr std::ptrdiff_t m_SpotRadius = 0xD3C;  
            }
            namespace C_CSWeaponBase {
                constexpr std::ptrdiff_t m_flFireSequenceStartTime = 0x16DC;  
                constexpr std::ptrdiff_t m_nFireSequenceStartTimeChange = 0x16E0;  
                constexpr std::ptrdiff_t m_nFireSequenceStartTimeAck = 0x16E4;  
                constexpr std::ptrdiff_t m_ePlayerFireEvent = 0x16E8;  
                constexpr std::ptrdiff_t m_ePlayerFireEventAttackType = 0x16EC;  
                constexpr std::ptrdiff_t m_seqIdle = 0x16F0;  
                constexpr std::ptrdiff_t m_seqFirePrimary = 0x16F4;  
                constexpr std::ptrdiff_t m_seqFireSecondary = 0x16F8;  
                constexpr std::ptrdiff_t m_thirdPersonFireSequences = 0x1700;  
                constexpr std::ptrdiff_t m_hCurrentThirdPersonSequence = 0x1718;  
                constexpr std::ptrdiff_t m_nSilencerBoneIndex = 0x171C;  
                constexpr std::ptrdiff_t m_thirdPersonSequences = 0x1720;  
                constexpr std::ptrdiff_t m_ClientPreviousWeaponState = 0x1758;  
                constexpr std::ptrdiff_t m_iState = 0x175C;  
                constexpr std::ptrdiff_t m_flCrosshairDistance = 0x1760;  
                constexpr std::ptrdiff_t m_iAmmoLastCheck = 0x1764;  
                constexpr std::ptrdiff_t m_iAlpha = 0x1768;  
                constexpr std::ptrdiff_t m_iScopeTextureID = 0x176C;  
                constexpr std::ptrdiff_t m_iCrosshairTextureID = 0x1770;  
                constexpr std::ptrdiff_t m_flGunAccuracyPositionDeprecated = 0x1774;  
                constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0x1778;  
                constexpr std::ptrdiff_t m_nViewModelIndex = 0x177C;  
                constexpr std::ptrdiff_t m_bReloadsWithClips = 0x1780;  
                constexpr std::ptrdiff_t m_flTimeWeaponIdle = 0x1784;  
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0x1788;  
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0x1790;  
                constexpr std::ptrdiff_t m_weaponMode = 0x17B8;  
                constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0x17BC;  
                constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0x17C0;  
                constexpr std::ptrdiff_t m_flTurningInaccuracy = 0x17CC;  
                constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x17D0;  
                constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0x17D4;  
                constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0x17D8;  
                constexpr std::ptrdiff_t m_fScopeZoomEndTime = 0x17DC;  
                constexpr std::ptrdiff_t m_iRecoilIndex = 0x17E0;  
                constexpr std::ptrdiff_t m_flRecoilIndex = 0x17E4;  
                constexpr std::ptrdiff_t m_bBurstMode = 0x17E8;  
                constexpr std::ptrdiff_t m_flLastBurstModeChangeTime = 0x17EC;  
                constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0x17F0;  
                constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0x17F4;  
                constexpr std::ptrdiff_t m_bInReload = 0x17F8;  
                constexpr std::ptrdiff_t m_bReloadVisuallyComplete = 0x17F9;  
                constexpr std::ptrdiff_t m_flDroppedAtTime = 0x17FC;  
                constexpr std::ptrdiff_t m_bIsHauledBack = 0x1800;  
                constexpr std::ptrdiff_t m_bSilencerOn = 0x1801;  
                constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0x1804;  
                constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0x1808;  
                constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0x180C;  
                constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0x1810;  
                constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0x1814;  
                constexpr std::ptrdiff_t m_bClearWeaponIdentifyingUGC = 0x18B0;  
                constexpr std::ptrdiff_t m_bVisualsDataSet = 0x18B1;  
                constexpr std::ptrdiff_t m_bOldFirstPersonSpectatedState = 0x18B2;  
                constexpr std::ptrdiff_t m_bUIWeapon = 0x18B3;  
                constexpr std::ptrdiff_t m_nCustomEconReloadEventId = 0x18B4;  
                constexpr std::ptrdiff_t m_nextPrevOwnerUseTime = 0x18C0;  
                constexpr std::ptrdiff_t m_hPrevOwner = 0x18C4;  
                constexpr std::ptrdiff_t m_nDropTick = 0x18C8;  
                constexpr std::ptrdiff_t m_donated = 0x18EC;  
                constexpr std::ptrdiff_t m_fLastShotTime = 0x18F0;  
                constexpr std::ptrdiff_t m_bWasOwnedByCT = 0x18F4;  
                constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0x18F5;  
                constexpr std::ptrdiff_t m_gunHeat = 0x18F8;  
                constexpr std::ptrdiff_t m_smokeAttachments = 0x18FC;  
                constexpr std::ptrdiff_t m_lastSmokeTime = 0x1900;  
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime = 0x1904;  
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime_Repredict = 0x1908;  
                constexpr std::ptrdiff_t m_IronSightController = 0x19E0;  
                constexpr std::ptrdiff_t m_iIronSightMode = 0x1A90;  
                constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x1AA0;  
                constexpr std::ptrdiff_t m_iNumEmptyAttacks = 0x1AA4;  
                constexpr std::ptrdiff_t m_flLastMagDropRequestTime = 0x1B00;  
                constexpr std::ptrdiff_t m_flWatTickOffset = 0x1B04;  
            }
            namespace C_TriggerVolume {
            }
            namespace C_FuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_nAmbientEffect = 0xD28;  
                constexpr std::ptrdiff_t m_EffectName = 0xD30;  
                constexpr std::ptrdiff_t m_bState = 0xD38;  
            }
            namespace CCSPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_flNextAttack = 0xB8;  
                constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xBC;  
                constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xBD;  
                constexpr std::ptrdiff_t m_nOldShootPositionHistoryCount = 0xC0;  
                constexpr std::ptrdiff_t m_nOldInputHistoryCount = 0x458;  
            }
            namespace C_EnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x568;  
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x56C;  
            }
            namespace C_BaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x38;  
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40;  
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x320;  
                constexpr std::ptrdiff_t m_pGameSceneNode = 0x328;  
                constexpr std::ptrdiff_t m_pRenderComponent = 0x330;  
                constexpr std::ptrdiff_t m_pCollision = 0x338;  
                constexpr std::ptrdiff_t m_iMaxHealth = 0x340;  
                constexpr std::ptrdiff_t m_iHealth = 0x344;  
                constexpr std::ptrdiff_t m_lifeState = 0x348;  
                constexpr std::ptrdiff_t m_bTakesDamage = 0x349;  
                constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x350;  
                constexpr std::ptrdiff_t m_nPlatformType = 0x358;  
                constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x359;  
                constexpr std::ptrdiff_t m_hSceneObjectController = 0x35C;  
                constexpr std::ptrdiff_t m_nNoInterpolationTick = 0x360;  
                constexpr std::ptrdiff_t m_nVisibilityNoInterpolationTick = 0x364;  
                constexpr std::ptrdiff_t m_flProxyRandomValue = 0x368;  
                constexpr std::ptrdiff_t m_iEFlags = 0x36C;  
                constexpr std::ptrdiff_t m_nWaterType = 0x370;  
                constexpr std::ptrdiff_t m_bInterpolateEvenWithNoModel = 0x371;  
                constexpr std::ptrdiff_t m_bPredictionEligible = 0x372;  
                constexpr std::ptrdiff_t m_bApplyLayerMatchIDToModel = 0x373;  
                constexpr std::ptrdiff_t m_tokLayerMatchID = 0x374;  
                constexpr std::ptrdiff_t m_nSubclassID = 0x378;  
                constexpr std::ptrdiff_t m_nSimulationTick = 0x388;  
                constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x38C;  
                constexpr std::ptrdiff_t m_aThinkFunctions = 0x390;  
                constexpr std::ptrdiff_t m_bDisabledContextThinks = 0x3A8;  
                constexpr std::ptrdiff_t m_flAnimTime = 0x3AC;  
                constexpr std::ptrdiff_t m_flSimulationTime = 0x3B0;  
                constexpr std::ptrdiff_t m_nSceneObjectOverrideFlags = 0x3B4;  
                constexpr std::ptrdiff_t m_bHasSuccessfullyInterpolated = 0x3B5;  
                constexpr std::ptrdiff_t m_bHasAddedVarsToInterpolation = 0x3B6;  
                constexpr std::ptrdiff_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x3B7;  
                constexpr std::ptrdiff_t m_nInterpolationLatchDirtyFlags = 0x3B8;  
                constexpr std::ptrdiff_t m_ListEntry = 0x3C0;  
                constexpr std::ptrdiff_t m_flCreateTime = 0x3D8;  
                constexpr std::ptrdiff_t m_flSpeed = 0x3DC;  
                constexpr std::ptrdiff_t m_EntClientFlags = 0x3E0;  
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x3E2;  
                constexpr std::ptrdiff_t m_iTeamNum = 0x3E3;  
                constexpr std::ptrdiff_t m_spawnflags = 0x3E4;  
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x3E8;  
                constexpr std::ptrdiff_t m_fFlags = 0x3EC;  
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x3F0;  
                constexpr std::ptrdiff_t m_vecVelocity = 0x400;  
                constexpr std::ptrdiff_t m_vecBaseVelocity = 0x430;  
                constexpr std::ptrdiff_t m_hEffectEntity = 0x43C;  
                constexpr std::ptrdiff_t m_hOwnerEntity = 0x440;  
                constexpr std::ptrdiff_t m_MoveCollide = 0x444;  
                constexpr std::ptrdiff_t m_MoveType = 0x445;  
                constexpr std::ptrdiff_t m_nActualMoveType = 0x446;  
                constexpr std::ptrdiff_t m_flWaterLevel = 0x448;  
                constexpr std::ptrdiff_t m_fEffects = 0x44C;  
                constexpr std::ptrdiff_t m_hGroundEntity = 0x450;  
                constexpr std::ptrdiff_t m_nGroundBodyIndex = 0x454;  
                constexpr std::ptrdiff_t m_flFriction = 0x458;  
                constexpr std::ptrdiff_t m_flElasticity = 0x45C;  
                constexpr std::ptrdiff_t m_flGravityScale = 0x460;  
                constexpr std::ptrdiff_t m_flTimeScale = 0x464;  
                constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x468;  
                constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x46C;  
                constexpr std::ptrdiff_t m_hThink = 0x470;  
                constexpr std::ptrdiff_t m_fBBoxVisFlags = 0x480;  
                constexpr std::ptrdiff_t m_bPredictable = 0x481;  
                constexpr std::ptrdiff_t m_bRenderWithViewModels = 0x482;  
                constexpr std::ptrdiff_t m_nSplitUserPlayerPredictionSlot = 0x484;  
                constexpr std::ptrdiff_t m_nFirstPredictableCommand = 0x488;  
                constexpr std::ptrdiff_t m_nLastPredictableCommand = 0x48C;  
                constexpr std::ptrdiff_t m_hOldMoveParent = 0x490;  
                constexpr std::ptrdiff_t m_Particles = 0x498;  
                constexpr std::ptrdiff_t m_vecPredictedScriptFloats = 0x4C0;  
                constexpr std::ptrdiff_t m_vecPredictedScriptFloatIDs = 0x4D8;  
                constexpr std::ptrdiff_t m_nNextScriptVarRecordID = 0x508;  
                constexpr std::ptrdiff_t m_vecAngVelocity = 0x518;  
                constexpr std::ptrdiff_t m_DataChangeEventRef = 0x524;  
                constexpr std::ptrdiff_t m_dependencies = 0x528;  
                constexpr std::ptrdiff_t m_nCreationTick = 0x540;  
                constexpr std::ptrdiff_t m_bAnimTimeChanged = 0x54D;  
                constexpr std::ptrdiff_t m_bSimulationTimeChanged = 0x54E;  
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x558;  
                constexpr std::ptrdiff_t m_nBloodType = 0x560;  
            }
            namespace CEntityIdentity {
                constexpr std::ptrdiff_t m_nameStringableIndex = 0x14;  
                constexpr std::ptrdiff_t m_name = 0x18;  
                constexpr std::ptrdiff_t m_designerName = 0x20;  
                constexpr std::ptrdiff_t m_flags = 0x30;  
                constexpr std::ptrdiff_t m_worldGroupId = 0x38;  
                constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C;  
                constexpr std::ptrdiff_t m_PathIndex = 0x40;  
                constexpr std::ptrdiff_t m_pPrev = 0x58;  
                constexpr std::ptrdiff_t m_pNext = 0x60;  
                constexpr std::ptrdiff_t m_pPrevByClass = 0x68;  
                constexpr std::ptrdiff_t m_pNextByClass = 0x70;  
            }
            namespace C_StattrakModule {
                constexpr std::ptrdiff_t m_bKnife = 0xF90;  
            }
            namespace C_PhysicsProp {
                constexpr std::ptrdiff_t m_bAwake = 0x1110;  
            }
            namespace C_BreakableProp {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0xFC8;  
                constexpr std::ptrdiff_t m_OnBreak = 0x1008;  
                constexpr std::ptrdiff_t m_OnHealthChanged = 0x1030;  
                constexpr std::ptrdiff_t m_OnTakeDamage = 0x1058;  
                constexpr std::ptrdiff_t m_impactEnergyScale = 0x1080;  
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0x1084;  
                constexpr std::ptrdiff_t m_flPressureDelay = 0x1088;  
                constexpr std::ptrdiff_t m_flDefBurstScale = 0x108C;  
                constexpr std::ptrdiff_t m_vDefBurstOffset = 0x1090;  
                constexpr std::ptrdiff_t m_hBreaker = 0x109C;  
                constexpr std::ptrdiff_t m_PerformanceMode = 0x10A0;  
                constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0x10A4;  
                constexpr std::ptrdiff_t m_BreakableContentsType = 0x10A8;  
                constexpr std::ptrdiff_t m_strBreakableContentsPropGroupOverride = 0x10B0;  
                constexpr std::ptrdiff_t m_strBreakableContentsParticleOverride = 0x10B8;  
                constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0x10C0;  
                constexpr std::ptrdiff_t m_explodeDamage = 0x10C4;  
                constexpr std::ptrdiff_t m_explodeRadius = 0x10C8;  
                constexpr std::ptrdiff_t m_explosionDelay = 0x10D0;  
                constexpr std::ptrdiff_t m_explosionBuildupSound = 0x10D8;  
                constexpr std::ptrdiff_t m_explosionCustomEffect = 0x10E0;  
                constexpr std::ptrdiff_t m_explosionCustomSound = 0x10E8;  
                constexpr std::ptrdiff_t m_explosionModifier = 0x10F0;  
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x10F8;  
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x10FC;  
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0x1100;  
                constexpr std::ptrdiff_t m_hLastAttacker = 0x1104;  
                constexpr std::ptrdiff_t m_hFlareEnt = 0x1108;  
                constexpr std::ptrdiff_t m_noGhostCollision = 0x110C;  
            }
            namespace C_FuncMoveLinear {
            }
            namespace C_Beam {
                constexpr std::ptrdiff_t m_flFrameRate = 0xD28;  
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xD2C;  
                constexpr std::ptrdiff_t m_flFireTime = 0xD30;  
                constexpr std::ptrdiff_t m_flDamage = 0xD34;  
                constexpr std::ptrdiff_t m_nNumBeamEnts = 0xD38;  
                constexpr std::ptrdiff_t m_queryHandleHalo = 0xD3C;  
                constexpr std::ptrdiff_t m_hBaseMaterial = 0xD60;  
                constexpr std::ptrdiff_t m_nHaloIndex = 0xD68;  
                constexpr std::ptrdiff_t m_nBeamType = 0xD70;  
                constexpr std::ptrdiff_t m_nBeamFlags = 0xD74;  
                constexpr std::ptrdiff_t m_hAttachEntity = 0xD78;  
                constexpr std::ptrdiff_t m_nAttachIndex = 0xDA0;  
                constexpr std::ptrdiff_t m_fWidth = 0xDAC;  
                constexpr std::ptrdiff_t m_fEndWidth = 0xDB0;  
                constexpr std::ptrdiff_t m_fFadeLength = 0xDB4;  
                constexpr std::ptrdiff_t m_fHaloScale = 0xDB8;  
                constexpr std::ptrdiff_t m_fAmplitude = 0xDBC;  
                constexpr std::ptrdiff_t m_fStartFrame = 0xDC0;  
                constexpr std::ptrdiff_t m_fSpeed = 0xDC4;  
                constexpr std::ptrdiff_t m_flFrame = 0xDC8;  
                constexpr std::ptrdiff_t m_nClipStyle = 0xDCC;  
                constexpr std::ptrdiff_t m_bTurnedOff = 0xDD0;  
                constexpr std::ptrdiff_t m_vecEndPos = 0xDD4;  
                constexpr std::ptrdiff_t m_hEndEntity = 0xDE0;  
            }
            namespace C_CSGO_TeamPreviewCharacterPosition {
                constexpr std::ptrdiff_t m_nVariant = 0x568;  
                constexpr std::ptrdiff_t m_nRandom = 0x56C;  
                constexpr std::ptrdiff_t m_nOrdinal = 0x570;  
                constexpr std::ptrdiff_t m_sWeaponName = 0x578;  
                constexpr std::ptrdiff_t m_xuid = 0x580;  
                constexpr std::ptrdiff_t m_agentItem = 0x588;  
                constexpr std::ptrdiff_t m_glovesItem = 0x9D0;  
                constexpr std::ptrdiff_t m_weaponItem = 0xE18;  
            }
            namespace C_DynamicPropAlias_prop_dynamic_override {
            }
            namespace C_EnvScreenOverlay {
                constexpr std::ptrdiff_t m_iszOverlayNames = 0x568;  
                constexpr std::ptrdiff_t m_flOverlayTimes = 0x5B8;  
                constexpr std::ptrdiff_t m_flStartTime = 0x5E0;  
                constexpr std::ptrdiff_t m_iDesiredOverlay = 0x5E4;  
                constexpr std::ptrdiff_t m_bIsActive = 0x5E8;  
                constexpr std::ptrdiff_t m_bWasActive = 0x5E9;  
                constexpr std::ptrdiff_t m_iCachedDesiredOverlay = 0x5EC;  
                constexpr std::ptrdiff_t m_iCurrentOverlay = 0x5F0;  
                constexpr std::ptrdiff_t m_flCurrentOverlayTime = 0x5F4;  
            }
            namespace CCSWeaponBaseVData {
                constexpr std::ptrdiff_t m_WeaponType = 0x348;  
                constexpr std::ptrdiff_t m_WeaponCategory = 0x34C;  
                constexpr std::ptrdiff_t m_szViewModel = 0x350;  
                constexpr std::ptrdiff_t m_szPlayerModel = 0x430;  
                constexpr std::ptrdiff_t m_szWorldDroppedModel = 0x510;  
                constexpr std::ptrdiff_t m_szAimsightLensMaskModel = 0x5F0;  
                constexpr std::ptrdiff_t m_szMagazineModel = 0x6D0;  
                constexpr std::ptrdiff_t m_szHeatEffect = 0x7B0;  
                constexpr std::ptrdiff_t m_szEjectBrassEffect = 0x890;  
                constexpr std::ptrdiff_t m_szMuzzleFlashParticleAlt = 0x970;  
                constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticle = 0xA50;  
                constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticleAlt = 0xB30;  
                constexpr std::ptrdiff_t m_szTracerParticle = 0xC10;  
                constexpr std::ptrdiff_t m_GearSlot = 0xCF0;  
                constexpr std::ptrdiff_t m_GearSlotPosition = 0xCF4;  
                constexpr std::ptrdiff_t m_DefaultLoadoutSlot = 0xCF8;  
                constexpr std::ptrdiff_t m_sWrongTeamMsg = 0xD00;  
                constexpr std::ptrdiff_t m_nPrice = 0xD08;  
                constexpr std::ptrdiff_t m_nKillAward = 0xD0C;  
                constexpr std::ptrdiff_t m_nPrimaryReserveAmmoMax = 0xD10;  
                constexpr std::ptrdiff_t m_nSecondaryReserveAmmoMax = 0xD14;  
                constexpr std::ptrdiff_t m_bMeleeWeapon = 0xD18;  
                constexpr std::ptrdiff_t m_bHasBurstMode = 0xD19;  
                constexpr std::ptrdiff_t m_bIsRevolver = 0xD1A;  
                constexpr std::ptrdiff_t m_bCannotShootUnderwater = 0xD1B;  
                constexpr std::ptrdiff_t m_szName = 0xD20;  
                constexpr std::ptrdiff_t m_szAnimExtension = 0xD28;  
                constexpr std::ptrdiff_t m_eSilencerType = 0xD30;  
                constexpr std::ptrdiff_t m_nCrosshairMinDistance = 0xD34;  
                constexpr std::ptrdiff_t m_nCrosshairDeltaDistance = 0xD38;  
                constexpr std::ptrdiff_t m_bIsFullAuto = 0xD3C;  
                constexpr std::ptrdiff_t m_nNumBullets = 0xD40;  
                constexpr std::ptrdiff_t m_flCycleTime = 0xD44;  
                constexpr std::ptrdiff_t m_flMaxSpeed = 0xD4C;  
                constexpr std::ptrdiff_t m_flSpread = 0xD54;  
                constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0xD5C;  
                constexpr std::ptrdiff_t m_flInaccuracyStand = 0xD64;  
                constexpr std::ptrdiff_t m_flInaccuracyJump = 0xD6C;  
                constexpr std::ptrdiff_t m_flInaccuracyLand = 0xD74;  
                constexpr std::ptrdiff_t m_flInaccuracyLadder = 0xD7C;  
                constexpr std::ptrdiff_t m_flInaccuracyFire = 0xD84;  
                constexpr std::ptrdiff_t m_flInaccuracyMove = 0xD8C;  
                constexpr std::ptrdiff_t m_flRecoilAngle = 0xD94;  
                constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0xD9C;  
                constexpr std::ptrdiff_t m_flRecoilMagnitude = 0xDA4;  
                constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0xDAC;  
                constexpr std::ptrdiff_t m_nTracerFrequency = 0xDB4;  
                constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0xDBC;  
                constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0xDC0;  
                constexpr std::ptrdiff_t m_flInaccuracyReload = 0xDC4;  
                constexpr std::ptrdiff_t m_nRecoilSeed = 0xDC8;  
                constexpr std::ptrdiff_t m_nSpreadSeed = 0xDCC;  
                constexpr std::ptrdiff_t m_flTimeToIdleAfterFire = 0xDD0;  
                constexpr std::ptrdiff_t m_flIdleInterval = 0xDD4;  
                constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0xDD8;  
                constexpr std::ptrdiff_t m_flHeatPerShot = 0xDDC;  
                constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0xDE0;  
                constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0xDE4;  
                constexpr std::ptrdiff_t m_flBotAudibleRange = 0xDE8;  
                constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0xDF0;  
                constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0xDF8;  
                constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0xDF9;  
                constexpr std::ptrdiff_t m_nZoomLevels = 0xDFC;  
                constexpr std::ptrdiff_t m_nZoomFOV1 = 0xE00;  
                constexpr std::ptrdiff_t m_nZoomFOV2 = 0xE04;  
                constexpr std::ptrdiff_t m_flZoomTime0 = 0xE08;  
                constexpr std::ptrdiff_t m_flZoomTime1 = 0xE0C;  
                constexpr std::ptrdiff_t m_flZoomTime2 = 0xE10;  
                constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0xE14;  
                constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0xE18;  
                constexpr std::ptrdiff_t m_flIronSightFOV = 0xE1C;  
                constexpr std::ptrdiff_t m_flIronSightPivotForward = 0xE20;  
                constexpr std::ptrdiff_t m_flIronSightLooseness = 0xE24;  
                constexpr std::ptrdiff_t m_angPivotAngle = 0xE28;  
                constexpr std::ptrdiff_t m_vecIronSightEyePos = 0xE34;  
                constexpr std::ptrdiff_t m_nDamage = 0xE40;  
                constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0xE44;  
                constexpr std::ptrdiff_t m_flArmorRatio = 0xE48;  
                constexpr std::ptrdiff_t m_flPenetration = 0xE4C;  
                constexpr std::ptrdiff_t m_flRange = 0xE50;  
                constexpr std::ptrdiff_t m_flRangeModifier = 0xE54;  
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0xE58;  
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0xE5C;  
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0xE60;  
                constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0xE64;  
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0xE68;  
                constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0xE6C;  
                constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0xE70;  
                constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0xE74;  
                constexpr std::ptrdiff_t m_flThrowVelocity = 0xE78;  
                constexpr std::ptrdiff_t m_vSmokeColor = 0xE7C;  
                constexpr std::ptrdiff_t m_szAnimClass = 0xE88;  
            }
            namespace C_PointWorldText {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xD30;  
                constexpr std::ptrdiff_t m_messageText = 0xD48;  
                constexpr std::ptrdiff_t m_FontName = 0xF48;  
                constexpr std::ptrdiff_t m_BackgroundMaterialName = 0xF88;  
                constexpr std::ptrdiff_t m_bEnabled = 0xFC8;  
                constexpr std::ptrdiff_t m_bFullbright = 0xFC9;  
                constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0xFCC;  
                constexpr std::ptrdiff_t m_flFontSize = 0xFD0;  
                constexpr std::ptrdiff_t m_flDepthOffset = 0xFD4;  
                constexpr std::ptrdiff_t m_bDrawBackground = 0xFD8;  
                constexpr std::ptrdiff_t m_flBackgroundBorderWidth = 0xFDC;  
                constexpr std::ptrdiff_t m_flBackgroundBorderHeight = 0xFE0;  
                constexpr std::ptrdiff_t m_flBackgroundWorldToUV = 0xFE4;  
                constexpr std::ptrdiff_t m_Color = 0xFE8;  
                constexpr std::ptrdiff_t m_nJustifyHorizontal = 0xFEC;  
                constexpr std::ptrdiff_t m_nJustifyVertical = 0xFF0;  
                constexpr std::ptrdiff_t m_nReorientMode = 0xFF4;  
            }
            namespace CCSPlayerController {
                constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x720;  
                constexpr std::ptrdiff_t m_pInventoryServices = 0x728;  
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x730;  
                constexpr std::ptrdiff_t m_pDamageServices = 0x738;  
                constexpr std::ptrdiff_t m_iPing = 0x740;  
                constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x744;  
                constexpr std::ptrdiff_t m_uiCommunicationMuteFlags = 0x748;  
                constexpr std::ptrdiff_t m_szCrosshairCodes = 0x750;  
                constexpr std::ptrdiff_t m_iPendingTeamNum = 0x758;  
                constexpr std::ptrdiff_t m_flForceTeamTime = 0x75C;  
                constexpr std::ptrdiff_t m_iCompTeammateColor = 0x760;  
                constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x764;  
                constexpr std::ptrdiff_t m_flPreviousForceJoinTeamTime = 0x768;  
                constexpr std::ptrdiff_t m_szClan = 0x770;  
                constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x778;  
                constexpr std::ptrdiff_t m_iCoachingTeam = 0x780;  
                constexpr std::ptrdiff_t m_nPlayerDominated = 0x788;  
                constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x790;  
                constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x798;  
                constexpr std::ptrdiff_t m_iCompetitiveWins = 0x79C;  
                constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x7A0;  
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x7A4;  
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x7A8;  
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x7AC;  
                constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x7B0;  
                constexpr std::ptrdiff_t m_unActiveQuestId = 0x7B4;  
                constexpr std::ptrdiff_t m_rtActiveMissionPeriod = 0x7B8;  
                constexpr std::ptrdiff_t m_nQuestProgressReason = 0x7BC;  
                constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x7C0;  
                constexpr std::ptrdiff_t m_iDraftIndex = 0x7F0;  
                constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x7F4;  
                constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x7F8;  
                constexpr std::ptrdiff_t m_eNetworkDisconnectionReason = 0x7FC;  
                constexpr std::ptrdiff_t m_bCannotBeKicked = 0x800;  
                constexpr std::ptrdiff_t m_bEverFullyConnected = 0x801;  
                constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x802;  
                constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x803;  
                constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x804;  
                constexpr std::ptrdiff_t m_bScoreReported = 0x805;  
                constexpr std::ptrdiff_t m_nDisconnectionTick = 0x808;  
                constexpr std::ptrdiff_t m_bControllingBot = 0x818;  
                constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x819;  
                constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x81A;  
                constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x81C;  
                constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x820;  
                constexpr std::ptrdiff_t m_hPlayerPawn = 0x824;  
                constexpr std::ptrdiff_t m_hObserverPawn = 0x828;  
                constexpr std::ptrdiff_t m_bPawnIsAlive = 0x82C;  
                constexpr std::ptrdiff_t m_iPawnHealth = 0x830;  
                constexpr std::ptrdiff_t m_iPawnArmor = 0x834;  
                constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x838;  
                constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x839;  
                constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x83A;  
                constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x83C;  
                constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x840;  
                constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x844;  
                constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x848;  
                constexpr std::ptrdiff_t m_iScore = 0x84C;  
                constexpr std::ptrdiff_t m_recentKillQueue = 0x850;  
                constexpr std::ptrdiff_t m_nFirstKill = 0x858;  
                constexpr std::ptrdiff_t m_nKillCount = 0x859;  
                constexpr std::ptrdiff_t m_bMvpNoMusic = 0x85A;  
                constexpr std::ptrdiff_t m_eMvpReason = 0x85C;  
                constexpr std::ptrdiff_t m_iMusicKitID = 0x860;  
                constexpr std::ptrdiff_t m_iMusicKitMVPs = 0x864;  
                constexpr std::ptrdiff_t m_iMVPs = 0x868;  
                constexpr std::ptrdiff_t m_bIsPlayerNameDirty = 0x86C;  
                constexpr std::ptrdiff_t m_bFireBulletsSeedSynchronized = 0x86D;  
            }
            namespace C_WeaponFiveSeven {
            }
            namespace C_BasePropDoor {
                constexpr std::ptrdiff_t m_eDoorState = 0x1238;  
                constexpr std::ptrdiff_t m_modelChanged = 0x123C;  
                constexpr std::ptrdiff_t m_bLocked = 0x123D;  
                constexpr std::ptrdiff_t m_closedPosition = 0x1240;  
                constexpr std::ptrdiff_t m_closedAngles = 0x124C;  
                constexpr std::ptrdiff_t m_hMaster = 0x1258;  
                constexpr std::ptrdiff_t m_vWhereToSetLightingOrigin = 0x125C;  
            }
            namespace C_CSGO_TeamSelectTerroristPosition {
            }
            namespace C_NametagModule {
                constexpr std::ptrdiff_t m_strNametagString = 0xF90;  
            }
            namespace C_PhysPropClientside {
                constexpr std::ptrdiff_t m_flTouchDelta = 0x1110;  
                constexpr std::ptrdiff_t m_fDeathTime = 0x1114;  
                constexpr std::ptrdiff_t m_inertiaScale = 0x1118;  
                constexpr std::ptrdiff_t m_vecDamagePosition = 0x111C;  
                constexpr std::ptrdiff_t m_vecDamageDirection = 0x1128;  
                constexpr std::ptrdiff_t m_nDamageType = 0x1134;  
            }
            namespace C_CSGO_TeamSelectCamera {
            }
            namespace C_SoundAreaEntityBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x568;  
                constexpr std::ptrdiff_t m_bWasEnabled = 0x570;  
                constexpr std::ptrdiff_t m_iszSoundAreaType = 0x578;  
                constexpr std::ptrdiff_t m_vPos = 0x580;  
            }
            namespace C_FogController {
                constexpr std::ptrdiff_t m_fog = 0x568;  
                constexpr std::ptrdiff_t m_bUseAngles = 0x5D0;  
                constexpr std::ptrdiff_t m_iChangedVariables = 0x5D4;  
            }
            namespace CPlayer_ItemServices {
            }
            namespace C_FuncBrush {
            }
            namespace CInfoWorldLayer {
                constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x568;  
                constexpr std::ptrdiff_t m_worldName = 0x590;  
                constexpr std::ptrdiff_t m_layerName = 0x598;  
                constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x5A0;  
                constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x5A1;  
                constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x5A2;  
                constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x5A4;  
                constexpr std::ptrdiff_t m_bWorldLayerActuallyVisible = 0x5A8;  
            }
            namespace C_NetTestBaseCombatCharacter {
            }
            namespace C_PhysMagnet {
                constexpr std::ptrdiff_t m_aAttachedObjectsFromServer = 0xF88;  
                constexpr std::ptrdiff_t m_aAttachedObjects = 0xFA0;  
            }
            namespace C_FuncConveyor {
                constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0xD30;  
                constexpr std::ptrdiff_t m_flTargetSpeed = 0xD3C;  
                constexpr std::ptrdiff_t m_nTransitionStartTick = 0xD40;  
                constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0xD44;  
                constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0xD48;  
                constexpr std::ptrdiff_t m_hConveyorModels = 0xD50;  
                constexpr std::ptrdiff_t m_flCurrentConveyorOffset = 0xD68;  
                constexpr std::ptrdiff_t m_flCurrentConveyorSpeed = 0xD6C;  
            }
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8;  
                constexpr std::ptrdiff_t m_pEntity = 0x10;  
                constexpr std::ptrdiff_t m_CScriptComponent = 0x28;  
                constexpr std::ptrdiff_t m_bVisibleinPVS = 0x30;  
            }
            namespace ServerAuthoritativeWeaponSlot_t {
                constexpr std::ptrdiff_t unClass = 0x28;  
                constexpr std::ptrdiff_t unSlot = 0x2A;  
                constexpr std::ptrdiff_t unItemDefIdx = 0x2C;  
            }
            namespace CCSPlayer_DamageReactServices {
            }
            namespace C_BaseViewModel {
                constexpr std::ptrdiff_t m_vecLastFacing = 0xF90;  
                constexpr std::ptrdiff_t m_nViewModelIndex = 0xF9C;  
                constexpr std::ptrdiff_t m_nAnimationParity = 0xFA0;  
                constexpr std::ptrdiff_t m_flAnimationStartTime = 0xFA4;  
                constexpr std::ptrdiff_t m_hWeapon = 0xFA8;  
                constexpr std::ptrdiff_t m_sVMName = 0xFB0;  
                constexpr std::ptrdiff_t m_sAnimationPrefix = 0xFB8;  
                constexpr std::ptrdiff_t m_iCameraAttachment = 0xFC0;  
                constexpr std::ptrdiff_t m_vecLastCameraAngles = 0xFC4;  
                constexpr std::ptrdiff_t m_previousElapsedDuration = 0xFD0;  
                constexpr std::ptrdiff_t m_previousCycle = 0xFD4;  
                constexpr std::ptrdiff_t m_nOldAnimationParity = 0xFD8;  
                constexpr std::ptrdiff_t m_hOldLayerSequence = 0xFDC;  
                constexpr std::ptrdiff_t m_oldLayer = 0xFE0;  
                constexpr std::ptrdiff_t m_oldLayerStartTime = 0xFE4;  
                constexpr std::ptrdiff_t m_hControlPanel = 0xFE8;  
            }
            namespace C_PortraitWorldCallbackHandler {
            }
            namespace CHostageRescueZone {
            }
            namespace C_WeaponNegev {
            }
            namespace CGameSceneNode {
                constexpr std::ptrdiff_t m_nodeToWorld = 0x10;  
                constexpr std::ptrdiff_t m_pOwner = 0x30;  
                constexpr std::ptrdiff_t m_pParent = 0x38;  
                constexpr std::ptrdiff_t m_pChild = 0x40;  
                constexpr std::ptrdiff_t m_pNextSibling = 0x48;  
                constexpr std::ptrdiff_t m_hParent = 0x78;  
                constexpr std::ptrdiff_t m_vecOrigin = 0x88;  
                constexpr std::ptrdiff_t m_angRotation = 0xC0;  
                constexpr std::ptrdiff_t m_flScale = 0xCC;  
                constexpr std::ptrdiff_t m_vecAbsOrigin = 0xD0;  
                constexpr std::ptrdiff_t m_angAbsRotation = 0xDC;  
                constexpr std::ptrdiff_t m_flAbsScale = 0xE8;  
                constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0xEC;  
                constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0xEE;  
                constexpr std::ptrdiff_t m_bDormant = 0xEF;  
                constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0xF0;  
                constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0;  
                constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0;  
                constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0;  
                constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0;  
                constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0;  
                constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0;  
                constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0;  
                constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0;  
                constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0;  
                constexpr std::ptrdiff_t m_nHierarchicalDepth = 0xF3;  
                constexpr std::ptrdiff_t m_nHierarchyType = 0xF4;  
                constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xF5;  
                constexpr std::ptrdiff_t m_name = 0xF8;  
                constexpr std::ptrdiff_t m_hierarchyAttachName = 0x138;  
                constexpr std::ptrdiff_t m_flZOffset = 0x13C;  
                constexpr std::ptrdiff_t m_flClientLocalScale = 0x140;  
                constexpr std::ptrdiff_t m_vRenderOrigin = 0x144;  
            }
            namespace C_IncendiaryGrenade {
            }
            namespace CCSPointScript {
                constexpr std::ptrdiff_t m_pParent = 0xF8;  
            }
            namespace C_CSObserverPawn {
                constexpr std::ptrdiff_t m_hDetectParentChange = 0x1510;  
            }
            namespace C_EntityFlame {
                constexpr std::ptrdiff_t m_hEntAttached = 0x568;  
                constexpr std::ptrdiff_t m_hOldAttached = 0x590;  
                constexpr std::ptrdiff_t m_bCheapEffect = 0x594;  
            }
            namespace C_Breakable {
            }
            namespace CCSObserver_ObserverServices {
                constexpr std::ptrdiff_t m_hLastObserverTarget = 0x58;  
                constexpr std::ptrdiff_t m_vecObserverInterpolateOffset = 0x5C;  
                constexpr std::ptrdiff_t m_vecObserverInterpStartPos = 0x68;  
                constexpr std::ptrdiff_t m_flObsInterp_PathLength = 0x74;  
                constexpr std::ptrdiff_t m_qObsInterp_OrientationStart = 0x80;  
                constexpr std::ptrdiff_t m_qObsInterp_OrientationTravelDir = 0x90;  
                constexpr std::ptrdiff_t m_obsInterpState = 0xA0;  
                constexpr std::ptrdiff_t m_bObserverInterpolationNeedsDeferredSetup = 0xA4;  
            }
            namespace C_TintController {
            }
            namespace CPlayer_AutoaimServices {
            }
            namespace C_Hostage {
                constexpr std::ptrdiff_t m_entitySpottedState = 0x11A8;  
                constexpr std::ptrdiff_t m_leader = 0x11C0;  
                constexpr std::ptrdiff_t m_reuseTimer = 0x11C8;  
                constexpr std::ptrdiff_t m_vel = 0x11E0;  
                constexpr std::ptrdiff_t m_isRescued = 0x11EC;  
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x11ED;  
                constexpr std::ptrdiff_t m_nHostageState = 0x11F0;  
                constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x11F4;  
                constexpr std::ptrdiff_t m_hHostageGrabber = 0x11F8;  
                constexpr std::ptrdiff_t m_fLastGrabTime = 0x11FC;  
                constexpr std::ptrdiff_t m_vecGrabbedPos = 0x1200;  
                constexpr std::ptrdiff_t m_flRescueStartTime = 0x120C;  
                constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x1210;  
                constexpr std::ptrdiff_t m_flDropStartTime = 0x1214;  
                constexpr std::ptrdiff_t m_flDeadOrRescuedTime = 0x1218;  
                constexpr std::ptrdiff_t m_blinkTimer = 0x1220;  
                constexpr std::ptrdiff_t m_lookAt = 0x1238;  
                constexpr std::ptrdiff_t m_lookAroundTimer = 0x1248;  
                constexpr std::ptrdiff_t m_isInit = 0x1260;  
                constexpr std::ptrdiff_t m_eyeAttachment = 0x1261;  
                constexpr std::ptrdiff_t m_chestAttachment = 0x1262;  
                constexpr std::ptrdiff_t m_pPredictionOwner = 0x1268;  
                constexpr std::ptrdiff_t m_fNewestAlphaThinkTime = 0x1270;  
            }
            namespace C_Sprite {
                constexpr std::ptrdiff_t m_hSpriteMaterial = 0xD28;  
                constexpr std::ptrdiff_t m_hAttachedToEntity = 0xD30;  
                constexpr std::ptrdiff_t m_nAttachment = 0xD34;  
                constexpr std::ptrdiff_t m_flSpriteFramerate = 0xD38;  
                constexpr std::ptrdiff_t m_flFrame = 0xD3C;  
                constexpr std::ptrdiff_t m_flDieTime = 0xD40;  
                constexpr std::ptrdiff_t m_nBrightness = 0xD50;  
                constexpr std::ptrdiff_t m_flBrightnessDuration = 0xD54;  
                constexpr std::ptrdiff_t m_flSpriteScale = 0xD58;  
                constexpr std::ptrdiff_t m_flScaleDuration = 0xD5C;  
                constexpr std::ptrdiff_t m_bWorldSpaceScale = 0xD60;  
                constexpr std::ptrdiff_t m_flGlowProxySize = 0xD64;  
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xD68;  
                constexpr std::ptrdiff_t m_flLastTime = 0xD6C;  
                constexpr std::ptrdiff_t m_flMaxFrame = 0xD70;  
                constexpr std::ptrdiff_t m_flStartScale = 0xD74;  
                constexpr std::ptrdiff_t m_flDestScale = 0xD78;  
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0xD7C;  
                constexpr std::ptrdiff_t m_nStartBrightness = 0xD80;  
                constexpr std::ptrdiff_t m_nDestBrightness = 0xD84;  
                constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0xD88;  
                constexpr std::ptrdiff_t m_hOldSpriteMaterial = 0xD90;  
                constexpr std::ptrdiff_t m_nSpriteWidth = 0xE30;  
                constexpr std::ptrdiff_t m_nSpriteHeight = 0xE34;  
            }
            namespace C_WeaponM4A1Silencer {
            }
            namespace CMapInfo {
                constexpr std::ptrdiff_t m_iBuyingStatus = 0x568;  
                constexpr std::ptrdiff_t m_flBombRadius = 0x56C;  
                constexpr std::ptrdiff_t m_iPetPopulation = 0x570;  
                constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x574;  
                constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x575;  
                constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x578;  
                constexpr std::ptrdiff_t m_iHostageCount = 0x57C;  
                constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x580;  
                constexpr std::ptrdiff_t m_bRainTraceToSkyEnabled = 0x581;  
            }
            namespace C_PlantedC4 {
                constexpr std::ptrdiff_t m_bBombTicking = 0xF90;  
                constexpr std::ptrdiff_t m_nBombSite = 0xF94;  
                constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0xF98;  
                constexpr std::ptrdiff_t m_entitySpottedState = 0xFA0;  
                constexpr std::ptrdiff_t m_flNextGlow = 0xFB8;  
                constexpr std::ptrdiff_t m_flNextBeep = 0xFBC;  
                constexpr std::ptrdiff_t m_flC4Blow = 0xFC0;  
                constexpr std::ptrdiff_t m_bCannotBeDefused = 0xFC4;  
                constexpr std::ptrdiff_t m_bHasExploded = 0xFC5;  
                constexpr std::ptrdiff_t m_flTimerLength = 0xFC8;  
                constexpr std::ptrdiff_t m_bBeingDefused = 0xFCC;  
                constexpr std::ptrdiff_t m_bTriggerWarning = 0xFD0;  
                constexpr std::ptrdiff_t m_bExplodeWarning = 0xFD4;  
                constexpr std::ptrdiff_t m_bC4Activated = 0xFD8;  
                constexpr std::ptrdiff_t m_bTenSecWarning = 0xFD9;  
                constexpr std::ptrdiff_t m_flDefuseLength = 0xFDC;  
                constexpr std::ptrdiff_t m_flDefuseCountDown = 0xFE0;  
                constexpr std::ptrdiff_t m_bBombDefused = 0xFE4;  
                constexpr std::ptrdiff_t m_hBombDefuser = 0xFE8;  
                constexpr std::ptrdiff_t m_hControlPanel = 0xFEC;  
                constexpr std::ptrdiff_t m_AttributeManager = 0xFF0;  
                constexpr std::ptrdiff_t m_hDefuserMultimeter = 0x1498;  
                constexpr std::ptrdiff_t m_flNextRadarFlashTime = 0x149C;  
                constexpr std::ptrdiff_t m_bRadarFlash = 0x14A0;  
                constexpr std::ptrdiff_t m_pBombDefuser = 0x14A4;  
                constexpr std::ptrdiff_t m_fLastDefuseTime = 0x14A8;  
                constexpr std::ptrdiff_t m_pPredictionOwner = 0x14B0;  
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectatePos = 0x14B8;  
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectateAng = 0x14C4;  
                constexpr std::ptrdiff_t m_flC4ExplodeSpectateDuration = 0x14D0;  
            }
            namespace C_RagdollProp {
                constexpr std::ptrdiff_t m_ragPos = 0xF90;  
                constexpr std::ptrdiff_t m_ragAngles = 0xFA8;  
                constexpr std::ptrdiff_t m_flBlendWeight = 0xFC0;  
                constexpr std::ptrdiff_t m_hRagdollSource = 0xFC4;  
                constexpr std::ptrdiff_t m_iEyeAttachment = 0xFC8;  
                constexpr std::ptrdiff_t m_flBlendWeightCurrent = 0xFCC;  
                constexpr std::ptrdiff_t m_parentPhysicsBoneIndices = 0xFD0;  
                constexpr std::ptrdiff_t m_worldSpaceBoneComputationOrder = 0xFE8;  
            }
            namespace C_CSGO_TerroristTeamIntroCamera {
            }
            namespace C_VoteController {
                constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x578;  
                constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x57C;  
                constexpr std::ptrdiff_t m_nVoteOptionCount = 0x580;  
                constexpr std::ptrdiff_t m_nPotentialVotes = 0x594;  
                constexpr std::ptrdiff_t m_bVotesDirty = 0x598;  
                constexpr std::ptrdiff_t m_bTypeDirty = 0x599;  
                constexpr std::ptrdiff_t m_bIsYesNoVote = 0x59A;  
            }
            namespace ViewAngleServerChange_t {
                constexpr std::ptrdiff_t nType = 0x30;  
                constexpr std::ptrdiff_t qAngle = 0x34;  
                constexpr std::ptrdiff_t nIndex = 0x40;  
            }
            namespace C_Chicken {
                constexpr std::ptrdiff_t m_hHolidayHatAddon = 0x1230;  
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x1234;  
                constexpr std::ptrdiff_t m_leader = 0x1238;  
                constexpr std::ptrdiff_t m_AttributeManager = 0x1240;  
                constexpr std::ptrdiff_t m_bAttributesInitialized = 0x16E8;  
                constexpr std::ptrdiff_t m_hWaterWakeParticles = 0x16EC;  
                constexpr std::ptrdiff_t m_bIsPreviewModel = 0x16F0;  
            }
            namespace PhysicsRagdollPose_t {
                constexpr std::ptrdiff_t m_Transforms = 0x8;  
                constexpr std::ptrdiff_t m_hOwner = 0x20;  
            }
        }
    }
}
