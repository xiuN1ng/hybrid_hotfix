#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[11] = 
{
	{ 0, 0 } /* 0x06000001 System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::Create(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.UInt32) */,
	{ 0, 0 } /* 0x06000002 System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::CreateCached(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.String,UnityEngine.Hash128,System.UInt32) */,
	{ 0, 0 } /* 0x06000003 System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::InternalCreateAssetBundle(System.String,System.UInt32) */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::InternalCreateAssetBundleCached(System.String,System.String,UnityEngine.Hash128,System.UInt32) */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,System.UInt32) */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,UnityEngine.Hash128,System.UInt32) */,
	{ 0, 0 } /* 0x06000007 System.Byte[] UnityEngine.Networking.DownloadHandlerAssetBundle::GetData() */,
	{ 0, 0 } /* 0x06000008 System.String UnityEngine.Networking.DownloadHandlerAssetBundle::GetText() */,
	{ 0, 0 } /* 0x06000009 UnityEngine.AssetBundle UnityEngine.Networking.DownloadHandlerAssetBundle::get_assetBundle() */,
	{ 0, 0 } /* 0x0600000A System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::set_autoLoadAssetBundle(System.Boolean) */,
	{ 0, 0 } /* 0x0600000B System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::CreateCached_Injected(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.String,UnityEngine.Hash128&,System.UInt32) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestAssetBundleModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestAssetBundleModule[38] = 
{
	{ 28123, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 28123, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 28123, 1, 16, 16, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 28123, 1, 17, 17, 13, 44, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 28123, 1, 17, 17, 13, 44, 5, kSequencePointKind_StepOut, 0, 4 } /* seqPointIndex: 4 */,
	{ 28123, 1, 18, 18, 9, 10, 15, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 28124, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 28124, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 28124, 1, 21, 21, 9, 10, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 28124, 1, 22, 22, 13, 62, 1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 28124, 1, 22, 22, 13, 62, 8, kSequencePointKind_StepOut, 0, 10 } /* seqPointIndex: 10 */,
	{ 28124, 1, 23, 23, 9, 10, 18, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 28125, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 28125, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 28125, 1, 25, 25, 9, 64, 0, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 28125, 1, 25, 25, 9, 64, 1, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 28125, 1, 26, 26, 9, 10, 7, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 28125, 1, 27, 27, 13, 49, 8, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 28125, 1, 27, 27, 13, 49, 11, kSequencePointKind_StepOut, 0, 18 } /* seqPointIndex: 18 */,
	{ 28125, 1, 28, 28, 9, 10, 17, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 28126, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 28126, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 28126, 1, 35, 35, 9, 78, 0, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 28126, 1, 35, 35, 9, 78, 1, kSequencePointKind_StepOut, 0, 23 } /* seqPointIndex: 23 */,
	{ 28126, 1, 36, 36, 9, 10, 7, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 28126, 1, 37, 37, 13, 65, 8, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 28126, 1, 37, 37, 13, 65, 17, kSequencePointKind_StepOut, 0, 26 } /* seqPointIndex: 26 */,
	{ 28126, 1, 38, 38, 9, 10, 23, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 28127, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 28127, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 28127, 1, 51, 51, 9, 10, 0, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 28127, 1, 52, 52, 13, 106, 1, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 28127, 1, 52, 52, 13, 106, 6, kSequencePointKind_StepOut, 0, 32 } /* seqPointIndex: 32 */,
	{ 28128, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 28128, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 28128, 1, 56, 56, 9, 10, 0, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 28128, 1, 57, 57, 13, 104, 1, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 28128, 1, 57, 57, 13, 104, 6, kSequencePointKind_StepOut, 0, 37 } /* seqPointIndex: 37 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestAssetBundleModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestAssetBundleModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\jenkins\\sharedspace\\ra_2021.3\\Modules\\UnityWebRequestAssetBundle\\Public\\DownloadHandlerAssetBundle.bindings.cs", { 172, 106, 229, 19, 162, 150, 132, 180, 165, 5, 112, 231, 114, 44, 77, 232} }, //1 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = 
{
	{ 4520, 1 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[11] = 
{
	{ 0, 0, 0 } /* System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::Create(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.UInt32) */,
	{ 0, 0, 0 } /* System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::CreateCached(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.String,UnityEngine.Hash128,System.UInt32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::InternalCreateAssetBundle(System.String,System.UInt32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::InternalCreateAssetBundleCached(System.String,System.String,UnityEngine.Hash128,System.UInt32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,System.UInt32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,UnityEngine.Hash128,System.UInt32) */,
	{ 0, 0, 0 } /* System.Byte[] UnityEngine.Networking.DownloadHandlerAssetBundle::GetData() */,
	{ 0, 0, 0 } /* System.String UnityEngine.Networking.DownloadHandlerAssetBundle::GetText() */,
	{ 0, 0, 0 } /* UnityEngine.AssetBundle UnityEngine.Networking.DownloadHandlerAssetBundle::get_assetBundle() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::set_autoLoadAssetBundle(System.Boolean) */,
	{ 0, 0, 0 } /* System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::CreateCached_Injected(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.String,UnityEngine.Hash128&,System.UInt32) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityWebRequestAssetBundleModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityWebRequestAssetBundleModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	38,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_UnityWebRequestAssetBundleModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	1,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
