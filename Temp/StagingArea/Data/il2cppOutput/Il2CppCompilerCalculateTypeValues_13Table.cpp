#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2295673753;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t339478082;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t1598685972;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>
struct List_1_t1660627182;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct ConnectionChangeEvent_t536719976;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UnityEngine.Experimental.Rendering.IRenderPipelineAsset
struct IRenderPipelineAsset_t345810019;
// UnityEngine.Experimental.Rendering.IRenderPipeline
struct IRenderPipeline_t2611978095;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct MessageEvent_t2167079021;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t3162557601;
// Done_EvasiveManeuver
struct Done_EvasiveManeuver_t2572524317;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>
struct Dictionary_2_t1519430885;
// UnityEngine.Object
struct Object_t1021602117;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct Queue_1_t973679317;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Void
struct Void_t1841601450;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t296893742;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Done_GameController
struct Done_GameController_t2490533223;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1572802995;
// UnityEngine.ILogHandler
struct ILogHandler_t264057413;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t2431947754;
// System.Type
struct Type_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t4810721;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_t2252784345;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// Done_Boundary
struct Done_Boundary_t381809497;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GUIText
struct GUIText_t2411476300;
// GameController
struct GameController_t3607102586;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Transform
struct Transform_t3275118058;

struct Object_t1021602117_marshaled_com;



#ifndef U3CMODULEU3E_T3783534219_H
#define U3CMODULEU3E_T3783534219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3783534219 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3783534219_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EXCEPTION_T1927440687_H
#define EXCEPTION_T1927440687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1927440687  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t169632028* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1927440687 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t169632028* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t169632028** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t169632028* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___inner_exception_1)); }
	inline Exception_t1927440687 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1927440687 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1927440687 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1927440687_H
#ifndef UNITYSTRING_T276356480_H
#define UNITYSTRING_T276356480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityString
struct  UnityString_t276356480  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSTRING_T276356480_H
#ifndef UNITYEVENTBASE_T828812576_H
#define UNITYEVENTBASE_T828812576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t828812576  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2295673753 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t339478082 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t828812576, ___m_Calls_0)); }
	inline InvokableCallList_t2295673753 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2295673753 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2295673753 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t828812576, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t339478082 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t339478082 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t339478082 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t828812576, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t828812576, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T828812576_H
#ifndef PLAYABLEBEHAVIOUR_T2517866383_H
#define PLAYABLEBEHAVIOUR_T2517866383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBehaviour
struct  PlayableBehaviour_t2517866383  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEBEHAVIOUR_T2517866383_H
#ifndef INVOKABLECALLLIST_T2295673753_H
#define INVOKABLECALLLIST_T2295673753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCallList
struct  InvokableCallList_t2295673753  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t1598685972 * ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t1598685972 * ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t1598685972 * ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;

public:
	inline static int32_t get_offset_of_m_PersistentCalls_0() { return static_cast<int32_t>(offsetof(InvokableCallList_t2295673753, ___m_PersistentCalls_0)); }
	inline List_1_t1598685972 * get_m_PersistentCalls_0() const { return ___m_PersistentCalls_0; }
	inline List_1_t1598685972 ** get_address_of_m_PersistentCalls_0() { return &___m_PersistentCalls_0; }
	inline void set_m_PersistentCalls_0(List_1_t1598685972 * value)
	{
		___m_PersistentCalls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_0), value);
	}

	inline static int32_t get_offset_of_m_RuntimeCalls_1() { return static_cast<int32_t>(offsetof(InvokableCallList_t2295673753, ___m_RuntimeCalls_1)); }
	inline List_1_t1598685972 * get_m_RuntimeCalls_1() const { return ___m_RuntimeCalls_1; }
	inline List_1_t1598685972 ** get_address_of_m_RuntimeCalls_1() { return &___m_RuntimeCalls_1; }
	inline void set_m_RuntimeCalls_1(List_1_t1598685972 * value)
	{
		___m_RuntimeCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_RuntimeCalls_1), value);
	}

	inline static int32_t get_offset_of_m_ExecutingCalls_2() { return static_cast<int32_t>(offsetof(InvokableCallList_t2295673753, ___m_ExecutingCalls_2)); }
	inline List_1_t1598685972 * get_m_ExecutingCalls_2() const { return ___m_ExecutingCalls_2; }
	inline List_1_t1598685972 ** get_address_of_m_ExecutingCalls_2() { return &___m_ExecutingCalls_2; }
	inline void set_m_ExecutingCalls_2(List_1_t1598685972 * value)
	{
		___m_ExecutingCalls_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutingCalls_2), value);
	}

	inline static int32_t get_offset_of_m_NeedsUpdate_3() { return static_cast<int32_t>(offsetof(InvokableCallList_t2295673753, ___m_NeedsUpdate_3)); }
	inline bool get_m_NeedsUpdate_3() const { return ___m_NeedsUpdate_3; }
	inline bool* get_address_of_m_NeedsUpdate_3() { return &___m_NeedsUpdate_3; }
	inline void set_m_NeedsUpdate_3(bool value)
	{
		___m_NeedsUpdate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALLLIST_T2295673753_H
#ifndef PLAYEREDITORCONNECTIONEVENTS_T2252784345_H
#define PLAYEREDITORCONNECTIONEVENTS_T2252784345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct  PlayerEditorConnectionEvents_t2252784345  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers> UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::messageTypeSubscribers
	List_1_t1660627182 * ___messageTypeSubscribers_0;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::connectionEvent
	ConnectionChangeEvent_t536719976 * ___connectionEvent_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::disconnectionEvent
	ConnectionChangeEvent_t536719976 * ___disconnectionEvent_2;

public:
	inline static int32_t get_offset_of_messageTypeSubscribers_0() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t2252784345, ___messageTypeSubscribers_0)); }
	inline List_1_t1660627182 * get_messageTypeSubscribers_0() const { return ___messageTypeSubscribers_0; }
	inline List_1_t1660627182 ** get_address_of_messageTypeSubscribers_0() { return &___messageTypeSubscribers_0; }
	inline void set_messageTypeSubscribers_0(List_1_t1660627182 * value)
	{
		___messageTypeSubscribers_0 = value;
		Il2CppCodeGenWriteBarrier((&___messageTypeSubscribers_0), value);
	}

	inline static int32_t get_offset_of_connectionEvent_1() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t2252784345, ___connectionEvent_1)); }
	inline ConnectionChangeEvent_t536719976 * get_connectionEvent_1() const { return ___connectionEvent_1; }
	inline ConnectionChangeEvent_t536719976 ** get_address_of_connectionEvent_1() { return &___connectionEvent_1; }
	inline void set_connectionEvent_1(ConnectionChangeEvent_t536719976 * value)
	{
		___connectionEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___connectionEvent_1), value);
	}

	inline static int32_t get_offset_of_disconnectionEvent_2() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t2252784345, ___disconnectionEvent_2)); }
	inline ConnectionChangeEvent_t536719976 * get_disconnectionEvent_2() const { return ___disconnectionEvent_2; }
	inline ConnectionChangeEvent_t536719976 ** get_address_of_disconnectionEvent_2() { return &___disconnectionEvent_2; }
	inline void set_disconnectionEvent_2(ConnectionChangeEvent_t536719976 * value)
	{
		___disconnectionEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disconnectionEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYEREDITORCONNECTIONEVENTS_T2252784345_H
#ifndef MESSAGEEVENTARGS_T301283622_H
#define MESSAGEEVENTARGS_T301283622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct  MessageEventArgs_t301283622  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Networking.PlayerConnection.MessageEventArgs::playerId
	int32_t ___playerId_0;
	// System.Byte[] UnityEngine.Networking.PlayerConnection.MessageEventArgs::data
	ByteU5BU5D_t3397334013* ___data_1;

public:
	inline static int32_t get_offset_of_playerId_0() { return static_cast<int32_t>(offsetof(MessageEventArgs_t301283622, ___playerId_0)); }
	inline int32_t get_playerId_0() const { return ___playerId_0; }
	inline int32_t* get_address_of_playerId_0() { return &___playerId_0; }
	inline void set_playerId_0(int32_t value)
	{
		___playerId_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t301283622, ___data_1)); }
	inline ByteU5BU5D_t3397334013* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t3397334013* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENTARGS_T301283622_H
#ifndef PLAYABLEEXTENSIONS_T2358977238_H
#define PLAYABLEEXTENSIONS_T2358977238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableExtensions
struct  PlayableExtensions_t2358977238  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEEXTENSIONS_T2358977238_H
#ifndef RENDERPIPELINEMANAGER_T984453155_H
#define RENDERPIPELINEMANAGER_T984453155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.RenderPipelineManager
struct  RenderPipelineManager_t984453155  : public RuntimeObject
{
public:

public:
};

struct RenderPipelineManager_t984453155_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.IRenderPipelineAsset UnityEngine.Experimental.Rendering.RenderPipelineManager::s_CurrentPipelineAsset
	RuntimeObject* ___s_CurrentPipelineAsset_0;
	// UnityEngine.Experimental.Rendering.IRenderPipeline UnityEngine.Experimental.Rendering.RenderPipelineManager::<currentPipeline>k__BackingField
	RuntimeObject* ___U3CcurrentPipelineU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_CurrentPipelineAsset_0() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t984453155_StaticFields, ___s_CurrentPipelineAsset_0)); }
	inline RuntimeObject* get_s_CurrentPipelineAsset_0() const { return ___s_CurrentPipelineAsset_0; }
	inline RuntimeObject** get_address_of_s_CurrentPipelineAsset_0() { return &___s_CurrentPipelineAsset_0; }
	inline void set_s_CurrentPipelineAsset_0(RuntimeObject* value)
	{
		___s_CurrentPipelineAsset_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_CurrentPipelineAsset_0), value);
	}

	inline static int32_t get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t984453155_StaticFields, ___U3CcurrentPipelineU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CcurrentPipelineU3Ek__BackingField_1() const { return ___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CcurrentPipelineU3Ek__BackingField_1() { return &___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline void set_U3CcurrentPipelineU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CcurrentPipelineU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcurrentPipelineU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERPIPELINEMANAGER_T984453155_H
#ifndef MESSAGETYPESUBSCRIBERS_T2291506050_H
#define MESSAGETYPESUBSCRIBERS_T2291506050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct  MessageTypeSubscribers_t2291506050  : public RuntimeObject
{
public:
	// System.String UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::m_messageTypeId
	String_t* ___m_messageTypeId_0;
	// System.Int32 UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::subscriberCount
	int32_t ___subscriberCount_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::messageCallback
	MessageEvent_t2167079021 * ___messageCallback_2;

public:
	inline static int32_t get_offset_of_m_messageTypeId_0() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t2291506050, ___m_messageTypeId_0)); }
	inline String_t* get_m_messageTypeId_0() const { return ___m_messageTypeId_0; }
	inline String_t** get_address_of_m_messageTypeId_0() { return &___m_messageTypeId_0; }
	inline void set_m_messageTypeId_0(String_t* value)
	{
		___m_messageTypeId_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_messageTypeId_0), value);
	}

	inline static int32_t get_offset_of_subscriberCount_1() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t2291506050, ___subscriberCount_1)); }
	inline int32_t get_subscriberCount_1() const { return ___subscriberCount_1; }
	inline int32_t* get_address_of_subscriberCount_1() { return &___subscriberCount_1; }
	inline void set_subscriberCount_1(int32_t value)
	{
		___subscriberCount_1 = value;
	}

	inline static int32_t get_offset_of_messageCallback_2() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t2291506050, ___messageCallback_2)); }
	inline MessageEvent_t2167079021 * get_messageCallback_2() const { return ___messageCallback_2; }
	inline MessageEvent_t2167079021 ** get_address_of_messageCallback_2() { return &___messageCallback_2; }
	inline void set_messageCallback_2(MessageEvent_t2167079021 * value)
	{
		___messageCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___messageCallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGETYPESUBSCRIBERS_T2291506050_H
#ifndef SYNCHRONIZATIONCONTEXT_T3857790437_H
#define SYNCHRONIZATIONCONTEXT_T3857790437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t3857790437  : public RuntimeObject
{
public:

public:
};

struct SynchronizationContext_t3857790437_ThreadStaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::currentContext
	SynchronizationContext_t3857790437 * ___currentContext_0;

public:
	inline static int32_t get_offset_of_currentContext_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t3857790437_ThreadStaticFields, ___currentContext_0)); }
	inline SynchronizationContext_t3857790437 * get_currentContext_0() const { return ___currentContext_0; }
	inline SynchronizationContext_t3857790437 ** get_address_of_currentContext_0() { return &___currentContext_0; }
	inline void set_currentContext_0(SynchronizationContext_t3857790437 * value)
	{
		___currentContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T3857790437_H
#ifndef PERSISTENTCALLGROUP_T339478082_H
#define PERSISTENTCALLGROUP_T339478082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCallGroup
struct  PersistentCallGroup_t339478082  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t3162557601 * ___m_Calls_0;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(PersistentCallGroup_t339478082, ___m_Calls_0)); }
	inline List_1_t3162557601 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline List_1_t3162557601 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(List_1_t3162557601 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALLGROUP_T339478082_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef U3CEVADEU3EC__ITERATOR0_T1651935502_H
#define U3CEVADEU3EC__ITERATOR0_T1651935502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_EvasiveManeuver/<Evade>c__Iterator0
struct  U3CEvadeU3Ec__Iterator0_t1651935502  : public RuntimeObject
{
public:
	// Done_EvasiveManeuver Done_EvasiveManeuver/<Evade>c__Iterator0::$this
	Done_EvasiveManeuver_t2572524317 * ___U24this_0;
	// System.Object Done_EvasiveManeuver/<Evade>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean Done_EvasiveManeuver/<Evade>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 Done_EvasiveManeuver/<Evade>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CEvadeU3Ec__Iterator0_t1651935502, ___U24this_0)); }
	inline Done_EvasiveManeuver_t2572524317 * get_U24this_0() const { return ___U24this_0; }
	inline Done_EvasiveManeuver_t2572524317 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(Done_EvasiveManeuver_t2572524317 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CEvadeU3Ec__Iterator0_t1651935502, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CEvadeU3Ec__Iterator0_t1651935502, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CEvadeU3Ec__Iterator0_t1651935502, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CEVADEU3EC__ITERATOR0_T1651935502_H
#ifndef NATIVE_T2308112383_H
#define NATIVE_T2308112383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.Native
struct  Native_t2308112383  : public RuntimeObject
{
public:

public:
};

struct Native_t2308112383_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference> UnityEngine.CSSLayout.Native::s_MeasureFunctions
	Dictionary_2_t1519430885 * ___s_MeasureFunctions_0;

public:
	inline static int32_t get_offset_of_s_MeasureFunctions_0() { return static_cast<int32_t>(offsetof(Native_t2308112383_StaticFields, ___s_MeasureFunctions_0)); }
	inline Dictionary_2_t1519430885 * get_s_MeasureFunctions_0() const { return ___s_MeasureFunctions_0; }
	inline Dictionary_2_t1519430885 ** get_address_of_s_MeasureFunctions_0() { return &___s_MeasureFunctions_0; }
	inline void set_s_MeasureFunctions_0(Dictionary_2_t1519430885 * value)
	{
		___s_MeasureFunctions_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_MeasureFunctions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVE_T2308112383_H
#ifndef DONE_BOUNDARY_T381809497_H
#define DONE_BOUNDARY_T381809497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_Boundary
struct  Done_Boundary_t381809497  : public RuntimeObject
{
public:
	// System.Single Done_Boundary::xMin
	float ___xMin_0;
	// System.Single Done_Boundary::xMax
	float ___xMax_1;
	// System.Single Done_Boundary::zMin
	float ___zMin_2;
	// System.Single Done_Boundary::zMax
	float ___zMax_3;

public:
	inline static int32_t get_offset_of_xMin_0() { return static_cast<int32_t>(offsetof(Done_Boundary_t381809497, ___xMin_0)); }
	inline float get_xMin_0() const { return ___xMin_0; }
	inline float* get_address_of_xMin_0() { return &___xMin_0; }
	inline void set_xMin_0(float value)
	{
		___xMin_0 = value;
	}

	inline static int32_t get_offset_of_xMax_1() { return static_cast<int32_t>(offsetof(Done_Boundary_t381809497, ___xMax_1)); }
	inline float get_xMax_1() const { return ___xMax_1; }
	inline float* get_address_of_xMax_1() { return &___xMax_1; }
	inline void set_xMax_1(float value)
	{
		___xMax_1 = value;
	}

	inline static int32_t get_offset_of_zMin_2() { return static_cast<int32_t>(offsetof(Done_Boundary_t381809497, ___zMin_2)); }
	inline float get_zMin_2() const { return ___zMin_2; }
	inline float* get_address_of_zMin_2() { return &___zMin_2; }
	inline void set_zMin_2(float value)
	{
		___zMin_2 = value;
	}

	inline static int32_t get_offset_of_zMax_3() { return static_cast<int32_t>(offsetof(Done_Boundary_t381809497, ___zMax_3)); }
	inline float get_zMax_3() const { return ___zMax_3; }
	inline float* get_address_of_zMax_3() { return &___zMax_3; }
	inline void set_zMax_3(float value)
	{
		___zMax_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_BOUNDARY_T381809497_H
#ifndef STACKTRACEUTILITY_T1881293839_H
#define STACKTRACEUTILITY_T1881293839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t1881293839  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t1881293839_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t1881293839_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T1881293839_H
#ifndef ATTRIBUTE_T542643598_H
#define ATTRIBUTE_T542643598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t542643598  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T542643598_H
#ifndef NETFXCOREEXTENSIONS_T4275971970_H
#define NETFXCOREEXTENSIONS_T4275971970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.NetFxCoreExtensions
struct  NetFxCoreExtensions_t4275971970  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETFXCOREEXTENSIONS_T4275971970_H
#ifndef ARGUMENTCACHE_T4810721_H
#define ARGUMENTCACHE_T4810721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t4810721  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_t1021602117 * ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;

public:
	inline static int32_t get_offset_of_m_ObjectArgument_0() { return static_cast<int32_t>(offsetof(ArgumentCache_t4810721, ___m_ObjectArgument_0)); }
	inline Object_t1021602117 * get_m_ObjectArgument_0() const { return ___m_ObjectArgument_0; }
	inline Object_t1021602117 ** get_address_of_m_ObjectArgument_0() { return &___m_ObjectArgument_0; }
	inline void set_m_ObjectArgument_0(Object_t1021602117 * value)
	{
		___m_ObjectArgument_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgument_0), value);
	}

	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(ArgumentCache_t4810721, ___m_ObjectArgumentAssemblyTypeName_1)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_1() const { return ___m_ObjectArgumentAssemblyTypeName_1; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_1() { return &___m_ObjectArgumentAssemblyTypeName_1; }
	inline void set_m_ObjectArgumentAssemblyTypeName_1(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgumentAssemblyTypeName_1), value);
	}

	inline static int32_t get_offset_of_m_IntArgument_2() { return static_cast<int32_t>(offsetof(ArgumentCache_t4810721, ___m_IntArgument_2)); }
	inline int32_t get_m_IntArgument_2() const { return ___m_IntArgument_2; }
	inline int32_t* get_address_of_m_IntArgument_2() { return &___m_IntArgument_2; }
	inline void set_m_IntArgument_2(int32_t value)
	{
		___m_IntArgument_2 = value;
	}

	inline static int32_t get_offset_of_m_FloatArgument_3() { return static_cast<int32_t>(offsetof(ArgumentCache_t4810721, ___m_FloatArgument_3)); }
	inline float get_m_FloatArgument_3() const { return ___m_FloatArgument_3; }
	inline float* get_address_of_m_FloatArgument_3() { return &___m_FloatArgument_3; }
	inline void set_m_FloatArgument_3(float value)
	{
		___m_FloatArgument_3 = value;
	}

	inline static int32_t get_offset_of_m_StringArgument_4() { return static_cast<int32_t>(offsetof(ArgumentCache_t4810721, ___m_StringArgument_4)); }
	inline String_t* get_m_StringArgument_4() const { return ___m_StringArgument_4; }
	inline String_t** get_address_of_m_StringArgument_4() { return &___m_StringArgument_4; }
	inline void set_m_StringArgument_4(String_t* value)
	{
		___m_StringArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringArgument_4), value);
	}

	inline static int32_t get_offset_of_m_BoolArgument_5() { return static_cast<int32_t>(offsetof(ArgumentCache_t4810721, ___m_BoolArgument_5)); }
	inline bool get_m_BoolArgument_5() const { return ___m_BoolArgument_5; }
	inline bool* get_address_of_m_BoolArgument_5() { return &___m_BoolArgument_5; }
	inline void set_m_BoolArgument_5(bool value)
	{
		___m_BoolArgument_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTCACHE_T4810721_H
#ifndef BASEINVOKABLECALL_T2229564840_H
#define BASEINVOKABLECALL_T2229564840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t2229564840  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T2229564840_H
#ifndef DEFAULTVALUEATTRIBUTE_T1027170048_H
#define DEFAULTVALUEATTRIBUTE_T1027170048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.DefaultValueAttribute
struct  DefaultValueAttribute_t1027170048  : public Attribute_t542643598
{
public:
	// System.Object UnityEngine.Internal.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t1027170048, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T1027170048_H
#ifndef EXCLUDEFROMDOCSATTRIBUTE_T665825653_H
#define EXCLUDEFROMDOCSATTRIBUTE_T665825653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.ExcludeFromDocsAttribute
struct  ExcludeFromDocsAttribute_t665825653  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUDEFROMDOCSATTRIBUTE_T665825653_H
#ifndef TYPEINFERENCERULEATTRIBUTE_T1390152093_H
#define TYPEINFERENCERULEATTRIBUTE_T1390152093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRuleAttribute
struct  TypeInferenceRuleAttribute_t1390152093  : public Attribute_t542643598
{
public:
	// System.String UnityEngineInternal.TypeInferenceRuleAttribute::_rule
	String_t* ____rule_0;

public:
	inline static int32_t get_offset_of__rule_0() { return static_cast<int32_t>(offsetof(TypeInferenceRuleAttribute_t1390152093, ____rule_0)); }
	inline String_t* get__rule_0() const { return ____rule_0; }
	inline String_t** get_address_of__rule_0() { return &____rule_0; }
	inline void set__rule_0(String_t* value)
	{
		____rule_0 = value;
		Il2CppCodeGenWriteBarrier((&____rule_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFERENCERULEATTRIBUTE_T1390152093_H
#ifndef FORMERLYSERIALIZEDASATTRIBUTE_T3673080018_H
#define FORMERLYSERIALIZEDASATTRIBUTE_T3673080018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct  FormerlySerializedAsAttribute_t3673080018  : public Attribute_t542643598
{
public:
	// System.String UnityEngine.Serialization.FormerlySerializedAsAttribute::m_oldName
	String_t* ___m_oldName_0;

public:
	inline static int32_t get_offset_of_m_oldName_0() { return static_cast<int32_t>(offsetof(FormerlySerializedAsAttribute_t3673080018, ___m_oldName_0)); }
	inline String_t* get_m_oldName_0() const { return ___m_oldName_0; }
	inline String_t** get_address_of_m_oldName_0() { return &___m_oldName_0; }
	inline void set_m_oldName_0(String_t* value)
	{
		___m_oldName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_oldName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMERLYSERIALIZEDASATTRIBUTE_T3673080018_H
#ifndef REQUIREDBYNATIVECODEATTRIBUTE_T1913052472_H
#define REQUIREDBYNATIVECODEATTRIBUTE_T1913052472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.RequiredByNativeCodeAttribute
struct  RequiredByNativeCodeAttribute_t1913052472  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIREDBYNATIVECODEATTRIBUTE_T1913052472_H
#ifndef CSSSIZE_T1564391216_H
#define CSSSIZE_T1564391216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSSize
struct  CSSSize_t1564391216 
{
public:
	// System.Single UnityEngine.CSSLayout.CSSSize::width
	float ___width_0;
	// System.Single UnityEngine.CSSLayout.CSSSize::height
	float ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(CSSSize_t1564391216, ___width_0)); }
	inline float get_width_0() const { return ___width_0; }
	inline float* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(float value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(CSSSize_t1564391216, ___height_1)); }
	inline float get_height_1() const { return ___height_1; }
	inline float* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(float value)
	{
		___height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSSSIZE_T1564391216_H
#ifndef VECTOR3_T2243707580_H
#define VECTOR3_T2243707580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2243707580 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2243707580_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2243707580  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2243707580  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2243707580  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2243707580  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2243707580  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2243707580  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2243707580  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2243707580  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2243707580  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2243707580  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2243707580  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2243707580 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2243707580  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___oneVector_5)); }
	inline Vector3_t2243707580  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2243707580 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2243707580  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___upVector_6)); }
	inline Vector3_t2243707580  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2243707580 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2243707580  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___downVector_7)); }
	inline Vector3_t2243707580  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2243707580 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2243707580  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___leftVector_8)); }
	inline Vector3_t2243707580  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2243707580 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2243707580  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___rightVector_9)); }
	inline Vector3_t2243707580  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2243707580 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2243707580  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2243707580  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2243707580 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2243707580  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___backVector_11)); }
	inline Vector3_t2243707580  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2243707580 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2243707580  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2243707580  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2243707580 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2243707580  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2243707580  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2243707580 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2243707580  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2243707580_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1328083999* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1328083999* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1328083999** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1328083999* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef USEDBYNATIVECODEATTRIBUTE_T3212052468_H
#define USEDBYNATIVECODEATTRIBUTE_T3212052468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.UsedByNativeCodeAttribute
struct  UsedByNativeCodeAttribute_t3212052468  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USEDBYNATIVECODEATTRIBUTE_T3212052468_H
#ifndef UNITYSYNCHRONIZATIONCONTEXT_T1205147244_H
#define UNITYSYNCHRONIZATIONCONTEXT_T1205147244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext
struct  UnitySynchronizationContext_t1205147244  : public SynchronizationContext_t3857790437
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest> UnityEngine.UnitySynchronizationContext::m_AsyncWorkQueue
	Queue_1_t973679317 * ___m_AsyncWorkQueue_1;

public:
	inline static int32_t get_offset_of_m_AsyncWorkQueue_1() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t1205147244, ___m_AsyncWorkQueue_1)); }
	inline Queue_1_t973679317 * get_m_AsyncWorkQueue_1() const { return ___m_AsyncWorkQueue_1; }
	inline Queue_1_t973679317 ** get_address_of_m_AsyncWorkQueue_1() { return &___m_AsyncWorkQueue_1; }
	inline void set_m_AsyncWorkQueue_1(Queue_1_t973679317 * value)
	{
		___m_AsyncWorkQueue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncWorkQueue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSYNCHRONIZATIONCONTEXT_T1205147244_H
#ifndef UNITYEVENT_T408735097_H
#define UNITYEVENT_T408735097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t408735097  : public UnityEventBase_t828812576
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3614634134* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t408735097, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3614634134* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3614634134** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3614634134* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T408735097_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef RECT_T3681755626_H
#define RECT_T3681755626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t3681755626 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t3681755626, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t3681755626, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t3681755626, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t3681755626, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T3681755626_H
#ifndef VECTOR2_T2243707579_H
#define VECTOR2_T2243707579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2243707579 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2243707579_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2243707579  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2243707579  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2243707579  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2243707579  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2243707579  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2243707579  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2243707579  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2243707579  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2243707579  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2243707579 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2243707579  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___oneVector_3)); }
	inline Vector2_t2243707579  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2243707579 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2243707579  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___upVector_4)); }
	inline Vector2_t2243707579  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2243707579 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2243707579  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___downVector_5)); }
	inline Vector2_t2243707579  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2243707579 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2243707579  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___leftVector_6)); }
	inline Vector2_t2243707579  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2243707579 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2243707579  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___rightVector_7)); }
	inline Vector2_t2243707579  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2243707579 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2243707579  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2243707579  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2243707579 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2243707579  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2243707579  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2243707579 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2243707579  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2243707579_H
#ifndef WORKREQUEST_T1154022482_H
#define WORKREQUEST_T1154022482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t1154022482 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t296893742 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t1154022482, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t296893742 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t296893742 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t296893742 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t1154022482, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1154022482_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1154022482_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
};
#endif // WORKREQUEST_T1154022482_H
#ifndef SINGLE_T2076509932_H
#define SINGLE_T2076509932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2076509932 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2076509932, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2076509932_H
#ifndef PREFERBINARYSERIALIZATION_T2472773525_H
#define PREFERBINARYSERIALIZATION_T2472773525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_t2472773525  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_T2472773525_H
#ifndef SERIALIZEFIELD_T3073427462_H
#define SERIALIZEFIELD_T3073427462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t3073427462  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T3073427462_H
#ifndef SERIALIZEPRIVATEVARIABLES_T2241034664_H
#define SERIALIZEPRIVATEVARIABLES_T2241034664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_t2241034664  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_T2241034664_H
#ifndef QUATERNION_T4030073918_H
#define QUATERNION_T4030073918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t4030073918 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t4030073918_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t4030073918  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t4030073918  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t4030073918 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t4030073918  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T4030073918_H
#ifndef INVOKABLECALL_T2183506063_H
#define INVOKABLECALL_T2183506063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t2183506063  : public BaseInvokableCall_t2229564840
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t4025899511 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t2183506063, ___Delegate_0)); }
	inline UnityAction_t4025899511 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t4025899511 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t4025899511 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T2183506063_H
#ifndef UNITYEXCEPTION_T2687879050_H
#define UNITYEXCEPTION_T2687879050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t2687879050  : public Exception_t1927440687
{
public:
	// System.String UnityEngine.UnityException::unityStackTrace
	String_t* ___unityStackTrace_12;

public:
	inline static int32_t get_offset_of_unityStackTrace_12() { return static_cast<int32_t>(offsetof(UnityException_t2687879050, ___unityStackTrace_12)); }
	inline String_t* get_unityStackTrace_12() const { return ___unityStackTrace_12; }
	inline String_t** get_address_of_unityStackTrace_12() { return &___unityStackTrace_12; }
	inline void set_unityStackTrace_12(String_t* value)
	{
		___unityStackTrace_12 = value;
		Il2CppCodeGenWriteBarrier((&___unityStackTrace_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T2687879050_H
#ifndef READONLYATTRIBUTE_T689702060_H
#define READONLYATTRIBUTE_T689702060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadOnlyAttribute
struct  ReadOnlyAttribute_t689702060  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T689702060_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2510243513 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2510243513 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2510243513 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T1288953595_H
#define NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T1288953595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsMinMaxWriteRestrictionAttribute
struct  NativeContainerSupportsMinMaxWriteRestrictionAttribute_t1288953595  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T1288953595_H
#ifndef UNITYEVENT_1_T2110227463_H
#define UNITYEVENT_1_T2110227463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t2110227463  : public UnityEventBase_t828812576
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3614634134* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t2110227463, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3614634134* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3614634134** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3614634134* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T2110227463_H
#ifndef THREADANDSERIALIZATIONSAFEATTRIBUTE_T4226409784_H
#define THREADANDSERIALIZATIONSAFEATTRIBUTE_T4226409784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ThreadAndSerializationSafeAttribute
struct  ThreadAndSerializationSafeAttribute_t4226409784  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADANDSERIALIZATIONSAFEATTRIBUTE_T4226409784_H
#ifndef UNITYEVENT_1_T339633637_H
#define UNITYEVENT_1_T339633637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct  UnityEvent_1_t339633637  : public UnityEventBase_t828812576
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3614634134* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t339633637, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3614634134* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3614634134** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3614634134* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T339633637_H
#ifndef NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T3267933728_H
#define NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T3267933728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsAtomicWriteAttribute
struct  NativeContainerSupportsAtomicWriteAttribute_t3267933728  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T3267933728_H
#ifndef READWRITEATTRIBUTE_T3403607913_H
#define READWRITEATTRIBUTE_T3403607913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadWriteAttribute
struct  ReadWriteAttribute_t3403607913  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READWRITEATTRIBUTE_T3403607913_H
#ifndef WRITEONLYATTRIBUTE_T14323075_H
#define WRITEONLYATTRIBUTE_T14323075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.WriteOnlyAttribute
struct  WriteOnlyAttribute_t14323075  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEONLYATTRIBUTE_T14323075_H
#ifndef DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T987733588_H
#define DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T987733588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.DeallocateOnJobCompletionAttribute
struct  DeallocateOnJobCompletionAttribute_t987733588  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T987733588_H
#ifndef NATIVECONTAINERATTRIBUTE_T269240268_H
#define NATIVECONTAINERATTRIBUTE_T269240268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerAttribute
struct  NativeContainerAttribute_t269240268  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERATTRIBUTE_T269240268_H
#ifndef LOGTYPE_T1559732862_H
#define LOGTYPE_T1559732862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t1559732862 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t1559732862, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T1559732862_H
#ifndef U3CSPAWNWAVESU3EC__ITERATOR0_T3736144616_H
#define U3CSPAWNWAVESU3EC__ITERATOR0_T3736144616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_GameController/<SpawnWaves>c__Iterator0
struct  U3CSpawnWavesU3Ec__Iterator0_t3736144616  : public RuntimeObject
{
public:
	// System.Int32 Done_GameController/<SpawnWaves>c__Iterator0::<i>__1
	int32_t ___U3CiU3E__1_0;
	// UnityEngine.GameObject Done_GameController/<SpawnWaves>c__Iterator0::<hazard>__2
	GameObject_t1756533147 * ___U3ChazardU3E__2_1;
	// UnityEngine.Vector3 Done_GameController/<SpawnWaves>c__Iterator0::<spawnPosition>__2
	Vector3_t2243707580  ___U3CspawnPositionU3E__2_2;
	// UnityEngine.Quaternion Done_GameController/<SpawnWaves>c__Iterator0::<spawnRotation>__2
	Quaternion_t4030073918  ___U3CspawnRotationU3E__2_3;
	// Done_GameController Done_GameController/<SpawnWaves>c__Iterator0::$this
	Done_GameController_t2490533223 * ___U24this_4;
	// System.Object Done_GameController/<SpawnWaves>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean Done_GameController/<SpawnWaves>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 Done_GameController/<SpawnWaves>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CiU3E__1_0() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3736144616, ___U3CiU3E__1_0)); }
	inline int32_t get_U3CiU3E__1_0() const { return ___U3CiU3E__1_0; }
	inline int32_t* get_address_of_U3CiU3E__1_0() { return &___U3CiU3E__1_0; }
	inline void set_U3CiU3E__1_0(int32_t value)
	{
		___U3CiU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U3ChazardU3E__2_1() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3736144616, ___U3ChazardU3E__2_1)); }
	inline GameObject_t1756533147 * get_U3ChazardU3E__2_1() const { return ___U3ChazardU3E__2_1; }
	inline GameObject_t1756533147 ** get_address_of_U3ChazardU3E__2_1() { return &___U3ChazardU3E__2_1; }
	inline void set_U3ChazardU3E__2_1(GameObject_t1756533147 * value)
	{
		___U3ChazardU3E__2_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3ChazardU3E__2_1), value);
	}

	inline static int32_t get_offset_of_U3CspawnPositionU3E__2_2() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3736144616, ___U3CspawnPositionU3E__2_2)); }
	inline Vector3_t2243707580  get_U3CspawnPositionU3E__2_2() const { return ___U3CspawnPositionU3E__2_2; }
	inline Vector3_t2243707580 * get_address_of_U3CspawnPositionU3E__2_2() { return &___U3CspawnPositionU3E__2_2; }
	inline void set_U3CspawnPositionU3E__2_2(Vector3_t2243707580  value)
	{
		___U3CspawnPositionU3E__2_2 = value;
	}

	inline static int32_t get_offset_of_U3CspawnRotationU3E__2_3() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3736144616, ___U3CspawnRotationU3E__2_3)); }
	inline Quaternion_t4030073918  get_U3CspawnRotationU3E__2_3() const { return ___U3CspawnRotationU3E__2_3; }
	inline Quaternion_t4030073918 * get_address_of_U3CspawnRotationU3E__2_3() { return &___U3CspawnRotationU3E__2_3; }
	inline void set_U3CspawnRotationU3E__2_3(Quaternion_t4030073918  value)
	{
		___U3CspawnRotationU3E__2_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3736144616, ___U24this_4)); }
	inline Done_GameController_t2490533223 * get_U24this_4() const { return ___U24this_4; }
	inline Done_GameController_t2490533223 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(Done_GameController_t2490533223 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3736144616, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3736144616, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3736144616, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSPAWNWAVESU3EC__ITERATOR0_T3736144616_H
#ifndef DATASTREAMTYPE_T1147940902_H
#define DATASTREAMTYPE_T1147940902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t1147940902 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t1147940902, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T1147940902_H
#ifndef OBJECT_T1021602117_H
#define OBJECT_T1021602117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1021602117  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1021602117, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1021602117_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1021602117_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1021602117_H
#ifndef PLAYABLEOUTPUTHANDLE_T551742311_H
#define PLAYABLEOUTPUTHANDLE_T551742311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t551742311 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t551742311, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t551742311, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T551742311_H
#ifndef DELEGATE_T3022476291_H
#define DELEGATE_T3022476291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3022476291  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1572802995 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___data_8)); }
	inline DelegateData_t1572802995 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1572802995 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1572802995 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3022476291_H
#ifndef MESSAGEEVENT_T2167079021_H
#define MESSAGEEVENT_T2167079021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct  MessageEvent_t2167079021  : public UnityEvent_1_t339633637
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENT_T2167079021_H
#ifndef TYPEINFERENCERULES_T1810425448_H
#define TYPEINFERENCERULES_T1810425448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRules
struct  TypeInferenceRules_t1810425448 
{
public:
	// System.Int32 UnityEngineInternal.TypeInferenceRules::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeInferenceRules_t1810425448, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFERENCERULES_T1810425448_H
#ifndef CONNECTIONCHANGEEVENT_T536719976_H
#define CONNECTIONCHANGEEVENT_T536719976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct  ConnectionChangeEvent_t536719976  : public UnityEvent_1_t2110227463
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCHANGEEVENT_T536719976_H
#ifndef CSSMEASUREMODE_T2118763144_H
#define CSSMEASUREMODE_T2118763144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSMeasureMode
struct  CSSMeasureMode_t2118763144 
{
public:
	// System.Int32 UnityEngine.CSSLayout.CSSMeasureMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CSSMeasureMode_t2118763144, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSSMEASUREMODE_T2118763144_H
#ifndef U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T1899782350_H
#define U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T1899782350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0
struct  U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t1899782350  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t1899782350, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T1899782350_H
#ifndef FLAGS_T2137338071_H
#define FLAGS_T2137338071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData/Flags
struct  Flags_t2137338071 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData/Flags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Flags_t2137338071, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_T2137338071_H
#ifndef RAY_T2469606224_H
#define RAY_T2469606224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t2469606224 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t2243707580  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t2243707580  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Origin_0)); }
	inline Vector3_t2243707580  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t2243707580 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t2243707580  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Direction_1)); }
	inline Vector3_t2243707580  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t2243707580 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t2243707580  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T2469606224_H
#ifndef PERSISTENTLISTENERMODE_T857969000_H
#define PERSISTENTLISTENERMODE_T857969000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentListenerMode
struct  PersistentListenerMode_t857969000 
{
public:
	// System.Int32 UnityEngine.Events.PersistentListenerMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PersistentListenerMode_t857969000, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTLISTENERMODE_T857969000_H
#ifndef UNITYEVENTCALLSTATE_T3420894182_H
#define UNITYEVENTCALLSTATE_T3420894182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventCallState
struct  UnityEventCallState_t3420894182 
{
public:
	// System.Int32 UnityEngine.Events.UnityEventCallState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityEventCallState_t3420894182, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTCALLSTATE_T3420894182_H
#ifndef MULTICASTDELEGATE_T3201952435_H
#define MULTICASTDELEGATE_T3201952435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3201952435  : public Delegate_t3022476291
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3201952435 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3201952435 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___prev_9)); }
	inline MulticastDelegate_t3201952435 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3201952435 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3201952435 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___kpm_next_10)); }
	inline MulticastDelegate_t3201952435 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3201952435 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3201952435 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3201952435_H
#ifndef SCRIPTABLEOBJECT_T1975622470_H
#define SCRIPTABLEOBJECT_T1975622470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t1975622470  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1975622470_marshaled_pinvoke : public Object_t1021602117_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1975622470_marshaled_com : public Object_t1021602117_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T1975622470_H
#ifndef COMPONENT_T3819376471_H
#define COMPONENT_T3819376471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3819376471  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3819376471_H
#ifndef FRAMEDATA_T2278136573_H
#define FRAMEDATA_T2278136573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData
struct  FrameData_t2278136573 
{
public:
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_4;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_5;

public:
	inline static int32_t get_offset_of_m_FrameID_0() { return static_cast<int32_t>(offsetof(FrameData_t2278136573, ___m_FrameID_0)); }
	inline uint64_t get_m_FrameID_0() const { return ___m_FrameID_0; }
	inline uint64_t* get_address_of_m_FrameID_0() { return &___m_FrameID_0; }
	inline void set_m_FrameID_0(uint64_t value)
	{
		___m_FrameID_0 = value;
	}

	inline static int32_t get_offset_of_m_DeltaTime_1() { return static_cast<int32_t>(offsetof(FrameData_t2278136573, ___m_DeltaTime_1)); }
	inline double get_m_DeltaTime_1() const { return ___m_DeltaTime_1; }
	inline double* get_address_of_m_DeltaTime_1() { return &___m_DeltaTime_1; }
	inline void set_m_DeltaTime_1(double value)
	{
		___m_DeltaTime_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight_2() { return static_cast<int32_t>(offsetof(FrameData_t2278136573, ___m_Weight_2)); }
	inline float get_m_Weight_2() const { return ___m_Weight_2; }
	inline float* get_address_of_m_Weight_2() { return &___m_Weight_2; }
	inline void set_m_Weight_2(float value)
	{
		___m_Weight_2 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveWeight_3() { return static_cast<int32_t>(offsetof(FrameData_t2278136573, ___m_EffectiveWeight_3)); }
	inline float get_m_EffectiveWeight_3() const { return ___m_EffectiveWeight_3; }
	inline float* get_address_of_m_EffectiveWeight_3() { return &___m_EffectiveWeight_3; }
	inline void set_m_EffectiveWeight_3(float value)
	{
		___m_EffectiveWeight_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveSpeed_4() { return static_cast<int32_t>(offsetof(FrameData_t2278136573, ___m_EffectiveSpeed_4)); }
	inline float get_m_EffectiveSpeed_4() const { return ___m_EffectiveSpeed_4; }
	inline float* get_address_of_m_EffectiveSpeed_4() { return &___m_EffectiveSpeed_4; }
	inline void set_m_EffectiveSpeed_4(float value)
	{
		___m_EffectiveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_Flags_5() { return static_cast<int32_t>(offsetof(FrameData_t2278136573, ___m_Flags_5)); }
	inline int32_t get_m_Flags_5() const { return ___m_Flags_5; }
	inline int32_t* get_address_of_m_Flags_5() { return &___m_Flags_5; }
	inline void set_m_Flags_5(int32_t value)
	{
		___m_Flags_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEDATA_T2278136573_H
#ifndef SCRIPTPLAYABLEOUTPUT_T1666207618_H
#define SCRIPTPLAYABLEOUTPUT_T1666207618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.ScriptPlayableOutput
struct  ScriptPlayableOutput_t1666207618 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_t551742311  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayableOutput_t1666207618, ___m_Handle_0)); }
	inline PlayableOutputHandle_t551742311  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t551742311 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t551742311  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPLAYABLEOUTPUT_T1666207618_H
#ifndef LOGGER_T3328995178_H
#define LOGGER_T3328995178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Logger
struct  Logger_t3328995178  : public RuntimeObject
{
public:
	// UnityEngine.ILogHandler UnityEngine.Logger::<logHandler>k__BackingField
	RuntimeObject* ___U3ClogHandlerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Logger::<logEnabled>k__BackingField
	bool ___U3ClogEnabledU3Ek__BackingField_1;
	// UnityEngine.LogType UnityEngine.Logger::<filterLogType>k__BackingField
	int32_t ___U3CfilterLogTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ClogHandlerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Logger_t3328995178, ___U3ClogHandlerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3ClogHandlerU3Ek__BackingField_0() const { return ___U3ClogHandlerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3ClogHandlerU3Ek__BackingField_0() { return &___U3ClogHandlerU3Ek__BackingField_0; }
	inline void set_U3ClogHandlerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3ClogHandlerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClogHandlerU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ClogEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Logger_t3328995178, ___U3ClogEnabledU3Ek__BackingField_1)); }
	inline bool get_U3ClogEnabledU3Ek__BackingField_1() const { return ___U3ClogEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3ClogEnabledU3Ek__BackingField_1() { return &___U3ClogEnabledU3Ek__BackingField_1; }
	inline void set_U3ClogEnabledU3Ek__BackingField_1(bool value)
	{
		___U3ClogEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Logger_t3328995178, ___U3CfilterLogTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CfilterLogTypeU3Ek__BackingField_2() const { return ___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CfilterLogTypeU3Ek__BackingField_2() { return &___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline void set_U3CfilterLogTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CfilterLogTypeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T3328995178_H
#ifndef PLAYABLEBINDING_T2498078091_H
#define PLAYABLEBINDING_T2498078091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t2498078091 
{
public:
	union
	{
		struct
		{
			// System.String UnityEngine.Playables.PlayableBinding::<streamName>k__BackingField
			String_t* ___U3CstreamNameU3Ek__BackingField_2;
			// UnityEngine.Playables.DataStreamType UnityEngine.Playables.PlayableBinding::<streamType>k__BackingField
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			// UnityEngine.Object UnityEngine.Playables.PlayableBinding::<sourceObject>k__BackingField
			Object_t1021602117 * ___U3CsourceObjectU3Ek__BackingField_4;
			// System.Type UnityEngine.Playables.PlayableBinding::<sourceBindingType>k__BackingField
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t2498078091__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CstreamNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t2498078091, ___U3CstreamNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CstreamNameU3Ek__BackingField_2() const { return ___U3CstreamNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CstreamNameU3Ek__BackingField_2() { return &___U3CstreamNameU3Ek__BackingField_2; }
	inline void set_U3CstreamNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CstreamNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstreamNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CstreamTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t2498078091, ___U3CstreamTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamTypeU3Ek__BackingField_3() const { return ___U3CstreamTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamTypeU3Ek__BackingField_3() { return &___U3CstreamTypeU3Ek__BackingField_3; }
	inline void set_U3CstreamTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t2498078091, ___U3CsourceObjectU3Ek__BackingField_4)); }
	inline Object_t1021602117 * get_U3CsourceObjectU3Ek__BackingField_4() const { return ___U3CsourceObjectU3Ek__BackingField_4; }
	inline Object_t1021602117 ** get_address_of_U3CsourceObjectU3Ek__BackingField_4() { return &___U3CsourceObjectU3Ek__BackingField_4; }
	inline void set_U3CsourceObjectU3Ek__BackingField_4(Object_t1021602117 * value)
	{
		___U3CsourceObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t2498078091, ___U3CsourceBindingTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsourceBindingTypeU3Ek__BackingField_5() const { return ___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return &___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline void set_U3CsourceBindingTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsourceBindingTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceBindingTypeU3Ek__BackingField_5), value);
	}
};

struct PlayableBinding_t2498078091_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t2431947754* ___None_0;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_1;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t2498078091_StaticFields, ___None_0)); }
	inline PlayableBindingU5BU5D_t2431947754* get_None_0() const { return ___None_0; }
	inline PlayableBindingU5BU5D_t2431947754** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PlayableBindingU5BU5D_t2431947754* value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((&___None_0), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t2498078091_StaticFields, ___DefaultDuration_1)); }
	inline double get_DefaultDuration_1() const { return ___DefaultDuration_1; }
	inline double* get_address_of_DefaultDuration_1() { return &___DefaultDuration_1; }
	inline void set_DefaultDuration_1(double value)
	{
		___DefaultDuration_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t2498078091_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t1021602117_marshaled_pinvoke ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t2498078091__padding[1];
	};
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t2498078091_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t1021602117_marshaled_com* ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t2498078091__padding[1];
	};
};
#endif // PLAYABLEBINDING_T2498078091_H
#ifndef PERSISTENTCALL_T3793436469_H
#define PERSISTENTCALL_T3793436469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t3793436469  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_t1021602117 * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_1;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_2;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t4810721 * ___m_Arguments_3;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(PersistentCall_t3793436469, ___m_Target_0)); }
	inline Object_t1021602117 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t1021602117 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t1021602117 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodName_1() { return static_cast<int32_t>(offsetof(PersistentCall_t3793436469, ___m_MethodName_1)); }
	inline String_t* get_m_MethodName_1() const { return ___m_MethodName_1; }
	inline String_t** get_address_of_m_MethodName_1() { return &___m_MethodName_1; }
	inline void set_m_MethodName_1(String_t* value)
	{
		___m_MethodName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodName_1), value);
	}

	inline static int32_t get_offset_of_m_Mode_2() { return static_cast<int32_t>(offsetof(PersistentCall_t3793436469, ___m_Mode_2)); }
	inline int32_t get_m_Mode_2() const { return ___m_Mode_2; }
	inline int32_t* get_address_of_m_Mode_2() { return &___m_Mode_2; }
	inline void set_m_Mode_2(int32_t value)
	{
		___m_Mode_2 = value;
	}

	inline static int32_t get_offset_of_m_Arguments_3() { return static_cast<int32_t>(offsetof(PersistentCall_t3793436469, ___m_Arguments_3)); }
	inline ArgumentCache_t4810721 * get_m_Arguments_3() const { return ___m_Arguments_3; }
	inline ArgumentCache_t4810721 ** get_address_of_m_Arguments_3() { return &___m_Arguments_3; }
	inline void set_m_Arguments_3(ArgumentCache_t4810721 * value)
	{
		___m_Arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arguments_3), value);
	}

	inline static int32_t get_offset_of_m_CallState_4() { return static_cast<int32_t>(offsetof(PersistentCall_t3793436469, ___m_CallState_4)); }
	inline int32_t get_m_CallState_4() const { return ___m_CallState_4; }
	inline int32_t* get_address_of_m_CallState_4() { return &___m_CallState_4; }
	inline void set_m_CallState_4(int32_t value)
	{
		___m_CallState_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALL_T3793436469_H
#ifndef PLAYABLEASSET_T2298101656_H
#define PLAYABLEASSET_T2298101656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t2298101656  : public ScriptableObject_t1975622470
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEASSET_T2298101656_H
#ifndef PLAYERCONNECTION_T3517219175_H
#define PLAYERCONNECTION_T3517219175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct  PlayerConnection_t3517219175  : public ScriptableObject_t1975622470
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents UnityEngine.Networking.PlayerConnection.PlayerConnection::m_PlayerEditorConnectionEvents
	PlayerEditorConnectionEvents_t2252784345 * ___m_PlayerEditorConnectionEvents_2;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Networking.PlayerConnection.PlayerConnection::m_connectedPlayers
	List_1_t1440998580 * ___m_connectedPlayers_3;

public:
	inline static int32_t get_offset_of_m_PlayerEditorConnectionEvents_2() { return static_cast<int32_t>(offsetof(PlayerConnection_t3517219175, ___m_PlayerEditorConnectionEvents_2)); }
	inline PlayerEditorConnectionEvents_t2252784345 * get_m_PlayerEditorConnectionEvents_2() const { return ___m_PlayerEditorConnectionEvents_2; }
	inline PlayerEditorConnectionEvents_t2252784345 ** get_address_of_m_PlayerEditorConnectionEvents_2() { return &___m_PlayerEditorConnectionEvents_2; }
	inline void set_m_PlayerEditorConnectionEvents_2(PlayerEditorConnectionEvents_t2252784345 * value)
	{
		___m_PlayerEditorConnectionEvents_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerEditorConnectionEvents_2), value);
	}

	inline static int32_t get_offset_of_m_connectedPlayers_3() { return static_cast<int32_t>(offsetof(PlayerConnection_t3517219175, ___m_connectedPlayers_3)); }
	inline List_1_t1440998580 * get_m_connectedPlayers_3() const { return ___m_connectedPlayers_3; }
	inline List_1_t1440998580 ** get_address_of_m_connectedPlayers_3() { return &___m_connectedPlayers_3; }
	inline void set_m_connectedPlayers_3(List_1_t1440998580 * value)
	{
		___m_connectedPlayers_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_connectedPlayers_3), value);
	}
};

struct PlayerConnection_t3517219175_StaticFields
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::s_Instance
	PlayerConnection_t3517219175 * ___s_Instance_4;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(PlayerConnection_t3517219175_StaticFields, ___s_Instance_4)); }
	inline PlayerConnection_t3517219175 * get_s_Instance_4() const { return ___s_Instance_4; }
	inline PlayerConnection_t3517219175 ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(PlayerConnection_t3517219175 * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONNECTION_T3517219175_H
#ifndef BEHAVIOUR_T955675639_H
#define BEHAVIOUR_T955675639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t955675639  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T955675639_H
#ifndef UNITYACTION_T4025899511_H
#define UNITYACTION_T4025899511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t4025899511  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T4025899511_H
#ifndef CSSMEASUREFUNC_T2092170507_H
#define CSSMEASUREFUNC_T2092170507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSMeasureFunc
struct  CSSMeasureFunc_t2092170507  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSSMEASUREFUNC_T2092170507_H
#ifndef MONOBEHAVIOUR_T1158329972_H
#define MONOBEHAVIOUR_T1158329972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1158329972  : public Behaviour_t955675639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1158329972_H
#ifndef DONE_MOVER_T3207174306_H
#define DONE_MOVER_T3207174306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_Mover
struct  Done_Mover_t3207174306  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Done_Mover::speed
	float ___speed_2;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Done_Mover_t3207174306, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_MOVER_T3207174306_H
#ifndef DONE_DESTROYBYCONTACT_T866731992_H
#define DONE_DESTROYBYCONTACT_T866731992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_DestroyByContact
struct  Done_DestroyByContact_t866731992  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Done_DestroyByContact::explosion
	GameObject_t1756533147 * ___explosion_2;
	// UnityEngine.GameObject Done_DestroyByContact::playerExplosion
	GameObject_t1756533147 * ___playerExplosion_3;
	// System.Int32 Done_DestroyByContact::scoreValue
	int32_t ___scoreValue_4;
	// Done_GameController Done_DestroyByContact::gameController
	Done_GameController_t2490533223 * ___gameController_5;

public:
	inline static int32_t get_offset_of_explosion_2() { return static_cast<int32_t>(offsetof(Done_DestroyByContact_t866731992, ___explosion_2)); }
	inline GameObject_t1756533147 * get_explosion_2() const { return ___explosion_2; }
	inline GameObject_t1756533147 ** get_address_of_explosion_2() { return &___explosion_2; }
	inline void set_explosion_2(GameObject_t1756533147 * value)
	{
		___explosion_2 = value;
		Il2CppCodeGenWriteBarrier((&___explosion_2), value);
	}

	inline static int32_t get_offset_of_playerExplosion_3() { return static_cast<int32_t>(offsetof(Done_DestroyByContact_t866731992, ___playerExplosion_3)); }
	inline GameObject_t1756533147 * get_playerExplosion_3() const { return ___playerExplosion_3; }
	inline GameObject_t1756533147 ** get_address_of_playerExplosion_3() { return &___playerExplosion_3; }
	inline void set_playerExplosion_3(GameObject_t1756533147 * value)
	{
		___playerExplosion_3 = value;
		Il2CppCodeGenWriteBarrier((&___playerExplosion_3), value);
	}

	inline static int32_t get_offset_of_scoreValue_4() { return static_cast<int32_t>(offsetof(Done_DestroyByContact_t866731992, ___scoreValue_4)); }
	inline int32_t get_scoreValue_4() const { return ___scoreValue_4; }
	inline int32_t* get_address_of_scoreValue_4() { return &___scoreValue_4; }
	inline void set_scoreValue_4(int32_t value)
	{
		___scoreValue_4 = value;
	}

	inline static int32_t get_offset_of_gameController_5() { return static_cast<int32_t>(offsetof(Done_DestroyByContact_t866731992, ___gameController_5)); }
	inline Done_GameController_t2490533223 * get_gameController_5() const { return ___gameController_5; }
	inline Done_GameController_t2490533223 ** get_address_of_gameController_5() { return &___gameController_5; }
	inline void set_gameController_5(Done_GameController_t2490533223 * value)
	{
		___gameController_5 = value;
		Il2CppCodeGenWriteBarrier((&___gameController_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_DESTROYBYCONTACT_T866731992_H
#ifndef DONE_BGSCROLLER_T1955972008_H
#define DONE_BGSCROLLER_T1955972008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_BGScroller
struct  Done_BGScroller_t1955972008  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Done_BGScroller::scrollSpeed
	float ___scrollSpeed_2;
	// System.Single Done_BGScroller::tileSizeZ
	float ___tileSizeZ_3;
	// UnityEngine.Vector3 Done_BGScroller::startPosition
	Vector3_t2243707580  ___startPosition_4;

public:
	inline static int32_t get_offset_of_scrollSpeed_2() { return static_cast<int32_t>(offsetof(Done_BGScroller_t1955972008, ___scrollSpeed_2)); }
	inline float get_scrollSpeed_2() const { return ___scrollSpeed_2; }
	inline float* get_address_of_scrollSpeed_2() { return &___scrollSpeed_2; }
	inline void set_scrollSpeed_2(float value)
	{
		___scrollSpeed_2 = value;
	}

	inline static int32_t get_offset_of_tileSizeZ_3() { return static_cast<int32_t>(offsetof(Done_BGScroller_t1955972008, ___tileSizeZ_3)); }
	inline float get_tileSizeZ_3() const { return ___tileSizeZ_3; }
	inline float* get_address_of_tileSizeZ_3() { return &___tileSizeZ_3; }
	inline void set_tileSizeZ_3(float value)
	{
		___tileSizeZ_3 = value;
	}

	inline static int32_t get_offset_of_startPosition_4() { return static_cast<int32_t>(offsetof(Done_BGScroller_t1955972008, ___startPosition_4)); }
	inline Vector3_t2243707580  get_startPosition_4() const { return ___startPosition_4; }
	inline Vector3_t2243707580 * get_address_of_startPosition_4() { return &___startPosition_4; }
	inline void set_startPosition_4(Vector3_t2243707580  value)
	{
		___startPosition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_BGSCROLLER_T1955972008_H
#ifndef DONE_EVASIVEMANEUVER_T2572524317_H
#define DONE_EVASIVEMANEUVER_T2572524317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_EvasiveManeuver
struct  Done_EvasiveManeuver_t2572524317  : public MonoBehaviour_t1158329972
{
public:
	// Done_Boundary Done_EvasiveManeuver::boundary
	Done_Boundary_t381809497 * ___boundary_2;
	// System.Single Done_EvasiveManeuver::tilt
	float ___tilt_3;
	// System.Single Done_EvasiveManeuver::dodge
	float ___dodge_4;
	// System.Single Done_EvasiveManeuver::smoothing
	float ___smoothing_5;
	// UnityEngine.Vector2 Done_EvasiveManeuver::startWait
	Vector2_t2243707579  ___startWait_6;
	// UnityEngine.Vector2 Done_EvasiveManeuver::maneuverTime
	Vector2_t2243707579  ___maneuverTime_7;
	// UnityEngine.Vector2 Done_EvasiveManeuver::maneuverWait
	Vector2_t2243707579  ___maneuverWait_8;
	// System.Single Done_EvasiveManeuver::currentSpeed
	float ___currentSpeed_9;
	// System.Single Done_EvasiveManeuver::targetManeuver
	float ___targetManeuver_10;

public:
	inline static int32_t get_offset_of_boundary_2() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t2572524317, ___boundary_2)); }
	inline Done_Boundary_t381809497 * get_boundary_2() const { return ___boundary_2; }
	inline Done_Boundary_t381809497 ** get_address_of_boundary_2() { return &___boundary_2; }
	inline void set_boundary_2(Done_Boundary_t381809497 * value)
	{
		___boundary_2 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_2), value);
	}

	inline static int32_t get_offset_of_tilt_3() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t2572524317, ___tilt_3)); }
	inline float get_tilt_3() const { return ___tilt_3; }
	inline float* get_address_of_tilt_3() { return &___tilt_3; }
	inline void set_tilt_3(float value)
	{
		___tilt_3 = value;
	}

	inline static int32_t get_offset_of_dodge_4() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t2572524317, ___dodge_4)); }
	inline float get_dodge_4() const { return ___dodge_4; }
	inline float* get_address_of_dodge_4() { return &___dodge_4; }
	inline void set_dodge_4(float value)
	{
		___dodge_4 = value;
	}

	inline static int32_t get_offset_of_smoothing_5() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t2572524317, ___smoothing_5)); }
	inline float get_smoothing_5() const { return ___smoothing_5; }
	inline float* get_address_of_smoothing_5() { return &___smoothing_5; }
	inline void set_smoothing_5(float value)
	{
		___smoothing_5 = value;
	}

	inline static int32_t get_offset_of_startWait_6() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t2572524317, ___startWait_6)); }
	inline Vector2_t2243707579  get_startWait_6() const { return ___startWait_6; }
	inline Vector2_t2243707579 * get_address_of_startWait_6() { return &___startWait_6; }
	inline void set_startWait_6(Vector2_t2243707579  value)
	{
		___startWait_6 = value;
	}

	inline static int32_t get_offset_of_maneuverTime_7() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t2572524317, ___maneuverTime_7)); }
	inline Vector2_t2243707579  get_maneuverTime_7() const { return ___maneuverTime_7; }
	inline Vector2_t2243707579 * get_address_of_maneuverTime_7() { return &___maneuverTime_7; }
	inline void set_maneuverTime_7(Vector2_t2243707579  value)
	{
		___maneuverTime_7 = value;
	}

	inline static int32_t get_offset_of_maneuverWait_8() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t2572524317, ___maneuverWait_8)); }
	inline Vector2_t2243707579  get_maneuverWait_8() const { return ___maneuverWait_8; }
	inline Vector2_t2243707579 * get_address_of_maneuverWait_8() { return &___maneuverWait_8; }
	inline void set_maneuverWait_8(Vector2_t2243707579  value)
	{
		___maneuverWait_8 = value;
	}

	inline static int32_t get_offset_of_currentSpeed_9() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t2572524317, ___currentSpeed_9)); }
	inline float get_currentSpeed_9() const { return ___currentSpeed_9; }
	inline float* get_address_of_currentSpeed_9() { return &___currentSpeed_9; }
	inline void set_currentSpeed_9(float value)
	{
		___currentSpeed_9 = value;
	}

	inline static int32_t get_offset_of_targetManeuver_10() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t2572524317, ___targetManeuver_10)); }
	inline float get_targetManeuver_10() const { return ___targetManeuver_10; }
	inline float* get_address_of_targetManeuver_10() { return &___targetManeuver_10; }
	inline void set_targetManeuver_10(float value)
	{
		___targetManeuver_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_EVASIVEMANEUVER_T2572524317_H
#ifndef DONE_DESTROYBYTIME_T1767105437_H
#define DONE_DESTROYBYTIME_T1767105437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_DestroyByTime
struct  Done_DestroyByTime_t1767105437  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Done_DestroyByTime::lifetime
	float ___lifetime_2;

public:
	inline static int32_t get_offset_of_lifetime_2() { return static_cast<int32_t>(offsetof(Done_DestroyByTime_t1767105437, ___lifetime_2)); }
	inline float get_lifetime_2() const { return ___lifetime_2; }
	inline float* get_address_of_lifetime_2() { return &___lifetime_2; }
	inline void set_lifetime_2(float value)
	{
		___lifetime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_DESTROYBYTIME_T1767105437_H
#ifndef DONE_GAMECONTROLLER_T2490533223_H
#define DONE_GAMECONTROLLER_T2490533223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_GameController
struct  Done_GameController_t2490533223  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] Done_GameController::hazards
	GameObjectU5BU5D_t3057952154* ___hazards_2;
	// UnityEngine.Vector3 Done_GameController::spawnValues
	Vector3_t2243707580  ___spawnValues_3;
	// System.Int32 Done_GameController::hazardCount
	int32_t ___hazardCount_4;
	// System.Single Done_GameController::spawnWait
	float ___spawnWait_5;
	// System.Single Done_GameController::startWait
	float ___startWait_6;
	// System.Single Done_GameController::waveWait
	float ___waveWait_7;
	// UnityEngine.GUIText Done_GameController::scoreText
	GUIText_t2411476300 * ___scoreText_8;
	// UnityEngine.GUIText Done_GameController::restartText
	GUIText_t2411476300 * ___restartText_9;
	// UnityEngine.GUIText Done_GameController::gameOverText
	GUIText_t2411476300 * ___gameOverText_10;
	// System.Boolean Done_GameController::gameOver
	bool ___gameOver_11;
	// System.Boolean Done_GameController::restart
	bool ___restart_12;
	// System.Int32 Done_GameController::score
	int32_t ___score_13;

public:
	inline static int32_t get_offset_of_hazards_2() { return static_cast<int32_t>(offsetof(Done_GameController_t2490533223, ___hazards_2)); }
	inline GameObjectU5BU5D_t3057952154* get_hazards_2() const { return ___hazards_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_hazards_2() { return &___hazards_2; }
	inline void set_hazards_2(GameObjectU5BU5D_t3057952154* value)
	{
		___hazards_2 = value;
		Il2CppCodeGenWriteBarrier((&___hazards_2), value);
	}

	inline static int32_t get_offset_of_spawnValues_3() { return static_cast<int32_t>(offsetof(Done_GameController_t2490533223, ___spawnValues_3)); }
	inline Vector3_t2243707580  get_spawnValues_3() const { return ___spawnValues_3; }
	inline Vector3_t2243707580 * get_address_of_spawnValues_3() { return &___spawnValues_3; }
	inline void set_spawnValues_3(Vector3_t2243707580  value)
	{
		___spawnValues_3 = value;
	}

	inline static int32_t get_offset_of_hazardCount_4() { return static_cast<int32_t>(offsetof(Done_GameController_t2490533223, ___hazardCount_4)); }
	inline int32_t get_hazardCount_4() const { return ___hazardCount_4; }
	inline int32_t* get_address_of_hazardCount_4() { return &___hazardCount_4; }
	inline void set_hazardCount_4(int32_t value)
	{
		___hazardCount_4 = value;
	}

	inline static int32_t get_offset_of_spawnWait_5() { return static_cast<int32_t>(offsetof(Done_GameController_t2490533223, ___spawnWait_5)); }
	inline float get_spawnWait_5() const { return ___spawnWait_5; }
	inline float* get_address_of_spawnWait_5() { return &___spawnWait_5; }
	inline void set_spawnWait_5(float value)
	{
		___spawnWait_5 = value;
	}

	inline static int32_t get_offset_of_startWait_6() { return static_cast<int32_t>(offsetof(Done_GameController_t2490533223, ___startWait_6)); }
	inline float get_startWait_6() const { return ___startWait_6; }
	inline float* get_address_of_startWait_6() { return &___startWait_6; }
	inline void set_startWait_6(float value)
	{
		___startWait_6 = value;
	}

	inline static int32_t get_offset_of_waveWait_7() { return static_cast<int32_t>(offsetof(Done_GameController_t2490533223, ___waveWait_7)); }
	inline float get_waveWait_7() const { return ___waveWait_7; }
	inline float* get_address_of_waveWait_7() { return &___waveWait_7; }
	inline void set_waveWait_7(float value)
	{
		___waveWait_7 = value;
	}

	inline static int32_t get_offset_of_scoreText_8() { return static_cast<int32_t>(offsetof(Done_GameController_t2490533223, ___scoreText_8)); }
	inline GUIText_t2411476300 * get_scoreText_8() const { return ___scoreText_8; }
	inline GUIText_t2411476300 ** get_address_of_scoreText_8() { return &___scoreText_8; }
	inline void set_scoreText_8(GUIText_t2411476300 * value)
	{
		___scoreText_8 = value;
		Il2CppCodeGenWriteBarrier((&___scoreText_8), value);
	}

	inline static int32_t get_offset_of_restartText_9() { return static_cast<int32_t>(offsetof(Done_GameController_t2490533223, ___restartText_9)); }
	inline GUIText_t2411476300 * get_restartText_9() const { return ___restartText_9; }
	inline GUIText_t2411476300 ** get_address_of_restartText_9() { return &___restartText_9; }
	inline void set_restartText_9(GUIText_t2411476300 * value)
	{
		___restartText_9 = value;
		Il2CppCodeGenWriteBarrier((&___restartText_9), value);
	}

	inline static int32_t get_offset_of_gameOverText_10() { return static_cast<int32_t>(offsetof(Done_GameController_t2490533223, ___gameOverText_10)); }
	inline GUIText_t2411476300 * get_gameOverText_10() const { return ___gameOverText_10; }
	inline GUIText_t2411476300 ** get_address_of_gameOverText_10() { return &___gameOverText_10; }
	inline void set_gameOverText_10(GUIText_t2411476300 * value)
	{
		___gameOverText_10 = value;
		Il2CppCodeGenWriteBarrier((&___gameOverText_10), value);
	}

	inline static int32_t get_offset_of_gameOver_11() { return static_cast<int32_t>(offsetof(Done_GameController_t2490533223, ___gameOver_11)); }
	inline bool get_gameOver_11() const { return ___gameOver_11; }
	inline bool* get_address_of_gameOver_11() { return &___gameOver_11; }
	inline void set_gameOver_11(bool value)
	{
		___gameOver_11 = value;
	}

	inline static int32_t get_offset_of_restart_12() { return static_cast<int32_t>(offsetof(Done_GameController_t2490533223, ___restart_12)); }
	inline bool get_restart_12() const { return ___restart_12; }
	inline bool* get_address_of_restart_12() { return &___restart_12; }
	inline void set_restart_12(bool value)
	{
		___restart_12 = value;
	}

	inline static int32_t get_offset_of_score_13() { return static_cast<int32_t>(offsetof(Done_GameController_t2490533223, ___score_13)); }
	inline int32_t get_score_13() const { return ___score_13; }
	inline int32_t* get_address_of_score_13() { return &___score_13; }
	inline void set_score_13(int32_t value)
	{
		___score_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_GAMECONTROLLER_T2490533223_H
#ifndef DONE_DESTROYBYBOUNDARY_T1508105942_H
#define DONE_DESTROYBYBOUNDARY_T1508105942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_DestroyByBoundary
struct  Done_DestroyByBoundary_t1508105942  : public MonoBehaviour_t1158329972
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_DESTROYBYBOUNDARY_T1508105942_H
#ifndef DESTROYBYCONTACT_T3397533383_H
#define DESTROYBYCONTACT_T3397533383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyByContact
struct  DestroyByContact_t3397533383  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject DestroyByContact::explosion
	GameObject_t1756533147 * ___explosion_2;
	// UnityEngine.GameObject DestroyByContact::playerExplosion
	GameObject_t1756533147 * ___playerExplosion_3;
	// System.Int32 DestroyByContact::scoreValue
	int32_t ___scoreValue_4;
	// GameController DestroyByContact::gameController
	GameController_t3607102586 * ___gameController_5;

public:
	inline static int32_t get_offset_of_explosion_2() { return static_cast<int32_t>(offsetof(DestroyByContact_t3397533383, ___explosion_2)); }
	inline GameObject_t1756533147 * get_explosion_2() const { return ___explosion_2; }
	inline GameObject_t1756533147 ** get_address_of_explosion_2() { return &___explosion_2; }
	inline void set_explosion_2(GameObject_t1756533147 * value)
	{
		___explosion_2 = value;
		Il2CppCodeGenWriteBarrier((&___explosion_2), value);
	}

	inline static int32_t get_offset_of_playerExplosion_3() { return static_cast<int32_t>(offsetof(DestroyByContact_t3397533383, ___playerExplosion_3)); }
	inline GameObject_t1756533147 * get_playerExplosion_3() const { return ___playerExplosion_3; }
	inline GameObject_t1756533147 ** get_address_of_playerExplosion_3() { return &___playerExplosion_3; }
	inline void set_playerExplosion_3(GameObject_t1756533147 * value)
	{
		___playerExplosion_3 = value;
		Il2CppCodeGenWriteBarrier((&___playerExplosion_3), value);
	}

	inline static int32_t get_offset_of_scoreValue_4() { return static_cast<int32_t>(offsetof(DestroyByContact_t3397533383, ___scoreValue_4)); }
	inline int32_t get_scoreValue_4() const { return ___scoreValue_4; }
	inline int32_t* get_address_of_scoreValue_4() { return &___scoreValue_4; }
	inline void set_scoreValue_4(int32_t value)
	{
		___scoreValue_4 = value;
	}

	inline static int32_t get_offset_of_gameController_5() { return static_cast<int32_t>(offsetof(DestroyByContact_t3397533383, ___gameController_5)); }
	inline GameController_t3607102586 * get_gameController_5() const { return ___gameController_5; }
	inline GameController_t3607102586 ** get_address_of_gameController_5() { return &___gameController_5; }
	inline void set_gameController_5(GameController_t3607102586 * value)
	{
		___gameController_5 = value;
		Il2CppCodeGenWriteBarrier((&___gameController_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTROYBYCONTACT_T3397533383_H
#ifndef BACKGROUNDSCROLLER_T1801434474_H
#define BACKGROUNDSCROLLER_T1801434474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackgroundScroller
struct  BackgroundScroller_t1801434474  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BackgroundScroller::scrollSpeed
	float ___scrollSpeed_2;
	// System.Single BackgroundScroller::tileSizeZ
	float ___tileSizeZ_3;
	// UnityEngine.Vector3 BackgroundScroller::startPosition
	Vector3_t2243707580  ___startPosition_4;

public:
	inline static int32_t get_offset_of_scrollSpeed_2() { return static_cast<int32_t>(offsetof(BackgroundScroller_t1801434474, ___scrollSpeed_2)); }
	inline float get_scrollSpeed_2() const { return ___scrollSpeed_2; }
	inline float* get_address_of_scrollSpeed_2() { return &___scrollSpeed_2; }
	inline void set_scrollSpeed_2(float value)
	{
		___scrollSpeed_2 = value;
	}

	inline static int32_t get_offset_of_tileSizeZ_3() { return static_cast<int32_t>(offsetof(BackgroundScroller_t1801434474, ___tileSizeZ_3)); }
	inline float get_tileSizeZ_3() const { return ___tileSizeZ_3; }
	inline float* get_address_of_tileSizeZ_3() { return &___tileSizeZ_3; }
	inline void set_tileSizeZ_3(float value)
	{
		___tileSizeZ_3 = value;
	}

	inline static int32_t get_offset_of_startPosition_4() { return static_cast<int32_t>(offsetof(BackgroundScroller_t1801434474, ___startPosition_4)); }
	inline Vector3_t2243707580  get_startPosition_4() const { return ___startPosition_4; }
	inline Vector3_t2243707580 * get_address_of_startPosition_4() { return &___startPosition_4; }
	inline void set_startPosition_4(Vector3_t2243707580  value)
	{
		___startPosition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKGROUNDSCROLLER_T1801434474_H
#ifndef DESTROYBYBOUNDARY_T3535450619_H
#define DESTROYBYBOUNDARY_T3535450619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyByBoundary
struct  DestroyByBoundary_t3535450619  : public MonoBehaviour_t1158329972
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTROYBYBOUNDARY_T3535450619_H
#ifndef BOLTMOVER_T4131329840_H
#define BOLTMOVER_T4131329840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoltMover
struct  BoltMover_t4131329840  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BoltMover::speed
	float ___speed_2;
	// UnityEngine.Rigidbody BoltMover::rb
	Rigidbody_t4233889191 * ___rb_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(BoltMover_t4131329840, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(BoltMover_t4131329840, ___rb_3)); }
	inline Rigidbody_t4233889191 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody_t4233889191 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier((&___rb_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOLTMOVER_T4131329840_H
#ifndef DESTROYBYTIME_T1319923286_H
#define DESTROYBYTIME_T1319923286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyByTime
struct  DestroyByTime_t1319923286  : public MonoBehaviour_t1158329972
{
public:
	// System.Single DestroyByTime::lifetime
	float ___lifetime_2;

public:
	inline static int32_t get_offset_of_lifetime_2() { return static_cast<int32_t>(offsetof(DestroyByTime_t1319923286, ___lifetime_2)); }
	inline float get_lifetime_2() const { return ___lifetime_2; }
	inline float* get_address_of_lifetime_2() { return &___lifetime_2; }
	inline void set_lifetime_2(float value)
	{
		___lifetime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTROYBYTIME_T1319923286_H
#ifndef DONE_PLAYERCONTROLLER_T1238573128_H
#define DONE_PLAYERCONTROLLER_T1238573128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_PlayerController
struct  Done_PlayerController_t1238573128  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Done_PlayerController::speed
	float ___speed_2;
	// System.Single Done_PlayerController::tilt
	float ___tilt_3;
	// Done_Boundary Done_PlayerController::boundary
	Done_Boundary_t381809497 * ___boundary_4;
	// UnityEngine.GameObject Done_PlayerController::shot
	GameObject_t1756533147 * ___shot_5;
	// UnityEngine.Transform Done_PlayerController::shotSpawn
	Transform_t3275118058 * ___shotSpawn_6;
	// System.Single Done_PlayerController::fireRate
	float ___fireRate_7;
	// System.Single Done_PlayerController::nextFire
	float ___nextFire_8;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1238573128, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_tilt_3() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1238573128, ___tilt_3)); }
	inline float get_tilt_3() const { return ___tilt_3; }
	inline float* get_address_of_tilt_3() { return &___tilt_3; }
	inline void set_tilt_3(float value)
	{
		___tilt_3 = value;
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1238573128, ___boundary_4)); }
	inline Done_Boundary_t381809497 * get_boundary_4() const { return ___boundary_4; }
	inline Done_Boundary_t381809497 ** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(Done_Boundary_t381809497 * value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_4), value);
	}

	inline static int32_t get_offset_of_shot_5() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1238573128, ___shot_5)); }
	inline GameObject_t1756533147 * get_shot_5() const { return ___shot_5; }
	inline GameObject_t1756533147 ** get_address_of_shot_5() { return &___shot_5; }
	inline void set_shot_5(GameObject_t1756533147 * value)
	{
		___shot_5 = value;
		Il2CppCodeGenWriteBarrier((&___shot_5), value);
	}

	inline static int32_t get_offset_of_shotSpawn_6() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1238573128, ___shotSpawn_6)); }
	inline Transform_t3275118058 * get_shotSpawn_6() const { return ___shotSpawn_6; }
	inline Transform_t3275118058 ** get_address_of_shotSpawn_6() { return &___shotSpawn_6; }
	inline void set_shotSpawn_6(Transform_t3275118058 * value)
	{
		___shotSpawn_6 = value;
		Il2CppCodeGenWriteBarrier((&___shotSpawn_6), value);
	}

	inline static int32_t get_offset_of_fireRate_7() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1238573128, ___fireRate_7)); }
	inline float get_fireRate_7() const { return ___fireRate_7; }
	inline float* get_address_of_fireRate_7() { return &___fireRate_7; }
	inline void set_fireRate_7(float value)
	{
		___fireRate_7 = value;
	}

	inline static int32_t get_offset_of_nextFire_8() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1238573128, ___nextFire_8)); }
	inline float get_nextFire_8() const { return ___nextFire_8; }
	inline float* get_address_of_nextFire_8() { return &___nextFire_8; }
	inline void set_nextFire_8(float value)
	{
		___nextFire_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_PLAYERCONTROLLER_T1238573128_H
#ifndef DONE_WEAPONCONTROLLER_T1887556875_H
#define DONE_WEAPONCONTROLLER_T1887556875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_WeaponController
struct  Done_WeaponController_t1887556875  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Done_WeaponController::shot
	GameObject_t1756533147 * ___shot_2;
	// UnityEngine.Transform Done_WeaponController::shotSpawn
	Transform_t3275118058 * ___shotSpawn_3;
	// System.Single Done_WeaponController::fireRate
	float ___fireRate_4;
	// System.Single Done_WeaponController::delay
	float ___delay_5;

public:
	inline static int32_t get_offset_of_shot_2() { return static_cast<int32_t>(offsetof(Done_WeaponController_t1887556875, ___shot_2)); }
	inline GameObject_t1756533147 * get_shot_2() const { return ___shot_2; }
	inline GameObject_t1756533147 ** get_address_of_shot_2() { return &___shot_2; }
	inline void set_shot_2(GameObject_t1756533147 * value)
	{
		___shot_2 = value;
		Il2CppCodeGenWriteBarrier((&___shot_2), value);
	}

	inline static int32_t get_offset_of_shotSpawn_3() { return static_cast<int32_t>(offsetof(Done_WeaponController_t1887556875, ___shotSpawn_3)); }
	inline Transform_t3275118058 * get_shotSpawn_3() const { return ___shotSpawn_3; }
	inline Transform_t3275118058 ** get_address_of_shotSpawn_3() { return &___shotSpawn_3; }
	inline void set_shotSpawn_3(Transform_t3275118058 * value)
	{
		___shotSpawn_3 = value;
		Il2CppCodeGenWriteBarrier((&___shotSpawn_3), value);
	}

	inline static int32_t get_offset_of_fireRate_4() { return static_cast<int32_t>(offsetof(Done_WeaponController_t1887556875, ___fireRate_4)); }
	inline float get_fireRate_4() const { return ___fireRate_4; }
	inline float* get_address_of_fireRate_4() { return &___fireRate_4; }
	inline void set_fireRate_4(float value)
	{
		___fireRate_4 = value;
	}

	inline static int32_t get_offset_of_delay_5() { return static_cast<int32_t>(offsetof(Done_WeaponController_t1887556875, ___delay_5)); }
	inline float get_delay_5() const { return ___delay_5; }
	inline float* get_address_of_delay_5() { return &___delay_5; }
	inline void set_delay_5(float value)
	{
		___delay_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_WEAPONCONTROLLER_T1887556875_H
#ifndef DONE_RANDOMROTATOR_T4185270575_H
#define DONE_RANDOMROTATOR_T4185270575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_RandomRotator
struct  Done_RandomRotator_t4185270575  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Done_RandomRotator::tumble
	float ___tumble_2;

public:
	inline static int32_t get_offset_of_tumble_2() { return static_cast<int32_t>(offsetof(Done_RandomRotator_t4185270575, ___tumble_2)); }
	inline float get_tumble_2() const { return ___tumble_2; }
	inline float* get_address_of_tumble_2() { return &___tumble_2; }
	inline void set_tumble_2(float value)
	{
		___tumble_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_RANDOMROTATOR_T4185270575_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1300 = { sizeof (Ray_t2469606224)+ sizeof (RuntimeObject), sizeof(Ray_t2469606224 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1300[2] = 
{
	Ray_t2469606224::get_offset_of_m_Origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ray_t2469606224::get_offset_of_m_Direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1301 = { sizeof (Rect_t3681755626)+ sizeof (RuntimeObject), sizeof(Rect_t3681755626 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1301[4] = 
{
	Rect_t3681755626::get_offset_of_m_XMin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3681755626::get_offset_of_m_YMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3681755626::get_offset_of_m_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3681755626::get_offset_of_m_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1302 = { sizeof (SerializePrivateVariables_t2241034664), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1303 = { sizeof (SerializeField_t3073427462), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1304 = { sizeof (PreferBinarySerialization_t2472773525), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1305 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1306 = { sizeof (StackTraceUtility_t1881293839), -1, sizeof(StackTraceUtility_t1881293839_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1306[1] = 
{
	StackTraceUtility_t1881293839_StaticFields::get_offset_of_projectFolder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1307 = { sizeof (UnityException_t2687879050), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1307[2] = 
{
	0,
	UnityException_t2687879050::get_offset_of_unityStackTrace_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1308 = { sizeof (PersistentListenerMode_t857969000)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1308[8] = 
{
	PersistentListenerMode_t857969000::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1309 = { sizeof (ArgumentCache_t4810721), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1309[6] = 
{
	ArgumentCache_t4810721::get_offset_of_m_ObjectArgument_0(),
	ArgumentCache_t4810721::get_offset_of_m_ObjectArgumentAssemblyTypeName_1(),
	ArgumentCache_t4810721::get_offset_of_m_IntArgument_2(),
	ArgumentCache_t4810721::get_offset_of_m_FloatArgument_3(),
	ArgumentCache_t4810721::get_offset_of_m_StringArgument_4(),
	ArgumentCache_t4810721::get_offset_of_m_BoolArgument_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1310 = { sizeof (BaseInvokableCall_t2229564840), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1311 = { sizeof (InvokableCall_t2183506063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1311[1] = 
{
	InvokableCall_t2183506063::get_offset_of_Delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1312 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1312[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1313 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1313[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1314 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1314[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1315 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1315[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1316 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1316[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1317 = { sizeof (UnityEventCallState_t3420894182)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1317[4] = 
{
	UnityEventCallState_t3420894182::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1318 = { sizeof (PersistentCall_t3793436469), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1318[5] = 
{
	PersistentCall_t3793436469::get_offset_of_m_Target_0(),
	PersistentCall_t3793436469::get_offset_of_m_MethodName_1(),
	PersistentCall_t3793436469::get_offset_of_m_Mode_2(),
	PersistentCall_t3793436469::get_offset_of_m_Arguments_3(),
	PersistentCall_t3793436469::get_offset_of_m_CallState_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1319 = { sizeof (PersistentCallGroup_t339478082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1319[1] = 
{
	PersistentCallGroup_t339478082::get_offset_of_m_Calls_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1320 = { sizeof (InvokableCallList_t2295673753), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1320[4] = 
{
	InvokableCallList_t2295673753::get_offset_of_m_PersistentCalls_0(),
	InvokableCallList_t2295673753::get_offset_of_m_RuntimeCalls_1(),
	InvokableCallList_t2295673753::get_offset_of_m_ExecutingCalls_2(),
	InvokableCallList_t2295673753::get_offset_of_m_NeedsUpdate_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1321 = { sizeof (UnityEventBase_t828812576), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1321[4] = 
{
	UnityEventBase_t828812576::get_offset_of_m_Calls_0(),
	UnityEventBase_t828812576::get_offset_of_m_PersistentCalls_1(),
	UnityEventBase_t828812576::get_offset_of_m_TypeName_2(),
	UnityEventBase_t828812576::get_offset_of_m_CallsDirty_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1322 = { sizeof (UnityAction_t4025899511), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1323 = { sizeof (UnityEvent_t408735097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1323[1] = 
{
	UnityEvent_t408735097::get_offset_of_m_InvokeArray_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1324 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1325 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1325[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1326 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1327 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1327[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1328 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1329 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1329[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1330 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1331 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1331[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1332 = { sizeof (UnityString_t276356480), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1333 = { sizeof (UnitySynchronizationContext_t1205147244), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1333[1] = 
{
	UnitySynchronizationContext_t1205147244::get_offset_of_m_AsyncWorkQueue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1334 = { sizeof (WorkRequest_t1154022482)+ sizeof (RuntimeObject), sizeof(WorkRequest_t1154022482_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1334[2] = 
{
	WorkRequest_t1154022482::get_offset_of_m_DelagateCallback_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WorkRequest_t1154022482::get_offset_of_m_DelagateState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1335 = { sizeof (Vector2_t2243707579)+ sizeof (RuntimeObject), sizeof(Vector2_t2243707579 ), sizeof(Vector2_t2243707579_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1335[11] = 
{
	Vector2_t2243707579::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t2243707579::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t2243707579_StaticFields::get_offset_of_zeroVector_2(),
	Vector2_t2243707579_StaticFields::get_offset_of_oneVector_3(),
	Vector2_t2243707579_StaticFields::get_offset_of_upVector_4(),
	Vector2_t2243707579_StaticFields::get_offset_of_downVector_5(),
	Vector2_t2243707579_StaticFields::get_offset_of_leftVector_6(),
	Vector2_t2243707579_StaticFields::get_offset_of_rightVector_7(),
	Vector2_t2243707579_StaticFields::get_offset_of_positiveInfinityVector_8(),
	Vector2_t2243707579_StaticFields::get_offset_of_negativeInfinityVector_9(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1336 = { sizeof (ThreadAndSerializationSafeAttribute_t4226409784), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1337 = { sizeof (ReadOnlyAttribute_t689702060), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1338 = { sizeof (ReadWriteAttribute_t3403607913), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1339 = { sizeof (WriteOnlyAttribute_t14323075), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1340 = { sizeof (DeallocateOnJobCompletionAttribute_t987733588), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1341 = { sizeof (NativeContainerAttribute_t269240268), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1342 = { sizeof (NativeContainerSupportsAtomicWriteAttribute_t3267933728), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1343 = { sizeof (NativeContainerSupportsMinMaxWriteRestrictionAttribute_t1288953595), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1344 = { sizeof (FrameData_t2278136573)+ sizeof (RuntimeObject), sizeof(FrameData_t2278136573 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1344[6] = 
{
	FrameData_t2278136573::get_offset_of_m_FrameID_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t2278136573::get_offset_of_m_DeltaTime_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t2278136573::get_offset_of_m_Weight_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t2278136573::get_offset_of_m_EffectiveWeight_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t2278136573::get_offset_of_m_EffectiveSpeed_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t2278136573::get_offset_of_m_Flags_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1345 = { sizeof (Flags_t2137338071)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1345[5] = 
{
	Flags_t2137338071::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1346 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1347 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1348 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1349 = { sizeof (PlayableBinding_t2498078091)+ sizeof (RuntimeObject), -1, sizeof(PlayableBinding_t2498078091_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1349[6] = 
{
	PlayableBinding_t2498078091_StaticFields::get_offset_of_None_0(),
	PlayableBinding_t2498078091_StaticFields::get_offset_of_DefaultDuration_1(),
	PlayableBinding_t2498078091::get_offset_of_U3CstreamNameU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t2498078091::get_offset_of_U3CstreamTypeU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t2498078091::get_offset_of_U3CsourceObjectU3Ek__BackingField_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t2498078091::get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1350 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1351 = { sizeof (PlayableAsset_t2298101656), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1352 = { sizeof (PlayableBehaviour_t2517866383), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1353 = { sizeof (PlayableExtensions_t2358977238), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1354 = { sizeof (ScriptPlayableOutput_t1666207618)+ sizeof (RuntimeObject), sizeof(ScriptPlayableOutput_t1666207618 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1354[1] = 
{
	ScriptPlayableOutput_t1666207618::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1355 = { sizeof (DefaultValueAttribute_t1027170048), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1355[1] = 
{
	DefaultValueAttribute_t1027170048::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1356 = { sizeof (ExcludeFromDocsAttribute_t665825653), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1357 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1358 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1359 = { sizeof (Logger_t3328995178), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1359[3] = 
{
	Logger_t3328995178::get_offset_of_U3ClogHandlerU3Ek__BackingField_0(),
	Logger_t3328995178::get_offset_of_U3ClogEnabledU3Ek__BackingField_1(),
	Logger_t3328995178::get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1360 = { sizeof (MessageEventArgs_t301283622), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1360[2] = 
{
	MessageEventArgs_t301283622::get_offset_of_playerId_0(),
	MessageEventArgs_t301283622::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1361 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1362 = { sizeof (PlayerConnection_t3517219175), -1, sizeof(PlayerConnection_t3517219175_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1362[3] = 
{
	PlayerConnection_t3517219175::get_offset_of_m_PlayerEditorConnectionEvents_2(),
	PlayerConnection_t3517219175::get_offset_of_m_connectedPlayers_3(),
	PlayerConnection_t3517219175_StaticFields::get_offset_of_s_Instance_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1363 = { sizeof (PlayerEditorConnectionEvents_t2252784345), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1363[3] = 
{
	PlayerEditorConnectionEvents_t2252784345::get_offset_of_messageTypeSubscribers_0(),
	PlayerEditorConnectionEvents_t2252784345::get_offset_of_connectionEvent_1(),
	PlayerEditorConnectionEvents_t2252784345::get_offset_of_disconnectionEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1364 = { sizeof (MessageEvent_t2167079021), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1365 = { sizeof (ConnectionChangeEvent_t536719976), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1366 = { sizeof (MessageTypeSubscribers_t2291506050), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1366[3] = 
{
	MessageTypeSubscribers_t2291506050::get_offset_of_m_messageTypeId_0(),
	MessageTypeSubscribers_t2291506050::get_offset_of_subscriberCount_1(),
	MessageTypeSubscribers_t2291506050::get_offset_of_messageCallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1367 = { sizeof (U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t1899782350), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1367[1] = 
{
	U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t1899782350::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1368 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1369 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1370 = { sizeof (RenderPipelineManager_t984453155), -1, sizeof(RenderPipelineManager_t984453155_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1370[2] = 
{
	RenderPipelineManager_t984453155_StaticFields::get_offset_of_s_CurrentPipelineAsset_0(),
	RenderPipelineManager_t984453155_StaticFields::get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1371 = { sizeof (UsedByNativeCodeAttribute_t3212052468), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1372 = { sizeof (RequiredByNativeCodeAttribute_t1913052472), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1373 = { sizeof (FormerlySerializedAsAttribute_t3673080018), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1373[1] = 
{
	FormerlySerializedAsAttribute_t3673080018::get_offset_of_m_oldName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1374 = { sizeof (TypeInferenceRules_t1810425448)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1374[5] = 
{
	TypeInferenceRules_t1810425448::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1375 = { sizeof (TypeInferenceRuleAttribute_t1390152093), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1375[1] = 
{
	TypeInferenceRuleAttribute_t1390152093::get_offset_of__rule_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1376 = { sizeof (NetFxCoreExtensions_t4275971970), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1377 = { sizeof (CSSMeasureFunc_t2092170507), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1378 = { sizeof (CSSMeasureMode_t2118763144)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1378[4] = 
{
	CSSMeasureMode_t2118763144::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1379 = { sizeof (CSSSize_t1564391216)+ sizeof (RuntimeObject), sizeof(CSSSize_t1564391216 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1379[2] = 
{
	CSSSize_t1564391216::get_offset_of_width_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CSSSize_t1564391216::get_offset_of_height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1380 = { sizeof (Native_t2308112383), -1, sizeof(Native_t2308112383_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1380[1] = 
{
	Native_t2308112383_StaticFields::get_offset_of_s_MeasureFunctions_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1381 = { sizeof (U3CModuleU3E_t3783534219), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1382 = { sizeof (Done_BGScroller_t1955972008), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1382[3] = 
{
	Done_BGScroller_t1955972008::get_offset_of_scrollSpeed_2(),
	Done_BGScroller_t1955972008::get_offset_of_tileSizeZ_3(),
	Done_BGScroller_t1955972008::get_offset_of_startPosition_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1383 = { sizeof (Done_DestroyByBoundary_t1508105942), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1384 = { sizeof (Done_DestroyByContact_t866731992), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1384[4] = 
{
	Done_DestroyByContact_t866731992::get_offset_of_explosion_2(),
	Done_DestroyByContact_t866731992::get_offset_of_playerExplosion_3(),
	Done_DestroyByContact_t866731992::get_offset_of_scoreValue_4(),
	Done_DestroyByContact_t866731992::get_offset_of_gameController_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1385 = { sizeof (Done_DestroyByTime_t1767105437), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1385[1] = 
{
	Done_DestroyByTime_t1767105437::get_offset_of_lifetime_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1386 = { sizeof (Done_EvasiveManeuver_t2572524317), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1386[9] = 
{
	Done_EvasiveManeuver_t2572524317::get_offset_of_boundary_2(),
	Done_EvasiveManeuver_t2572524317::get_offset_of_tilt_3(),
	Done_EvasiveManeuver_t2572524317::get_offset_of_dodge_4(),
	Done_EvasiveManeuver_t2572524317::get_offset_of_smoothing_5(),
	Done_EvasiveManeuver_t2572524317::get_offset_of_startWait_6(),
	Done_EvasiveManeuver_t2572524317::get_offset_of_maneuverTime_7(),
	Done_EvasiveManeuver_t2572524317::get_offset_of_maneuverWait_8(),
	Done_EvasiveManeuver_t2572524317::get_offset_of_currentSpeed_9(),
	Done_EvasiveManeuver_t2572524317::get_offset_of_targetManeuver_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1387 = { sizeof (U3CEvadeU3Ec__Iterator0_t1651935502), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1387[4] = 
{
	U3CEvadeU3Ec__Iterator0_t1651935502::get_offset_of_U24this_0(),
	U3CEvadeU3Ec__Iterator0_t1651935502::get_offset_of_U24current_1(),
	U3CEvadeU3Ec__Iterator0_t1651935502::get_offset_of_U24disposing_2(),
	U3CEvadeU3Ec__Iterator0_t1651935502::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1388 = { sizeof (Done_GameController_t2490533223), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1388[12] = 
{
	Done_GameController_t2490533223::get_offset_of_hazards_2(),
	Done_GameController_t2490533223::get_offset_of_spawnValues_3(),
	Done_GameController_t2490533223::get_offset_of_hazardCount_4(),
	Done_GameController_t2490533223::get_offset_of_spawnWait_5(),
	Done_GameController_t2490533223::get_offset_of_startWait_6(),
	Done_GameController_t2490533223::get_offset_of_waveWait_7(),
	Done_GameController_t2490533223::get_offset_of_scoreText_8(),
	Done_GameController_t2490533223::get_offset_of_restartText_9(),
	Done_GameController_t2490533223::get_offset_of_gameOverText_10(),
	Done_GameController_t2490533223::get_offset_of_gameOver_11(),
	Done_GameController_t2490533223::get_offset_of_restart_12(),
	Done_GameController_t2490533223::get_offset_of_score_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1389 = { sizeof (U3CSpawnWavesU3Ec__Iterator0_t3736144616), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1389[8] = 
{
	U3CSpawnWavesU3Ec__Iterator0_t3736144616::get_offset_of_U3CiU3E__1_0(),
	U3CSpawnWavesU3Ec__Iterator0_t3736144616::get_offset_of_U3ChazardU3E__2_1(),
	U3CSpawnWavesU3Ec__Iterator0_t3736144616::get_offset_of_U3CspawnPositionU3E__2_2(),
	U3CSpawnWavesU3Ec__Iterator0_t3736144616::get_offset_of_U3CspawnRotationU3E__2_3(),
	U3CSpawnWavesU3Ec__Iterator0_t3736144616::get_offset_of_U24this_4(),
	U3CSpawnWavesU3Ec__Iterator0_t3736144616::get_offset_of_U24current_5(),
	U3CSpawnWavesU3Ec__Iterator0_t3736144616::get_offset_of_U24disposing_6(),
	U3CSpawnWavesU3Ec__Iterator0_t3736144616::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1390 = { sizeof (Done_Mover_t3207174306), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1390[1] = 
{
	Done_Mover_t3207174306::get_offset_of_speed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1391 = { sizeof (Done_Boundary_t381809497), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1391[4] = 
{
	Done_Boundary_t381809497::get_offset_of_xMin_0(),
	Done_Boundary_t381809497::get_offset_of_xMax_1(),
	Done_Boundary_t381809497::get_offset_of_zMin_2(),
	Done_Boundary_t381809497::get_offset_of_zMax_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1392 = { sizeof (Done_PlayerController_t1238573128), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1392[7] = 
{
	Done_PlayerController_t1238573128::get_offset_of_speed_2(),
	Done_PlayerController_t1238573128::get_offset_of_tilt_3(),
	Done_PlayerController_t1238573128::get_offset_of_boundary_4(),
	Done_PlayerController_t1238573128::get_offset_of_shot_5(),
	Done_PlayerController_t1238573128::get_offset_of_shotSpawn_6(),
	Done_PlayerController_t1238573128::get_offset_of_fireRate_7(),
	Done_PlayerController_t1238573128::get_offset_of_nextFire_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1393 = { sizeof (Done_RandomRotator_t4185270575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1393[1] = 
{
	Done_RandomRotator_t4185270575::get_offset_of_tumble_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1394 = { sizeof (Done_WeaponController_t1887556875), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1394[4] = 
{
	Done_WeaponController_t1887556875::get_offset_of_shot_2(),
	Done_WeaponController_t1887556875::get_offset_of_shotSpawn_3(),
	Done_WeaponController_t1887556875::get_offset_of_fireRate_4(),
	Done_WeaponController_t1887556875::get_offset_of_delay_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1395 = { sizeof (BackgroundScroller_t1801434474), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1395[3] = 
{
	BackgroundScroller_t1801434474::get_offset_of_scrollSpeed_2(),
	BackgroundScroller_t1801434474::get_offset_of_tileSizeZ_3(),
	BackgroundScroller_t1801434474::get_offset_of_startPosition_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1396 = { sizeof (BoltMover_t4131329840), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1396[2] = 
{
	BoltMover_t4131329840::get_offset_of_speed_2(),
	BoltMover_t4131329840::get_offset_of_rb_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1397 = { sizeof (DestroyByBoundary_t3535450619), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1398 = { sizeof (DestroyByContact_t3397533383), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1398[4] = 
{
	DestroyByContact_t3397533383::get_offset_of_explosion_2(),
	DestroyByContact_t3397533383::get_offset_of_playerExplosion_3(),
	DestroyByContact_t3397533383::get_offset_of_scoreValue_4(),
	DestroyByContact_t3397533383::get_offset_of_gameController_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1399 = { sizeof (DestroyByTime_t1319923286), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1399[1] = 
{
	DestroyByTime_t1319923286::get_offset_of_lifetime_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
