#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
#include "stringLiterals.h"
#include "codegen/il2cpp-codegen.h"

#include "t52.h"
#include "t7.h"
#include "t60.h"
#include "t34.h"
#include "t88.h"
#include "t53.h"
extern TypeInfo t88_TI;
#include "t52MD.h"
#include "t88MD.h"
struct t52;
extern MethodInfo m17146_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17146_MI;
extern MethodInfo m17147_MI;
struct t52;
 t7 * m17147_gshared (t52 * __this, int32_t p0, MethodInfo* method);
#define m17147(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m17147_MI;
 t7 * m17147_gshared (t52 * __this, int32_t p0, MethodInfo* method)
{
	t7 * V_0 = {0};
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t7_TI;
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17147_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t7_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17147_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t7_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17146_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Object>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17146_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17146_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17148_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17148_MI;
extern MethodInfo m17149_MI;
struct t52;
#define m17149(__this, p0, method) (t1 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<CameraScript>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t1_TI;
extern Il2CppGenericInst GenInst_t1_0_0_0;
Il2CppGenericContext m17149_GenericContext = { NULL, &GenInst_t1_0_0_0 };
extern Il2CppType t1_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17149_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t1_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17148_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<CameraScript>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1_0_0_0;
Il2CppGenericContext m17148_GenericContext = { NULL, &GenInst_t1_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17148_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t62.h"
extern TypeInfo t62_TI;
#include "t62MD.h"
extern MethodInfo m7125_MI;
extern MethodInfo m17150_MI;
struct t52;
struct t52;
 void m17151_gshared (t52 * __this, t7 * p0, MethodInfo* method);
#define m17151(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
#define m17150(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<CameraScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1_0_0_0;
Il2CppGenericContext m17150_GenericContext = { NULL, &GenInst_t1_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17150_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17151_MI;
extern MethodInfo m17151_MI;
 void m17151_gshared (t52 * __this, t7 * p0, MethodInfo* method)
{
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Object>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17151_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17151_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t55.h"
#include "t1315.h"
extern TypeInfo t1315_TI;
extern TypeInfo t1_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
#include "t776MD.h"
#include "t1315MD.h"
#include "t7MD.h"
extern MethodInfo m17148_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17148_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17152_MI;
struct t52;
struct t52;
 bool m17153_gshared (t52 * __this, t7 * p0, MethodInfo* method);
#define m17153(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
#define m17152(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<CameraScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t1_TI;
static void* m17152_RGCTXData[1] = 
{
	&t1_TI,
};
extern Il2CppGenericInst GenInst_t1_0_0_0;
Il2CppGenericContext m17152_GenericContext = { NULL, &GenInst_t1_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17152_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17152_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17146_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17146_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17153_MI;
extern MethodInfo m17153_MI;
 bool m17153_gshared (t52 * __this, t7 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t7 * V_2 = {0};
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		t7 * L_4 = p0;
		if (((t7 *)L_4))
		{
			goto IL_0041;
		}
	}
	{
		t7 * L_5 = V_2;
		if (((t7 *)L_5))
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t7 * L_6 = V_2;
		bool L_7 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, (*(&p0)), ((t7 *)L_6));
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Object>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t7_TI;
static void* m17153_RGCTXData[1] = 
{
	&t7_TI,
};
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17153_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17153_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17153_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "Assembly-CSharp_ArrayTypes.h"
#include "t87.h"
#include "t348.h"
extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
#include "t87MD.h"
#include "t348MD.h"
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17154_MI;
struct t52;
struct t52;
#include "mscorlib_ArrayTypes.h"
 void m17155_gshared (t52 * __this, t350* p0, int32_t p1, MethodInfo* method);
#define m17155(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
#define m17154(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<CameraScript>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1_0_0_0;
Il2CppGenericContext m17154_GenericContext = { NULL, &GenInst_t1_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17154_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17155_MI;
extern MethodInfo m17155_MI;
 void m17155_gshared (t52 * __this, t350* p0, int32_t p1, MethodInfo* method)
{
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral329, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t34* L_2 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_3 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_3, L_2, &m7242_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0027:
	{
		int32_t L_4 = m3833(__this, 0, &m3833_MI);
		int32_t L_5 = m3835(p0, 0, &m3835_MI);
		int32_t L_6 = m3833(p0, 0, &m3833_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t348 * L_7 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m2046(L_7, (t34*) &_stringLiteral330, &m2046_MI);
		il2cpp_codegen_raise_exception (L_7);
	}

IL_004c:
	{
		int32_t L_8 = m3831(p0, &m3831_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t34* L_9 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_10 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_10, L_9, &m7242_MI);
		il2cpp_codegen_raise_exception (L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t34* L_11 = m4015(NULL, (t34*) &_stringLiteral331, &m4015_MI);
		t88 * L_12 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6592(L_12, (t34*) &_stringLiteral326, L_11, &m6592_MI);
		il2cpp_codegen_raise_exception (L_12);
	}

IL_007e:
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		int32_t L_14 = m3833(__this, 0, &m3833_MI);
		m3878(NULL, __this, L_13, (t52 *)(t52 *)p0, p1, L_14, &m3878_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Object>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17155_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17155_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17156_MI;
struct t52;
 bool m17156_gshared (t52 * __this, t7 * p0, MethodInfo* method);
#define m17156(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
extern MethodInfo m17156_MI;
 bool m17156_gshared (t52 * __this, t7 * p0, MethodInfo* method)
{
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Object>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17156_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17156_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17146_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17146_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17157_MI;
struct t52;
 int32_t m17157_gshared (t52 * __this, t7 * p0, MethodInfo* method);
#define m17157(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
extern MethodInfo m17157_MI;
 int32_t m17157_gshared (t52 * __this, t7 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t7 * V_2 = {0};
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		t7 * L_4 = p0;
		if (((t7 *)L_4))
		{
			goto IL_0051;
		}
	}
	{
		t7 * L_5 = V_2;
		if (((t7 *)L_5))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_6 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_6));
	}

IL_0047:
	{
		int32_t L_7 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_7-1));
	}

IL_0051:
	{
		t7 * L_8 = p0;
		bool L_9 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, (*(&V_2)), ((t7 *)L_8));
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_10 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_10));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_11 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_11-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Object>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t7_TI;
static void* m17157_RGCTXData[1] = 
{
	&t7_TI,
};
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17157_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17157_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17157_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17158_MI;
struct t52;
 void m17158_gshared (t52 * __this, int32_t p0, t7 * p1, MethodInfo* method);
#define m17158(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
extern MethodInfo m17158_MI;
 void m17158_gshared (t52 * __this, int32_t p0, t7 * p1, MethodInfo* method)
{
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Object>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17158_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17158_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
struct t52;
extern MethodInfo m17159_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17159_MI;
extern MethodInfo m17160_MI;
struct t52;
 void m17160_gshared (t52 * __this, int32_t p0, t7 * p1, MethodInfo* method);
#define m17160(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
extern MethodInfo m17160_MI;
 void m17160_gshared (t52 * __this, int32_t p0, t7 * p1, MethodInfo* method)
{
	t350* V_0 = {0};
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		V_0 = ((t350*)IsInst(__this, InitializedTypeInfo(&t350_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		t7 * L_2 = p1;
		ArrayElementTypeCheck (V_0, ((t7 *)L_2));
		*((t7 **)(t7 **)SZArrayLdElema(V_0, p0)) = (t7 *)((t7 *)L_2);
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Object>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t7_TI;
static void* m17160_RGCTXData[1] = 
{
	&t7_TI,
};
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17160_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17160_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17160_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17159_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Object>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17159_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17159_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1613.h"
extern TypeInfo t1613_TI;
#include "t1613MD.h"
extern MethodInfo m7977_MI;
extern MethodInfo m17161_MI;
struct t52;
 t7* m17161_gshared (t52 * __this, MethodInfo* method);
#define m17161(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
extern MethodInfo m17161_MI;
 t7* m17161_gshared (t52 * __this, MethodInfo* method)
{
	{
		t1613  L_0 = {0};
		(( void (*) (t1613 * __this, t52 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, __this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t1613  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Object>()
extern TypeInfo t52_TI;
extern TypeInfo t64_TI;
extern TypeInfo t1613_TI;
extern MethodInfo m7977_MI;
static void* m17161_RGCTXData[2] = 
{
	&t1613_TI,
	&m7977_MI,
};
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17161_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t64_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17161_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t64_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17161_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17162_MI;
struct t52;
#define m17162(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<CameraScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t1_0_0_0;
Il2CppGenericContext m17162_GenericContext = { NULL, &GenInst_t1_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17162_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17148_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17148_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17163_MI;
struct t52;
#define m17163(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<CameraScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t1_TI;
static void* m17163_RGCTXData[1] = 
{
	&t1_TI,
};
extern Il2CppGenericInst GenInst_t1_0_0_0;
Il2CppGenericContext m17163_GenericContext = { NULL, &GenInst_t1_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17163_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17163_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17164_MI;
struct t52;
#define m17164(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<CameraScript>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1_0_0_0;
Il2CppGenericContext m17164_GenericContext = { NULL, &GenInst_t1_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17164_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t1_TI;
struct t52;
extern MethodInfo m17165_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17165_MI;
extern MethodInfo m17166_MI;
struct t52;
#define m17166(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<CameraScript>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1_TI;
static void* m17166_RGCTXData[1] = 
{
	&t1_TI,
};
extern Il2CppGenericInst GenInst_t1_0_0_0;
Il2CppGenericContext m17166_GenericContext = { NULL, &GenInst_t1_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17166_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17166_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17165_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<CameraScript>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1_0_0_0;
Il2CppGenericContext m17165_GenericContext = { NULL, &GenInst_t1_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17165_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1612.h"
extern TypeInfo t1612_TI;
#include "t1612MD.h"
extern MethodInfo m7976_MI;
extern MethodInfo m17167_MI;
struct t52;
#define m17167(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<CameraScript>()
extern TypeInfo t52_TI;
extern TypeInfo t3371_TI;
extern TypeInfo t1612_TI;
extern MethodInfo m7976_MI;
static void* m17167_RGCTXData[2] = 
{
	&t1612_TI,
	&m7976_MI,
};
extern Il2CppGenericInst GenInst_t1_0_0_0;
Il2CppGenericContext m17167_GenericContext = { NULL, &GenInst_t1_0_0_0 };
extern Il2CppType t3371_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17167_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3371_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17167_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t3.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17168_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17168_MI;
extern MethodInfo m17169_MI;
struct t52;
#define m17169(__this, p0, method) (t3 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.MonoBehaviour>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t3_TI;
extern Il2CppGenericInst GenInst_t3_0_0_0;
Il2CppGenericContext m17169_GenericContext = { NULL, &GenInst_t3_0_0_0 };
extern Il2CppType t3_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17169_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t3_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17168_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.MonoBehaviour>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t3_0_0_0;
Il2CppGenericContext m17168_GenericContext = { NULL, &GenInst_t3_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17168_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17170_MI;
struct t52;
#define m17170(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.MonoBehaviour>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t3_0_0_0;
Il2CppGenericContext m17170_GenericContext = { NULL, &GenInst_t3_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17170_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t3_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17168_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17168_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17171_MI;
struct t52;
#define m17171(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.MonoBehaviour>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t3_TI;
static void* m17171_RGCTXData[1] = 
{
	&t3_TI,
};
extern Il2CppGenericInst GenInst_t3_0_0_0;
Il2CppGenericContext m17171_GenericContext = { NULL, &GenInst_t3_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17171_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17171_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "UnityEngine_ArrayTypes.h"
extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17172_MI;
struct t52;
#define m17172(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.MonoBehaviour>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t3_0_0_0;
Il2CppGenericContext m17172_GenericContext = { NULL, &GenInst_t3_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17172_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17173_MI;
struct t52;
#define m17173(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.MonoBehaviour>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t3_0_0_0;
Il2CppGenericContext m17173_GenericContext = { NULL, &GenInst_t3_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17173_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t3_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17168_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17168_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17174_MI;
struct t52;
#define m17174(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.MonoBehaviour>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t3_TI;
static void* m17174_RGCTXData[1] = 
{
	&t3_TI,
};
extern Il2CppGenericInst GenInst_t3_0_0_0;
Il2CppGenericContext m17174_GenericContext = { NULL, &GenInst_t3_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17174_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17174_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17175_MI;
struct t52;
#define m17175(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.MonoBehaviour>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t3_0_0_0;
Il2CppGenericContext m17175_GenericContext = { NULL, &GenInst_t3_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17175_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t3_TI;
struct t52;
extern MethodInfo m17176_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17176_MI;
extern MethodInfo m17177_MI;
struct t52;
#define m17177(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.MonoBehaviour>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t3_TI;
static void* m17177_RGCTXData[1] = 
{
	&t3_TI,
};
extern Il2CppGenericInst GenInst_t3_0_0_0;
Il2CppGenericContext m17177_GenericContext = { NULL, &GenInst_t3_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17177_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17177_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17176_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.MonoBehaviour>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t3_0_0_0;
Il2CppGenericContext m17176_GenericContext = { NULL, &GenInst_t3_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17176_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1614.h"
extern TypeInfo t1614_TI;
#include "t1614MD.h"
extern MethodInfo m7986_MI;
extern MethodInfo m17178_MI;
struct t52;
#define m17178(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.MonoBehaviour>()
extern TypeInfo t52_TI;
extern TypeInfo t3372_TI;
extern TypeInfo t1614_TI;
extern MethodInfo m7986_MI;
static void* m17178_RGCTXData[2] = 
{
	&t1614_TI,
	&m7986_MI,
};
extern Il2CppGenericInst GenInst_t3_0_0_0;
Il2CppGenericContext m17178_GenericContext = { NULL, &GenInst_t3_0_0_0 };
extern Il2CppType t3372_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17178_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3372_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17178_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t82.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17179_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17179_MI;
extern MethodInfo m17180_MI;
struct t52;
#define m17180(__this, p0, method) (t82 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.Behaviour>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t82_TI;
extern Il2CppGenericInst GenInst_t82_0_0_0;
Il2CppGenericContext m17180_GenericContext = { NULL, &GenInst_t82_0_0_0 };
extern Il2CppType t82_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17180_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t82_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17179_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.Behaviour>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t82_0_0_0;
Il2CppGenericContext m17179_GenericContext = { NULL, &GenInst_t82_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17179_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17181_MI;
struct t52;
#define m17181(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.Behaviour>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t82_0_0_0;
Il2CppGenericContext m17181_GenericContext = { NULL, &GenInst_t82_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17181_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t82_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17179_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17179_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17182_MI;
struct t52;
#define m17182(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.Behaviour>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t82_TI;
static void* m17182_RGCTXData[1] = 
{
	&t82_TI,
};
extern Il2CppGenericInst GenInst_t82_0_0_0;
Il2CppGenericContext m17182_GenericContext = { NULL, &GenInst_t82_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17182_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17182_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17183_MI;
struct t52;
#define m17183(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.Behaviour>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t82_0_0_0;
Il2CppGenericContext m17183_GenericContext = { NULL, &GenInst_t82_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17183_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17184_MI;
struct t52;
#define m17184(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.Behaviour>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t82_0_0_0;
Il2CppGenericContext m17184_GenericContext = { NULL, &GenInst_t82_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17184_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t82_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17179_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17179_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17185_MI;
struct t52;
#define m17185(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.Behaviour>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t82_TI;
static void* m17185_RGCTXData[1] = 
{
	&t82_TI,
};
extern Il2CppGenericInst GenInst_t82_0_0_0;
Il2CppGenericContext m17185_GenericContext = { NULL, &GenInst_t82_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17185_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17185_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17186_MI;
struct t52;
#define m17186(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.Behaviour>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t82_0_0_0;
Il2CppGenericContext m17186_GenericContext = { NULL, &GenInst_t82_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17186_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t82_TI;
struct t52;
extern MethodInfo m17187_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17187_MI;
extern MethodInfo m17188_MI;
struct t52;
#define m17188(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.Behaviour>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t82_TI;
static void* m17188_RGCTXData[1] = 
{
	&t82_TI,
};
extern Il2CppGenericInst GenInst_t82_0_0_0;
Il2CppGenericContext m17188_GenericContext = { NULL, &GenInst_t82_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17188_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17188_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17187_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.Behaviour>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t82_0_0_0;
Il2CppGenericContext m17187_GenericContext = { NULL, &GenInst_t82_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17187_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1615.h"
extern TypeInfo t1615_TI;
#include "t1615MD.h"
extern MethodInfo m7991_MI;
extern MethodInfo m17189_MI;
struct t52;
#define m17189(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.Behaviour>()
extern TypeInfo t52_TI;
extern TypeInfo t3373_TI;
extern TypeInfo t1615_TI;
extern MethodInfo m7991_MI;
static void* m17189_RGCTXData[2] = 
{
	&t1615_TI,
	&m7991_MI,
};
extern Il2CppGenericInst GenInst_t82_0_0_0;
Il2CppGenericContext m17189_GenericContext = { NULL, &GenInst_t82_0_0_0 };
extern Il2CppType t3373_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17189_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3373_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17189_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t57.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17190_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17190_MI;
extern MethodInfo m17191_MI;
struct t52;
#define m17191(__this, p0, method) (t57 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.Component>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t57_TI;
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17191_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t57_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17191_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t57_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17190_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.Component>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17190_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17190_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17192_MI;
struct t52;
#define m17192(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.Component>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17192_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17192_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t57_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17190_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17190_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17193_MI;
struct t52;
#define m17193(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.Component>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t57_TI;
static void* m17193_RGCTXData[1] = 
{
	&t57_TI,
};
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17193_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17193_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17193_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17194_MI;
struct t52;
#define m17194(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.Component>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17194_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17194_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17195_MI;
struct t52;
#define m17195(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.Component>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17195_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17195_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t57_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17190_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17190_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17196_MI;
struct t52;
#define m17196(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.Component>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t57_TI;
static void* m17196_RGCTXData[1] = 
{
	&t57_TI,
};
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17196_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17196_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17196_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17197_MI;
struct t52;
#define m17197(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.Component>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17197_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17197_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t57_TI;
struct t52;
extern MethodInfo m17198_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17198_MI;
extern MethodInfo m17199_MI;
struct t52;
#define m17199(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.Component>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t57_TI;
static void* m17199_RGCTXData[1] = 
{
	&t57_TI,
};
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17199_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17199_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17199_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17198_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.Component>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17198_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17198_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1616.h"
extern TypeInfo t1616_TI;
#include "t1616MD.h"
extern MethodInfo m7996_MI;
extern MethodInfo m17200_MI;
struct t52;
#define m17200(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.Component>()
extern TypeInfo t52_TI;
extern TypeInfo t1810_TI;
extern TypeInfo t1616_TI;
extern MethodInfo m7996_MI;
static void* m17200_RGCTXData[2] = 
{
	&t1616_TI,
	&m7996_MI,
};
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17200_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t1810_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17200_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t1810_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17200_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t72.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17201_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17201_MI;
extern MethodInfo m17202_MI;
struct t52;
#define m17202(__this, p0, method) (t72 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.Object>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t72_TI;
extern Il2CppGenericInst GenInst_t72_0_0_0;
Il2CppGenericContext m17202_GenericContext = { NULL, &GenInst_t72_0_0_0 };
extern Il2CppType t72_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17202_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t72_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17201_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.Object>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t72_0_0_0;
Il2CppGenericContext m17201_GenericContext = { NULL, &GenInst_t72_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17201_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17203_MI;
struct t52;
#define m17203(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.Object>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t72_0_0_0;
Il2CppGenericContext m17203_GenericContext = { NULL, &GenInst_t72_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17203_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t72_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17201_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17201_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17204_MI;
struct t52;
#define m17204(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.Object>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t72_TI;
static void* m17204_RGCTXData[1] = 
{
	&t72_TI,
};
extern Il2CppGenericInst GenInst_t72_0_0_0;
Il2CppGenericContext m17204_GenericContext = { NULL, &GenInst_t72_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17204_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17204_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17205_MI;
struct t52;
#define m17205(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.Object>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t72_0_0_0;
Il2CppGenericContext m17205_GenericContext = { NULL, &GenInst_t72_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17205_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17206_MI;
struct t52;
#define m17206(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.Object>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t72_0_0_0;
Il2CppGenericContext m17206_GenericContext = { NULL, &GenInst_t72_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17206_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t72_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17201_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17201_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17207_MI;
struct t52;
#define m17207(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.Object>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t72_TI;
static void* m17207_RGCTXData[1] = 
{
	&t72_TI,
};
extern Il2CppGenericInst GenInst_t72_0_0_0;
Il2CppGenericContext m17207_GenericContext = { NULL, &GenInst_t72_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17207_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17207_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17208_MI;
struct t52;
#define m17208(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.Object>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t72_0_0_0;
Il2CppGenericContext m17208_GenericContext = { NULL, &GenInst_t72_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17208_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t72_TI;
struct t52;
extern MethodInfo m17209_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17209_MI;
extern MethodInfo m17210_MI;
struct t52;
#define m17210(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.Object>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t72_TI;
static void* m17210_RGCTXData[1] = 
{
	&t72_TI,
};
extern Il2CppGenericInst GenInst_t72_0_0_0;
Il2CppGenericContext m17210_GenericContext = { NULL, &GenInst_t72_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17210_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17210_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17209_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.Object>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t72_0_0_0;
Il2CppGenericContext m17209_GenericContext = { NULL, &GenInst_t72_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17209_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1617.h"
extern TypeInfo t1617_TI;
#include "t1617MD.h"
extern MethodInfo m8001_MI;
extern MethodInfo m17211_MI;
struct t52;
#define m17211(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.Object>()
extern TypeInfo t52_TI;
extern TypeInfo t3374_TI;
extern TypeInfo t1617_TI;
extern MethodInfo m8001_MI;
static void* m17211_RGCTXData[2] = 
{
	&t1617_TI,
	&m8001_MI,
};
extern Il2CppGenericInst GenInst_t72_0_0_0;
Il2CppGenericContext m17211_GenericContext = { NULL, &GenInst_t72_0_0_0 };
extern Il2CppType t3374_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17211_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3374_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17211_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t572.h"
#include "t70.h"
#include "t71.h"
extern TypeInfo t7_TI;
extern TypeInfo t350_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
#include "t70MD.h"
#include "t511MD.h"
extern Il2CppType t7_0_0_0;
extern MethodInfo m1555_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m2583_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m17212_MI;
struct t572;
 void m17212_gshared (t7 * __this, t7 * p0, MethodInfo* method);
#define m17212(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
extern MethodInfo m17212_MI;
 void m17212_gshared (t7 * __this, t7 * p0, MethodInfo* method)
{
	{
		if (!p0)
		{
			goto IL_003d;
		}
	}
	{
		if (((t7 *)IsInst(p0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003d;
		}
	}
	{
		t350* L_0 = ((t350*)SZArrayNew(InitializedTypeInfo(&t350_TI), 2));
		t70 * L_1 = m1555(p0, &m1555_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_1;
		t350* L_2 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
		t70 * L_3 = m1675(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)), &m1675_MI);
		ArrayElementTypeCheck (L_2, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 1)) = (t7 *)L_3;
		t34* L_4 = m2583(NULL, (t34*) &_stringLiteral193, L_2, &m2583_MI);
		t348 * L_5 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m2046(L_5, L_4, &m2046_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_003d:
	{
		return;
	}
}
// Metadata Definition System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
extern TypeInfo t572_TI;
extern TypeInfo t53_TI;
extern TypeInfo t7_TI;
extern Il2CppType t7_0_0_0;
static void* m17212_RGCTXData[2] = 
{
	&t7_TI,
	(void*)&t7_0_0_0,
};
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17212_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t572_TI;
MethodInfo m17212_MI = 
{
	"ThrowOnInvalidArg", (methodPointerType)&m17212_gshared, &t572_TI, &t53_0_0_0, NULL, NULL, NULL, 148, 0, 255, 0, false, true, 0, m17212_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern Il2CppType t1_0_0_0;
extern MethodInfo m1555_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m2583_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m17213_MI;
struct t572;
#define m17213(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<CameraScript>(System.Object)
extern TypeInfo t572_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1_TI;
extern Il2CppType t1_0_0_0;
static void* m17213_RGCTXData[2] = 
{
	&t1_TI,
	(void*)&t1_0_0_0,
};
extern Il2CppGenericInst GenInst_t1_0_0_0;
Il2CppGenericContext m17213_GenericContext = { NULL, &GenInst_t1_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t572_TI;
MethodInfo m17213_MI = 
{
	"ThrowOnInvalidArg", (methodPointerType)&m17212_gshared, &t572_TI, &t53_0_0_0, NULL, NULL, NULL, 148, 0, 255, 0, false, true, 0, m17213_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t8.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17214_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17214_MI;
extern MethodInfo m17215_MI;
struct t52;
#define m17215(__this, p0, method) (t8 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<ClickEffect>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t8_TI;
extern Il2CppGenericInst GenInst_t8_0_0_0;
Il2CppGenericContext m17215_GenericContext = { NULL, &GenInst_t8_0_0_0 };
extern Il2CppType t8_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17215_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t8_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17214_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<ClickEffect>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t8_0_0_0;
Il2CppGenericContext m17214_GenericContext = { NULL, &GenInst_t8_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17214_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17216_MI;
struct t52;
#define m17216(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<ClickEffect>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t8_0_0_0;
Il2CppGenericContext m17216_GenericContext = { NULL, &GenInst_t8_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17216_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t8_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17214_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17214_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17217_MI;
struct t52;
#define m17217(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<ClickEffect>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t8_TI;
static void* m17217_RGCTXData[1] = 
{
	&t8_TI,
};
extern Il2CppGenericInst GenInst_t8_0_0_0;
Il2CppGenericContext m17217_GenericContext = { NULL, &GenInst_t8_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17217_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17217_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17218_MI;
struct t52;
#define m17218(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<ClickEffect>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t8_0_0_0;
Il2CppGenericContext m17218_GenericContext = { NULL, &GenInst_t8_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17218_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17219_MI;
struct t52;
#define m17219(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<ClickEffect>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t8_0_0_0;
Il2CppGenericContext m17219_GenericContext = { NULL, &GenInst_t8_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17219_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t8_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17214_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17214_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17220_MI;
struct t52;
#define m17220(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<ClickEffect>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t8_TI;
static void* m17220_RGCTXData[1] = 
{
	&t8_TI,
};
extern Il2CppGenericInst GenInst_t8_0_0_0;
Il2CppGenericContext m17220_GenericContext = { NULL, &GenInst_t8_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17220_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17220_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17221_MI;
struct t52;
#define m17221(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<ClickEffect>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t8_0_0_0;
Il2CppGenericContext m17221_GenericContext = { NULL, &GenInst_t8_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17221_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t8_TI;
struct t52;
extern MethodInfo m17222_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17222_MI;
extern MethodInfo m17223_MI;
struct t52;
#define m17223(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<ClickEffect>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t8_TI;
static void* m17223_RGCTXData[1] = 
{
	&t8_TI,
};
extern Il2CppGenericInst GenInst_t8_0_0_0;
Il2CppGenericContext m17223_GenericContext = { NULL, &GenInst_t8_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17223_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17223_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17222_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<ClickEffect>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t8_0_0_0;
Il2CppGenericContext m17222_GenericContext = { NULL, &GenInst_t8_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17222_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1624.h"
extern TypeInfo t1624_TI;
#include "t1624MD.h"
extern MethodInfo m8026_MI;
extern MethodInfo m17224_MI;
struct t52;
#define m17224(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<ClickEffect>()
extern TypeInfo t52_TI;
extern TypeInfo t3375_TI;
extern TypeInfo t1624_TI;
extern MethodInfo m8026_MI;
static void* m17224_RGCTXData[2] = 
{
	&t1624_TI,
	&m8026_MI,
};
extern Il2CppGenericInst GenInst_t8_0_0_0;
Il2CppGenericContext m17224_GenericContext = { NULL, &GenInst_t8_0_0_0 };
extern Il2CppType t3375_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17224_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3375_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17224_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t8_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern Il2CppType t8_0_0_0;
extern MethodInfo m1555_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m2583_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m17225_MI;
struct t572;
#define m17225(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<ClickEffect>(System.Object)
extern TypeInfo t572_TI;
extern TypeInfo t53_TI;
extern TypeInfo t8_TI;
extern Il2CppType t8_0_0_0;
static void* m17225_RGCTXData[2] = 
{
	&t8_TI,
	(void*)&t8_0_0_0,
};
extern Il2CppGenericInst GenInst_t8_0_0_0;
Il2CppGenericContext m17225_GenericContext = { NULL, &GenInst_t8_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t572_TI;
MethodInfo m17225_MI = 
{
	"ThrowOnInvalidArg", (methodPointerType)&m17212_gshared, &t572_TI, &t53_0_0_0, NULL, NULL, NULL, 148, 0, 255, 0, false, true, 0, m17225_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t11.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17226_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17226_MI;
extern MethodInfo m17227_MI;
struct t52;
#define m17227(__this, p0, method) (t11 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.Sprite>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t11_TI;
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17227_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t11_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17227_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t11_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17226_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.Sprite>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17226_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17226_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17228_MI;
struct t52;
#define m17228(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.Sprite>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17228_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17228_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t11_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17226_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17226_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17229_MI;
struct t52;
#define m17229(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.Sprite>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t11_TI;
static void* m17229_RGCTXData[1] = 
{
	&t11_TI,
};
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17229_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17229_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17229_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17230_MI;
struct t52;
#define m17230(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.Sprite>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17230_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17230_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17231_MI;
struct t52;
#define m17231(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.Sprite>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17231_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17231_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t11_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17226_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17226_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17232_MI;
struct t52;
#define m17232(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.Sprite>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t11_TI;
static void* m17232_RGCTXData[1] = 
{
	&t11_TI,
};
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17232_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17232_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17232_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17233_MI;
struct t52;
#define m17233(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.Sprite>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17233_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17233_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t11_TI;
struct t52;
extern MethodInfo m17234_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17234_MI;
extern MethodInfo m17235_MI;
struct t52;
#define m17235(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.Sprite>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t11_TI;
static void* m17235_RGCTXData[1] = 
{
	&t11_TI,
};
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17235_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17235_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17235_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17234_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.Sprite>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17234_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17234_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1628.h"
extern TypeInfo t1628_TI;
#include "t1628MD.h"
extern MethodInfo m8041_MI;
extern MethodInfo m17236_MI;
struct t52;
#define m17236(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.Sprite>()
extern TypeInfo t52_TI;
extern TypeInfo t1671_TI;
extern TypeInfo t1628_TI;
extern MethodInfo m8041_MI;
static void* m17236_RGCTXData[2] = 
{
	&t1628_TI,
	&m8041_MI,
};
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17236_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t1671_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17236_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t1671_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17236_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t9.h"
extern TypeInfo t9_TI;
extern TypeInfo t70_TI;
#include "t57MD.h"
extern Il2CppType t9_0_0_0;
extern MethodInfo m1675_MI;
extern MethodInfo m2097_MI;
extern MethodInfo m126_MI;
struct t57;
struct t57;
 t7 * m131_gshared (t57 * __this, MethodInfo* method);
#define m131(__this, method) (t7 *)m131_gshared((t57 *)__this, method)
#define m126(__this, method) (t9 *)m131_gshared((t57 *)__this, method)
// Metadata Definition T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
extern TypeInfo t57_TI;
extern TypeInfo t9_TI;
extern Il2CppType t9_0_0_0;
extern TypeInfo t9_TI;
static void* m126_RGCTXData[2] = 
{
	(void*)&t9_0_0_0,
	&t9_TI,
};
extern Il2CppGenericInst GenInst_t9_0_0_0;
Il2CppGenericContext m126_GenericContext = { NULL, &GenInst_t9_0_0_0 };
extern Il2CppType t9_0_0_0;
extern TypeInfo t57_TI;
MethodInfo m126_MI = 
{
	"GetComponent", (methodPointerType)&m131_gshared, &t57_TI, &t9_0_0_0, NULL, NULL, NULL, 134, 0, 255, 0, false, true, 0, m126_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern Il2CppType t7_0_0_0;
extern MethodInfo m1675_MI;
extern MethodInfo m2097_MI;
extern MethodInfo m131_MI;
extern MethodInfo m131_MI;
 t7 * m131_gshared (t57 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
		t70 * L_0 = m1675(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), &m1675_MI);
		t57 * L_1 = m2097(__this, L_0, &m2097_MI);
		return ((t7 *)Castclass(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// Metadata Definition T UnityEngine.Component::GetComponent<System.Object>()
extern TypeInfo t57_TI;
extern TypeInfo t7_TI;
extern Il2CppType t7_0_0_0;
extern TypeInfo t7_TI;
static void* m131_RGCTXData[2] = 
{
	(void*)&t7_0_0_0,
	&t7_TI,
};
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m131_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t7_0_0_0;
extern TypeInfo t57_TI;
MethodInfo m131_MI = 
{
	"GetComponent", (methodPointerType)&m131_gshared, &t57_TI, &t7_0_0_0, NULL, NULL, NULL, 134, 0, 255, 0, false, true, 0, m131_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t13.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17237_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17237_MI;
extern MethodInfo m17238_MI;
struct t52;
#define m17238(__this, p0, method) (t13 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<DontDestroyScript>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t13_TI;
extern Il2CppGenericInst GenInst_t13_0_0_0;
Il2CppGenericContext m17238_GenericContext = { NULL, &GenInst_t13_0_0_0 };
extern Il2CppType t13_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17238_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t13_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17237_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<DontDestroyScript>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t13_0_0_0;
Il2CppGenericContext m17237_GenericContext = { NULL, &GenInst_t13_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17237_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17239_MI;
struct t52;
#define m17239(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<DontDestroyScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t13_0_0_0;
Il2CppGenericContext m17239_GenericContext = { NULL, &GenInst_t13_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17239_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t13_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17237_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17237_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17240_MI;
struct t52;
#define m17240(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<DontDestroyScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t13_TI;
static void* m17240_RGCTXData[1] = 
{
	&t13_TI,
};
extern Il2CppGenericInst GenInst_t13_0_0_0;
Il2CppGenericContext m17240_GenericContext = { NULL, &GenInst_t13_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17240_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17240_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17241_MI;
struct t52;
#define m17241(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<DontDestroyScript>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t13_0_0_0;
Il2CppGenericContext m17241_GenericContext = { NULL, &GenInst_t13_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17241_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17242_MI;
struct t52;
#define m17242(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<DontDestroyScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t13_0_0_0;
Il2CppGenericContext m17242_GenericContext = { NULL, &GenInst_t13_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17242_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t13_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17237_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17237_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17243_MI;
struct t52;
#define m17243(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<DontDestroyScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t13_TI;
static void* m17243_RGCTXData[1] = 
{
	&t13_TI,
};
extern Il2CppGenericInst GenInst_t13_0_0_0;
Il2CppGenericContext m17243_GenericContext = { NULL, &GenInst_t13_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17243_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17243_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17244_MI;
struct t52;
#define m17244(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<DontDestroyScript>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t13_0_0_0;
Il2CppGenericContext m17244_GenericContext = { NULL, &GenInst_t13_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17244_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t13_TI;
struct t52;
extern MethodInfo m17245_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17245_MI;
extern MethodInfo m17246_MI;
struct t52;
#define m17246(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<DontDestroyScript>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t13_TI;
static void* m17246_RGCTXData[1] = 
{
	&t13_TI,
};
extern Il2CppGenericInst GenInst_t13_0_0_0;
Il2CppGenericContext m17246_GenericContext = { NULL, &GenInst_t13_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17246_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17246_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17245_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<DontDestroyScript>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t13_0_0_0;
Il2CppGenericContext m17245_GenericContext = { NULL, &GenInst_t13_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17245_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1629.h"
extern TypeInfo t1629_TI;
#include "t1629MD.h"
extern MethodInfo m8046_MI;
extern MethodInfo m17247_MI;
struct t52;
#define m17247(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<DontDestroyScript>()
extern TypeInfo t52_TI;
extern TypeInfo t3376_TI;
extern TypeInfo t1629_TI;
extern MethodInfo m8046_MI;
static void* m17247_RGCTXData[2] = 
{
	&t1629_TI,
	&m8046_MI,
};
extern Il2CppGenericInst GenInst_t13_0_0_0;
Il2CppGenericContext m17247_GenericContext = { NULL, &GenInst_t13_0_0_0 };
extern Il2CppType t3376_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17247_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3376_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17247_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t13_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern Il2CppType t13_0_0_0;
extern MethodInfo m1555_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m2583_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m17248_MI;
struct t572;
#define m17248(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<DontDestroyScript>(System.Object)
extern TypeInfo t572_TI;
extern TypeInfo t53_TI;
extern TypeInfo t13_TI;
extern Il2CppType t13_0_0_0;
static void* m17248_RGCTXData[2] = 
{
	&t13_TI,
	(void*)&t13_0_0_0,
};
extern Il2CppGenericInst GenInst_t13_0_0_0;
Il2CppGenericContext m17248_GenericContext = { NULL, &GenInst_t13_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t572_TI;
MethodInfo m17248_MI = 
{
	"ThrowOnInvalidArg", (methodPointerType)&m17212_gshared, &t572_TI, &t53_0_0_0, NULL, NULL, NULL, 148, 0, 255, 0, false, true, 0, m17248_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t14.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17249_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17249_MI;
extern MethodInfo m17250_MI;
struct t52;
#define m17250(__this, p0, method) (t14 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<GravityObjects>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t14_TI;
extern Il2CppGenericInst GenInst_t14_0_0_0;
Il2CppGenericContext m17250_GenericContext = { NULL, &GenInst_t14_0_0_0 };
extern Il2CppType t14_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17250_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t14_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17249_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<GravityObjects>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t14_0_0_0;
Il2CppGenericContext m17249_GenericContext = { NULL, &GenInst_t14_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17249_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17251_MI;
struct t52;
#define m17251(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<GravityObjects>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t14_0_0_0;
Il2CppGenericContext m17251_GenericContext = { NULL, &GenInst_t14_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17251_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t14_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17249_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17249_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17252_MI;
struct t52;
#define m17252(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<GravityObjects>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t14_TI;
static void* m17252_RGCTXData[1] = 
{
	&t14_TI,
};
extern Il2CppGenericInst GenInst_t14_0_0_0;
Il2CppGenericContext m17252_GenericContext = { NULL, &GenInst_t14_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17252_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17252_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17253_MI;
struct t52;
#define m17253(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<GravityObjects>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t14_0_0_0;
Il2CppGenericContext m17253_GenericContext = { NULL, &GenInst_t14_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17253_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17254_MI;
struct t52;
#define m17254(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<GravityObjects>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t14_0_0_0;
Il2CppGenericContext m17254_GenericContext = { NULL, &GenInst_t14_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17254_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t14_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17249_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17249_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17255_MI;
struct t52;
#define m17255(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<GravityObjects>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t14_TI;
static void* m17255_RGCTXData[1] = 
{
	&t14_TI,
};
extern Il2CppGenericInst GenInst_t14_0_0_0;
Il2CppGenericContext m17255_GenericContext = { NULL, &GenInst_t14_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17255_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17255_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17256_MI;
struct t52;
#define m17256(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<GravityObjects>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t14_0_0_0;
Il2CppGenericContext m17256_GenericContext = { NULL, &GenInst_t14_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17256_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t14_TI;
struct t52;
extern MethodInfo m17257_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17257_MI;
extern MethodInfo m17258_MI;
struct t52;
#define m17258(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<GravityObjects>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t14_TI;
static void* m17258_RGCTXData[1] = 
{
	&t14_TI,
};
extern Il2CppGenericInst GenInst_t14_0_0_0;
Il2CppGenericContext m17258_GenericContext = { NULL, &GenInst_t14_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17258_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17258_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17257_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<GravityObjects>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t14_0_0_0;
Il2CppGenericContext m17257_GenericContext = { NULL, &GenInst_t14_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17257_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1633.h"
extern TypeInfo t1633_TI;
#include "t1633MD.h"
extern MethodInfo m8061_MI;
extern MethodInfo m17259_MI;
struct t52;
#define m17259(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<GravityObjects>()
extern TypeInfo t52_TI;
extern TypeInfo t3377_TI;
extern TypeInfo t1633_TI;
extern MethodInfo m8061_MI;
static void* m17259_RGCTXData[2] = 
{
	&t1633_TI,
	&m8061_MI,
};
extern Il2CppGenericInst GenInst_t14_0_0_0;
Il2CppGenericContext m17259_GenericContext = { NULL, &GenInst_t14_0_0_0 };
extern Il2CppType t3377_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17259_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3377_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17259_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t14_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern Il2CppType t14_0_0_0;
extern MethodInfo m1555_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m2583_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m17260_MI;
struct t572;
#define m17260(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<GravityObjects>(System.Object)
extern TypeInfo t572_TI;
extern TypeInfo t53_TI;
extern TypeInfo t14_TI;
extern Il2CppType t14_0_0_0;
static void* m17260_RGCTXData[2] = 
{
	&t14_TI,
	(void*)&t14_0_0_0,
};
extern Il2CppGenericInst GenInst_t14_0_0_0;
Il2CppGenericContext m17260_GenericContext = { NULL, &GenInst_t14_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t572_TI;
MethodInfo m17260_MI = 
{
	"ThrowOnInvalidArg", (methodPointerType)&m17212_gshared, &t572_TI, &t53_0_0_0, NULL, NULL, NULL, 148, 0, 255, 0, false, true, 0, m17260_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t15.h"
extern TypeInfo t15_TI;
extern TypeInfo t70_TI;
extern Il2CppType t15_0_0_0;
extern MethodInfo m1675_MI;
extern MethodInfo m2097_MI;
extern MethodInfo m136_MI;
struct t57;
#define m136(__this, method) (t15 *)m131_gshared((t57 *)__this, method)
// Metadata Definition T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
extern TypeInfo t57_TI;
extern TypeInfo t15_TI;
extern Il2CppType t15_0_0_0;
extern TypeInfo t15_TI;
static void* m136_RGCTXData[2] = 
{
	(void*)&t15_0_0_0,
	&t15_TI,
};
extern Il2CppGenericInst GenInst_t15_0_0_0;
Il2CppGenericContext m136_GenericContext = { NULL, &GenInst_t15_0_0_0 };
extern Il2CppType t15_0_0_0;
extern TypeInfo t57_TI;
MethodInfo m136_MI = 
{
	"GetComponent", (methodPointerType)&m131_gshared, &t57_TI, &t15_0_0_0, NULL, NULL, NULL, 134, 0, 255, 0, false, true, 0, m136_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t17.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17261_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17261_MI;
extern MethodInfo m17262_MI;
struct t52;
#define m17262(__this, p0, method) (t17 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<LinesScript>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t17_TI;
extern Il2CppGenericInst GenInst_t17_0_0_0;
Il2CppGenericContext m17262_GenericContext = { NULL, &GenInst_t17_0_0_0 };
extern Il2CppType t17_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17262_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t17_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17261_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<LinesScript>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t17_0_0_0;
Il2CppGenericContext m17261_GenericContext = { NULL, &GenInst_t17_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17261_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17263_MI;
struct t52;
#define m17263(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<LinesScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t17_0_0_0;
Il2CppGenericContext m17263_GenericContext = { NULL, &GenInst_t17_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17263_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t17_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17261_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17261_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17264_MI;
struct t52;
#define m17264(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<LinesScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t17_TI;
static void* m17264_RGCTXData[1] = 
{
	&t17_TI,
};
extern Il2CppGenericInst GenInst_t17_0_0_0;
Il2CppGenericContext m17264_GenericContext = { NULL, &GenInst_t17_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17264_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17264_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17265_MI;
struct t52;
#define m17265(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<LinesScript>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t17_0_0_0;
Il2CppGenericContext m17265_GenericContext = { NULL, &GenInst_t17_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17265_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17266_MI;
struct t52;
#define m17266(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<LinesScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t17_0_0_0;
Il2CppGenericContext m17266_GenericContext = { NULL, &GenInst_t17_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17266_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t17_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17261_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17261_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17267_MI;
struct t52;
#define m17267(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<LinesScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t17_TI;
static void* m17267_RGCTXData[1] = 
{
	&t17_TI,
};
extern Il2CppGenericInst GenInst_t17_0_0_0;
Il2CppGenericContext m17267_GenericContext = { NULL, &GenInst_t17_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17267_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17267_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17268_MI;
struct t52;
#define m17268(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<LinesScript>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t17_0_0_0;
Il2CppGenericContext m17268_GenericContext = { NULL, &GenInst_t17_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17268_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t17_TI;
struct t52;
extern MethodInfo m17269_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17269_MI;
extern MethodInfo m17270_MI;
struct t52;
#define m17270(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<LinesScript>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t17_TI;
static void* m17270_RGCTXData[1] = 
{
	&t17_TI,
};
extern Il2CppGenericInst GenInst_t17_0_0_0;
Il2CppGenericContext m17270_GenericContext = { NULL, &GenInst_t17_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17270_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17270_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17269_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<LinesScript>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t17_0_0_0;
Il2CppGenericContext m17269_GenericContext = { NULL, &GenInst_t17_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17269_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1637.h"
extern TypeInfo t1637_TI;
#include "t1637MD.h"
extern MethodInfo m8076_MI;
extern MethodInfo m17271_MI;
struct t52;
#define m17271(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<LinesScript>()
extern TypeInfo t52_TI;
extern TypeInfo t3378_TI;
extern TypeInfo t1637_TI;
extern MethodInfo m8076_MI;
static void* m17271_RGCTXData[2] = 
{
	&t1637_TI,
	&m8076_MI,
};
extern Il2CppGenericInst GenInst_t17_0_0_0;
Il2CppGenericContext m17271_GenericContext = { NULL, &GenInst_t17_0_0_0 };
extern Il2CppType t3378_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17271_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3378_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17271_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t17_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern Il2CppType t17_0_0_0;
extern MethodInfo m1555_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m2583_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m17272_MI;
struct t572;
#define m17272(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<LinesScript>(System.Object)
extern TypeInfo t572_TI;
extern TypeInfo t53_TI;
extern TypeInfo t17_TI;
extern Il2CppType t17_0_0_0;
static void* m17272_RGCTXData[2] = 
{
	&t17_TI,
	(void*)&t17_0_0_0,
};
extern Il2CppGenericInst GenInst_t17_0_0_0;
Il2CppGenericContext m17272_GenericContext = { NULL, &GenInst_t17_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t572_TI;
MethodInfo m17272_MI = 
{
	"ThrowOnInvalidArg", (methodPointerType)&m17212_gshared, &t572_TI, &t53_0_0_0, NULL, NULL, NULL, 148, 0, 255, 0, false, true, 0, m17272_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t18.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17273_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17273_MI;
extern MethodInfo m17274_MI;
struct t52;
#define m17274(__this, p0, method) (t18 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<HitHeadTriggerScript>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t18_TI;
extern Il2CppGenericInst GenInst_t18_0_0_0;
Il2CppGenericContext m17274_GenericContext = { NULL, &GenInst_t18_0_0_0 };
extern Il2CppType t18_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17274_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t18_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17273_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<HitHeadTriggerScript>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t18_0_0_0;
Il2CppGenericContext m17273_GenericContext = { NULL, &GenInst_t18_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17273_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17275_MI;
struct t52;
#define m17275(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<HitHeadTriggerScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t18_0_0_0;
Il2CppGenericContext m17275_GenericContext = { NULL, &GenInst_t18_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17275_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t18_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17273_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17273_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17276_MI;
struct t52;
#define m17276(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<HitHeadTriggerScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t18_TI;
static void* m17276_RGCTXData[1] = 
{
	&t18_TI,
};
extern Il2CppGenericInst GenInst_t18_0_0_0;
Il2CppGenericContext m17276_GenericContext = { NULL, &GenInst_t18_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17276_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17276_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17277_MI;
struct t52;
#define m17277(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<HitHeadTriggerScript>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t18_0_0_0;
Il2CppGenericContext m17277_GenericContext = { NULL, &GenInst_t18_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17277_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17278_MI;
struct t52;
#define m17278(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<HitHeadTriggerScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t18_0_0_0;
Il2CppGenericContext m17278_GenericContext = { NULL, &GenInst_t18_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17278_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t18_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17273_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17273_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17279_MI;
struct t52;
#define m17279(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<HitHeadTriggerScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t18_TI;
static void* m17279_RGCTXData[1] = 
{
	&t18_TI,
};
extern Il2CppGenericInst GenInst_t18_0_0_0;
Il2CppGenericContext m17279_GenericContext = { NULL, &GenInst_t18_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17279_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17279_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17280_MI;
struct t52;
#define m17280(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<HitHeadTriggerScript>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t18_0_0_0;
Il2CppGenericContext m17280_GenericContext = { NULL, &GenInst_t18_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17280_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t18_TI;
struct t52;
extern MethodInfo m17281_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17281_MI;
extern MethodInfo m17282_MI;
struct t52;
#define m17282(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<HitHeadTriggerScript>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t18_TI;
static void* m17282_RGCTXData[1] = 
{
	&t18_TI,
};
extern Il2CppGenericInst GenInst_t18_0_0_0;
Il2CppGenericContext m17282_GenericContext = { NULL, &GenInst_t18_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17282_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17282_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17281_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<HitHeadTriggerScript>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t18_0_0_0;
Il2CppGenericContext m17281_GenericContext = { NULL, &GenInst_t18_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17281_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1641.h"
extern TypeInfo t1641_TI;
#include "t1641MD.h"
extern MethodInfo m8091_MI;
extern MethodInfo m17283_MI;
struct t52;
#define m17283(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<HitHeadTriggerScript>()
extern TypeInfo t52_TI;
extern TypeInfo t3379_TI;
extern TypeInfo t1641_TI;
extern MethodInfo m8091_MI;
static void* m17283_RGCTXData[2] = 
{
	&t1641_TI,
	&m8091_MI,
};
extern Il2CppGenericInst GenInst_t18_0_0_0;
Il2CppGenericContext m17283_GenericContext = { NULL, &GenInst_t18_0_0_0 };
extern Il2CppType t3379_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17283_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3379_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17283_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t18_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern Il2CppType t18_0_0_0;
extern MethodInfo m1555_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m2583_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m17284_MI;
struct t572;
#define m17284(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<HitHeadTriggerScript>(System.Object)
extern TypeInfo t572_TI;
extern TypeInfo t53_TI;
extern TypeInfo t18_TI;
extern Il2CppType t18_0_0_0;
static void* m17284_RGCTXData[2] = 
{
	&t18_TI,
	(void*)&t18_0_0_0,
};
extern Il2CppGenericInst GenInst_t18_0_0_0;
Il2CppGenericContext m17284_GenericContext = { NULL, &GenInst_t18_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t572_TI;
MethodInfo m17284_MI = 
{
	"ThrowOnInvalidArg", (methodPointerType)&m17212_gshared, &t572_TI, &t53_0_0_0, NULL, NULL, NULL, 148, 0, 255, 0, false, true, 0, m17284_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t21.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17285_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17285_MI;
extern MethodInfo m17286_MI;
struct t52;
#define m17286(__this, p0, method) (t21 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<JumpTriggerScript>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t21_TI;
extern Il2CppGenericInst GenInst_t21_0_0_0;
Il2CppGenericContext m17286_GenericContext = { NULL, &GenInst_t21_0_0_0 };
extern Il2CppType t21_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17286_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t21_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17285_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<JumpTriggerScript>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t21_0_0_0;
Il2CppGenericContext m17285_GenericContext = { NULL, &GenInst_t21_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17285_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17287_MI;
struct t52;
#define m17287(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<JumpTriggerScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t21_0_0_0;
Il2CppGenericContext m17287_GenericContext = { NULL, &GenInst_t21_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17287_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t21_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17285_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17285_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17288_MI;
struct t52;
#define m17288(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<JumpTriggerScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t21_TI;
static void* m17288_RGCTXData[1] = 
{
	&t21_TI,
};
extern Il2CppGenericInst GenInst_t21_0_0_0;
Il2CppGenericContext m17288_GenericContext = { NULL, &GenInst_t21_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17288_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17288_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17289_MI;
struct t52;
#define m17289(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<JumpTriggerScript>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t21_0_0_0;
Il2CppGenericContext m17289_GenericContext = { NULL, &GenInst_t21_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17289_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17290_MI;
struct t52;
#define m17290(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<JumpTriggerScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t21_0_0_0;
Il2CppGenericContext m17290_GenericContext = { NULL, &GenInst_t21_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17290_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t21_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17285_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17285_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17291_MI;
struct t52;
#define m17291(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<JumpTriggerScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t21_TI;
static void* m17291_RGCTXData[1] = 
{
	&t21_TI,
};
extern Il2CppGenericInst GenInst_t21_0_0_0;
Il2CppGenericContext m17291_GenericContext = { NULL, &GenInst_t21_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17291_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17291_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17292_MI;
struct t52;
#define m17292(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<JumpTriggerScript>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t21_0_0_0;
Il2CppGenericContext m17292_GenericContext = { NULL, &GenInst_t21_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17292_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t21_TI;
struct t52;
extern MethodInfo m17293_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17293_MI;
extern MethodInfo m17294_MI;
struct t52;
#define m17294(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<JumpTriggerScript>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t21_TI;
static void* m17294_RGCTXData[1] = 
{
	&t21_TI,
};
extern Il2CppGenericInst GenInst_t21_0_0_0;
Il2CppGenericContext m17294_GenericContext = { NULL, &GenInst_t21_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17294_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17294_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17293_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<JumpTriggerScript>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t21_0_0_0;
Il2CppGenericContext m17293_GenericContext = { NULL, &GenInst_t21_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17293_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1645.h"
extern TypeInfo t1645_TI;
#include "t1645MD.h"
extern MethodInfo m8106_MI;
extern MethodInfo m17295_MI;
struct t52;
#define m17295(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<JumpTriggerScript>()
extern TypeInfo t52_TI;
extern TypeInfo t3380_TI;
extern TypeInfo t1645_TI;
extern MethodInfo m8106_MI;
static void* m17295_RGCTXData[2] = 
{
	&t1645_TI,
	&m8106_MI,
};
extern Il2CppGenericInst GenInst_t21_0_0_0;
Il2CppGenericContext m17295_GenericContext = { NULL, &GenInst_t21_0_0_0 };
extern Il2CppType t3380_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17295_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3380_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17295_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t21_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern Il2CppType t21_0_0_0;
extern MethodInfo m1555_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m2583_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m17296_MI;
struct t572;
#define m17296(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<JumpTriggerScript>(System.Object)
extern TypeInfo t572_TI;
extern TypeInfo t53_TI;
extern TypeInfo t21_TI;
extern Il2CppType t21_0_0_0;
static void* m17296_RGCTXData[2] = 
{
	&t21_TI,
	(void*)&t21_0_0_0,
};
extern Il2CppGenericInst GenInst_t21_0_0_0;
Il2CppGenericContext m17296_GenericContext = { NULL, &GenInst_t21_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t572_TI;
MethodInfo m17296_MI = 
{
	"ThrowOnInvalidArg", (methodPointerType)&m17212_gshared, &t572_TI, &t53_0_0_0, NULL, NULL, NULL, 148, 0, 255, 0, false, true, 0, m17296_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t19.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17297_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17297_MI;
extern MethodInfo m17298_MI;
struct t52;
#define m17298(__this, p0, method) (t19 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<PlayerControls>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t19_TI;
extern Il2CppGenericInst GenInst_t19_0_0_0;
Il2CppGenericContext m17298_GenericContext = { NULL, &GenInst_t19_0_0_0 };
extern Il2CppType t19_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17298_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t19_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17297_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<PlayerControls>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t19_0_0_0;
Il2CppGenericContext m17297_GenericContext = { NULL, &GenInst_t19_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17297_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17299_MI;
struct t52;
#define m17299(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<PlayerControls>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t19_0_0_0;
Il2CppGenericContext m17299_GenericContext = { NULL, &GenInst_t19_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17299_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t19_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17297_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17297_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17300_MI;
struct t52;
#define m17300(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<PlayerControls>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t19_TI;
static void* m17300_RGCTXData[1] = 
{
	&t19_TI,
};
extern Il2CppGenericInst GenInst_t19_0_0_0;
Il2CppGenericContext m17300_GenericContext = { NULL, &GenInst_t19_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17300_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17300_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17301_MI;
struct t52;
#define m17301(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<PlayerControls>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t19_0_0_0;
Il2CppGenericContext m17301_GenericContext = { NULL, &GenInst_t19_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17301_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17302_MI;
struct t52;
#define m17302(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<PlayerControls>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t19_0_0_0;
Il2CppGenericContext m17302_GenericContext = { NULL, &GenInst_t19_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17302_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t19_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17297_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17297_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17303_MI;
struct t52;
#define m17303(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<PlayerControls>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t19_TI;
static void* m17303_RGCTXData[1] = 
{
	&t19_TI,
};
extern Il2CppGenericInst GenInst_t19_0_0_0;
Il2CppGenericContext m17303_GenericContext = { NULL, &GenInst_t19_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17303_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17303_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17304_MI;
struct t52;
#define m17304(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<PlayerControls>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t19_0_0_0;
Il2CppGenericContext m17304_GenericContext = { NULL, &GenInst_t19_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17304_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t19_TI;
struct t52;
extern MethodInfo m17305_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17305_MI;
extern MethodInfo m17306_MI;
struct t52;
#define m17306(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<PlayerControls>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t19_TI;
static void* m17306_RGCTXData[1] = 
{
	&t19_TI,
};
extern Il2CppGenericInst GenInst_t19_0_0_0;
Il2CppGenericContext m17306_GenericContext = { NULL, &GenInst_t19_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17306_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17306_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17305_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<PlayerControls>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t19_0_0_0;
Il2CppGenericContext m17305_GenericContext = { NULL, &GenInst_t19_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17305_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1649.h"
extern TypeInfo t1649_TI;
#include "t1649MD.h"
extern MethodInfo m8121_MI;
extern MethodInfo m17307_MI;
struct t52;
#define m17307(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<PlayerControls>()
extern TypeInfo t52_TI;
extern TypeInfo t3381_TI;
extern TypeInfo t1649_TI;
extern MethodInfo m8121_MI;
static void* m17307_RGCTXData[2] = 
{
	&t1649_TI,
	&m8121_MI,
};
extern Il2CppGenericInst GenInst_t19_0_0_0;
Il2CppGenericContext m17307_GenericContext = { NULL, &GenInst_t19_0_0_0 };
extern Il2CppType t3381_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17307_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3381_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17307_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t19_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern Il2CppType t19_0_0_0;
extern MethodInfo m1555_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m2583_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m17308_MI;
struct t572;
#define m17308(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<PlayerControls>(System.Object)
extern TypeInfo t572_TI;
extern TypeInfo t53_TI;
extern TypeInfo t19_TI;
extern Il2CppType t19_0_0_0;
static void* m17308_RGCTXData[2] = 
{
	&t19_TI,
	(void*)&t19_0_0_0,
};
extern Il2CppGenericInst GenInst_t19_0_0_0;
Il2CppGenericContext m17308_GenericContext = { NULL, &GenInst_t19_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t572_TI;
MethodInfo m17308_MI = 
{
	"ThrowOnInvalidArg", (methodPointerType)&m17212_gshared, &t572_TI, &t53_0_0_0, NULL, NULL, NULL, 148, 0, 255, 0, false, true, 0, m17308_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1_TI;
extern TypeInfo t70_TI;
extern Il2CppType t1_0_0_0;
extern MethodInfo m1675_MI;
extern MethodInfo m2097_MI;
extern MethodInfo m168_MI;
struct t57;
#define m168(__this, method) (t1 *)m131_gshared((t57 *)__this, method)
// Metadata Definition T UnityEngine.Component::GetComponent<CameraScript>()
extern TypeInfo t57_TI;
extern TypeInfo t1_TI;
extern Il2CppType t1_0_0_0;
extern TypeInfo t1_TI;
static void* m168_RGCTXData[2] = 
{
	(void*)&t1_0_0_0,
	&t1_TI,
};
extern Il2CppGenericInst GenInst_t1_0_0_0;
Il2CppGenericContext m168_GenericContext = { NULL, &GenInst_t1_0_0_0 };
extern Il2CppType t1_0_0_0;
extern TypeInfo t57_TI;
MethodInfo m168_MI = 
{
	"GetComponent", (methodPointerType)&m131_gshared, &t57_TI, &t1_0_0_0, NULL, NULL, NULL, 134, 0, 255, 0, false, true, 0, m168_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t25.h"
extern TypeInfo t25_TI;
extern TypeInfo t70_TI;
extern Il2CppType t25_0_0_0;
extern MethodInfo m1675_MI;
extern MethodInfo m2097_MI;
extern MethodInfo m170_MI;
struct t57;
#define m170(__this, method) (t25 *)m131_gshared((t57 *)__this, method)
// Metadata Definition T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
extern TypeInfo t57_TI;
extern TypeInfo t25_TI;
extern Il2CppType t25_0_0_0;
extern TypeInfo t25_TI;
static void* m170_RGCTXData[2] = 
{
	(void*)&t25_0_0_0,
	&t25_TI,
};
extern Il2CppGenericInst GenInst_t25_0_0_0;
Il2CppGenericContext m170_GenericContext = { NULL, &GenInst_t25_0_0_0 };
extern Il2CppType t25_0_0_0;
extern TypeInfo t57_TI;
MethodInfo m170_MI = 
{
	"GetComponent", (methodPointerType)&m131_gshared, &t57_TI, &t25_0_0_0, NULL, NULL, NULL, 134, 0, 255, 0, false, true, 0, m170_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t28.h"
extern TypeInfo t28_TI;
extern TypeInfo t70_TI;
extern Il2CppType t28_0_0_0;
extern MethodInfo m1675_MI;
extern MethodInfo m2097_MI;
extern MethodInfo m171_MI;
struct t57;
#define m171(__this, method) (t28 *)m131_gshared((t57 *)__this, method)
// Metadata Definition T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
extern TypeInfo t57_TI;
extern TypeInfo t28_TI;
extern Il2CppType t28_0_0_0;
extern TypeInfo t28_TI;
static void* m171_RGCTXData[2] = 
{
	(void*)&t28_0_0_0,
	&t28_TI,
};
extern Il2CppGenericInst GenInst_t28_0_0_0;
Il2CppGenericContext m171_GenericContext = { NULL, &GenInst_t28_0_0_0 };
extern Il2CppType t28_0_0_0;
extern TypeInfo t57_TI;
MethodInfo m171_MI = 
{
	"GetComponent", (methodPointerType)&m131_gshared, &t57_TI, &t28_0_0_0, NULL, NULL, NULL, 134, 0, 255, 0, false, true, 0, m171_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t80.h"
extern TypeInfo t80_TI;
extern TypeInfo t70_TI;
extern Il2CppType t80_0_0_0;
extern MethodInfo m1675_MI;
extern MethodInfo m2097_MI;
extern MethodInfo m172_MI;
struct t57;
#define m172(__this, method) (t80 *)m131_gshared((t57 *)__this, method)
// Metadata Definition T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
extern TypeInfo t57_TI;
extern TypeInfo t80_TI;
extern Il2CppType t80_0_0_0;
extern TypeInfo t80_TI;
static void* m172_RGCTXData[2] = 
{
	(void*)&t80_0_0_0,
	&t80_TI,
};
extern Il2CppGenericInst GenInst_t80_0_0_0;
Il2CppGenericContext m172_GenericContext = { NULL, &GenInst_t80_0_0_0 };
extern Il2CppType t80_0_0_0;
extern TypeInfo t57_TI;
MethodInfo m172_MI = 
{
	"GetComponent", (methodPointerType)&m131_gshared, &t57_TI, &t80_0_0_0, NULL, NULL, NULL, 134, 0, 255, 0, false, true, 0, m172_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t22.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17309_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17309_MI;
extern MethodInfo m17310_MI;
struct t52;
 int32_t m17310 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17310_MI;
 int32_t m17310 (t52 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<PlayerControls/PLAYER_STATE>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t22_TI;
extern Il2CppGenericInst GenInst_t22_0_0_0;
Il2CppGenericContext m17310_GenericContext = { NULL, &GenInst_t22_0_0_0 };
extern Il2CppType t22_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17310_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17310, &t52_TI, &t22_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17309_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<PlayerControls/PLAYER_STATE>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t22_0_0_0;
Il2CppGenericContext m17309_GenericContext = { NULL, &GenInst_t22_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17309_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17311_MI;
struct t52;
 void m17311 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17311_MI;
 void m17311 (t52 * __this, int32_t p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<PlayerControls/PLAYER_STATE>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t22_0_0_0;
Il2CppGenericContext m17311_GenericContext = { NULL, &GenInst_t22_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17311_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17311, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t22_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17309_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17309_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17312_MI;
struct t52;
 bool m17312 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17312_MI;
 bool m17312 (t52 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t22_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t22_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t7 * L_9 = Box(InitializedTypeInfo(&t22_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t22_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<PlayerControls/PLAYER_STATE>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t22_0_0_0;
Il2CppGenericContext m17312_GenericContext = { NULL, &GenInst_t22_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17312_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17312, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17313_MI;
struct t52;
 void m17313 (t52 * __this, t2992* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17313_MI;
 void m17313 (t52 * __this, t2992* p0, int32_t p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral329, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t34* L_2 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_3 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_3, L_2, &m7242_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0027:
	{
		int32_t L_4 = m3833(__this, 0, &m3833_MI);
		int32_t L_5 = m3835(p0, 0, &m3835_MI);
		int32_t L_6 = m3833(p0, 0, &m3833_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t348 * L_7 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m2046(L_7, (t34*) &_stringLiteral330, &m2046_MI);
		il2cpp_codegen_raise_exception (L_7);
	}

IL_004c:
	{
		int32_t L_8 = m3831(p0, &m3831_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t34* L_9 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_10 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_10, L_9, &m7242_MI);
		il2cpp_codegen_raise_exception (L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t34* L_11 = m4015(NULL, (t34*) &_stringLiteral331, &m4015_MI);
		t88 * L_12 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6592(L_12, (t34*) &_stringLiteral326, L_11, &m6592_MI);
		il2cpp_codegen_raise_exception (L_12);
	}

IL_007e:
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		int32_t L_14 = m3833(__this, 0, &m3833_MI);
		m3878(NULL, __this, L_13, (t52 *)(t52 *)p0, p1, L_14, &m3878_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<PlayerControls/PLAYER_STATE>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t22_0_0_0;
Il2CppGenericContext m17313_GenericContext = { NULL, &GenInst_t22_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17313_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17313, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17314_MI;
struct t52;
 bool m17314 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17314_MI;
 bool m17314 (t52 * __this, int32_t p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<PlayerControls/PLAYER_STATE>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t22_0_0_0;
Il2CppGenericContext m17314_GenericContext = { NULL, &GenInst_t22_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17314_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17314, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t22_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17309_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17309_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17315_MI;
struct t52;
 int32_t m17315 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17315_MI;
 int32_t m17315 (t52 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t22_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t22_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t7 * L_11 = Box(InitializedTypeInfo(&t22_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t22_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<PlayerControls/PLAYER_STATE>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern Il2CppGenericInst GenInst_t22_0_0_0;
Il2CppGenericContext m17315_GenericContext = { NULL, &GenInst_t22_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17315_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17315, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17316_MI;
struct t52;
 void m17316 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17316_MI;
 void m17316 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<PlayerControls/PLAYER_STATE>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t22_0_0_0;
Il2CppGenericContext m17316_GenericContext = { NULL, &GenInst_t22_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17316_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17316, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t22_TI;
struct t52;
extern MethodInfo m17317_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17317_MI;
extern MethodInfo m17318_MI;
struct t52;
 void m17318 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17318_MI;
 void m17318 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t350* V_0 = {0};
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		V_0 = ((t350*)IsInst(__this, InitializedTypeInfo(&t350_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t7 * L_3 = Box(InitializedTypeInfo(&t22_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(V_0, p0)) = (t7 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<PlayerControls/PLAYER_STATE>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t22_0_0_0;
Il2CppGenericContext m17318_GenericContext = { NULL, &GenInst_t22_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17318_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17318, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17317_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<PlayerControls/PLAYER_STATE>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t22_0_0_0;
Il2CppGenericContext m17317_GenericContext = { NULL, &GenInst_t22_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17317_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1653.h"
extern TypeInfo t1653_TI;
#include "t1653MD.h"
extern MethodInfo m8136_MI;
extern MethodInfo m17319_MI;
struct t52;
 t7* m17319 (t52 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17319_MI;
 t7* m17319 (t52 * __this, MethodInfo* method){
	{
		t1653  L_0 = {0};
		m8136(&L_0, __this, &m8136_MI);
		t1653  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1653_TI), &L_1);
		return (t7*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<PlayerControls/PLAYER_STATE>()
extern TypeInfo t52_TI;
extern TypeInfo t3382_TI;
extern Il2CppGenericInst GenInst_t22_0_0_0;
Il2CppGenericContext m17319_GenericContext = { NULL, &GenInst_t22_0_0_0 };
extern Il2CppType t3382_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17319_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17319, &t52_TI, &t3382_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t23.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17320_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17320_MI;
extern MethodInfo m17321_MI;
struct t52;
#define m17321(__this, p0, method) (t23 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Enum>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t23_TI;
extern Il2CppGenericInst GenInst_t23_0_0_0;
Il2CppGenericContext m17321_GenericContext = { NULL, &GenInst_t23_0_0_0 };
extern Il2CppType t23_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17321_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t23_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17320_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Enum>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t23_0_0_0;
Il2CppGenericContext m17320_GenericContext = { NULL, &GenInst_t23_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17320_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17322_MI;
struct t52;
#define m17322(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Enum>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t23_0_0_0;
Il2CppGenericContext m17322_GenericContext = { NULL, &GenInst_t23_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17322_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t23_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17320_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17320_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17323_MI;
struct t52;
#define m17323(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Enum>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t23_TI;
static void* m17323_RGCTXData[1] = 
{
	&t23_TI,
};
extern Il2CppGenericInst GenInst_t23_0_0_0;
Il2CppGenericContext m17323_GenericContext = { NULL, &GenInst_t23_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17323_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17323_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17324_MI;
struct t52;
#define m17324(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Enum>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t23_0_0_0;
Il2CppGenericContext m17324_GenericContext = { NULL, &GenInst_t23_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17324_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17325_MI;
struct t52;
#define m17325(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Enum>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t23_0_0_0;
Il2CppGenericContext m17325_GenericContext = { NULL, &GenInst_t23_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17325_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t23_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17320_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17320_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17326_MI;
struct t52;
#define m17326(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Enum>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t23_TI;
static void* m17326_RGCTXData[1] = 
{
	&t23_TI,
};
extern Il2CppGenericInst GenInst_t23_0_0_0;
Il2CppGenericContext m17326_GenericContext = { NULL, &GenInst_t23_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17326_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17326_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17327_MI;
struct t52;
#define m17327(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Enum>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t23_0_0_0;
Il2CppGenericContext m17327_GenericContext = { NULL, &GenInst_t23_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17327_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t23_TI;
struct t52;
extern MethodInfo m17328_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17328_MI;
extern MethodInfo m17329_MI;
struct t52;
#define m17329(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Enum>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t23_TI;
static void* m17329_RGCTXData[1] = 
{
	&t23_TI,
};
extern Il2CppGenericInst GenInst_t23_0_0_0;
Il2CppGenericContext m17329_GenericContext = { NULL, &GenInst_t23_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17329_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17329_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17328_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Enum>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t23_0_0_0;
Il2CppGenericContext m17328_GenericContext = { NULL, &GenInst_t23_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17328_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1654.h"
extern TypeInfo t1654_TI;
#include "t1654MD.h"
extern MethodInfo m8141_MI;
extern MethodInfo m17330_MI;
struct t52;
#define m17330(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Enum>()
extern TypeInfo t52_TI;
extern TypeInfo t3383_TI;
extern TypeInfo t1654_TI;
extern MethodInfo m8141_MI;
static void* m17330_RGCTXData[2] = 
{
	&t1654_TI,
	&m8141_MI,
};
extern Il2CppGenericInst GenInst_t23_0_0_0;
Il2CppGenericContext m17330_GenericContext = { NULL, &GenInst_t23_0_0_0 };
extern Il2CppType t3383_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17330_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3383_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17330_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17331_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17331_MI;
extern MethodInfo m17332_MI;
struct t52;
#define m17332(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.IFormattable>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t76_TI;
extern Il2CppGenericInst GenInst_t76_0_0_0;
Il2CppGenericContext m17332_GenericContext = { NULL, &GenInst_t76_0_0_0 };
extern Il2CppType t76_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17332_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t76_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17331_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.IFormattable>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t76_0_0_0;
Il2CppGenericContext m17331_GenericContext = { NULL, &GenInst_t76_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17331_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17333_MI;
struct t52;
#define m17333(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.IFormattable>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t76_0_0_0;
Il2CppGenericContext m17333_GenericContext = { NULL, &GenInst_t76_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17333_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t76_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17331_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17331_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17334_MI;
struct t52;
#define m17334(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.IFormattable>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t76_TI;
static void* m17334_RGCTXData[1] = 
{
	&t76_TI,
};
extern Il2CppGenericInst GenInst_t76_0_0_0;
Il2CppGenericContext m17334_GenericContext = { NULL, &GenInst_t76_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17334_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17334_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17335_MI;
struct t52;
#define m17335(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.IFormattable>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t76_0_0_0;
Il2CppGenericContext m17335_GenericContext = { NULL, &GenInst_t76_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17335_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17336_MI;
struct t52;
#define m17336(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.IFormattable>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t76_0_0_0;
Il2CppGenericContext m17336_GenericContext = { NULL, &GenInst_t76_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17336_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t76_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17331_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17331_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17337_MI;
struct t52;
#define m17337(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.IFormattable>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t76_TI;
static void* m17337_RGCTXData[1] = 
{
	&t76_TI,
};
extern Il2CppGenericInst GenInst_t76_0_0_0;
Il2CppGenericContext m17337_GenericContext = { NULL, &GenInst_t76_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17337_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17337_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17338_MI;
struct t52;
#define m17338(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.IFormattable>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t76_0_0_0;
Il2CppGenericContext m17338_GenericContext = { NULL, &GenInst_t76_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17338_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t76_TI;
struct t52;
extern MethodInfo m17339_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17339_MI;
extern MethodInfo m17340_MI;
struct t52;
#define m17340(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.IFormattable>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t76_TI;
static void* m17340_RGCTXData[1] = 
{
	&t76_TI,
};
extern Il2CppGenericInst GenInst_t76_0_0_0;
Il2CppGenericContext m17340_GenericContext = { NULL, &GenInst_t76_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17340_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17340_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17339_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.IFormattable>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t76_0_0_0;
Il2CppGenericContext m17339_GenericContext = { NULL, &GenInst_t76_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17339_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1655.h"
extern TypeInfo t1655_TI;
#include "t1655MD.h"
extern MethodInfo m8146_MI;
extern MethodInfo m17341_MI;
struct t52;
#define m17341(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IFormattable>()
extern TypeInfo t52_TI;
extern TypeInfo t3384_TI;
extern TypeInfo t1655_TI;
extern MethodInfo m8146_MI;
static void* m17341_RGCTXData[2] = 
{
	&t1655_TI,
	&m8146_MI,
};
extern Il2CppGenericInst GenInst_t76_0_0_0;
Il2CppGenericContext m17341_GenericContext = { NULL, &GenInst_t76_0_0_0 };
extern Il2CppType t3384_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17341_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3384_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17341_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17342_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17342_MI;
extern MethodInfo m17343_MI;
struct t52;
#define m17343(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.IConvertible>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t77_TI;
extern Il2CppGenericInst GenInst_t77_0_0_0;
Il2CppGenericContext m17343_GenericContext = { NULL, &GenInst_t77_0_0_0 };
extern Il2CppType t77_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17343_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t77_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17342_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.IConvertible>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t77_0_0_0;
Il2CppGenericContext m17342_GenericContext = { NULL, &GenInst_t77_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17342_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17344_MI;
struct t52;
#define m17344(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.IConvertible>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t77_0_0_0;
Il2CppGenericContext m17344_GenericContext = { NULL, &GenInst_t77_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17344_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t77_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17342_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17342_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17345_MI;
struct t52;
#define m17345(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.IConvertible>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t77_TI;
static void* m17345_RGCTXData[1] = 
{
	&t77_TI,
};
extern Il2CppGenericInst GenInst_t77_0_0_0;
Il2CppGenericContext m17345_GenericContext = { NULL, &GenInst_t77_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17345_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17345_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17346_MI;
struct t52;
#define m17346(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.IConvertible>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t77_0_0_0;
Il2CppGenericContext m17346_GenericContext = { NULL, &GenInst_t77_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17346_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17347_MI;
struct t52;
#define m17347(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.IConvertible>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t77_0_0_0;
Il2CppGenericContext m17347_GenericContext = { NULL, &GenInst_t77_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17347_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t77_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17342_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17342_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17348_MI;
struct t52;
#define m17348(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.IConvertible>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t77_TI;
static void* m17348_RGCTXData[1] = 
{
	&t77_TI,
};
extern Il2CppGenericInst GenInst_t77_0_0_0;
Il2CppGenericContext m17348_GenericContext = { NULL, &GenInst_t77_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17348_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17348_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17349_MI;
struct t52;
#define m17349(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.IConvertible>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t77_0_0_0;
Il2CppGenericContext m17349_GenericContext = { NULL, &GenInst_t77_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17349_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t77_TI;
struct t52;
extern MethodInfo m17350_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17350_MI;
extern MethodInfo m17351_MI;
struct t52;
#define m17351(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.IConvertible>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t77_TI;
static void* m17351_RGCTXData[1] = 
{
	&t77_TI,
};
extern Il2CppGenericInst GenInst_t77_0_0_0;
Il2CppGenericContext m17351_GenericContext = { NULL, &GenInst_t77_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17351_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17351_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17350_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.IConvertible>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t77_0_0_0;
Il2CppGenericContext m17350_GenericContext = { NULL, &GenInst_t77_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17350_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1656.h"
extern TypeInfo t1656_TI;
#include "t1656MD.h"
extern MethodInfo m8151_MI;
extern MethodInfo m17352_MI;
struct t52;
#define m17352(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IConvertible>()
extern TypeInfo t52_TI;
extern TypeInfo t3385_TI;
extern TypeInfo t1656_TI;
extern MethodInfo m8151_MI;
static void* m17352_RGCTXData[2] = 
{
	&t1656_TI,
	&m8151_MI,
};
extern Il2CppGenericInst GenInst_t77_0_0_0;
Il2CppGenericContext m17352_GenericContext = { NULL, &GenInst_t77_0_0_0 };
extern Il2CppType t3385_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17352_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3385_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17352_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17353_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17353_MI;
extern MethodInfo m17354_MI;
struct t52;
#define m17354(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.IComparable>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t78_TI;
extern Il2CppGenericInst GenInst_t78_0_0_0;
Il2CppGenericContext m17354_GenericContext = { NULL, &GenInst_t78_0_0_0 };
extern Il2CppType t78_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17354_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t78_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17353_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.IComparable>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t78_0_0_0;
Il2CppGenericContext m17353_GenericContext = { NULL, &GenInst_t78_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17353_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17355_MI;
struct t52;
#define m17355(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.IComparable>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t78_0_0_0;
Il2CppGenericContext m17355_GenericContext = { NULL, &GenInst_t78_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17355_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t78_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17353_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17353_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17356_MI;
struct t52;
#define m17356(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t78_TI;
static void* m17356_RGCTXData[1] = 
{
	&t78_TI,
};
extern Il2CppGenericInst GenInst_t78_0_0_0;
Il2CppGenericContext m17356_GenericContext = { NULL, &GenInst_t78_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17356_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17356_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17357_MI;
struct t52;
#define m17357(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t78_0_0_0;
Il2CppGenericContext m17357_GenericContext = { NULL, &GenInst_t78_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17357_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17358_MI;
struct t52;
#define m17358(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t78_0_0_0;
Il2CppGenericContext m17358_GenericContext = { NULL, &GenInst_t78_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17358_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t78_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17353_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17353_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17359_MI;
struct t52;
#define m17359(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.IComparable>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t78_TI;
static void* m17359_RGCTXData[1] = 
{
	&t78_TI,
};
extern Il2CppGenericInst GenInst_t78_0_0_0;
Il2CppGenericContext m17359_GenericContext = { NULL, &GenInst_t78_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17359_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17359_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17360_MI;
struct t52;
#define m17360(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.IComparable>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t78_0_0_0;
Il2CppGenericContext m17360_GenericContext = { NULL, &GenInst_t78_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17360_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t78_TI;
struct t52;
extern MethodInfo m17361_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17361_MI;
extern MethodInfo m17362_MI;
struct t52;
#define m17362(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.IComparable>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t78_TI;
static void* m17362_RGCTXData[1] = 
{
	&t78_TI,
};
extern Il2CppGenericInst GenInst_t78_0_0_0;
Il2CppGenericContext m17362_GenericContext = { NULL, &GenInst_t78_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17362_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17362_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17361_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.IComparable>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t78_0_0_0;
Il2CppGenericContext m17361_GenericContext = { NULL, &GenInst_t78_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17361_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1657.h"
extern TypeInfo t1657_TI;
#include "t1657MD.h"
extern MethodInfo m8156_MI;
extern MethodInfo m17363_MI;
struct t52;
#define m17363(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable>()
extern TypeInfo t52_TI;
extern TypeInfo t3386_TI;
extern TypeInfo t1657_TI;
extern MethodInfo m8156_MI;
static void* m17363_RGCTXData[2] = 
{
	&t1657_TI,
	&m8156_MI,
};
extern Il2CppGenericInst GenInst_t78_0_0_0;
Il2CppGenericContext m17363_GenericContext = { NULL, &GenInst_t78_0_0_0 };
extern Il2CppType t3386_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17363_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3386_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17363_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t159.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17364_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17364_MI;
extern MethodInfo m17365_MI;
struct t52;
#define m17365(__this, p0, method) (t159 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.ValueType>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t159_TI;
extern Il2CppGenericInst GenInst_t159_0_0_0;
Il2CppGenericContext m17365_GenericContext = { NULL, &GenInst_t159_0_0_0 };
extern Il2CppType t159_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17365_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t159_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17364_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.ValueType>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t159_0_0_0;
Il2CppGenericContext m17364_GenericContext = { NULL, &GenInst_t159_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17364_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17366_MI;
struct t52;
#define m17366(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.ValueType>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t159_0_0_0;
Il2CppGenericContext m17366_GenericContext = { NULL, &GenInst_t159_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17366_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t159_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17364_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17364_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17367_MI;
struct t52;
#define m17367(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.ValueType>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t159_TI;
static void* m17367_RGCTXData[1] = 
{
	&t159_TI,
};
extern Il2CppGenericInst GenInst_t159_0_0_0;
Il2CppGenericContext m17367_GenericContext = { NULL, &GenInst_t159_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17367_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17367_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17368_MI;
struct t52;
#define m17368(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.ValueType>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t159_0_0_0;
Il2CppGenericContext m17368_GenericContext = { NULL, &GenInst_t159_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17368_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17369_MI;
struct t52;
#define m17369(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.ValueType>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t159_0_0_0;
Il2CppGenericContext m17369_GenericContext = { NULL, &GenInst_t159_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17369_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t159_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17364_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17364_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17370_MI;
struct t52;
#define m17370(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.ValueType>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t159_TI;
static void* m17370_RGCTXData[1] = 
{
	&t159_TI,
};
extern Il2CppGenericInst GenInst_t159_0_0_0;
Il2CppGenericContext m17370_GenericContext = { NULL, &GenInst_t159_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17370_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17370_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17371_MI;
struct t52;
#define m17371(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.ValueType>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t159_0_0_0;
Il2CppGenericContext m17371_GenericContext = { NULL, &GenInst_t159_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17371_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t159_TI;
struct t52;
extern MethodInfo m17372_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17372_MI;
extern MethodInfo m17373_MI;
struct t52;
#define m17373(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.ValueType>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t159_TI;
static void* m17373_RGCTXData[1] = 
{
	&t159_TI,
};
extern Il2CppGenericInst GenInst_t159_0_0_0;
Il2CppGenericContext m17373_GenericContext = { NULL, &GenInst_t159_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17373_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17373_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17372_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.ValueType>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t159_0_0_0;
Il2CppGenericContext m17372_GenericContext = { NULL, &GenInst_t159_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17372_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1658.h"
extern TypeInfo t1658_TI;
#include "t1658MD.h"
extern MethodInfo m8161_MI;
extern MethodInfo m17374_MI;
struct t52;
#define m17374(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.ValueType>()
extern TypeInfo t52_TI;
extern TypeInfo t3387_TI;
extern TypeInfo t1658_TI;
extern MethodInfo m8161_MI;
static void* m17374_RGCTXData[2] = 
{
	&t1658_TI,
	&m8161_MI,
};
extern Il2CppGenericInst GenInst_t159_0_0_0;
Il2CppGenericContext m17374_GenericContext = { NULL, &GenInst_t159_0_0_0 };
extern Il2CppType t3387_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17374_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3387_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17374_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t29.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17375_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17375_MI;
extern MethodInfo m17376_MI;
struct t52;
#define m17376(__this, p0, method) (t29 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<PushTriggerScript>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t29_TI;
extern Il2CppGenericInst GenInst_t29_0_0_0;
Il2CppGenericContext m17376_GenericContext = { NULL, &GenInst_t29_0_0_0 };
extern Il2CppType t29_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17376_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t29_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17375_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<PushTriggerScript>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t29_0_0_0;
Il2CppGenericContext m17375_GenericContext = { NULL, &GenInst_t29_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17375_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17377_MI;
struct t52;
#define m17377(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<PushTriggerScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t29_0_0_0;
Il2CppGenericContext m17377_GenericContext = { NULL, &GenInst_t29_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17377_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t29_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17375_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17375_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17378_MI;
struct t52;
#define m17378(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<PushTriggerScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t29_TI;
static void* m17378_RGCTXData[1] = 
{
	&t29_TI,
};
extern Il2CppGenericInst GenInst_t29_0_0_0;
Il2CppGenericContext m17378_GenericContext = { NULL, &GenInst_t29_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17378_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17378_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17379_MI;
struct t52;
#define m17379(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<PushTriggerScript>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t29_0_0_0;
Il2CppGenericContext m17379_GenericContext = { NULL, &GenInst_t29_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17379_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17380_MI;
struct t52;
#define m17380(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<PushTriggerScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t29_0_0_0;
Il2CppGenericContext m17380_GenericContext = { NULL, &GenInst_t29_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17380_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t29_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17375_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17375_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17381_MI;
struct t52;
#define m17381(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<PushTriggerScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t29_TI;
static void* m17381_RGCTXData[1] = 
{
	&t29_TI,
};
extern Il2CppGenericInst GenInst_t29_0_0_0;
Il2CppGenericContext m17381_GenericContext = { NULL, &GenInst_t29_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17381_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17381_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17382_MI;
struct t52;
#define m17382(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<PushTriggerScript>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t29_0_0_0;
Il2CppGenericContext m17382_GenericContext = { NULL, &GenInst_t29_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17382_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t29_TI;
struct t52;
extern MethodInfo m17383_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17383_MI;
extern MethodInfo m17384_MI;
struct t52;
#define m17384(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<PushTriggerScript>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t29_TI;
static void* m17384_RGCTXData[1] = 
{
	&t29_TI,
};
extern Il2CppGenericInst GenInst_t29_0_0_0;
Il2CppGenericContext m17384_GenericContext = { NULL, &GenInst_t29_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17384_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17384_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17383_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<PushTriggerScript>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t29_0_0_0;
Il2CppGenericContext m17383_GenericContext = { NULL, &GenInst_t29_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17383_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1659.h"
extern TypeInfo t1659_TI;
#include "t1659MD.h"
extern MethodInfo m8166_MI;
extern MethodInfo m17385_MI;
struct t52;
#define m17385(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<PushTriggerScript>()
extern TypeInfo t52_TI;
extern TypeInfo t3388_TI;
extern TypeInfo t1659_TI;
extern MethodInfo m8166_MI;
static void* m17385_RGCTXData[2] = 
{
	&t1659_TI,
	&m8166_MI,
};
extern Il2CppGenericInst GenInst_t29_0_0_0;
Il2CppGenericContext m17385_GenericContext = { NULL, &GenInst_t29_0_0_0 };
extern Il2CppType t3388_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17385_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3388_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17385_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t29_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern Il2CppType t29_0_0_0;
extern MethodInfo m1555_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m2583_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m17386_MI;
struct t572;
#define m17386(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<PushTriggerScript>(System.Object)
extern TypeInfo t572_TI;
extern TypeInfo t53_TI;
extern TypeInfo t29_TI;
extern Il2CppType t29_0_0_0;
static void* m17386_RGCTXData[2] = 
{
	&t29_TI,
	(void*)&t29_0_0_0,
};
extern Il2CppGenericInst GenInst_t29_0_0_0;
Il2CppGenericContext m17386_GenericContext = { NULL, &GenInst_t29_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t572_TI;
MethodInfo m17386_MI = 
{
	"ThrowOnInvalidArg", (methodPointerType)&m17212_gshared, &t572_TI, &t53_0_0_0, NULL, NULL, NULL, 148, 0, 255, 0, false, true, 0, m17386_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t30.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17387_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17387_MI;
extern MethodInfo m17388_MI;
struct t52;
#define m17388(__this, p0, method) (t30 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<introScript>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t30_TI;
extern Il2CppGenericInst GenInst_t30_0_0_0;
Il2CppGenericContext m17388_GenericContext = { NULL, &GenInst_t30_0_0_0 };
extern Il2CppType t30_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17388_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t30_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17387_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<introScript>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t30_0_0_0;
Il2CppGenericContext m17387_GenericContext = { NULL, &GenInst_t30_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17387_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17389_MI;
struct t52;
#define m17389(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<introScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t30_0_0_0;
Il2CppGenericContext m17389_GenericContext = { NULL, &GenInst_t30_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17389_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t30_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17387_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17387_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17390_MI;
struct t52;
#define m17390(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<introScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t30_TI;
static void* m17390_RGCTXData[1] = 
{
	&t30_TI,
};
extern Il2CppGenericInst GenInst_t30_0_0_0;
Il2CppGenericContext m17390_GenericContext = { NULL, &GenInst_t30_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17390_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17390_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17391_MI;
struct t52;
#define m17391(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<introScript>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t30_0_0_0;
Il2CppGenericContext m17391_GenericContext = { NULL, &GenInst_t30_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17391_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17392_MI;
struct t52;
#define m17392(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<introScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t30_0_0_0;
Il2CppGenericContext m17392_GenericContext = { NULL, &GenInst_t30_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17392_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t30_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17387_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17387_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17393_MI;
struct t52;
#define m17393(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<introScript>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t30_TI;
static void* m17393_RGCTXData[1] = 
{
	&t30_TI,
};
extern Il2CppGenericInst GenInst_t30_0_0_0;
Il2CppGenericContext m17393_GenericContext = { NULL, &GenInst_t30_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17393_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17393_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17394_MI;
struct t52;
#define m17394(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<introScript>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t30_0_0_0;
Il2CppGenericContext m17394_GenericContext = { NULL, &GenInst_t30_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17394_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t30_TI;
struct t52;
extern MethodInfo m17395_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17395_MI;
extern MethodInfo m17396_MI;
struct t52;
#define m17396(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<introScript>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t30_TI;
static void* m17396_RGCTXData[1] = 
{
	&t30_TI,
};
extern Il2CppGenericInst GenInst_t30_0_0_0;
Il2CppGenericContext m17396_GenericContext = { NULL, &GenInst_t30_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17396_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17396_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17395_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<introScript>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t30_0_0_0;
Il2CppGenericContext m17395_GenericContext = { NULL, &GenInst_t30_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17395_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1663.h"
extern TypeInfo t1663_TI;
#include "t1663MD.h"
extern MethodInfo m8181_MI;
extern MethodInfo m17397_MI;
struct t52;
#define m17397(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<introScript>()
extern TypeInfo t52_TI;
extern TypeInfo t3389_TI;
extern TypeInfo t1663_TI;
extern MethodInfo m8181_MI;
static void* m17397_RGCTXData[2] = 
{
	&t1663_TI,
	&m8181_MI,
};
extern Il2CppGenericInst GenInst_t30_0_0_0;
Il2CppGenericContext m17397_GenericContext = { NULL, &GenInst_t30_0_0_0 };
extern Il2CppType t3389_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17397_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3389_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17397_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t30_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern Il2CppType t30_0_0_0;
extern MethodInfo m1555_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m2583_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m17398_MI;
struct t572;
#define m17398(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<introScript>(System.Object)
extern TypeInfo t572_TI;
extern TypeInfo t53_TI;
extern TypeInfo t30_TI;
extern Il2CppType t30_0_0_0;
static void* m17398_RGCTXData[2] = 
{
	&t30_TI,
	(void*)&t30_0_0_0,
};
extern Il2CppGenericInst GenInst_t30_0_0_0;
Il2CppGenericContext m17398_GenericContext = { NULL, &GenInst_t30_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t572_TI;
MethodInfo m17398_MI = 
{
	"ThrowOnInvalidArg", (methodPointerType)&m17212_gshared, &t572_TI, &t53_0_0_0, NULL, NULL, NULL, 148, 0, 255, 0, false, true, 0, m17398_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t31.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17399_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17399_MI;
extern MethodInfo m17400_MI;
struct t52;
#define m17400(__this, p0, method) (t31 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<SpriteSwitcher>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t31_TI;
extern Il2CppGenericInst GenInst_t31_0_0_0;
Il2CppGenericContext m17400_GenericContext = { NULL, &GenInst_t31_0_0_0 };
extern Il2CppType t31_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17400_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t31_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17399_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<SpriteSwitcher>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t31_0_0_0;
Il2CppGenericContext m17399_GenericContext = { NULL, &GenInst_t31_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17399_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17401_MI;
struct t52;
#define m17401(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<SpriteSwitcher>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t31_0_0_0;
Il2CppGenericContext m17401_GenericContext = { NULL, &GenInst_t31_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17401_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t31_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17399_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17399_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17402_MI;
struct t52;
#define m17402(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<SpriteSwitcher>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t31_TI;
static void* m17402_RGCTXData[1] = 
{
	&t31_TI,
};
extern Il2CppGenericInst GenInst_t31_0_0_0;
Il2CppGenericContext m17402_GenericContext = { NULL, &GenInst_t31_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17402_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17402_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17403_MI;
struct t52;
#define m17403(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<SpriteSwitcher>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t31_0_0_0;
Il2CppGenericContext m17403_GenericContext = { NULL, &GenInst_t31_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17403_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17404_MI;
struct t52;
#define m17404(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<SpriteSwitcher>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t31_0_0_0;
Il2CppGenericContext m17404_GenericContext = { NULL, &GenInst_t31_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17404_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t31_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17399_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17399_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17405_MI;
struct t52;
#define m17405(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<SpriteSwitcher>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t31_TI;
static void* m17405_RGCTXData[1] = 
{
	&t31_TI,
};
extern Il2CppGenericInst GenInst_t31_0_0_0;
Il2CppGenericContext m17405_GenericContext = { NULL, &GenInst_t31_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17405_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17405_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17406_MI;
struct t52;
#define m17406(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<SpriteSwitcher>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t31_0_0_0;
Il2CppGenericContext m17406_GenericContext = { NULL, &GenInst_t31_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17406_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t31_TI;
struct t52;
extern MethodInfo m17407_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17407_MI;
extern MethodInfo m17408_MI;
struct t52;
#define m17408(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<SpriteSwitcher>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t31_TI;
static void* m17408_RGCTXData[1] = 
{
	&t31_TI,
};
extern Il2CppGenericInst GenInst_t31_0_0_0;
Il2CppGenericContext m17408_GenericContext = { NULL, &GenInst_t31_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17408_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17408_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17407_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<SpriteSwitcher>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t31_0_0_0;
Il2CppGenericContext m17407_GenericContext = { NULL, &GenInst_t31_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17407_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1667.h"
extern TypeInfo t1667_TI;
#include "t1667MD.h"
extern MethodInfo m8196_MI;
extern MethodInfo m17409_MI;
struct t52;
#define m17409(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<SpriteSwitcher>()
extern TypeInfo t52_TI;
extern TypeInfo t3390_TI;
extern TypeInfo t1667_TI;
extern MethodInfo m8196_MI;
static void* m17409_RGCTXData[2] = 
{
	&t1667_TI,
	&m8196_MI,
};
extern Il2CppGenericInst GenInst_t31_0_0_0;
Il2CppGenericContext m17409_GenericContext = { NULL, &GenInst_t31_0_0_0 };
extern Il2CppType t3390_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17409_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3390_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17409_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t31_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern Il2CppType t31_0_0_0;
extern MethodInfo m1555_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m2583_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m17410_MI;
struct t572;
#define m17410(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SpriteSwitcher>(System.Object)
extern TypeInfo t572_TI;
extern TypeInfo t53_TI;
extern TypeInfo t31_TI;
extern Il2CppType t31_0_0_0;
static void* m17410_RGCTXData[2] = 
{
	&t31_TI,
	(void*)&t31_0_0_0,
};
extern Il2CppGenericInst GenInst_t31_0_0_0;
Il2CppGenericContext m17410_GenericContext = { NULL, &GenInst_t31_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t572_TI;
MethodInfo m17410_MI = 
{
	"ThrowOnInvalidArg", (methodPointerType)&m17212_gshared, &t572_TI, &t53_0_0_0, NULL, NULL, NULL, 148, 0, 255, 0, false, true, 0, m17410_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
 void m17411_gshared (t7 * __this, t350** p0, int32_t p1, int32_t p2, MethodInfo* method);
#define m17411(__this, p0, p1, p2, method) (void)m17411_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17411_MI;
extern MethodInfo m17411_MI;
extern MethodInfo m17412_MI;
struct t52;
 void m17412_gshared (t7 * __this, t350** p0, int32_t p1, MethodInfo* method);
#define m17412(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
extern MethodInfo m17412_MI;
 void m17412_gshared (t7 * __this, t350** p0, int32_t p1, MethodInfo* method)
{
	t350** G_B2_0 = {0};
	t350** G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t350** G_B3_1 = {0};
	{
		G_B1_0 = p0;
		if ((*((t350**)p0)))
		{
			G_B2_0 = p0;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000c;
	}

IL_0008:
	{
		G_B3_0 = (((int32_t)(((t52 *)(*((t350**)p0)))->max_length)));
		G_B3_1 = G_B2_0;
	}

IL_000c:
	{
		(( void (*) (t7 * __this, t350** p0, int32_t p1, int32_t p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, G_B3_1, G_B3_0, p1, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
// Metadata Definition System.Void System.Array::Resize<System.Object>(T[]&,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17411_MI;
static void* m17412_RGCTXData[1] = 
{
	&m17411_MI,
};
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17412_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17412_MI = 
{
	"Resize", (methodPointerType)&m17412_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17412_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
#include "t617MD.h"
extern MethodInfo m216_MI;
extern MethodInfo m7029_MI;
extern MethodInfo m3877_MI;
extern MethodInfo m17411_MI;
extern MethodInfo m17411_MI;
 void m17411_gshared (t7 * __this, t350** p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t350* V_0 = {0};
	{
		if ((((int32_t)p2) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		t88 * L_0 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m216(L_0, &m216_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000a:
	{
		if ((*((t350**)p0)))
		{
			goto IL_0017;
		}
	}
	{
		*((t7 **)(p0)) = (t7 *)((t350*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), p2));
		return;
	}

IL_0017:
	{
		if ((((uint32_t)(((int32_t)(((t52 *)(*((t350**)p0)))->max_length)))) != ((uint32_t)p2)))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		V_0 = ((t350*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), p2));
		int32_t L_1 = m7029(NULL, p2, p1, &m7029_MI);
		m3877(NULL, (t52 *)(t52 *)(*((t350**)p0)), (t52 *)(t52 *)V_0, L_1, &m3877_MI);
		*((t7 **)(p0)) = (t7 *)V_0;
		return;
	}
}
// Metadata Definition System.Void System.Array::Resize<System.Object>(T[]&,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t350_TI;
static void* m17411_RGCTXData[1] = 
{
	&t350_TI,
};
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17411_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17411_MI = 
{
	"Resize", (methodPointerType)&m17411_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17411_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1511.h"
extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t1511_TI;
extern TypeInfo t55_TI;
extern TypeInfo t7_TI;
#include "t1511MD.h"
extern MethodInfo m3066_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m3847_MI;
extern MethodInfo m216_MI;
extern MethodInfo m8382_MI;
extern MethodInfo m17413_MI;
extern MethodInfo m7824_MI;
struct t52;
 int32_t m7824_gshared (t7 * __this, t350* p0, t7 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m7824(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m7824_MI;
 int32_t m7824_gshared (t7 * __this, t350* p0, t7 * p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	int32_t V_0 = 0;
	t1511 * V_1 = {0};
	int32_t V_2 = 0;
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral329, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if ((((int32_t)p3) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_1 = m3835(p0, 0, &m3835_MI);
		if ((((int32_t)p2) < ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_2 = m3847(p0, 0, &m3847_MI);
		if ((((int32_t)((int32_t)(p2-1))) <= ((int32_t)((int32_t)(L_2-p3)))))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		t88 * L_3 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m216(L_3, &m216_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0030:
	{
		V_0 = ((int32_t)(p2+p3));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1511_TI));
		t1511 * L_4 = (( t1511 * (*) (t7 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = L_4;
		V_2 = p2;
		goto IL_0054;
	}

IL_003e:
	{
		bool L_5 = (bool)VirtFuncInvoker2< bool, t7 *, t7 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), V_1, (*(t7 **)(t7 **)SZArrayLdElema(p0, V_2)), p1);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		return V_2;
	}

IL_0050:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0054:
	{
		if ((((int32_t)V_2) < ((int32_t)V_0)))
		{
			goto IL_003e;
		}
	}
	{
		return (-1);
	}
}
// Metadata Definition System.Int32 System.Array::IndexOf<System.Object>(T[],T,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m8382_MI;
extern MethodInfo m17413_MI;
static void* m7824_RGCTXData[2] = 
{
	&m8382_MI,
	&m17413_MI,
};
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m7824_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m7824_MI = 
{
	"IndexOf", (methodPointerType)&m7824_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m7824_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17414_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17414_MI;
extern MethodInfo m17415_MI;
struct t52;
#define m17415(__this, p0, method) (t70 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Type>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t70_TI;
extern Il2CppGenericInst GenInst_t70_0_0_0;
Il2CppGenericContext m17415_GenericContext = { NULL, &GenInst_t70_0_0_0 };
extern Il2CppType t70_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17415_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t70_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17414_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Type>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t70_0_0_0;
Il2CppGenericContext m17414_GenericContext = { NULL, &GenInst_t70_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17414_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17416_MI;
struct t52;
#define m17416(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Type>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t70_0_0_0;
Il2CppGenericContext m17416_GenericContext = { NULL, &GenInst_t70_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17416_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t70_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17414_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17414_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17417_MI;
struct t52;
#define m17417(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Type>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t70_TI;
static void* m17417_RGCTXData[1] = 
{
	&t70_TI,
};
extern Il2CppGenericInst GenInst_t70_0_0_0;
Il2CppGenericContext m17417_GenericContext = { NULL, &GenInst_t70_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17417_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17417_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17418_MI;
struct t52;
#define m17418(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Type>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t70_0_0_0;
Il2CppGenericContext m17418_GenericContext = { NULL, &GenInst_t70_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17418_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17419_MI;
struct t52;
#define m17419(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Type>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t70_0_0_0;
Il2CppGenericContext m17419_GenericContext = { NULL, &GenInst_t70_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17419_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t70_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17414_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17414_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17420_MI;
struct t52;
#define m17420(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Type>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t70_TI;
static void* m17420_RGCTXData[1] = 
{
	&t70_TI,
};
extern Il2CppGenericInst GenInst_t70_0_0_0;
Il2CppGenericContext m17420_GenericContext = { NULL, &GenInst_t70_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17420_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17420_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17421_MI;
struct t52;
#define m17421(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Type>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t70_0_0_0;
Il2CppGenericContext m17421_GenericContext = { NULL, &GenInst_t70_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17421_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
struct t52;
extern MethodInfo m17422_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17422_MI;
extern MethodInfo m17423_MI;
struct t52;
#define m17423(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Type>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t70_TI;
static void* m17423_RGCTXData[1] = 
{
	&t70_TI,
};
extern Il2CppGenericInst GenInst_t70_0_0_0;
Il2CppGenericContext m17423_GenericContext = { NULL, &GenInst_t70_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17423_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17423_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17422_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Type>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t70_0_0_0;
Il2CppGenericContext m17422_GenericContext = { NULL, &GenInst_t70_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17422_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1686.h"
extern TypeInfo t1686_TI;
#include "t1686MD.h"
extern MethodInfo m8383_MI;
extern MethodInfo m17424_MI;
struct t52;
#define m17424(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Type>()
extern TypeInfo t52_TI;
extern TypeInfo t2647_TI;
extern TypeInfo t1686_TI;
extern MethodInfo m8383_MI;
static void* m17424_RGCTXData[2] = 
{
	&t1686_TI,
	&m8383_MI,
};
extern Il2CppGenericInst GenInst_t70_0_0_0;
Il2CppGenericContext m17424_GenericContext = { NULL, &GenInst_t70_0_0_0 };
extern Il2CppType t2647_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17424_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t2647_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17424_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17425_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17425_MI;
extern MethodInfo m17426_MI;
struct t52;
#define m17426(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Reflection.IReflect>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t1431_TI;
extern Il2CppGenericInst GenInst_t1431_0_0_0;
Il2CppGenericContext m17426_GenericContext = { NULL, &GenInst_t1431_0_0_0 };
extern Il2CppType t1431_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17426_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t1431_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17425_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Reflection.IReflect>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1431_0_0_0;
Il2CppGenericContext m17425_GenericContext = { NULL, &GenInst_t1431_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17425_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17427_MI;
struct t52;
#define m17427(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.IReflect>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1431_0_0_0;
Il2CppGenericContext m17427_GenericContext = { NULL, &GenInst_t1431_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17427_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1431_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17425_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17425_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17428_MI;
struct t52;
#define m17428(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.IReflect>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t1431_TI;
static void* m17428_RGCTXData[1] = 
{
	&t1431_TI,
};
extern Il2CppGenericInst GenInst_t1431_0_0_0;
Il2CppGenericContext m17428_GenericContext = { NULL, &GenInst_t1431_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17428_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17428_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17429_MI;
struct t52;
#define m17429(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.IReflect>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1431_0_0_0;
Il2CppGenericContext m17429_GenericContext = { NULL, &GenInst_t1431_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17429_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17430_MI;
struct t52;
#define m17430(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.IReflect>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t1431_0_0_0;
Il2CppGenericContext m17430_GenericContext = { NULL, &GenInst_t1431_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17430_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1431_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17425_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17425_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17431_MI;
struct t52;
#define m17431(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.IReflect>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t1431_TI;
static void* m17431_RGCTXData[1] = 
{
	&t1431_TI,
};
extern Il2CppGenericInst GenInst_t1431_0_0_0;
Il2CppGenericContext m17431_GenericContext = { NULL, &GenInst_t1431_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17431_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17431_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17432_MI;
struct t52;
#define m17432(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Reflection.IReflect>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1431_0_0_0;
Il2CppGenericContext m17432_GenericContext = { NULL, &GenInst_t1431_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17432_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t1431_TI;
struct t52;
extern MethodInfo m17433_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17433_MI;
extern MethodInfo m17434_MI;
struct t52;
#define m17434(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Reflection.IReflect>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1431_TI;
static void* m17434_RGCTXData[1] = 
{
	&t1431_TI,
};
extern Il2CppGenericInst GenInst_t1431_0_0_0;
Il2CppGenericContext m17434_GenericContext = { NULL, &GenInst_t1431_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17434_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17434_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17433_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Reflection.IReflect>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1431_0_0_0;
Il2CppGenericContext m17433_GenericContext = { NULL, &GenInst_t1431_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17433_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1687.h"
extern TypeInfo t1687_TI;
#include "t1687MD.h"
extern MethodInfo m8388_MI;
extern MethodInfo m17435_MI;
struct t52;
#define m17435(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.IReflect>()
extern TypeInfo t52_TI;
extern TypeInfo t3391_TI;
extern TypeInfo t1687_TI;
extern MethodInfo m8388_MI;
static void* m17435_RGCTXData[2] = 
{
	&t1687_TI,
	&m8388_MI,
};
extern Il2CppGenericInst GenInst_t1431_0_0_0;
Il2CppGenericContext m17435_GenericContext = { NULL, &GenInst_t1431_0_0_0 };
extern Il2CppType t3391_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17435_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3391_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17435_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17436_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17436_MI;
extern MethodInfo m17437_MI;
struct t52;
#define m17437(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._Type>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t1432_TI;
extern Il2CppGenericInst GenInst_t1432_0_0_0;
Il2CppGenericContext m17437_GenericContext = { NULL, &GenInst_t1432_0_0_0 };
extern Il2CppType t1432_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17437_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t1432_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17436_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._Type>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1432_0_0_0;
Il2CppGenericContext m17436_GenericContext = { NULL, &GenInst_t1432_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17436_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17438_MI;
struct t52;
#define m17438(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._Type>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1432_0_0_0;
Il2CppGenericContext m17438_GenericContext = { NULL, &GenInst_t1432_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17438_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1432_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17436_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17436_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17439_MI;
struct t52;
#define m17439(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._Type>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t1432_TI;
static void* m17439_RGCTXData[1] = 
{
	&t1432_TI,
};
extern Il2CppGenericInst GenInst_t1432_0_0_0;
Il2CppGenericContext m17439_GenericContext = { NULL, &GenInst_t1432_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17439_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17439_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17440_MI;
struct t52;
#define m17440(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._Type>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1432_0_0_0;
Il2CppGenericContext m17440_GenericContext = { NULL, &GenInst_t1432_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17440_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17441_MI;
struct t52;
#define m17441(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._Type>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t1432_0_0_0;
Il2CppGenericContext m17441_GenericContext = { NULL, &GenInst_t1432_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17441_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1432_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17436_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17436_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17442_MI;
struct t52;
#define m17442(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._Type>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t1432_TI;
static void* m17442_RGCTXData[1] = 
{
	&t1432_TI,
};
extern Il2CppGenericInst GenInst_t1432_0_0_0;
Il2CppGenericContext m17442_GenericContext = { NULL, &GenInst_t1432_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17442_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17442_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17443_MI;
struct t52;
#define m17443(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._Type>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1432_0_0_0;
Il2CppGenericContext m17443_GenericContext = { NULL, &GenInst_t1432_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17443_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t1432_TI;
struct t52;
extern MethodInfo m17444_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17444_MI;
extern MethodInfo m17445_MI;
struct t52;
#define m17445(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._Type>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1432_TI;
static void* m17445_RGCTXData[1] = 
{
	&t1432_TI,
};
extern Il2CppGenericInst GenInst_t1432_0_0_0;
Il2CppGenericContext m17445_GenericContext = { NULL, &GenInst_t1432_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17445_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17445_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17444_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._Type>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1432_0_0_0;
Il2CppGenericContext m17444_GenericContext = { NULL, &GenInst_t1432_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17444_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1688.h"
extern TypeInfo t1688_TI;
#include "t1688MD.h"
extern MethodInfo m8393_MI;
extern MethodInfo m17446_MI;
struct t52;
#define m17446(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._Type>()
extern TypeInfo t52_TI;
extern TypeInfo t3392_TI;
extern TypeInfo t1688_TI;
extern MethodInfo m8393_MI;
static void* m17446_RGCTXData[2] = 
{
	&t1688_TI,
	&m8393_MI,
};
extern Il2CppGenericInst GenInst_t1432_0_0_0;
Il2CppGenericContext m17446_GenericContext = { NULL, &GenInst_t1432_0_0_0 };
extern Il2CppType t3392_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17446_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3392_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17446_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t341.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17447_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17447_MI;
extern MethodInfo m17448_MI;
struct t52;
#define m17448(__this, p0, method) (t341 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Reflection.MemberInfo>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t341_TI;
extern Il2CppGenericInst GenInst_t341_0_0_0;
Il2CppGenericContext m17448_GenericContext = { NULL, &GenInst_t341_0_0_0 };
extern Il2CppType t341_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17448_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t341_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17447_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Reflection.MemberInfo>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t341_0_0_0;
Il2CppGenericContext m17447_GenericContext = { NULL, &GenInst_t341_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17447_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17449_MI;
struct t52;
#define m17449(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.MemberInfo>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t341_0_0_0;
Il2CppGenericContext m17449_GenericContext = { NULL, &GenInst_t341_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17449_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t341_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17447_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17447_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17450_MI;
struct t52;
#define m17450(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.MemberInfo>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t341_TI;
static void* m17450_RGCTXData[1] = 
{
	&t341_TI,
};
extern Il2CppGenericInst GenInst_t341_0_0_0;
Il2CppGenericContext m17450_GenericContext = { NULL, &GenInst_t341_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17450_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17450_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17451_MI;
struct t52;
#define m17451(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.MemberInfo>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t341_0_0_0;
Il2CppGenericContext m17451_GenericContext = { NULL, &GenInst_t341_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17451_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17452_MI;
struct t52;
#define m17452(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.MemberInfo>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t341_0_0_0;
Il2CppGenericContext m17452_GenericContext = { NULL, &GenInst_t341_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17452_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t341_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17447_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17447_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17453_MI;
struct t52;
#define m17453(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.MemberInfo>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t341_TI;
static void* m17453_RGCTXData[1] = 
{
	&t341_TI,
};
extern Il2CppGenericInst GenInst_t341_0_0_0;
Il2CppGenericContext m17453_GenericContext = { NULL, &GenInst_t341_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17453_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17453_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17454_MI;
struct t52;
#define m17454(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Reflection.MemberInfo>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t341_0_0_0;
Il2CppGenericContext m17454_GenericContext = { NULL, &GenInst_t341_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17454_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t341_TI;
struct t52;
extern MethodInfo m17455_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17455_MI;
extern MethodInfo m17456_MI;
struct t52;
#define m17456(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Reflection.MemberInfo>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t341_TI;
static void* m17456_RGCTXData[1] = 
{
	&t341_TI,
};
extern Il2CppGenericInst GenInst_t341_0_0_0;
Il2CppGenericContext m17456_GenericContext = { NULL, &GenInst_t341_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17456_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17456_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17455_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Reflection.MemberInfo>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t341_0_0_0;
Il2CppGenericContext m17455_GenericContext = { NULL, &GenInst_t341_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17455_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1689.h"
extern TypeInfo t1689_TI;
#include "t1689MD.h"
extern MethodInfo m8398_MI;
extern MethodInfo m17457_MI;
struct t52;
#define m17457(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.MemberInfo>()
extern TypeInfo t52_TI;
extern TypeInfo t3393_TI;
extern TypeInfo t1689_TI;
extern MethodInfo m8398_MI;
static void* m17457_RGCTXData[2] = 
{
	&t1689_TI,
	&m8398_MI,
};
extern Il2CppGenericInst GenInst_t341_0_0_0;
Il2CppGenericContext m17457_GenericContext = { NULL, &GenInst_t341_0_0_0 };
extern Il2CppType t3393_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17457_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3393_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17457_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17458_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17458_MI;
extern MethodInfo m17459_MI;
struct t52;
#define m17459(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Reflection.ICustomAttributeProvider>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t1303_TI;
extern Il2CppGenericInst GenInst_t1303_0_0_0;
Il2CppGenericContext m17459_GenericContext = { NULL, &GenInst_t1303_0_0_0 };
extern Il2CppType t1303_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17459_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t1303_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17458_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Reflection.ICustomAttributeProvider>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1303_0_0_0;
Il2CppGenericContext m17458_GenericContext = { NULL, &GenInst_t1303_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17458_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17460_MI;
struct t52;
#define m17460(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.ICustomAttributeProvider>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1303_0_0_0;
Il2CppGenericContext m17460_GenericContext = { NULL, &GenInst_t1303_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17460_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1303_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17458_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17458_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17461_MI;
struct t52;
#define m17461(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.ICustomAttributeProvider>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t1303_TI;
static void* m17461_RGCTXData[1] = 
{
	&t1303_TI,
};
extern Il2CppGenericInst GenInst_t1303_0_0_0;
Il2CppGenericContext m17461_GenericContext = { NULL, &GenInst_t1303_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17461_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17461_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17462_MI;
struct t52;
#define m17462(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.ICustomAttributeProvider>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1303_0_0_0;
Il2CppGenericContext m17462_GenericContext = { NULL, &GenInst_t1303_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17462_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17463_MI;
struct t52;
#define m17463(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.ICustomAttributeProvider>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t1303_0_0_0;
Il2CppGenericContext m17463_GenericContext = { NULL, &GenInst_t1303_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17463_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1303_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17458_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17458_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17464_MI;
struct t52;
#define m17464(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.ICustomAttributeProvider>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t1303_TI;
static void* m17464_RGCTXData[1] = 
{
	&t1303_TI,
};
extern Il2CppGenericInst GenInst_t1303_0_0_0;
Il2CppGenericContext m17464_GenericContext = { NULL, &GenInst_t1303_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17464_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17464_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17465_MI;
struct t52;
#define m17465(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Reflection.ICustomAttributeProvider>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1303_0_0_0;
Il2CppGenericContext m17465_GenericContext = { NULL, &GenInst_t1303_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17465_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t1303_TI;
struct t52;
extern MethodInfo m17466_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17466_MI;
extern MethodInfo m17467_MI;
struct t52;
#define m17467(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Reflection.ICustomAttributeProvider>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1303_TI;
static void* m17467_RGCTXData[1] = 
{
	&t1303_TI,
};
extern Il2CppGenericInst GenInst_t1303_0_0_0;
Il2CppGenericContext m17467_GenericContext = { NULL, &GenInst_t1303_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17467_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17467_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17466_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Reflection.ICustomAttributeProvider>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1303_0_0_0;
Il2CppGenericContext m17466_GenericContext = { NULL, &GenInst_t1303_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17466_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1690.h"
extern TypeInfo t1690_TI;
#include "t1690MD.h"
extern MethodInfo m8403_MI;
extern MethodInfo m17468_MI;
struct t52;
#define m17468(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.ICustomAttributeProvider>()
extern TypeInfo t52_TI;
extern TypeInfo t3394_TI;
extern TypeInfo t1690_TI;
extern MethodInfo m8403_MI;
static void* m17468_RGCTXData[2] = 
{
	&t1690_TI,
	&m8403_MI,
};
extern Il2CppGenericInst GenInst_t1303_0_0_0;
Il2CppGenericContext m17468_GenericContext = { NULL, &GenInst_t1303_0_0_0 };
extern Il2CppType t3394_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17468_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3394_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17468_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17469_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17469_MI;
extern MethodInfo m17470_MI;
struct t52;
#define m17470(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MemberInfo>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t1433_TI;
extern Il2CppGenericInst GenInst_t1433_0_0_0;
Il2CppGenericContext m17470_GenericContext = { NULL, &GenInst_t1433_0_0_0 };
extern Il2CppType t1433_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17470_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t1433_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17469_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._MemberInfo>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1433_0_0_0;
Il2CppGenericContext m17469_GenericContext = { NULL, &GenInst_t1433_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17469_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17471_MI;
struct t52;
#define m17471(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._MemberInfo>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1433_0_0_0;
Il2CppGenericContext m17471_GenericContext = { NULL, &GenInst_t1433_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17471_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1433_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17469_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17469_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17472_MI;
struct t52;
#define m17472(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._MemberInfo>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t1433_TI;
static void* m17472_RGCTXData[1] = 
{
	&t1433_TI,
};
extern Il2CppGenericInst GenInst_t1433_0_0_0;
Il2CppGenericContext m17472_GenericContext = { NULL, &GenInst_t1433_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17472_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17472_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17473_MI;
struct t52;
#define m17473(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._MemberInfo>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1433_0_0_0;
Il2CppGenericContext m17473_GenericContext = { NULL, &GenInst_t1433_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17473_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17474_MI;
struct t52;
#define m17474(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._MemberInfo>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t1433_0_0_0;
Il2CppGenericContext m17474_GenericContext = { NULL, &GenInst_t1433_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17474_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1433_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17469_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17469_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17475_MI;
struct t52;
#define m17475(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._MemberInfo>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t1433_TI;
static void* m17475_RGCTXData[1] = 
{
	&t1433_TI,
};
extern Il2CppGenericInst GenInst_t1433_0_0_0;
Il2CppGenericContext m17475_GenericContext = { NULL, &GenInst_t1433_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17475_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17475_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17476_MI;
struct t52;
#define m17476(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._MemberInfo>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1433_0_0_0;
Il2CppGenericContext m17476_GenericContext = { NULL, &GenInst_t1433_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17476_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t1433_TI;
struct t52;
extern MethodInfo m17477_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17477_MI;
extern MethodInfo m17478_MI;
struct t52;
#define m17478(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._MemberInfo>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1433_TI;
static void* m17478_RGCTXData[1] = 
{
	&t1433_TI,
};
extern Il2CppGenericInst GenInst_t1433_0_0_0;
Il2CppGenericContext m17478_GenericContext = { NULL, &GenInst_t1433_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17478_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17478_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17477_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._MemberInfo>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1433_0_0_0;
Il2CppGenericContext m17477_GenericContext = { NULL, &GenInst_t1433_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17477_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1691.h"
extern TypeInfo t1691_TI;
#include "t1691MD.h"
extern MethodInfo m8408_MI;
extern MethodInfo m17479_MI;
struct t52;
#define m17479(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._MemberInfo>()
extern TypeInfo t52_TI;
extern TypeInfo t3395_TI;
extern TypeInfo t1691_TI;
extern MethodInfo m8408_MI;
static void* m17479_RGCTXData[2] = 
{
	&t1691_TI,
	&m8408_MI,
};
extern Il2CppGenericInst GenInst_t1433_0_0_0;
Il2CppGenericContext m17479_GenericContext = { NULL, &GenInst_t1433_0_0_0 };
extern Il2CppType t3395_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17479_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3395_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17479_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
struct t52;
#include "t741.h"
#include "t86.h"
#include "t616.h"
#include "t244.h"
#include "t1295.h"
 void m17480_gshared (t7 * __this, t350* p0, t350* p1, int32_t p2, int32_t p3, t7* p4, MethodInfo* method);
#define m17480(__this, p0, p1, p2, p3, p4, method) (void)m17480_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17480_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17480_MI;
extern MethodInfo m17481_MI;
struct t52;
 void m17481_gshared (t7 * __this, t350* p0, int32_t p1, int32_t p2, t7* p3, MethodInfo* method);
#define m17481(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
extern MethodInfo m17481_MI;
 void m17481_gshared (t7 * __this, t350* p0, int32_t p1, int32_t p2, t7* p3, MethodInfo* method)
{
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral329, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		(( void (*) (t7 * __this, t350* p0, t350* p1, int32_t p2, int32_t p3, t7* p4, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, p0, (t350*)(t350*)NULL, p1, p2, p3, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
// Metadata Definition System.Void System.Array::Sort<System.Object>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17480_MI;
static void* m17481_RGCTXData[1] = 
{
	&m17480_MI,
};
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17481_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17481_MI = 
{
	"Sort", (methodPointerType)&m17481_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17481_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t348_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t250_TI;
extern TypeInfo t244_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
#include "t1295MD.h"
struct t52;
#include "t114.h"
 t741 * m17482_gshared (t7 * __this, t350* p0, MethodInfo* method);
#define m17482(__this, p0, method) (t741 *)m17482_gshared((t7 *)__this, (t350*)p0, method)
extern MethodInfo m17482_MI;
struct t52;
 void m17483_gshared (t7 * __this, t350* p0, t350* p1, int32_t p2, int32_t p3, t7* p4, MethodInfo* method);
#define m17483(__this, p0, p1, p2, p3, p4, method) (void)m17483_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17483_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m6582_MI;
extern MethodInfo m17482_MI;
extern MethodInfo m3904_MI;
extern MethodInfo m3905_MI;
extern MethodInfo m3906_MI;
extern MethodInfo m17483_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17480_MI;
extern MethodInfo m17480_MI;
 void m17480_gshared (t7 * __this, t350* p0, t350* p1, int32_t p2, int32_t p3, t7* p4, MethodInfo* method)
{
	t741 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t86 * V_3 = {0};
	t86 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t86 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral365, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if ((((int32_t)p2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001d:
	{
		if ((((int32_t)p3) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		t88 * L_2 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_2, (t34*) &_stringLiteral241, &m6591_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_002c:
	{
		if ((((int32_t)((int32_t)((((int32_t)(((t52 *)p0)->max_length)))-p2))) < ((int32_t)p3)))
		{
			goto IL_003f;
		}
	}
	{
		if (!p1)
		{
			goto IL_0045;
		}
	}
	{
		if ((((int32_t)p2) <= ((int32_t)((int32_t)((((int32_t)(((t52 *)p1)->max_length)))-p3)))))
		{
			goto IL_0045;
		}
	}

IL_003f:
	{
		t348 * L_3 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m6582(L_3, &m6582_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0045:
	{
		if ((((int32_t)p3) > ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_004a:
	{
		if (p4)
		{
			goto IL_00b0;
		}
	}
	{
		if (p1)
		{
			goto IL_0055;
		}
	}
	{
		V_0 = (t741 *)NULL;
		goto IL_005c;
	}

IL_0055:
	{
		t741 * L_4 = (( t741 * (*) (t7 * __this, t350* p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, p1, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = L_4;
	}

IL_005c:
	{
		if (!((t744*)IsInst(p0, InitializedTypeInfo(&t744_TI))))
		{
			goto IL_0078;
		}
	}
	{
		t350* L_5 = p0;
		m3904(NULL, ((t744*)IsInst(((t350*)L_5), InitializedTypeInfo(&t744_TI))), p2, p3, V_0, &m3904_MI);
		return;
	}

IL_0078:
	{
		if (!((t731*)IsInst(p0, InitializedTypeInfo(&t731_TI))))
		{
			goto IL_0094;
		}
	}
	{
		t350* L_6 = p0;
		m3905(NULL, ((t731*)IsInst(((t350*)L_6), InitializedTypeInfo(&t731_TI))), p2, p3, V_0, &m3905_MI);
		return;
	}

IL_0094:
	{
		if (!((t250*)IsInst(p0, InitializedTypeInfo(&t250_TI))))
		{
			goto IL_00b0;
		}
	}
	{
		t350* L_7 = p0;
		m3906(NULL, ((t250*)IsInst(((t350*)L_7), InitializedTypeInfo(&t250_TI))), p2, p3, V_0, &m3906_MI);
		return;
	}

IL_00b0:
	try
	{ // begin try (depth: 1)
		V_1 = p2;
		V_2 = ((int32_t)(((int32_t)(p2+p3))-1));
		(( void (*) (t7 * __this, t350* p0, t350* p1, int32_t p2, int32_t p3, t7* p4, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, p0, p1, V_1, V_2, p4, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// IL_00c3: leave.s IL_00d9
		goto IL_00d9;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t86 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t86_TI, e.ex->object.klass))
			goto IL_00c5;
		throw e;
	}

IL_00c5:
	{ // begin catch(System.Exception)
		V_3 = ((t86 *)__exception_local);
		t34* L_8 = m4015(NULL, (t34*) &_stringLiteral366, &m4015_MI);
		t1295 * L_9 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7024(L_9, L_8, V_3, &m7024_MI);
		il2cpp_codegen_raise_exception (L_9);
		// IL_00d7: leave.s IL_00d9
		goto IL_00d9;
	} // end catch (depth: 1)

IL_00d9:
	{
		return;
	}
}
// Metadata Definition System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17482_MI;
extern TypeInfo t350_TI;
extern MethodInfo m17483_MI;
static void* m17480_RGCTXData[3] = 
{
	&m17482_MI,
	&t350_TI,
	&m17483_MI,
};
extern Il2CppGenericInst GenInst_t7_0_0_0_t7_0_0_0;
Il2CppGenericContext m17480_GenericContext = { NULL, &GenInst_t7_0_0_0_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17480_MI = 
{
	"Sort", (methodPointerType)&m17480_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17480_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
#include "t741MD.h"
extern MethodInfo m3899_MI;
extern MethodInfo m3810_MI;
extern MethodInfo m3902_MI;
extern MethodInfo m3901_MI;
extern MethodInfo m17482_MI;
extern MethodInfo m17482_MI;
 t741 * m17482_gshared (t7 * __this, t350* p0, MethodInfo* method)
{
	{
		if (!((t731*)IsInst(p0, InitializedTypeInfo(&t731_TI))))
		{
			goto IL_0015;
		}
	}
	{
		t114 L_0 = { &m3899_MI };
		t741 * L_1 = (t741 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t741_TI));
		m3810(L_1, (t7 *)(t7 *)p0, L_0, &m3810_MI);
		return L_1;
	}

IL_0015:
	{
		if (!((t744*)IsInst(p0, InitializedTypeInfo(&t744_TI))))
		{
			goto IL_002a;
		}
	}
	{
		t114 L_2 = { &m3902_MI };
		t741 * L_3 = (t741 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t741_TI));
		m3810(L_3, (t7 *)(t7 *)p0, L_2, &m3810_MI);
		return L_3;
	}

IL_002a:
	{
		t114 L_4 = { &m3901_MI };
		t741 * L_5 = (t741 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t741_TI));
		m3810(L_5, (t7 *)(t7 *)p0, L_4, &m3810_MI);
		return L_5;
	}
}
// Metadata Definition System.Array/Swapper System.Array::get_swapper<System.Object>(T[])
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17482_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t741_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17482_MI = 
{
	"get_swapper", (methodPointerType)&m17482_gshared, &t52_TI, &t741_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17484_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17484_MI;
extern MethodInfo m17485_MI;
struct t52;
 int32_t m17485 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17485_MI;
 int32_t m17485 (t52 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern Il2CppGenericInst GenInst_t60_0_0_0;
Il2CppGenericContext m17485_GenericContext = { NULL, &GenInst_t60_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17485_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17485, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17484_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Int32>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t60_0_0_0;
Il2CppGenericContext m17484_GenericContext = { NULL, &GenInst_t60_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17484_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17486_MI;
struct t52;
 void m17486 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17486_MI;
 void m17486 (t52 * __this, int32_t p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Int32>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t60_0_0_0;
Il2CppGenericContext m17486_GenericContext = { NULL, &GenInst_t60_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17486_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17486, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t60_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17484_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17484_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17487_MI;
struct t52;
 bool m17487 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17487_MI;
 bool m17487 (t52 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t60_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t60_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t7 * L_9 = Box(InitializedTypeInfo(&t60_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t60_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Int32>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t60_0_0_0;
Il2CppGenericContext m17487_GenericContext = { NULL, &GenInst_t60_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17487_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17487, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17488_MI;
struct t52;
 void m17488 (t52 * __this, t731* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17488_MI;
 void m17488 (t52 * __this, t731* p0, int32_t p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral329, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t34* L_2 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_3 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_3, L_2, &m7242_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0027:
	{
		int32_t L_4 = m3833(__this, 0, &m3833_MI);
		int32_t L_5 = m3835(p0, 0, &m3835_MI);
		int32_t L_6 = m3833(p0, 0, &m3833_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t348 * L_7 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m2046(L_7, (t34*) &_stringLiteral330, &m2046_MI);
		il2cpp_codegen_raise_exception (L_7);
	}

IL_004c:
	{
		int32_t L_8 = m3831(p0, &m3831_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t34* L_9 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_10 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_10, L_9, &m7242_MI);
		il2cpp_codegen_raise_exception (L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t34* L_11 = m4015(NULL, (t34*) &_stringLiteral331, &m4015_MI);
		t88 * L_12 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6592(L_12, (t34*) &_stringLiteral326, L_11, &m6592_MI);
		il2cpp_codegen_raise_exception (L_12);
	}

IL_007e:
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		int32_t L_14 = m3833(__this, 0, &m3833_MI);
		m3878(NULL, __this, L_13, (t52 *)(t52 *)p0, p1, L_14, &m3878_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Int32>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t60_0_0_0;
Il2CppGenericContext m17488_GenericContext = { NULL, &GenInst_t60_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17488_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17488, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17489_MI;
struct t52;
 bool m17489 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17489_MI;
 bool m17489 (t52 * __this, int32_t p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Int32>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t60_0_0_0;
Il2CppGenericContext m17489_GenericContext = { NULL, &GenInst_t60_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17489_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17489, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t60_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17484_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17484_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17490_MI;
struct t52;
 int32_t m17490 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17490_MI;
 int32_t m17490 (t52 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t60_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t60_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t7 * L_11 = Box(InitializedTypeInfo(&t60_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t60_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Int32>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern Il2CppGenericInst GenInst_t60_0_0_0;
Il2CppGenericContext m17490_GenericContext = { NULL, &GenInst_t60_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17490_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17490, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17491_MI;
struct t52;
 void m17491 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17491_MI;
 void m17491 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Int32>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t60_0_0_0;
Il2CppGenericContext m17491_GenericContext = { NULL, &GenInst_t60_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17491_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17491, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t60_TI;
struct t52;
extern MethodInfo m17492_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17492_MI;
extern MethodInfo m17493_MI;
struct t52;
 void m17493 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17493_MI;
 void m17493 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t350* V_0 = {0};
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		V_0 = ((t350*)IsInst(__this, InitializedTypeInfo(&t350_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t7 * L_3 = Box(InitializedTypeInfo(&t60_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(V_0, p0)) = (t7 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Int32>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t60_0_0_0;
Il2CppGenericContext m17493_GenericContext = { NULL, &GenInst_t60_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17493_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17493, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17492_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Int32>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t60_0_0_0;
Il2CppGenericContext m17492_GenericContext = { NULL, &GenInst_t60_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17492_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1695.h"
extern TypeInfo t1695_TI;
#include "t1695MD.h"
extern MethodInfo m8426_MI;
extern MethodInfo m17494_MI;
struct t52;
 t7* m17494 (t52 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17494_MI;
 t7* m17494 (t52 * __this, MethodInfo* method){
	{
		t1695  L_0 = {0};
		m8426(&L_0, __this, &m8426_MI);
		t1695  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1695_TI), &L_1);
		return (t7*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Int32>()
extern TypeInfo t52_TI;
extern TypeInfo t1997_TI;
extern Il2CppGenericInst GenInst_t60_0_0_0;
Il2CppGenericContext m17494_GenericContext = { NULL, &GenInst_t60_0_0_0 };
extern Il2CppType t1997_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17494_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17494, &t52_TI, &t1997_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17495_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17495_MI;
extern MethodInfo m17496_MI;
struct t52;
#define m17496(__this, p0, method) (t7*)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.IComparable`1<System.Int32>>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t1354_TI;
extern Il2CppGenericInst GenInst_t1354_0_0_0;
Il2CppGenericContext m17496_GenericContext = { NULL, &GenInst_t1354_0_0_0 };
extern Il2CppType t1354_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17496_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t1354_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17495_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.Int32>>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1354_0_0_0;
Il2CppGenericContext m17495_GenericContext = { NULL, &GenInst_t1354_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17495_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17497_MI;
struct t52;
#define m17497(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.Int32>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1354_0_0_0;
Il2CppGenericContext m17497_GenericContext = { NULL, &GenInst_t1354_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17497_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1354_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17495_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17495_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17498_MI;
struct t52;
#define m17498(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.Int32>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t1354_TI;
static void* m17498_RGCTXData[1] = 
{
	&t1354_TI,
};
extern Il2CppGenericInst GenInst_t1354_0_0_0;
Il2CppGenericContext m17498_GenericContext = { NULL, &GenInst_t1354_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17498_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17498_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17499_MI;
struct t52;
#define m17499(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.Int32>>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1354_0_0_0;
Il2CppGenericContext m17499_GenericContext = { NULL, &GenInst_t1354_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17499_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17500_MI;
struct t52;
#define m17500(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.Int32>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t1354_0_0_0;
Il2CppGenericContext m17500_GenericContext = { NULL, &GenInst_t1354_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17500_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1354_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17495_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17495_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17501_MI;
struct t52;
#define m17501(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.Int32>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t1354_TI;
static void* m17501_RGCTXData[1] = 
{
	&t1354_TI,
};
extern Il2CppGenericInst GenInst_t1354_0_0_0;
Il2CppGenericContext m17501_GenericContext = { NULL, &GenInst_t1354_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17501_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17501_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17502_MI;
struct t52;
#define m17502(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.Int32>>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1354_0_0_0;
Il2CppGenericContext m17502_GenericContext = { NULL, &GenInst_t1354_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17502_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t1354_TI;
struct t52;
extern MethodInfo m17503_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17503_MI;
extern MethodInfo m17504_MI;
struct t52;
#define m17504(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.Int32>>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1354_TI;
static void* m17504_RGCTXData[1] = 
{
	&t1354_TI,
};
extern Il2CppGenericInst GenInst_t1354_0_0_0;
Il2CppGenericContext m17504_GenericContext = { NULL, &GenInst_t1354_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17504_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17504_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17503_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.Int32>>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1354_0_0_0;
Il2CppGenericContext m17503_GenericContext = { NULL, &GenInst_t1354_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17503_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1696.h"
extern TypeInfo t1696_TI;
#include "t1696MD.h"
extern MethodInfo m8431_MI;
extern MethodInfo m17505_MI;
struct t52;
#define m17505(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.Int32>>()
extern TypeInfo t52_TI;
extern TypeInfo t3396_TI;
extern TypeInfo t1696_TI;
extern MethodInfo m8431_MI;
static void* m17505_RGCTXData[2] = 
{
	&t1696_TI,
	&m8431_MI,
};
extern Il2CppGenericInst GenInst_t1354_0_0_0;
Il2CppGenericContext m17505_GenericContext = { NULL, &GenInst_t1354_0_0_0 };
extern Il2CppType t3396_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17505_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3396_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17505_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17506_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17506_MI;
extern MethodInfo m17507_MI;
struct t52;
#define m17507(__this, p0, method) (t7*)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int32>>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t1355_TI;
extern Il2CppGenericInst GenInst_t1355_0_0_0;
Il2CppGenericContext m17507_GenericContext = { NULL, &GenInst_t1355_0_0_0 };
extern Il2CppType t1355_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17507_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t1355_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17506_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.Int32>>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1355_0_0_0;
Il2CppGenericContext m17506_GenericContext = { NULL, &GenInst_t1355_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17506_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17508_MI;
struct t52;
#define m17508(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.Int32>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1355_0_0_0;
Il2CppGenericContext m17508_GenericContext = { NULL, &GenInst_t1355_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17508_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1355_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17506_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17506_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17509_MI;
struct t52;
#define m17509(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.Int32>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t1355_TI;
static void* m17509_RGCTXData[1] = 
{
	&t1355_TI,
};
extern Il2CppGenericInst GenInst_t1355_0_0_0;
Il2CppGenericContext m17509_GenericContext = { NULL, &GenInst_t1355_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17509_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17509_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17510_MI;
struct t52;
#define m17510(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.Int32>>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1355_0_0_0;
Il2CppGenericContext m17510_GenericContext = { NULL, &GenInst_t1355_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17510_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17511_MI;
struct t52;
#define m17511(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.Int32>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t1355_0_0_0;
Il2CppGenericContext m17511_GenericContext = { NULL, &GenInst_t1355_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17511_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1355_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17506_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17506_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17512_MI;
struct t52;
#define m17512(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.Int32>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t1355_TI;
static void* m17512_RGCTXData[1] = 
{
	&t1355_TI,
};
extern Il2CppGenericInst GenInst_t1355_0_0_0;
Il2CppGenericContext m17512_GenericContext = { NULL, &GenInst_t1355_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17512_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17512_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17513_MI;
struct t52;
#define m17513(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.Int32>>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1355_0_0_0;
Il2CppGenericContext m17513_GenericContext = { NULL, &GenInst_t1355_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17513_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t1355_TI;
struct t52;
extern MethodInfo m17514_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17514_MI;
extern MethodInfo m17515_MI;
struct t52;
#define m17515(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.Int32>>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1355_TI;
static void* m17515_RGCTXData[1] = 
{
	&t1355_TI,
};
extern Il2CppGenericInst GenInst_t1355_0_0_0;
Il2CppGenericContext m17515_GenericContext = { NULL, &GenInst_t1355_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17515_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17515_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17514_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.Int32>>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1355_0_0_0;
Il2CppGenericContext m17514_GenericContext = { NULL, &GenInst_t1355_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17514_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1697.h"
extern TypeInfo t1697_TI;
#include "t1697MD.h"
extern MethodInfo m8436_MI;
extern MethodInfo m17516_MI;
struct t52;
#define m17516(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.Int32>>()
extern TypeInfo t52_TI;
extern TypeInfo t3397_TI;
extern TypeInfo t1697_TI;
extern MethodInfo m8436_MI;
static void* m17516_RGCTXData[2] = 
{
	&t1697_TI,
	&m8436_MI,
};
extern Il2CppGenericInst GenInst_t1355_0_0_0;
Il2CppGenericContext m17516_GenericContext = { NULL, &GenInst_t1355_0_0_0 };
extern Il2CppType t3397_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17516_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3397_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17516_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17517_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17517_MI;
extern MethodInfo m17518_MI;
struct t52;
 double m17518 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17518_MI;
 double m17518 (t52 * __this, int32_t p0, MethodInfo* method){
	double V_0 = 0.0;
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Double>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t616_TI;
extern Il2CppGenericInst GenInst_t616_0_0_0;
Il2CppGenericContext m17518_GenericContext = { NULL, &GenInst_t616_0_0_0 };
extern Il2CppType t616_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17518_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17518, &t52_TI, &t616_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17517_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Double>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t616_0_0_0;
Il2CppGenericContext m17517_GenericContext = { NULL, &GenInst_t616_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17517_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17519_MI;
struct t52;
 void m17519 (t52 * __this, double p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17519_MI;
 void m17519 (t52 * __this, double p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Double>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t616_0_0_0;
Il2CppGenericContext m17519_GenericContext = { NULL, &GenInst_t616_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17519_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17519, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t616_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17517_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17517_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17520_MI;
struct t52;
 bool m17520 (t52 * __this, double p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17520_MI;
 bool m17520 (t52 * __this, double p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		double L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t616_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		double L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t616_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		double L_8 = V_2;
		t7 * L_9 = Box(InitializedTypeInfo(&t616_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t616_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Double>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t616_0_0_0;
Il2CppGenericContext m17520_GenericContext = { NULL, &GenInst_t616_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17520_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17520, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17521_MI;
struct t52;
 void m17521 (t52 * __this, t744* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17521_MI;
 void m17521 (t52 * __this, t744* p0, int32_t p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral329, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t34* L_2 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_3 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_3, L_2, &m7242_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0027:
	{
		int32_t L_4 = m3833(__this, 0, &m3833_MI);
		int32_t L_5 = m3835(p0, 0, &m3835_MI);
		int32_t L_6 = m3833(p0, 0, &m3833_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t348 * L_7 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m2046(L_7, (t34*) &_stringLiteral330, &m2046_MI);
		il2cpp_codegen_raise_exception (L_7);
	}

IL_004c:
	{
		int32_t L_8 = m3831(p0, &m3831_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t34* L_9 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_10 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_10, L_9, &m7242_MI);
		il2cpp_codegen_raise_exception (L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t34* L_11 = m4015(NULL, (t34*) &_stringLiteral331, &m4015_MI);
		t88 * L_12 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6592(L_12, (t34*) &_stringLiteral326, L_11, &m6592_MI);
		il2cpp_codegen_raise_exception (L_12);
	}

IL_007e:
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		int32_t L_14 = m3833(__this, 0, &m3833_MI);
		m3878(NULL, __this, L_13, (t52 *)(t52 *)p0, p1, L_14, &m3878_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Double>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t616_0_0_0;
Il2CppGenericContext m17521_GenericContext = { NULL, &GenInst_t616_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17521_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17521, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17522_MI;
struct t52;
 bool m17522 (t52 * __this, double p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17522_MI;
 bool m17522 (t52 * __this, double p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Double>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t616_0_0_0;
Il2CppGenericContext m17522_GenericContext = { NULL, &GenInst_t616_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17522_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17522, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t616_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17517_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17517_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17523_MI;
struct t52;
 int32_t m17523 (t52 * __this, double p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17523_MI;
 int32_t m17523 (t52 * __this, double p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		double L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t616_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		double L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t616_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		double L_10 = p0;
		t7 * L_11 = Box(InitializedTypeInfo(&t616_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t616_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Double>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern Il2CppGenericInst GenInst_t616_0_0_0;
Il2CppGenericContext m17523_GenericContext = { NULL, &GenInst_t616_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17523_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17523, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17524_MI;
struct t52;
 void m17524 (t52 * __this, int32_t p0, double p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17524_MI;
 void m17524 (t52 * __this, int32_t p0, double p1, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Double>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t616_0_0_0;
Il2CppGenericContext m17524_GenericContext = { NULL, &GenInst_t616_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17524_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17524, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t616_TI;
struct t52;
extern MethodInfo m17525_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17525_MI;
extern MethodInfo m17526_MI;
struct t52;
 void m17526 (t52 * __this, int32_t p0, double p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17526_MI;
 void m17526 (t52 * __this, int32_t p0, double p1, MethodInfo* method){
	t350* V_0 = {0};
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		V_0 = ((t350*)IsInst(__this, InitializedTypeInfo(&t350_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		double L_2 = p1;
		t7 * L_3 = Box(InitializedTypeInfo(&t616_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(V_0, p0)) = (t7 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Double>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t616_0_0_0;
Il2CppGenericContext m17526_GenericContext = { NULL, &GenInst_t616_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17526_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17526, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17525_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Double>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t616_0_0_0;
Il2CppGenericContext m17525_GenericContext = { NULL, &GenInst_t616_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17525_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1698.h"
extern TypeInfo t1698_TI;
#include "t1698MD.h"
extern MethodInfo m8441_MI;
extern MethodInfo m17527_MI;
struct t52;
 t7* m17527 (t52 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17527_MI;
 t7* m17527 (t52 * __this, MethodInfo* method){
	{
		t1698  L_0 = {0};
		m8441(&L_0, __this, &m8441_MI);
		t1698  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1698_TI), &L_1);
		return (t7*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Double>()
extern TypeInfo t52_TI;
extern TypeInfo t3398_TI;
extern Il2CppGenericInst GenInst_t616_0_0_0;
Il2CppGenericContext m17527_GenericContext = { NULL, &GenInst_t616_0_0_0 };
extern Il2CppType t3398_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17527_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17527, &t52_TI, &t3398_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17528_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17528_MI;
extern MethodInfo m17529_MI;
struct t52;
#define m17529(__this, p0, method) (t7*)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.IComparable`1<System.Double>>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t1399_TI;
extern Il2CppGenericInst GenInst_t1399_0_0_0;
Il2CppGenericContext m17529_GenericContext = { NULL, &GenInst_t1399_0_0_0 };
extern Il2CppType t1399_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17529_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t1399_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17528_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.Double>>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1399_0_0_0;
Il2CppGenericContext m17528_GenericContext = { NULL, &GenInst_t1399_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17528_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17530_MI;
struct t52;
#define m17530(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.Double>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1399_0_0_0;
Il2CppGenericContext m17530_GenericContext = { NULL, &GenInst_t1399_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17530_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1399_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17528_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17528_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17531_MI;
struct t52;
#define m17531(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.Double>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t1399_TI;
static void* m17531_RGCTXData[1] = 
{
	&t1399_TI,
};
extern Il2CppGenericInst GenInst_t1399_0_0_0;
Il2CppGenericContext m17531_GenericContext = { NULL, &GenInst_t1399_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17531_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17531_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17532_MI;
struct t52;
#define m17532(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.Double>>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1399_0_0_0;
Il2CppGenericContext m17532_GenericContext = { NULL, &GenInst_t1399_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17532_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17533_MI;
struct t52;
#define m17533(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.Double>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t1399_0_0_0;
Il2CppGenericContext m17533_GenericContext = { NULL, &GenInst_t1399_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17533_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1399_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17528_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17528_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17534_MI;
struct t52;
#define m17534(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.Double>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t1399_TI;
static void* m17534_RGCTXData[1] = 
{
	&t1399_TI,
};
extern Il2CppGenericInst GenInst_t1399_0_0_0;
Il2CppGenericContext m17534_GenericContext = { NULL, &GenInst_t1399_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17534_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17534_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17535_MI;
struct t52;
#define m17535(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.Double>>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1399_0_0_0;
Il2CppGenericContext m17535_GenericContext = { NULL, &GenInst_t1399_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17535_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t1399_TI;
struct t52;
extern MethodInfo m17536_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17536_MI;
extern MethodInfo m17537_MI;
struct t52;
#define m17537(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.Double>>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1399_TI;
static void* m17537_RGCTXData[1] = 
{
	&t1399_TI,
};
extern Il2CppGenericInst GenInst_t1399_0_0_0;
Il2CppGenericContext m17537_GenericContext = { NULL, &GenInst_t1399_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17537_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17537_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17536_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.Double>>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1399_0_0_0;
Il2CppGenericContext m17536_GenericContext = { NULL, &GenInst_t1399_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17536_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1699.h"
extern TypeInfo t1699_TI;
#include "t1699MD.h"
extern MethodInfo m8446_MI;
extern MethodInfo m17538_MI;
struct t52;
#define m17538(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.Double>>()
extern TypeInfo t52_TI;
extern TypeInfo t3399_TI;
extern TypeInfo t1699_TI;
extern MethodInfo m8446_MI;
static void* m17538_RGCTXData[2] = 
{
	&t1699_TI,
	&m8446_MI,
};
extern Il2CppGenericInst GenInst_t1399_0_0_0;
Il2CppGenericContext m17538_GenericContext = { NULL, &GenInst_t1399_0_0_0 };
extern Il2CppType t3399_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17538_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3399_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17538_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17539_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17539_MI;
extern MethodInfo m17540_MI;
struct t52;
#define m17540(__this, p0, method) (t7*)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.IEquatable`1<System.Double>>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t1400_TI;
extern Il2CppGenericInst GenInst_t1400_0_0_0;
Il2CppGenericContext m17540_GenericContext = { NULL, &GenInst_t1400_0_0_0 };
extern Il2CppType t1400_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17540_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t1400_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17539_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.Double>>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1400_0_0_0;
Il2CppGenericContext m17539_GenericContext = { NULL, &GenInst_t1400_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17539_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17541_MI;
struct t52;
#define m17541(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.Double>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1400_0_0_0;
Il2CppGenericContext m17541_GenericContext = { NULL, &GenInst_t1400_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17541_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1400_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17539_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17539_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17542_MI;
struct t52;
#define m17542(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.Double>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t1400_TI;
static void* m17542_RGCTXData[1] = 
{
	&t1400_TI,
};
extern Il2CppGenericInst GenInst_t1400_0_0_0;
Il2CppGenericContext m17542_GenericContext = { NULL, &GenInst_t1400_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17542_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17542_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17543_MI;
struct t52;
#define m17543(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.Double>>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1400_0_0_0;
Il2CppGenericContext m17543_GenericContext = { NULL, &GenInst_t1400_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17543_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17544_MI;
struct t52;
#define m17544(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.Double>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t1400_0_0_0;
Il2CppGenericContext m17544_GenericContext = { NULL, &GenInst_t1400_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17544_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1400_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17539_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17539_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17545_MI;
struct t52;
#define m17545(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.Double>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t1400_TI;
static void* m17545_RGCTXData[1] = 
{
	&t1400_TI,
};
extern Il2CppGenericInst GenInst_t1400_0_0_0;
Il2CppGenericContext m17545_GenericContext = { NULL, &GenInst_t1400_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17545_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17545_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17546_MI;
struct t52;
#define m17546(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.Double>>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1400_0_0_0;
Il2CppGenericContext m17546_GenericContext = { NULL, &GenInst_t1400_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17546_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t1400_TI;
struct t52;
extern MethodInfo m17547_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17547_MI;
extern MethodInfo m17548_MI;
struct t52;
#define m17548(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.Double>>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1400_TI;
static void* m17548_RGCTXData[1] = 
{
	&t1400_TI,
};
extern Il2CppGenericInst GenInst_t1400_0_0_0;
Il2CppGenericContext m17548_GenericContext = { NULL, &GenInst_t1400_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17548_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17548_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17547_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.Double>>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1400_0_0_0;
Il2CppGenericContext m17547_GenericContext = { NULL, &GenInst_t1400_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17547_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1700.h"
extern TypeInfo t1700_TI;
#include "t1700MD.h"
extern MethodInfo m8451_MI;
extern MethodInfo m17549_MI;
struct t52;
#define m17549(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.Double>>()
extern TypeInfo t52_TI;
extern TypeInfo t3400_TI;
extern TypeInfo t1700_TI;
extern MethodInfo m8451_MI;
static void* m17549_RGCTXData[2] = 
{
	&t1700_TI,
	&m8451_MI,
};
extern Il2CppGenericInst GenInst_t1400_0_0_0;
Il2CppGenericContext m17549_GenericContext = { NULL, &GenInst_t1400_0_0_0 };
extern Il2CppType t3400_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17549_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3400_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17549_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17550_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17550_MI;
extern MethodInfo m17551_MI;
struct t52;
 uint16_t m17551 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17551_MI;
 uint16_t m17551 (t52 * __this, int32_t p0, MethodInfo* method){
	uint16_t V_0 = 0x0;
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<System.Char>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t244_TI;
extern Il2CppGenericInst GenInst_t244_0_0_0;
Il2CppGenericContext m17551_GenericContext = { NULL, &GenInst_t244_0_0_0 };
extern Il2CppType t244_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17551_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17551, &t52_TI, &t244_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17550_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Char>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t244_0_0_0;
Il2CppGenericContext m17550_GenericContext = { NULL, &GenInst_t244_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17550_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17552_MI;
struct t52;
 void m17552 (t52 * __this, uint16_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17552_MI;
 void m17552 (t52 * __this, uint16_t p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Char>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t244_0_0_0;
Il2CppGenericContext m17552_GenericContext = { NULL, &GenInst_t244_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17552_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17552, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t244_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17550_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17550_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17553_MI;
struct t52;
 bool m17553 (t52 * __this, uint16_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17553_MI;
 bool m17553 (t52 * __this, uint16_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		uint16_t L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t244_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		uint16_t L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t244_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		uint16_t L_8 = V_2;
		t7 * L_9 = Box(InitializedTypeInfo(&t244_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t244_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Char>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t244_0_0_0;
Il2CppGenericContext m17553_GenericContext = { NULL, &GenInst_t244_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17553_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17553, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17554_MI;
struct t52;
 void m17554 (t52 * __this, t250* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17554_MI;
 void m17554 (t52 * __this, t250* p0, int32_t p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral329, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t34* L_2 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_3 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_3, L_2, &m7242_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0027:
	{
		int32_t L_4 = m3833(__this, 0, &m3833_MI);
		int32_t L_5 = m3835(p0, 0, &m3835_MI);
		int32_t L_6 = m3833(p0, 0, &m3833_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t348 * L_7 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m2046(L_7, (t34*) &_stringLiteral330, &m2046_MI);
		il2cpp_codegen_raise_exception (L_7);
	}

IL_004c:
	{
		int32_t L_8 = m3831(p0, &m3831_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t34* L_9 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_10 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_10, L_9, &m7242_MI);
		il2cpp_codegen_raise_exception (L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t34* L_11 = m4015(NULL, (t34*) &_stringLiteral331, &m4015_MI);
		t88 * L_12 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6592(L_12, (t34*) &_stringLiteral326, L_11, &m6592_MI);
		il2cpp_codegen_raise_exception (L_12);
	}

IL_007e:
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		int32_t L_14 = m3833(__this, 0, &m3833_MI);
		m3878(NULL, __this, L_13, (t52 *)(t52 *)p0, p1, L_14, &m3878_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Char>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t244_0_0_0;
Il2CppGenericContext m17554_GenericContext = { NULL, &GenInst_t244_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17554_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17554, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17555_MI;
struct t52;
 bool m17555 (t52 * __this, uint16_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17555_MI;
 bool m17555 (t52 * __this, uint16_t p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Char>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t244_0_0_0;
Il2CppGenericContext m17555_GenericContext = { NULL, &GenInst_t244_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17555_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17555, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t244_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17550_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17550_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17556_MI;
struct t52;
 int32_t m17556 (t52 * __this, uint16_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17556_MI;
 int32_t m17556 (t52 * __this, uint16_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		uint16_t L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t244_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		uint16_t L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t244_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		uint16_t L_10 = p0;
		t7 * L_11 = Box(InitializedTypeInfo(&t244_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t244_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Char>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern Il2CppGenericInst GenInst_t244_0_0_0;
Il2CppGenericContext m17556_GenericContext = { NULL, &GenInst_t244_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17556_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17556, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17557_MI;
struct t52;
 void m17557 (t52 * __this, int32_t p0, uint16_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17557_MI;
 void m17557 (t52 * __this, int32_t p0, uint16_t p1, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Char>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t244_0_0_0;
Il2CppGenericContext m17557_GenericContext = { NULL, &GenInst_t244_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17557_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17557, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t244_TI;
struct t52;
extern MethodInfo m17558_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17558_MI;
extern MethodInfo m17559_MI;
struct t52;
 void m17559 (t52 * __this, int32_t p0, uint16_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17559_MI;
 void m17559 (t52 * __this, int32_t p0, uint16_t p1, MethodInfo* method){
	t350* V_0 = {0};
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		V_0 = ((t350*)IsInst(__this, InitializedTypeInfo(&t350_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		uint16_t L_2 = p1;
		t7 * L_3 = Box(InitializedTypeInfo(&t244_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(V_0, p0)) = (t7 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Char>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t244_0_0_0;
Il2CppGenericContext m17559_GenericContext = { NULL, &GenInst_t244_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17559_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17559, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17558_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Char>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t244_0_0_0;
Il2CppGenericContext m17558_GenericContext = { NULL, &GenInst_t244_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17558_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1701.h"
extern TypeInfo t1701_TI;
#include "t1701MD.h"
extern MethodInfo m8456_MI;
extern MethodInfo m17560_MI;
struct t52;
 t7* m17560 (t52 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17560_MI;
 t7* m17560 (t52 * __this, MethodInfo* method){
	{
		t1701  L_0 = {0};
		m8456(&L_0, __this, &m8456_MI);
		t1701  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1701_TI), &L_1);
		return (t7*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Char>()
extern TypeInfo t52_TI;
extern TypeInfo t729_TI;
extern Il2CppGenericInst GenInst_t244_0_0_0;
Il2CppGenericContext m17560_GenericContext = { NULL, &GenInst_t244_0_0_0 };
extern Il2CppType t729_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17560_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17560, &t52_TI, &t729_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17561_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17561_MI;
extern MethodInfo m17562_MI;
struct t52;
#define m17562(__this, p0, method) (t7*)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.IComparable`1<System.Char>>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t1385_TI;
extern Il2CppGenericInst GenInst_t1385_0_0_0;
Il2CppGenericContext m17562_GenericContext = { NULL, &GenInst_t1385_0_0_0 };
extern Il2CppType t1385_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17562_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t1385_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17561_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.Char>>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1385_0_0_0;
Il2CppGenericContext m17561_GenericContext = { NULL, &GenInst_t1385_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17561_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17563_MI;
struct t52;
#define m17563(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.Char>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1385_0_0_0;
Il2CppGenericContext m17563_GenericContext = { NULL, &GenInst_t1385_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17563_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1385_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17561_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17561_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17564_MI;
struct t52;
#define m17564(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.Char>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t1385_TI;
static void* m17564_RGCTXData[1] = 
{
	&t1385_TI,
};
extern Il2CppGenericInst GenInst_t1385_0_0_0;
Il2CppGenericContext m17564_GenericContext = { NULL, &GenInst_t1385_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17564_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17564_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17565_MI;
struct t52;
#define m17565(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.Char>>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1385_0_0_0;
Il2CppGenericContext m17565_GenericContext = { NULL, &GenInst_t1385_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17565_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17566_MI;
struct t52;
#define m17566(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.Char>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t1385_0_0_0;
Il2CppGenericContext m17566_GenericContext = { NULL, &GenInst_t1385_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17566_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1385_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17561_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17561_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17567_MI;
struct t52;
#define m17567(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.Char>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t1385_TI;
static void* m17567_RGCTXData[1] = 
{
	&t1385_TI,
};
extern Il2CppGenericInst GenInst_t1385_0_0_0;
Il2CppGenericContext m17567_GenericContext = { NULL, &GenInst_t1385_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17567_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17567_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17568_MI;
struct t52;
#define m17568(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.Char>>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1385_0_0_0;
Il2CppGenericContext m17568_GenericContext = { NULL, &GenInst_t1385_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17568_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t1385_TI;
struct t52;
extern MethodInfo m17569_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17569_MI;
extern MethodInfo m17570_MI;
struct t52;
#define m17570(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.Char>>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1385_TI;
static void* m17570_RGCTXData[1] = 
{
	&t1385_TI,
};
extern Il2CppGenericInst GenInst_t1385_0_0_0;
Il2CppGenericContext m17570_GenericContext = { NULL, &GenInst_t1385_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17570_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17570_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17569_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.Char>>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1385_0_0_0;
Il2CppGenericContext m17569_GenericContext = { NULL, &GenInst_t1385_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17569_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1702.h"
extern TypeInfo t1702_TI;
#include "t1702MD.h"
extern MethodInfo m8461_MI;
extern MethodInfo m17571_MI;
struct t52;
#define m17571(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.Char>>()
extern TypeInfo t52_TI;
extern TypeInfo t3401_TI;
extern TypeInfo t1702_TI;
extern MethodInfo m8461_MI;
static void* m17571_RGCTXData[2] = 
{
	&t1702_TI,
	&m8461_MI,
};
extern Il2CppGenericInst GenInst_t1385_0_0_0;
Il2CppGenericContext m17571_GenericContext = { NULL, &GenInst_t1385_0_0_0 };
extern Il2CppType t3401_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17571_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3401_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17571_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17572_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17572_MI;
extern MethodInfo m17573_MI;
struct t52;
#define m17573(__this, p0, method) (t7*)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.IEquatable`1<System.Char>>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t1386_TI;
extern Il2CppGenericInst GenInst_t1386_0_0_0;
Il2CppGenericContext m17573_GenericContext = { NULL, &GenInst_t1386_0_0_0 };
extern Il2CppType t1386_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17573_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t1386_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17572_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.Char>>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1386_0_0_0;
Il2CppGenericContext m17572_GenericContext = { NULL, &GenInst_t1386_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17572_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17574_MI;
struct t52;
#define m17574(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.Char>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1386_0_0_0;
Il2CppGenericContext m17574_GenericContext = { NULL, &GenInst_t1386_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17574_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1386_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17572_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17572_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17575_MI;
struct t52;
#define m17575(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.Char>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t1386_TI;
static void* m17575_RGCTXData[1] = 
{
	&t1386_TI,
};
extern Il2CppGenericInst GenInst_t1386_0_0_0;
Il2CppGenericContext m17575_GenericContext = { NULL, &GenInst_t1386_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17575_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17575_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17576_MI;
struct t52;
#define m17576(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.Char>>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1386_0_0_0;
Il2CppGenericContext m17576_GenericContext = { NULL, &GenInst_t1386_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17576_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17577_MI;
struct t52;
#define m17577(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.Char>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t1386_0_0_0;
Il2CppGenericContext m17577_GenericContext = { NULL, &GenInst_t1386_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17577_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1386_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17572_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17572_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17578_MI;
struct t52;
#define m17578(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.Char>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t1386_TI;
static void* m17578_RGCTXData[1] = 
{
	&t1386_TI,
};
extern Il2CppGenericInst GenInst_t1386_0_0_0;
Il2CppGenericContext m17578_GenericContext = { NULL, &GenInst_t1386_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17578_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17578_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17579_MI;
struct t52;
#define m17579(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.Char>>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1386_0_0_0;
Il2CppGenericContext m17579_GenericContext = { NULL, &GenInst_t1386_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17579_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t1386_TI;
struct t52;
extern MethodInfo m17580_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17580_MI;
extern MethodInfo m17581_MI;
struct t52;
#define m17581(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.Char>>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1386_TI;
static void* m17581_RGCTXData[1] = 
{
	&t1386_TI,
};
extern Il2CppGenericInst GenInst_t1386_0_0_0;
Il2CppGenericContext m17581_GenericContext = { NULL, &GenInst_t1386_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17581_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17581_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17580_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.Char>>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1386_0_0_0;
Il2CppGenericContext m17580_GenericContext = { NULL, &GenInst_t1386_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17580_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1703.h"
extern TypeInfo t1703_TI;
#include "t1703MD.h"
extern MethodInfo m8466_MI;
extern MethodInfo m17582_MI;
struct t52;
#define m17582(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.Char>>()
extern TypeInfo t52_TI;
extern TypeInfo t3402_TI;
extern TypeInfo t1703_TI;
extern MethodInfo m8466_MI;
static void* m17582_RGCTXData[2] = 
{
	&t1703_TI,
	&m8466_MI,
};
extern Il2CppGenericInst GenInst_t1386_0_0_0;
Il2CppGenericContext m17582_GenericContext = { NULL, &GenInst_t1386_0_0_0 };
extern Il2CppType t3402_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17582_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3402_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17582_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
 int32_t m17583_gshared (t7 * __this, t7 * p0, t7 * p1, t7* p2, MethodInfo* method);
#define m17583(__this, p0, p1, p2, method) (int32_t)m17583_gshared((t7 *)__this, (t7 *)p0, (t7 *)p1, (t7*)p2, method)
extern MethodInfo m17583_MI;
struct t52;
 void m17584_gshared (t7 * __this, t350* p0, t350* p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m17584(__this, p0, p1, p2, p3, method) (void)m17584_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m17584_MI;
extern MethodInfo m17483_MI;
extern MethodInfo m17583_MI;
extern MethodInfo m17584_MI;
extern MethodInfo m17483_MI;
extern MethodInfo m17483_MI;
extern MethodInfo m17483_MI;
 void m17483_gshared (t7 * __this, t350* p0, t350* p1, int32_t p2, int32_t p3, t7* p4, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t7 * V_3 = {0};
	{
		if ((((int32_t)p2) < ((int32_t)p3)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		V_0 = p2;
		V_1 = p3;
		V_2 = ((int32_t)(V_0+((int32_t)(((int32_t)(V_1-V_0))/2))));
		V_3 = (*(t7 **)(t7 **)SZArrayLdElema(p0, V_2));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_001f:
	{
		if ((((int32_t)V_0) >= ((int32_t)p3)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_0 = (( int32_t (*) (t7 * __this, t7 * p0, t7 * p1, t7* p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (*(t7 **)(t7 **)SZArrayLdElema(p0, V_0)), V_3, p4, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0035:
	{
		goto IL_003b;
	}

IL_0037:
	{
		V_1 = ((int32_t)(V_1-1));
	}

IL_003b:
	{
		if ((((int32_t)V_1) <= ((int32_t)p2)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = (( int32_t (*) (t7 * __this, t7 * p0, t7 * p1, t7* p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, V_3, (*(t7 **)(t7 **)SZArrayLdElema(p0, V_1)), p4, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}

IL_0051:
	{
		if ((((int32_t)V_0) > ((int32_t)V_1)))
		{
			goto IL_0068;
		}
	}
	{
		(( void (*) (t7 * __this, t350* p0, t350* p1, int32_t p2, int32_t p3, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL, p0, p1, V_0, V_1, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = ((int32_t)(V_0+1));
		V_1 = ((int32_t)(V_1-1));
		goto IL_006a;
	}

IL_0068:
	{
		goto IL_006c;
	}

IL_006a:
	{
		goto IL_0019;
	}

IL_006c:
	{
		if ((((int32_t)p2) >= ((int32_t)V_1)))
		{
			goto IL_007b;
		}
	}
	{
		(( void (*) (t7 * __this, t350* p0, t350* p1, int32_t p2, int32_t p3, t7* p4, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, p0, p1, p2, V_1, p4, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_007b:
	{
		if ((((int32_t)V_0) >= ((int32_t)p3)))
		{
			goto IL_008a;
		}
	}
	{
		(( void (*) (t7 * __this, t350* p0, t350* p1, int32_t p2, int32_t p3, t7* p4, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, p0, p1, V_0, p3, p4, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_008a:
	{
		return;
	}
}
// Metadata Definition System.Void System.Array::qsort<System.Object,System.Object>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17583_MI;
extern MethodInfo m17584_MI;
extern MethodInfo m17483_MI;
static void* m17483_RGCTXData[3] = 
{
	&m17583_MI,
	&m17584_MI,
	&m17483_MI,
};
extern Il2CppGenericInst GenInst_t7_0_0_0_t7_0_0_0;
Il2CppGenericContext m17483_GenericContext = { NULL, &GenInst_t7_0_0_0_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17483_MI = 
{
	"qsort", (methodPointerType)&m17483_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17483_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t3403_TI;
extern TypeInfo t60_TI;
extern TypeInfo t7_TI;
extern TypeInfo t3404_TI;
extern TypeInfo t78_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1295_TI;
#include "t34MD.h"
extern Il2CppType t7_0_0_0;
extern MethodInfo m17585_MI;
extern MethodInfo m17586_MI;
extern MethodInfo m7420_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m1656_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m17583_MI;
extern MethodInfo m17583_MI;
 int32_t m17583_gshared (t7 * __this, t7 * p0, t7 * p1, t7* p2, MethodInfo* method)
{
	t34* V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		if (!p2)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_0 = (int32_t)InterfaceFuncInvoker2< int32_t, t7 *, t7 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), p2, p0, p1);
		return L_0;
	}

IL_000c:
	{
		t7 * L_1 = p0;
		if (((t7 *)L_1))
		{
			goto IL_0021;
		}
	}
	{
		t7 * L_2 = p1;
		if (((t7 *)L_2))
		{
			goto IL_001f;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0020;
	}

IL_001f:
	{
		G_B6_0 = (-1);
	}

IL_0020:
	{
		return G_B6_0;
	}

IL_0021:
	{
		t7 * L_3 = p1;
		if (((t7 *)L_3))
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		t7 * L_4 = p0;
		if (!((t7*)IsInst(((t7 *)L_4), IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))
		{
			goto IL_004a;
		}
	}
	{
		t7 * L_5 = p0;
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3), ((t7*)Castclass(((t7 *)L_5), IL2CPP_RGCTX_DATA(method->rgctx_data, 2))), p1);
		return L_6;
	}

IL_004a:
	{
		t7 * L_7 = p0;
		if (!((t7 *)IsInst(((t7 *)L_7), InitializedTypeInfo(&t78_TI))))
		{
			goto IL_006e;
		}
	}
	{
		t7 * L_8 = p0;
		t7 * L_9 = p1;
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(&m7420_MI, ((t7 *)Castclass(((t7 *)L_8), InitializedTypeInfo(&t78_TI))), ((t7 *)L_9));
		return L_10;
	}

IL_006e:
	{
		t34* L_11 = m4015(NULL, (t34*) &_stringLiteral369, &m4015_MI);
		V_0 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
		t70 * L_12 = m1675(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 4)), &m1675_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		t34* L_13 = m1656(NULL, V_0, L_12, &m1656_MI);
		t1295 * L_14 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7023(L_14, L_13, &m7023_MI);
		il2cpp_codegen_raise_exception (L_14);
	}
}
// Metadata Definition System.Int32 System.Array::compare<System.Object>(T,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m17585_MI;
extern TypeInfo t7_TI;
extern TypeInfo t3404_TI;
extern MethodInfo m17586_MI;
extern Il2CppType t7_0_0_0;
static void* m17583_RGCTXData[5] = 
{
	&m17585_MI,
	&t7_TI,
	&t3404_TI,
	&m17586_MI,
	(void*)&t7_0_0_0,
};
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17583_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17583_MI = 
{
	"compare", (methodPointerType)&m17583_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17583_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17584_MI;
extern MethodInfo m17584_MI;
 void m17584_gshared (t7 * __this, t350* p0, t350* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	t7 * V_0 = {0};
	t7 * V_1 = {0};
	{
		V_0 = (*(t7 **)(t7 **)SZArrayLdElema(p0, p2));
		*((t7 **)(t7 **)SZArrayLdElema(p0, p2)) = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(p0, p3));
		*((t7 **)(t7 **)SZArrayLdElema(p0, p3)) = (t7 *)V_0;
		if (!p1)
		{
			goto IL_003f;
		}
	}
	{
		V_1 = (*(t7 **)(t7 **)SZArrayLdElema(p1, p2));
		*((t7 **)(t7 **)SZArrayLdElema(p1, p2)) = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(p1, p3));
		*((t7 **)(t7 **)SZArrayLdElema(p1, p3)) = (t7 *)V_1;
	}

IL_003f:
	{
		return;
	}
}
// Metadata Definition System.Void System.Array::swap<System.Object,System.Object>(K[],V[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t7_0_0_0_t7_0_0_0;
Il2CppGenericContext m17584_GenericContext = { NULL, &GenInst_t7_0_0_0_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17584_MI = 
{
	"swap", (methodPointerType)&m17584_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1679.h"
extern TypeInfo t87_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
 void m17587_gshared (t7 * __this, t350* p0, int32_t p1, int32_t p2, t1679 * p3, MethodInfo* method);
#define m17587(__this, p0, p1, p2, p3, method) (void)m17587_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t1679 *)p3, method)
extern MethodInfo m17587_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17587_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17588_MI;
struct t52;
 void m17588_gshared (t7 * __this, t350* p0, int32_t p1, t1679 * p2, MethodInfo* method);
#define m17588(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
extern MethodInfo m17588_MI;
 void m17588_gshared (t7 * __this, t350* p0, int32_t p1, t1679 * p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t86 * V_2 = {0};
	t86 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t86 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		if (p2)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral367, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if ((((int32_t)p1) <= ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		if ((((int32_t)(((int32_t)(((t52 *)p0)->max_length)))) > ((int32_t)1)))
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		V_0 = 0;
		V_1 = ((int32_t)(p1-1));
		(( void (*) (t7 * __this, t350* p0, int32_t p1, int32_t p2, t1679 * p3, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, p0, V_0, V_1, p2, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// IL_0028: leave.s IL_003e
		goto IL_003e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t86 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t86_TI, e.ex->object.klass))
			goto IL_002a;
		throw e;
	}

IL_002a:
	{ // begin catch(System.Exception)
		V_2 = ((t86 *)__exception_local);
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral368, &m4015_MI);
		t1295 * L_2 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7024(L_2, L_1, V_2, &m7024_MI);
		il2cpp_codegen_raise_exception (L_2);
		// IL_003c: leave.s IL_003e
		goto IL_003e;
	} // end catch (depth: 1)

IL_003e:
	{
		return;
	}
}
// Metadata Definition System.Void System.Array::Sort<System.Object>(T[],System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17587_MI;
static void* m17588_RGCTXData[1] = 
{
	&m17587_MI,
};
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17588_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17588_MI = 
{
	"Sort", (methodPointerType)&m17588_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17588_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1679_TI;
extern TypeInfo t60_TI;
extern TypeInfo t7_TI;
#include "t1679MD.h"
struct t52;
 void m17589_gshared (t7 * __this, t350* p0, int32_t p1, int32_t p2, MethodInfo* method);
#define m17589(__this, p0, p1, p2, method) (void)m17589_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17589_MI;
extern MethodInfo m17587_MI;
extern MethodInfo m8472_MI;
extern MethodInfo m17589_MI;
extern MethodInfo m17587_MI;
extern MethodInfo m17587_MI;
extern MethodInfo m17587_MI;
 void m17587_gshared (t7 * __this, t350* p0, int32_t p1, int32_t p2, t1679 * p3, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t7 * V_3 = {0};
	{
		if ((((int32_t)p1) < ((int32_t)p2)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		V_0 = p1;
		V_1 = p2;
		V_2 = ((int32_t)(V_0+((int32_t)(((int32_t)(V_1-V_0))/2))));
		V_3 = (*(t7 **)(t7 **)SZArrayLdElema(p0, V_2));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_001f:
	{
		if ((((int32_t)V_0) >= ((int32_t)p2)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t7 *, t7 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), p3, (*(t7 **)(t7 **)SZArrayLdElema(p0, V_0)), V_3);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0034:
	{
		goto IL_003a;
	}

IL_0036:
	{
		V_1 = ((int32_t)(V_1-1));
	}

IL_003a:
	{
		if ((((int32_t)V_1) <= ((int32_t)p1)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker2< int32_t, t7 *, t7 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), p3, V_3, (*(t7 **)(t7 **)SZArrayLdElema(p0, V_1)));
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}

IL_004f:
	{
		if ((((int32_t)V_0) > ((int32_t)V_1)))
		{
			goto IL_0065;
		}
	}
	{
		(( void (*) (t7 * __this, t350* p0, int32_t p1, int32_t p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL, p0, V_0, V_1, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = ((int32_t)(V_0+1));
		V_1 = ((int32_t)(V_1-1));
		goto IL_0067;
	}

IL_0065:
	{
		goto IL_0069;
	}

IL_0067:
	{
		goto IL_0019;
	}

IL_0069:
	{
		if ((((int32_t)p1) >= ((int32_t)V_1)))
		{
			goto IL_0076;
		}
	}
	{
		(( void (*) (t7 * __this, t350* p0, int32_t p1, int32_t p2, t1679 * p3, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, p0, p1, V_1, p3, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0076:
	{
		if ((((int32_t)V_0) >= ((int32_t)p2)))
		{
			goto IL_0083;
		}
	}
	{
		(( void (*) (t7 * __this, t350* p0, int32_t p1, int32_t p2, t1679 * p3, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, p0, V_0, p2, p3, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0083:
	{
		return;
	}
}
// Metadata Definition System.Void System.Array::qsort<System.Object>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m8472_MI;
extern MethodInfo m17589_MI;
extern MethodInfo m17587_MI;
static void* m17587_RGCTXData[3] = 
{
	&m8472_MI,
	&m17589_MI,
	&m17587_MI,
};
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17587_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17587_MI = 
{
	"qsort", (methodPointerType)&m17587_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17587_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17589_MI;
extern MethodInfo m17589_MI;
 void m17589_gshared (t7 * __this, t350* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t7 * V_0 = {0};
	{
		V_0 = (*(t7 **)(t7 **)SZArrayLdElema(p0, p1));
		*((t7 **)(t7 **)SZArrayLdElema(p0, p1)) = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(p0, p2));
		*((t7 **)(t7 **)SZArrayLdElema(p0, p2)) = (t7 *)V_0;
		return;
	}
}
// Metadata Definition System.Void System.Array::swap<System.Object>(T[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17589_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17589_MI = 
{
	"swap", (methodPointerType)&m17589_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m17590(__this, p0, p1, p2, method) (void)m17411_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17590_MI;
extern MethodInfo m17590_MI;
extern MethodInfo m17591_MI;
struct t52;
#define m17591(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::Resize<UnityEngine.Sprite>(T[]&,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17590_MI;
static void* m17591_RGCTXData[1] = 
{
	&m17590_MI,
};
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17591_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17591_MI = 
{
	"Resize", (methodPointerType)&m17412_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17591_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t10_TI;
extern TypeInfo t11_TI;
extern MethodInfo m216_MI;
extern MethodInfo m7029_MI;
extern MethodInfo m3877_MI;
extern MethodInfo m17590_MI;
// Metadata Definition System.Void System.Array::Resize<UnityEngine.Sprite>(T[]&,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t10_TI;
static void* m17590_RGCTXData[1] = 
{
	&t10_TI,
};
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17590_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17590_MI = 
{
	"Resize", (methodPointerType)&m17411_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17590_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1706.h"
extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t1706_TI;
extern TypeInfo t55_TI;
extern TypeInfo t11_TI;
#include "t1706MD.h"
extern MethodInfo m3066_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m3847_MI;
extern MethodInfo m216_MI;
extern MethodInfo m8551_MI;
extern MethodInfo m17592_MI;
extern MethodInfo m17593_MI;
struct t52;
#define m17593(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
// Metadata Definition System.Int32 System.Array::IndexOf<UnityEngine.Sprite>(T[],T,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m8551_MI;
extern MethodInfo m17592_MI;
static void* m17593_RGCTXData[2] = 
{
	&m8551_MI,
	&m17592_MI,
};
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17593_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17593_MI = 
{
	"IndexOf", (methodPointerType)&m7824_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17593_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
struct t52;
#define m17594(__this, p0, p1, p2, p3, p4, method) (void)m17480_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17594_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17594_MI;
extern MethodInfo m17595_MI;
struct t52;
#define m17595(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
// Metadata Definition System.Void System.Array::Sort<UnityEngine.Sprite>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17594_MI;
static void* m17595_RGCTXData[1] = 
{
	&m17594_MI,
};
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17595_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17595_MI = 
{
	"Sort", (methodPointerType)&m17481_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17595_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t348_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern TypeInfo t10_TI;
extern TypeInfo t11_TI;
extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t250_TI;
extern TypeInfo t244_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
#define m17596(__this, p0, method) (t741 *)m17482_gshared((t7 *)__this, (t350*)p0, method)
extern MethodInfo m17596_MI;
struct t52;
#define m17597(__this, p0, p1, p2, p3, p4, method) (void)m17483_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17597_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m6582_MI;
extern MethodInfo m17596_MI;
extern MethodInfo m3904_MI;
extern MethodInfo m3905_MI;
extern MethodInfo m3906_MI;
extern MethodInfo m17597_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17594_MI;
// Metadata Definition System.Void System.Array::Sort<UnityEngine.Sprite,UnityEngine.Sprite>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17596_MI;
extern TypeInfo t10_TI;
extern MethodInfo m17597_MI;
static void* m17594_RGCTXData[3] = 
{
	&m17596_MI,
	&t10_TI,
	&m17597_MI,
};
extern Il2CppGenericInst GenInst_t11_0_0_0_t11_0_0_0;
Il2CppGenericContext m17594_GenericContext = { NULL, &GenInst_t11_0_0_0_t11_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17594_MI = 
{
	"Sort", (methodPointerType)&m17480_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17594_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern MethodInfo m3899_MI;
extern MethodInfo m3810_MI;
extern MethodInfo m3902_MI;
extern MethodInfo m3901_MI;
extern MethodInfo m17596_MI;
// Metadata Definition System.Array/Swapper System.Array::get_swapper<UnityEngine.Sprite>(T[])
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17596_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t741_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17596_MI = 
{
	"get_swapper", (methodPointerType)&m17482_gshared, &t52_TI, &t741_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m17598(__this, p0, p1, p2, method) (int32_t)m17583_gshared((t7 *)__this, (t7 *)p0, (t7 *)p1, (t7*)p2, method)
extern MethodInfo m17598_MI;
struct t52;
#define m17599(__this, p0, p1, p2, p3, method) (void)m17584_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m17599_MI;
extern MethodInfo m17597_MI;
extern MethodInfo m17598_MI;
extern MethodInfo m17599_MI;
extern MethodInfo m17597_MI;
extern MethodInfo m17597_MI;
// Metadata Definition System.Void System.Array::qsort<UnityEngine.Sprite,UnityEngine.Sprite>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17598_MI;
extern MethodInfo m17599_MI;
extern MethodInfo m17597_MI;
static void* m17597_RGCTXData[3] = 
{
	&m17598_MI,
	&m17599_MI,
	&m17597_MI,
};
extern Il2CppGenericInst GenInst_t11_0_0_0_t11_0_0_0;
Il2CppGenericContext m17597_GenericContext = { NULL, &GenInst_t11_0_0_0_t11_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17597_MI = 
{
	"qsort", (methodPointerType)&m17483_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17597_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t3405_TI;
extern TypeInfo t60_TI;
extern TypeInfo t11_TI;
extern TypeInfo t3406_TI;
extern TypeInfo t78_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1295_TI;
extern Il2CppType t11_0_0_0;
extern MethodInfo m17600_MI;
extern MethodInfo m17601_MI;
extern MethodInfo m7420_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m1656_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m17598_MI;
// Metadata Definition System.Int32 System.Array::compare<UnityEngine.Sprite>(T,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m17600_MI;
extern TypeInfo t11_TI;
extern TypeInfo t3406_TI;
extern MethodInfo m17601_MI;
extern Il2CppType t11_0_0_0;
static void* m17598_RGCTXData[5] = 
{
	&m17600_MI,
	&t11_TI,
	&t3406_TI,
	&m17601_MI,
	(void*)&t11_0_0_0,
};
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17598_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17598_MI = 
{
	"compare", (methodPointerType)&m17583_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17598_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17599_MI;
// Metadata Definition System.Void System.Array::swap<UnityEngine.Sprite,UnityEngine.Sprite>(K[],V[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t11_0_0_0_t11_0_0_0;
Il2CppGenericContext m17599_GenericContext = { NULL, &GenInst_t11_0_0_0_t11_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17599_MI = 
{
	"swap", (methodPointerType)&m17584_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1676.h"
extern TypeInfo t87_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
#define m17602(__this, p0, p1, p2, p3, method) (void)m17587_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t1679 *)p3, method)
extern MethodInfo m17602_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17602_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17603_MI;
struct t52;
#define m17603(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
// Metadata Definition System.Void System.Array::Sort<UnityEngine.Sprite>(T[],System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17602_MI;
static void* m17603_RGCTXData[1] = 
{
	&m17602_MI,
};
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17603_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17603_MI = 
{
	"Sort", (methodPointerType)&m17588_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17603_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1676_TI;
extern TypeInfo t60_TI;
extern TypeInfo t11_TI;
#include "t1676MD.h"
struct t52;
#define m17604(__this, p0, p1, p2, method) (void)m17589_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17604_MI;
extern MethodInfo m17602_MI;
extern MethodInfo m8566_MI;
extern MethodInfo m17604_MI;
extern MethodInfo m17602_MI;
extern MethodInfo m17602_MI;
// Metadata Definition System.Void System.Array::qsort<UnityEngine.Sprite>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m8566_MI;
extern MethodInfo m17604_MI;
extern MethodInfo m17602_MI;
static void* m17602_RGCTXData[3] = 
{
	&m8566_MI,
	&m17604_MI,
	&m17602_MI,
};
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17602_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17602_MI = 
{
	"qsort", (methodPointerType)&m17587_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17602_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17604_MI;
// Metadata Definition System.Void System.Array::swap<UnityEngine.Sprite>(T[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t11_0_0_0;
Il2CppGenericContext m17604_GenericContext = { NULL, &GenInst_t11_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17604_MI = 
{
	"swap", (methodPointerType)&m17589_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t33.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17605_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17605_MI;
extern MethodInfo m17606_MI;
struct t52;
#define m17606(__this, p0, method) (t33 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<SpAtlas>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t33_TI;
extern Il2CppGenericInst GenInst_t33_0_0_0;
Il2CppGenericContext m17606_GenericContext = { NULL, &GenInst_t33_0_0_0 };
extern Il2CppType t33_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17606_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t33_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17605_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<SpAtlas>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t33_0_0_0;
Il2CppGenericContext m17605_GenericContext = { NULL, &GenInst_t33_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17605_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17607_MI;
struct t52;
#define m17607(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<SpAtlas>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t33_0_0_0;
Il2CppGenericContext m17607_GenericContext = { NULL, &GenInst_t33_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17607_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t33_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17605_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17605_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17608_MI;
struct t52;
#define m17608(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<SpAtlas>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t33_TI;
static void* m17608_RGCTXData[1] = 
{
	&t33_TI,
};
extern Il2CppGenericInst GenInst_t33_0_0_0;
Il2CppGenericContext m17608_GenericContext = { NULL, &GenInst_t33_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17608_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17608_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17609_MI;
struct t52;
#define m17609(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<SpAtlas>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t33_0_0_0;
Il2CppGenericContext m17609_GenericContext = { NULL, &GenInst_t33_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17609_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17610_MI;
struct t52;
#define m17610(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<SpAtlas>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t33_0_0_0;
Il2CppGenericContext m17610_GenericContext = { NULL, &GenInst_t33_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17610_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t33_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17605_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17605_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17611_MI;
struct t52;
#define m17611(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<SpAtlas>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t33_TI;
static void* m17611_RGCTXData[1] = 
{
	&t33_TI,
};
extern Il2CppGenericInst GenInst_t33_0_0_0;
Il2CppGenericContext m17611_GenericContext = { NULL, &GenInst_t33_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17611_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17611_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17612_MI;
struct t52;
#define m17612(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<SpAtlas>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t33_0_0_0;
Il2CppGenericContext m17612_GenericContext = { NULL, &GenInst_t33_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17612_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t33_TI;
struct t52;
extern MethodInfo m17613_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17613_MI;
extern MethodInfo m17614_MI;
struct t52;
#define m17614(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<SpAtlas>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t33_TI;
static void* m17614_RGCTXData[1] = 
{
	&t33_TI,
};
extern Il2CppGenericInst GenInst_t33_0_0_0;
Il2CppGenericContext m17614_GenericContext = { NULL, &GenInst_t33_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17614_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17614_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17613_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<SpAtlas>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t33_0_0_0;
Il2CppGenericContext m17613_GenericContext = { NULL, &GenInst_t33_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17613_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1710.h"
extern TypeInfo t1710_TI;
#include "t1710MD.h"
extern MethodInfo m8569_MI;
extern MethodInfo m17615_MI;
struct t52;
#define m17615(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<SpAtlas>()
extern TypeInfo t52_TI;
extern TypeInfo t3407_TI;
extern TypeInfo t1710_TI;
extern MethodInfo m8569_MI;
static void* m17615_RGCTXData[2] = 
{
	&t1710_TI,
	&m8569_MI,
};
extern Il2CppGenericInst GenInst_t33_0_0_0;
Il2CppGenericContext m17615_GenericContext = { NULL, &GenInst_t33_0_0_0 };
extern Il2CppType t3407_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17615_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3407_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17615_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t37.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17616_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17616_MI;
extern MethodInfo m17617_MI;
struct t52;
#define m17617(__this, p0, method) (t37 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.ScriptableObject>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t37_TI;
extern Il2CppGenericInst GenInst_t37_0_0_0;
Il2CppGenericContext m17617_GenericContext = { NULL, &GenInst_t37_0_0_0 };
extern Il2CppType t37_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17617_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t37_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17616_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.ScriptableObject>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t37_0_0_0;
Il2CppGenericContext m17616_GenericContext = { NULL, &GenInst_t37_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17616_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17618_MI;
struct t52;
#define m17618(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.ScriptableObject>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t37_0_0_0;
Il2CppGenericContext m17618_GenericContext = { NULL, &GenInst_t37_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17618_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t37_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17616_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17616_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17619_MI;
struct t52;
#define m17619(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.ScriptableObject>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t37_TI;
static void* m17619_RGCTXData[1] = 
{
	&t37_TI,
};
extern Il2CppGenericInst GenInst_t37_0_0_0;
Il2CppGenericContext m17619_GenericContext = { NULL, &GenInst_t37_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17619_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17619_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17620_MI;
struct t52;
#define m17620(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.ScriptableObject>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t37_0_0_0;
Il2CppGenericContext m17620_GenericContext = { NULL, &GenInst_t37_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17620_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17621_MI;
struct t52;
#define m17621(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.ScriptableObject>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t37_0_0_0;
Il2CppGenericContext m17621_GenericContext = { NULL, &GenInst_t37_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17621_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t37_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17616_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17616_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17622_MI;
struct t52;
#define m17622(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.ScriptableObject>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t37_TI;
static void* m17622_RGCTXData[1] = 
{
	&t37_TI,
};
extern Il2CppGenericInst GenInst_t37_0_0_0;
Il2CppGenericContext m17622_GenericContext = { NULL, &GenInst_t37_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17622_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17622_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17623_MI;
struct t52;
#define m17623(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.ScriptableObject>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t37_0_0_0;
Il2CppGenericContext m17623_GenericContext = { NULL, &GenInst_t37_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17623_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t37_TI;
struct t52;
extern MethodInfo m17624_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17624_MI;
extern MethodInfo m17625_MI;
struct t52;
#define m17625(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.ScriptableObject>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t37_TI;
static void* m17625_RGCTXData[1] = 
{
	&t37_TI,
};
extern Il2CppGenericInst GenInst_t37_0_0_0;
Il2CppGenericContext m17625_GenericContext = { NULL, &GenInst_t37_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17625_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17625_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17624_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.ScriptableObject>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t37_0_0_0;
Il2CppGenericContext m17624_GenericContext = { NULL, &GenInst_t37_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17624_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1711.h"
extern TypeInfo t1711_TI;
#include "t1711MD.h"
extern MethodInfo m8574_MI;
extern MethodInfo m17626_MI;
struct t52;
#define m17626(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.ScriptableObject>()
extern TypeInfo t52_TI;
extern TypeInfo t3408_TI;
extern TypeInfo t1711_TI;
extern MethodInfo m8574_MI;
static void* m17626_RGCTXData[2] = 
{
	&t1711_TI,
	&m8574_MI,
};
extern Il2CppGenericInst GenInst_t37_0_0_0;
Il2CppGenericContext m17626_GenericContext = { NULL, &GenInst_t37_0_0_0 };
extern Il2CppType t3408_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17626_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3408_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17626_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t33_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern Il2CppType t33_0_0_0;
extern MethodInfo m1555_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m2583_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m17627_MI;
struct t572;
#define m17627(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SpAtlas>(System.Object)
extern TypeInfo t572_TI;
extern TypeInfo t53_TI;
extern TypeInfo t33_TI;
extern Il2CppType t33_0_0_0;
static void* m17627_RGCTXData[2] = 
{
	&t33_TI,
	(void*)&t33_0_0_0,
};
extern Il2CppGenericInst GenInst_t33_0_0_0;
Il2CppGenericContext m17627_GenericContext = { NULL, &GenInst_t33_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t572_TI;
MethodInfo m17627_MI = 
{
	"ThrowOnInvalidArg", (methodPointerType)&m17212_gshared, &t572_TI, &t53_0_0_0, NULL, NULL, NULL, 148, 0, 255, 0, false, true, 0, m17627_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t50.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17628_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17628_MI;
extern MethodInfo m17629_MI;
struct t52;
#define m17629(__this, p0, method) (t50 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<SpSource>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t50_TI;
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17629_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t50_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17629_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t50_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17628_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<SpSource>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17628_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17628_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17630_MI;
struct t52;
#define m17630(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<SpSource>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17630_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17630_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t50_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17628_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17628_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17631_MI;
struct t52;
#define m17631(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<SpSource>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t50_TI;
static void* m17631_RGCTXData[1] = 
{
	&t50_TI,
};
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17631_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17631_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17631_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17632_MI;
struct t52;
#define m17632(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<SpSource>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17632_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17632_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17633_MI;
struct t52;
#define m17633(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<SpSource>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17633_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17633_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t50_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17628_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17628_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17634_MI;
struct t52;
#define m17634(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<SpSource>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t50_TI;
static void* m17634_RGCTXData[1] = 
{
	&t50_TI,
};
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17634_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17634_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17634_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17635_MI;
struct t52;
#define m17635(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<SpSource>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17635_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17635_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t50_TI;
struct t52;
extern MethodInfo m17636_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17636_MI;
extern MethodInfo m17637_MI;
struct t52;
#define m17637(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<SpSource>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t50_TI;
static void* m17637_RGCTXData[1] = 
{
	&t50_TI,
};
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17637_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17637_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17637_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17636_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<SpSource>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17636_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17636_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1723.h"
extern TypeInfo t1723_TI;
#include "t1723MD.h"
extern MethodInfo m8637_MI;
extern MethodInfo m17638_MI;
struct t52;
#define m17638(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<SpSource>()
extern TypeInfo t52_TI;
extern TypeInfo t1716_TI;
extern TypeInfo t1723_TI;
extern MethodInfo m8637_MI;
static void* m17638_RGCTXData[2] = 
{
	&t1723_TI,
	&m8637_MI,
};
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17638_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t1716_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17638_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t1716_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17638_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m17639(__this, p0, p1, p2, method) (void)m17411_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17639_MI;
extern MethodInfo m17639_MI;
extern MethodInfo m17640_MI;
struct t52;
#define m17640(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::Resize<SpSource>(T[]&,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17639_MI;
static void* m17640_RGCTXData[1] = 
{
	&m17639_MI,
};
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17640_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17640_MI = 
{
	"Resize", (methodPointerType)&m17412_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17640_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t1715_TI;
extern TypeInfo t50_TI;
extern MethodInfo m216_MI;
extern MethodInfo m7029_MI;
extern MethodInfo m3877_MI;
extern MethodInfo m17639_MI;
// Metadata Definition System.Void System.Array::Resize<SpSource>(T[]&,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1715_TI;
static void* m17639_RGCTXData[1] = 
{
	&t1715_TI,
};
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17639_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17639_MI = 
{
	"Resize", (methodPointerType)&m17411_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17639_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1726.h"
extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t1726_TI;
extern TypeInfo t55_TI;
extern TypeInfo t50_TI;
#include "t1726MD.h"
extern MethodInfo m3066_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m3847_MI;
extern MethodInfo m216_MI;
extern MethodInfo m8718_MI;
extern MethodInfo m17641_MI;
extern MethodInfo m17642_MI;
struct t52;
#define m17642(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
// Metadata Definition System.Int32 System.Array::IndexOf<SpSource>(T[],T,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m8718_MI;
extern MethodInfo m17641_MI;
static void* m17642_RGCTXData[2] = 
{
	&m8718_MI,
	&m17641_MI,
};
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17642_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17642_MI = 
{
	"IndexOf", (methodPointerType)&m7824_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17642_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
struct t52;
#define m17643(__this, p0, p1, p2, p3, p4, method) (void)m17480_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17643_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17643_MI;
extern MethodInfo m17644_MI;
struct t52;
#define m17644(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
// Metadata Definition System.Void System.Array::Sort<SpSource>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17643_MI;
static void* m17644_RGCTXData[1] = 
{
	&m17643_MI,
};
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17644_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17644_MI = 
{
	"Sort", (methodPointerType)&m17481_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17644_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t348_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern TypeInfo t1715_TI;
extern TypeInfo t50_TI;
extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t250_TI;
extern TypeInfo t244_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
#define m17645(__this, p0, method) (t741 *)m17482_gshared((t7 *)__this, (t350*)p0, method)
extern MethodInfo m17645_MI;
struct t52;
#define m17646(__this, p0, p1, p2, p3, p4, method) (void)m17483_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17646_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m6582_MI;
extern MethodInfo m17645_MI;
extern MethodInfo m3904_MI;
extern MethodInfo m3905_MI;
extern MethodInfo m3906_MI;
extern MethodInfo m17646_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17643_MI;
// Metadata Definition System.Void System.Array::Sort<SpSource,SpSource>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17645_MI;
extern TypeInfo t1715_TI;
extern MethodInfo m17646_MI;
static void* m17643_RGCTXData[3] = 
{
	&m17645_MI,
	&t1715_TI,
	&m17646_MI,
};
extern Il2CppGenericInst GenInst_t50_0_0_0_t50_0_0_0;
Il2CppGenericContext m17643_GenericContext = { NULL, &GenInst_t50_0_0_0_t50_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17643_MI = 
{
	"Sort", (methodPointerType)&m17480_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17643_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern MethodInfo m3899_MI;
extern MethodInfo m3810_MI;
extern MethodInfo m3902_MI;
extern MethodInfo m3901_MI;
extern MethodInfo m17645_MI;
// Metadata Definition System.Array/Swapper System.Array::get_swapper<SpSource>(T[])
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17645_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t741_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17645_MI = 
{
	"get_swapper", (methodPointerType)&m17482_gshared, &t52_TI, &t741_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m17647(__this, p0, p1, p2, method) (int32_t)m17583_gshared((t7 *)__this, (t7 *)p0, (t7 *)p1, (t7*)p2, method)
extern MethodInfo m17647_MI;
struct t52;
#define m17648(__this, p0, p1, p2, p3, method) (void)m17584_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m17648_MI;
extern MethodInfo m17646_MI;
extern MethodInfo m17647_MI;
extern MethodInfo m17648_MI;
extern MethodInfo m17646_MI;
extern MethodInfo m17646_MI;
// Metadata Definition System.Void System.Array::qsort<SpSource,SpSource>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17647_MI;
extern MethodInfo m17648_MI;
extern MethodInfo m17646_MI;
static void* m17646_RGCTXData[3] = 
{
	&m17647_MI,
	&m17648_MI,
	&m17646_MI,
};
extern Il2CppGenericInst GenInst_t50_0_0_0_t50_0_0_0;
Il2CppGenericContext m17646_GenericContext = { NULL, &GenInst_t50_0_0_0_t50_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17646_MI = 
{
	"qsort", (methodPointerType)&m17483_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17646_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t3409_TI;
extern TypeInfo t60_TI;
extern TypeInfo t50_TI;
extern TypeInfo t3410_TI;
extern TypeInfo t78_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1295_TI;
extern Il2CppType t50_0_0_0;
extern MethodInfo m17649_MI;
extern MethodInfo m17650_MI;
extern MethodInfo m7420_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m1656_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m17647_MI;
// Metadata Definition System.Int32 System.Array::compare<SpSource>(T,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m17649_MI;
extern TypeInfo t50_TI;
extern TypeInfo t3410_TI;
extern MethodInfo m17650_MI;
extern Il2CppType t50_0_0_0;
static void* m17647_RGCTXData[5] = 
{
	&m17649_MI,
	&t50_TI,
	&t3410_TI,
	&m17650_MI,
	(void*)&t50_0_0_0,
};
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17647_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17647_MI = 
{
	"compare", (methodPointerType)&m17583_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17647_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17648_MI;
// Metadata Definition System.Void System.Array::swap<SpSource,SpSource>(K[],V[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t50_0_0_0_t50_0_0_0;
Il2CppGenericContext m17648_GenericContext = { NULL, &GenInst_t50_0_0_0_t50_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17648_MI = 
{
	"swap", (methodPointerType)&m17584_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1721.h"
extern TypeInfo t87_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
#define m17651(__this, p0, p1, p2, p3, method) (void)m17587_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t1679 *)p3, method)
extern MethodInfo m17651_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17651_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17652_MI;
struct t52;
#define m17652(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
// Metadata Definition System.Void System.Array::Sort<SpSource>(T[],System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17651_MI;
static void* m17652_RGCTXData[1] = 
{
	&m17651_MI,
};
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17652_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17652_MI = 
{
	"Sort", (methodPointerType)&m17588_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17652_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1721_TI;
extern TypeInfo t60_TI;
extern TypeInfo t50_TI;
#include "t1721MD.h"
struct t52;
#define m17653(__this, p0, p1, p2, method) (void)m17589_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17653_MI;
extern MethodInfo m17651_MI;
extern MethodInfo m8733_MI;
extern MethodInfo m17653_MI;
extern MethodInfo m17651_MI;
extern MethodInfo m17651_MI;
// Metadata Definition System.Void System.Array::qsort<SpSource>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m8733_MI;
extern MethodInfo m17653_MI;
extern MethodInfo m17651_MI;
static void* m17651_RGCTXData[3] = 
{
	&m8733_MI,
	&m17653_MI,
	&m17651_MI,
};
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17651_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17651_MI = 
{
	"qsort", (methodPointerType)&m17587_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17651_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17653_MI;
// Metadata Definition System.Void System.Array::swap<SpSource>(T[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t50_0_0_0;
Il2CppGenericContext m17653_GenericContext = { NULL, &GenInst_t50_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17653_MI = 
{
	"swap", (methodPointerType)&m17589_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t39.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17654_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17654_MI;
extern MethodInfo m17655_MI;
struct t52;
 int32_t m17655 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17655_MI;
 int32_t m17655 (t52 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<SpFlag>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t39_TI;
extern Il2CppGenericInst GenInst_t39_0_0_0;
Il2CppGenericContext m17655_GenericContext = { NULL, &GenInst_t39_0_0_0 };
extern Il2CppType t39_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17655_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17655, &t52_TI, &t39_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17654_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<SpFlag>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t39_0_0_0;
Il2CppGenericContext m17654_GenericContext = { NULL, &GenInst_t39_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17654_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17656_MI;
struct t52;
 void m17656 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17656_MI;
 void m17656 (t52 * __this, int32_t p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<SpFlag>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t39_0_0_0;
Il2CppGenericContext m17656_GenericContext = { NULL, &GenInst_t39_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17656_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17656, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t39_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17654_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17654_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17657_MI;
struct t52;
 bool m17657 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17657_MI;
 bool m17657 (t52 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t39_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t39_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t7 * L_9 = Box(InitializedTypeInfo(&t39_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t39_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<SpFlag>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t39_0_0_0;
Il2CppGenericContext m17657_GenericContext = { NULL, &GenInst_t39_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17657_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17657, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17658_MI;
struct t52;
 void m17658 (t52 * __this, t2997* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17658_MI;
 void m17658 (t52 * __this, t2997* p0, int32_t p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral329, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t34* L_2 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_3 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_3, L_2, &m7242_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0027:
	{
		int32_t L_4 = m3833(__this, 0, &m3833_MI);
		int32_t L_5 = m3835(p0, 0, &m3835_MI);
		int32_t L_6 = m3833(p0, 0, &m3833_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t348 * L_7 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m2046(L_7, (t34*) &_stringLiteral330, &m2046_MI);
		il2cpp_codegen_raise_exception (L_7);
	}

IL_004c:
	{
		int32_t L_8 = m3831(p0, &m3831_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t34* L_9 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_10 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_10, L_9, &m7242_MI);
		il2cpp_codegen_raise_exception (L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t34* L_11 = m4015(NULL, (t34*) &_stringLiteral331, &m4015_MI);
		t88 * L_12 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6592(L_12, (t34*) &_stringLiteral326, L_11, &m6592_MI);
		il2cpp_codegen_raise_exception (L_12);
	}

IL_007e:
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		int32_t L_14 = m3833(__this, 0, &m3833_MI);
		m3878(NULL, __this, L_13, (t52 *)(t52 *)p0, p1, L_14, &m3878_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<SpFlag>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t39_0_0_0;
Il2CppGenericContext m17658_GenericContext = { NULL, &GenInst_t39_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17658_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17658, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17659_MI;
struct t52;
 bool m17659 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17659_MI;
 bool m17659 (t52 * __this, int32_t p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<SpFlag>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t39_0_0_0;
Il2CppGenericContext m17659_GenericContext = { NULL, &GenInst_t39_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17659_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17659, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t39_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17654_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17654_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17660_MI;
struct t52;
 int32_t m17660 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17660_MI;
 int32_t m17660 (t52 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t39_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t39_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t7 * L_11 = Box(InitializedTypeInfo(&t39_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t39_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<SpFlag>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern Il2CppGenericInst GenInst_t39_0_0_0;
Il2CppGenericContext m17660_GenericContext = { NULL, &GenInst_t39_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17660_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17660, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17661_MI;
struct t52;
 void m17661 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17661_MI;
 void m17661 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<SpFlag>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t39_0_0_0;
Il2CppGenericContext m17661_GenericContext = { NULL, &GenInst_t39_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17661_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17661, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t39_TI;
struct t52;
extern MethodInfo m17662_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17662_MI;
extern MethodInfo m17663_MI;
struct t52;
 void m17663 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17663_MI;
 void m17663 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t350* V_0 = {0};
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		V_0 = ((t350*)IsInst(__this, InitializedTypeInfo(&t350_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t7 * L_3 = Box(InitializedTypeInfo(&t39_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(V_0, p0)) = (t7 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<SpFlag>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t39_0_0_0;
Il2CppGenericContext m17663_GenericContext = { NULL, &GenInst_t39_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17663_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17663, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17662_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<SpFlag>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t39_0_0_0;
Il2CppGenericContext m17662_GenericContext = { NULL, &GenInst_t39_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17662_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1730.h"
extern TypeInfo t1730_TI;
#include "t1730MD.h"
extern MethodInfo m8736_MI;
extern MethodInfo m17664_MI;
struct t52;
 t7* m17664 (t52 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17664_MI;
 t7* m17664 (t52 * __this, MethodInfo* method){
	{
		t1730  L_0 = {0};
		m8736(&L_0, __this, &m8736_MI);
		t1730  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1730_TI), &L_1);
		return (t7*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<SpFlag>()
extern TypeInfo t52_TI;
extern TypeInfo t3411_TI;
extern Il2CppGenericInst GenInst_t39_0_0_0;
Il2CppGenericContext m17664_GenericContext = { NULL, &GenInst_t39_0_0_0 };
extern Il2CppType t3411_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17664_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17664, &t52_TI, &t3411_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t41.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17665_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17665_MI;
extern MethodInfo m17666_MI;
struct t52;
#define m17666(__this, p0, method) (t41 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<SpMaxRects>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t41_TI;
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17666_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t41_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17666_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t41_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17665_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<SpMaxRects>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17665_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17665_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17667_MI;
struct t52;
#define m17667(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<SpMaxRects>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17667_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17667_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t41_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17665_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17665_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17668_MI;
struct t52;
#define m17668(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<SpMaxRects>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t41_TI;
static void* m17668_RGCTXData[1] = 
{
	&t41_TI,
};
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17668_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17668_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17668_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17669_MI;
struct t52;
#define m17669(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<SpMaxRects>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17669_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17669_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17670_MI;
struct t52;
#define m17670(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<SpMaxRects>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17670_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17670_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t41_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17665_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17665_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17671_MI;
struct t52;
#define m17671(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<SpMaxRects>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t41_TI;
static void* m17671_RGCTXData[1] = 
{
	&t41_TI,
};
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17671_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17671_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17671_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17672_MI;
struct t52;
#define m17672(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<SpMaxRects>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17672_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17672_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t41_TI;
struct t52;
extern MethodInfo m17673_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17673_MI;
extern MethodInfo m17674_MI;
struct t52;
#define m17674(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<SpMaxRects>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t41_TI;
static void* m17674_RGCTXData[1] = 
{
	&t41_TI,
};
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17674_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17674_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17674_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17673_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<SpMaxRects>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17673_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17673_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1738.h"
extern TypeInfo t1738_TI;
#include "t1738MD.h"
extern MethodInfo m8782_MI;
extern MethodInfo m17675_MI;
struct t52;
#define m17675(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<SpMaxRects>()
extern TypeInfo t52_TI;
extern TypeInfo t1732_TI;
extern TypeInfo t1738_TI;
extern MethodInfo m8782_MI;
static void* m17675_RGCTXData[2] = 
{
	&t1738_TI,
	&m8782_MI,
};
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17675_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t1732_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17675_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t1732_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17675_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m17676(__this, p0, p1, p2, method) (void)m17411_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17676_MI;
extern MethodInfo m17676_MI;
extern MethodInfo m17677_MI;
struct t52;
#define m17677(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::Resize<SpMaxRects>(T[]&,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17676_MI;
static void* m17677_RGCTXData[1] = 
{
	&m17676_MI,
};
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17677_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17677_MI = 
{
	"Resize", (methodPointerType)&m17412_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17677_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t1731_TI;
extern TypeInfo t41_TI;
extern MethodInfo m216_MI;
extern MethodInfo m7029_MI;
extern MethodInfo m3877_MI;
extern MethodInfo m17676_MI;
// Metadata Definition System.Void System.Array::Resize<SpMaxRects>(T[]&,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1731_TI;
static void* m17676_RGCTXData[1] = 
{
	&t1731_TI,
};
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17676_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17676_MI = 
{
	"Resize", (methodPointerType)&m17411_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17676_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1741.h"
extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t1741_TI;
extern TypeInfo t55_TI;
extern TypeInfo t41_TI;
#include "t1741MD.h"
extern MethodInfo m3066_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m3847_MI;
extern MethodInfo m216_MI;
extern MethodInfo m8861_MI;
extern MethodInfo m17678_MI;
extern MethodInfo m17679_MI;
struct t52;
#define m17679(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
// Metadata Definition System.Int32 System.Array::IndexOf<SpMaxRects>(T[],T,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m8861_MI;
extern MethodInfo m17678_MI;
static void* m17679_RGCTXData[2] = 
{
	&m8861_MI,
	&m17678_MI,
};
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17679_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17679_MI = 
{
	"IndexOf", (methodPointerType)&m7824_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17679_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
struct t52;
#define m17680(__this, p0, p1, p2, p3, p4, method) (void)m17480_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17680_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17680_MI;
extern MethodInfo m17681_MI;
struct t52;
#define m17681(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
// Metadata Definition System.Void System.Array::Sort<SpMaxRects>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17680_MI;
static void* m17681_RGCTXData[1] = 
{
	&m17680_MI,
};
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17681_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17681_MI = 
{
	"Sort", (methodPointerType)&m17481_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17681_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t348_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern TypeInfo t1731_TI;
extern TypeInfo t41_TI;
extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t250_TI;
extern TypeInfo t244_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
#define m17682(__this, p0, method) (t741 *)m17482_gshared((t7 *)__this, (t350*)p0, method)
extern MethodInfo m17682_MI;
struct t52;
#define m17683(__this, p0, p1, p2, p3, p4, method) (void)m17483_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17683_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m6582_MI;
extern MethodInfo m17682_MI;
extern MethodInfo m3904_MI;
extern MethodInfo m3905_MI;
extern MethodInfo m3906_MI;
extern MethodInfo m17683_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17680_MI;
// Metadata Definition System.Void System.Array::Sort<SpMaxRects,SpMaxRects>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17682_MI;
extern TypeInfo t1731_TI;
extern MethodInfo m17683_MI;
static void* m17680_RGCTXData[3] = 
{
	&m17682_MI,
	&t1731_TI,
	&m17683_MI,
};
extern Il2CppGenericInst GenInst_t41_0_0_0_t41_0_0_0;
Il2CppGenericContext m17680_GenericContext = { NULL, &GenInst_t41_0_0_0_t41_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17680_MI = 
{
	"Sort", (methodPointerType)&m17480_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17680_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern MethodInfo m3899_MI;
extern MethodInfo m3810_MI;
extern MethodInfo m3902_MI;
extern MethodInfo m3901_MI;
extern MethodInfo m17682_MI;
// Metadata Definition System.Array/Swapper System.Array::get_swapper<SpMaxRects>(T[])
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17682_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t741_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17682_MI = 
{
	"get_swapper", (methodPointerType)&m17482_gshared, &t52_TI, &t741_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m17684(__this, p0, p1, p2, method) (int32_t)m17583_gshared((t7 *)__this, (t7 *)p0, (t7 *)p1, (t7*)p2, method)
extern MethodInfo m17684_MI;
struct t52;
#define m17685(__this, p0, p1, p2, p3, method) (void)m17584_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m17685_MI;
extern MethodInfo m17683_MI;
extern MethodInfo m17684_MI;
extern MethodInfo m17685_MI;
extern MethodInfo m17683_MI;
extern MethodInfo m17683_MI;
// Metadata Definition System.Void System.Array::qsort<SpMaxRects,SpMaxRects>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17684_MI;
extern MethodInfo m17685_MI;
extern MethodInfo m17683_MI;
static void* m17683_RGCTXData[3] = 
{
	&m17684_MI,
	&m17685_MI,
	&m17683_MI,
};
extern Il2CppGenericInst GenInst_t41_0_0_0_t41_0_0_0;
Il2CppGenericContext m17683_GenericContext = { NULL, &GenInst_t41_0_0_0_t41_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17683_MI = 
{
	"qsort", (methodPointerType)&m17483_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17683_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t3412_TI;
extern TypeInfo t60_TI;
extern TypeInfo t41_TI;
extern TypeInfo t3413_TI;
extern TypeInfo t78_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1295_TI;
extern Il2CppType t41_0_0_0;
extern MethodInfo m17686_MI;
extern MethodInfo m17687_MI;
extern MethodInfo m7420_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m1656_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m17684_MI;
// Metadata Definition System.Int32 System.Array::compare<SpMaxRects>(T,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m17686_MI;
extern TypeInfo t41_TI;
extern TypeInfo t3413_TI;
extern MethodInfo m17687_MI;
extern Il2CppType t41_0_0_0;
static void* m17684_RGCTXData[5] = 
{
	&m17686_MI,
	&t41_TI,
	&t3413_TI,
	&m17687_MI,
	(void*)&t41_0_0_0,
};
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17684_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17684_MI = 
{
	"compare", (methodPointerType)&m17583_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17684_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17685_MI;
// Metadata Definition System.Void System.Array::swap<SpMaxRects,SpMaxRects>(K[],V[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t41_0_0_0_t41_0_0_0;
Il2CppGenericContext m17685_GenericContext = { NULL, &GenInst_t41_0_0_0_t41_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17685_MI = 
{
	"swap", (methodPointerType)&m17584_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1737.h"
extern TypeInfo t87_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
#define m17688(__this, p0, p1, p2, p3, method) (void)m17587_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t1679 *)p3, method)
extern MethodInfo m17688_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17688_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17689_MI;
struct t52;
#define m17689(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
// Metadata Definition System.Void System.Array::Sort<SpMaxRects>(T[],System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17688_MI;
static void* m17689_RGCTXData[1] = 
{
	&m17688_MI,
};
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17689_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17689_MI = 
{
	"Sort", (methodPointerType)&m17588_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17689_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1737_TI;
extern TypeInfo t60_TI;
extern TypeInfo t41_TI;
#include "t1737MD.h"
struct t52;
#define m17690(__this, p0, p1, p2, method) (void)m17589_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17690_MI;
extern MethodInfo m17688_MI;
extern MethodInfo m8876_MI;
extern MethodInfo m17690_MI;
extern MethodInfo m17688_MI;
extern MethodInfo m17688_MI;
// Metadata Definition System.Void System.Array::qsort<SpMaxRects>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m8876_MI;
extern MethodInfo m17690_MI;
extern MethodInfo m17688_MI;
static void* m17688_RGCTXData[3] = 
{
	&m8876_MI,
	&m17690_MI,
	&m17688_MI,
};
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17688_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17688_MI = 
{
	"qsort", (methodPointerType)&m17587_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17688_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17690_MI;
// Metadata Definition System.Void System.Array::swap<SpMaxRects>(T[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t41_0_0_0;
Il2CppGenericContext m17690_GenericContext = { NULL, &GenInst_t41_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17690_MI = 
{
	"swap", (methodPointerType)&m17589_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t44.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17691_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17691_MI;
extern MethodInfo m17692_MI;
struct t52;
#define m17692(__this, p0, method) (t44 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<SpRect>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t44_TI;
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17692_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t44_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17692_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t44_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17691_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<SpRect>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17691_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17691_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17693_MI;
struct t52;
#define m17693(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<SpRect>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17693_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17693_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t44_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17691_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17691_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17694_MI;
struct t52;
#define m17694(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<SpRect>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t44_TI;
static void* m17694_RGCTXData[1] = 
{
	&t44_TI,
};
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17694_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17694_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17694_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17695_MI;
struct t52;
#define m17695(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<SpRect>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17695_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17695_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17696_MI;
struct t52;
#define m17696(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<SpRect>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17696_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17696_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t44_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17691_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17691_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17697_MI;
struct t52;
#define m17697(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<SpRect>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t44_TI;
static void* m17697_RGCTXData[1] = 
{
	&t44_TI,
};
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17697_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17697_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17697_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17698_MI;
struct t52;
#define m17698(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<SpRect>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17698_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17698_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t44_TI;
struct t52;
extern MethodInfo m17699_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17699_MI;
extern MethodInfo m17700_MI;
struct t52;
#define m17700(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<SpRect>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t44_TI;
static void* m17700_RGCTXData[1] = 
{
	&t44_TI,
};
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17700_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17700_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17700_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17699_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<SpRect>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17699_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17699_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1752.h"
extern TypeInfo t1752_TI;
#include "t1752MD.h"
extern MethodInfo m8927_MI;
extern MethodInfo m17701_MI;
struct t52;
#define m17701(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<SpRect>()
extern TypeInfo t52_TI;
extern TypeInfo t1746_TI;
extern TypeInfo t1752_TI;
extern MethodInfo m8927_MI;
static void* m17701_RGCTXData[2] = 
{
	&t1752_TI,
	&m8927_MI,
};
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17701_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t1746_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17701_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t1746_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17701_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m17702(__this, p0, p1, p2, method) (void)m17411_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17702_MI;
extern MethodInfo m17702_MI;
extern MethodInfo m17703_MI;
struct t52;
#define m17703(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::Resize<SpRect>(T[]&,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17702_MI;
static void* m17703_RGCTXData[1] = 
{
	&m17702_MI,
};
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17703_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17703_MI = 
{
	"Resize", (methodPointerType)&m17412_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17703_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t1745_TI;
extern TypeInfo t44_TI;
extern MethodInfo m216_MI;
extern MethodInfo m7029_MI;
extern MethodInfo m3877_MI;
extern MethodInfo m17702_MI;
// Metadata Definition System.Void System.Array::Resize<SpRect>(T[]&,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1745_TI;
static void* m17702_RGCTXData[1] = 
{
	&t1745_TI,
};
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17702_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17702_MI = 
{
	"Resize", (methodPointerType)&m17411_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17702_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1755.h"
extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t1755_TI;
extern TypeInfo t55_TI;
extern TypeInfo t44_TI;
#include "t1755MD.h"
extern MethodInfo m3066_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m3847_MI;
extern MethodInfo m216_MI;
extern MethodInfo m9006_MI;
extern MethodInfo m17704_MI;
extern MethodInfo m17705_MI;
struct t52;
#define m17705(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
// Metadata Definition System.Int32 System.Array::IndexOf<SpRect>(T[],T,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m9006_MI;
extern MethodInfo m17704_MI;
static void* m17705_RGCTXData[2] = 
{
	&m9006_MI,
	&m17704_MI,
};
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17705_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17705_MI = 
{
	"IndexOf", (methodPointerType)&m7824_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17705_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
struct t52;
#define m17706(__this, p0, p1, p2, p3, p4, method) (void)m17480_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17706_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17706_MI;
extern MethodInfo m17707_MI;
struct t52;
#define m17707(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
// Metadata Definition System.Void System.Array::Sort<SpRect>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17706_MI;
static void* m17707_RGCTXData[1] = 
{
	&m17706_MI,
};
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17707_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17707_MI = 
{
	"Sort", (methodPointerType)&m17481_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17707_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t348_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern TypeInfo t1745_TI;
extern TypeInfo t44_TI;
extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t250_TI;
extern TypeInfo t244_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
#define m17708(__this, p0, method) (t741 *)m17482_gshared((t7 *)__this, (t350*)p0, method)
extern MethodInfo m17708_MI;
struct t52;
#define m17709(__this, p0, p1, p2, p3, p4, method) (void)m17483_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17709_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m6582_MI;
extern MethodInfo m17708_MI;
extern MethodInfo m3904_MI;
extern MethodInfo m3905_MI;
extern MethodInfo m3906_MI;
extern MethodInfo m17709_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17706_MI;
// Metadata Definition System.Void System.Array::Sort<SpRect,SpRect>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17708_MI;
extern TypeInfo t1745_TI;
extern MethodInfo m17709_MI;
static void* m17706_RGCTXData[3] = 
{
	&m17708_MI,
	&t1745_TI,
	&m17709_MI,
};
extern Il2CppGenericInst GenInst_t44_0_0_0_t44_0_0_0;
Il2CppGenericContext m17706_GenericContext = { NULL, &GenInst_t44_0_0_0_t44_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17706_MI = 
{
	"Sort", (methodPointerType)&m17480_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17706_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern MethodInfo m3899_MI;
extern MethodInfo m3810_MI;
extern MethodInfo m3902_MI;
extern MethodInfo m3901_MI;
extern MethodInfo m17708_MI;
// Metadata Definition System.Array/Swapper System.Array::get_swapper<SpRect>(T[])
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17708_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t741_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17708_MI = 
{
	"get_swapper", (methodPointerType)&m17482_gshared, &t52_TI, &t741_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m17710(__this, p0, p1, p2, method) (int32_t)m17583_gshared((t7 *)__this, (t7 *)p0, (t7 *)p1, (t7*)p2, method)
extern MethodInfo m17710_MI;
struct t52;
#define m17711(__this, p0, p1, p2, p3, method) (void)m17584_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m17711_MI;
extern MethodInfo m17709_MI;
extern MethodInfo m17710_MI;
extern MethodInfo m17711_MI;
extern MethodInfo m17709_MI;
extern MethodInfo m17709_MI;
// Metadata Definition System.Void System.Array::qsort<SpRect,SpRect>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17710_MI;
extern MethodInfo m17711_MI;
extern MethodInfo m17709_MI;
static void* m17709_RGCTXData[3] = 
{
	&m17710_MI,
	&m17711_MI,
	&m17709_MI,
};
extern Il2CppGenericInst GenInst_t44_0_0_0_t44_0_0_0;
Il2CppGenericContext m17709_GenericContext = { NULL, &GenInst_t44_0_0_0_t44_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17709_MI = 
{
	"qsort", (methodPointerType)&m17483_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17709_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t3414_TI;
extern TypeInfo t60_TI;
extern TypeInfo t44_TI;
extern TypeInfo t3415_TI;
extern TypeInfo t78_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1295_TI;
extern Il2CppType t44_0_0_0;
extern MethodInfo m17712_MI;
extern MethodInfo m17713_MI;
extern MethodInfo m7420_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m1656_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m17710_MI;
// Metadata Definition System.Int32 System.Array::compare<SpRect>(T,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m17712_MI;
extern TypeInfo t44_TI;
extern TypeInfo t3415_TI;
extern MethodInfo m17713_MI;
extern Il2CppType t44_0_0_0;
static void* m17710_RGCTXData[5] = 
{
	&m17712_MI,
	&t44_TI,
	&t3415_TI,
	&m17713_MI,
	(void*)&t44_0_0_0,
};
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17710_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17710_MI = 
{
	"compare", (methodPointerType)&m17583_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17710_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17711_MI;
// Metadata Definition System.Void System.Array::swap<SpRect,SpRect>(K[],V[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t44_0_0_0_t44_0_0_0;
Il2CppGenericContext m17711_GenericContext = { NULL, &GenInst_t44_0_0_0_t44_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17711_MI = 
{
	"swap", (methodPointerType)&m17584_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1751.h"
extern TypeInfo t87_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
#define m17714(__this, p0, p1, p2, p3, method) (void)m17587_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t1679 *)p3, method)
extern MethodInfo m17714_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17714_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17715_MI;
struct t52;
#define m17715(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
// Metadata Definition System.Void System.Array::Sort<SpRect>(T[],System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17714_MI;
static void* m17715_RGCTXData[1] = 
{
	&m17714_MI,
};
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17715_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17715_MI = 
{
	"Sort", (methodPointerType)&m17588_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17715_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1751_TI;
extern TypeInfo t60_TI;
extern TypeInfo t44_TI;
#include "t1751MD.h"
struct t52;
#define m17716(__this, p0, p1, p2, method) (void)m17589_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17716_MI;
extern MethodInfo m17714_MI;
extern MethodInfo m9021_MI;
extern MethodInfo m17716_MI;
extern MethodInfo m17714_MI;
extern MethodInfo m17714_MI;
// Metadata Definition System.Void System.Array::qsort<SpRect>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m9021_MI;
extern MethodInfo m17716_MI;
extern MethodInfo m17714_MI;
static void* m17714_RGCTXData[3] = 
{
	&m9021_MI,
	&m17716_MI,
	&m17714_MI,
};
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17714_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17714_MI = 
{
	"qsort", (methodPointerType)&m17587_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17714_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17716_MI;
// Metadata Definition System.Void System.Array::swap<SpRect>(T[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t44_0_0_0;
Il2CppGenericContext m17716_GenericContext = { NULL, &GenInst_t44_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17716_MI = 
{
	"swap", (methodPointerType)&m17589_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t38.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17717_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17717_MI;
extern MethodInfo m17718_MI;
struct t52;
 int32_t m17718 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17718_MI;
 int32_t m17718 (t52 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<SpPadStyle>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t38_TI;
extern Il2CppGenericInst GenInst_t38_0_0_0;
Il2CppGenericContext m17718_GenericContext = { NULL, &GenInst_t38_0_0_0 };
extern Il2CppType t38_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17718_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17718, &t52_TI, &t38_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17717_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<SpPadStyle>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t38_0_0_0;
Il2CppGenericContext m17717_GenericContext = { NULL, &GenInst_t38_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17717_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17719_MI;
struct t52;
 void m17719 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17719_MI;
 void m17719 (t52 * __this, int32_t p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<SpPadStyle>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t38_0_0_0;
Il2CppGenericContext m17719_GenericContext = { NULL, &GenInst_t38_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17719_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17719, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t38_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17717_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17717_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17720_MI;
struct t52;
 bool m17720 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17720_MI;
 bool m17720 (t52 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t38_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t38_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t7 * L_9 = Box(InitializedTypeInfo(&t38_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t38_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<SpPadStyle>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t38_0_0_0;
Il2CppGenericContext m17720_GenericContext = { NULL, &GenInst_t38_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17720_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17720, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17721_MI;
struct t52;
 void m17721 (t52 * __this, t2998* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17721_MI;
 void m17721 (t52 * __this, t2998* p0, int32_t p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral329, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t34* L_2 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_3 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_3, L_2, &m7242_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0027:
	{
		int32_t L_4 = m3833(__this, 0, &m3833_MI);
		int32_t L_5 = m3835(p0, 0, &m3835_MI);
		int32_t L_6 = m3833(p0, 0, &m3833_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t348 * L_7 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m2046(L_7, (t34*) &_stringLiteral330, &m2046_MI);
		il2cpp_codegen_raise_exception (L_7);
	}

IL_004c:
	{
		int32_t L_8 = m3831(p0, &m3831_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t34* L_9 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_10 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_10, L_9, &m7242_MI);
		il2cpp_codegen_raise_exception (L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t34* L_11 = m4015(NULL, (t34*) &_stringLiteral331, &m4015_MI);
		t88 * L_12 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6592(L_12, (t34*) &_stringLiteral326, L_11, &m6592_MI);
		il2cpp_codegen_raise_exception (L_12);
	}

IL_007e:
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		int32_t L_14 = m3833(__this, 0, &m3833_MI);
		m3878(NULL, __this, L_13, (t52 *)(t52 *)p0, p1, L_14, &m3878_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<SpPadStyle>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t38_0_0_0;
Il2CppGenericContext m17721_GenericContext = { NULL, &GenInst_t38_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17721_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17721, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17722_MI;
struct t52;
 bool m17722 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17722_MI;
 bool m17722 (t52 * __this, int32_t p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<SpPadStyle>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t38_0_0_0;
Il2CppGenericContext m17722_GenericContext = { NULL, &GenInst_t38_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17722_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17722, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t38_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17717_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17717_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17723_MI;
struct t52;
 int32_t m17723 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17723_MI;
 int32_t m17723 (t52 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t38_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t38_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t7 * L_11 = Box(InitializedTypeInfo(&t38_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t38_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<SpPadStyle>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern Il2CppGenericInst GenInst_t38_0_0_0;
Il2CppGenericContext m17723_GenericContext = { NULL, &GenInst_t38_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17723_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17723, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17724_MI;
struct t52;
 void m17724 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17724_MI;
 void m17724 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<SpPadStyle>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t38_0_0_0;
Il2CppGenericContext m17724_GenericContext = { NULL, &GenInst_t38_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17724_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17724, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t38_TI;
struct t52;
extern MethodInfo m17725_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17725_MI;
extern MethodInfo m17726_MI;
struct t52;
 void m17726 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17726_MI;
 void m17726 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t350* V_0 = {0};
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		V_0 = ((t350*)IsInst(__this, InitializedTypeInfo(&t350_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t7 * L_3 = Box(InitializedTypeInfo(&t38_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(V_0, p0)) = (t7 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<SpPadStyle>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t38_0_0_0;
Il2CppGenericContext m17726_GenericContext = { NULL, &GenInst_t38_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17726_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17726, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17725_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<SpPadStyle>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t38_0_0_0;
Il2CppGenericContext m17725_GenericContext = { NULL, &GenInst_t38_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17725_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1759.h"
extern TypeInfo t1759_TI;
#include "t1759MD.h"
extern MethodInfo m9024_MI;
extern MethodInfo m17727_MI;
struct t52;
 t7* m17727 (t52 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17727_MI;
 t7* m17727 (t52 * __this, MethodInfo* method){
	{
		t1759  L_0 = {0};
		m9024(&L_0, __this, &m9024_MI);
		t1759  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1759_TI), &L_1);
		return (t7*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<SpPadStyle>()
extern TypeInfo t52_TI;
extern TypeInfo t3416_TI;
extern Il2CppGenericInst GenInst_t38_0_0_0;
Il2CppGenericContext m17727_GenericContext = { NULL, &GenInst_t38_0_0_0 };
extern Il2CppType t3416_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17727_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17727, &t52_TI, &t3416_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t47.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17728_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17728_MI;
extern MethodInfo m17729_MI;
struct t52;
 t47  m17729 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17729_MI;
 t47  m17729 (t52 * __this, int32_t p0, MethodInfo* method){
	t47  V_0 = {0};
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.Color32>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t47_TI;
extern Il2CppGenericInst GenInst_t47_0_0_0;
Il2CppGenericContext m17729_GenericContext = { NULL, &GenInst_t47_0_0_0 };
extern Il2CppType t47_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17729_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17729, &t52_TI, &t47_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17728_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.Color32>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t47_0_0_0;
Il2CppGenericContext m17728_GenericContext = { NULL, &GenInst_t47_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17728_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17730_MI;
struct t52;
 void m17730 (t52 * __this, t47  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17730_MI;
 void m17730 (t52 * __this, t47  p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.Color32>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t47_0_0_0;
Il2CppGenericContext m17730_GenericContext = { NULL, &GenInst_t47_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17730_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17730, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t47_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17728_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17728_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17731_MI;
struct t52;
 bool m17731 (t52 * __this, t47  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17731_MI;
 bool m17731 (t52 * __this, t47  p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t47  V_2 = {0};
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		t47  L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t47_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		t47  L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t47_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t47  L_8 = V_2;
		t7 * L_9 = Box(InitializedTypeInfo(&t47_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t47_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.Color32>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t47_0_0_0;
Il2CppGenericContext m17731_GenericContext = { NULL, &GenInst_t47_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17731_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17731, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17732_MI;
struct t52;
 void m17732 (t52 * __this, t46* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17732_MI;
 void m17732 (t52 * __this, t46* p0, int32_t p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral329, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t34* L_2 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_3 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_3, L_2, &m7242_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0027:
	{
		int32_t L_4 = m3833(__this, 0, &m3833_MI);
		int32_t L_5 = m3835(p0, 0, &m3835_MI);
		int32_t L_6 = m3833(p0, 0, &m3833_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t348 * L_7 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m2046(L_7, (t34*) &_stringLiteral330, &m2046_MI);
		il2cpp_codegen_raise_exception (L_7);
	}

IL_004c:
	{
		int32_t L_8 = m3831(p0, &m3831_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t34* L_9 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_10 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_10, L_9, &m7242_MI);
		il2cpp_codegen_raise_exception (L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t34* L_11 = m4015(NULL, (t34*) &_stringLiteral331, &m4015_MI);
		t88 * L_12 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6592(L_12, (t34*) &_stringLiteral326, L_11, &m6592_MI);
		il2cpp_codegen_raise_exception (L_12);
	}

IL_007e:
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		int32_t L_14 = m3833(__this, 0, &m3833_MI);
		m3878(NULL, __this, L_13, (t52 *)(t52 *)p0, p1, L_14, &m3878_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.Color32>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t47_0_0_0;
Il2CppGenericContext m17732_GenericContext = { NULL, &GenInst_t47_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17732_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17732, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17733_MI;
struct t52;
 bool m17733 (t52 * __this, t47  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17733_MI;
 bool m17733 (t52 * __this, t47  p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.Color32>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t47_0_0_0;
Il2CppGenericContext m17733_GenericContext = { NULL, &GenInst_t47_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17733_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17733, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t47_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17728_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17728_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17734_MI;
struct t52;
 int32_t m17734 (t52 * __this, t47  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17734_MI;
 int32_t m17734 (t52 * __this, t47  p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t47  V_2 = {0};
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		t47  L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t47_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		t47  L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t47_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		t47  L_10 = p0;
		t7 * L_11 = Box(InitializedTypeInfo(&t47_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t47_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.Color32>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern Il2CppGenericInst GenInst_t47_0_0_0;
Il2CppGenericContext m17734_GenericContext = { NULL, &GenInst_t47_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17734_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17734, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17735_MI;
struct t52;
 void m17735 (t52 * __this, int32_t p0, t47  p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17735_MI;
 void m17735 (t52 * __this, int32_t p0, t47  p1, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.Color32>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t47_0_0_0;
Il2CppGenericContext m17735_GenericContext = { NULL, &GenInst_t47_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17735_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17735, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t47_TI;
struct t52;
extern MethodInfo m17736_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17736_MI;
extern MethodInfo m17737_MI;
struct t52;
 void m17737 (t52 * __this, int32_t p0, t47  p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17737_MI;
 void m17737 (t52 * __this, int32_t p0, t47  p1, MethodInfo* method){
	t350* V_0 = {0};
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		V_0 = ((t350*)IsInst(__this, InitializedTypeInfo(&t350_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		t47  L_2 = p1;
		t7 * L_3 = Box(InitializedTypeInfo(&t47_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(V_0, p0)) = (t7 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.Color32>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t47_0_0_0;
Il2CppGenericContext m17737_GenericContext = { NULL, &GenInst_t47_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17737_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17737, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17736_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.Color32>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t47_0_0_0;
Il2CppGenericContext m17736_GenericContext = { NULL, &GenInst_t47_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17736_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1760.h"
extern TypeInfo t1760_TI;
#include "t1760MD.h"
extern MethodInfo m9029_MI;
extern MethodInfo m17738_MI;
struct t52;
 t7* m17738 (t52 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17738_MI;
 t7* m17738 (t52 * __this, MethodInfo* method){
	{
		t1760  L_0 = {0};
		m9029(&L_0, __this, &m9029_MI);
		t1760  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1760_TI), &L_1);
		return (t7*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.Color32>()
extern TypeInfo t52_TI;
extern TypeInfo t3417_TI;
extern Il2CppGenericInst GenInst_t47_0_0_0;
Il2CppGenericContext m17738_GenericContext = { NULL, &GenInst_t47_0_0_0 };
extern Il2CppType t3417_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17738_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17738, &t52_TI, &t3417_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t94.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17739_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17739_MI;
extern MethodInfo m17740_MI;
struct t52;
 int32_t m17740 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17740_MI;
 int32_t m17740 (t52 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.EventHandle>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t94_TI;
extern Il2CppGenericInst GenInst_t94_0_0_0;
Il2CppGenericContext m17740_GenericContext = { NULL, &GenInst_t94_0_0_0 };
extern Il2CppType t94_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17740_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17740, &t52_TI, &t94_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17739_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.EventHandle>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t94_0_0_0;
Il2CppGenericContext m17739_GenericContext = { NULL, &GenInst_t94_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17739_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17741_MI;
struct t52;
 void m17741 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17741_MI;
 void m17741 (t52 * __this, int32_t p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.EventHandle>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t94_0_0_0;
Il2CppGenericContext m17741_GenericContext = { NULL, &GenInst_t94_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17741_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17741, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t94_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17739_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17739_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17742_MI;
struct t52;
 bool m17742 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17742_MI;
 bool m17742 (t52 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t94_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t94_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		t7 * L_9 = Box(InitializedTypeInfo(&t94_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t94_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.EventHandle>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t94_0_0_0;
Il2CppGenericContext m17742_GenericContext = { NULL, &GenInst_t94_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17742_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17742, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "UnityEngine.UI_ArrayTypes.h"
extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17743_MI;
struct t52;
 void m17743 (t52 * __this, t3271* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17743_MI;
 void m17743 (t52 * __this, t3271* p0, int32_t p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral329, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t34* L_2 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_3 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_3, L_2, &m7242_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0027:
	{
		int32_t L_4 = m3833(__this, 0, &m3833_MI);
		int32_t L_5 = m3835(p0, 0, &m3835_MI);
		int32_t L_6 = m3833(p0, 0, &m3833_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t348 * L_7 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m2046(L_7, (t34*) &_stringLiteral330, &m2046_MI);
		il2cpp_codegen_raise_exception (L_7);
	}

IL_004c:
	{
		int32_t L_8 = m3831(p0, &m3831_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t34* L_9 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_10 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_10, L_9, &m7242_MI);
		il2cpp_codegen_raise_exception (L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t34* L_11 = m4015(NULL, (t34*) &_stringLiteral331, &m4015_MI);
		t88 * L_12 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6592(L_12, (t34*) &_stringLiteral326, L_11, &m6592_MI);
		il2cpp_codegen_raise_exception (L_12);
	}

IL_007e:
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		int32_t L_14 = m3833(__this, 0, &m3833_MI);
		m3878(NULL, __this, L_13, (t52 *)(t52 *)p0, p1, L_14, &m3878_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.EventHandle>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t94_0_0_0;
Il2CppGenericContext m17743_GenericContext = { NULL, &GenInst_t94_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17743_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17743, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17744_MI;
struct t52;
 bool m17744 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17744_MI;
 bool m17744 (t52 * __this, int32_t p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.EventHandle>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t94_0_0_0;
Il2CppGenericContext m17744_GenericContext = { NULL, &GenInst_t94_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17744_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17744, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t94_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17739_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17739_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17745_MI;
struct t52;
 int32_t m17745 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17745_MI;
 int32_t m17745 (t52 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		int32_t L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t94_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t94_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		int32_t L_10 = p0;
		t7 * L_11 = Box(InitializedTypeInfo(&t94_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t94_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.EventHandle>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern Il2CppGenericInst GenInst_t94_0_0_0;
Il2CppGenericContext m17745_GenericContext = { NULL, &GenInst_t94_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17745_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17745, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17746_MI;
struct t52;
 void m17746 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17746_MI;
 void m17746 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.EventHandle>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t94_0_0_0;
Il2CppGenericContext m17746_GenericContext = { NULL, &GenInst_t94_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17746_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17746, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t94_TI;
struct t52;
extern MethodInfo m17747_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17747_MI;
extern MethodInfo m17748_MI;
struct t52;
 void m17748 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17748_MI;
 void m17748 (t52 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t350* V_0 = {0};
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		V_0 = ((t350*)IsInst(__this, InitializedTypeInfo(&t350_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = p1;
		t7 * L_3 = Box(InitializedTypeInfo(&t94_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(V_0, p0)) = (t7 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.EventHandle>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t94_0_0_0;
Il2CppGenericContext m17748_GenericContext = { NULL, &GenInst_t94_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17748_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17748, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17747_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.EventHandle>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t94_0_0_0;
Il2CppGenericContext m17747_GenericContext = { NULL, &GenInst_t94_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17747_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1761.h"
extern TypeInfo t1761_TI;
#include "t1761MD.h"
extern MethodInfo m9034_MI;
extern MethodInfo m17749_MI;
struct t52;
 t7* m17749 (t52 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17749_MI;
 t7* m17749 (t52 * __this, MethodInfo* method){
	{
		t1761  L_0 = {0};
		m9034(&L_0, __this, &m9034_MI);
		t1761  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1761_TI), &L_1);
		return (t7*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.EventHandle>()
extern TypeInfo t52_TI;
extern TypeInfo t3418_TI;
extern Il2CppGenericInst GenInst_t94_0_0_0;
Il2CppGenericContext m17749_GenericContext = { NULL, &GenInst_t94_0_0_0 };
extern Il2CppType t3418_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17749_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17749, &t52_TI, &t3418_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t95.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17750_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17750_MI;
extern MethodInfo m17751_MI;
struct t52;
#define m17751(__this, p0, method) (t95 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.EventSystem>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t95_TI;
extern Il2CppGenericInst GenInst_t95_0_0_0;
Il2CppGenericContext m17751_GenericContext = { NULL, &GenInst_t95_0_0_0 };
extern Il2CppType t95_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17751_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t95_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17750_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.EventSystem>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t95_0_0_0;
Il2CppGenericContext m17750_GenericContext = { NULL, &GenInst_t95_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17750_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17752_MI;
struct t52;
#define m17752(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.EventSystem>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t95_0_0_0;
Il2CppGenericContext m17752_GenericContext = { NULL, &GenInst_t95_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17752_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t95_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17750_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17750_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17753_MI;
struct t52;
#define m17753(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.EventSystem>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t95_TI;
static void* m17753_RGCTXData[1] = 
{
	&t95_TI,
};
extern Il2CppGenericInst GenInst_t95_0_0_0;
Il2CppGenericContext m17753_GenericContext = { NULL, &GenInst_t95_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17753_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17753_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17754_MI;
struct t52;
#define m17754(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.EventSystem>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t95_0_0_0;
Il2CppGenericContext m17754_GenericContext = { NULL, &GenInst_t95_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17754_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17755_MI;
struct t52;
#define m17755(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.EventSystem>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t95_0_0_0;
Il2CppGenericContext m17755_GenericContext = { NULL, &GenInst_t95_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17755_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t95_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17750_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17750_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17756_MI;
struct t52;
#define m17756(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.EventSystem>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t95_TI;
static void* m17756_RGCTXData[1] = 
{
	&t95_TI,
};
extern Il2CppGenericInst GenInst_t95_0_0_0;
Il2CppGenericContext m17756_GenericContext = { NULL, &GenInst_t95_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17756_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17756_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17757_MI;
struct t52;
#define m17757(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.EventSystem>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t95_0_0_0;
Il2CppGenericContext m17757_GenericContext = { NULL, &GenInst_t95_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17757_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t95_TI;
struct t52;
extern MethodInfo m17758_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17758_MI;
extern MethodInfo m17759_MI;
struct t52;
#define m17759(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.EventSystem>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t95_TI;
static void* m17759_RGCTXData[1] = 
{
	&t95_TI,
};
extern Il2CppGenericInst GenInst_t95_0_0_0;
Il2CppGenericContext m17759_GenericContext = { NULL, &GenInst_t95_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17759_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17759_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17758_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.EventSystem>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t95_0_0_0;
Il2CppGenericContext m17758_GenericContext = { NULL, &GenInst_t95_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17758_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1762.h"
extern TypeInfo t1762_TI;
#include "t1762MD.h"
extern MethodInfo m9039_MI;
extern MethodInfo m17760_MI;
struct t52;
#define m17760(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.EventSystem>()
extern TypeInfo t52_TI;
extern TypeInfo t3419_TI;
extern TypeInfo t1762_TI;
extern MethodInfo m9039_MI;
static void* m17760_RGCTXData[2] = 
{
	&t1762_TI,
	&m9039_MI,
};
extern Il2CppGenericInst GenInst_t95_0_0_0;
Il2CppGenericContext m17760_GenericContext = { NULL, &GenInst_t95_0_0_0 };
extern Il2CppType t3419_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17760_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3419_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17760_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t100.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17761_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17761_MI;
extern MethodInfo m17762_MI;
struct t52;
#define m17762(__this, p0, method) (t100 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.UIBehaviour>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t100_TI;
extern Il2CppGenericInst GenInst_t100_0_0_0;
Il2CppGenericContext m17762_GenericContext = { NULL, &GenInst_t100_0_0_0 };
extern Il2CppType t100_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17762_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t100_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17761_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.UIBehaviour>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t100_0_0_0;
Il2CppGenericContext m17761_GenericContext = { NULL, &GenInst_t100_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17761_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17763_MI;
struct t52;
#define m17763(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.UIBehaviour>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t100_0_0_0;
Il2CppGenericContext m17763_GenericContext = { NULL, &GenInst_t100_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17763_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t100_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17761_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17761_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17764_MI;
struct t52;
#define m17764(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.UIBehaviour>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t100_TI;
static void* m17764_RGCTXData[1] = 
{
	&t100_TI,
};
extern Il2CppGenericInst GenInst_t100_0_0_0;
Il2CppGenericContext m17764_GenericContext = { NULL, &GenInst_t100_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17764_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17764_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17765_MI;
struct t52;
#define m17765(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.UIBehaviour>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t100_0_0_0;
Il2CppGenericContext m17765_GenericContext = { NULL, &GenInst_t100_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17765_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17766_MI;
struct t52;
#define m17766(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.UIBehaviour>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t100_0_0_0;
Il2CppGenericContext m17766_GenericContext = { NULL, &GenInst_t100_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17766_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t100_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17761_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17761_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17767_MI;
struct t52;
#define m17767(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.UIBehaviour>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t100_TI;
static void* m17767_RGCTXData[1] = 
{
	&t100_TI,
};
extern Il2CppGenericInst GenInst_t100_0_0_0;
Il2CppGenericContext m17767_GenericContext = { NULL, &GenInst_t100_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17767_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17767_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17768_MI;
struct t52;
#define m17768(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.UIBehaviour>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t100_0_0_0;
Il2CppGenericContext m17768_GenericContext = { NULL, &GenInst_t100_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17768_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t100_TI;
struct t52;
extern MethodInfo m17769_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17769_MI;
extern MethodInfo m17770_MI;
struct t52;
#define m17770(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.UIBehaviour>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t100_TI;
static void* m17770_RGCTXData[1] = 
{
	&t100_TI,
};
extern Il2CppGenericInst GenInst_t100_0_0_0;
Il2CppGenericContext m17770_GenericContext = { NULL, &GenInst_t100_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17770_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17770_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17769_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.UIBehaviour>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t100_0_0_0;
Il2CppGenericContext m17769_GenericContext = { NULL, &GenInst_t100_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17769_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1763.h"
extern TypeInfo t1763_TI;
#include "t1763MD.h"
extern MethodInfo m9044_MI;
extern MethodInfo m17771_MI;
struct t52;
#define m17771(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.UIBehaviour>()
extern TypeInfo t52_TI;
extern TypeInfo t3420_TI;
extern TypeInfo t1763_TI;
extern MethodInfo m9044_MI;
static void* m17771_RGCTXData[2] = 
{
	&t1763_TI,
	&m9044_MI,
};
extern Il2CppGenericInst GenInst_t100_0_0_0;
Il2CppGenericContext m17771_GenericContext = { NULL, &GenInst_t100_0_0_0 };
extern Il2CppType t3420_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17771_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3420_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17771_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t95_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern Il2CppType t95_0_0_0;
extern MethodInfo m1555_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m2583_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m17772_MI;
struct t572;
#define m17772(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.EventSystems.EventSystem>(System.Object)
extern TypeInfo t572_TI;
extern TypeInfo t53_TI;
extern TypeInfo t95_TI;
extern Il2CppType t95_0_0_0;
static void* m17772_RGCTXData[2] = 
{
	&t95_TI,
	(void*)&t95_0_0_0,
};
extern Il2CppGenericInst GenInst_t95_0_0_0;
Il2CppGenericContext m17772_GenericContext = { NULL, &GenInst_t95_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t572_TI;
MethodInfo m17772_MI = 
{
	"ThrowOnInvalidArg", (methodPointerType)&m17212_gshared, &t572_TI, &t53_0_0_0, NULL, NULL, NULL, 148, 0, 255, 0, false, true, 0, m17772_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t97.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17773_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17773_MI;
extern MethodInfo m17774_MI;
struct t52;
#define m17774(__this, p0, method) (t97 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.BaseInputModule>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t97_TI;
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17774_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t97_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17774_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t97_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17773_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.BaseInputModule>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17773_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17773_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17775_MI;
struct t52;
#define m17775(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.BaseInputModule>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17775_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17775_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t97_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17773_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17773_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17776_MI;
struct t52;
#define m17776(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.BaseInputModule>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t97_TI;
static void* m17776_RGCTXData[1] = 
{
	&t97_TI,
};
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17776_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17776_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17776_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17777_MI;
struct t52;
#define m17777(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.BaseInputModule>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17777_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17777_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17778_MI;
struct t52;
#define m17778(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.BaseInputModule>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17778_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17778_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t97_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17773_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17773_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17779_MI;
struct t52;
#define m17779(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.BaseInputModule>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t97_TI;
static void* m17779_RGCTXData[1] = 
{
	&t97_TI,
};
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17779_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17779_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17779_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17780_MI;
struct t52;
#define m17780(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.BaseInputModule>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17780_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17780_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t97_TI;
struct t52;
extern MethodInfo m17781_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17781_MI;
extern MethodInfo m17782_MI;
struct t52;
#define m17782(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.BaseInputModule>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t97_TI;
static void* m17782_RGCTXData[1] = 
{
	&t97_TI,
};
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17782_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17782_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17782_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17781_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.BaseInputModule>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17781_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17781_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1775.h"
extern TypeInfo t1775_TI;
#include "t1775MD.h"
extern MethodInfo m9104_MI;
extern MethodInfo m17783_MI;
struct t52;
#define m17783(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.BaseInputModule>()
extern TypeInfo t52_TI;
extern TypeInfo t1768_TI;
extern TypeInfo t1775_TI;
extern MethodInfo m9104_MI;
static void* m17783_RGCTXData[2] = 
{
	&t1775_TI,
	&m9104_MI,
};
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17783_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t1768_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17783_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t1768_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17783_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m17784(__this, p0, p1, p2, method) (void)m17411_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17784_MI;
extern MethodInfo m17784_MI;
extern MethodInfo m17785_MI;
struct t52;
#define m17785(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::Resize<UnityEngine.EventSystems.BaseInputModule>(T[]&,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17784_MI;
static void* m17785_RGCTXData[1] = 
{
	&m17784_MI,
};
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17785_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17785_MI = 
{
	"Resize", (methodPointerType)&m17412_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17785_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t1767_TI;
extern TypeInfo t97_TI;
extern MethodInfo m216_MI;
extern MethodInfo m7029_MI;
extern MethodInfo m3877_MI;
extern MethodInfo m17784_MI;
// Metadata Definition System.Void System.Array::Resize<UnityEngine.EventSystems.BaseInputModule>(T[]&,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1767_TI;
static void* m17784_RGCTXData[1] = 
{
	&t1767_TI,
};
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17784_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17784_MI = 
{
	"Resize", (methodPointerType)&m17411_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17784_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1778.h"
extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t1778_TI;
extern TypeInfo t55_TI;
extern TypeInfo t97_TI;
#include "t1778MD.h"
extern MethodInfo m3066_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m3847_MI;
extern MethodInfo m216_MI;
extern MethodInfo m9185_MI;
extern MethodInfo m17786_MI;
extern MethodInfo m17787_MI;
struct t52;
#define m17787(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
// Metadata Definition System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.BaseInputModule>(T[],T,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m9185_MI;
extern MethodInfo m17786_MI;
static void* m17787_RGCTXData[2] = 
{
	&m9185_MI,
	&m17786_MI,
};
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17787_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17787_MI = 
{
	"IndexOf", (methodPointerType)&m7824_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17787_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
struct t52;
#define m17788(__this, p0, p1, p2, p3, p4, method) (void)m17480_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17788_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17788_MI;
extern MethodInfo m17789_MI;
struct t52;
#define m17789(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
// Metadata Definition System.Void System.Array::Sort<UnityEngine.EventSystems.BaseInputModule>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17788_MI;
static void* m17789_RGCTXData[1] = 
{
	&m17788_MI,
};
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17789_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17789_MI = 
{
	"Sort", (methodPointerType)&m17481_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17789_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t348_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern TypeInfo t1767_TI;
extern TypeInfo t97_TI;
extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t250_TI;
extern TypeInfo t244_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
#define m17790(__this, p0, method) (t741 *)m17482_gshared((t7 *)__this, (t350*)p0, method)
extern MethodInfo m17790_MI;
struct t52;
#define m17791(__this, p0, p1, p2, p3, p4, method) (void)m17483_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17791_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m6582_MI;
extern MethodInfo m17790_MI;
extern MethodInfo m3904_MI;
extern MethodInfo m3905_MI;
extern MethodInfo m3906_MI;
extern MethodInfo m17791_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17788_MI;
// Metadata Definition System.Void System.Array::Sort<UnityEngine.EventSystems.BaseInputModule,UnityEngine.EventSystems.BaseInputModule>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17790_MI;
extern TypeInfo t1767_TI;
extern MethodInfo m17791_MI;
static void* m17788_RGCTXData[3] = 
{
	&m17790_MI,
	&t1767_TI,
	&m17791_MI,
};
extern Il2CppGenericInst GenInst_t97_0_0_0_t97_0_0_0;
Il2CppGenericContext m17788_GenericContext = { NULL, &GenInst_t97_0_0_0_t97_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17788_MI = 
{
	"Sort", (methodPointerType)&m17480_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17788_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern MethodInfo m3899_MI;
extern MethodInfo m3810_MI;
extern MethodInfo m3902_MI;
extern MethodInfo m3901_MI;
extern MethodInfo m17790_MI;
// Metadata Definition System.Array/Swapper System.Array::get_swapper<UnityEngine.EventSystems.BaseInputModule>(T[])
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17790_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t741_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17790_MI = 
{
	"get_swapper", (methodPointerType)&m17482_gshared, &t52_TI, &t741_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m17792(__this, p0, p1, p2, method) (int32_t)m17583_gshared((t7 *)__this, (t7 *)p0, (t7 *)p1, (t7*)p2, method)
extern MethodInfo m17792_MI;
struct t52;
#define m17793(__this, p0, p1, p2, p3, method) (void)m17584_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m17793_MI;
extern MethodInfo m17791_MI;
extern MethodInfo m17792_MI;
extern MethodInfo m17793_MI;
extern MethodInfo m17791_MI;
extern MethodInfo m17791_MI;
// Metadata Definition System.Void System.Array::qsort<UnityEngine.EventSystems.BaseInputModule,UnityEngine.EventSystems.BaseInputModule>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17792_MI;
extern MethodInfo m17793_MI;
extern MethodInfo m17791_MI;
static void* m17791_RGCTXData[3] = 
{
	&m17792_MI,
	&m17793_MI,
	&m17791_MI,
};
extern Il2CppGenericInst GenInst_t97_0_0_0_t97_0_0_0;
Il2CppGenericContext m17791_GenericContext = { NULL, &GenInst_t97_0_0_0_t97_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17791_MI = 
{
	"qsort", (methodPointerType)&m17483_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17791_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t3421_TI;
extern TypeInfo t60_TI;
extern TypeInfo t97_TI;
extern TypeInfo t3422_TI;
extern TypeInfo t78_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1295_TI;
extern Il2CppType t97_0_0_0;
extern MethodInfo m17794_MI;
extern MethodInfo m17795_MI;
extern MethodInfo m7420_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m1656_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m17792_MI;
// Metadata Definition System.Int32 System.Array::compare<UnityEngine.EventSystems.BaseInputModule>(T,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m17794_MI;
extern TypeInfo t97_TI;
extern TypeInfo t3422_TI;
extern MethodInfo m17795_MI;
extern Il2CppType t97_0_0_0;
static void* m17792_RGCTXData[5] = 
{
	&m17794_MI,
	&t97_TI,
	&t3422_TI,
	&m17795_MI,
	(void*)&t97_0_0_0,
};
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17792_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17792_MI = 
{
	"compare", (methodPointerType)&m17583_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17792_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17793_MI;
// Metadata Definition System.Void System.Array::swap<UnityEngine.EventSystems.BaseInputModule,UnityEngine.EventSystems.BaseInputModule>(K[],V[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t97_0_0_0_t97_0_0_0;
Il2CppGenericContext m17793_GenericContext = { NULL, &GenInst_t97_0_0_0_t97_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17793_MI = 
{
	"swap", (methodPointerType)&m17584_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1773.h"
extern TypeInfo t87_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
#define m17796(__this, p0, p1, p2, p3, method) (void)m17587_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t1679 *)p3, method)
extern MethodInfo m17796_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17796_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17797_MI;
struct t52;
#define m17797(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
// Metadata Definition System.Void System.Array::Sort<UnityEngine.EventSystems.BaseInputModule>(T[],System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17796_MI;
static void* m17797_RGCTXData[1] = 
{
	&m17796_MI,
};
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17797_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17797_MI = 
{
	"Sort", (methodPointerType)&m17588_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17797_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1773_TI;
extern TypeInfo t60_TI;
extern TypeInfo t97_TI;
#include "t1773MD.h"
struct t52;
#define m17798(__this, p0, p1, p2, method) (void)m17589_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17798_MI;
extern MethodInfo m17796_MI;
extern MethodInfo m9200_MI;
extern MethodInfo m17798_MI;
extern MethodInfo m17796_MI;
extern MethodInfo m17796_MI;
// Metadata Definition System.Void System.Array::qsort<UnityEngine.EventSystems.BaseInputModule>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m9200_MI;
extern MethodInfo m17798_MI;
extern MethodInfo m17796_MI;
static void* m17796_RGCTXData[3] = 
{
	&m9200_MI,
	&m17798_MI,
	&m17796_MI,
};
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17796_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17796_MI = 
{
	"qsort", (methodPointerType)&m17587_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17796_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17798_MI;
// Metadata Definition System.Void System.Array::swap<UnityEngine.EventSystems.BaseInputModule>(T[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m17798_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17798_MI = 
{
	"swap", (methodPointerType)&m17589_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t96.h"
extern TypeInfo t97_TI;
extern TypeInfo t70_TI;
extern Il2CppType t97_0_0_0;
extern MethodInfo m1675_MI;
extern MethodInfo m2667_MI;
extern MethodInfo m1436_MI;
struct t57;
struct t57;
#include "t340.h"
 void m1459_gshared (t57 * __this, t340 * p0, MethodInfo* method);
#define m1459(__this, p0, method) (void)m1459_gshared((t57 *)__this, (t340 *)p0, method)
#define m1436(__this, p0, method) (void)m1459_gshared((t57 *)__this, (t340 *)p0, method)
// Metadata Definition System.Void UnityEngine.Component::GetComponents<UnityEngine.EventSystems.BaseInputModule>(System.Collections.Generic.List`1<T>)
extern TypeInfo t57_TI;
extern TypeInfo t53_TI;
extern Il2CppType t97_0_0_0;
static void* m1436_RGCTXData[1] = 
{
	(void*)&t97_0_0_0,
};
extern Il2CppGenericInst GenInst_t97_0_0_0;
Il2CppGenericContext m1436_GenericContext = { NULL, &GenInst_t97_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t57_TI;
MethodInfo m1436_MI = 
{
	"GetComponents", (methodPointerType)&m1459_gshared, &t57_TI, &t53_0_0_0, NULL, NULL, NULL, 134, 0, 255, 0, false, true, 0, m1436_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern Il2CppType t7_0_0_0;
extern MethodInfo m1675_MI;
extern MethodInfo m2667_MI;
extern MethodInfo m1459_MI;
extern MethodInfo m1459_MI;
 void m1459_gshared (t57 * __this, t340 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
		t70 * L_0 = m1675(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), &m1675_MI);
		m2667(__this, L_0, p0, &m2667_MI);
		return;
	}
}
// Metadata Definition System.Void UnityEngine.Component::GetComponents<System.Object>(System.Collections.Generic.List`1<T>)
extern TypeInfo t57_TI;
extern TypeInfo t53_TI;
extern Il2CppType t7_0_0_0;
static void* m1459_RGCTXData[1] = 
{
	(void*)&t7_0_0_0,
};
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m1459_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t57_TI;
MethodInfo m1459_MI = 
{
	"GetComponents", (methodPointerType)&m1459_gshared, &t57_TI, &t53_0_0_0, NULL, NULL, NULL, 134, 0, 255, 0, false, true, 0, m1459_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t115.h"
#include "t26.h"
#include "t98.h"
#include "t129.h"
#include "t154.h"
#include "t133.h"
extern TypeInfo t115_TI;
extern TypeInfo t154_TI;
extern TypeInfo t337_TI;
extern TypeInfo t60_TI;
extern TypeInfo t149_TI;
extern TypeInfo t70_TI;
extern TypeInfo t341_TI;
extern TypeInfo t34_TI;
extern TypeInfo t86_TI;
extern TypeInfo t129_TI;
extern TypeInfo t53_TI;
extern TypeInfo t98_TI;
#include "t115MD.h"
#include "t133MD.h"
#include "t154MD.h"
#include "t341MD.h"
#include "t86MD.h"
#include "t339MD.h"
#include "t129MD.h"
struct t115;
#include "t317.h"
 void m17799 (t7 * __this, t26 * p0, t7* p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17799_MI;
extern Il2CppType t149_0_0_0;
extern MethodInfo m9369_MI;
extern MethodInfo m17799_MI;
extern MethodInfo m9259_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3040_MI;
extern MethodInfo m1555_MI;
extern MethodInfo m3536_MI;
extern MethodInfo m3063_MI;
extern MethodInfo m2618_MI;
extern MethodInfo m9207_MI;
extern MethodInfo m9258_MI;
extern MethodInfo m9371_MI;
extern MethodInfo m1442_MI;
struct t115;
 bool m1442 (t7 * __this, t26 * p0, t98 * p1, t129 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m1442_MI;
 bool m1442 (t7 * __this, t26 * p0, t98 * p1, t129 * p2, MethodInfo* method){
	t154 * V_0 = {0};
	int32_t V_1 = 0;
	t7 * V_2 = {0};
	t86 * V_3 = {0};
	t7 * V_4 = {0};
	t86 * V_5 = {0};
	int32_t V_6 = 0;
	t86 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t86 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t115_TI));
		t154 * L_0 = m9369((((t115_SFs*)InitializedTypeInfo(&t115_TI)->static_fields)->f17), &m9369_MI);
		V_0 = L_0;
		m17799(NULL, p0, V_0, &m17799_MI);
		V_1 = 0;
		goto IL_008e;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		t7 * L_1 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(&m9259_MI, V_0, V_1);
		V_2 = ((t7 *)Castclass(L_1, InitializedTypeInfo(&t149_TI)));
		// IL_0026: leave IL_006f
		goto IL_006f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t86 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t86_TI, e.ex->object.klass))
			goto IL_002b;
		throw e;
	}

IL_002b:
	{ // begin catch(System.Exception)
		{
			V_3 = ((t86 *)__exception_local);
			t7 * L_2 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(&m9259_MI, V_0, V_1);
			V_4 = L_2;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
			t70 * L_3 = m1675(NULL, LoadTypeToken(&t149_0_0_0), &m1675_MI);
			t34* L_4 = (t34*)VirtFuncInvoker0< t34* >::Invoke(&m3040_MI, L_3);
			t70 * L_5 = m1555(V_4, &m1555_MI);
			t34* L_6 = (t34*)VirtFuncInvoker0< t34* >::Invoke(&m3040_MI, L_5);
			IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
			t34* L_7 = m3536(NULL, (t34*) &_stringLiteral17, L_4, L_6, &m3536_MI);
			t86 * L_8 = (t86 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t86_TI));
			m3063(L_8, L_7, V_3, &m3063_MI);
			m2618(NULL, L_8, &m2618_MI);
			// IL_0065: leave IL_008a
			goto IL_008a;
		}

IL_006a:
		{
			; // IL_006a: leave IL_006f
		}
	} // end catch (depth: 1)

IL_006f:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker2< t7 *, t98 * >::Invoke(&m9207_MI, p2, V_2, p1);
		// IL_0077: leave IL_008a
		goto IL_008a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t86 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t86_TI, e.ex->object.klass))
			goto IL_007c;
		throw e;
	}

IL_007c:
	{ // begin catch(System.Exception)
		V_5 = ((t86 *)__exception_local);
		m2618(NULL, V_5, &m2618_MI);
		// IL_0085: leave IL_008a
		goto IL_008a;
	} // end catch (depth: 1)

IL_008a:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_008e:
	{
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9258_MI, V_0);
		if ((((int32_t)V_1) < ((int32_t)L_9)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9258_MI, V_0);
		V_6 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t115_TI));
		m9371((((t115_SFs*)InitializedTypeInfo(&t115_TI)->static_fields)->f17), V_0, &m9371_MI);
		return ((((int32_t)V_6) > ((int32_t)0))? 1 : 0);
	}
}
// Metadata Definition System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IDeselectHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
extern TypeInfo t115_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t149_0_0_0;
Il2CppGenericContext m1442_GenericContext = { NULL, &GenInst_t149_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t115_TI;
MethodInfo m1442_MI = 
{
	"Execute", (methodPointerType)&m1442, &t115_TI, &t55_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17800_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17800_MI;
extern MethodInfo m17801_MI;
struct t52;
#define m17801(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IEventSystemHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t337_TI;
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17801_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t337_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17801_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t337_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17800_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.IEventSystemHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17800_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17800_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17802_MI;
struct t52;
#define m17802(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.IEventSystemHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17802_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17802_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t337_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17800_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17800_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17803_MI;
struct t52;
#define m17803(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.IEventSystemHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t337_TI;
static void* m17803_RGCTXData[1] = 
{
	&t337_TI,
};
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17803_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17803_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17803_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17804_MI;
struct t52;
#define m17804(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.IEventSystemHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17804_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17804_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17805_MI;
struct t52;
#define m17805(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.IEventSystemHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17805_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17805_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t337_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17800_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17800_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17806_MI;
struct t52;
#define m17806(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.IEventSystemHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t337_TI;
static void* m17806_RGCTXData[1] = 
{
	&t337_TI,
};
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17806_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17806_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17806_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17807_MI;
struct t52;
#define m17807(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.IEventSystemHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17807_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17807_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t337_TI;
struct t52;
extern MethodInfo m17808_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17808_MI;
extern MethodInfo m17809_MI;
struct t52;
#define m17809(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.IEventSystemHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t337_TI;
static void* m17809_RGCTXData[1] = 
{
	&t337_TI,
};
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17809_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17809_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17809_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17808_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.IEventSystemHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17808_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17808_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1791.h"
extern TypeInfo t1791_TI;
#include "t1791MD.h"
extern MethodInfo m9261_MI;
extern MethodInfo m17810_MI;
struct t52;
#define m17810(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.IEventSystemHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t1784_TI;
extern TypeInfo t1791_TI;
extern MethodInfo m9261_MI;
static void* m17810_RGCTXData[2] = 
{
	&t1791_TI,
	&m9261_MI,
};
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17810_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t1784_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17810_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t1784_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17810_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m17811(__this, p0, p1, p2, method) (void)m17411_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17811_MI;
extern MethodInfo m17811_MI;
extern MethodInfo m17812_MI;
struct t52;
#define m17812(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::Resize<UnityEngine.EventSystems.IEventSystemHandler>(T[]&,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17811_MI;
static void* m17812_RGCTXData[1] = 
{
	&m17811_MI,
};
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17812_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17812_MI = 
{
	"Resize", (methodPointerType)&m17412_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17812_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t1783_TI;
extern TypeInfo t337_TI;
extern MethodInfo m216_MI;
extern MethodInfo m7029_MI;
extern MethodInfo m3877_MI;
extern MethodInfo m17811_MI;
// Metadata Definition System.Void System.Array::Resize<UnityEngine.EventSystems.IEventSystemHandler>(T[]&,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1783_TI;
static void* m17811_RGCTXData[1] = 
{
	&t1783_TI,
};
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17811_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17811_MI = 
{
	"Resize", (methodPointerType)&m17411_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17811_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1794.h"
extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t1794_TI;
extern TypeInfo t55_TI;
extern TypeInfo t337_TI;
#include "t1794MD.h"
extern MethodInfo m3066_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m3847_MI;
extern MethodInfo m216_MI;
extern MethodInfo m9342_MI;
extern MethodInfo m17813_MI;
extern MethodInfo m17814_MI;
struct t52;
#define m17814(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
// Metadata Definition System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.IEventSystemHandler>(T[],T,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m9342_MI;
extern MethodInfo m17813_MI;
static void* m17814_RGCTXData[2] = 
{
	&m9342_MI,
	&m17813_MI,
};
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17814_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17814_MI = 
{
	"IndexOf", (methodPointerType)&m7824_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17814_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
struct t52;
#define m17815(__this, p0, p1, p2, p3, p4, method) (void)m17480_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17815_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17815_MI;
extern MethodInfo m17816_MI;
struct t52;
#define m17816(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
// Metadata Definition System.Void System.Array::Sort<UnityEngine.EventSystems.IEventSystemHandler>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17815_MI;
static void* m17816_RGCTXData[1] = 
{
	&m17815_MI,
};
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17816_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17816_MI = 
{
	"Sort", (methodPointerType)&m17481_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17816_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t348_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern TypeInfo t1783_TI;
extern TypeInfo t337_TI;
extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t250_TI;
extern TypeInfo t244_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
#define m17817(__this, p0, method) (t741 *)m17482_gshared((t7 *)__this, (t350*)p0, method)
extern MethodInfo m17817_MI;
struct t52;
#define m17818(__this, p0, p1, p2, p3, p4, method) (void)m17483_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17818_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m6582_MI;
extern MethodInfo m17817_MI;
extern MethodInfo m3904_MI;
extern MethodInfo m3905_MI;
extern MethodInfo m3906_MI;
extern MethodInfo m17818_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17815_MI;
// Metadata Definition System.Void System.Array::Sort<UnityEngine.EventSystems.IEventSystemHandler,UnityEngine.EventSystems.IEventSystemHandler>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17817_MI;
extern TypeInfo t1783_TI;
extern MethodInfo m17818_MI;
static void* m17815_RGCTXData[3] = 
{
	&m17817_MI,
	&t1783_TI,
	&m17818_MI,
};
extern Il2CppGenericInst GenInst_t337_0_0_0_t337_0_0_0;
Il2CppGenericContext m17815_GenericContext = { NULL, &GenInst_t337_0_0_0_t337_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17815_MI = 
{
	"Sort", (methodPointerType)&m17480_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17815_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern MethodInfo m3899_MI;
extern MethodInfo m3810_MI;
extern MethodInfo m3902_MI;
extern MethodInfo m3901_MI;
extern MethodInfo m17817_MI;
// Metadata Definition System.Array/Swapper System.Array::get_swapper<UnityEngine.EventSystems.IEventSystemHandler>(T[])
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17817_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t741_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17817_MI = 
{
	"get_swapper", (methodPointerType)&m17482_gshared, &t52_TI, &t741_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m17819(__this, p0, p1, p2, method) (int32_t)m17583_gshared((t7 *)__this, (t7 *)p0, (t7 *)p1, (t7*)p2, method)
extern MethodInfo m17819_MI;
struct t52;
#define m17820(__this, p0, p1, p2, p3, method) (void)m17584_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m17820_MI;
extern MethodInfo m17818_MI;
extern MethodInfo m17819_MI;
extern MethodInfo m17820_MI;
extern MethodInfo m17818_MI;
extern MethodInfo m17818_MI;
// Metadata Definition System.Void System.Array::qsort<UnityEngine.EventSystems.IEventSystemHandler,UnityEngine.EventSystems.IEventSystemHandler>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17819_MI;
extern MethodInfo m17820_MI;
extern MethodInfo m17818_MI;
static void* m17818_RGCTXData[3] = 
{
	&m17819_MI,
	&m17820_MI,
	&m17818_MI,
};
extern Il2CppGenericInst GenInst_t337_0_0_0_t337_0_0_0;
Il2CppGenericContext m17818_GenericContext = { NULL, &GenInst_t337_0_0_0_t337_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17818_MI = 
{
	"qsort", (methodPointerType)&m17483_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17818_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t3423_TI;
extern TypeInfo t60_TI;
extern TypeInfo t337_TI;
extern TypeInfo t3424_TI;
extern TypeInfo t78_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1295_TI;
extern Il2CppType t337_0_0_0;
extern MethodInfo m17821_MI;
extern MethodInfo m17822_MI;
extern MethodInfo m7420_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m1656_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m17819_MI;
// Metadata Definition System.Int32 System.Array::compare<UnityEngine.EventSystems.IEventSystemHandler>(T,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m17821_MI;
extern TypeInfo t337_TI;
extern TypeInfo t3424_TI;
extern MethodInfo m17822_MI;
extern Il2CppType t337_0_0_0;
static void* m17819_RGCTXData[5] = 
{
	&m17821_MI,
	&t337_TI,
	&t3424_TI,
	&m17822_MI,
	(void*)&t337_0_0_0,
};
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17819_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17819_MI = 
{
	"compare", (methodPointerType)&m17583_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17819_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17820_MI;
// Metadata Definition System.Void System.Array::swap<UnityEngine.EventSystems.IEventSystemHandler,UnityEngine.EventSystems.IEventSystemHandler>(K[],V[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t337_0_0_0_t337_0_0_0;
Il2CppGenericContext m17820_GenericContext = { NULL, &GenInst_t337_0_0_0_t337_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17820_MI = 
{
	"swap", (methodPointerType)&m17584_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1789.h"
extern TypeInfo t87_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
#define m17823(__this, p0, p1, p2, p3, method) (void)m17587_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t1679 *)p3, method)
extern MethodInfo m17823_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17823_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17824_MI;
struct t52;
#define m17824(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
// Metadata Definition System.Void System.Array::Sort<UnityEngine.EventSystems.IEventSystemHandler>(T[],System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17823_MI;
static void* m17824_RGCTXData[1] = 
{
	&m17823_MI,
};
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17824_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17824_MI = 
{
	"Sort", (methodPointerType)&m17588_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17824_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1789_TI;
extern TypeInfo t60_TI;
extern TypeInfo t337_TI;
#include "t1789MD.h"
struct t52;
#define m17825(__this, p0, p1, p2, method) (void)m17589_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17825_MI;
extern MethodInfo m17823_MI;
extern MethodInfo m9357_MI;
extern MethodInfo m17825_MI;
extern MethodInfo m17823_MI;
extern MethodInfo m17823_MI;
// Metadata Definition System.Void System.Array::qsort<UnityEngine.EventSystems.IEventSystemHandler>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m9357_MI;
extern MethodInfo m17825_MI;
extern MethodInfo m17823_MI;
static void* m17823_RGCTXData[3] = 
{
	&m9357_MI,
	&m17825_MI,
	&m17823_MI,
};
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17823_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17823_MI = 
{
	"qsort", (methodPointerType)&m17587_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17823_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17825_MI;
// Metadata Definition System.Void System.Array::swap<UnityEngine.EventSystems.IEventSystemHandler>(T[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t337_0_0_0;
Il2CppGenericContext m17825_GenericContext = { NULL, &GenInst_t337_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17825_MI = 
{
	"swap", (methodPointerType)&m17589_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1249.h"
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
#include "t1249MD.h"
extern Il2CppType t7_0_0_0;
extern MethodInfo m1675_MI;
extern MethodInfo m6560_MI;
extern MethodInfo m17826_MI;
struct t1249;
 t7 * m17826_gshared (t7 * __this, MethodInfo* method);
#define m17826(__this, method) (t7 *)m17826_gshared((t7 *)__this, method)
extern MethodInfo m17826_MI;
 t7 * m17826_gshared (t7 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
		t70 * L_0 = m1675(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), &m1675_MI);
		t7 * L_1 = m6560(NULL, L_0, &m6560_MI);
		return ((t7 *)Castclass(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// Metadata Definition T System.Activator::CreateInstance<System.Object>()
extern TypeInfo t1249_TI;
extern TypeInfo t7_TI;
extern Il2CppType t7_0_0_0;
extern TypeInfo t7_TI;
static void* m17826_RGCTXData[2] = 
{
	(void*)&t7_0_0_0,
	&t7_TI,
};
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17826_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t7_0_0_0;
extern TypeInfo t1249_TI;
MethodInfo m17826_MI = 
{
	"CreateInstance", (methodPointerType)&m17826_gshared, &t1249_TI, &t7_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17826_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17827_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17827_MI;
extern MethodInfo m17828_MI;
struct t52;
#define m17828(__this, p0, method) (t154 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t154_TI;
extern Il2CppGenericInst GenInst_t154_0_0_0;
Il2CppGenericContext m17828_GenericContext = { NULL, &GenInst_t154_0_0_0 };
extern Il2CppType t154_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17828_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t154_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17827_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t154_0_0_0;
Il2CppGenericContext m17827_GenericContext = { NULL, &GenInst_t154_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17827_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17829_MI;
struct t52;
#define m17829(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t154_0_0_0;
Il2CppGenericContext m17829_GenericContext = { NULL, &GenInst_t154_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17829_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t154_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17827_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17827_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17830_MI;
struct t52;
#define m17830(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t154_TI;
static void* m17830_RGCTXData[1] = 
{
	&t154_TI,
};
extern Il2CppGenericInst GenInst_t154_0_0_0;
Il2CppGenericContext m17830_GenericContext = { NULL, &GenInst_t154_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17830_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17830_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17831_MI;
struct t52;
#define m17831(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t154_0_0_0;
Il2CppGenericContext m17831_GenericContext = { NULL, &GenInst_t154_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17831_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17832_MI;
struct t52;
#define m17832(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t154_0_0_0;
Il2CppGenericContext m17832_GenericContext = { NULL, &GenInst_t154_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17832_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t154_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17827_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17827_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17833_MI;
struct t52;
#define m17833(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t154_TI;
static void* m17833_RGCTXData[1] = 
{
	&t154_TI,
};
extern Il2CppGenericInst GenInst_t154_0_0_0;
Il2CppGenericContext m17833_GenericContext = { NULL, &GenInst_t154_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17833_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17833_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17834_MI;
struct t52;
#define m17834(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t154_0_0_0;
Il2CppGenericContext m17834_GenericContext = { NULL, &GenInst_t154_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17834_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t154_TI;
struct t52;
extern MethodInfo m17835_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17835_MI;
extern MethodInfo m17836_MI;
struct t52;
#define m17836(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t154_TI;
static void* m17836_RGCTXData[1] = 
{
	&t154_TI,
};
extern Il2CppGenericInst GenInst_t154_0_0_0;
Il2CppGenericContext m17836_GenericContext = { NULL, &GenInst_t154_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17836_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17836_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17835_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t154_0_0_0;
Il2CppGenericContext m17835_GenericContext = { NULL, &GenInst_t154_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17835_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1805.h"
extern TypeInfo t1805_TI;
#include "t1805MD.h"
extern MethodInfo m9400_MI;
extern MethodInfo m17837_MI;
struct t52;
#define m17837(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>()
extern TypeInfo t52_TI;
extern TypeInfo t1803_TI;
extern TypeInfo t1805_TI;
extern MethodInfo m9400_MI;
static void* m17837_RGCTXData[2] = 
{
	&t1805_TI,
	&m9400_MI,
};
extern Il2CppGenericInst GenInst_t154_0_0_0;
Il2CppGenericContext m17837_GenericContext = { NULL, &GenInst_t154_0_0_0 };
extern Il2CppType t1803_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17837_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t1803_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17837_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17838_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17838_MI;
extern MethodInfo m17839_MI;
struct t52;
#define m17839(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Collections.IEnumerable>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t618_TI;
extern Il2CppGenericInst GenInst_t618_0_0_0;
Il2CppGenericContext m17839_GenericContext = { NULL, &GenInst_t618_0_0_0 };
extern Il2CppType t618_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17839_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t618_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17838_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Collections.IEnumerable>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t618_0_0_0;
Il2CppGenericContext m17838_GenericContext = { NULL, &GenInst_t618_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17838_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17840_MI;
struct t52;
#define m17840(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Collections.IEnumerable>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t618_0_0_0;
Il2CppGenericContext m17840_GenericContext = { NULL, &GenInst_t618_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17840_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t618_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17838_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17838_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17841_MI;
struct t52;
#define m17841(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.IEnumerable>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t618_TI;
static void* m17841_RGCTXData[1] = 
{
	&t618_TI,
};
extern Il2CppGenericInst GenInst_t618_0_0_0;
Il2CppGenericContext m17841_GenericContext = { NULL, &GenInst_t618_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17841_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17841_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17842_MI;
struct t52;
#define m17842(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.IEnumerable>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t618_0_0_0;
Il2CppGenericContext m17842_GenericContext = { NULL, &GenInst_t618_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17842_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17843_MI;
struct t52;
#define m17843(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.IEnumerable>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t618_0_0_0;
Il2CppGenericContext m17843_GenericContext = { NULL, &GenInst_t618_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17843_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t618_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17838_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17838_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17844_MI;
struct t52;
#define m17844(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Collections.IEnumerable>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t618_TI;
static void* m17844_RGCTXData[1] = 
{
	&t618_TI,
};
extern Il2CppGenericInst GenInst_t618_0_0_0;
Il2CppGenericContext m17844_GenericContext = { NULL, &GenInst_t618_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17844_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17844_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17845_MI;
struct t52;
#define m17845(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Collections.IEnumerable>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t618_0_0_0;
Il2CppGenericContext m17845_GenericContext = { NULL, &GenInst_t618_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17845_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t618_TI;
struct t52;
extern MethodInfo m17846_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17846_MI;
extern MethodInfo m17847_MI;
struct t52;
#define m17847(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Collections.IEnumerable>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t618_TI;
static void* m17847_RGCTXData[1] = 
{
	&t618_TI,
};
extern Il2CppGenericInst GenInst_t618_0_0_0;
Il2CppGenericContext m17847_GenericContext = { NULL, &GenInst_t618_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17847_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17847_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17846_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Collections.IEnumerable>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t618_0_0_0;
Il2CppGenericContext m17846_GenericContext = { NULL, &GenInst_t618_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17846_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1806.h"
extern TypeInfo t1806_TI;
#include "t1806MD.h"
extern MethodInfo m9405_MI;
extern MethodInfo m17848_MI;
struct t52;
#define m17848(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.IEnumerable>()
extern TypeInfo t52_TI;
extern TypeInfo t3425_TI;
extern TypeInfo t1806_TI;
extern MethodInfo m9405_MI;
static void* m17848_RGCTXData[2] = 
{
	&t1806_TI,
	&m9405_MI,
};
extern Il2CppGenericInst GenInst_t618_0_0_0;
Il2CppGenericContext m17848_GenericContext = { NULL, &GenInst_t618_0_0_0 };
extern Il2CppType t3425_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17848_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3425_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17848_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17849_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17849_MI;
extern MethodInfo m17850_MI;
struct t52;
#define m17850(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Collections.ICollection>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t669_TI;
extern Il2CppGenericInst GenInst_t669_0_0_0;
Il2CppGenericContext m17850_GenericContext = { NULL, &GenInst_t669_0_0_0 };
extern Il2CppType t669_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17850_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t669_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17849_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Collections.ICollection>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t669_0_0_0;
Il2CppGenericContext m17849_GenericContext = { NULL, &GenInst_t669_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17849_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17851_MI;
struct t52;
#define m17851(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Collections.ICollection>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t669_0_0_0;
Il2CppGenericContext m17851_GenericContext = { NULL, &GenInst_t669_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17851_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t669_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17849_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17849_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17852_MI;
struct t52;
#define m17852(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.ICollection>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t669_TI;
static void* m17852_RGCTXData[1] = 
{
	&t669_TI,
};
extern Il2CppGenericInst GenInst_t669_0_0_0;
Il2CppGenericContext m17852_GenericContext = { NULL, &GenInst_t669_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17852_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17852_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17853_MI;
struct t52;
#define m17853(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.ICollection>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t669_0_0_0;
Il2CppGenericContext m17853_GenericContext = { NULL, &GenInst_t669_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17853_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17854_MI;
struct t52;
#define m17854(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.ICollection>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t669_0_0_0;
Il2CppGenericContext m17854_GenericContext = { NULL, &GenInst_t669_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17854_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t669_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17849_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17849_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17855_MI;
struct t52;
#define m17855(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Collections.ICollection>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t669_TI;
static void* m17855_RGCTXData[1] = 
{
	&t669_TI,
};
extern Il2CppGenericInst GenInst_t669_0_0_0;
Il2CppGenericContext m17855_GenericContext = { NULL, &GenInst_t669_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17855_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17855_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17856_MI;
struct t52;
#define m17856(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Collections.ICollection>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t669_0_0_0;
Il2CppGenericContext m17856_GenericContext = { NULL, &GenInst_t669_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17856_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t669_TI;
struct t52;
extern MethodInfo m17857_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17857_MI;
extern MethodInfo m17858_MI;
struct t52;
#define m17858(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Collections.ICollection>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t669_TI;
static void* m17858_RGCTXData[1] = 
{
	&t669_TI,
};
extern Il2CppGenericInst GenInst_t669_0_0_0;
Il2CppGenericContext m17858_GenericContext = { NULL, &GenInst_t669_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17858_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17858_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17857_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Collections.ICollection>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t669_0_0_0;
Il2CppGenericContext m17857_GenericContext = { NULL, &GenInst_t669_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17857_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1807.h"
extern TypeInfo t1807_TI;
#include "t1807MD.h"
extern MethodInfo m9410_MI;
extern MethodInfo m17859_MI;
struct t52;
#define m17859(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.ICollection>()
extern TypeInfo t52_TI;
extern TypeInfo t3426_TI;
extern TypeInfo t1807_TI;
extern MethodInfo m9410_MI;
static void* m17859_RGCTXData[2] = 
{
	&t1807_TI,
	&m9410_MI,
};
extern Il2CppGenericInst GenInst_t669_0_0_0;
Il2CppGenericContext m17859_GenericContext = { NULL, &GenInst_t669_0_0_0 };
extern Il2CppType t3426_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17859_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3426_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17859_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17860_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17860_MI;
extern MethodInfo m17861_MI;
struct t52;
#define m17861(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<System.Collections.IList>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t1041_TI;
extern Il2CppGenericInst GenInst_t1041_0_0_0;
Il2CppGenericContext m17861_GenericContext = { NULL, &GenInst_t1041_0_0_0 };
extern Il2CppType t1041_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17861_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t1041_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17860_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<System.Collections.IList>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1041_0_0_0;
Il2CppGenericContext m17860_GenericContext = { NULL, &GenInst_t1041_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17860_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17862_MI;
struct t52;
#define m17862(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<System.Collections.IList>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1041_0_0_0;
Il2CppGenericContext m17862_GenericContext = { NULL, &GenInst_t1041_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17862_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17860_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17860_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17863_MI;
struct t52;
#define m17863(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.IList>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t1041_TI;
static void* m17863_RGCTXData[1] = 
{
	&t1041_TI,
};
extern Il2CppGenericInst GenInst_t1041_0_0_0;
Il2CppGenericContext m17863_GenericContext = { NULL, &GenInst_t1041_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17863_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17863_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17864_MI;
struct t52;
#define m17864(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.IList>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1041_0_0_0;
Il2CppGenericContext m17864_GenericContext = { NULL, &GenInst_t1041_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17864_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17865_MI;
struct t52;
#define m17865(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.IList>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t1041_0_0_0;
Il2CppGenericContext m17865_GenericContext = { NULL, &GenInst_t1041_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17865_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17860_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17860_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17866_MI;
struct t52;
#define m17866(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<System.Collections.IList>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t1041_TI;
static void* m17866_RGCTXData[1] = 
{
	&t1041_TI,
};
extern Il2CppGenericInst GenInst_t1041_0_0_0;
Il2CppGenericContext m17866_GenericContext = { NULL, &GenInst_t1041_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17866_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17866_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17867_MI;
struct t52;
#define m17867(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<System.Collections.IList>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1041_0_0_0;
Il2CppGenericContext m17867_GenericContext = { NULL, &GenInst_t1041_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17867_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t1041_TI;
struct t52;
extern MethodInfo m17868_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17868_MI;
extern MethodInfo m17869_MI;
struct t52;
#define m17869(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<System.Collections.IList>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1041_TI;
static void* m17869_RGCTXData[1] = 
{
	&t1041_TI,
};
extern Il2CppGenericInst GenInst_t1041_0_0_0;
Il2CppGenericContext m17869_GenericContext = { NULL, &GenInst_t1041_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17869_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17869_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17868_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<System.Collections.IList>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t1041_0_0_0;
Il2CppGenericContext m17868_GenericContext = { NULL, &GenInst_t1041_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17868_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1808.h"
extern TypeInfo t1808_TI;
#include "t1808MD.h"
extern MethodInfo m9415_MI;
extern MethodInfo m17870_MI;
struct t52;
#define m17870(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.IList>()
extern TypeInfo t52_TI;
extern TypeInfo t3427_TI;
extern TypeInfo t1808_TI;
extern MethodInfo m9415_MI;
static void* m17870_RGCTXData[2] = 
{
	&t1808_TI,
	&m9415_MI,
};
extern Il2CppGenericInst GenInst_t1041_0_0_0;
Il2CppGenericContext m17870_GenericContext = { NULL, &GenInst_t1041_0_0_0 };
extern Il2CppType t3427_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17870_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3427_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17870_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m17871(__this, p0, p1, p2, method) (void)m17411_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17871_MI;
extern MethodInfo m17871_MI;
extern MethodInfo m17872_MI;
struct t52;
#define m17872(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(T[]&,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17871_MI;
static void* m17872_RGCTXData[1] = 
{
	&m17871_MI,
};
extern Il2CppGenericInst GenInst_t154_0_0_0;
Il2CppGenericContext m17872_GenericContext = { NULL, &GenInst_t154_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17872_MI = 
{
	"Resize", (methodPointerType)&m17412_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17872_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t1802_TI;
extern TypeInfo t154_TI;
extern MethodInfo m216_MI;
extern MethodInfo m7029_MI;
extern MethodInfo m3877_MI;
extern MethodInfo m17871_MI;
// Metadata Definition System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(T[]&,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1802_TI;
static void* m17871_RGCTXData[1] = 
{
	&t1802_TI,
};
extern Il2CppGenericInst GenInst_t154_0_0_0;
Il2CppGenericContext m17871_GenericContext = { NULL, &GenInst_t154_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17871_MI = 
{
	"Resize", (methodPointerType)&m17411_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17871_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t154_TI;
extern TypeInfo t70_TI;
extern Il2CppType t154_0_0_0;
extern MethodInfo m1675_MI;
extern MethodInfo m6560_MI;
extern MethodInfo m17873_MI;
struct t1249;
#define m17873(__this, method) (t154 *)m17826_gshared((t7 *)__this, method)
// Metadata Definition T System.Activator::CreateInstance<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>()
extern TypeInfo t1249_TI;
extern TypeInfo t154_TI;
extern Il2CppType t154_0_0_0;
extern TypeInfo t154_TI;
static void* m17873_RGCTXData[2] = 
{
	(void*)&t154_0_0_0,
	&t154_TI,
};
extern Il2CppGenericInst GenInst_t154_0_0_0;
Il2CppGenericContext m17873_GenericContext = { NULL, &GenInst_t154_0_0_0 };
extern Il2CppType t154_0_0_0;
extern TypeInfo t1249_TI;
MethodInfo m17873_MI = 
{
	"CreateInstance", (methodPointerType)&m17826_gshared, &t1249_TI, &t154_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17873_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t348_TI;
extern TypeInfo t328_TI;
extern TypeInfo t317_TI;
extern TypeInfo t57_TI;
extern TypeInfo t60_TI;
extern TypeInfo t115_TI;
extern TypeInfo t337_TI;
extern TypeInfo t1785_TI;
extern TypeInfo t53_TI;
#include "t72MD.h"
#include "t26MD.h"
#include "t328MD.h"
#include "t317MD.h"
struct t26;
struct t26;
 void m17875_gshared (t26 * __this, t340 * p0, MethodInfo* method);
#define m17875(__this, p0, method) (void)m17875_gshared((t26 *)__this, (t340 *)p0, method)
#define m17874(__this, p0, method) (void)m17875_gshared((t26 *)__this, (t340 *)p0, method)
extern MethodInfo m17874_MI;
struct t115;
 bool m17876 (t7 * __this, t57 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17876_MI;
extern MethodInfo m6583_MI;
extern MethodInfo m211_MI;
extern MethodInfo m1523_MI;
extern MethodInfo m1396_MI;
extern MethodInfo m17874_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m17876_MI;
extern MethodInfo m17877_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1397_MI;
extern MethodInfo m17799_MI;
extern MethodInfo m17799_MI;
 void m17799 (t7 * __this, t26 * p0, t7* p1, MethodInfo* method){
	t317 * V_0 = {0};
	int32_t V_1 = 0;
	{
		if (p1)
		{
			goto IL_0016;
		}
	}
	{
		t348 * L_0 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m6583(L_0, (t34*) &_stringLiteral18, (t34*) &_stringLiteral19, &m6583_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0016:
	{
		bool L_1 = m211(NULL, p0, (t72 *)NULL, &m211_MI);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		bool L_2 = m1523(p0, &m1523_MI);
		if (L_2)
		{
			goto IL_002e;
		}
	}

IL_002d:
	{
		return;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t328_TI));
		t317 * L_3 = m1396(NULL, &m1396_MI);
		V_0 = L_3;
		m17874(p0, V_0, &m17874_MI);
		V_1 = 0;
		goto IL_006e;
	}

IL_0042:
	{
		t57 * L_4 = (t57 *)VirtFuncInvoker1< t57 *, int32_t >::Invoke(&m1677_MI, V_0, V_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t115_TI));
		bool L_5 = m17876(NULL, L_4, &m17876_MI);
		if (L_5)
		{
			goto IL_0058;
		}
	}
	{
		goto IL_006a;
	}

IL_0058:
	{
		t57 * L_6 = (t57 *)VirtFuncInvoker1< t57 *, int32_t >::Invoke(&m1677_MI, V_0, V_1);
		InterfaceActionInvoker1< t7 * >::Invoke(&m17877_MI, p1, ((t7 *)IsInst(L_6, InitializedTypeInfo(&t337_TI))));
	}

IL_006a:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_006e:
	{
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m1679_MI, V_0);
		if ((((int32_t)V_1) < ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t328_TI));
		m1397(NULL, V_0, &m1397_MI);
		return;
	}
}
// Metadata Definition System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventList<UnityEngine.EventSystems.IDeselectHandler>(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>)
extern TypeInfo t115_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t149_0_0_0;
Il2CppGenericContext m17799_GenericContext = { NULL, &GenInst_t149_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t115_TI;
MethodInfo m17799_MI = 
{
	"GetEventList", (methodPointerType)&m17799, &t115_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m17878(__this, p0, p1, p2, method) (void)m17411_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17878_MI;
extern MethodInfo m17878_MI;
extern MethodInfo m17879_MI;
struct t52;
#define m17879(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::Resize<UnityEngine.Component>(T[]&,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17878_MI;
static void* m17879_RGCTXData[1] = 
{
	&m17878_MI,
};
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17879_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17879_MI = 
{
	"Resize", (methodPointerType)&m17412_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17879_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t1809_TI;
extern TypeInfo t57_TI;
extern MethodInfo m216_MI;
extern MethodInfo m7029_MI;
extern MethodInfo m3877_MI;
extern MethodInfo m17878_MI;
// Metadata Definition System.Void System.Array::Resize<UnityEngine.Component>(T[]&,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1809_TI;
static void* m17878_RGCTXData[1] = 
{
	&t1809_TI,
};
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17878_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17878_MI = 
{
	"Resize", (methodPointerType)&m17411_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17878_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1818.h"
extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t1818_TI;
extern TypeInfo t55_TI;
extern TypeInfo t57_TI;
#include "t1818MD.h"
extern MethodInfo m3066_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m3847_MI;
extern MethodInfo m216_MI;
extern MethodInfo m9549_MI;
extern MethodInfo m17880_MI;
extern MethodInfo m17881_MI;
struct t52;
#define m17881(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
// Metadata Definition System.Int32 System.Array::IndexOf<UnityEngine.Component>(T[],T,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m9549_MI;
extern MethodInfo m17880_MI;
static void* m17881_RGCTXData[2] = 
{
	&m9549_MI,
	&m17880_MI,
};
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17881_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17881_MI = 
{
	"IndexOf", (methodPointerType)&m7824_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17881_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
struct t52;
#define m17882(__this, p0, p1, p2, p3, p4, method) (void)m17480_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17882_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17882_MI;
extern MethodInfo m17883_MI;
struct t52;
#define m17883(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
// Metadata Definition System.Void System.Array::Sort<UnityEngine.Component>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17882_MI;
static void* m17883_RGCTXData[1] = 
{
	&m17882_MI,
};
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17883_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17883_MI = 
{
	"Sort", (methodPointerType)&m17481_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17883_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t348_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern TypeInfo t1809_TI;
extern TypeInfo t57_TI;
extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t250_TI;
extern TypeInfo t244_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
#define m17884(__this, p0, method) (t741 *)m17482_gshared((t7 *)__this, (t350*)p0, method)
extern MethodInfo m17884_MI;
struct t52;
#define m17885(__this, p0, p1, p2, p3, p4, method) (void)m17483_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17885_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m6582_MI;
extern MethodInfo m17884_MI;
extern MethodInfo m3904_MI;
extern MethodInfo m3905_MI;
extern MethodInfo m3906_MI;
extern MethodInfo m17885_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17882_MI;
// Metadata Definition System.Void System.Array::Sort<UnityEngine.Component,UnityEngine.Component>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17884_MI;
extern TypeInfo t1809_TI;
extern MethodInfo m17885_MI;
static void* m17882_RGCTXData[3] = 
{
	&m17884_MI,
	&t1809_TI,
	&m17885_MI,
};
extern Il2CppGenericInst GenInst_t57_0_0_0_t57_0_0_0;
Il2CppGenericContext m17882_GenericContext = { NULL, &GenInst_t57_0_0_0_t57_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17882_MI = 
{
	"Sort", (methodPointerType)&m17480_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17882_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern MethodInfo m3899_MI;
extern MethodInfo m3810_MI;
extern MethodInfo m3902_MI;
extern MethodInfo m3901_MI;
extern MethodInfo m17884_MI;
// Metadata Definition System.Array/Swapper System.Array::get_swapper<UnityEngine.Component>(T[])
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17884_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t741_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17884_MI = 
{
	"get_swapper", (methodPointerType)&m17482_gshared, &t52_TI, &t741_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m17886(__this, p0, p1, p2, method) (int32_t)m17583_gshared((t7 *)__this, (t7 *)p0, (t7 *)p1, (t7*)p2, method)
extern MethodInfo m17886_MI;
struct t52;
#define m17887(__this, p0, p1, p2, p3, method) (void)m17584_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m17887_MI;
extern MethodInfo m17885_MI;
extern MethodInfo m17886_MI;
extern MethodInfo m17887_MI;
extern MethodInfo m17885_MI;
extern MethodInfo m17885_MI;
// Metadata Definition System.Void System.Array::qsort<UnityEngine.Component,UnityEngine.Component>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17886_MI;
extern MethodInfo m17887_MI;
extern MethodInfo m17885_MI;
static void* m17885_RGCTXData[3] = 
{
	&m17886_MI,
	&m17887_MI,
	&m17885_MI,
};
extern Il2CppGenericInst GenInst_t57_0_0_0_t57_0_0_0;
Il2CppGenericContext m17885_GenericContext = { NULL, &GenInst_t57_0_0_0_t57_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17885_MI = 
{
	"qsort", (methodPointerType)&m17483_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17885_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t3428_TI;
extern TypeInfo t60_TI;
extern TypeInfo t57_TI;
extern TypeInfo t3429_TI;
extern TypeInfo t78_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1295_TI;
extern Il2CppType t57_0_0_0;
extern MethodInfo m17888_MI;
extern MethodInfo m17889_MI;
extern MethodInfo m7420_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m1656_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m17886_MI;
// Metadata Definition System.Int32 System.Array::compare<UnityEngine.Component>(T,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m17888_MI;
extern TypeInfo t57_TI;
extern TypeInfo t3429_TI;
extern MethodInfo m17889_MI;
extern Il2CppType t57_0_0_0;
static void* m17886_RGCTXData[5] = 
{
	&m17888_MI,
	&t57_TI,
	&t3429_TI,
	&m17889_MI,
	(void*)&t57_0_0_0,
};
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17886_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17886_MI = 
{
	"compare", (methodPointerType)&m17583_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17886_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17887_MI;
// Metadata Definition System.Void System.Array::swap<UnityEngine.Component,UnityEngine.Component>(K[],V[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t57_0_0_0_t57_0_0_0;
Il2CppGenericContext m17887_GenericContext = { NULL, &GenInst_t57_0_0_0_t57_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17887_MI = 
{
	"swap", (methodPointerType)&m17584_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1814.h"
extern TypeInfo t87_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
#define m17890(__this, p0, p1, p2, p3, method) (void)m17587_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t1679 *)p3, method)
extern MethodInfo m17890_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17890_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17891_MI;
struct t52;
#define m17891(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
// Metadata Definition System.Void System.Array::Sort<UnityEngine.Component>(T[],System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17890_MI;
static void* m17891_RGCTXData[1] = 
{
	&m17890_MI,
};
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17891_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17891_MI = 
{
	"Sort", (methodPointerType)&m17588_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17891_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1814_TI;
extern TypeInfo t60_TI;
extern TypeInfo t57_TI;
#include "t1814MD.h"
struct t52;
#define m17892(__this, p0, p1, p2, method) (void)m17589_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17892_MI;
extern MethodInfo m17890_MI;
extern MethodInfo m9563_MI;
extern MethodInfo m17892_MI;
extern MethodInfo m17890_MI;
extern MethodInfo m17890_MI;
// Metadata Definition System.Void System.Array::qsort<UnityEngine.Component>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m9563_MI;
extern MethodInfo m17892_MI;
extern MethodInfo m17890_MI;
static void* m17890_RGCTXData[3] = 
{
	&m9563_MI,
	&m17892_MI,
	&m17890_MI,
};
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17890_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17890_MI = 
{
	"qsort", (methodPointerType)&m17587_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17890_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17892_MI;
// Metadata Definition System.Void System.Array::swap<UnityEngine.Component>(T[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17892_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17892_MI = 
{
	"swap", (methodPointerType)&m17589_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t57_TI;
extern TypeInfo t70_TI;
extern Il2CppType t57_0_0_0;
extern MethodInfo m1675_MI;
extern MethodInfo m2669_MI;
extern MethodInfo m17874_MI;
// Metadata Definition System.Void UnityEngine.GameObject::GetComponents<UnityEngine.Component>(System.Collections.Generic.List`1<T>)
extern TypeInfo t26_TI;
extern TypeInfo t53_TI;
extern Il2CppType t57_0_0_0;
static void* m17874_RGCTXData[1] = 
{
	(void*)&t57_0_0_0,
};
extern Il2CppGenericInst GenInst_t57_0_0_0;
Il2CppGenericContext m17874_GenericContext = { NULL, &GenInst_t57_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t26_TI;
MethodInfo m17874_MI = 
{
	"GetComponents", (methodPointerType)&m17875_gshared, &t26_TI, &t53_0_0_0, NULL, NULL, NULL, 134, 0, 255, 0, false, true, 0, m17874_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern Il2CppType t7_0_0_0;
extern MethodInfo m1675_MI;
extern MethodInfo m2669_MI;
extern MethodInfo m17875_MI;
extern MethodInfo m17875_MI;
 void m17875_gshared (t26 * __this, t340 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
		t70 * L_0 = m1675(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), &m1675_MI);
		m2669(__this, L_0, 0, 0, 1, 0, p0, &m2669_MI);
		return;
	}
}
// Metadata Definition System.Void UnityEngine.GameObject::GetComponents<System.Object>(System.Collections.Generic.List`1<T>)
extern TypeInfo t26_TI;
extern TypeInfo t53_TI;
extern Il2CppType t7_0_0_0;
static void* m17875_RGCTXData[1] = 
{
	(void*)&t7_0_0_0,
};
extern Il2CppGenericInst GenInst_t7_0_0_0;
Il2CppGenericContext m17875_GenericContext = { NULL, &GenInst_t7_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t26_TI;
MethodInfo m17875_MI = 
{
	"GetComponents", (methodPointerType)&m17875_gshared, &t26_TI, &t53_0_0_0, NULL, NULL, NULL, 134, 0, 255, 0, false, true, 0, m17875_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t149_TI;
extern TypeInfo t82_TI;
#include "t82MD.h"
extern MethodInfo m190_MI;
extern MethodInfo m1521_MI;
extern MethodInfo m1522_MI;
extern MethodInfo m17876_MI;
extern MethodInfo m17876_MI;
 bool m17876 (t7 * __this, t57 * p0, MethodInfo* method){
	bool V_0 = false;
	t82 * V_1 = {0};
	int32_t G_B6_0 = 0;
	{
		V_0 = ((((t7 *)((t7 *)IsInst(p0, InitializedTypeInfo(&t149_TI)))) > ((t7 *)NULL))? 1 : 0);
		if (V_0)
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		V_1 = ((t82 *)IsInst(p0, InitializedTypeInfo(&t82_TI)));
		bool L_0 = m190(NULL, V_1, (t72 *)NULL, &m190_MI);
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		bool L_1 = m1521(V_1, &m1521_MI);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		bool L_2 = m1522(V_1, &m1522_MI);
		G_B6_0 = ((int32_t)(L_2));
		goto IL_0039;
	}

IL_0038:
	{
		G_B6_0 = 0;
	}

IL_0039:
	{
		return G_B6_0;
	}

IL_003a:
	{
		return 1;
	}
}
// Metadata Definition System.Boolean UnityEngine.EventSystems.ExecuteEvents::ShouldSendToComponent<UnityEngine.EventSystems.IDeselectHandler>(UnityEngine.Component)
extern TypeInfo t115_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t149_0_0_0;
Il2CppGenericContext m17876_GenericContext = { NULL, &GenInst_t149_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t115_TI;
MethodInfo m17876_MI = 
{
	"ShouldSendToComponent", (methodPointerType)&m17876, &t115_TI, &t55_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t128.h"
extern TypeInfo t115_TI;
extern TypeInfo t154_TI;
extern TypeInfo t337_TI;
extern TypeInfo t60_TI;
extern TypeInfo t148_TI;
extern TypeInfo t70_TI;
extern TypeInfo t341_TI;
extern TypeInfo t34_TI;
extern TypeInfo t86_TI;
extern TypeInfo t128_TI;
extern TypeInfo t53_TI;
extern TypeInfo t98_TI;
#include "t128MD.h"
struct t115;
 void m17893 (t7 * __this, t26 * p0, t7* p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17893_MI;
extern Il2CppType t148_0_0_0;
extern MethodInfo m9369_MI;
extern MethodInfo m17893_MI;
extern MethodInfo m9259_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3040_MI;
extern MethodInfo m1555_MI;
extern MethodInfo m3536_MI;
extern MethodInfo m3063_MI;
extern MethodInfo m2618_MI;
extern MethodInfo m9566_MI;
extern MethodInfo m9258_MI;
extern MethodInfo m9371_MI;
extern MethodInfo m1443_MI;
struct t115;
 bool m1443 (t7 * __this, t26 * p0, t98 * p1, t128 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m1443_MI;
 bool m1443 (t7 * __this, t26 * p0, t98 * p1, t128 * p2, MethodInfo* method){
	t154 * V_0 = {0};
	int32_t V_1 = 0;
	t7 * V_2 = {0};
	t86 * V_3 = {0};
	t7 * V_4 = {0};
	t86 * V_5 = {0};
	int32_t V_6 = 0;
	t86 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t86 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t115_TI));
		t154 * L_0 = m9369((((t115_SFs*)InitializedTypeInfo(&t115_TI)->static_fields)->f17), &m9369_MI);
		V_0 = L_0;
		m17893(NULL, p0, V_0, &m17893_MI);
		V_1 = 0;
		goto IL_008e;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		t7 * L_1 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(&m9259_MI, V_0, V_1);
		V_2 = ((t7 *)Castclass(L_1, InitializedTypeInfo(&t148_TI)));
		// IL_0026: leave IL_006f
		goto IL_006f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t86 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t86_TI, e.ex->object.klass))
			goto IL_002b;
		throw e;
	}

IL_002b:
	{ // begin catch(System.Exception)
		{
			V_3 = ((t86 *)__exception_local);
			t7 * L_2 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(&m9259_MI, V_0, V_1);
			V_4 = L_2;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
			t70 * L_3 = m1675(NULL, LoadTypeToken(&t148_0_0_0), &m1675_MI);
			t34* L_4 = (t34*)VirtFuncInvoker0< t34* >::Invoke(&m3040_MI, L_3);
			t70 * L_5 = m1555(V_4, &m1555_MI);
			t34* L_6 = (t34*)VirtFuncInvoker0< t34* >::Invoke(&m3040_MI, L_5);
			IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
			t34* L_7 = m3536(NULL, (t34*) &_stringLiteral17, L_4, L_6, &m3536_MI);
			t86 * L_8 = (t86 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t86_TI));
			m3063(L_8, L_7, V_3, &m3063_MI);
			m2618(NULL, L_8, &m2618_MI);
			// IL_0065: leave IL_008a
			goto IL_008a;
		}

IL_006a:
		{
			; // IL_006a: leave IL_006f
		}
	} // end catch (depth: 1)

IL_006f:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker2< t7 *, t98 * >::Invoke(&m9566_MI, p2, V_2, p1);
		// IL_0077: leave IL_008a
		goto IL_008a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t86 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t86_TI, e.ex->object.klass))
			goto IL_007c;
		throw e;
	}

IL_007c:
	{ // begin catch(System.Exception)
		V_5 = ((t86 *)__exception_local);
		m2618(NULL, V_5, &m2618_MI);
		// IL_0085: leave IL_008a
		goto IL_008a;
	} // end catch (depth: 1)

IL_008a:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_008e:
	{
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9258_MI, V_0);
		if ((((int32_t)V_1) < ((int32_t)L_9)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9258_MI, V_0);
		V_6 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t115_TI));
		m9371((((t115_SFs*)InitializedTypeInfo(&t115_TI)->static_fields)->f17), V_0, &m9371_MI);
		return ((((int32_t)V_6) > ((int32_t)0))? 1 : 0);
	}
}
// Metadata Definition System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.ISelectHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
extern TypeInfo t115_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t148_0_0_0;
Il2CppGenericContext m1443_GenericContext = { NULL, &GenInst_t148_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t115_TI;
MethodInfo m1443_MI = 
{
	"Execute", (methodPointerType)&m1443, &t115_TI, &t55_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t348_TI;
extern TypeInfo t328_TI;
extern TypeInfo t317_TI;
extern TypeInfo t57_TI;
extern TypeInfo t60_TI;
extern TypeInfo t115_TI;
extern TypeInfo t337_TI;
extern TypeInfo t1785_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17874_MI;
struct t115;
 bool m17894 (t7 * __this, t57 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17894_MI;
extern MethodInfo m6583_MI;
extern MethodInfo m211_MI;
extern MethodInfo m1523_MI;
extern MethodInfo m1396_MI;
extern MethodInfo m17874_MI;
extern MethodInfo m1677_MI;
extern MethodInfo m17894_MI;
extern MethodInfo m17877_MI;
extern MethodInfo m1679_MI;
extern MethodInfo m1397_MI;
extern MethodInfo m17893_MI;
extern MethodInfo m17893_MI;
 void m17893 (t7 * __this, t26 * p0, t7* p1, MethodInfo* method){
	t317 * V_0 = {0};
	int32_t V_1 = 0;
	{
		if (p1)
		{
			goto IL_0016;
		}
	}
	{
		t348 * L_0 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m6583(L_0, (t34*) &_stringLiteral18, (t34*) &_stringLiteral19, &m6583_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0016:
	{
		bool L_1 = m211(NULL, p0, (t72 *)NULL, &m211_MI);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		bool L_2 = m1523(p0, &m1523_MI);
		if (L_2)
		{
			goto IL_002e;
		}
	}

IL_002d:
	{
		return;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t328_TI));
		t317 * L_3 = m1396(NULL, &m1396_MI);
		V_0 = L_3;
		m17874(p0, V_0, &m17874_MI);
		V_1 = 0;
		goto IL_006e;
	}

IL_0042:
	{
		t57 * L_4 = (t57 *)VirtFuncInvoker1< t57 *, int32_t >::Invoke(&m1677_MI, V_0, V_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t115_TI));
		bool L_5 = m17894(NULL, L_4, &m17894_MI);
		if (L_5)
		{
			goto IL_0058;
		}
	}
	{
		goto IL_006a;
	}

IL_0058:
	{
		t57 * L_6 = (t57 *)VirtFuncInvoker1< t57 *, int32_t >::Invoke(&m1677_MI, V_0, V_1);
		InterfaceActionInvoker1< t7 * >::Invoke(&m17877_MI, p1, ((t7 *)IsInst(L_6, InitializedTypeInfo(&t337_TI))));
	}

IL_006a:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_006e:
	{
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m1679_MI, V_0);
		if ((((int32_t)V_1) < ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t328_TI));
		m1397(NULL, V_0, &m1397_MI);
		return;
	}
}
// Metadata Definition System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventList<UnityEngine.EventSystems.ISelectHandler>(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>)
extern TypeInfo t115_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t148_0_0_0;
Il2CppGenericContext m17893_GenericContext = { NULL, &GenInst_t148_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t115_TI;
MethodInfo m17893_MI = 
{
	"GetEventList", (methodPointerType)&m17893, &t115_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t148_TI;
extern TypeInfo t82_TI;
extern MethodInfo m190_MI;
extern MethodInfo m1521_MI;
extern MethodInfo m1522_MI;
extern MethodInfo m17894_MI;
extern MethodInfo m17894_MI;
 bool m17894 (t7 * __this, t57 * p0, MethodInfo* method){
	bool V_0 = false;
	t82 * V_1 = {0};
	int32_t G_B6_0 = 0;
	{
		V_0 = ((((t7 *)((t7 *)IsInst(p0, InitializedTypeInfo(&t148_TI)))) > ((t7 *)NULL))? 1 : 0);
		if (V_0)
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		V_1 = ((t82 *)IsInst(p0, InitializedTypeInfo(&t82_TI)));
		bool L_0 = m190(NULL, V_1, (t72 *)NULL, &m190_MI);
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		bool L_1 = m1521(V_1, &m1521_MI);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		bool L_2 = m1522(V_1, &m1522_MI);
		G_B6_0 = ((int32_t)(L_2));
		goto IL_0039;
	}

IL_0038:
	{
		G_B6_0 = 0;
	}

IL_0039:
	{
		return G_B6_0;
	}

IL_003a:
	{
		return 1;
	}
}
// Metadata Definition System.Boolean UnityEngine.EventSystems.ExecuteEvents::ShouldSendToComponent<UnityEngine.EventSystems.ISelectHandler>(UnityEngine.Component)
extern TypeInfo t115_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t148_0_0_0;
Il2CppGenericContext m17894_GenericContext = { NULL, &GenInst_t148_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t115_TI;
MethodInfo m17894_MI = 
{
	"ShouldSendToComponent", (methodPointerType)&m17894, &t115_TI, &t55_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t103.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17895_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17895_MI;
extern MethodInfo m17896_MI;
struct t52;
 t103  m17896 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17896_MI;
 t103  m17896 (t52 * __this, int32_t p0, MethodInfo* method){
	t103  V_0 = {0};
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		ArrayGetGenericValueImpl (__this, p0, (&V_0));
		return V_0;
	}
}
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.RaycastResult>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t103_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17896_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t103_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17896_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17896, &t52_TI, &t103_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17895_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.RaycastResult>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17895_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17895_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17897_MI;
struct t52;
 void m17897 (t52 * __this, t103  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17897_MI;
 void m17897 (t52 * __this, t103  p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.RaycastResult>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17897_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17897_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17897, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t103_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17895_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17895_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17898_MI;
struct t52;
 bool m17898 (t52 * __this, t103  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17898_MI;
 bool m17898 (t52 * __this, t103  p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t103  V_2 = {0};
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		t103  L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t103_TI), &L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		t103  L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t103_TI), &L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t103  L_8 = V_2;
		t7 * L_9 = Box(InitializedTypeInfo(&t103_TI), &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t103_TI), &(*(&p0))), L_9);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.RaycastResult>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17898_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17898_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17898, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17899_MI;
struct t52;
 void m17899 (t52 * __this, t1822* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17899_MI;
 void m17899 (t52 * __this, t1822* p0, int32_t p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral329, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t34* L_2 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_3 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_3, L_2, &m7242_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0027:
	{
		int32_t L_4 = m3833(__this, 0, &m3833_MI);
		int32_t L_5 = m3835(p0, 0, &m3835_MI);
		int32_t L_6 = m3833(p0, 0, &m3833_MI);
		if ((((int32_t)((int32_t)(p1+L_4))) <= ((int32_t)((int32_t)(L_5+L_6)))))
		{
			goto IL_004c;
		}
	}
	{
		t348 * L_7 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m2046(L_7, (t34*) &_stringLiteral330, &m2046_MI);
		il2cpp_codegen_raise_exception (L_7);
	}

IL_004c:
	{
		int32_t L_8 = m3831(p0, &m3831_MI);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t34* L_9 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_10 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_10, L_9, &m7242_MI);
		il2cpp_codegen_raise_exception (L_10);
	}

IL_0065:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t34* L_11 = m4015(NULL, (t34*) &_stringLiteral331, &m4015_MI);
		t88 * L_12 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6592(L_12, (t34*) &_stringLiteral326, L_11, &m6592_MI);
		il2cpp_codegen_raise_exception (L_12);
	}

IL_007e:
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		int32_t L_14 = m3833(__this, 0, &m3833_MI);
		m3878(NULL, __this, L_13, (t52 *)(t52 *)p0, p1, L_14, &m3878_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.RaycastResult>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17899_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17899_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17899, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17900_MI;
struct t52;
 bool m17900 (t52 * __this, t103  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17900_MI;
 bool m17900 (t52 * __this, t103  p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.RaycastResult>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17900_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17900_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17900, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t103_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17895_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17895_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17901_MI;
struct t52;
 int32_t m17901 (t52 * __this, t103  p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17901_MI;
 int32_t m17901 (t52 * __this, t103  p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t103  V_2 = {0};
	{
		int32_t L_0 = m3831(__this, &m3831_MI);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral327, &m4015_MI);
		t1315 * L_2 = (t1315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1315_TI));
		m7242(L_2, L_1, &m7242_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0019:
	{
		int32_t L_3 = m3829(__this, &m3829_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		ArrayGetGenericValueImpl (__this, V_1, (&V_2));
		t103  L_4 = p0;
		t7 * L_5 = Box(InitializedTypeInfo(&t103_TI), &L_4);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		t103  L_6 = V_2;
		t7 * L_7 = Box(InitializedTypeInfo(&t103_TI), &L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_8));
	}

IL_0047:
	{
		int32_t L_9 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_9-1));
	}

IL_0051:
	{
		t103  L_10 = p0;
		t7 * L_11 = Box(InitializedTypeInfo(&t103_TI), &L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(&m121_MI, Box(InitializedTypeInfo(&t103_TI), &(*(&V_2))), L_11);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(V_1+L_13));
	}

IL_0070:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0074:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_14 = m3835(__this, 0, &m3835_MI);
		return ((int32_t)(L_14-1));
	}
}
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.RaycastResult>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17901_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17901_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17901, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17902_MI;
struct t52;
 void m17902 (t52 * __this, int32_t p0, t103  p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17902_MI;
 void m17902 (t52 * __this, int32_t p0, t103  p1, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral328, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.RaycastResult>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17902_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17902_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17902, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t103_TI;
struct t52;
extern MethodInfo m17903_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17903_MI;
extern MethodInfo m17904_MI;
struct t52;
 void m17904 (t52 * __this, int32_t p0, t103  p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17904_MI;
 void m17904 (t52 * __this, int32_t p0, t103  p1, MethodInfo* method){
	t350* V_0 = {0};
	{
		int32_t L_0 = m3829(__this, &m3829_MI);
		if ((((uint32_t)p0) < ((uint32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0014:
	{
		V_0 = ((t350*)IsInst(__this, InitializedTypeInfo(&t350_TI)));
		if (!V_0)
		{
			goto IL_0028;
		}
	}
	{
		t103  L_2 = p1;
		t7 * L_3 = Box(InitializedTypeInfo(&t103_TI), &L_2);
		ArrayElementTypeCheck (V_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(V_0, p0)) = (t7 *)L_3;
		return;
	}

IL_0028:
	{
		ArraySetGenericValueImpl (__this, p0, (&p1));
		return;
	}
}
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.RaycastResult>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17904_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17904_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17904, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17903_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.RaycastResult>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17903_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17903_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1829.h"
extern TypeInfo t1829_TI;
#include "t1829MD.h"
extern MethodInfo m9612_MI;
extern MethodInfo m17905_MI;
struct t52;
 t7* m17905 (t52 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17905_MI;
 t7* m17905 (t52 * __this, MethodInfo* method){
	{
		t1829  L_0 = {0};
		m9612(&L_0, __this, &m9612_MI);
		t1829  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1829_TI), &L_1);
		return (t7*)L_2;
	}
}
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.RaycastResult>()
extern TypeInfo t52_TI;
extern TypeInfo t1823_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17905_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t1823_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17905_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17905, &t52_TI, &t1823_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
 void m17906 (t7 * __this, t1822** p0, int32_t p1, int32_t p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17906_MI;
extern MethodInfo m17906_MI;
extern MethodInfo m17907_MI;
struct t52;
 void m17907 (t7 * __this, t1822** p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17907_MI;
 void m17907 (t7 * __this, t1822** p0, int32_t p1, MethodInfo* method){
	t1822** G_B2_0 = {0};
	t1822** G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t1822** G_B3_1 = {0};
	{
		G_B1_0 = p0;
		if ((*((t1822**)p0)))
		{
			G_B2_0 = p0;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000c;
	}

IL_0008:
	{
		G_B3_0 = (((int32_t)(((t52 *)(*((t1822**)p0)))->max_length)));
		G_B3_1 = G_B2_0;
	}

IL_000c:
	{
		m17906(NULL, G_B3_1, G_B3_0, p1, &m17906_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::Resize<UnityEngine.EventSystems.RaycastResult>(T[]&,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17907_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17907_MI = 
{
	"Resize", (methodPointerType)&m17907, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t1822_TI;
extern TypeInfo t103_TI;
extern MethodInfo m216_MI;
extern MethodInfo m7029_MI;
extern MethodInfo m3877_MI;
extern MethodInfo m17906_MI;
extern MethodInfo m17906_MI;
 void m17906 (t7 * __this, t1822** p0, int32_t p1, int32_t p2, MethodInfo* method){
	t1822* V_0 = {0};
	{
		if ((((int32_t)p2) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		t88 * L_0 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m216(L_0, &m216_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000a:
	{
		if ((*((t1822**)p0)))
		{
			goto IL_0017;
		}
	}
	{
		*((t7 **)(p0)) = (t7 *)((t1822*)SZArrayNew(InitializedTypeInfo(&t1822_TI), p2));
		return;
	}

IL_0017:
	{
		if ((((uint32_t)(((int32_t)(((t52 *)(*((t1822**)p0)))->max_length)))) != ((uint32_t)p2)))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		V_0 = ((t1822*)SZArrayNew(InitializedTypeInfo(&t1822_TI), p2));
		int32_t L_1 = m7029(NULL, p2, p1, &m7029_MI);
		m3877(NULL, (t52 *)(t52 *)(*((t1822**)p0)), (t52 *)(t52 *)V_0, L_1, &m3877_MI);
		*((t7 **)(p0)) = (t7 *)V_0;
		return;
	}
}
// Metadata Definition System.Void System.Array::Resize<UnityEngine.EventSystems.RaycastResult>(T[]&,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17906_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17906_MI = 
{
	"Resize", (methodPointerType)&m17906, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1832.h"
extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t1832_TI;
extern TypeInfo t55_TI;
extern TypeInfo t103_TI;
#include "t1832MD.h"
extern MethodInfo m3066_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m3847_MI;
extern MethodInfo m216_MI;
extern MethodInfo m9693_MI;
extern MethodInfo m17908_MI;
extern MethodInfo m17909_MI;
struct t52;
 int32_t m17909 (t7 * __this, t1822* p0, t103  p1, int32_t p2, int32_t p3, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17909_MI;
 int32_t m17909 (t7 * __this, t1822* p0, t103  p1, int32_t p2, int32_t p3, MethodInfo* method){
	int32_t V_0 = 0;
	t1832 * V_1 = {0};
	int32_t V_2 = 0;
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral329, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if ((((int32_t)p3) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_1 = m3835(p0, 0, &m3835_MI);
		if ((((int32_t)p2) < ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_2 = m3847(p0, 0, &m3847_MI);
		if ((((int32_t)((int32_t)(p2-1))) <= ((int32_t)((int32_t)(L_2-p3)))))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		t88 * L_3 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m216(L_3, &m216_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0030:
	{
		V_0 = ((int32_t)(p2+p3));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1832_TI));
		t1832 * L_4 = m9693(NULL, &m9693_MI);
		V_1 = L_4;
		V_2 = p2;
		goto IL_0054;
	}

IL_003e:
	{
		bool L_5 = (bool)VirtFuncInvoker2< bool, t103 , t103  >::Invoke(&m17908_MI, V_1, (*(t103 *)(t103 *)SZArrayLdElema(p0, V_2)), p1);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		return V_2;
	}

IL_0050:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0054:
	{
		if ((((int32_t)V_2) < ((int32_t)V_0)))
		{
			goto IL_003e;
		}
	}
	{
		return (-1);
	}
}
// Metadata Definition System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.RaycastResult>(T[],T,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17909_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17909_MI = 
{
	"IndexOf", (methodPointerType)&m17909, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
struct t52;
 void m17910 (t7 * __this, t1822* p0, t1822* p1, int32_t p2, int32_t p3, t7* p4, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17910_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17910_MI;
extern MethodInfo m17911_MI;
struct t52;
 void m17911 (t7 * __this, t1822* p0, int32_t p1, int32_t p2, t7* p3, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17911_MI;
 void m17911 (t7 * __this, t1822* p0, int32_t p1, int32_t p2, t7* p3, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral329, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		m17910(NULL, p0, (t1822*)(t1822*)NULL, p1, p2, p3, &m17910_MI);
		return;
	}
}
// Metadata Definition System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17911_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17911_MI = 
{
	"Sort", (methodPointerType)&m17911, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t348_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern TypeInfo t1822_TI;
extern TypeInfo t103_TI;
extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t250_TI;
extern TypeInfo t244_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
 t741 * m17912 (t7 * __this, t1822* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17912_MI;
struct t52;
 void m17913 (t7 * __this, t1822* p0, t1822* p1, int32_t p2, int32_t p3, t7* p4, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17913_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m6582_MI;
extern MethodInfo m17912_MI;
extern MethodInfo m3904_MI;
extern MethodInfo m3905_MI;
extern MethodInfo m3906_MI;
extern MethodInfo m17913_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17910_MI;
extern MethodInfo m17910_MI;
 void m17910 (t7 * __this, t1822* p0, t1822* p1, int32_t p2, int32_t p3, t7* p4, MethodInfo* method){
	t741 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t86 * V_3 = {0};
	t86 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t86 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral365, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if ((((int32_t)p2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_1, (t34*) &_stringLiteral326, &m6591_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001d:
	{
		if ((((int32_t)p3) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		t88 * L_2 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_2, (t34*) &_stringLiteral241, &m6591_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_002c:
	{
		if ((((int32_t)((int32_t)((((int32_t)(((t52 *)p0)->max_length)))-p2))) < ((int32_t)p3)))
		{
			goto IL_003f;
		}
	}
	{
		if (!p1)
		{
			goto IL_0045;
		}
	}
	{
		if ((((int32_t)p2) <= ((int32_t)((int32_t)((((int32_t)(((t52 *)p1)->max_length)))-p3)))))
		{
			goto IL_0045;
		}
	}

IL_003f:
	{
		t348 * L_3 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m6582(L_3, &m6582_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0045:
	{
		if ((((int32_t)p3) > ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_004a:
	{
		if (p4)
		{
			goto IL_00b0;
		}
	}
	{
		if (p1)
		{
			goto IL_0055;
		}
	}
	{
		V_0 = (t741 *)NULL;
		goto IL_005c;
	}

IL_0055:
	{
		t741 * L_4 = m17912(NULL, p1, &m17912_MI);
		V_0 = L_4;
	}

IL_005c:
	{
		if (!((t744*)IsInst(p0, InitializedTypeInfo(&t744_TI))))
		{
			goto IL_0078;
		}
	}
	{
		t1822* L_5 = p0;
		m3904(NULL, ((t744*)IsInst(((t1822*)L_5), InitializedTypeInfo(&t744_TI))), p2, p3, V_0, &m3904_MI);
		return;
	}

IL_0078:
	{
		if (!((t731*)IsInst(p0, InitializedTypeInfo(&t731_TI))))
		{
			goto IL_0094;
		}
	}
	{
		t1822* L_6 = p0;
		m3905(NULL, ((t731*)IsInst(((t1822*)L_6), InitializedTypeInfo(&t731_TI))), p2, p3, V_0, &m3905_MI);
		return;
	}

IL_0094:
	{
		if (!((t250*)IsInst(p0, InitializedTypeInfo(&t250_TI))))
		{
			goto IL_00b0;
		}
	}
	{
		t1822* L_7 = p0;
		m3906(NULL, ((t250*)IsInst(((t1822*)L_7), InitializedTypeInfo(&t250_TI))), p2, p3, V_0, &m3906_MI);
		return;
	}

IL_00b0:
	try
	{ // begin try (depth: 1)
		V_1 = p2;
		V_2 = ((int32_t)(((int32_t)(p2+p3))-1));
		m17913(NULL, p0, p1, V_1, V_2, p4, &m17913_MI);
		// IL_00c3: leave.s IL_00d9
		goto IL_00d9;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t86 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t86_TI, e.ex->object.klass))
			goto IL_00c5;
		throw e;
	}

IL_00c5:
	{ // begin catch(System.Exception)
		V_3 = ((t86 *)__exception_local);
		t34* L_8 = m4015(NULL, (t34*) &_stringLiteral366, &m4015_MI);
		t1295 * L_9 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7024(L_9, L_8, V_3, &m7024_MI);
		il2cpp_codegen_raise_exception (L_9);
		// IL_00d7: leave.s IL_00d9
		goto IL_00d9;
	} // end catch (depth: 1)

IL_00d9:
	{
		return;
	}
}
// Metadata Definition System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult,UnityEngine.EventSystems.RaycastResult>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0_t103_0_0_0;
Il2CppGenericContext m17910_GenericContext = { NULL, &GenInst_t103_0_0_0_t103_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17910_MI = 
{
	"Sort", (methodPointerType)&m17910, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern MethodInfo m3899_MI;
extern MethodInfo m3810_MI;
extern MethodInfo m3902_MI;
extern MethodInfo m3901_MI;
extern MethodInfo m17912_MI;
extern MethodInfo m17912_MI;
 t741 * m17912 (t7 * __this, t1822* p0, MethodInfo* method){
	{
		if (!((t731*)IsInst(p0, InitializedTypeInfo(&t731_TI))))
		{
			goto IL_0015;
		}
	}
	{
		t114 L_0 = { &m3899_MI };
		t741 * L_1 = (t741 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t741_TI));
		m3810(L_1, (t7 *)(t7 *)p0, L_0, &m3810_MI);
		return L_1;
	}

IL_0015:
	{
		if (!((t744*)IsInst(p0, InitializedTypeInfo(&t744_TI))))
		{
			goto IL_002a;
		}
	}
	{
		t114 L_2 = { &m3902_MI };
		t741 * L_3 = (t741 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t741_TI));
		m3810(L_3, (t7 *)(t7 *)p0, L_2, &m3810_MI);
		return L_3;
	}

IL_002a:
	{
		t114 L_4 = { &m3901_MI };
		t741 * L_5 = (t741 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t741_TI));
		m3810(L_5, (t7 *)(t7 *)p0, L_4, &m3810_MI);
		return L_5;
	}
}
// Metadata Definition System.Array/Swapper System.Array::get_swapper<UnityEngine.EventSystems.RaycastResult>(T[])
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17912_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t741_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17912_MI = 
{
	"get_swapper", (methodPointerType)&m17912, &t52_TI, &t741_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
 int32_t m17914 (t7 * __this, t103  p0, t103  p1, t7* p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17914_MI;
struct t52;
 void m17915 (t7 * __this, t1822* p0, t1822* p1, int32_t p2, int32_t p3, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17915_MI;
extern MethodInfo m17913_MI;
extern MethodInfo m17914_MI;
extern MethodInfo m17915_MI;
extern MethodInfo m17913_MI;
extern MethodInfo m17913_MI;
extern MethodInfo m17913_MI;
 void m17913 (t7 * __this, t1822* p0, t1822* p1, int32_t p2, int32_t p3, t7* p4, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t103  V_3 = {0};
	{
		if ((((int32_t)p2) < ((int32_t)p3)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		V_0 = p2;
		V_1 = p3;
		V_2 = ((int32_t)(V_0+((int32_t)(((int32_t)(V_1-V_0))/2))));
		V_3 = (*(t103 *)(t103 *)SZArrayLdElema(p0, V_2));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_001f:
	{
		if ((((int32_t)V_0) >= ((int32_t)p3)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_0 = m17914(NULL, (*(t103 *)(t103 *)SZArrayLdElema(p0, V_0)), V_3, p4, &m17914_MI);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0035:
	{
		goto IL_003b;
	}

IL_0037:
	{
		V_1 = ((int32_t)(V_1-1));
	}

IL_003b:
	{
		if ((((int32_t)V_1) <= ((int32_t)p2)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = m17914(NULL, V_3, (*(t103 *)(t103 *)SZArrayLdElema(p0, V_1)), p4, &m17914_MI);
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}

IL_0051:
	{
		if ((((int32_t)V_0) > ((int32_t)V_1)))
		{
			goto IL_0068;
		}
	}
	{
		m17915(NULL, p0, p1, V_0, V_1, &m17915_MI);
		V_0 = ((int32_t)(V_0+1));
		V_1 = ((int32_t)(V_1-1));
		goto IL_006a;
	}

IL_0068:
	{
		goto IL_006c;
	}

IL_006a:
	{
		goto IL_0019;
	}

IL_006c:
	{
		if ((((int32_t)p2) >= ((int32_t)V_1)))
		{
			goto IL_007b;
		}
	}
	{
		m17913(NULL, p0, p1, p2, V_1, p4, &m17913_MI);
	}

IL_007b:
	{
		if ((((int32_t)V_0) >= ((int32_t)p3)))
		{
			goto IL_008a;
		}
	}
	{
		m17913(NULL, p0, p1, V_0, p3, p4, &m17913_MI);
	}

IL_008a:
	{
		return;
	}
}
// Metadata Definition System.Void System.Array::qsort<UnityEngine.EventSystems.RaycastResult,UnityEngine.EventSystems.RaycastResult>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0_t103_0_0_0;
Il2CppGenericContext m17913_GenericContext = { NULL, &GenInst_t103_0_0_0_t103_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17913_MI = 
{
	"qsort", (methodPointerType)&m17913, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t3430_TI;
extern TypeInfo t60_TI;
extern TypeInfo t103_TI;
extern TypeInfo t3431_TI;
extern TypeInfo t78_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1295_TI;
extern Il2CppType t103_0_0_0;
extern MethodInfo m17916_MI;
extern MethodInfo m17917_MI;
extern MethodInfo m7420_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m1656_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m17914_MI;
extern MethodInfo m17914_MI;
 int32_t m17914 (t7 * __this, t103  p0, t103  p1, t7* p2, MethodInfo* method){
	t34* V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		if (!p2)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_0 = (int32_t)InterfaceFuncInvoker2< int32_t, t103 , t103  >::Invoke(&m17916_MI, p2, p0, p1);
		return L_0;
	}

IL_000c:
	{
		t103  L_1 = p0;
		t7 * L_2 = Box(InitializedTypeInfo(&t103_TI), &L_1);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		t103  L_3 = p1;
		t7 * L_4 = Box(InitializedTypeInfo(&t103_TI), &L_3);
		if (L_4)
		{
			goto IL_001f;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0020;
	}

IL_001f:
	{
		G_B6_0 = (-1);
	}

IL_0020:
	{
		return G_B6_0;
	}

IL_0021:
	{
		t103  L_5 = p1;
		t7 * L_6 = Box(InitializedTypeInfo(&t103_TI), &L_5);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		t103  L_7 = p0;
		t7 * L_8 = Box(InitializedTypeInfo(&t103_TI), &L_7);
		if (!((t7*)IsInst(L_8, InitializedTypeInfo(&t3431_TI))))
		{
			goto IL_004a;
		}
	}
	{
		t103  L_9 = p0;
		t7 * L_10 = Box(InitializedTypeInfo(&t103_TI), &L_9);
		int32_t L_11 = (int32_t)InterfaceFuncInvoker1< int32_t, t103  >::Invoke(&m17917_MI, ((t7*)Castclass(L_10, InitializedTypeInfo(&t3431_TI))), p1);
		return L_11;
	}

IL_004a:
	{
		t103  L_12 = p0;
		t7 * L_13 = Box(InitializedTypeInfo(&t103_TI), &L_12);
		if (!((t7 *)IsInst(L_13, InitializedTypeInfo(&t78_TI))))
		{
			goto IL_006e;
		}
	}
	{
		t103  L_14 = p0;
		t7 * L_15 = Box(InitializedTypeInfo(&t103_TI), &L_14);
		t103  L_16 = p1;
		t7 * L_17 = Box(InitializedTypeInfo(&t103_TI), &L_16);
		int32_t L_18 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(&m7420_MI, ((t7 *)Castclass(L_15, InitializedTypeInfo(&t78_TI))), L_17);
		return L_18;
	}

IL_006e:
	{
		t34* L_19 = m4015(NULL, (t34*) &_stringLiteral369, &m4015_MI);
		V_0 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
		t70 * L_20 = m1675(NULL, LoadTypeToken(&t103_0_0_0), &m1675_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		t34* L_21 = m1656(NULL, V_0, L_20, &m1656_MI);
		t1295 * L_22 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7023(L_22, L_21, &m7023_MI);
		il2cpp_codegen_raise_exception (L_22);
	}
}
// Metadata Definition System.Int32 System.Array::compare<UnityEngine.EventSystems.RaycastResult>(T,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17914_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17914_MI = 
{
	"compare", (methodPointerType)&m17914, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17915_MI;
extern MethodInfo m17915_MI;
 void m17915 (t7 * __this, t1822* p0, t1822* p1, int32_t p2, int32_t p3, MethodInfo* method){
	t103  V_0 = {0};
	t103  V_1 = {0};
	{
		V_0 = (*(t103 *)(t103 *)SZArrayLdElema(p0, p2));
		*((t103 *)(t103 *)SZArrayLdElema(p0, p2)) = (t103 )(*(t103 *)(t103 *)SZArrayLdElema(p0, p3));
		*((t103 *)(t103 *)SZArrayLdElema(p0, p3)) = (t103 )V_0;
		if (!p1)
		{
			goto IL_003f;
		}
	}
	{
		V_1 = (*(t103 *)(t103 *)SZArrayLdElema(p1, p2));
		*((t103 *)(t103 *)SZArrayLdElema(p1, p2)) = (t103 )(*(t103 *)(t103 *)SZArrayLdElema(p1, p3));
		*((t103 *)(t103 *)SZArrayLdElema(p1, p3)) = (t103 )V_1;
	}

IL_003f:
	{
		return;
	}
}
// Metadata Definition System.Void System.Array::swap<UnityEngine.EventSystems.RaycastResult,UnityEngine.EventSystems.RaycastResult>(K[],V[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0_t103_0_0_0;
Il2CppGenericContext m17915_GenericContext = { NULL, &GenInst_t103_0_0_0_t103_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17915_MI = 
{
	"swap", (methodPointerType)&m17915, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t99.h"
extern TypeInfo t87_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
 void m17918 (t7 * __this, t1822* p0, int32_t p1, int32_t p2, t99 * p3, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17918_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17918_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17919_MI;
struct t52;
 void m17919 (t7 * __this, t1822* p0, int32_t p1, t99 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17919_MI;
 void m17919 (t7 * __this, t1822* p0, int32_t p1, t99 * p2, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t86 * V_2 = {0};
	t86 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t86 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		if (p2)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral367, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if ((((int32_t)p1) <= ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		if ((((int32_t)(((int32_t)(((t52 *)p0)->max_length)))) > ((int32_t)1)))
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		V_0 = 0;
		V_1 = ((int32_t)(p1-1));
		m17918(NULL, p0, V_0, V_1, p2, &m17918_MI);
		// IL_0028: leave.s IL_003e
		goto IL_003e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t86 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t86_TI, e.ex->object.klass))
			goto IL_002a;
		throw e;
	}

IL_002a:
	{ // begin catch(System.Exception)
		V_2 = ((t86 *)__exception_local);
		t34* L_1 = m4015(NULL, (t34*) &_stringLiteral368, &m4015_MI);
		t1295 * L_2 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7024(L_2, L_1, V_2, &m7024_MI);
		il2cpp_codegen_raise_exception (L_2);
		// IL_003c: leave.s IL_003e
		goto IL_003e;
	} // end catch (depth: 1)

IL_003e:
	{
		return;
	}
}
// Metadata Definition System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(T[],System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17919_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17919_MI = 
{
	"Sort", (methodPointerType)&m17919, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t99_TI;
extern TypeInfo t60_TI;
extern TypeInfo t103_TI;
#include "t99MD.h"
struct t52;
 void m17920 (t7 * __this, t1822* p0, int32_t p1, int32_t p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m17920_MI;
extern MethodInfo m17918_MI;
extern MethodInfo m9203_MI;
extern MethodInfo m17920_MI;
extern MethodInfo m17918_MI;
extern MethodInfo m17918_MI;
extern MethodInfo m17918_MI;
 void m17918 (t7 * __this, t1822* p0, int32_t p1, int32_t p2, t99 * p3, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t103  V_3 = {0};
	{
		if ((((int32_t)p1) < ((int32_t)p2)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		V_0 = p1;
		V_1 = p2;
		V_2 = ((int32_t)(V_0+((int32_t)(((int32_t)(V_1-V_0))/2))));
		V_3 = (*(t103 *)(t103 *)SZArrayLdElema(p0, V_2));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_001f:
	{
		if ((((int32_t)V_0) >= ((int32_t)p2)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, t103 , t103  >::Invoke(&m9203_MI, p3, (*(t103 *)(t103 *)SZArrayLdElema(p0, V_0)), V_3);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0034:
	{
		goto IL_003a;
	}

IL_0036:
	{
		V_1 = ((int32_t)(V_1-1));
	}

IL_003a:
	{
		if ((((int32_t)V_1) <= ((int32_t)p1)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker2< int32_t, t103 , t103  >::Invoke(&m9203_MI, p3, V_3, (*(t103 *)(t103 *)SZArrayLdElema(p0, V_1)));
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}

IL_004f:
	{
		if ((((int32_t)V_0) > ((int32_t)V_1)))
		{
			goto IL_0065;
		}
	}
	{
		m17920(NULL, p0, V_0, V_1, &m17920_MI);
		V_0 = ((int32_t)(V_0+1));
		V_1 = ((int32_t)(V_1-1));
		goto IL_0067;
	}

IL_0065:
	{
		goto IL_0069;
	}

IL_0067:
	{
		goto IL_0019;
	}

IL_0069:
	{
		if ((((int32_t)p1) >= ((int32_t)V_1)))
		{
			goto IL_0076;
		}
	}
	{
		m17918(NULL, p0, p1, V_1, p3, &m17918_MI);
	}

IL_0076:
	{
		if ((((int32_t)V_0) >= ((int32_t)p2)))
		{
			goto IL_0083;
		}
	}
	{
		m17918(NULL, p0, V_0, p2, p3, &m17918_MI);
	}

IL_0083:
	{
		return;
	}
}
// Metadata Definition System.Void System.Array::qsort<UnityEngine.EventSystems.RaycastResult>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17918_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17918_MI = 
{
	"qsort", (methodPointerType)&m17918, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17920_MI;
extern MethodInfo m17920_MI;
 void m17920 (t7 * __this, t1822* p0, int32_t p1, int32_t p2, MethodInfo* method){
	t103  V_0 = {0};
	{
		V_0 = (*(t103 *)(t103 *)SZArrayLdElema(p0, p1));
		*((t103 *)(t103 *)SZArrayLdElema(p0, p1)) = (t103 )(*(t103 *)(t103 *)SZArrayLdElema(p0, p2));
		*((t103 *)(t103 *)SZArrayLdElema(p0, p2)) = (t103 )V_0;
		return;
	}
}
// Metadata Definition System.Void System.Array::swap<UnityEngine.EventSystems.RaycastResult>(T[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t103_0_0_0;
Il2CppGenericContext m17920_GenericContext = { NULL, &GenInst_t103_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17920_MI = 
{
	"swap", (methodPointerType)&m17920, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t158.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17921_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17921_MI;
extern MethodInfo m17922_MI;
struct t52;
#define m17922(__this, p0, method) (t158 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.BaseRaycaster>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t158_TI;
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17922_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t158_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17922_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t158_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17921_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.BaseRaycaster>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17921_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17921_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17923_MI;
struct t52;
#define m17923(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.BaseRaycaster>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17923_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17923_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t158_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17921_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17921_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17924_MI;
struct t52;
#define m17924(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.BaseRaycaster>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t158_TI;
static void* m17924_RGCTXData[1] = 
{
	&t158_TI,
};
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17924_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17924_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17924_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17925_MI;
struct t52;
#define m17925(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.BaseRaycaster>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17925_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17925_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17926_MI;
struct t52;
#define m17926(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.BaseRaycaster>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17926_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17926_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t158_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17921_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17921_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17927_MI;
struct t52;
#define m17927(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.BaseRaycaster>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t158_TI;
static void* m17927_RGCTXData[1] = 
{
	&t158_TI,
};
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17927_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17927_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17927_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17928_MI;
struct t52;
#define m17928(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.BaseRaycaster>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17928_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17928_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t158_TI;
struct t52;
extern MethodInfo m17929_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17929_MI;
extern MethodInfo m17930_MI;
struct t52;
#define m17930(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.BaseRaycaster>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t158_TI;
static void* m17930_RGCTXData[1] = 
{
	&t158_TI,
};
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17930_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17930_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17930_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17929_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.BaseRaycaster>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17929_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17929_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1844.h"
extern TypeInfo t1844_TI;
#include "t1844MD.h"
extern MethodInfo m9750_MI;
extern MethodInfo m17931_MI;
struct t52;
#define m17931(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.BaseRaycaster>()
extern TypeInfo t52_TI;
extern TypeInfo t1837_TI;
extern TypeInfo t1844_TI;
extern MethodInfo m9750_MI;
static void* m17931_RGCTXData[2] = 
{
	&t1844_TI,
	&m9750_MI,
};
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17931_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t1837_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17931_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t1837_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17931_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m17932(__this, p0, p1, p2, method) (void)m17411_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17932_MI;
extern MethodInfo m17932_MI;
extern MethodInfo m17933_MI;
struct t52;
#define m17933(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::Resize<UnityEngine.EventSystems.BaseRaycaster>(T[]&,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17932_MI;
static void* m17933_RGCTXData[1] = 
{
	&m17932_MI,
};
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17933_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17933_MI = 
{
	"Resize", (methodPointerType)&m17412_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17933_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t1836_TI;
extern TypeInfo t158_TI;
extern MethodInfo m216_MI;
extern MethodInfo m7029_MI;
extern MethodInfo m3877_MI;
extern MethodInfo m17932_MI;
// Metadata Definition System.Void System.Array::Resize<UnityEngine.EventSystems.BaseRaycaster>(T[]&,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1836_TI;
static void* m17932_RGCTXData[1] = 
{
	&t1836_TI,
};
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17932_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17932_MI = 
{
	"Resize", (methodPointerType)&m17411_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17932_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1847.h"
extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t1847_TI;
extern TypeInfo t55_TI;
extern TypeInfo t158_TI;
#include "t1847MD.h"
extern MethodInfo m3066_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m3847_MI;
extern MethodInfo m216_MI;
extern MethodInfo m9831_MI;
extern MethodInfo m17934_MI;
extern MethodInfo m17935_MI;
struct t52;
#define m17935(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
// Metadata Definition System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.BaseRaycaster>(T[],T,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m9831_MI;
extern MethodInfo m17934_MI;
static void* m17935_RGCTXData[2] = 
{
	&m9831_MI,
	&m17934_MI,
};
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17935_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17935_MI = 
{
	"IndexOf", (methodPointerType)&m7824_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17935_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
struct t52;
#define m17936(__this, p0, p1, p2, p3, p4, method) (void)m17480_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17936_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17936_MI;
extern MethodInfo m17937_MI;
struct t52;
#define m17937(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
// Metadata Definition System.Void System.Array::Sort<UnityEngine.EventSystems.BaseRaycaster>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17936_MI;
static void* m17937_RGCTXData[1] = 
{
	&m17936_MI,
};
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17937_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17937_MI = 
{
	"Sort", (methodPointerType)&m17481_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17937_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t348_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern TypeInfo t1836_TI;
extern TypeInfo t158_TI;
extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t250_TI;
extern TypeInfo t244_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
#define m17938(__this, p0, method) (t741 *)m17482_gshared((t7 *)__this, (t350*)p0, method)
extern MethodInfo m17938_MI;
struct t52;
#define m17939(__this, p0, p1, p2, p3, p4, method) (void)m17483_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m17939_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m6582_MI;
extern MethodInfo m17938_MI;
extern MethodInfo m3904_MI;
extern MethodInfo m3905_MI;
extern MethodInfo m3906_MI;
extern MethodInfo m17939_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17936_MI;
// Metadata Definition System.Void System.Array::Sort<UnityEngine.EventSystems.BaseRaycaster,UnityEngine.EventSystems.BaseRaycaster>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17938_MI;
extern TypeInfo t1836_TI;
extern MethodInfo m17939_MI;
static void* m17936_RGCTXData[3] = 
{
	&m17938_MI,
	&t1836_TI,
	&m17939_MI,
};
extern Il2CppGenericInst GenInst_t158_0_0_0_t158_0_0_0;
Il2CppGenericContext m17936_GenericContext = { NULL, &GenInst_t158_0_0_0_t158_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17936_MI = 
{
	"Sort", (methodPointerType)&m17480_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m17936_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern MethodInfo m3899_MI;
extern MethodInfo m3810_MI;
extern MethodInfo m3902_MI;
extern MethodInfo m3901_MI;
extern MethodInfo m17938_MI;
// Metadata Definition System.Array/Swapper System.Array::get_swapper<UnityEngine.EventSystems.BaseRaycaster>(T[])
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17938_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t741_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17938_MI = 
{
	"get_swapper", (methodPointerType)&m17482_gshared, &t52_TI, &t741_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m17940(__this, p0, p1, p2, method) (int32_t)m17583_gshared((t7 *)__this, (t7 *)p0, (t7 *)p1, (t7*)p2, method)
extern MethodInfo m17940_MI;
struct t52;
#define m17941(__this, p0, p1, p2, p3, method) (void)m17584_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m17941_MI;
extern MethodInfo m17939_MI;
extern MethodInfo m17940_MI;
extern MethodInfo m17941_MI;
extern MethodInfo m17939_MI;
extern MethodInfo m17939_MI;
// Metadata Definition System.Void System.Array::qsort<UnityEngine.EventSystems.BaseRaycaster,UnityEngine.EventSystems.BaseRaycaster>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17940_MI;
extern MethodInfo m17941_MI;
extern MethodInfo m17939_MI;
static void* m17939_RGCTXData[3] = 
{
	&m17940_MI,
	&m17941_MI,
	&m17939_MI,
};
extern Il2CppGenericInst GenInst_t158_0_0_0_t158_0_0_0;
Il2CppGenericContext m17939_GenericContext = { NULL, &GenInst_t158_0_0_0_t158_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17939_MI = 
{
	"qsort", (methodPointerType)&m17483_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17939_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t3432_TI;
extern TypeInfo t60_TI;
extern TypeInfo t158_TI;
extern TypeInfo t3433_TI;
extern TypeInfo t78_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1295_TI;
extern Il2CppType t158_0_0_0;
extern MethodInfo m17942_MI;
extern MethodInfo m17943_MI;
extern MethodInfo m7420_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m1656_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m17940_MI;
// Metadata Definition System.Int32 System.Array::compare<UnityEngine.EventSystems.BaseRaycaster>(T,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m17942_MI;
extern TypeInfo t158_TI;
extern TypeInfo t3433_TI;
extern MethodInfo m17943_MI;
extern Il2CppType t158_0_0_0;
static void* m17940_RGCTXData[5] = 
{
	&m17942_MI,
	&t158_TI,
	&t3433_TI,
	&m17943_MI,
	(void*)&t158_0_0_0,
};
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17940_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17940_MI = 
{
	"compare", (methodPointerType)&m17583_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17940_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17941_MI;
// Metadata Definition System.Void System.Array::swap<UnityEngine.EventSystems.BaseRaycaster,UnityEngine.EventSystems.BaseRaycaster>(K[],V[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t158_0_0_0_t158_0_0_0;
Il2CppGenericContext m17941_GenericContext = { NULL, &GenInst_t158_0_0_0_t158_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17941_MI = 
{
	"swap", (methodPointerType)&m17584_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1842.h"
extern TypeInfo t87_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
#define m17944(__this, p0, p1, p2, p3, method) (void)m17587_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t1679 *)p3, method)
extern MethodInfo m17944_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m17944_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m17945_MI;
struct t52;
#define m17945(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
// Metadata Definition System.Void System.Array::Sort<UnityEngine.EventSystems.BaseRaycaster>(T[],System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m17944_MI;
static void* m17945_RGCTXData[1] = 
{
	&m17944_MI,
};
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17945_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17945_MI = 
{
	"Sort", (methodPointerType)&m17588_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m17945_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1842_TI;
extern TypeInfo t60_TI;
extern TypeInfo t158_TI;
#include "t1842MD.h"
struct t52;
#define m17946(__this, p0, p1, p2, method) (void)m17589_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m17946_MI;
extern MethodInfo m17944_MI;
extern MethodInfo m9846_MI;
extern MethodInfo m17946_MI;
extern MethodInfo m17944_MI;
extern MethodInfo m17944_MI;
// Metadata Definition System.Void System.Array::qsort<UnityEngine.EventSystems.BaseRaycaster>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m9846_MI;
extern MethodInfo m17946_MI;
extern MethodInfo m17944_MI;
static void* m17944_RGCTXData[3] = 
{
	&m9846_MI,
	&m17946_MI,
	&m17944_MI,
};
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17944_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17944_MI = 
{
	"qsort", (methodPointerType)&m17587_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m17944_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17946_MI;
// Metadata Definition System.Void System.Array::swap<UnityEngine.EventSystems.BaseRaycaster>(T[],System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t158_0_0_0;
Il2CppGenericContext m17946_GenericContext = { NULL, &GenInst_t158_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17946_MI = 
{
	"swap", (methodPointerType)&m17589_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t108.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17947_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17947_MI;
extern MethodInfo m17948_MI;
struct t52;
#define m17948(__this, p0, method) (t108 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.EventTrigger>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t108_TI;
extern Il2CppGenericInst GenInst_t108_0_0_0;
Il2CppGenericContext m17948_GenericContext = { NULL, &GenInst_t108_0_0_0 };
extern Il2CppType t108_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17948_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t108_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17947_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.EventTrigger>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t108_0_0_0;
Il2CppGenericContext m17947_GenericContext = { NULL, &GenInst_t108_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17947_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17949_MI;
struct t52;
#define m17949(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.EventTrigger>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t108_0_0_0;
Il2CppGenericContext m17949_GenericContext = { NULL, &GenInst_t108_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17949_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t108_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17947_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17947_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17950_MI;
struct t52;
#define m17950(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.EventTrigger>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t108_TI;
static void* m17950_RGCTXData[1] = 
{
	&t108_TI,
};
extern Il2CppGenericInst GenInst_t108_0_0_0;
Il2CppGenericContext m17950_GenericContext = { NULL, &GenInst_t108_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17950_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17950_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17951_MI;
struct t52;
#define m17951(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.EventTrigger>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t108_0_0_0;
Il2CppGenericContext m17951_GenericContext = { NULL, &GenInst_t108_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17951_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17952_MI;
struct t52;
#define m17952(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.EventTrigger>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t108_0_0_0;
Il2CppGenericContext m17952_GenericContext = { NULL, &GenInst_t108_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17952_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t108_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17947_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17947_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17953_MI;
struct t52;
#define m17953(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.EventTrigger>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t108_TI;
static void* m17953_RGCTXData[1] = 
{
	&t108_TI,
};
extern Il2CppGenericInst GenInst_t108_0_0_0;
Il2CppGenericContext m17953_GenericContext = { NULL, &GenInst_t108_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17953_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17953_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17954_MI;
struct t52;
#define m17954(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.EventTrigger>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t108_0_0_0;
Il2CppGenericContext m17954_GenericContext = { NULL, &GenInst_t108_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17954_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t108_TI;
struct t52;
extern MethodInfo m17955_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17955_MI;
extern MethodInfo m17956_MI;
struct t52;
#define m17956(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.EventTrigger>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t108_TI;
static void* m17956_RGCTXData[1] = 
{
	&t108_TI,
};
extern Il2CppGenericInst GenInst_t108_0_0_0;
Il2CppGenericContext m17956_GenericContext = { NULL, &GenInst_t108_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17956_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17956_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17955_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.EventTrigger>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t108_0_0_0;
Il2CppGenericContext m17955_GenericContext = { NULL, &GenInst_t108_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17955_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1851.h"
extern TypeInfo t1851_TI;
#include "t1851MD.h"
extern MethodInfo m9849_MI;
extern MethodInfo m17957_MI;
struct t52;
#define m17957(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.EventTrigger>()
extern TypeInfo t52_TI;
extern TypeInfo t3434_TI;
extern TypeInfo t1851_TI;
extern MethodInfo m9849_MI;
static void* m17957_RGCTXData[2] = 
{
	&t1851_TI,
	&m9849_MI,
};
extern Il2CppGenericInst GenInst_t108_0_0_0;
Il2CppGenericContext m17957_GenericContext = { NULL, &GenInst_t108_0_0_0 };
extern Il2CppType t3434_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17957_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3434_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17957_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17958_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17958_MI;
extern MethodInfo m17959_MI;
struct t52;
#define m17959(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IPointerEnterHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t136_TI;
extern Il2CppGenericInst GenInst_t136_0_0_0;
Il2CppGenericContext m17959_GenericContext = { NULL, &GenInst_t136_0_0_0 };
extern Il2CppType t136_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17959_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t136_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17958_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.IPointerEnterHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t136_0_0_0;
Il2CppGenericContext m17958_GenericContext = { NULL, &GenInst_t136_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17958_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17960_MI;
struct t52;
#define m17960(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.IPointerEnterHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t136_0_0_0;
Il2CppGenericContext m17960_GenericContext = { NULL, &GenInst_t136_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17960_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t136_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17958_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17958_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17961_MI;
struct t52;
#define m17961(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.IPointerEnterHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t136_TI;
static void* m17961_RGCTXData[1] = 
{
	&t136_TI,
};
extern Il2CppGenericInst GenInst_t136_0_0_0;
Il2CppGenericContext m17961_GenericContext = { NULL, &GenInst_t136_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17961_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17961_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17962_MI;
struct t52;
#define m17962(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.IPointerEnterHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t136_0_0_0;
Il2CppGenericContext m17962_GenericContext = { NULL, &GenInst_t136_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17962_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17963_MI;
struct t52;
#define m17963(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.IPointerEnterHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t136_0_0_0;
Il2CppGenericContext m17963_GenericContext = { NULL, &GenInst_t136_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17963_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t136_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17958_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17958_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17964_MI;
struct t52;
#define m17964(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.IPointerEnterHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t136_TI;
static void* m17964_RGCTXData[1] = 
{
	&t136_TI,
};
extern Il2CppGenericInst GenInst_t136_0_0_0;
Il2CppGenericContext m17964_GenericContext = { NULL, &GenInst_t136_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17964_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17964_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17965_MI;
struct t52;
#define m17965(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.IPointerEnterHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t136_0_0_0;
Il2CppGenericContext m17965_GenericContext = { NULL, &GenInst_t136_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17965_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t136_TI;
struct t52;
extern MethodInfo m17966_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17966_MI;
extern MethodInfo m17967_MI;
struct t52;
#define m17967(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.IPointerEnterHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t136_TI;
static void* m17967_RGCTXData[1] = 
{
	&t136_TI,
};
extern Il2CppGenericInst GenInst_t136_0_0_0;
Il2CppGenericContext m17967_GenericContext = { NULL, &GenInst_t136_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17967_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17967_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17966_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.IPointerEnterHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t136_0_0_0;
Il2CppGenericContext m17966_GenericContext = { NULL, &GenInst_t136_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17966_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1852.h"
extern TypeInfo t1852_TI;
#include "t1852MD.h"
extern MethodInfo m9854_MI;
extern MethodInfo m17968_MI;
struct t52;
#define m17968(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.IPointerEnterHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t3435_TI;
extern TypeInfo t1852_TI;
extern MethodInfo m9854_MI;
static void* m17968_RGCTXData[2] = 
{
	&t1852_TI,
	&m9854_MI,
};
extern Il2CppGenericInst GenInst_t136_0_0_0;
Il2CppGenericContext m17968_GenericContext = { NULL, &GenInst_t136_0_0_0 };
extern Il2CppType t3435_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17968_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3435_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17968_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17969_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17969_MI;
extern MethodInfo m17970_MI;
struct t52;
#define m17970(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IPointerExitHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t137_TI;
extern Il2CppGenericInst GenInst_t137_0_0_0;
Il2CppGenericContext m17970_GenericContext = { NULL, &GenInst_t137_0_0_0 };
extern Il2CppType t137_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17970_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t137_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17969_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.IPointerExitHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t137_0_0_0;
Il2CppGenericContext m17969_GenericContext = { NULL, &GenInst_t137_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17969_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17971_MI;
struct t52;
#define m17971(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.IPointerExitHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t137_0_0_0;
Il2CppGenericContext m17971_GenericContext = { NULL, &GenInst_t137_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17971_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t137_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17969_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17969_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17972_MI;
struct t52;
#define m17972(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.IPointerExitHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t137_TI;
static void* m17972_RGCTXData[1] = 
{
	&t137_TI,
};
extern Il2CppGenericInst GenInst_t137_0_0_0;
Il2CppGenericContext m17972_GenericContext = { NULL, &GenInst_t137_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17972_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17972_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17973_MI;
struct t52;
#define m17973(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.IPointerExitHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t137_0_0_0;
Il2CppGenericContext m17973_GenericContext = { NULL, &GenInst_t137_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17973_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17974_MI;
struct t52;
#define m17974(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.IPointerExitHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t137_0_0_0;
Il2CppGenericContext m17974_GenericContext = { NULL, &GenInst_t137_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17974_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t137_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17969_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17969_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17975_MI;
struct t52;
#define m17975(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.IPointerExitHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t137_TI;
static void* m17975_RGCTXData[1] = 
{
	&t137_TI,
};
extern Il2CppGenericInst GenInst_t137_0_0_0;
Il2CppGenericContext m17975_GenericContext = { NULL, &GenInst_t137_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17975_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17975_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17976_MI;
struct t52;
#define m17976(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.IPointerExitHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t137_0_0_0;
Il2CppGenericContext m17976_GenericContext = { NULL, &GenInst_t137_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17976_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t137_TI;
struct t52;
extern MethodInfo m17977_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17977_MI;
extern MethodInfo m17978_MI;
struct t52;
#define m17978(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.IPointerExitHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t137_TI;
static void* m17978_RGCTXData[1] = 
{
	&t137_TI,
};
extern Il2CppGenericInst GenInst_t137_0_0_0;
Il2CppGenericContext m17978_GenericContext = { NULL, &GenInst_t137_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17978_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17978_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17977_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.IPointerExitHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t137_0_0_0;
Il2CppGenericContext m17977_GenericContext = { NULL, &GenInst_t137_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17977_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1853.h"
extern TypeInfo t1853_TI;
#include "t1853MD.h"
extern MethodInfo m9859_MI;
extern MethodInfo m17979_MI;
struct t52;
#define m17979(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.IPointerExitHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t3436_TI;
extern TypeInfo t1853_TI;
extern MethodInfo m9859_MI;
static void* m17979_RGCTXData[2] = 
{
	&t1853_TI,
	&m9859_MI,
};
extern Il2CppGenericInst GenInst_t137_0_0_0;
Il2CppGenericContext m17979_GenericContext = { NULL, &GenInst_t137_0_0_0 };
extern Il2CppType t3436_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17979_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3436_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17979_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17980_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17980_MI;
extern MethodInfo m17981_MI;
struct t52;
#define m17981(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IPointerDownHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t138_TI;
extern Il2CppGenericInst GenInst_t138_0_0_0;
Il2CppGenericContext m17981_GenericContext = { NULL, &GenInst_t138_0_0_0 };
extern Il2CppType t138_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17981_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t138_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17980_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.IPointerDownHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t138_0_0_0;
Il2CppGenericContext m17980_GenericContext = { NULL, &GenInst_t138_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17980_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17982_MI;
struct t52;
#define m17982(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.IPointerDownHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t138_0_0_0;
Il2CppGenericContext m17982_GenericContext = { NULL, &GenInst_t138_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17982_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t138_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17980_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17980_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17983_MI;
struct t52;
#define m17983(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.IPointerDownHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t138_TI;
static void* m17983_RGCTXData[1] = 
{
	&t138_TI,
};
extern Il2CppGenericInst GenInst_t138_0_0_0;
Il2CppGenericContext m17983_GenericContext = { NULL, &GenInst_t138_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17983_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17983_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17984_MI;
struct t52;
#define m17984(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.IPointerDownHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t138_0_0_0;
Il2CppGenericContext m17984_GenericContext = { NULL, &GenInst_t138_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17984_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17985_MI;
struct t52;
#define m17985(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.IPointerDownHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t138_0_0_0;
Il2CppGenericContext m17985_GenericContext = { NULL, &GenInst_t138_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17985_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t138_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17980_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17980_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17986_MI;
struct t52;
#define m17986(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.IPointerDownHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t138_TI;
static void* m17986_RGCTXData[1] = 
{
	&t138_TI,
};
extern Il2CppGenericInst GenInst_t138_0_0_0;
Il2CppGenericContext m17986_GenericContext = { NULL, &GenInst_t138_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17986_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17986_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17987_MI;
struct t52;
#define m17987(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.IPointerDownHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t138_0_0_0;
Il2CppGenericContext m17987_GenericContext = { NULL, &GenInst_t138_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17987_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t138_TI;
struct t52;
extern MethodInfo m17988_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17988_MI;
extern MethodInfo m17989_MI;
struct t52;
#define m17989(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.IPointerDownHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t138_TI;
static void* m17989_RGCTXData[1] = 
{
	&t138_TI,
};
extern Il2CppGenericInst GenInst_t138_0_0_0;
Il2CppGenericContext m17989_GenericContext = { NULL, &GenInst_t138_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17989_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17989_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17988_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.IPointerDownHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t138_0_0_0;
Il2CppGenericContext m17988_GenericContext = { NULL, &GenInst_t138_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17988_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1854.h"
extern TypeInfo t1854_TI;
#include "t1854MD.h"
extern MethodInfo m9864_MI;
extern MethodInfo m17990_MI;
struct t52;
#define m17990(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.IPointerDownHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t3437_TI;
extern TypeInfo t1854_TI;
extern MethodInfo m9864_MI;
static void* m17990_RGCTXData[2] = 
{
	&t1854_TI,
	&m9864_MI,
};
extern Il2CppGenericInst GenInst_t138_0_0_0;
Il2CppGenericContext m17990_GenericContext = { NULL, &GenInst_t138_0_0_0 };
extern Il2CppType t3437_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17990_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3437_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17990_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m17991_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17991_MI;
extern MethodInfo m17992_MI;
struct t52;
#define m17992(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IPointerUpHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t139_TI;
extern Il2CppGenericInst GenInst_t139_0_0_0;
Il2CppGenericContext m17992_GenericContext = { NULL, &GenInst_t139_0_0_0 };
extern Il2CppType t139_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17992_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t139_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17991_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.IPointerUpHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t139_0_0_0;
Il2CppGenericContext m17991_GenericContext = { NULL, &GenInst_t139_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17991_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17993_MI;
struct t52;
#define m17993(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.IPointerUpHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t139_0_0_0;
Il2CppGenericContext m17993_GenericContext = { NULL, &GenInst_t139_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17993_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t139_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17991_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17991_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17994_MI;
struct t52;
#define m17994(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.IPointerUpHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t139_TI;
static void* m17994_RGCTXData[1] = 
{
	&t139_TI,
};
extern Il2CppGenericInst GenInst_t139_0_0_0;
Il2CppGenericContext m17994_GenericContext = { NULL, &GenInst_t139_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17994_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17994_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m17995_MI;
struct t52;
#define m17995(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.IPointerUpHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t139_0_0_0;
Il2CppGenericContext m17995_GenericContext = { NULL, &GenInst_t139_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17995_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17996_MI;
struct t52;
#define m17996(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.IPointerUpHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t139_0_0_0;
Il2CppGenericContext m17996_GenericContext = { NULL, &GenInst_t139_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17996_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t139_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m17991_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m17991_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m17997_MI;
struct t52;
#define m17997(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.IPointerUpHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t139_TI;
static void* m17997_RGCTXData[1] = 
{
	&t139_TI,
};
extern Il2CppGenericInst GenInst_t139_0_0_0;
Il2CppGenericContext m17997_GenericContext = { NULL, &GenInst_t139_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17997_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m17997_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m17998_MI;
struct t52;
#define m17998(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.IPointerUpHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t139_0_0_0;
Il2CppGenericContext m17998_GenericContext = { NULL, &GenInst_t139_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17998_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t139_TI;
struct t52;
extern MethodInfo m17999_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m17999_MI;
extern MethodInfo m18000_MI;
struct t52;
#define m18000(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.IPointerUpHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t139_TI;
static void* m18000_RGCTXData[1] = 
{
	&t139_TI,
};
extern Il2CppGenericInst GenInst_t139_0_0_0;
Il2CppGenericContext m18000_GenericContext = { NULL, &GenInst_t139_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18000_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18000_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m17999_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.IPointerUpHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t139_0_0_0;
Il2CppGenericContext m17999_GenericContext = { NULL, &GenInst_t139_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m17999_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1855.h"
extern TypeInfo t1855_TI;
#include "t1855MD.h"
extern MethodInfo m9869_MI;
extern MethodInfo m18001_MI;
struct t52;
#define m18001(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.IPointerUpHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t3438_TI;
extern TypeInfo t1855_TI;
extern MethodInfo m9869_MI;
static void* m18001_RGCTXData[2] = 
{
	&t1855_TI,
	&m9869_MI,
};
extern Il2CppGenericInst GenInst_t139_0_0_0;
Il2CppGenericContext m18001_GenericContext = { NULL, &GenInst_t139_0_0_0 };
extern Il2CppType t3438_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18001_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3438_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18001_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m18002_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18002_MI;
extern MethodInfo m18003_MI;
struct t52;
#define m18003(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IPointerClickHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t140_TI;
extern Il2CppGenericInst GenInst_t140_0_0_0;
Il2CppGenericContext m18003_GenericContext = { NULL, &GenInst_t140_0_0_0 };
extern Il2CppType t140_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18003_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t140_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18002_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.IPointerClickHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t140_0_0_0;
Il2CppGenericContext m18002_GenericContext = { NULL, &GenInst_t140_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18002_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18004_MI;
struct t52;
#define m18004(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.IPointerClickHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t140_0_0_0;
Il2CppGenericContext m18004_GenericContext = { NULL, &GenInst_t140_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18004_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t140_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18002_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18002_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18005_MI;
struct t52;
#define m18005(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.IPointerClickHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t140_TI;
static void* m18005_RGCTXData[1] = 
{
	&t140_TI,
};
extern Il2CppGenericInst GenInst_t140_0_0_0;
Il2CppGenericContext m18005_GenericContext = { NULL, &GenInst_t140_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18005_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18005_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m18006_MI;
struct t52;
#define m18006(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.IPointerClickHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t140_0_0_0;
Il2CppGenericContext m18006_GenericContext = { NULL, &GenInst_t140_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18006_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18007_MI;
struct t52;
#define m18007(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.IPointerClickHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t140_0_0_0;
Il2CppGenericContext m18007_GenericContext = { NULL, &GenInst_t140_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18007_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t140_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18002_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18002_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18008_MI;
struct t52;
#define m18008(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.IPointerClickHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t140_TI;
static void* m18008_RGCTXData[1] = 
{
	&t140_TI,
};
extern Il2CppGenericInst GenInst_t140_0_0_0;
Il2CppGenericContext m18008_GenericContext = { NULL, &GenInst_t140_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18008_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18008_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18009_MI;
struct t52;
#define m18009(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.IPointerClickHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t140_0_0_0;
Il2CppGenericContext m18009_GenericContext = { NULL, &GenInst_t140_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18009_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t140_TI;
struct t52;
extern MethodInfo m18010_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18010_MI;
extern MethodInfo m18011_MI;
struct t52;
#define m18011(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.IPointerClickHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t140_TI;
static void* m18011_RGCTXData[1] = 
{
	&t140_TI,
};
extern Il2CppGenericInst GenInst_t140_0_0_0;
Il2CppGenericContext m18011_GenericContext = { NULL, &GenInst_t140_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18011_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18011_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18010_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.IPointerClickHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t140_0_0_0;
Il2CppGenericContext m18010_GenericContext = { NULL, &GenInst_t140_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18010_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1856.h"
extern TypeInfo t1856_TI;
#include "t1856MD.h"
extern MethodInfo m9874_MI;
extern MethodInfo m18012_MI;
struct t52;
#define m18012(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.IPointerClickHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t3439_TI;
extern TypeInfo t1856_TI;
extern MethodInfo m9874_MI;
static void* m18012_RGCTXData[2] = 
{
	&t1856_TI,
	&m9874_MI,
};
extern Il2CppGenericInst GenInst_t140_0_0_0;
Il2CppGenericContext m18012_GenericContext = { NULL, &GenInst_t140_0_0_0 };
extern Il2CppType t3439_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18012_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3439_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18012_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m18013_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18013_MI;
extern MethodInfo m18014_MI;
struct t52;
#define m18014(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IBeginDragHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t142_TI;
extern Il2CppGenericInst GenInst_t142_0_0_0;
Il2CppGenericContext m18014_GenericContext = { NULL, &GenInst_t142_0_0_0 };
extern Il2CppType t142_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18014_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t142_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18013_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.IBeginDragHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t142_0_0_0;
Il2CppGenericContext m18013_GenericContext = { NULL, &GenInst_t142_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18013_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18015_MI;
struct t52;
#define m18015(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.IBeginDragHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t142_0_0_0;
Il2CppGenericContext m18015_GenericContext = { NULL, &GenInst_t142_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18015_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t142_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18013_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18013_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18016_MI;
struct t52;
#define m18016(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.IBeginDragHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t142_TI;
static void* m18016_RGCTXData[1] = 
{
	&t142_TI,
};
extern Il2CppGenericInst GenInst_t142_0_0_0;
Il2CppGenericContext m18016_GenericContext = { NULL, &GenInst_t142_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18016_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18016_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m18017_MI;
struct t52;
#define m18017(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.IBeginDragHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t142_0_0_0;
Il2CppGenericContext m18017_GenericContext = { NULL, &GenInst_t142_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18017_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18018_MI;
struct t52;
#define m18018(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.IBeginDragHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t142_0_0_0;
Il2CppGenericContext m18018_GenericContext = { NULL, &GenInst_t142_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18018_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t142_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18013_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18013_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18019_MI;
struct t52;
#define m18019(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.IBeginDragHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t142_TI;
static void* m18019_RGCTXData[1] = 
{
	&t142_TI,
};
extern Il2CppGenericInst GenInst_t142_0_0_0;
Il2CppGenericContext m18019_GenericContext = { NULL, &GenInst_t142_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18019_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18019_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18020_MI;
struct t52;
#define m18020(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.IBeginDragHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t142_0_0_0;
Il2CppGenericContext m18020_GenericContext = { NULL, &GenInst_t142_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18020_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t142_TI;
struct t52;
extern MethodInfo m18021_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18021_MI;
extern MethodInfo m18022_MI;
struct t52;
#define m18022(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.IBeginDragHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t142_TI;
static void* m18022_RGCTXData[1] = 
{
	&t142_TI,
};
extern Il2CppGenericInst GenInst_t142_0_0_0;
Il2CppGenericContext m18022_GenericContext = { NULL, &GenInst_t142_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18022_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18022_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18021_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.IBeginDragHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t142_0_0_0;
Il2CppGenericContext m18021_GenericContext = { NULL, &GenInst_t142_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18021_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1857.h"
extern TypeInfo t1857_TI;
#include "t1857MD.h"
extern MethodInfo m9879_MI;
extern MethodInfo m18023_MI;
struct t52;
#define m18023(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.IBeginDragHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t3440_TI;
extern TypeInfo t1857_TI;
extern MethodInfo m9879_MI;
static void* m18023_RGCTXData[2] = 
{
	&t1857_TI,
	&m9879_MI,
};
extern Il2CppGenericInst GenInst_t142_0_0_0;
Il2CppGenericContext m18023_GenericContext = { NULL, &GenInst_t142_0_0_0 };
extern Il2CppType t3440_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18023_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3440_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18023_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m18024_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18024_MI;
extern MethodInfo m18025_MI;
struct t52;
#define m18025(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IInitializePotentialDragHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t141_TI;
extern Il2CppGenericInst GenInst_t141_0_0_0;
Il2CppGenericContext m18025_GenericContext = { NULL, &GenInst_t141_0_0_0 };
extern Il2CppType t141_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18025_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t141_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18024_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.IInitializePotentialDragHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t141_0_0_0;
Il2CppGenericContext m18024_GenericContext = { NULL, &GenInst_t141_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18024_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18026_MI;
struct t52;
#define m18026(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.IInitializePotentialDragHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t141_0_0_0;
Il2CppGenericContext m18026_GenericContext = { NULL, &GenInst_t141_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18026_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t141_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18024_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18024_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18027_MI;
struct t52;
#define m18027(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.IInitializePotentialDragHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t141_TI;
static void* m18027_RGCTXData[1] = 
{
	&t141_TI,
};
extern Il2CppGenericInst GenInst_t141_0_0_0;
Il2CppGenericContext m18027_GenericContext = { NULL, &GenInst_t141_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18027_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18027_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m18028_MI;
struct t52;
#define m18028(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.IInitializePotentialDragHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t141_0_0_0;
Il2CppGenericContext m18028_GenericContext = { NULL, &GenInst_t141_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18028_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18029_MI;
struct t52;
#define m18029(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.IInitializePotentialDragHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t141_0_0_0;
Il2CppGenericContext m18029_GenericContext = { NULL, &GenInst_t141_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18029_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t141_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18024_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18024_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18030_MI;
struct t52;
#define m18030(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.IInitializePotentialDragHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t141_TI;
static void* m18030_RGCTXData[1] = 
{
	&t141_TI,
};
extern Il2CppGenericInst GenInst_t141_0_0_0;
Il2CppGenericContext m18030_GenericContext = { NULL, &GenInst_t141_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18030_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18030_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18031_MI;
struct t52;
#define m18031(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.IInitializePotentialDragHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t141_0_0_0;
Il2CppGenericContext m18031_GenericContext = { NULL, &GenInst_t141_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18031_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t141_TI;
struct t52;
extern MethodInfo m18032_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18032_MI;
extern MethodInfo m18033_MI;
struct t52;
#define m18033(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.IInitializePotentialDragHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t141_TI;
static void* m18033_RGCTXData[1] = 
{
	&t141_TI,
};
extern Il2CppGenericInst GenInst_t141_0_0_0;
Il2CppGenericContext m18033_GenericContext = { NULL, &GenInst_t141_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18033_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18033_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18032_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.IInitializePotentialDragHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t141_0_0_0;
Il2CppGenericContext m18032_GenericContext = { NULL, &GenInst_t141_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18032_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1858.h"
extern TypeInfo t1858_TI;
#include "t1858MD.h"
extern MethodInfo m9884_MI;
extern MethodInfo m18034_MI;
struct t52;
#define m18034(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.IInitializePotentialDragHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t3441_TI;
extern TypeInfo t1858_TI;
extern MethodInfo m9884_MI;
static void* m18034_RGCTXData[2] = 
{
	&t1858_TI,
	&m9884_MI,
};
extern Il2CppGenericInst GenInst_t141_0_0_0;
Il2CppGenericContext m18034_GenericContext = { NULL, &GenInst_t141_0_0_0 };
extern Il2CppType t3441_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18034_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3441_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18034_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m18035_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18035_MI;
extern MethodInfo m18036_MI;
struct t52;
#define m18036(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IDragHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t143_TI;
extern Il2CppGenericInst GenInst_t143_0_0_0;
Il2CppGenericContext m18036_GenericContext = { NULL, &GenInst_t143_0_0_0 };
extern Il2CppType t143_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18036_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t143_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18035_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.IDragHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t143_0_0_0;
Il2CppGenericContext m18035_GenericContext = { NULL, &GenInst_t143_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18035_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18037_MI;
struct t52;
#define m18037(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.IDragHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t143_0_0_0;
Il2CppGenericContext m18037_GenericContext = { NULL, &GenInst_t143_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18037_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t143_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18035_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18035_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18038_MI;
struct t52;
#define m18038(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.IDragHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t143_TI;
static void* m18038_RGCTXData[1] = 
{
	&t143_TI,
};
extern Il2CppGenericInst GenInst_t143_0_0_0;
Il2CppGenericContext m18038_GenericContext = { NULL, &GenInst_t143_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18038_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18038_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m18039_MI;
struct t52;
#define m18039(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.IDragHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t143_0_0_0;
Il2CppGenericContext m18039_GenericContext = { NULL, &GenInst_t143_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18039_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18040_MI;
struct t52;
#define m18040(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.IDragHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t143_0_0_0;
Il2CppGenericContext m18040_GenericContext = { NULL, &GenInst_t143_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18040_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t143_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18035_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18035_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18041_MI;
struct t52;
#define m18041(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.IDragHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t143_TI;
static void* m18041_RGCTXData[1] = 
{
	&t143_TI,
};
extern Il2CppGenericInst GenInst_t143_0_0_0;
Il2CppGenericContext m18041_GenericContext = { NULL, &GenInst_t143_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18041_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18041_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18042_MI;
struct t52;
#define m18042(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.IDragHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t143_0_0_0;
Il2CppGenericContext m18042_GenericContext = { NULL, &GenInst_t143_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18042_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t143_TI;
struct t52;
extern MethodInfo m18043_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18043_MI;
extern MethodInfo m18044_MI;
struct t52;
#define m18044(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.IDragHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t143_TI;
static void* m18044_RGCTXData[1] = 
{
	&t143_TI,
};
extern Il2CppGenericInst GenInst_t143_0_0_0;
Il2CppGenericContext m18044_GenericContext = { NULL, &GenInst_t143_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18044_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18044_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18043_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.IDragHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t143_0_0_0;
Il2CppGenericContext m18043_GenericContext = { NULL, &GenInst_t143_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18043_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1859.h"
extern TypeInfo t1859_TI;
#include "t1859MD.h"
extern MethodInfo m9889_MI;
extern MethodInfo m18045_MI;
struct t52;
#define m18045(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.IDragHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t3442_TI;
extern TypeInfo t1859_TI;
extern MethodInfo m9889_MI;
static void* m18045_RGCTXData[2] = 
{
	&t1859_TI,
	&m9889_MI,
};
extern Il2CppGenericInst GenInst_t143_0_0_0;
Il2CppGenericContext m18045_GenericContext = { NULL, &GenInst_t143_0_0_0 };
extern Il2CppType t3442_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18045_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3442_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18045_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m18046_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18046_MI;
extern MethodInfo m18047_MI;
struct t52;
#define m18047(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IEndDragHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t144_TI;
extern Il2CppGenericInst GenInst_t144_0_0_0;
Il2CppGenericContext m18047_GenericContext = { NULL, &GenInst_t144_0_0_0 };
extern Il2CppType t144_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18047_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t144_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18046_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.IEndDragHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t144_0_0_0;
Il2CppGenericContext m18046_GenericContext = { NULL, &GenInst_t144_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18046_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18048_MI;
struct t52;
#define m18048(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.IEndDragHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t144_0_0_0;
Il2CppGenericContext m18048_GenericContext = { NULL, &GenInst_t144_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18048_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t144_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18046_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18046_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18049_MI;
struct t52;
#define m18049(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.IEndDragHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t144_TI;
static void* m18049_RGCTXData[1] = 
{
	&t144_TI,
};
extern Il2CppGenericInst GenInst_t144_0_0_0;
Il2CppGenericContext m18049_GenericContext = { NULL, &GenInst_t144_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18049_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18049_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m18050_MI;
struct t52;
#define m18050(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.IEndDragHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t144_0_0_0;
Il2CppGenericContext m18050_GenericContext = { NULL, &GenInst_t144_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18050_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18051_MI;
struct t52;
#define m18051(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.IEndDragHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t144_0_0_0;
Il2CppGenericContext m18051_GenericContext = { NULL, &GenInst_t144_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18051_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t144_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18046_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18046_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18052_MI;
struct t52;
#define m18052(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.IEndDragHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t144_TI;
static void* m18052_RGCTXData[1] = 
{
	&t144_TI,
};
extern Il2CppGenericInst GenInst_t144_0_0_0;
Il2CppGenericContext m18052_GenericContext = { NULL, &GenInst_t144_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18052_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18052_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18053_MI;
struct t52;
#define m18053(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.IEndDragHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t144_0_0_0;
Il2CppGenericContext m18053_GenericContext = { NULL, &GenInst_t144_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18053_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t144_TI;
struct t52;
extern MethodInfo m18054_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18054_MI;
extern MethodInfo m18055_MI;
struct t52;
#define m18055(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.IEndDragHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t144_TI;
static void* m18055_RGCTXData[1] = 
{
	&t144_TI,
};
extern Il2CppGenericInst GenInst_t144_0_0_0;
Il2CppGenericContext m18055_GenericContext = { NULL, &GenInst_t144_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18055_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18055_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18054_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.IEndDragHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t144_0_0_0;
Il2CppGenericContext m18054_GenericContext = { NULL, &GenInst_t144_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18054_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1860.h"
extern TypeInfo t1860_TI;
#include "t1860MD.h"
extern MethodInfo m9894_MI;
extern MethodInfo m18056_MI;
struct t52;
#define m18056(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.IEndDragHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t3443_TI;
extern TypeInfo t1860_TI;
extern MethodInfo m9894_MI;
static void* m18056_RGCTXData[2] = 
{
	&t1860_TI,
	&m9894_MI,
};
extern Il2CppGenericInst GenInst_t144_0_0_0;
Il2CppGenericContext m18056_GenericContext = { NULL, &GenInst_t144_0_0_0 };
extern Il2CppType t3443_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18056_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3443_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18056_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m18057_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18057_MI;
extern MethodInfo m18058_MI;
struct t52;
#define m18058(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IDropHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t145_TI;
extern Il2CppGenericInst GenInst_t145_0_0_0;
Il2CppGenericContext m18058_GenericContext = { NULL, &GenInst_t145_0_0_0 };
extern Il2CppType t145_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18058_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t145_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18057_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.IDropHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t145_0_0_0;
Il2CppGenericContext m18057_GenericContext = { NULL, &GenInst_t145_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18057_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18059_MI;
struct t52;
#define m18059(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.IDropHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t145_0_0_0;
Il2CppGenericContext m18059_GenericContext = { NULL, &GenInst_t145_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18059_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t145_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18057_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18057_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18060_MI;
struct t52;
#define m18060(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.IDropHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t145_TI;
static void* m18060_RGCTXData[1] = 
{
	&t145_TI,
};
extern Il2CppGenericInst GenInst_t145_0_0_0;
Il2CppGenericContext m18060_GenericContext = { NULL, &GenInst_t145_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18060_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18060_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m18061_MI;
struct t52;
#define m18061(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.IDropHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t145_0_0_0;
Il2CppGenericContext m18061_GenericContext = { NULL, &GenInst_t145_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18061_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18062_MI;
struct t52;
#define m18062(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.IDropHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t145_0_0_0;
Il2CppGenericContext m18062_GenericContext = { NULL, &GenInst_t145_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18062_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t145_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18057_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18057_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18063_MI;
struct t52;
#define m18063(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.IDropHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t145_TI;
static void* m18063_RGCTXData[1] = 
{
	&t145_TI,
};
extern Il2CppGenericInst GenInst_t145_0_0_0;
Il2CppGenericContext m18063_GenericContext = { NULL, &GenInst_t145_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18063_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18063_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18064_MI;
struct t52;
#define m18064(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.IDropHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t145_0_0_0;
Il2CppGenericContext m18064_GenericContext = { NULL, &GenInst_t145_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18064_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t145_TI;
struct t52;
extern MethodInfo m18065_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18065_MI;
extern MethodInfo m18066_MI;
struct t52;
#define m18066(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.IDropHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t145_TI;
static void* m18066_RGCTXData[1] = 
{
	&t145_TI,
};
extern Il2CppGenericInst GenInst_t145_0_0_0;
Il2CppGenericContext m18066_GenericContext = { NULL, &GenInst_t145_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18066_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18066_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18065_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.IDropHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t145_0_0_0;
Il2CppGenericContext m18065_GenericContext = { NULL, &GenInst_t145_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18065_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1861.h"
extern TypeInfo t1861_TI;
#include "t1861MD.h"
extern MethodInfo m9899_MI;
extern MethodInfo m18067_MI;
struct t52;
#define m18067(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.IDropHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t3444_TI;
extern TypeInfo t1861_TI;
extern MethodInfo m9899_MI;
static void* m18067_RGCTXData[2] = 
{
	&t1861_TI,
	&m9899_MI,
};
extern Il2CppGenericInst GenInst_t145_0_0_0;
Il2CppGenericContext m18067_GenericContext = { NULL, &GenInst_t145_0_0_0 };
extern Il2CppType t3444_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18067_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3444_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18067_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m18068_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18068_MI;
extern MethodInfo m18069_MI;
struct t52;
#define m18069(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IScrollHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t146_TI;
extern Il2CppGenericInst GenInst_t146_0_0_0;
Il2CppGenericContext m18069_GenericContext = { NULL, &GenInst_t146_0_0_0 };
extern Il2CppType t146_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18069_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t146_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18068_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.IScrollHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t146_0_0_0;
Il2CppGenericContext m18068_GenericContext = { NULL, &GenInst_t146_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18068_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18070_MI;
struct t52;
#define m18070(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.IScrollHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t146_0_0_0;
Il2CppGenericContext m18070_GenericContext = { NULL, &GenInst_t146_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18070_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t146_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18068_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18068_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18071_MI;
struct t52;
#define m18071(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.IScrollHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t146_TI;
static void* m18071_RGCTXData[1] = 
{
	&t146_TI,
};
extern Il2CppGenericInst GenInst_t146_0_0_0;
Il2CppGenericContext m18071_GenericContext = { NULL, &GenInst_t146_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18071_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18071_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m18072_MI;
struct t52;
#define m18072(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.IScrollHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t146_0_0_0;
Il2CppGenericContext m18072_GenericContext = { NULL, &GenInst_t146_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18072_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18073_MI;
struct t52;
#define m18073(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.IScrollHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t146_0_0_0;
Il2CppGenericContext m18073_GenericContext = { NULL, &GenInst_t146_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18073_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t146_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18068_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18068_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18074_MI;
struct t52;
#define m18074(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.IScrollHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t146_TI;
static void* m18074_RGCTXData[1] = 
{
	&t146_TI,
};
extern Il2CppGenericInst GenInst_t146_0_0_0;
Il2CppGenericContext m18074_GenericContext = { NULL, &GenInst_t146_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18074_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18074_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18075_MI;
struct t52;
#define m18075(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.IScrollHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t146_0_0_0;
Il2CppGenericContext m18075_GenericContext = { NULL, &GenInst_t146_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18075_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t146_TI;
struct t52;
extern MethodInfo m18076_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18076_MI;
extern MethodInfo m18077_MI;
struct t52;
#define m18077(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.IScrollHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t146_TI;
static void* m18077_RGCTXData[1] = 
{
	&t146_TI,
};
extern Il2CppGenericInst GenInst_t146_0_0_0;
Il2CppGenericContext m18077_GenericContext = { NULL, &GenInst_t146_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18077_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18077_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18076_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.IScrollHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t146_0_0_0;
Il2CppGenericContext m18076_GenericContext = { NULL, &GenInst_t146_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18076_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1862.h"
extern TypeInfo t1862_TI;
#include "t1862MD.h"
extern MethodInfo m9904_MI;
extern MethodInfo m18078_MI;
struct t52;
#define m18078(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.IScrollHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t3445_TI;
extern TypeInfo t1862_TI;
extern MethodInfo m9904_MI;
static void* m18078_RGCTXData[2] = 
{
	&t1862_TI,
	&m9904_MI,
};
extern Il2CppGenericInst GenInst_t146_0_0_0;
Il2CppGenericContext m18078_GenericContext = { NULL, &GenInst_t146_0_0_0 };
extern Il2CppType t3445_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18078_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3445_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18078_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m18079_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18079_MI;
extern MethodInfo m18080_MI;
struct t52;
#define m18080(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IUpdateSelectedHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t147_TI;
extern Il2CppGenericInst GenInst_t147_0_0_0;
Il2CppGenericContext m18080_GenericContext = { NULL, &GenInst_t147_0_0_0 };
extern Il2CppType t147_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18080_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t147_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18079_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.IUpdateSelectedHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t147_0_0_0;
Il2CppGenericContext m18079_GenericContext = { NULL, &GenInst_t147_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18079_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18081_MI;
struct t52;
#define m18081(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.IUpdateSelectedHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t147_0_0_0;
Il2CppGenericContext m18081_GenericContext = { NULL, &GenInst_t147_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18081_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t147_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18079_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18079_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18082_MI;
struct t52;
#define m18082(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.IUpdateSelectedHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t147_TI;
static void* m18082_RGCTXData[1] = 
{
	&t147_TI,
};
extern Il2CppGenericInst GenInst_t147_0_0_0;
Il2CppGenericContext m18082_GenericContext = { NULL, &GenInst_t147_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18082_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18082_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m18083_MI;
struct t52;
#define m18083(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.IUpdateSelectedHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t147_0_0_0;
Il2CppGenericContext m18083_GenericContext = { NULL, &GenInst_t147_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18083_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18084_MI;
struct t52;
#define m18084(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.IUpdateSelectedHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t147_0_0_0;
Il2CppGenericContext m18084_GenericContext = { NULL, &GenInst_t147_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18084_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t147_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18079_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18079_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18085_MI;
struct t52;
#define m18085(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.IUpdateSelectedHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t147_TI;
static void* m18085_RGCTXData[1] = 
{
	&t147_TI,
};
extern Il2CppGenericInst GenInst_t147_0_0_0;
Il2CppGenericContext m18085_GenericContext = { NULL, &GenInst_t147_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18085_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18085_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18086_MI;
struct t52;
#define m18086(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.IUpdateSelectedHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t147_0_0_0;
Il2CppGenericContext m18086_GenericContext = { NULL, &GenInst_t147_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18086_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t147_TI;
struct t52;
extern MethodInfo m18087_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18087_MI;
extern MethodInfo m18088_MI;
struct t52;
#define m18088(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.IUpdateSelectedHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t147_TI;
static void* m18088_RGCTXData[1] = 
{
	&t147_TI,
};
extern Il2CppGenericInst GenInst_t147_0_0_0;
Il2CppGenericContext m18088_GenericContext = { NULL, &GenInst_t147_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18088_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18088_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18087_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.IUpdateSelectedHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t147_0_0_0;
Il2CppGenericContext m18087_GenericContext = { NULL, &GenInst_t147_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18087_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1863.h"
extern TypeInfo t1863_TI;
#include "t1863MD.h"
extern MethodInfo m9909_MI;
extern MethodInfo m18089_MI;
struct t52;
#define m18089(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.IUpdateSelectedHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t3446_TI;
extern TypeInfo t1863_TI;
extern MethodInfo m9909_MI;
static void* m18089_RGCTXData[2] = 
{
	&t1863_TI,
	&m9909_MI,
};
extern Il2CppGenericInst GenInst_t147_0_0_0;
Il2CppGenericContext m18089_GenericContext = { NULL, &GenInst_t147_0_0_0 };
extern Il2CppType t3446_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18089_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3446_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18089_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m18090_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18090_MI;
extern MethodInfo m18091_MI;
struct t52;
#define m18091(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.ISelectHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t148_TI;
extern Il2CppGenericInst GenInst_t148_0_0_0;
Il2CppGenericContext m18091_GenericContext = { NULL, &GenInst_t148_0_0_0 };
extern Il2CppType t148_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18091_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t148_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18090_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.ISelectHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t148_0_0_0;
Il2CppGenericContext m18090_GenericContext = { NULL, &GenInst_t148_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18090_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18092_MI;
struct t52;
#define m18092(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.ISelectHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t148_0_0_0;
Il2CppGenericContext m18092_GenericContext = { NULL, &GenInst_t148_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18092_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t148_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18090_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18090_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18093_MI;
struct t52;
#define m18093(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.ISelectHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t148_TI;
static void* m18093_RGCTXData[1] = 
{
	&t148_TI,
};
extern Il2CppGenericInst GenInst_t148_0_0_0;
Il2CppGenericContext m18093_GenericContext = { NULL, &GenInst_t148_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18093_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18093_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m18094_MI;
struct t52;
#define m18094(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.ISelectHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t148_0_0_0;
Il2CppGenericContext m18094_GenericContext = { NULL, &GenInst_t148_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18094_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18095_MI;
struct t52;
#define m18095(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.ISelectHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t148_0_0_0;
Il2CppGenericContext m18095_GenericContext = { NULL, &GenInst_t148_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18095_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t148_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18090_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18090_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18096_MI;
struct t52;
#define m18096(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.ISelectHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t148_TI;
static void* m18096_RGCTXData[1] = 
{
	&t148_TI,
};
extern Il2CppGenericInst GenInst_t148_0_0_0;
Il2CppGenericContext m18096_GenericContext = { NULL, &GenInst_t148_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18096_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18096_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18097_MI;
struct t52;
#define m18097(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.ISelectHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t148_0_0_0;
Il2CppGenericContext m18097_GenericContext = { NULL, &GenInst_t148_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18097_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t148_TI;
struct t52;
extern MethodInfo m18098_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18098_MI;
extern MethodInfo m18099_MI;
struct t52;
#define m18099(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.ISelectHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t148_TI;
static void* m18099_RGCTXData[1] = 
{
	&t148_TI,
};
extern Il2CppGenericInst GenInst_t148_0_0_0;
Il2CppGenericContext m18099_GenericContext = { NULL, &GenInst_t148_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18099_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18099_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18098_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.ISelectHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t148_0_0_0;
Il2CppGenericContext m18098_GenericContext = { NULL, &GenInst_t148_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18098_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1864.h"
extern TypeInfo t1864_TI;
#include "t1864MD.h"
extern MethodInfo m9914_MI;
extern MethodInfo m18100_MI;
struct t52;
#define m18100(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.ISelectHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t3447_TI;
extern TypeInfo t1864_TI;
extern MethodInfo m9914_MI;
static void* m18100_RGCTXData[2] = 
{
	&t1864_TI,
	&m9914_MI,
};
extern Il2CppGenericInst GenInst_t148_0_0_0;
Il2CppGenericContext m18100_GenericContext = { NULL, &GenInst_t148_0_0_0 };
extern Il2CppType t3447_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18100_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3447_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18100_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m18101_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18101_MI;
extern MethodInfo m18102_MI;
struct t52;
#define m18102(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IDeselectHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t149_TI;
extern Il2CppGenericInst GenInst_t149_0_0_0;
Il2CppGenericContext m18102_GenericContext = { NULL, &GenInst_t149_0_0_0 };
extern Il2CppType t149_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18102_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t149_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18101_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.IDeselectHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t149_0_0_0;
Il2CppGenericContext m18101_GenericContext = { NULL, &GenInst_t149_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18101_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18103_MI;
struct t52;
#define m18103(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.IDeselectHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t149_0_0_0;
Il2CppGenericContext m18103_GenericContext = { NULL, &GenInst_t149_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18103_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t149_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18101_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18101_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18104_MI;
struct t52;
#define m18104(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.IDeselectHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t149_TI;
static void* m18104_RGCTXData[1] = 
{
	&t149_TI,
};
extern Il2CppGenericInst GenInst_t149_0_0_0;
Il2CppGenericContext m18104_GenericContext = { NULL, &GenInst_t149_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18104_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18104_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m18105_MI;
struct t52;
#define m18105(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.IDeselectHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t149_0_0_0;
Il2CppGenericContext m18105_GenericContext = { NULL, &GenInst_t149_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18105_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18106_MI;
struct t52;
#define m18106(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.IDeselectHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t149_0_0_0;
Il2CppGenericContext m18106_GenericContext = { NULL, &GenInst_t149_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18106_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t149_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18101_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18101_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18107_MI;
struct t52;
#define m18107(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.IDeselectHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t149_TI;
static void* m18107_RGCTXData[1] = 
{
	&t149_TI,
};
extern Il2CppGenericInst GenInst_t149_0_0_0;
Il2CppGenericContext m18107_GenericContext = { NULL, &GenInst_t149_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18107_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18107_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18108_MI;
struct t52;
#define m18108(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.IDeselectHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t149_0_0_0;
Il2CppGenericContext m18108_GenericContext = { NULL, &GenInst_t149_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18108_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t149_TI;
struct t52;
extern MethodInfo m18109_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18109_MI;
extern MethodInfo m18110_MI;
struct t52;
#define m18110(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.IDeselectHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t149_TI;
static void* m18110_RGCTXData[1] = 
{
	&t149_TI,
};
extern Il2CppGenericInst GenInst_t149_0_0_0;
Il2CppGenericContext m18110_GenericContext = { NULL, &GenInst_t149_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18110_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18110_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18109_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.IDeselectHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t149_0_0_0;
Il2CppGenericContext m18109_GenericContext = { NULL, &GenInst_t149_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18109_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1865.h"
extern TypeInfo t1865_TI;
#include "t1865MD.h"
extern MethodInfo m9919_MI;
extern MethodInfo m18111_MI;
struct t52;
#define m18111(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.IDeselectHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t3448_TI;
extern TypeInfo t1865_TI;
extern MethodInfo m9919_MI;
static void* m18111_RGCTXData[2] = 
{
	&t1865_TI,
	&m9919_MI,
};
extern Il2CppGenericInst GenInst_t149_0_0_0;
Il2CppGenericContext m18111_GenericContext = { NULL, &GenInst_t149_0_0_0 };
extern Il2CppType t3448_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18111_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3448_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18111_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m18112_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18112_MI;
extern MethodInfo m18113_MI;
struct t52;
#define m18113(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IMoveHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t150_TI;
extern Il2CppGenericInst GenInst_t150_0_0_0;
Il2CppGenericContext m18113_GenericContext = { NULL, &GenInst_t150_0_0_0 };
extern Il2CppType t150_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18113_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t150_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18112_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.IMoveHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t150_0_0_0;
Il2CppGenericContext m18112_GenericContext = { NULL, &GenInst_t150_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18112_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18114_MI;
struct t52;
#define m18114(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.IMoveHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t150_0_0_0;
Il2CppGenericContext m18114_GenericContext = { NULL, &GenInst_t150_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18114_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t150_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18112_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18112_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18115_MI;
struct t52;
#define m18115(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.IMoveHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t150_TI;
static void* m18115_RGCTXData[1] = 
{
	&t150_TI,
};
extern Il2CppGenericInst GenInst_t150_0_0_0;
Il2CppGenericContext m18115_GenericContext = { NULL, &GenInst_t150_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18115_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18115_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m18116_MI;
struct t52;
#define m18116(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.IMoveHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t150_0_0_0;
Il2CppGenericContext m18116_GenericContext = { NULL, &GenInst_t150_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18116_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18117_MI;
struct t52;
#define m18117(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.IMoveHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t150_0_0_0;
Il2CppGenericContext m18117_GenericContext = { NULL, &GenInst_t150_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18117_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t150_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18112_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18112_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18118_MI;
struct t52;
#define m18118(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.IMoveHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t150_TI;
static void* m18118_RGCTXData[1] = 
{
	&t150_TI,
};
extern Il2CppGenericInst GenInst_t150_0_0_0;
Il2CppGenericContext m18118_GenericContext = { NULL, &GenInst_t150_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18118_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18118_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18119_MI;
struct t52;
#define m18119(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.IMoveHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t150_0_0_0;
Il2CppGenericContext m18119_GenericContext = { NULL, &GenInst_t150_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18119_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t150_TI;
struct t52;
extern MethodInfo m18120_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18120_MI;
extern MethodInfo m18121_MI;
struct t52;
#define m18121(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.IMoveHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t150_TI;
static void* m18121_RGCTXData[1] = 
{
	&t150_TI,
};
extern Il2CppGenericInst GenInst_t150_0_0_0;
Il2CppGenericContext m18121_GenericContext = { NULL, &GenInst_t150_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18121_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18121_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18120_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.IMoveHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t150_0_0_0;
Il2CppGenericContext m18120_GenericContext = { NULL, &GenInst_t150_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18120_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1866.h"
extern TypeInfo t1866_TI;
#include "t1866MD.h"
extern MethodInfo m9924_MI;
extern MethodInfo m18122_MI;
struct t52;
#define m18122(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.IMoveHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t3449_TI;
extern TypeInfo t1866_TI;
extern MethodInfo m9924_MI;
static void* m18122_RGCTXData[2] = 
{
	&t1866_TI,
	&m9924_MI,
};
extern Il2CppGenericInst GenInst_t150_0_0_0;
Il2CppGenericContext m18122_GenericContext = { NULL, &GenInst_t150_0_0_0 };
extern Il2CppType t3449_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18122_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3449_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18122_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m18123_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18123_MI;
extern MethodInfo m18124_MI;
struct t52;
#define m18124(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.ISubmitHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t151_TI;
extern Il2CppGenericInst GenInst_t151_0_0_0;
Il2CppGenericContext m18124_GenericContext = { NULL, &GenInst_t151_0_0_0 };
extern Il2CppType t151_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18124_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t151_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18123_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.ISubmitHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t151_0_0_0;
Il2CppGenericContext m18123_GenericContext = { NULL, &GenInst_t151_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18123_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18125_MI;
struct t52;
#define m18125(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.ISubmitHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t151_0_0_0;
Il2CppGenericContext m18125_GenericContext = { NULL, &GenInst_t151_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18125_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t151_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18123_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18123_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18126_MI;
struct t52;
#define m18126(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.ISubmitHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t151_TI;
static void* m18126_RGCTXData[1] = 
{
	&t151_TI,
};
extern Il2CppGenericInst GenInst_t151_0_0_0;
Il2CppGenericContext m18126_GenericContext = { NULL, &GenInst_t151_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18126_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18126_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m18127_MI;
struct t52;
#define m18127(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.ISubmitHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t151_0_0_0;
Il2CppGenericContext m18127_GenericContext = { NULL, &GenInst_t151_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18127_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18128_MI;
struct t52;
#define m18128(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.ISubmitHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t151_0_0_0;
Il2CppGenericContext m18128_GenericContext = { NULL, &GenInst_t151_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18128_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t151_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18123_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18123_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18129_MI;
struct t52;
#define m18129(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.ISubmitHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t151_TI;
static void* m18129_RGCTXData[1] = 
{
	&t151_TI,
};
extern Il2CppGenericInst GenInst_t151_0_0_0;
Il2CppGenericContext m18129_GenericContext = { NULL, &GenInst_t151_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18129_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18129_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18130_MI;
struct t52;
#define m18130(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.ISubmitHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t151_0_0_0;
Il2CppGenericContext m18130_GenericContext = { NULL, &GenInst_t151_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18130_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t151_TI;
struct t52;
extern MethodInfo m18131_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18131_MI;
extern MethodInfo m18132_MI;
struct t52;
#define m18132(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.ISubmitHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t151_TI;
static void* m18132_RGCTXData[1] = 
{
	&t151_TI,
};
extern Il2CppGenericInst GenInst_t151_0_0_0;
Il2CppGenericContext m18132_GenericContext = { NULL, &GenInst_t151_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18132_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18132_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18131_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.ISubmitHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t151_0_0_0;
Il2CppGenericContext m18131_GenericContext = { NULL, &GenInst_t151_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18131_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1867.h"
extern TypeInfo t1867_TI;
#include "t1867MD.h"
extern MethodInfo m9929_MI;
extern MethodInfo m18133_MI;
struct t52;
#define m18133(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.ISubmitHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t3450_TI;
extern TypeInfo t1867_TI;
extern MethodInfo m9929_MI;
static void* m18133_RGCTXData[2] = 
{
	&t1867_TI,
	&m9929_MI,
};
extern Il2CppGenericInst GenInst_t151_0_0_0;
Il2CppGenericContext m18133_GenericContext = { NULL, &GenInst_t151_0_0_0 };
extern Il2CppType t3450_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18133_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3450_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18133_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m18134_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18134_MI;
extern MethodInfo m18135_MI;
struct t52;
#define m18135(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.ICancelHandler>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t152_TI;
extern Il2CppGenericInst GenInst_t152_0_0_0;
Il2CppGenericContext m18135_GenericContext = { NULL, &GenInst_t152_0_0_0 };
extern Il2CppType t152_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18135_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t152_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18134_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.ICancelHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t152_0_0_0;
Il2CppGenericContext m18134_GenericContext = { NULL, &GenInst_t152_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18134_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18136_MI;
struct t52;
#define m18136(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.ICancelHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t152_0_0_0;
Il2CppGenericContext m18136_GenericContext = { NULL, &GenInst_t152_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18136_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t152_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18134_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18134_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18137_MI;
struct t52;
#define m18137(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.ICancelHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t152_TI;
static void* m18137_RGCTXData[1] = 
{
	&t152_TI,
};
extern Il2CppGenericInst GenInst_t152_0_0_0;
Il2CppGenericContext m18137_GenericContext = { NULL, &GenInst_t152_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18137_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18137_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m18138_MI;
struct t52;
#define m18138(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.ICancelHandler>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t152_0_0_0;
Il2CppGenericContext m18138_GenericContext = { NULL, &GenInst_t152_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18138_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18139_MI;
struct t52;
#define m18139(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.ICancelHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t152_0_0_0;
Il2CppGenericContext m18139_GenericContext = { NULL, &GenInst_t152_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18139_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t152_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18134_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18134_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18140_MI;
struct t52;
#define m18140(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.ICancelHandler>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t152_TI;
static void* m18140_RGCTXData[1] = 
{
	&t152_TI,
};
extern Il2CppGenericInst GenInst_t152_0_0_0;
Il2CppGenericContext m18140_GenericContext = { NULL, &GenInst_t152_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18140_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18140_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18141_MI;
struct t52;
#define m18141(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.ICancelHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t152_0_0_0;
Il2CppGenericContext m18141_GenericContext = { NULL, &GenInst_t152_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18141_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t152_TI;
struct t52;
extern MethodInfo m18142_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18142_MI;
extern MethodInfo m18143_MI;
struct t52;
#define m18143(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.ICancelHandler>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t152_TI;
static void* m18143_RGCTXData[1] = 
{
	&t152_TI,
};
extern Il2CppGenericInst GenInst_t152_0_0_0;
Il2CppGenericContext m18143_GenericContext = { NULL, &GenInst_t152_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18143_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18143_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18142_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.ICancelHandler>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t152_0_0_0;
Il2CppGenericContext m18142_GenericContext = { NULL, &GenInst_t152_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18142_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1868.h"
extern TypeInfo t1868_TI;
#include "t1868MD.h"
extern MethodInfo m9934_MI;
extern MethodInfo m18144_MI;
struct t52;
#define m18144(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.ICancelHandler>()
extern TypeInfo t52_TI;
extern TypeInfo t3451_TI;
extern TypeInfo t1868_TI;
extern MethodInfo m9934_MI;
static void* m18144_RGCTXData[2] = 
{
	&t1868_TI,
	&m9934_MI,
};
extern Il2CppGenericInst GenInst_t152_0_0_0;
Il2CppGenericContext m18144_GenericContext = { NULL, &GenInst_t152_0_0_0 };
extern Il2CppType t3451_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18144_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t3451_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18144_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t108_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern Il2CppType t108_0_0_0;
extern MethodInfo m1555_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m2583_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m18145_MI;
struct t572;
#define m18145(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.EventSystems.EventTrigger>(System.Object)
extern TypeInfo t572_TI;
extern TypeInfo t53_TI;
extern TypeInfo t108_TI;
extern Il2CppType t108_0_0_0;
static void* m18145_RGCTXData[2] = 
{
	&t108_TI,
	(void*)&t108_0_0_0,
};
extern Il2CppGenericInst GenInst_t108_0_0_0;
Il2CppGenericContext m18145_GenericContext = { NULL, &GenInst_t108_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t572_TI;
MethodInfo m18145_MI = 
{
	"ThrowOnInvalidArg", (methodPointerType)&m17212_gshared, &t572_TI, &t53_0_0_0, NULL, NULL, NULL, 148, 0, 255, 0, false, true, 0, m18145_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t106.h"
extern TypeInfo t88_TI;
struct t52;
extern MethodInfo m18146_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18146_MI;
extern MethodInfo m18147_MI;
struct t52;
#define m18147(__this, p0, method) (t106 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
// Metadata Definition T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.EventTrigger/Entry>(System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t106_TI;
extern Il2CppGenericInst GenInst_t106_0_0_0;
Il2CppGenericContext m18147_GenericContext = { NULL, &GenInst_t106_0_0_0 };
extern Il2CppType t106_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18147_MI = 
{
	"InternalArray__get_Item", (methodPointerType)&m17147_gshared, &t52_TI, &t106_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18146_MI;
// Metadata Definition System.Void System.Array::GetGenericValueImpl<UnityEngine.EventSystems.EventTrigger/Entry>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t106_0_0_0;
Il2CppGenericContext m18146_GenericContext = { NULL, &GenInst_t106_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18146_MI = 
{
	"GetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18148_MI;
struct t52;
#define m18148(__this, p0, method) (void)m17151_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.EventSystems.EventTrigger/Entry>(T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t106_0_0_0;
Il2CppGenericContext m18148_GenericContext = { NULL, &GenInst_t106_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18148_MI = 
{
	"InternalArray__ICollection_Add", (methodPointerType)&m17151_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t106_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18146_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18146_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18149_MI;
struct t52;
#define m18149(__this, p0, method) (bool)m17153_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.EventSystems.EventTrigger/Entry>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern TypeInfo t106_TI;
static void* m18149_RGCTXData[1] = 
{
	&t106_TI,
};
extern Il2CppGenericInst GenInst_t106_0_0_0;
Il2CppGenericContext m18149_GenericContext = { NULL, &GenInst_t106_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18149_MI = 
{
	"InternalArray__ICollection_Contains", (methodPointerType)&m17153_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18149_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t1315_TI;
extern TypeInfo t348_TI;
extern TypeInfo t88_TI;
extern MethodInfo m3066_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m18150_MI;
struct t52;
#define m18150(__this, p0, p1, method) (void)m17155_gshared((t52 *)__this, (t350*)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.EventSystems.EventTrigger/Entry>(T[],System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t106_0_0_0;
Il2CppGenericContext m18150_GenericContext = { NULL, &GenInst_t106_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18150_MI = 
{
	"InternalArray__ICollection_CopyTo", (methodPointerType)&m17155_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18151_MI;
struct t52;
#define m18151(__this, p0, method) (bool)m17156_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.EventSystems.EventTrigger/Entry>(T)
extern TypeInfo t52_TI;
extern TypeInfo t55_TI;
extern Il2CppGenericInst GenInst_t106_0_0_0;
Il2CppGenericContext m18151_GenericContext = { NULL, &GenInst_t106_0_0_0 };
extern Il2CppType t55_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18151_MI = 
{
	"InternalArray__ICollection_Remove", (methodPointerType)&m17156_gshared, &t52_TI, &t55_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1315_TI;
extern TypeInfo t106_TI;
extern TypeInfo t7_TI;
extern TypeInfo t55_TI;
extern MethodInfo m18146_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7242_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18146_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m121_MI;
extern MethodInfo m18152_MI;
struct t52;
#define m18152(__this, p0, method) (int32_t)m17157_gshared((t52 *)__this, (t7 *)p0, method)
// Metadata Definition System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.EventSystems.EventTrigger/Entry>(T)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern TypeInfo t106_TI;
static void* m18152_RGCTXData[1] = 
{
	&t106_TI,
};
extern Il2CppGenericInst GenInst_t106_0_0_0;
Il2CppGenericContext m18152_GenericContext = { NULL, &GenInst_t106_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18152_MI = 
{
	"InternalArray__IndexOf", (methodPointerType)&m17157_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18152_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t62_TI;
extern MethodInfo m7125_MI;
extern MethodInfo m18153_MI;
struct t52;
#define m18153(__this, p0, p1, method) (void)m17158_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__Insert<UnityEngine.EventSystems.EventTrigger/Entry>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t106_0_0_0;
Il2CppGenericContext m18153_GenericContext = { NULL, &GenInst_t106_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18153_MI = 
{
	"InternalArray__Insert", (methodPointerType)&m17158_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t106_TI;
struct t52;
extern MethodInfo m18154_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m18154_MI;
extern MethodInfo m18155_MI;
struct t52;
#define m18155(__this, p0, p1, method) (void)m17160_gshared((t52 *)__this, (int32_t)p0, (t7 *)p1, method)
// Metadata Definition System.Void System.Array::InternalArray__set_Item<UnityEngine.EventSystems.EventTrigger/Entry>(System.Int32,T)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t106_TI;
static void* m18155_RGCTXData[1] = 
{
	&t106_TI,
};
extern Il2CppGenericInst GenInst_t106_0_0_0;
Il2CppGenericContext m18155_GenericContext = { NULL, &GenInst_t106_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18155_MI = 
{
	"InternalArray__set_Item", (methodPointerType)&m17160_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18155_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m18154_MI;
// Metadata Definition System.Void System.Array::SetGenericValueImpl<UnityEngine.EventSystems.EventTrigger/Entry>(System.Int32,T&)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern Il2CppGenericInst GenInst_t106_0_0_0;
Il2CppGenericContext m18154_GenericContext = { NULL, &GenInst_t106_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18154_MI = 
{
	"SetGenericValueImpl", NULL, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 131, 4096, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1880.h"
extern TypeInfo t1880_TI;
#include "t1880MD.h"
extern MethodInfo m9996_MI;
extern MethodInfo m18156_MI;
struct t52;
#define m18156(__this, method) (t7*)m17161_gshared((t52 *)__this, method)
// Metadata Definition System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.EventSystems.EventTrigger/Entry>()
extern TypeInfo t52_TI;
extern TypeInfo t1873_TI;
extern TypeInfo t1880_TI;
extern MethodInfo m9996_MI;
static void* m18156_RGCTXData[2] = 
{
	&t1880_TI,
	&m9996_MI,
};
extern Il2CppGenericInst GenInst_t106_0_0_0;
Il2CppGenericContext m18156_GenericContext = { NULL, &GenInst_t106_0_0_0 };
extern Il2CppType t1873_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18156_MI = 
{
	"InternalArray__IEnumerable_GetEnumerator", (methodPointerType)&m17161_gshared, &t52_TI, &t1873_0_0_0, NULL, NULL, NULL, 131, 0, 255, 0, false, true, 0, m18156_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m18157(__this, p0, p1, p2, method) (void)m17411_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, (int32_t)p2, method)
extern MethodInfo m18157_MI;
extern MethodInfo m18157_MI;
extern MethodInfo m18158_MI;
struct t52;
#define m18158(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
// Metadata Definition System.Void System.Array::Resize<UnityEngine.EventSystems.EventTrigger/Entry>(T[]&,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m18157_MI;
static void* m18158_RGCTXData[1] = 
{
	&m18157_MI,
};
extern Il2CppGenericInst GenInst_t106_0_0_0;
Il2CppGenericContext m18158_GenericContext = { NULL, &GenInst_t106_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18158_MI = 
{
	"Resize", (methodPointerType)&m17412_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m18158_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t88_TI;
extern TypeInfo t1872_TI;
extern TypeInfo t106_TI;
extern MethodInfo m216_MI;
extern MethodInfo m7029_MI;
extern MethodInfo m3877_MI;
extern MethodInfo m18157_MI;
// Metadata Definition System.Void System.Array::Resize<UnityEngine.EventSystems.EventTrigger/Entry>(T[]&,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1872_TI;
static void* m18157_RGCTXData[1] = 
{
	&t1872_TI,
};
extern Il2CppGenericInst GenInst_t106_0_0_0;
Il2CppGenericContext m18157_GenericContext = { NULL, &GenInst_t106_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18157_MI = 
{
	"Resize", (methodPointerType)&m17411_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 147, 0, 255, 0, false, true, 0, m18157_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

#include "t1883.h"
extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t1883_TI;
extern TypeInfo t55_TI;
extern TypeInfo t106_TI;
#include "t1883MD.h"
extern MethodInfo m3066_MI;
extern MethodInfo m3835_MI;
extern MethodInfo m3847_MI;
extern MethodInfo m216_MI;
extern MethodInfo m10077_MI;
extern MethodInfo m18159_MI;
extern MethodInfo m18160_MI;
struct t52;
#define m18160(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
// Metadata Definition System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.EventTrigger/Entry>(T[],T,System.Int32,System.Int32)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m10077_MI;
extern MethodInfo m18159_MI;
static void* m18160_RGCTXData[2] = 
{
	&m10077_MI,
	&m18159_MI,
};
extern Il2CppGenericInst GenInst_t106_0_0_0;
Il2CppGenericContext m18160_GenericContext = { NULL, &GenInst_t106_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18160_MI = 
{
	"IndexOf", (methodPointerType)&m7824_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m18160_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
struct t52;
#define m18161(__this, p0, p1, p2, p3, p4, method) (void)m17480_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m18161_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m18161_MI;
extern MethodInfo m18162_MI;
struct t52;
#define m18162(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
// Metadata Definition System.Void System.Array::Sort<UnityEngine.EventSystems.EventTrigger/Entry>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m18161_MI;
static void* m18162_RGCTXData[1] = 
{
	&m18161_MI,
};
extern Il2CppGenericInst GenInst_t106_0_0_0;
Il2CppGenericContext m18162_GenericContext = { NULL, &GenInst_t106_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18162_MI = 
{
	"Sort", (methodPointerType)&m17481_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m18162_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t87_TI;
extern TypeInfo t88_TI;
extern TypeInfo t348_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern TypeInfo t1872_TI;
extern TypeInfo t106_TI;
extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t250_TI;
extern TypeInfo t244_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t86_TI;
struct t52;
#define m18163(__this, p0, method) (t741 *)m17482_gshared((t7 *)__this, (t350*)p0, method)
extern MethodInfo m18163_MI;
struct t52;
#define m18164(__this, p0, p1, p2, p3, p4, method) (void)m17483_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, (t7*)p4, method)
extern MethodInfo m18164_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m6582_MI;
extern MethodInfo m18163_MI;
extern MethodInfo m3904_MI;
extern MethodInfo m3905_MI;
extern MethodInfo m3906_MI;
extern MethodInfo m18164_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m18161_MI;
// Metadata Definition System.Void System.Array::Sort<UnityEngine.EventSystems.EventTrigger/Entry,UnityEngine.EventSystems.EventTrigger/Entry>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m18163_MI;
extern TypeInfo t1872_TI;
extern MethodInfo m18164_MI;
static void* m18161_RGCTXData[3] = 
{
	&m18163_MI,
	&t1872_TI,
	&m18164_MI,
};
extern Il2CppGenericInst GenInst_t106_0_0_0_t106_0_0_0;
Il2CppGenericContext m18161_GenericContext = { NULL, &GenInst_t106_0_0_0_t106_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18161_MI = 
{
	"Sort", (methodPointerType)&m17480_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 150, 0, 255, 0, false, true, 0, m18161_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t731_TI;
extern TypeInfo t60_TI;
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern TypeInfo t744_TI;
extern TypeInfo t616_TI;
extern MethodInfo m3899_MI;
extern MethodInfo m3810_MI;
extern MethodInfo m3902_MI;
extern MethodInfo m3901_MI;
extern MethodInfo m18163_MI;
// Metadata Definition System.Array/Swapper System.Array::get_swapper<UnityEngine.EventSystems.EventTrigger/Entry>(T[])
extern TypeInfo t52_TI;
extern TypeInfo t741_TI;
extern Il2CppGenericInst GenInst_t106_0_0_0;
Il2CppGenericContext m18163_GenericContext = { NULL, &GenInst_t106_0_0_0 };
extern Il2CppType t741_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18163_MI = 
{
	"get_swapper", (methodPointerType)&m17482_gshared, &t52_TI, &t741_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, NULL, NULL};
#ifndef _MSC_VER
#else
#endif

struct t52;
#define m18165(__this, p0, p1, p2, method) (int32_t)m17583_gshared((t7 *)__this, (t7 *)p0, (t7 *)p1, (t7*)p2, method)
extern MethodInfo m18165_MI;
struct t52;
#define m18166(__this, p0, p1, p2, p3, method) (void)m17584_gshared((t7 *)__this, (t350*)p0, (t350*)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m18166_MI;
extern MethodInfo m18164_MI;
extern MethodInfo m18165_MI;
extern MethodInfo m18166_MI;
extern MethodInfo m18164_MI;
extern MethodInfo m18164_MI;
// Metadata Definition System.Void System.Array::qsort<UnityEngine.EventSystems.EventTrigger/Entry,UnityEngine.EventSystems.EventTrigger/Entry>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
extern TypeInfo t52_TI;
extern TypeInfo t53_TI;
extern MethodInfo m18165_MI;
extern MethodInfo m18166_MI;
extern MethodInfo m18164_MI;
static void* m18164_RGCTXData[3] = 
{
	&m18165_MI,
	&m18166_MI,
	&m18164_MI,
};
extern Il2CppGenericInst GenInst_t106_0_0_0_t106_0_0_0;
Il2CppGenericContext m18164_GenericContext = { NULL, &GenInst_t106_0_0_0_t106_0_0_0 };
extern Il2CppType t53_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18164_MI = 
{
	"qsort", (methodPointerType)&m17483_gshared, &t52_TI, &t53_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m18164_RGCTXData, NULL};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t3452_TI;
extern TypeInfo t60_TI;
extern TypeInfo t106_TI;
extern TypeInfo t3453_TI;
extern TypeInfo t78_TI;
extern TypeInfo t7_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1295_TI;
extern Il2CppType t106_0_0_0;
extern MethodInfo m18167_MI;
extern MethodInfo m18168_MI;
extern MethodInfo m7420_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m1656_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m18165_MI;
// Metadata Definition System.Int32 System.Array::compare<UnityEngine.EventSystems.EventTrigger/Entry>(T,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo t52_TI;
extern TypeInfo t60_TI;
extern MethodInfo m18167_MI;
extern TypeInfo t106_TI;
extern TypeInfo t3453_TI;
extern MethodInfo m18168_MI;
extern Il2CppType t106_0_0_0;
static void* m18165_RGCTXData[5] = 
{
	&m18167_MI,
	&t106_TI,
	&t3453_TI,
	&m18168_MI,
	(void*)&t106_0_0_0,
};
extern Il2CppGenericInst GenInst_t106_0_0_0;
Il2CppGenericContext m18165_GenericContext = { NULL, &GenInst_t106_0_0_0 };
extern Il2CppType t60_0_0_0;
extern TypeInfo t52_TI;
MethodInfo m18165_MI = 
{
	"compare", (methodPointerType)&m17583_gshared, &t52_TI, &t60_0_0_0, NULL, NULL, NULL, 145, 0, 255, 0, false, true, 0, m18165_RGCTXData, NULL};
