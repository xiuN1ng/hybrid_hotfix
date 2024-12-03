﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = 
{
	{ 12178, 0,  0 } /*tableIndex: 0 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = 
{
	"particle",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[18] = 
{
	{ 0, 1 } /* 0x06000001 System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Color32) */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/Particle) */,
	{ 0, 0 } /* 0x06000003 System.Void UnityEngine.ParticleSystem::Emit(System.Int32) */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngine.ParticleSystem::Emit_Internal(System.Int32) */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/EmitParams,System.Int32) */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.ParticleSystem::EmitOld_Internal(UnityEngine.ParticleSystem/Particle&) */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32) */,
	{ 0, 0 } /* 0x06000008 System.Void UnityEngine.ParticleSystem/Particle::set_lifetime(System.Single) */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3) */,
	{ 0, 0 } /* 0x0600000A System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3) */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.ParticleSystem/Particle::set_remainingLifetime(System.Single) */,
	{ 0, 0 } /* 0x0600000C System.Void UnityEngine.ParticleSystem/Particle::set_startLifetime(System.Single) */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.ParticleSystem/Particle::set_startColor(UnityEngine.Color32) */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.ParticleSystem/Particle::set_randomSeed(System.UInt32) */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.ParticleSystem/Particle::set_startSize(System.Single) */,
	{ 0, 0 } /* 0x06000010 System.Void UnityEngine.ParticleSystem/Particle::set_rotation3D(UnityEngine.Vector3) */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.ParticleSystem/Particle::set_angularVelocity3D(UnityEngine.Vector3) */,
	{ 0, 0 } /* 0x06000012 System.Int32 UnityEngine.ParticleSystemRenderer::GetMeshes(UnityEngine.Mesh[]) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_ParticleSystemModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_ParticleSystemModule[95] = 
{
	{ 28059, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 28059, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 28059, 1, 120, 120, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 28059, 1, 121, 121, 13, 78, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 28059, 1, 122, 122, 13, 42, 9, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 28059, 1, 122, 122, 13, 42, 12, kSequencePointKind_StepOut, 0, 5 } /* seqPointIndex: 5 */,
	{ 28059, 1, 123, 123, 13, 42, 18, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 28059, 1, 123, 123, 13, 42, 21, kSequencePointKind_StepOut, 0, 7 } /* seqPointIndex: 7 */,
	{ 28059, 1, 124, 124, 13, 42, 27, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 28059, 1, 124, 124, 13, 42, 31, kSequencePointKind_StepOut, 0, 9 } /* seqPointIndex: 9 */,
	{ 28059, 1, 125, 125, 13, 47, 37, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 28059, 1, 125, 125, 13, 47, 41, kSequencePointKind_StepOut, 0, 11 } /* seqPointIndex: 11 */,
	{ 28059, 1, 126, 126, 13, 39, 47, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 28059, 1, 126, 126, 13, 39, 50, kSequencePointKind_StepOut, 0, 13 } /* seqPointIndex: 13 */,
	{ 28059, 1, 127, 127, 13, 48, 56, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 28059, 1, 127, 127, 13, 48, 58, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 28059, 1, 127, 127, 13, 48, 63, kSequencePointKind_StepOut, 0, 16 } /* seqPointIndex: 16 */,
	{ 28059, 1, 128, 128, 13, 55, 69, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 28059, 1, 128, 128, 13, 55, 71, kSequencePointKind_StepOut, 0, 18 } /* seqPointIndex: 18 */,
	{ 28059, 1, 128, 128, 13, 55, 76, kSequencePointKind_StepOut, 0, 19 } /* seqPointIndex: 19 */,
	{ 28059, 1, 129, 129, 13, 41, 82, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 28059, 1, 129, 129, 13, 41, 86, kSequencePointKind_StepOut, 0, 21 } /* seqPointIndex: 21 */,
	{ 28059, 1, 130, 130, 13, 37, 92, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 28059, 1, 130, 130, 13, 37, 95, kSequencePointKind_StepOut, 0, 23 } /* seqPointIndex: 23 */,
	{ 28059, 1, 131, 131, 13, 44, 101, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 28059, 1, 131, 131, 13, 44, 104, kSequencePointKind_StepOut, 0, 25 } /* seqPointIndex: 25 */,
	{ 28059, 1, 132, 132, 9, 10, 110, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 28060, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 28060, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 28060, 1, 136, 136, 9, 10, 0, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 28060, 1, 137, 137, 13, 44, 1, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 28060, 1, 137, 137, 13, 44, 4, kSequencePointKind_StepOut, 0, 31 } /* seqPointIndex: 31 */,
	{ 28060, 1, 138, 138, 9, 10, 10, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 28061, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 28061, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 28061, 2, 176, 176, 37, 38, 0, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 28061, 2, 176, 176, 39, 60, 1, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 28061, 2, 176, 176, 39, 60, 3, kSequencePointKind_StepOut, 0, 37 } /* seqPointIndex: 37 */,
	{ 28061, 2, 176, 176, 61, 62, 9, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 28066, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 28066, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 28066, 1, 94, 94, 75, 76, 0, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 28066, 1, 94, 94, 77, 103, 1, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 28066, 1, 94, 94, 77, 103, 3, kSequencePointKind_StepOut, 0, 43 } /* seqPointIndex: 43 */,
	{ 28066, 1, 94, 94, 104, 105, 9, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 28067, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 28067, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 28067, 3, 190, 190, 70, 71, 0, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 28067, 3, 190, 190, 72, 91, 1, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 28067, 3, 190, 190, 92, 93, 8, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 28068, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 28068, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 28068, 3, 191, 191, 70, 71, 0, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 28068, 3, 191, 191, 72, 91, 1, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 28068, 3, 191, 191, 92, 93, 8, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 28069, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 28069, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 28069, 3, 194, 194, 77, 78, 0, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 28069, 3, 194, 194, 79, 98, 1, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 28069, 3, 194, 194, 99, 100, 8, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 28070, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 28070, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 28070, 3, 195, 195, 78, 79, 0, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 28070, 3, 195, 195, 80, 104, 1, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 28070, 3, 195, 195, 105, 106, 8, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 28071, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 28071, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 28071, 3, 196, 196, 74, 75, 0, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 28071, 3, 196, 196, 76, 97, 1, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 28071, 3, 196, 196, 98, 99, 8, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 28072, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 28072, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 28072, 3, 197, 197, 73, 74, 0, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 28072, 3, 197, 197, 75, 96, 1, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 28072, 3, 197, 197, 97, 98, 8, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 28073, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 28073, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 28073, 3, 200, 200, 72, 73, 0, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 28073, 3, 200, 200, 74, 121, 1, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 28073, 3, 200, 200, 74, 121, 5, kSequencePointKind_StepOut, 0, 79 } /* seqPointIndex: 79 */,
	{ 28073, 3, 200, 200, 122, 123, 15, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 28074, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 28074, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 28074, 3, 204, 204, 88, 89, 0, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 28074, 3, 204, 204, 90, 125, 1, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 28074, 3, 204, 204, 90, 125, 8, kSequencePointKind_StepOut, 0, 85 } /* seqPointIndex: 85 */,
	{ 28074, 3, 204, 204, 126, 162, 18, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 28074, 3, 204, 204, 163, 164, 32, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 28075, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 28075, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 28075, 3, 207, 207, 102, 103, 0, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 28075, 3, 207, 207, 104, 146, 1, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 28075, 3, 207, 207, 104, 146, 8, kSequencePointKind_StepOut, 0, 92 } /* seqPointIndex: 92 */,
	{ 28075, 3, 207, 207, 147, 183, 18, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 28075, 3, 207, 207, 184, 185, 32, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_ParticleSystemModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_ParticleSystemModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\jenkins\\sharedspace\\ra_2021.3\\Modules\\ParticleSystem\\Managed\\ParticleSystem.deprecated.cs", { 254, 108, 111, 128, 100, 7, 222, 4, 156, 244, 245, 164, 175, 217, 189, 197} }, //1 
{ "C:\\jenkins\\sharedspace\\ra_2021.3\\Modules\\ParticleSystem\\ScriptBindings\\ParticleSystem.bindings.cs", { 236, 65, 203, 223, 251, 100, 230, 5, 113, 251, 2, 165, 182, 52, 78, 2} }, //2 
{ "C:\\jenkins\\sharedspace\\ra_2021.3\\Modules\\ParticleSystem\\Managed\\ParticleSystemStructs.cs", { 220, 239, 182, 144, 220, 43, 200, 140, 248, 250, 235, 227, 210, 7, 223, 37} }, //3 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[4] = 
{
	{ 4484, 1 },
	{ 4484, 2 },
	{ 4482, 1 },
	{ 4482, 3 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[1] = 
{
	{ 0, 111 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[18] = 
{
	{ 111, 0, 1 } /* System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Color32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/Particle) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::Emit(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::Emit_Internal(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/EmitParams,System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::EmitOld_Internal(UnityEngine.ParticleSystem/Particle&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_lifetime(System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_remainingLifetime(System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_startLifetime(System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_startColor(UnityEngine.Color32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_randomSeed(System.UInt32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_startSize(System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_rotation3D(UnityEngine.Vector3) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_angularVelocity3D(UnityEngine.Vector3) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.ParticleSystemRenderer::GetMeshes(UnityEngine.Mesh[]) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_ParticleSystemModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_ParticleSystemModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	95,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_ParticleSystemModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	4,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
