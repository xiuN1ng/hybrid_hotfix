﻿#include "pch-c.h"
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
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[19] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemShuttingDown() */,
	{ 0, 0 } /* 0x06000003 System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemStartedUp() */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0 } /* 0x06000008 System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0 } /* 0x0600000A System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 0, 0 } /* 0x0600000C UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 0, 0 } /* 0x0600000D System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 0, 0 } /* 0x0600000E UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 0, 0 } /* 0x0600000F System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 0, 0 } /* 0x06000010 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000013 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[74] = 
{
	{ 18369, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 18369, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 18369, 1, 343, 343, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 18369, 1, 344, 344, 13, 53, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 18369, 1, 344, 344, 0, 0, 10, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 18369, 1, 345, 345, 17, 63, 13, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 18369, 1, 345, 345, 17, 63, 19, kSequencePointKind_StepOut, 0, 6 } /* seqPointIndex: 6 */,
	{ 18369, 1, 346, 346, 9, 10, 25, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 18370, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 18370, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 18370, 1, 350, 350, 16, 51, 0, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 18370, 1, 350, 350, 16, 51, 11, kSequencePointKind_StepOut, 0, 11 } /* seqPointIndex: 11 */,
	{ 18371, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 18371, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 18371, 1, 354, 354, 16, 48, 0, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 18371, 1, 354, 354, 16, 48, 11, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 18374, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 18374, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 18374, 1, 632, 632, 9, 10, 0, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 18374, 1, 633, 633, 13, 45, 1, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 18374, 1, 633, 633, 0, 0, 11, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 18374, 1, 634, 634, 17, 43, 14, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 18374, 1, 634, 634, 17, 43, 21, kSequencePointKind_StepOut, 0, 22 } /* seqPointIndex: 22 */,
	{ 18374, 1, 635, 635, 9, 10, 27, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 18375, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 18375, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 18375, 1, 639, 639, 9, 10, 0, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 18375, 1, 640, 640, 13, 50, 1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 18375, 1, 640, 640, 0, 0, 11, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 18375, 1, 641, 641, 17, 52, 14, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 18375, 1, 641, 641, 17, 52, 21, kSequencePointKind_StepOut, 0, 30 } /* seqPointIndex: 30 */,
	{ 18375, 1, 642, 642, 9, 10, 27, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 18380, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 18380, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 18380, 2, 49, 49, 9, 10, 0, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 18380, 2, 50, 50, 13, 29, 1, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 18380, 2, 51, 51, 9, 10, 10, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 18381, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 18381, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 18381, 2, 64, 64, 9, 10, 0, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 18381, 2, 65, 65, 13, 53, 1, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 18381, 2, 65, 65, 13, 53, 2, kSequencePointKind_StepOut, 0, 41 } /* seqPointIndex: 41 */,
	{ 18381, 2, 65, 65, 13, 53, 9, kSequencePointKind_StepOut, 0, 42 } /* seqPointIndex: 42 */,
	{ 18381, 2, 65, 65, 13, 53, 14, kSequencePointKind_StepOut, 0, 43 } /* seqPointIndex: 43 */,
	{ 18381, 2, 66, 66, 9, 10, 22, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 18382, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 18382, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 18382, 3, 47, 47, 9, 10, 0, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 18382, 3, 48, 48, 13, 29, 1, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 18382, 3, 49, 49, 9, 10, 10, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 18383, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 18383, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 18383, 3, 62, 62, 9, 10, 0, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 18383, 3, 63, 63, 13, 53, 1, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 18383, 3, 63, 63, 13, 53, 2, kSequencePointKind_StepOut, 0, 54 } /* seqPointIndex: 54 */,
	{ 18383, 3, 63, 63, 13, 53, 9, kSequencePointKind_StepOut, 0, 55 } /* seqPointIndex: 55 */,
	{ 18383, 3, 63, 63, 13, 53, 14, kSequencePointKind_StepOut, 0, 56 } /* seqPointIndex: 56 */,
	{ 18383, 3, 64, 64, 9, 10, 22, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 18384, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 18384, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 18384, 4, 177, 177, 9, 10, 0, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 18384, 4, 178, 178, 13, 47, 1, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 18384, 4, 178, 178, 0, 0, 11, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 18384, 4, 180, 180, 17, 69, 14, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 18384, 4, 180, 180, 17, 69, 22, kSequencePointKind_StepOut, 0, 64 } /* seqPointIndex: 64 */,
	{ 18384, 4, 181, 181, 9, 10, 28, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 18385, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 18385, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 18385, 4, 185, 185, 9, 10, 0, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 18385, 4, 186, 186, 13, 46, 1, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 18385, 4, 186, 186, 0, 0, 11, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 18385, 4, 187, 187, 17, 75, 14, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 18385, 4, 187, 187, 17, 75, 22, kSequencePointKind_StepOut, 0, 72 } /* seqPointIndex: 72 */,
	{ 18385, 4, 188, 188, 9, 10, 28, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\jenkins\\sharedspace\\ra_2021.3\\Modules\\Audio\\Public\\ScriptBindings\\Audio.bindings.cs", { 186, 190, 129, 91, 137, 140, 111, 230, 114, 253, 155, 1, 230, 243, 216, 168} }, //1 
{ "C:\\jenkins\\sharedspace\\ra_2021.3\\Modules\\Audio\\Public\\ScriptBindings\\AudioClipPlayable.bindings.cs", { 117, 58, 219, 81, 174, 32, 141, 165, 250, 138, 140, 83, 41, 27, 0, 60} }, //2 
{ "C:\\jenkins\\sharedspace\\ra_2021.3\\Modules\\Audio\\Public\\ScriptBindings\\AudioMixerPlayable.bindings.cs", { 61, 101, 161, 191, 246, 243, 230, 247, 173, 244, 46, 184, 65, 58, 4, 90} }, //3 
{ "C:\\jenkins\\sharedspace\\ra_2021.3\\Modules\\Audio\\Public\\ScriptBindings\\AudioSampleProvider.bindings.cs", { 47, 120, 50, 45, 60, 26, 245, 52, 137, 63, 13, 94, 178, 230, 94, 160} }, //4 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[5] = 
{
	{ 3230, 1 },
	{ 3233, 1 },
	{ 3236, 2 },
	{ 3237, 3 },
	{ 3240, 4 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[9] = 
{
	{ 0, 26 },
	{ 0, 28 },
	{ 0, 28 },
	{ 0, 12 },
	{ 0, 24 },
	{ 0, 12 },
	{ 0, 24 },
	{ 0, 29 },
	{ 0, 29 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[19] = 
{
	{ 26, 0, 1 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemShuttingDown() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemStartedUp() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 28, 1, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 28, 2, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 12, 3, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 24, 4, 1 } /* System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 12, 5, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 24, 6, 1 } /* System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 29, 7, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 29, 8, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AudioModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AudioModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	74,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_AudioModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	5,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
