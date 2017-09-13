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

// System.String
struct String_t;
// EvasiveManeuver
struct EvasiveManeuver_t2450347856;
// System.Void
struct Void_t1841601450;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// GameController
struct GameController_t3607102586;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// Readme/Section[]
struct SectionU5BU5D_t1354457079;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// Boundary
struct Boundary_t1794889402;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GUIText
struct GUIText_t2411476300;




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
#ifndef POWERUPS_T3467769239_H
#define POWERUPS_T3467769239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUps
struct  PowerUps_t3467769239  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POWERUPS_T3467769239_H
#ifndef BOUNDARY_T1794889402_H
#define BOUNDARY_T1794889402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boundary
struct  Boundary_t1794889402  : public RuntimeObject
{
public:
	// System.Single Boundary::xMin
	float ___xMin_0;
	// System.Single Boundary::xMax
	float ___xMax_1;
	// System.Single Boundary::zMin
	float ___zMin_2;
	// System.Single Boundary::zMax
	float ___zMax_3;

public:
	inline static int32_t get_offset_of_xMin_0() { return static_cast<int32_t>(offsetof(Boundary_t1794889402, ___xMin_0)); }
	inline float get_xMin_0() const { return ___xMin_0; }
	inline float* get_address_of_xMin_0() { return &___xMin_0; }
	inline void set_xMin_0(float value)
	{
		___xMin_0 = value;
	}

	inline static int32_t get_offset_of_xMax_1() { return static_cast<int32_t>(offsetof(Boundary_t1794889402, ___xMax_1)); }
	inline float get_xMax_1() const { return ___xMax_1; }
	inline float* get_address_of_xMax_1() { return &___xMax_1; }
	inline void set_xMax_1(float value)
	{
		___xMax_1 = value;
	}

	inline static int32_t get_offset_of_zMin_2() { return static_cast<int32_t>(offsetof(Boundary_t1794889402, ___zMin_2)); }
	inline float get_zMin_2() const { return ___zMin_2; }
	inline float* get_address_of_zMin_2() { return &___zMin_2; }
	inline void set_zMin_2(float value)
	{
		___zMin_2 = value;
	}

	inline static int32_t get_offset_of_zMax_3() { return static_cast<int32_t>(offsetof(Boundary_t1794889402, ___zMax_3)); }
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
#endif // BOUNDARY_T1794889402_H
#ifndef SECTION_T1120322242_H
#define SECTION_T1120322242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Readme/Section
struct  Section_t1120322242  : public RuntimeObject
{
public:
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_t1120322242, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((&___heading_0), value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_t1120322242, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((&___text_1), value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_t1120322242, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((&___linkText_2), value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_t1120322242, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((&___url_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECTION_T1120322242_H
#ifndef U3CEVADEU3EC__ITERATOR0_T584229805_H
#define U3CEVADEU3EC__ITERATOR0_T584229805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EvasiveManeuver/<Evade>c__Iterator0
struct  U3CEvadeU3Ec__Iterator0_t584229805  : public RuntimeObject
{
public:
	// System.Boolean EvasiveManeuver/<Evade>c__Iterator0::<isAggressive>__1
	bool ___U3CisAggressiveU3E__1_0;
	// EvasiveManeuver EvasiveManeuver/<Evade>c__Iterator0::$this
	EvasiveManeuver_t2450347856 * ___U24this_1;
	// System.Object EvasiveManeuver/<Evade>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean EvasiveManeuver/<Evade>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 EvasiveManeuver/<Evade>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CisAggressiveU3E__1_0() { return static_cast<int32_t>(offsetof(U3CEvadeU3Ec__Iterator0_t584229805, ___U3CisAggressiveU3E__1_0)); }
	inline bool get_U3CisAggressiveU3E__1_0() const { return ___U3CisAggressiveU3E__1_0; }
	inline bool* get_address_of_U3CisAggressiveU3E__1_0() { return &___U3CisAggressiveU3E__1_0; }
	inline void set_U3CisAggressiveU3E__1_0(bool value)
	{
		___U3CisAggressiveU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CEvadeU3Ec__Iterator0_t584229805, ___U24this_1)); }
	inline EvasiveManeuver_t2450347856 * get_U24this_1() const { return ___U24this_1; }
	inline EvasiveManeuver_t2450347856 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(EvasiveManeuver_t2450347856 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CEvadeU3Ec__Iterator0_t584229805, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CEvadeU3Ec__Iterator0_t584229805, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CEvadeU3Ec__Iterator0_t584229805, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CEVADEU3EC__ITERATOR0_T584229805_H
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
#ifndef U3CSPAWNWAVESU3EC__ITERATOR0_T495518909_H
#define U3CSPAWNWAVESU3EC__ITERATOR0_T495518909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<SpawnWaves>c__Iterator0
struct  U3CSpawnWavesU3Ec__Iterator0_t495518909  : public RuntimeObject
{
public:
	// System.Int32 GameController/<SpawnWaves>c__Iterator0::<i>__1
	int32_t ___U3CiU3E__1_0;
	// UnityEngine.GameObject GameController/<SpawnWaves>c__Iterator0::<hazard>__2
	GameObject_t1756533147 * ___U3ChazardU3E__2_1;
	// UnityEngine.Vector3 GameController/<SpawnWaves>c__Iterator0::<spawnPosition>__2
	Vector3_t2243707580  ___U3CspawnPositionU3E__2_2;
	// UnityEngine.Quaternion GameController/<SpawnWaves>c__Iterator0::<spawnRotation>__2
	Quaternion_t4030073918  ___U3CspawnRotationU3E__2_3;
	// GameController GameController/<SpawnWaves>c__Iterator0::$this
	GameController_t3607102586 * ___U24this_4;
	// System.Object GameController/<SpawnWaves>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean GameController/<SpawnWaves>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 GameController/<SpawnWaves>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CiU3E__1_0() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t495518909, ___U3CiU3E__1_0)); }
	inline int32_t get_U3CiU3E__1_0() const { return ___U3CiU3E__1_0; }
	inline int32_t* get_address_of_U3CiU3E__1_0() { return &___U3CiU3E__1_0; }
	inline void set_U3CiU3E__1_0(int32_t value)
	{
		___U3CiU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U3ChazardU3E__2_1() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t495518909, ___U3ChazardU3E__2_1)); }
	inline GameObject_t1756533147 * get_U3ChazardU3E__2_1() const { return ___U3ChazardU3E__2_1; }
	inline GameObject_t1756533147 ** get_address_of_U3ChazardU3E__2_1() { return &___U3ChazardU3E__2_1; }
	inline void set_U3ChazardU3E__2_1(GameObject_t1756533147 * value)
	{
		___U3ChazardU3E__2_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3ChazardU3E__2_1), value);
	}

	inline static int32_t get_offset_of_U3CspawnPositionU3E__2_2() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t495518909, ___U3CspawnPositionU3E__2_2)); }
	inline Vector3_t2243707580  get_U3CspawnPositionU3E__2_2() const { return ___U3CspawnPositionU3E__2_2; }
	inline Vector3_t2243707580 * get_address_of_U3CspawnPositionU3E__2_2() { return &___U3CspawnPositionU3E__2_2; }
	inline void set_U3CspawnPositionU3E__2_2(Vector3_t2243707580  value)
	{
		___U3CspawnPositionU3E__2_2 = value;
	}

	inline static int32_t get_offset_of_U3CspawnRotationU3E__2_3() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t495518909, ___U3CspawnRotationU3E__2_3)); }
	inline Quaternion_t4030073918  get_U3CspawnRotationU3E__2_3() const { return ___U3CspawnRotationU3E__2_3; }
	inline Quaternion_t4030073918 * get_address_of_U3CspawnRotationU3E__2_3() { return &___U3CspawnRotationU3E__2_3; }
	inline void set_U3CspawnRotationU3E__2_3(Quaternion_t4030073918  value)
	{
		___U3CspawnRotationU3E__2_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t495518909, ___U24this_4)); }
	inline GameController_t3607102586 * get_U24this_4() const { return ___U24this_4; }
	inline GameController_t3607102586 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(GameController_t3607102586 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t495518909, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t495518909, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t495518909, ___U24PC_7)); }
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
#endif // U3CSPAWNWAVESU3EC__ITERATOR0_T495518909_H
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
#ifndef README_T795099402_H
#define README_T795099402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Readme
struct  Readme_t795099402  : public ScriptableObject_t1975622470
{
public:
	// UnityEngine.Texture2D Readme::icon
	Texture2D_t3542995729 * ___icon_2;
	// System.String Readme::title
	String_t* ___title_3;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t1354457079* ___sections_4;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_5;

public:
	inline static int32_t get_offset_of_icon_2() { return static_cast<int32_t>(offsetof(Readme_t795099402, ___icon_2)); }
	inline Texture2D_t3542995729 * get_icon_2() const { return ___icon_2; }
	inline Texture2D_t3542995729 ** get_address_of_icon_2() { return &___icon_2; }
	inline void set_icon_2(Texture2D_t3542995729 * value)
	{
		___icon_2 = value;
		Il2CppCodeGenWriteBarrier((&___icon_2), value);
	}

	inline static int32_t get_offset_of_title_3() { return static_cast<int32_t>(offsetof(Readme_t795099402, ___title_3)); }
	inline String_t* get_title_3() const { return ___title_3; }
	inline String_t** get_address_of_title_3() { return &___title_3; }
	inline void set_title_3(String_t* value)
	{
		___title_3 = value;
		Il2CppCodeGenWriteBarrier((&___title_3), value);
	}

	inline static int32_t get_offset_of_sections_4() { return static_cast<int32_t>(offsetof(Readme_t795099402, ___sections_4)); }
	inline SectionU5BU5D_t1354457079* get_sections_4() const { return ___sections_4; }
	inline SectionU5BU5D_t1354457079** get_address_of_sections_4() { return &___sections_4; }
	inline void set_sections_4(SectionU5BU5D_t1354457079* value)
	{
		___sections_4 = value;
		Il2CppCodeGenWriteBarrier((&___sections_4), value);
	}

	inline static int32_t get_offset_of_loadedLayout_5() { return static_cast<int32_t>(offsetof(Readme_t795099402, ___loadedLayout_5)); }
	inline bool get_loadedLayout_5() const { return ___loadedLayout_5; }
	inline bool* get_address_of_loadedLayout_5() { return &___loadedLayout_5; }
	inline void set_loadedLayout_5(bool value)
	{
		___loadedLayout_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // README_T795099402_H
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
#ifndef WEAPONCONTROLLER_T2952407768_H
#define WEAPONCONTROLLER_T2952407768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WeaponController
struct  WeaponController_t2952407768  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject WeaponController::shot
	GameObject_t1756533147 * ___shot_2;
	// UnityEngine.Transform WeaponController::shotSpawn
	Transform_t3275118058 * ___shotSpawn_3;
	// System.Single WeaponController::fireRate
	float ___fireRate_4;
	// System.Single WeaponController::delay
	float ___delay_5;
	// UnityEngine.AudioSource WeaponController::audioSource
	AudioSource_t1135106623 * ___audioSource_6;

public:
	inline static int32_t get_offset_of_shot_2() { return static_cast<int32_t>(offsetof(WeaponController_t2952407768, ___shot_2)); }
	inline GameObject_t1756533147 * get_shot_2() const { return ___shot_2; }
	inline GameObject_t1756533147 ** get_address_of_shot_2() { return &___shot_2; }
	inline void set_shot_2(GameObject_t1756533147 * value)
	{
		___shot_2 = value;
		Il2CppCodeGenWriteBarrier((&___shot_2), value);
	}

	inline static int32_t get_offset_of_shotSpawn_3() { return static_cast<int32_t>(offsetof(WeaponController_t2952407768, ___shotSpawn_3)); }
	inline Transform_t3275118058 * get_shotSpawn_3() const { return ___shotSpawn_3; }
	inline Transform_t3275118058 ** get_address_of_shotSpawn_3() { return &___shotSpawn_3; }
	inline void set_shotSpawn_3(Transform_t3275118058 * value)
	{
		___shotSpawn_3 = value;
		Il2CppCodeGenWriteBarrier((&___shotSpawn_3), value);
	}

	inline static int32_t get_offset_of_fireRate_4() { return static_cast<int32_t>(offsetof(WeaponController_t2952407768, ___fireRate_4)); }
	inline float get_fireRate_4() const { return ___fireRate_4; }
	inline float* get_address_of_fireRate_4() { return &___fireRate_4; }
	inline void set_fireRate_4(float value)
	{
		___fireRate_4 = value;
	}

	inline static int32_t get_offset_of_delay_5() { return static_cast<int32_t>(offsetof(WeaponController_t2952407768, ___delay_5)); }
	inline float get_delay_5() const { return ___delay_5; }
	inline float* get_address_of_delay_5() { return &___delay_5; }
	inline void set_delay_5(float value)
	{
		___delay_5 = value;
	}

	inline static int32_t get_offset_of_audioSource_6() { return static_cast<int32_t>(offsetof(WeaponController_t2952407768, ___audioSource_6)); }
	inline AudioSource_t1135106623 * get_audioSource_6() const { return ___audioSource_6; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_6() { return &___audioSource_6; }
	inline void set_audioSource_6(AudioSource_t1135106623 * value)
	{
		___audioSource_6 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAPONCONTROLLER_T2952407768_H
#ifndef EVASIVEMANEUVER_T2450347856_H
#define EVASIVEMANEUVER_T2450347856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EvasiveManeuver
struct  EvasiveManeuver_t2450347856  : public MonoBehaviour_t1158329972
{
public:
	// System.Single EvasiveManeuver::dodge
	float ___dodge_2;
	// System.Single EvasiveManeuver::smoothing
	float ___smoothing_3;
	// System.Single EvasiveManeuver::xTilt
	float ___xTilt_4;
	// UnityEngine.Vector2 EvasiveManeuver::startWait
	Vector2_t2243707579  ___startWait_5;
	// UnityEngine.Vector2 EvasiveManeuver::maneuverTime
	Vector2_t2243707579  ___maneuverTime_6;
	// UnityEngine.Vector2 EvasiveManeuver::maneuverWait
	Vector2_t2243707579  ___maneuverWait_7;
	// Boundary EvasiveManeuver::boundary
	Boundary_t1794889402 * ___boundary_8;
	// UnityEngine.Transform EvasiveManeuver::playerTransform
	Transform_t3275118058 * ___playerTransform_9;
	// System.Single EvasiveManeuver::currentSpeed
	float ___currentSpeed_10;
	// System.Single EvasiveManeuver::targetManeuver
	float ___targetManeuver_11;
	// UnityEngine.Rigidbody EvasiveManeuver::rb
	Rigidbody_t4233889191 * ___rb_12;

public:
	inline static int32_t get_offset_of_dodge_2() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t2450347856, ___dodge_2)); }
	inline float get_dodge_2() const { return ___dodge_2; }
	inline float* get_address_of_dodge_2() { return &___dodge_2; }
	inline void set_dodge_2(float value)
	{
		___dodge_2 = value;
	}

	inline static int32_t get_offset_of_smoothing_3() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t2450347856, ___smoothing_3)); }
	inline float get_smoothing_3() const { return ___smoothing_3; }
	inline float* get_address_of_smoothing_3() { return &___smoothing_3; }
	inline void set_smoothing_3(float value)
	{
		___smoothing_3 = value;
	}

	inline static int32_t get_offset_of_xTilt_4() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t2450347856, ___xTilt_4)); }
	inline float get_xTilt_4() const { return ___xTilt_4; }
	inline float* get_address_of_xTilt_4() { return &___xTilt_4; }
	inline void set_xTilt_4(float value)
	{
		___xTilt_4 = value;
	}

	inline static int32_t get_offset_of_startWait_5() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t2450347856, ___startWait_5)); }
	inline Vector2_t2243707579  get_startWait_5() const { return ___startWait_5; }
	inline Vector2_t2243707579 * get_address_of_startWait_5() { return &___startWait_5; }
	inline void set_startWait_5(Vector2_t2243707579  value)
	{
		___startWait_5 = value;
	}

	inline static int32_t get_offset_of_maneuverTime_6() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t2450347856, ___maneuverTime_6)); }
	inline Vector2_t2243707579  get_maneuverTime_6() const { return ___maneuverTime_6; }
	inline Vector2_t2243707579 * get_address_of_maneuverTime_6() { return &___maneuverTime_6; }
	inline void set_maneuverTime_6(Vector2_t2243707579  value)
	{
		___maneuverTime_6 = value;
	}

	inline static int32_t get_offset_of_maneuverWait_7() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t2450347856, ___maneuverWait_7)); }
	inline Vector2_t2243707579  get_maneuverWait_7() const { return ___maneuverWait_7; }
	inline Vector2_t2243707579 * get_address_of_maneuverWait_7() { return &___maneuverWait_7; }
	inline void set_maneuverWait_7(Vector2_t2243707579  value)
	{
		___maneuverWait_7 = value;
	}

	inline static int32_t get_offset_of_boundary_8() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t2450347856, ___boundary_8)); }
	inline Boundary_t1794889402 * get_boundary_8() const { return ___boundary_8; }
	inline Boundary_t1794889402 ** get_address_of_boundary_8() { return &___boundary_8; }
	inline void set_boundary_8(Boundary_t1794889402 * value)
	{
		___boundary_8 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_8), value);
	}

	inline static int32_t get_offset_of_playerTransform_9() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t2450347856, ___playerTransform_9)); }
	inline Transform_t3275118058 * get_playerTransform_9() const { return ___playerTransform_9; }
	inline Transform_t3275118058 ** get_address_of_playerTransform_9() { return &___playerTransform_9; }
	inline void set_playerTransform_9(Transform_t3275118058 * value)
	{
		___playerTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___playerTransform_9), value);
	}

	inline static int32_t get_offset_of_currentSpeed_10() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t2450347856, ___currentSpeed_10)); }
	inline float get_currentSpeed_10() const { return ___currentSpeed_10; }
	inline float* get_address_of_currentSpeed_10() { return &___currentSpeed_10; }
	inline void set_currentSpeed_10(float value)
	{
		___currentSpeed_10 = value;
	}

	inline static int32_t get_offset_of_targetManeuver_11() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t2450347856, ___targetManeuver_11)); }
	inline float get_targetManeuver_11() const { return ___targetManeuver_11; }
	inline float* get_address_of_targetManeuver_11() { return &___targetManeuver_11; }
	inline void set_targetManeuver_11(float value)
	{
		___targetManeuver_11 = value;
	}

	inline static int32_t get_offset_of_rb_12() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t2450347856, ___rb_12)); }
	inline Rigidbody_t4233889191 * get_rb_12() const { return ___rb_12; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_12() { return &___rb_12; }
	inline void set_rb_12(Rigidbody_t4233889191 * value)
	{
		___rb_12 = value;
		Il2CppCodeGenWriteBarrier((&___rb_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVASIVEMANEUVER_T2450347856_H
#ifndef PLAYERCONTROLLER_T4148409433_H
#define PLAYERCONTROLLER_T4148409433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// Boundary PlayerController::boundary
	Boundary_t1794889402 * ___boundary_2;
	// System.Single PlayerController::speed
	float ___speed_3;
	// System.Single PlayerController::xTilt
	float ___xTilt_4;
	// System.Single PlayerController::zTilt
	float ___zTilt_5;
	// UnityEngine.GameObject PlayerController::shot
	GameObject_t1756533147 * ___shot_6;
	// UnityEngine.Transform[] PlayerController::shotSpawns
	TransformU5BU5D_t3764228911* ___shotSpawns_7;
	// System.Single PlayerController::fireRate
	float ___fireRate_8;
	// System.Single PlayerController::nextFire
	float ___nextFire_9;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t4233889191 * ___rb_10;
	// UnityEngine.AudioSource PlayerController::boltAudio
	AudioSource_t1135106623 * ___boltAudio_11;
	// GameController PlayerController::gameController
	GameController_t3607102586 * ___gameController_12;

public:
	inline static int32_t get_offset_of_boundary_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___boundary_2)); }
	inline Boundary_t1794889402 * get_boundary_2() const { return ___boundary_2; }
	inline Boundary_t1794889402 ** get_address_of_boundary_2() { return &___boundary_2; }
	inline void set_boundary_2(Boundary_t1794889402 * value)
	{
		___boundary_2 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_2), value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_xTilt_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___xTilt_4)); }
	inline float get_xTilt_4() const { return ___xTilt_4; }
	inline float* get_address_of_xTilt_4() { return &___xTilt_4; }
	inline void set_xTilt_4(float value)
	{
		___xTilt_4 = value;
	}

	inline static int32_t get_offset_of_zTilt_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___zTilt_5)); }
	inline float get_zTilt_5() const { return ___zTilt_5; }
	inline float* get_address_of_zTilt_5() { return &___zTilt_5; }
	inline void set_zTilt_5(float value)
	{
		___zTilt_5 = value;
	}

	inline static int32_t get_offset_of_shot_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___shot_6)); }
	inline GameObject_t1756533147 * get_shot_6() const { return ___shot_6; }
	inline GameObject_t1756533147 ** get_address_of_shot_6() { return &___shot_6; }
	inline void set_shot_6(GameObject_t1756533147 * value)
	{
		___shot_6 = value;
		Il2CppCodeGenWriteBarrier((&___shot_6), value);
	}

	inline static int32_t get_offset_of_shotSpawns_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___shotSpawns_7)); }
	inline TransformU5BU5D_t3764228911* get_shotSpawns_7() const { return ___shotSpawns_7; }
	inline TransformU5BU5D_t3764228911** get_address_of_shotSpawns_7() { return &___shotSpawns_7; }
	inline void set_shotSpawns_7(TransformU5BU5D_t3764228911* value)
	{
		___shotSpawns_7 = value;
		Il2CppCodeGenWriteBarrier((&___shotSpawns_7), value);
	}

	inline static int32_t get_offset_of_fireRate_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___fireRate_8)); }
	inline float get_fireRate_8() const { return ___fireRate_8; }
	inline float* get_address_of_fireRate_8() { return &___fireRate_8; }
	inline void set_fireRate_8(float value)
	{
		___fireRate_8 = value;
	}

	inline static int32_t get_offset_of_nextFire_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___nextFire_9)); }
	inline float get_nextFire_9() const { return ___nextFire_9; }
	inline float* get_address_of_nextFire_9() { return &___nextFire_9; }
	inline void set_nextFire_9(float value)
	{
		___nextFire_9 = value;
	}

	inline static int32_t get_offset_of_rb_10() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___rb_10)); }
	inline Rigidbody_t4233889191 * get_rb_10() const { return ___rb_10; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_10() { return &___rb_10; }
	inline void set_rb_10(Rigidbody_t4233889191 * value)
	{
		___rb_10 = value;
		Il2CppCodeGenWriteBarrier((&___rb_10), value);
	}

	inline static int32_t get_offset_of_boltAudio_11() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___boltAudio_11)); }
	inline AudioSource_t1135106623 * get_boltAudio_11() const { return ___boltAudio_11; }
	inline AudioSource_t1135106623 ** get_address_of_boltAudio_11() { return &___boltAudio_11; }
	inline void set_boltAudio_11(AudioSource_t1135106623 * value)
	{
		___boltAudio_11 = value;
		Il2CppCodeGenWriteBarrier((&___boltAudio_11), value);
	}

	inline static int32_t get_offset_of_gameController_12() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___gameController_12)); }
	inline GameController_t3607102586 * get_gameController_12() const { return ___gameController_12; }
	inline GameController_t3607102586 ** get_address_of_gameController_12() { return &___gameController_12; }
	inline void set_gameController_12(GameController_t3607102586 * value)
	{
		___gameController_12 = value;
		Il2CppCodeGenWriteBarrier((&___gameController_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T4148409433_H
#ifndef RANDOMROTATOR_T1977862972_H
#define RANDOMROTATOR_T1977862972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomRotator
struct  RandomRotator_t1977862972  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RandomRotator::tumble
	float ___tumble_2;
	// UnityEngine.Rigidbody RandomRotator::rb
	Rigidbody_t4233889191 * ___rb_3;

public:
	inline static int32_t get_offset_of_tumble_2() { return static_cast<int32_t>(offsetof(RandomRotator_t1977862972, ___tumble_2)); }
	inline float get_tumble_2() const { return ___tumble_2; }
	inline float* get_address_of_tumble_2() { return &___tumble_2; }
	inline void set_tumble_2(float value)
	{
		___tumble_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(RandomRotator_t1977862972, ___rb_3)); }
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
#endif // RANDOMROTATOR_T1977862972_H
#ifndef GAMECONTROLLER_T3607102586_H
#define GAMECONTROLLER_T3607102586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] GameController::hazards
	GameObjectU5BU5D_t3057952154* ___hazards_2;
	// UnityEngine.Vector3 GameController::spawnValues
	Vector3_t2243707580  ___spawnValues_3;
	// System.Int32 GameController::hazardCount
	int32_t ___hazardCount_4;
	// System.Single GameController::spawnWait
	float ___spawnWait_5;
	// System.Single GameController::startWait
	float ___startWait_6;
	// System.Single GameController::waveWait
	float ___waveWait_7;
	// UnityEngine.GUIText GameController::scoreText
	GUIText_t2411476300 * ___scoreText_8;
	// UnityEngine.GUIText GameController::restartText
	GUIText_t2411476300 * ___restartText_9;
	// UnityEngine.GUIText GameController::gameOverText
	GUIText_t2411476300 * ___gameOverText_10;
	// System.Boolean GameController::isGameOver
	bool ___isGameOver_11;
	// System.Boolean GameController::isRestart
	bool ___isRestart_12;
	// System.Int32 GameController::score
	int32_t ___score_13;

public:
	inline static int32_t get_offset_of_hazards_2() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___hazards_2)); }
	inline GameObjectU5BU5D_t3057952154* get_hazards_2() const { return ___hazards_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_hazards_2() { return &___hazards_2; }
	inline void set_hazards_2(GameObjectU5BU5D_t3057952154* value)
	{
		___hazards_2 = value;
		Il2CppCodeGenWriteBarrier((&___hazards_2), value);
	}

	inline static int32_t get_offset_of_spawnValues_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___spawnValues_3)); }
	inline Vector3_t2243707580  get_spawnValues_3() const { return ___spawnValues_3; }
	inline Vector3_t2243707580 * get_address_of_spawnValues_3() { return &___spawnValues_3; }
	inline void set_spawnValues_3(Vector3_t2243707580  value)
	{
		___spawnValues_3 = value;
	}

	inline static int32_t get_offset_of_hazardCount_4() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___hazardCount_4)); }
	inline int32_t get_hazardCount_4() const { return ___hazardCount_4; }
	inline int32_t* get_address_of_hazardCount_4() { return &___hazardCount_4; }
	inline void set_hazardCount_4(int32_t value)
	{
		___hazardCount_4 = value;
	}

	inline static int32_t get_offset_of_spawnWait_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___spawnWait_5)); }
	inline float get_spawnWait_5() const { return ___spawnWait_5; }
	inline float* get_address_of_spawnWait_5() { return &___spawnWait_5; }
	inline void set_spawnWait_5(float value)
	{
		___spawnWait_5 = value;
	}

	inline static int32_t get_offset_of_startWait_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___startWait_6)); }
	inline float get_startWait_6() const { return ___startWait_6; }
	inline float* get_address_of_startWait_6() { return &___startWait_6; }
	inline void set_startWait_6(float value)
	{
		___startWait_6 = value;
	}

	inline static int32_t get_offset_of_waveWait_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___waveWait_7)); }
	inline float get_waveWait_7() const { return ___waveWait_7; }
	inline float* get_address_of_waveWait_7() { return &___waveWait_7; }
	inline void set_waveWait_7(float value)
	{
		___waveWait_7 = value;
	}

	inline static int32_t get_offset_of_scoreText_8() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___scoreText_8)); }
	inline GUIText_t2411476300 * get_scoreText_8() const { return ___scoreText_8; }
	inline GUIText_t2411476300 ** get_address_of_scoreText_8() { return &___scoreText_8; }
	inline void set_scoreText_8(GUIText_t2411476300 * value)
	{
		___scoreText_8 = value;
		Il2CppCodeGenWriteBarrier((&___scoreText_8), value);
	}

	inline static int32_t get_offset_of_restartText_9() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___restartText_9)); }
	inline GUIText_t2411476300 * get_restartText_9() const { return ___restartText_9; }
	inline GUIText_t2411476300 ** get_address_of_restartText_9() { return &___restartText_9; }
	inline void set_restartText_9(GUIText_t2411476300 * value)
	{
		___restartText_9 = value;
		Il2CppCodeGenWriteBarrier((&___restartText_9), value);
	}

	inline static int32_t get_offset_of_gameOverText_10() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___gameOverText_10)); }
	inline GUIText_t2411476300 * get_gameOverText_10() const { return ___gameOverText_10; }
	inline GUIText_t2411476300 ** get_address_of_gameOverText_10() { return &___gameOverText_10; }
	inline void set_gameOverText_10(GUIText_t2411476300 * value)
	{
		___gameOverText_10 = value;
		Il2CppCodeGenWriteBarrier((&___gameOverText_10), value);
	}

	inline static int32_t get_offset_of_isGameOver_11() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___isGameOver_11)); }
	inline bool get_isGameOver_11() const { return ___isGameOver_11; }
	inline bool* get_address_of_isGameOver_11() { return &___isGameOver_11; }
	inline void set_isGameOver_11(bool value)
	{
		___isGameOver_11 = value;
	}

	inline static int32_t get_offset_of_isRestart_12() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___isRestart_12)); }
	inline bool get_isRestart_12() const { return ___isRestart_12; }
	inline bool* get_address_of_isRestart_12() { return &___isRestart_12; }
	inline void set_isRestart_12(bool value)
	{
		___isRestart_12 = value;
	}

	inline static int32_t get_offset_of_score_13() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___score_13)); }
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
#endif // GAMECONTROLLER_T3607102586_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (EvasiveManeuver_t2450347856), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1400[11] = 
{
	EvasiveManeuver_t2450347856::get_offset_of_dodge_2(),
	EvasiveManeuver_t2450347856::get_offset_of_smoothing_3(),
	EvasiveManeuver_t2450347856::get_offset_of_xTilt_4(),
	EvasiveManeuver_t2450347856::get_offset_of_startWait_5(),
	EvasiveManeuver_t2450347856::get_offset_of_maneuverTime_6(),
	EvasiveManeuver_t2450347856::get_offset_of_maneuverWait_7(),
	EvasiveManeuver_t2450347856::get_offset_of_boundary_8(),
	EvasiveManeuver_t2450347856::get_offset_of_playerTransform_9(),
	EvasiveManeuver_t2450347856::get_offset_of_currentSpeed_10(),
	EvasiveManeuver_t2450347856::get_offset_of_targetManeuver_11(),
	EvasiveManeuver_t2450347856::get_offset_of_rb_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (U3CEvadeU3Ec__Iterator0_t584229805), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1401[5] = 
{
	U3CEvadeU3Ec__Iterator0_t584229805::get_offset_of_U3CisAggressiveU3E__1_0(),
	U3CEvadeU3Ec__Iterator0_t584229805::get_offset_of_U24this_1(),
	U3CEvadeU3Ec__Iterator0_t584229805::get_offset_of_U24current_2(),
	U3CEvadeU3Ec__Iterator0_t584229805::get_offset_of_U24disposing_3(),
	U3CEvadeU3Ec__Iterator0_t584229805::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (GameController_t3607102586), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1402[12] = 
{
	GameController_t3607102586::get_offset_of_hazards_2(),
	GameController_t3607102586::get_offset_of_spawnValues_3(),
	GameController_t3607102586::get_offset_of_hazardCount_4(),
	GameController_t3607102586::get_offset_of_spawnWait_5(),
	GameController_t3607102586::get_offset_of_startWait_6(),
	GameController_t3607102586::get_offset_of_waveWait_7(),
	GameController_t3607102586::get_offset_of_scoreText_8(),
	GameController_t3607102586::get_offset_of_restartText_9(),
	GameController_t3607102586::get_offset_of_gameOverText_10(),
	GameController_t3607102586::get_offset_of_isGameOver_11(),
	GameController_t3607102586::get_offset_of_isRestart_12(),
	GameController_t3607102586::get_offset_of_score_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (U3CSpawnWavesU3Ec__Iterator0_t495518909), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1403[8] = 
{
	U3CSpawnWavesU3Ec__Iterator0_t495518909::get_offset_of_U3CiU3E__1_0(),
	U3CSpawnWavesU3Ec__Iterator0_t495518909::get_offset_of_U3ChazardU3E__2_1(),
	U3CSpawnWavesU3Ec__Iterator0_t495518909::get_offset_of_U3CspawnPositionU3E__2_2(),
	U3CSpawnWavesU3Ec__Iterator0_t495518909::get_offset_of_U3CspawnRotationU3E__2_3(),
	U3CSpawnWavesU3Ec__Iterator0_t495518909::get_offset_of_U24this_4(),
	U3CSpawnWavesU3Ec__Iterator0_t495518909::get_offset_of_U24current_5(),
	U3CSpawnWavesU3Ec__Iterator0_t495518909::get_offset_of_U24disposing_6(),
	U3CSpawnWavesU3Ec__Iterator0_t495518909::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (PlayerController_t4148409433), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1404[11] = 
{
	PlayerController_t4148409433::get_offset_of_boundary_2(),
	PlayerController_t4148409433::get_offset_of_speed_3(),
	PlayerController_t4148409433::get_offset_of_xTilt_4(),
	PlayerController_t4148409433::get_offset_of_zTilt_5(),
	PlayerController_t4148409433::get_offset_of_shot_6(),
	PlayerController_t4148409433::get_offset_of_shotSpawns_7(),
	PlayerController_t4148409433::get_offset_of_fireRate_8(),
	PlayerController_t4148409433::get_offset_of_nextFire_9(),
	PlayerController_t4148409433::get_offset_of_rb_10(),
	PlayerController_t4148409433::get_offset_of_boltAudio_11(),
	PlayerController_t4148409433::get_offset_of_gameController_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (PowerUps_t3467769239), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1405[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (Boundary_t1794889402), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1406[4] = 
{
	Boundary_t1794889402::get_offset_of_xMin_0(),
	Boundary_t1794889402::get_offset_of_xMax_1(),
	Boundary_t1794889402::get_offset_of_zMin_2(),
	Boundary_t1794889402::get_offset_of_zMax_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (RandomRotator_t1977862972), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1407[2] = 
{
	RandomRotator_t1977862972::get_offset_of_tumble_2(),
	RandomRotator_t1977862972::get_offset_of_rb_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (WeaponController_t2952407768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1408[5] = 
{
	WeaponController_t2952407768::get_offset_of_shot_2(),
	WeaponController_t2952407768::get_offset_of_shotSpawn_3(),
	WeaponController_t2952407768::get_offset_of_fireRate_4(),
	WeaponController_t2952407768::get_offset_of_delay_5(),
	WeaponController_t2952407768::get_offset_of_audioSource_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (Readme_t795099402), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1409[4] = 
{
	Readme_t795099402::get_offset_of_icon_2(),
	Readme_t795099402::get_offset_of_title_3(),
	Readme_t795099402::get_offset_of_sections_4(),
	Readme_t795099402::get_offset_of_loadedLayout_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { sizeof (Section_t1120322242), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1410[4] = 
{
	Section_t1120322242::get_offset_of_heading_0(),
	Section_t1120322242::get_offset_of_text_1(),
	Section_t1120322242::get_offset_of_linkText_2(),
	Section_t1120322242::get_offset_of_url_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
