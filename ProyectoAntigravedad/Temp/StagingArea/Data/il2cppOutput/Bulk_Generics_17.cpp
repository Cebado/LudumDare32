#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2431.h"
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
extern TypeInfo t2431_TI;
#include "t2431MD.h"

#include "t60.h"
#include "t53.h"
#include "t486.h"
#include "t34.h"
#include "mscorlib_ArrayTypes.h"
#include "t7.h"
extern TypeInfo t2431_TI;
extern TypeInfo t463_TI;
extern TypeInfo t34_TI;
extern TypeInfo t60_TI;
extern TypeInfo t7_TI;
extern TypeInfo t486_TI;
#include "t7MD.h"
#include "t34MD.h"
extern MethodInfo m13809_MI;
extern MethodInfo m13811_MI;
extern MethodInfo m13808_MI;
extern MethodInfo m123_MI;
extern MethodInfo m13810_MI;
extern MethodInfo m3540_MI;

#include "t52.h"

extern MethodInfo m13807_MI;
 void m13807 (t2431 * __this, int32_t p0, t486 * p1, MethodInfo* method){
	{
		m13809(__this, p0, &m13809_MI);
		m13811(__this, p1, &m13811_MI);
		return;
	}
}
extern MethodInfo m13808_MI;
 int32_t m13808 (t2431 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m13809_MI;
 void m13809 (t2431 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m13810_MI;
 t486 * m13810 (t2431 * __this, MethodInfo* method){
	{
		t486 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m13811_MI;
 void m13811 (t2431 * __this, t486 * p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m13812_MI;
 t34* m13812 (t2431 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t486 * V_1 = {0};
	int32_t G_B2_0 = 0;
	t463* G_B2_1 = {0};
	t463* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	t463* G_B1_1 = {0};
	t463* G_B1_2 = {0};
	t34* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t463* G_B3_2 = {0};
	t463* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	t463* G_B5_1 = {0};
	t463* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t463* G_B4_1 = {0};
	t463* G_B4_2 = {0};
	t34* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t463* G_B6_2 = {0};
	t463* G_B6_3 = {0};
	{
		t463* L_0 = ((t463*)SZArrayNew(InitializedTypeInfo(&t463_TI), 5));
		ArrayElementTypeCheck (L_0, (t34*) &_stringLiteral177);
		*((t34**)(t34**)SZArrayLdElema(L_0, 0)) = (t34*)(t34*) &_stringLiteral177;
		t463* L_1 = L_0;
		int32_t L_2 = m13808(__this, &m13808_MI);
		int32_t L_3 = L_2;
		t7 * L_4 = Box(InitializedTypeInfo(&t60_TI), &L_3);
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = m13808(__this, &m13808_MI);
		V_0 = L_5;
		t34* L_6 = (t34*)VirtFuncInvoker0< t34* >::Invoke(&m123_MI, Box(InitializedTypeInfo(&t60_TI), &(*(&V_0))));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		G_B3_0 = (((t34_SFs*)(&t34_TI)->static_fields)->f2);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t34**)(t34**)SZArrayLdElema(G_B3_2, G_B3_1)) = (t34*)G_B3_0;
		t463* L_7 = G_B3_3;
		ArrayElementTypeCheck (L_7, (t34*) &_stringLiteral186);
		*((t34**)(t34**)SZArrayLdElema(L_7, 2)) = (t34*)(t34*) &_stringLiteral186;
		t463* L_8 = L_7;
		t486 * L_9 = m13810(__this, &m13810_MI);
		t486 * L_10 = L_9;
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!((t486 *)L_10))
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		t486 * L_11 = m13810(__this, &m13810_MI);
		V_1 = L_11;
		t34* L_12 = (t34*)VirtFuncInvoker0< t34* >::Invoke(&m123_MI, (*(&V_1)));
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		G_B6_0 = (((t34_SFs*)(&t34_TI)->static_fields)->f2);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t34**)(t34**)SZArrayLdElema(G_B6_2, G_B6_1)) = (t34*)G_B6_0;
		t463* L_13 = G_B6_3;
		ArrayElementTypeCheck (L_13, (t34*) &_stringLiteral178);
		*((t34**)(t34**)SZArrayLdElema(L_13, 4)) = (t34*)(t34*) &_stringLiteral178;
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		t34* L_14 = m3540(NULL, L_13, &m3540_MI);
		return L_14;
	}
}
// Metadata Definition System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
extern Il2CppType t60_0_0_1;
FieldInfo t2431_f0_FieldInfo = 
{
	"key", &t60_0_0_1, &t2431_TI, offsetof(t2431, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t486_0_0_1;
FieldInfo t2431_f1_FieldInfo = 
{
	"value", &t486_0_0_1, &t2431_TI, offsetof(t2431, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2431_FIs[] =
{
	&t2431_f0_FieldInfo,
	&t2431_f1_FieldInfo,
	NULL
};
extern MethodInfo m13808_MI;
extern MethodInfo m13809_MI;
static PropertyInfo t2431____Key_PropertyInfo = 
{
	&t2431_TI, "Key", &m13808_MI, &m13809_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13810_MI;
extern MethodInfo m13811_MI;
static PropertyInfo t2431____Value_PropertyInfo = 
{
	&t2431_TI, "Value", &m13810_MI, &m13811_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2431_PIs[] =
{
	&t2431____Key_PropertyInfo,
	&t2431____Value_PropertyInfo,
	NULL
};
extern Il2CppType t60_0_0_0;
extern Il2CppType t486_0_0_0;
static ParameterInfo t2431_m13807_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t2431_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13807_MI = 
{
	".ctor", (methodPointerType)&m13807, &t2431_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2431_m13807_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2431_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13808_MI = 
{
	"get_Key", (methodPointerType)&m13808, &t2431_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2431_m13809_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2431_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13809_MI = 
{
	"set_Key", (methodPointerType)&m13809, &t2431_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2431_m13809_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2431_TI;
extern Il2CppType t486_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13810_MI = 
{
	"get_Value", (methodPointerType)&m13810, &t2431_TI, &t486_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t486_0_0_0;
static ParameterInfo t2431_m13811_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t2431_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13811_MI = 
{
	"set_Value", (methodPointerType)&m13811, &t2431_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2431_m13811_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2431_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13812_MI = 
{
	"ToString", (methodPointerType)&m13812, &t2431_TI, &t34_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2431_MIs[] =
{
	&m13807_MI,
	&m13808_MI,
	&m13809_MI,
	&m13810_MI,
	&m13811_MI,
	&m13812_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m13812_MI;
static MethodInfo* t2431_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m13812_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2431_0_0_0;
extern Il2CppType t2431_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2431_TI;
extern Il2CppGenericClass t2431_GC;
extern CustomAttributesCache t864__CustomAttributeCache;
TypeInfo t2431_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t2431_MIs, t2431_PIs, t2431_FIs, NULL, &t159_TI, NULL, NULL, &t2431_TI, NULL, t2431_VT, &t864__CustomAttributeCache, &t2431_TI, &t2431_0_0_0, &t2431_1_0_0, NULL, &t2431_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2431)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t2434.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2434_TI;
#include "t2434MD.h"

#include "t1295.h"
#include "t55.h"
extern TypeInfo t2434_TI;
extern TypeInfo t2431_TI;
extern TypeInfo t1295_TI;
#include "t1295MD.h"
#include "t52MD.h"
extern MethodInfo m13817_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m19926_MI;
struct t52;
#include "t88.h"
 t2431  m19926 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m19926_MI;


extern MethodInfo m13813_MI;
 void m13813 (t2434 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13814_MI;
 t7 * m13814 (t2434 * __this, MethodInfo* method){
	{
		t2431  L_0 = m13817(__this, &m13817_MI);
		t2431  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2431_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13815_MI;
 void m13815 (t2434 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m13816_MI;
 bool m13816 (t2434 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t52 * L_1 = (__this->f0);
		int32_t L_2 = m3829(L_1, &m3829_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m13817_MI;
 t2431  m13817 (t2434 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1295 * L_1 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7023(L_1, (t34*) &_stringLiteral373, &m7023_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1295 * L_3 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7023(L_3, (t34*) &_stringLiteral374, &m7023_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t52 * L_4 = (__this->f0);
		t52 * L_5 = (__this->f0);
		int32_t L_6 = m3829(L_5, &m3829_MI);
		int32_t L_7 = (__this->f1);
		t2431  L_8 = m19926(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m19926_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>
extern Il2CppType t52_0_0_1;
FieldInfo t2434_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2434_TI, offsetof(t2434, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2434_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2434_TI, offsetof(t2434, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2434_FIs[] =
{
	&t2434_f0_FieldInfo,
	&t2434_f1_FieldInfo,
	NULL
};
extern MethodInfo m13814_MI;
static PropertyInfo t2434____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2434_TI, "System.Collections.IEnumerator.Current", &m13814_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13817_MI;
static PropertyInfo t2434____Current_PropertyInfo = 
{
	&t2434_TI, "Current", &m13817_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2434_PIs[] =
{
	&t2434____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2434____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2434_m13813_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2434_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13813_MI = 
{
	".ctor", (methodPointerType)&m13813, &t2434_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2434_m13813_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2434_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13814_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13814, &t2434_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2434_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13815_MI = 
{
	"Dispose", (methodPointerType)&m13815, &t2434_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2434_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13816_MI = 
{
	"MoveNext", (methodPointerType)&m13816, &t2434_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2434_TI;
extern Il2CppType t2431_0_0_0;
extern void* RuntimeInvoker_t2431 (MethodInfo* method, void* obj, void** args);
MethodInfo m13817_MI = 
{
	"get_Current", (methodPointerType)&m13817, &t2434_TI, &t2431_0_0_0, RuntimeInvoker_t2431, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2434_MIs[] =
{
	&m13813_MI,
	&m13814_MI,
	&m13815_MI,
	&m13816_MI,
	&m13817_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m13814_MI;
extern MethodInfo m13816_MI;
extern MethodInfo m13815_MI;
extern MethodInfo m13817_MI;
static MethodInfo* t2434_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m13814_MI,
	&m13816_MI,
	&m13815_MI,
	&m13817_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2432_TI;
static TypeInfo* t2434_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2432_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2432_TI;
static Il2CppInterfaceOffsetPair t2434_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2432_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2434_0_0_0;
extern Il2CppType t2434_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2434_TI;
extern Il2CppGenericClass t2434_GC;
extern TypeInfo t52_TI;
TypeInfo t2434_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2434_MIs, t2434_PIs, t2434_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2434_TI, t2434_ITIs, t2434_VT, &EmptyCustomAttributesCache, &t2434_TI, &t2434_0_0_0, &t2434_1_0_0, t2434_IOs, &t2434_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2434)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4418_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>
extern MethodInfo m26411_MI;
extern MethodInfo m26412_MI;
static PropertyInfo t4418____Item_PropertyInfo = 
{
	&t4418_TI, "Item", &m26411_MI, &m26412_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4418_PIs[] =
{
	&t4418____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2431_0_0_0;
static ParameterInfo t4418_m26413_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2431_0_0_0},
};
extern TypeInfo t4418_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t2431 (MethodInfo* method, void* obj, void** args);
MethodInfo m26413_MI = 
{
	"IndexOf", NULL, &t4418_TI, &t60_0_0_0, RuntimeInvoker_t60_t2431, t4418_m26413_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2431_0_0_0;
static ParameterInfo t4418_m26414_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2431_0_0_0},
};
extern TypeInfo t4418_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t2431 (MethodInfo* method, void* obj, void** args);
MethodInfo m26414_MI = 
{
	"Insert", NULL, &t4418_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t2431, t4418_m26414_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4418_m26415_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4418_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26415_MI = 
{
	"RemoveAt", NULL, &t4418_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4418_m26415_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4418_m26411_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4418_TI;
extern Il2CppType t2431_0_0_0;
extern void* RuntimeInvoker_t2431_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26411_MI = 
{
	"get_Item", NULL, &t4418_TI, &t2431_0_0_0, RuntimeInvoker_t2431_t60, t4418_m26411_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2431_0_0_0;
static ParameterInfo t4418_m26412_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2431_0_0_0},
};
extern TypeInfo t4418_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t2431 (MethodInfo* method, void* obj, void** args);
MethodInfo m26412_MI = 
{
	"set_Item", NULL, &t4418_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t2431, t4418_m26412_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4418_MIs[] =
{
	&m26413_MI,
	&m26414_MI,
	&m26415_MI,
	&m26411_MI,
	&m26412_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4417_TI;
extern TypeInfo t4419_TI;
static TypeInfo* t4418_ITIs[] = 
{
	&t618_TI,
	&t4417_TI,
	&t4419_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4418_0_0_0;
extern Il2CppType t4418_1_0_0;
struct t4418;
extern TypeInfo t4418_TI;
extern Il2CppGenericClass t4418_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4418_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4418_MIs, t4418_PIs, NULL, NULL, NULL, NULL, NULL, &t4418_TI, t4418_ITIs, NULL, &t1426__CustomAttributeCache, &t4418_TI, &t4418_0_0_0, &t4418_1_0_0, NULL, &t4418_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5353_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
extern Il2CppType t60_0_0_0;
static ParameterInfo t5353_m26416_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5353_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26416_MI = 
{
	"Remove", NULL, &t5353_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5353_m26416_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5353_MIs[] =
{
	&m26416_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4417_TI;
extern TypeInfo t4419_TI;
static TypeInfo* t5353_ITIs[] = 
{
	&t618_TI,
	&t4417_TI,
	&t4419_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5353_0_0_0;
extern Il2CppType t5353_1_0_0;
struct t5353;
extern TypeInfo t5353_TI;
extern Il2CppGenericClass t5353_GC;
extern CustomAttributesCache t1486__CustomAttributeCache;
TypeInfo t5353_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5353_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5353_TI, t5353_ITIs, NULL, &t1486__CustomAttributeCache, &t5353_TI, &t5353_0_0_0, &t5353_1_0_0, NULL, &t5353_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2436_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutUtility/LayoutCache>
extern MethodInfo m26417_MI;
static PropertyInfo t2436____Current_PropertyInfo = 
{
	&t2436_TI, "Current", &m26417_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2436_PIs[] =
{
	&t2436____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2436_TI;
extern Il2CppType t486_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26417_MI = 
{
	"get_Current", NULL, &t2436_TI, &t486_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2436_MIs[] =
{
	&m26417_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t2436_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2436_0_0_0;
extern Il2CppType t2436_1_0_0;
struct t2436;
extern TypeInfo t2436_TI;
extern Il2CppGenericClass t2436_GC;
TypeInfo t2436_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2436_MIs, t2436_PIs, NULL, NULL, NULL, NULL, NULL, &t2436_TI, t2436_ITIs, NULL, &EmptyCustomAttributesCache, &t2436_TI, &t2436_0_0_0, &t2436_1_0_0, NULL, &t2436_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2435.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2435_TI;
#include "t2435MD.h"

extern TypeInfo t2435_TI;
extern TypeInfo t486_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m13822_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m19937_MI;
struct t52;
struct t52;
 t7 * m17147_gshared (t52 * __this, int32_t p0, MethodInfo* method);
#define m17147(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
#define m19937(__this, p0, method) (t486 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m19937_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.GUILayoutUtility/LayoutCache>
extern Il2CppType t52_0_0_1;
FieldInfo t2435_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2435_TI, offsetof(t2435, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2435_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2435_TI, offsetof(t2435, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2435_FIs[] =
{
	&t2435_f0_FieldInfo,
	&t2435_f1_FieldInfo,
	NULL
};
extern MethodInfo m13819_MI;
static PropertyInfo t2435____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2435_TI, "System.Collections.IEnumerator.Current", &m13819_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13822_MI;
static PropertyInfo t2435____Current_PropertyInfo = 
{
	&t2435_TI, "Current", &m13822_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2435_PIs[] =
{
	&t2435____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2435____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2435_m13818_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2435_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13818_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2435_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2435_m13818_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2435_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13819_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2435_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2435_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13820_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2435_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2435_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13821_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2435_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2435_TI;
extern Il2CppType t486_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13822_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2435_TI, &t486_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2435_MIs[] =
{
	&m13818_MI,
	&m13819_MI,
	&m13820_MI,
	&m13821_MI,
	&m13822_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m13819_MI;
extern MethodInfo m13821_MI;
extern MethodInfo m13820_MI;
extern MethodInfo m13822_MI;
static MethodInfo* t2435_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m13819_MI,
	&m13821_MI,
	&m13820_MI,
	&m13822_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2436_TI;
static TypeInfo* t2435_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2436_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2436_TI;
static Il2CppInterfaceOffsetPair t2435_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2436_TI, 7},
};
extern MethodInfo m13822_MI;
extern TypeInfo t486_TI;
extern MethodInfo m19937_MI;
static void* t2435_RGCTXData[3] = 
{
	&m13822_MI,
	&t486_TI,
	&m19937_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2435_0_0_0;
extern Il2CppType t2435_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2435_TI;
extern Il2CppGenericClass t2435_GC;
extern TypeInfo t52_TI;
TypeInfo t2435_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2435_MIs, t2435_PIs, t2435_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2435_TI, t2435_ITIs, t2435_VT, &EmptyCustomAttributesCache, &t2435_TI, &t2435_0_0_0, &t2435_1_0_0, t2435_IOs, &t2435_GC, NULL, NULL, NULL, t2435_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2435)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4420_TI;

#include "UnityEngine_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutUtility/LayoutCache>
extern MethodInfo m26418_MI;
static PropertyInfo t4420____Count_PropertyInfo = 
{
	&t4420_TI, "Count", &m26418_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26419_MI;
static PropertyInfo t4420____IsReadOnly_PropertyInfo = 
{
	&t4420_TI, "IsReadOnly", &m26419_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4420_PIs[] =
{
	&t4420____Count_PropertyInfo,
	&t4420____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4420_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26418_MI = 
{
	"get_Count", NULL, &t4420_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4420_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26419_MI = 
{
	"get_IsReadOnly", NULL, &t4420_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t486_0_0_0;
static ParameterInfo t4420_m26420_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t4420_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26420_MI = 
{
	"Add", NULL, &t4420_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4420_m26420_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4420_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26421_MI = 
{
	"Clear", NULL, &t4420_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t486_0_0_0;
static ParameterInfo t4420_m26422_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t4420_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26422_MI = 
{
	"Contains", NULL, &t4420_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4420_m26422_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2427_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4420_m26423_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2427_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4420_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26423_MI = 
{
	"CopyTo", NULL, &t4420_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4420_m26423_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t486_0_0_0;
static ParameterInfo t4420_m26424_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t4420_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26424_MI = 
{
	"Remove", NULL, &t4420_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4420_m26424_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4420_MIs[] =
{
	&m26418_MI,
	&m26419_MI,
	&m26420_MI,
	&m26421_MI,
	&m26422_MI,
	&m26423_MI,
	&m26424_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4422_TI;
static TypeInfo* t4420_ITIs[] = 
{
	&t618_TI,
	&t4422_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4420_0_0_0;
extern Il2CppType t4420_1_0_0;
struct t4420;
extern TypeInfo t4420_TI;
extern Il2CppGenericClass t4420_GC;
TypeInfo t4420_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4420_MIs, t4420_PIs, NULL, NULL, NULL, NULL, NULL, &t4420_TI, t4420_ITIs, NULL, &EmptyCustomAttributesCache, &t4420_TI, &t4420_0_0_0, &t4420_1_0_0, NULL, &t4420_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4422_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.GUILayoutUtility/LayoutCache>
extern TypeInfo t4422_TI;
extern Il2CppType t2436_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26425_MI = 
{
	"GetEnumerator", NULL, &t4422_TI, &t2436_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4422_MIs[] =
{
	&m26425_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4422_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4422_0_0_0;
extern Il2CppType t4422_1_0_0;
struct t4422;
extern TypeInfo t4422_TI;
extern Il2CppGenericClass t4422_GC;
TypeInfo t4422_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4422_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4422_TI, t4422_ITIs, NULL, &EmptyCustomAttributesCache, &t4422_TI, &t4422_0_0_0, &t4422_1_0_0, NULL, &t4422_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4421_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.GUILayoutUtility/LayoutCache>
extern MethodInfo m26426_MI;
extern MethodInfo m26427_MI;
static PropertyInfo t4421____Item_PropertyInfo = 
{
	&t4421_TI, "Item", &m26426_MI, &m26427_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4421_PIs[] =
{
	&t4421____Item_PropertyInfo,
	NULL
};
extern Il2CppType t486_0_0_0;
static ParameterInfo t4421_m26428_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t4421_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26428_MI = 
{
	"IndexOf", NULL, &t4421_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4421_m26428_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t486_0_0_0;
static ParameterInfo t4421_m26429_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t4421_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26429_MI = 
{
	"Insert", NULL, &t4421_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4421_m26429_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4421_m26430_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4421_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26430_MI = 
{
	"RemoveAt", NULL, &t4421_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4421_m26430_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4421_m26426_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4421_TI;
extern Il2CppType t486_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26426_MI = 
{
	"get_Item", NULL, &t4421_TI, &t486_0_0_0, RuntimeInvoker_t7_t60, t4421_m26426_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t486_0_0_0;
static ParameterInfo t4421_m26427_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t4421_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26427_MI = 
{
	"set_Item", NULL, &t4421_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4421_m26427_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4421_MIs[] =
{
	&m26428_MI,
	&m26429_MI,
	&m26430_MI,
	&m26426_MI,
	&m26427_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4420_TI;
extern TypeInfo t4422_TI;
static TypeInfo* t4421_ITIs[] = 
{
	&t618_TI,
	&t4420_TI,
	&t4422_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4421_0_0_0;
extern Il2CppType t4421_1_0_0;
struct t4421;
extern TypeInfo t4421_TI;
extern Il2CppGenericClass t4421_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4421_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4421_MIs, t4421_PIs, NULL, NULL, NULL, NULL, NULL, &t4421_TI, t4421_ITIs, NULL, &t1426__CustomAttributeCache, &t4421_TI, &t4421_0_0_0, &t4421_1_0_0, NULL, &t4421_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2429.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2429_TI;
#include "t2429MD.h"

#include "t489.h"
#include "t87.h"
#include "t62.h"
#include "t2437.h"
#include "t2438.h"
#include "t114.h"
extern TypeInfo t2429_TI;
extern TypeInfo t669_TI;
extern TypeInfo t7_TI;
extern TypeInfo t489_TI;
extern TypeInfo t60_TI;
extern TypeInfo t87_TI;
extern TypeInfo t62_TI;
extern TypeInfo t2437_TI;
extern TypeInfo t2427_TI;
extern TypeInfo t486_TI;
extern TypeInfo t53_TI;
extern TypeInfo t2438_TI;
#include "t489MD.h"
#include "t87MD.h"
#include "t62MD.h"
#include "t2438MD.h"
#include "t2437MD.h"
extern MethodInfo m7515_MI;
extern MethodInfo m13786_MI;
extern MethodInfo m116_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m7125_MI;
extern MethodInfo m13797_MI;
extern MethodInfo m13835_MI;
extern MethodInfo m13834_MI;
extern MethodInfo m13789_MI;
extern MethodInfo m13791_MI;
extern MethodInfo m13853_MI;
extern MethodInfo m19948_MI;
extern MethodInfo m19949_MI;
extern MethodInfo m13837_MI;
struct t489;
#include "t70.h"
#include "t86.h"
#include "t71.h"
#include "t348.h"
 void m19948 (t489 * __this, t52 * p0, int32_t p1, t2438 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m19948_MI;
struct t489;
#include "t852.h"
 void m19949 (t489 * __this, t2427* p0, int32_t p1, t2438 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m19949_MI;


extern MethodInfo m13823_MI;
 void m13823 (t2429 * __this, t489 * p0, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral552, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m13824_MI;
 void m13824 (t2429 * __this, t486 * p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral553, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m13825_MI;
 void m13825 (t2429 * __this, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral553, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m13826_MI;
 bool m13826 (t2429 * __this, t486 * p0, MethodInfo* method){
	{
		t489 * L_0 = (__this->f0);
		bool L_1 = m13797(L_0, p0, &m13797_MI);
		return L_1;
	}
}
extern MethodInfo m13827_MI;
 bool m13827 (t2429 * __this, t486 * p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral553, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m13828_MI;
 t7* m13828 (t2429 * __this, MethodInfo* method){
	{
		t2437  L_0 = m13835(__this, &m13835_MI);
		t2437  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2437_TI), &L_1);
		return (t7*)L_2;
	}
}
extern MethodInfo m13829_MI;
 void m13829 (t2429 * __this, t52 * p0, int32_t p1, MethodInfo* method){
	t2427* V_0 = {0};
	{
		V_0 = ((t2427*)IsInst(p0, InitializedTypeInfo(&t2427_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< t2427*, int32_t >::Invoke(&m13834_MI, __this, V_0, p1);
		return;
	}

IL_0013:
	{
		t489 * L_0 = (__this->f0);
		m13789(L_0, p0, p1, &m13789_MI);
		t489 * L_1 = (__this->f0);
		t114 L_2 = { &m13791_MI };
		t2438 * L_3 = (t2438 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2438_TI));
		m13853(L_3, NULL, L_2, &m13853_MI);
		m19948(L_1, p0, p1, L_3, &m19948_MI);
		return;
	}
}
extern MethodInfo m13830_MI;
 t7 * m13830 (t2429 * __this, MethodInfo* method){
	{
		t2437  L_0 = m13835(__this, &m13835_MI);
		t2437  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2437_TI), &L_1);
		return (t7 *)L_2;
	}
}
extern MethodInfo m13831_MI;
 bool m13831 (t2429 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m13832_MI;
 bool m13832 (t2429 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m13833_MI;
 t7 * m13833 (t2429 * __this, MethodInfo* method){
	{
		t489 * L_0 = (__this->f0);
		t7 * L_1 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(&m7515_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m13834_MI;
 void m13834 (t2429 * __this, t2427* p0, int32_t p1, MethodInfo* method){
	{
		t489 * L_0 = (__this->f0);
		m13789(L_0, (t52 *)(t52 *)p0, p1, &m13789_MI);
		t489 * L_1 = (__this->f0);
		t114 L_2 = { &m13791_MI };
		t2438 * L_3 = (t2438 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2438_TI));
		m13853(L_3, NULL, L_2, &m13853_MI);
		m19949(L_1, p0, p1, L_3, &m19949_MI);
		return;
	}
}
extern MethodInfo m13835_MI;
 t2437  m13835 (t2429 * __this, MethodInfo* method){
	{
		t489 * L_0 = (__this->f0);
		t2437  L_1 = {0};
		m13837(&L_1, L_0, &m13837_MI);
		return L_1;
	}
}
extern MethodInfo m13836_MI;
 int32_t m13836 (t2429 * __this, MethodInfo* method){
	{
		t489 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m13786_MI, L_0);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
extern Il2CppType t489_0_0_1;
FieldInfo t2429_f0_FieldInfo = 
{
	"dictionary", &t489_0_0_1, &t2429_TI, offsetof(t2429, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2429_FIs[] =
{
	&t2429_f0_FieldInfo,
	NULL
};
extern MethodInfo m13831_MI;
static PropertyInfo t2429____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t2429_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m13831_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13832_MI;
static PropertyInfo t2429____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2429_TI, "System.Collections.ICollection.IsSynchronized", &m13832_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13833_MI;
static PropertyInfo t2429____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2429_TI, "System.Collections.ICollection.SyncRoot", &m13833_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13836_MI;
static PropertyInfo t2429____Count_PropertyInfo = 
{
	&t2429_TI, "Count", &m13836_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2429_PIs[] =
{
	&t2429____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t2429____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2429____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2429____Count_PropertyInfo,
	NULL
};
extern Il2CppType t489_0_0_0;
static ParameterInfo t2429_m13823_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t489_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13823_MI = 
{
	".ctor", (methodPointerType)&m13823, &t2429_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2429_m13823_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t486_0_0_0;
static ParameterInfo t2429_m13824_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13824_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m13824, &t2429_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2429_m13824_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13825_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m13825, &t2429_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t486_0_0_0;
static ParameterInfo t2429_m13826_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13826_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m13826, &t2429_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2429_m13826_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t486_0_0_0;
static ParameterInfo t2429_m13827_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13827_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m13827, &t2429_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2429_m13827_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t2436_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13828_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m13828, &t2429_TI, &t2436_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2429_m13829_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13829_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m13829, &t2429_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2429_m13829_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13830_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m13830, &t2429_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13831_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m13831, &t2429_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13832_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m13832, &t2429_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13833_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m13833, &t2429_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2427_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2429_m13834_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2427_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2429_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13834_MI = 
{
	"CopyTo", (methodPointerType)&m13834, &t2429_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2429_m13834_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t2437_0_0_0;
extern void* RuntimeInvoker_t2437 (MethodInfo* method, void* obj, void** args);
MethodInfo m13835_MI = 
{
	"GetEnumerator", (methodPointerType)&m13835, &t2429_TI, &t2437_0_0_0, RuntimeInvoker_t2437, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2429_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13836_MI = 
{
	"get_Count", (methodPointerType)&m13836, &t2429_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2429_MIs[] =
{
	&m13823_MI,
	&m13824_MI,
	&m13825_MI,
	&m13826_MI,
	&m13827_MI,
	&m13828_MI,
	&m13829_MI,
	&m13830_MI,
	&m13831_MI,
	&m13832_MI,
	&m13833_MI,
	&m13834_MI,
	&m13835_MI,
	&m13836_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m13830_MI;
extern MethodInfo m13836_MI;
extern MethodInfo m13832_MI;
extern MethodInfo m13833_MI;
extern MethodInfo m13829_MI;
extern MethodInfo m13836_MI;
extern MethodInfo m13831_MI;
extern MethodInfo m13824_MI;
extern MethodInfo m13825_MI;
extern MethodInfo m13826_MI;
extern MethodInfo m13834_MI;
extern MethodInfo m13827_MI;
extern MethodInfo m13828_MI;
static MethodInfo* t2429_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m13830_MI,
	&m13836_MI,
	&m13832_MI,
	&m13833_MI,
	&m13829_MI,
	&m13836_MI,
	&m13831_MI,
	&m13824_MI,
	&m13825_MI,
	&m13826_MI,
	&m13834_MI,
	&m13827_MI,
	&m13828_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t4420_TI;
extern TypeInfo t4422_TI;
static TypeInfo* t2429_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t4420_TI,
	&t4422_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t4420_TI;
extern TypeInfo t4422_TI;
static Il2CppInterfaceOffsetPair t2429_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t4420_TI, 9},
	{ &t4422_TI, 16},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2429_0_0_0;
extern Il2CppType t2429_1_0_0;
extern TypeInfo t7_TI;
struct t2429;
extern TypeInfo t2429_TI;
extern Il2CppGenericClass t2429_GC;
extern TypeInfo t859_TI;
extern CustomAttributesCache t857__CustomAttributeCache;
TypeInfo t2429_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t2429_MIs, t2429_PIs, t2429_FIs, NULL, &t7_TI, NULL, &t859_TI, &t2429_TI, t2429_ITIs, t2429_VT, &t857__CustomAttributeCache, &t2429_TI, &t2429_0_0_0, &t2429_1_0_0, t2429_IOs, &t2429_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2429), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2437_TI;

#include "t2433.h"
extern TypeInfo t2437_TI;
extern TypeInfo t486_TI;
extern TypeInfo t2433_TI;
extern TypeInfo t53_TI;
extern TypeInfo t55_TI;
#include "t2433MD.h"
extern MethodInfo m13849_MI;
extern MethodInfo m13810_MI;
extern MethodInfo m13805_MI;
extern MethodInfo m13852_MI;
extern MethodInfo m13846_MI;


extern MethodInfo m13837_MI;
 void m13837 (t2437 * __this, t489 * p0, MethodInfo* method){
	{
		t2433  L_0 = m13805(p0, &m13805_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m13838_MI;
 t7 * m13838 (t2437 * __this, MethodInfo* method){
	{
		t2433 * L_0 = &(__this->f0);
		t486 * L_1 = m13849(L_0, &m13849_MI);
		t486 * L_2 = L_1;
		return ((t486 *)L_2);
	}
}
extern MethodInfo m13839_MI;
 void m13839 (t2437 * __this, MethodInfo* method){
	{
		t2433 * L_0 = &(__this->f0);
		m13852(L_0, &m13852_MI);
		return;
	}
}
extern MethodInfo m13840_MI;
 bool m13840 (t2437 * __this, MethodInfo* method){
	{
		t2433 * L_0 = &(__this->f0);
		bool L_1 = m13846(L_0, &m13846_MI);
		return L_1;
	}
}
extern MethodInfo m13841_MI;
 t486 * m13841 (t2437 * __this, MethodInfo* method){
	{
		t2433 * L_0 = &(__this->f0);
		t2431 * L_1 = &(L_0->f3);
		t486 * L_2 = m13810(L_1, &m13810_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
extern Il2CppType t2433_0_0_1;
FieldInfo t2437_f0_FieldInfo = 
{
	"host_enumerator", &t2433_0_0_1, &t2437_TI, offsetof(t2437, f0) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2437_FIs[] =
{
	&t2437_f0_FieldInfo,
	NULL
};
extern MethodInfo m13838_MI;
static PropertyInfo t2437____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2437_TI, "System.Collections.IEnumerator.Current", &m13838_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13841_MI;
static PropertyInfo t2437____Current_PropertyInfo = 
{
	&t2437_TI, "Current", &m13841_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2437_PIs[] =
{
	&t2437____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2437____Current_PropertyInfo,
	NULL
};
extern Il2CppType t489_0_0_0;
static ParameterInfo t2437_m13837_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t489_0_0_0},
};
extern TypeInfo t2437_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13837_MI = 
{
	".ctor", (methodPointerType)&m13837, &t2437_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2437_m13837_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2437_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13838_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13838, &t2437_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2437_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13839_MI = 
{
	"Dispose", (methodPointerType)&m13839, &t2437_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2437_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13840_MI = 
{
	"MoveNext", (methodPointerType)&m13840, &t2437_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2437_TI;
extern Il2CppType t486_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13841_MI = 
{
	"get_Current", (methodPointerType)&m13841, &t2437_TI, &t486_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2437_MIs[] =
{
	&m13837_MI,
	&m13838_MI,
	&m13839_MI,
	&m13840_MI,
	&m13841_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m13838_MI;
extern MethodInfo m13840_MI;
extern MethodInfo m13839_MI;
extern MethodInfo m13841_MI;
static MethodInfo* t2437_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m13838_MI,
	&m13840_MI,
	&m13839_MI,
	&m13841_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2436_TI;
static TypeInfo* t2437_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2436_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2436_TI;
static Il2CppInterfaceOffsetPair t2437_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2436_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2437_0_0_0;
extern Il2CppType t2437_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2437_TI;
extern Il2CppGenericClass t2437_GC;
extern TypeInfo t857_TI;
TypeInfo t2437_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2437_MIs, t2437_PIs, t2437_FIs, NULL, &t159_TI, NULL, &t857_TI, &t2437_TI, t2437_ITIs, t2437_VT, &EmptyCustomAttributesCache, &t2437_TI, &t2437_0_0_0, &t2437_1_0_0, t2437_IOs, &t2437_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2437)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2433_TI;

#include "t854.h"
#include "t1312.h"
extern TypeInfo t2433_TI;
extern TypeInfo t2431_TI;
extern TypeInfo t60_TI;
extern TypeInfo t486_TI;
extern TypeInfo t854_TI;
extern TypeInfo t489_TI;
extern TypeInfo t852_TI;
extern TypeInfo t1312_TI;
extern TypeInfo t1295_TI;
#include "t854MD.h"
#include "t1312MD.h"
extern MethodInfo m13851_MI;
extern MethodInfo m13808_MI;
extern MethodInfo m13810_MI;
extern MethodInfo m4471_MI;
extern MethodInfo m13848_MI;
extern MethodInfo m13850_MI;
extern MethodInfo m13807_MI;
extern MethodInfo m7227_MI;
extern MethodInfo m7023_MI;


extern MethodInfo m13842_MI;
 void m13842 (t2433 * __this, t489 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m13843_MI;
 t7 * m13843 (t2433 * __this, MethodInfo* method){
	{
		m13851(__this, &m13851_MI);
		t2431  L_0 = (__this->f3);
		t2431  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2431_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13844_MI;
 t854  m13844 (t2433 * __this, MethodInfo* method){
	{
		m13851(__this, &m13851_MI);
		t2431 * L_0 = &(__this->f3);
		int32_t L_1 = m13808(L_0, &m13808_MI);
		int32_t L_2 = L_1;
		t7 * L_3 = Box(InitializedTypeInfo(&t60_TI), &L_2);
		t2431 * L_4 = &(__this->f3);
		t486 * L_5 = m13810(L_4, &m13810_MI);
		t486 * L_6 = L_5;
		t854  L_7 = {0};
		m4471(&L_7, L_3, ((t486 *)L_6), &m4471_MI);
		return L_7;
	}
}
extern MethodInfo m13845_MI;
 t7 * m13845 (t2433 * __this, MethodInfo* method){
	{
		int32_t L_0 = m13848(__this, &m13848_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t60_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m13846_MI;
 bool m13846 (t2433 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m13850(__this, &m13850_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->f1 = ((int32_t)(L_2+1));
		V_0 = V_1;
		t489 * L_3 = (__this->f0);
		t1476* L_4 = (L_3->f5);
		int32_t L_5 = (((t852 *)(t852 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)(L_5&((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t489 * L_6 = (__this->f0);
		t731* L_7 = (L_6->f6);
		t489 * L_8 = (__this->f0);
		t2427* L_9 = (L_8->f7);
		t2431  L_10 = {0};
		m13807(&L_10, (*(int32_t*)(int32_t*)SZArrayLdElema(L_7, V_0)), (*(t486 **)(t486 **)SZArrayLdElema(L_9, V_0)), &m13807_MI);
		__this->f3 = L_10;
		return 1;
	}

IL_0072:
	{
		int32_t L_11 = (__this->f1);
		t489 * L_12 = (__this->f0);
		int32_t L_13 = (L_12->f8);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0013;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern MethodInfo m13847_MI;
 t2431  m13847 (t2433 * __this, MethodInfo* method){
	{
		t2431  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m13848_MI;
 int32_t m13848 (t2433 * __this, MethodInfo* method){
	{
		m13851(__this, &m13851_MI);
		t2431 * L_0 = &(__this->f3);
		int32_t L_1 = m13808(L_0, &m13808_MI);
		return L_1;
	}
}
extern MethodInfo m13849_MI;
 t486 * m13849 (t2433 * __this, MethodInfo* method){
	{
		m13851(__this, &m13851_MI);
		t2431 * L_0 = &(__this->f3);
		t486 * L_1 = m13810(L_0, &m13810_MI);
		return L_1;
	}
}
extern MethodInfo m13850_MI;
 void m13850 (t2433 * __this, MethodInfo* method){
	{
		t489 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1312 * L_1 = (t1312 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1312_TI));
		m7227(L_1, (t34*)NULL, &m7227_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000f:
	{
		t489 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f14);
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1295 * L_5 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7023(L_5, (t34*) &_stringLiteral550, &m7023_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m13851_MI;
 void m13851 (t2433 * __this, MethodInfo* method){
	{
		m13850(__this, &m13850_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1295 * L_1 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7023(L_1, (t34*) &_stringLiteral551, &m7023_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001a:
	{
		return;
	}
}
extern MethodInfo m13852_MI;
 void m13852 (t2433 * __this, MethodInfo* method){
	{
		__this->f0 = (t489 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
extern Il2CppType t489_0_0_1;
FieldInfo t2433_f0_FieldInfo = 
{
	"dictionary", &t489_0_0_1, &t2433_TI, offsetof(t2433, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2433_f1_FieldInfo = 
{
	"next", &t60_0_0_1, &t2433_TI, offsetof(t2433, f1) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2433_f2_FieldInfo = 
{
	"stamp", &t60_0_0_1, &t2433_TI, offsetof(t2433, f2) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t2431_0_0_3;
FieldInfo t2433_f3_FieldInfo = 
{
	"current", &t2431_0_0_3, &t2433_TI, offsetof(t2433, f3) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2433_FIs[] =
{
	&t2433_f0_FieldInfo,
	&t2433_f1_FieldInfo,
	&t2433_f2_FieldInfo,
	&t2433_f3_FieldInfo,
	NULL
};
extern MethodInfo m13843_MI;
static PropertyInfo t2433____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2433_TI, "System.Collections.IEnumerator.Current", &m13843_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13844_MI;
static PropertyInfo t2433____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t2433_TI, "System.Collections.IDictionaryEnumerator.Entry", &m13844_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13845_MI;
static PropertyInfo t2433____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t2433_TI, "System.Collections.IDictionaryEnumerator.Key", &m13845_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13847_MI;
static PropertyInfo t2433____Current_PropertyInfo = 
{
	&t2433_TI, "Current", &m13847_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13848_MI;
static PropertyInfo t2433____CurrentKey_PropertyInfo = 
{
	&t2433_TI, "CurrentKey", &m13848_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13849_MI;
static PropertyInfo t2433____CurrentValue_PropertyInfo = 
{
	&t2433_TI, "CurrentValue", &m13849_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2433_PIs[] =
{
	&t2433____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2433____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t2433____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t2433____Current_PropertyInfo,
	&t2433____CurrentKey_PropertyInfo,
	&t2433____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t489_0_0_0;
static ParameterInfo t2433_m13842_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t489_0_0_0},
};
extern TypeInfo t2433_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13842_MI = 
{
	".ctor", (methodPointerType)&m13842, &t2433_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2433_m13842_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2433_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13843_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m13843, &t2433_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2433_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854 (MethodInfo* method, void* obj, void** args);
MethodInfo m13844_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m13844, &t2433_TI, &t854_0_0_0, RuntimeInvoker_t854, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2433_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13845_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m13845, &t2433_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2433_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13846_MI = 
{
	"MoveNext", (methodPointerType)&m13846, &t2433_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2433_TI;
extern Il2CppType t2431_0_0_0;
extern void* RuntimeInvoker_t2431 (MethodInfo* method, void* obj, void** args);
MethodInfo m13847_MI = 
{
	"get_Current", (methodPointerType)&m13847, &t2433_TI, &t2431_0_0_0, RuntimeInvoker_t2431, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2433_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13848_MI = 
{
	"get_CurrentKey", (methodPointerType)&m13848, &t2433_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2433_TI;
extern Il2CppType t486_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13849_MI = 
{
	"get_CurrentValue", (methodPointerType)&m13849, &t2433_TI, &t486_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2433_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13850_MI = 
{
	"VerifyState", (methodPointerType)&m13850, &t2433_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2433_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13851_MI = 
{
	"VerifyCurrent", (methodPointerType)&m13851, &t2433_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2433_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13852_MI = 
{
	"Dispose", (methodPointerType)&m13852, &t2433_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2433_MIs[] =
{
	&m13842_MI,
	&m13843_MI,
	&m13844_MI,
	&m13845_MI,
	&m13846_MI,
	&m13847_MI,
	&m13848_MI,
	&m13849_MI,
	&m13850_MI,
	&m13851_MI,
	&m13852_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m13843_MI;
extern MethodInfo m13846_MI;
extern MethodInfo m13852_MI;
extern MethodInfo m13847_MI;
extern MethodInfo m13844_MI;
extern MethodInfo m13845_MI;
static MethodInfo* t2433_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m13843_MI,
	&m13846_MI,
	&m13852_MI,
	&m13847_MI,
	&m13844_MI,
	&m13845_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2432_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2433_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2432_TI,
	&t860_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2432_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2433_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2432_TI, 7},
	{ &t860_TI, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2433_0_0_0;
extern Il2CppType t2433_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2433_TI;
extern Il2CppGenericClass t2433_GC;
extern TypeInfo t859_TI;
TypeInfo t2433_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2433_MIs, t2433_PIs, t2433_FIs, NULL, &t159_TI, NULL, &t859_TI, &t2433_TI, t2433_ITIs, t2433_VT, &EmptyCustomAttributesCache, &t2433_TI, &t2433_0_0_0, &t2433_1_0_0, t2433_IOs, &t2433_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2433)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2438_TI;

#include "t113.h"


extern MethodInfo m13853_MI;
 void m13853 (t2438 * __this, t7 * p0, t114 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m13854_MI;
 t486 * m13854 (t2438 * __this, int32_t p0, t486 * p1, MethodInfo* method){
	typedef  t486 * (*FunctionPointerType) (t7 * __this, int32_t p0, t486 * p1, MethodInfo* method);
	if (__this->f9)
		m13854((t2438 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m13855_MI;
 t7 * m13855 (t2438 * __this, int32_t p0, t486 * p1, t113 * p2, t7 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t60_TI), &p0);
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m13856_MI;
 t486 * m13856 (t2438 * __this, t7 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t486 *)__result;
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2438_m13853_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2438_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m13853_MI = 
{
	".ctor", (methodPointerType)&m13853, &t2438_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2438_m13853_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t486_0_0_0;
static ParameterInfo t2438_m13854_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t2438_TI;
extern Il2CppType t486_0_0_0;
extern void* RuntimeInvoker_t7_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13854_MI = 
{
	"Invoke", (methodPointerType)&m13854, &t2438_TI, &t486_0_0_0, RuntimeInvoker_t7_t60_t7, t2438_m13854_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t486_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2438_m13855_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2438_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t60_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13855_MI = 
{
	"BeginInvoke", (methodPointerType)&m13855, &t2438_TI, &t112_0_0_0, RuntimeInvoker_t7_t60_t7_t7_t7, t2438_m13855_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2438_m13856_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2438_TI;
extern Il2CppType t486_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13856_MI = 
{
	"EndInvoke", (methodPointerType)&m13856, &t2438_TI, &t486_0_0_0, RuntimeInvoker_t7_t7, t2438_m13856_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2438_MIs[] =
{
	&m13853_MI,
	&m13854_MI,
	&m13855_MI,
	&m13856_MI,
	NULL
};
extern MethodInfo m1812_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1813_MI;
extern MethodInfo m123_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1815_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1816_MI;
extern MethodInfo m1817_MI;
extern MethodInfo m1818_MI;
extern MethodInfo m13854_MI;
extern MethodInfo m13855_MI;
extern MethodInfo m13856_MI;
static MethodInfo* t2438_VT[] =
{
	&m1812_MI,
	&m113_MI,
	&m1813_MI,
	&m123_MI,
	&m1814_MI,
	&m1815_MI,
	&m1814_MI,
	&m1816_MI,
	&m1817_MI,
	&m1818_MI,
	&m13854_MI,
	&m13855_MI,
	&m13856_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2438_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2438_0_0_0;
extern Il2CppType t2438_1_0_0;
extern TypeInfo t245_TI;
struct t2438;
extern TypeInfo t2438_TI;
extern Il2CppGenericClass t2438_GC;
extern TypeInfo t859_TI;
TypeInfo t2438_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2438_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t859_TI, &t2438_TI, NULL, t2438_VT, &EmptyCustomAttributesCache, &t2438_TI, &t2438_0_0_0, &t2438_1_0_0, t2438_IOs, &t2438_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2438), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2428.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2428_TI;
#include "t2428MD.h"



extern MethodInfo m13857_MI;
 void m13857 (t2428 * __this, t7 * p0, t114 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m13858_MI;
 t854  m13858 (t2428 * __this, int32_t p0, t486 * p1, MethodInfo* method){
	typedef  t854  (*FunctionPointerType) (t7 * __this, int32_t p0, t486 * p1, MethodInfo* method);
	if (__this->f9)
		m13858((t2428 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m13859_MI;
 t7 * m13859 (t2428 * __this, int32_t p0, t486 * p1, t113 * p2, t7 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t60_TI), &p0);
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m13860_MI;
 t854  m13860 (t2428 * __this, t7 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t854 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.DictionaryEntry>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2428_m13857_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2428_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m13857_MI = 
{
	".ctor", (methodPointerType)&m13857, &t2428_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2428_m13857_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t486_0_0_0;
static ParameterInfo t2428_m13858_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t2428_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13858_MI = 
{
	"Invoke", (methodPointerType)&m13858, &t2428_TI, &t854_0_0_0, RuntimeInvoker_t854_t60_t7, t2428_m13858_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t486_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2428_m13859_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2428_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t60_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13859_MI = 
{
	"BeginInvoke", (methodPointerType)&m13859, &t2428_TI, &t112_0_0_0, RuntimeInvoker_t7_t60_t7_t7_t7, t2428_m13859_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2428_m13860_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2428_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13860_MI = 
{
	"EndInvoke", (methodPointerType)&m13860, &t2428_TI, &t854_0_0_0, RuntimeInvoker_t854_t7, t2428_m13860_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2428_MIs[] =
{
	&m13857_MI,
	&m13858_MI,
	&m13859_MI,
	&m13860_MI,
	NULL
};
extern MethodInfo m1812_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1813_MI;
extern MethodInfo m123_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1815_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1816_MI;
extern MethodInfo m1817_MI;
extern MethodInfo m1818_MI;
extern MethodInfo m13858_MI;
extern MethodInfo m13859_MI;
extern MethodInfo m13860_MI;
static MethodInfo* t2428_VT[] =
{
	&m1812_MI,
	&m113_MI,
	&m1813_MI,
	&m123_MI,
	&m1814_MI,
	&m1815_MI,
	&m1814_MI,
	&m1816_MI,
	&m1817_MI,
	&m1818_MI,
	&m13858_MI,
	&m13859_MI,
	&m13860_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2428_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2428_0_0_0;
extern Il2CppType t2428_1_0_0;
extern TypeInfo t245_TI;
struct t2428;
extern TypeInfo t2428_TI;
extern Il2CppGenericClass t2428_GC;
extern TypeInfo t859_TI;
TypeInfo t2428_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2428_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t859_TI, &t2428_TI, NULL, t2428_VT, &EmptyCustomAttributesCache, &t2428_TI, &t2428_0_0_0, &t2428_1_0_0, t2428_IOs, &t2428_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2428), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2439.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2439_TI;
#include "t2439MD.h"



extern MethodInfo m13861_MI;
 void m13861 (t2439 * __this, t7 * p0, t114 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m13862_MI;
 t2431  m13862 (t2439 * __this, int32_t p0, t486 * p1, MethodInfo* method){
	typedef  t2431  (*FunctionPointerType) (t7 * __this, int32_t p0, t486 * p1, MethodInfo* method);
	if (__this->f9)
		m13862((t2439 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m13863_MI;
 t7 * m13863 (t2439 * __this, int32_t p0, t486 * p1, t113 * p2, t7 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t60_TI), &p0);
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m13864_MI;
 t2431  m13864 (t2439 * __this, t7 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2431 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2439_m13861_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2439_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m13861_MI = 
{
	".ctor", (methodPointerType)&m13861, &t2439_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2439_m13861_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t486_0_0_0;
static ParameterInfo t2439_m13862_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t2439_TI;
extern Il2CppType t2431_0_0_0;
extern void* RuntimeInvoker_t2431_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13862_MI = 
{
	"Invoke", (methodPointerType)&m13862, &t2439_TI, &t2431_0_0_0, RuntimeInvoker_t2431_t60_t7, t2439_m13862_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t486_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2439_m13863_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2439_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t60_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13863_MI = 
{
	"BeginInvoke", (methodPointerType)&m13863, &t2439_TI, &t112_0_0_0, RuntimeInvoker_t7_t60_t7_t7_t7, t2439_m13863_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2439_m13864_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2439_TI;
extern Il2CppType t2431_0_0_0;
extern void* RuntimeInvoker_t2431_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13864_MI = 
{
	"EndInvoke", (methodPointerType)&m13864, &t2439_TI, &t2431_0_0_0, RuntimeInvoker_t2431_t7, t2439_m13864_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2439_MIs[] =
{
	&m13861_MI,
	&m13862_MI,
	&m13863_MI,
	&m13864_MI,
	NULL
};
extern MethodInfo m1812_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1813_MI;
extern MethodInfo m123_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1815_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1816_MI;
extern MethodInfo m1817_MI;
extern MethodInfo m1818_MI;
extern MethodInfo m13862_MI;
extern MethodInfo m13863_MI;
extern MethodInfo m13864_MI;
static MethodInfo* t2439_VT[] =
{
	&m1812_MI,
	&m113_MI,
	&m1813_MI,
	&m123_MI,
	&m1814_MI,
	&m1815_MI,
	&m1814_MI,
	&m1816_MI,
	&m1817_MI,
	&m1818_MI,
	&m13862_MI,
	&m13863_MI,
	&m13864_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2439_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2439_0_0_0;
extern Il2CppType t2439_1_0_0;
extern TypeInfo t245_TI;
struct t2439;
extern TypeInfo t2439_TI;
extern Il2CppGenericClass t2439_GC;
extern TypeInfo t859_TI;
TypeInfo t2439_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2439_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t859_TI, &t2439_TI, NULL, t2439_VT, &EmptyCustomAttributesCache, &t2439_TI, &t2439_0_0_0, &t2439_1_0_0, t2439_IOs, &t2439_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2439), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2440.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2440_TI;
#include "t2440MD.h"

extern TypeInfo t2440_TI;
extern TypeInfo t2433_TI;
extern TypeInfo t860_TI;
extern TypeInfo t854_TI;
extern TypeInfo t2431_TI;
extern TypeInfo t60_TI;
extern TypeInfo t55_TI;
extern MethodInfo m7825_MI;
extern MethodInfo m13847_MI;
extern MethodInfo m13808_MI;
extern MethodInfo m13867_MI;
extern MethodInfo m116_MI;
extern MethodInfo m13805_MI;
extern MethodInfo m13846_MI;


extern MethodInfo m13865_MI;
 void m13865 (t2440 * __this, t489 * p0, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		t2433  L_0 = m13805(p0, &m13805_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m13866_MI;
 bool m13866 (t2440 * __this, MethodInfo* method){
	{
		t2433 * L_0 = &(__this->f0);
		bool L_1 = m13846(L_0, &m13846_MI);
		return L_1;
	}
}
extern MethodInfo m13867_MI;
 t854  m13867 (t2440 * __this, MethodInfo* method){
	{
		t2433  L_0 = (__this->f0);
		t2433  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2433_TI), &L_1);
		t854  L_3 = (t854 )InterfaceFuncInvoker0< t854  >::Invoke(&m7825_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m13868_MI;
 t7 * m13868 (t2440 * __this, MethodInfo* method){
	t2431  V_0 = {0};
	{
		t2433 * L_0 = &(__this->f0);
		t2431  L_1 = m13847(L_0, &m13847_MI);
		V_0 = L_1;
		int32_t L_2 = m13808((&V_0), &m13808_MI);
		int32_t L_3 = L_2;
		t7 * L_4 = Box(InitializedTypeInfo(&t60_TI), &L_3);
		return L_4;
	}
}
extern MethodInfo m13869_MI;
 t7 * m13869 (t2440 * __this, MethodInfo* method){
	{
		t854  L_0 = (t854 )VirtFuncInvoker0< t854  >::Invoke(&m13867_MI, __this);
		t854  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t854_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
extern Il2CppType t2433_0_0_1;
FieldInfo t2440_f0_FieldInfo = 
{
	"host_enumerator", &t2433_0_0_1, &t2440_TI, offsetof(t2440, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2440_FIs[] =
{
	&t2440_f0_FieldInfo,
	NULL
};
extern MethodInfo m13867_MI;
static PropertyInfo t2440____Entry_PropertyInfo = 
{
	&t2440_TI, "Entry", &m13867_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13868_MI;
static PropertyInfo t2440____Key_PropertyInfo = 
{
	&t2440_TI, "Key", &m13868_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13869_MI;
static PropertyInfo t2440____Current_PropertyInfo = 
{
	&t2440_TI, "Current", &m13869_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2440_PIs[] =
{
	&t2440____Entry_PropertyInfo,
	&t2440____Key_PropertyInfo,
	&t2440____Current_PropertyInfo,
	NULL
};
extern Il2CppType t489_0_0_0;
static ParameterInfo t2440_m13865_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t489_0_0_0},
};
extern TypeInfo t2440_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13865_MI = 
{
	".ctor", (methodPointerType)&m13865, &t2440_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2440_m13865_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2440_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13866_MI = 
{
	"MoveNext", (methodPointerType)&m13866, &t2440_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2440_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854 (MethodInfo* method, void* obj, void** args);
MethodInfo m13867_MI = 
{
	"get_Entry", (methodPointerType)&m13867, &t2440_TI, &t854_0_0_0, RuntimeInvoker_t854, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2440_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13868_MI = 
{
	"get_Key", (methodPointerType)&m13868, &t2440_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2440_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13869_MI = 
{
	"get_Current", (methodPointerType)&m13869, &t2440_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2440_MIs[] =
{
	&m13865_MI,
	&m13866_MI,
	&m13867_MI,
	&m13868_MI,
	&m13869_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m13869_MI;
extern MethodInfo m13866_MI;
extern MethodInfo m13867_MI;
extern MethodInfo m13868_MI;
static MethodInfo* t2440_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m13869_MI,
	&m13866_MI,
	&m13867_MI,
	&m13868_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2440_ITIs[] = 
{
	&t12_TI,
	&t860_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2440_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2440_0_0_0;
extern Il2CppType t2440_1_0_0;
extern TypeInfo t7_TI;
struct t2440;
extern TypeInfo t2440_TI;
extern Il2CppGenericClass t2440_GC;
extern TypeInfo t859_TI;
TypeInfo t2440_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t2440_MIs, t2440_PIs, t2440_FIs, NULL, &t7_TI, NULL, &t859_TI, &t2440_TI, t2440_ITIs, t2440_VT, &EmptyCustomAttributesCache, &t2440_TI, &t2440_0_0_0, &t2440_1_0_0, t2440_IOs, &t2440_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2440), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5351_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.GUILayoutUtility/LayoutCache>
extern Il2CppType t486_0_0_0;
extern Il2CppType t486_0_0_0;
static ParameterInfo t5351_m26398_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t5351_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26398_MI = 
{
	"Equals", NULL, &t5351_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t5351_m26398_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t486_0_0_0;
static ParameterInfo t5351_m26431_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t5351_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26431_MI = 
{
	"GetHashCode", NULL, &t5351_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5351_m26431_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5351_MIs[] =
{
	&m26398_MI,
	&m26431_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5351_0_0_0;
extern Il2CppType t5351_1_0_0;
struct t5351;
extern TypeInfo t5351_TI;
extern Il2CppGenericClass t5351_GC;
TypeInfo t5351_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5351_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5351_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5351_TI, &t5351_0_0_0, &t5351_1_0_0, NULL, &t5351_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#include "t2441.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2441_TI;
#include "t2441MD.h"

#include "t863.h"
#include "t2442.h"
extern TypeInfo t2441_TI;
extern TypeInfo t5354_TI;
extern TypeInfo t70_TI;
extern TypeInfo t486_TI;
extern TypeInfo t55_TI;
extern TypeInfo t863_TI;
extern TypeInfo t553_TI;
extern TypeInfo t2442_TI;
extern TypeInfo t60_TI;
#include "t70MD.h"
#include "t1249MD.h"
#include "t2442MD.h"
extern Il2CppType t5354_0_0_0;
extern Il2CppType t486_0_0_0;
extern Il2CppType t863_0_0_0;
extern MethodInfo m116_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3097_MI;
extern MethodInfo m3095_MI;
extern MethodInfo m6560_MI;
extern MethodInfo m13875_MI;
extern MethodInfo m26432_MI;
extern MethodInfo m26399_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutUtility/LayoutCache>
extern Il2CppType t2441_0_0_49;
FieldInfo t2441_f0_FieldInfo = 
{
	"_default", &t2441_0_0_49, &t2441_TI, offsetof(t2441_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2441_FIs[] =
{
	&t2441_f0_FieldInfo,
	NULL
};
extern MethodInfo m13874_MI;
static PropertyInfo t2441____Default_PropertyInfo = 
{
	&t2441_TI, "Default", &m13874_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2441_PIs[] =
{
	&t2441____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2441_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13870_MI = 
{
	".ctor", (methodPointerType)&m8378_gshared, &t2441_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2441_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13871_MI = 
{
	".cctor", (methodPointerType)&m8379_gshared, &t2441_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2441_m13872_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2441_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13872_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8380_gshared, &t2441_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2441_m13872_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2441_m13873_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2441_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13873_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8381_gshared, &t2441_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2441_m13873_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t486_0_0_0;
static ParameterInfo t2441_m26432_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t2441_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26432_MI = 
{
	"GetHashCode", NULL, &t2441_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2441_m26432_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t486_0_0_0;
extern Il2CppType t486_0_0_0;
static ParameterInfo t2441_m26399_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t2441_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26399_MI = 
{
	"Equals", NULL, &t2441_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2441_m26399_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2441_TI;
extern Il2CppType t2441_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13874_MI = 
{
	"get_Default", (methodPointerType)&m8382_gshared, &t2441_TI, &t2441_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2441_MIs[] =
{
	&m13870_MI,
	&m13871_MI,
	&m13872_MI,
	&m13873_MI,
	&m26432_MI,
	&m26399_MI,
	&m13874_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m26399_MI;
extern MethodInfo m26432_MI;
extern MethodInfo m13873_MI;
extern MethodInfo m13872_MI;
static MethodInfo* t2441_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m26399_MI,
	&m26432_MI,
	&m13873_MI,
	&m13872_MI,
	NULL,
	NULL,
};
extern TypeInfo t5351_TI;
extern TypeInfo t886_TI;
static TypeInfo* t2441_ITIs[] = 
{
	&t5351_TI,
	&t886_TI,
};
extern TypeInfo t5351_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t2441_IOs[] = 
{
	{ &t5351_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t5354_0_0_0;
extern Il2CppType t486_0_0_0;
extern TypeInfo t2441_TI;
extern TypeInfo t2441_TI;
extern TypeInfo t2442_TI;
extern MethodInfo m13875_MI;
extern TypeInfo t486_TI;
extern MethodInfo m26432_MI;
extern MethodInfo m26399_MI;
static void* t2441_RGCTXData[9] = 
{
	(void*)&t5354_0_0_0,
	(void*)&t486_0_0_0,
	&t2441_TI,
	&t2441_TI,
	&t2442_TI,
	&m13875_MI,
	&t486_TI,
	&m26432_MI,
	&m26399_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2441_0_0_0;
extern Il2CppType t2441_1_0_0;
extern TypeInfo t7_TI;
struct t2441;
extern TypeInfo t2441_TI;
extern Il2CppGenericClass t2441_GC;
TypeInfo t2441_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2441_MIs, t2441_PIs, t2441_FIs, NULL, &t7_TI, NULL, NULL, &t2441_TI, t2441_ITIs, t2441_VT, &EmptyCustomAttributesCache, &t2441_TI, &t2441_0_0_0, &t2441_1_0_0, t2441_IOs, &t2441_GC, NULL, NULL, NULL, t2441_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2441), 0, -1, sizeof(t2441_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5354_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.GUILayoutUtility/LayoutCache>
extern Il2CppType t486_0_0_0;
static ParameterInfo t5354_m26433_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t5354_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26433_MI = 
{
	"Equals", NULL, &t5354_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5354_m26433_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5354_MIs[] =
{
	&m26433_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5354_0_0_0;
extern Il2CppType t5354_1_0_0;
struct t5354;
extern TypeInfo t5354_TI;
extern Il2CppGenericClass t5354_GC;
TypeInfo t5354_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5354_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5354_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5354_TI, &t5354_0_0_0, &t5354_1_0_0, NULL, &t5354_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2442_TI;

extern TypeInfo t486_TI;
extern TypeInfo t7_TI;
extern TypeInfo t60_TI;
extern TypeInfo t55_TI;
extern MethodInfo m13870_MI;
extern MethodInfo m122_MI;
extern MethodInfo m121_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUILayoutUtility/LayoutCache>
extern TypeInfo t2442_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13875_MI = 
{
	".ctor", (methodPointerType)&m8413_gshared, &t2442_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t486_0_0_0;
static ParameterInfo t2442_m13876_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t2442_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13876_MI = 
{
	"GetHashCode", (methodPointerType)&m8414_gshared, &t2442_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2442_m13876_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t486_0_0_0;
extern Il2CppType t486_0_0_0;
static ParameterInfo t2442_m13877_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t486_0_0_0},
};
extern TypeInfo t2442_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13877_MI = 
{
	"Equals", (methodPointerType)&m8415_gshared, &t2442_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2442_m13877_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2442_MIs[] =
{
	&m13875_MI,
	&m13876_MI,
	&m13877_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m13877_MI;
extern MethodInfo m13876_MI;
extern MethodInfo m13873_MI;
extern MethodInfo m13872_MI;
extern MethodInfo m13876_MI;
extern MethodInfo m13877_MI;
static MethodInfo* t2442_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m13877_MI,
	&m13876_MI,
	&m13873_MI,
	&m13872_MI,
	&m13876_MI,
	&m13877_MI,
};
extern TypeInfo t5351_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t2442_IOs[] = 
{
	{ &t5351_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t5354_0_0_0;
extern Il2CppType t486_0_0_0;
extern TypeInfo t2441_TI;
extern TypeInfo t2441_TI;
extern TypeInfo t2442_TI;
extern MethodInfo m13875_MI;
extern TypeInfo t486_TI;
extern MethodInfo m26432_MI;
extern MethodInfo m26399_MI;
extern MethodInfo m13870_MI;
extern TypeInfo t486_TI;
static void* t2442_RGCTXData[11] = 
{
	(void*)&t5354_0_0_0,
	(void*)&t486_0_0_0,
	&t2441_TI,
	&t2441_TI,
	&t2442_TI,
	&m13875_MI,
	&t486_TI,
	&m26432_MI,
	&m26399_MI,
	&m13870_MI,
	&t486_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2442_0_0_0;
extern Il2CppType t2442_1_0_0;
extern TypeInfo t2441_TI;
struct t2442;
extern TypeInfo t2442_TI;
extern Il2CppGenericClass t2442_GC;
extern TypeInfo t862_TI;
TypeInfo t2442_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2442_MIs, NULL, NULL, NULL, &t2441_TI, NULL, &t862_TI, &t2442_TI, NULL, t2442_VT, &EmptyCustomAttributesCache, &t2442_TI, &t2442_0_0_0, &t2442_1_0_0, t2442_IOs, &t2442_GC, NULL, NULL, NULL, t2442_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2442), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t604.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t604_TI;
#include "t604MD.h"

#include "t491.h"
#include "t492.h"
extern TypeInfo t604_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t491_TI;
extern TypeInfo t492_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1312_TI;
extern MethodInfo m13881_MI;
extern MethodInfo m7022_MI;
extern MethodInfo m1555_MI;
extern MethodInfo m3114_MI;
extern MethodInfo m7227_MI;
extern MethodInfo m7023_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
extern Il2CppType t492_0_0_1;
FieldInfo t604_f0_FieldInfo = 
{
	"l", &t492_0_0_1, &t604_TI, offsetof(t604, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t604_f1_FieldInfo = 
{
	"next", &t60_0_0_1, &t604_TI, offsetof(t604, f1) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t604_f2_FieldInfo = 
{
	"ver", &t60_0_0_1, &t604_TI, offsetof(t604, f2) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t491_0_0_1;
FieldInfo t604_f3_FieldInfo = 
{
	"current", &t491_0_0_1, &t604_TI, offsetof(t604, f3) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t604_FIs[] =
{
	&t604_f0_FieldInfo,
	&t604_f1_FieldInfo,
	&t604_f2_FieldInfo,
	&t604_f3_FieldInfo,
	NULL
};
extern MethodInfo m13879_MI;
static PropertyInfo t604____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t604_TI, "System.Collections.IEnumerator.Current", &m13879_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2969_MI;
static PropertyInfo t604____Current_PropertyInfo = 
{
	&t604_TI, "Current", &m2969_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t604_PIs[] =
{
	&t604____System_Collections_IEnumerator_Current_PropertyInfo,
	&t604____Current_PropertyInfo,
	NULL
};
extern Il2CppType t492_0_0_0;
static ParameterInfo t604_m13878_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t492_0_0_0},
};
extern TypeInfo t604_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13878_MI = 
{
	".ctor", (methodPointerType)&m8306_gshared, &t604_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t604_m13878_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t604_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13879_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8307_gshared, &t604_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t604_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13880_MI = 
{
	"Dispose", (methodPointerType)&m8308_gshared, &t604_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t604_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13881_MI = 
{
	"VerifyState", (methodPointerType)&m8309_gshared, &t604_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t604_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m2970_MI = 
{
	"MoveNext", (methodPointerType)&m8310_gshared, &t604_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t604_TI;
extern Il2CppType t491_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m2969_MI = 
{
	"get_Current", (methodPointerType)&m8311_gshared, &t604_TI, &t491_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t604_MIs[] =
{
	&m13878_MI,
	&m13879_MI,
	&m13880_MI,
	&m13881_MI,
	&m2970_MI,
	&m2969_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m13879_MI;
extern MethodInfo m2970_MI;
extern MethodInfo m13880_MI;
extern MethodInfo m2969_MI;
static MethodInfo* t604_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m13879_MI,
	&m2970_MI,
	&m13880_MI,
	&m2969_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2444_TI;
static TypeInfo* t604_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2444_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2444_TI;
static Il2CppInterfaceOffsetPair t604_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2444_TI, 7},
};
extern MethodInfo m13881_MI;
extern TypeInfo t491_TI;
extern TypeInfo t604_TI;
static void* t604_RGCTXData[3] = 
{
	&m13881_MI,
	&t491_TI,
	&t604_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t604_0_0_0;
extern Il2CppType t604_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t604_TI;
extern Il2CppGenericClass t604_GC;
extern TypeInfo t866_TI;
TypeInfo t604_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t604_MIs, t604_PIs, t604_FIs, NULL, &t159_TI, NULL, &t866_TI, &t604_TI, t604_ITIs, t604_VT, &EmptyCustomAttributesCache, &t604_TI, &t604_0_0_0, &t604_1_0_0, t604_IOs, &t604_GC, NULL, NULL, NULL, t604_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t604)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2444_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
extern MethodInfo m26434_MI;
static PropertyInfo t2444____Current_PropertyInfo = 
{
	&t2444_TI, "Current", &m26434_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2444_PIs[] =
{
	&t2444____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2444_TI;
extern Il2CppType t491_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26434_MI = 
{
	"get_Current", NULL, &t2444_TI, &t491_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2444_MIs[] =
{
	&m26434_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t2444_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2444_0_0_0;
extern Il2CppType t2444_1_0_0;
struct t2444;
extern TypeInfo t2444_TI;
extern Il2CppGenericClass t2444_GC;
TypeInfo t2444_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2444_MIs, t2444_PIs, NULL, NULL, NULL, NULL, NULL, &t2444_TI, t2444_ITIs, NULL, &EmptyCustomAttributesCache, &t2444_TI, &t2444_0_0_0, &t2444_1_0_0, NULL, &t2444_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t492_TI;
#include "t492MD.h"

#include "t2447.h"
#include "t2448.h"
#include "t2455.h"
#include "t2449.h"
extern TypeInfo t492_TI;
extern TypeInfo t491_TI;
extern TypeInfo t60_TI;
extern TypeInfo t53_TI;
extern TypeInfo t348_TI;
extern TypeInfo t601_TI;
extern TypeInfo t1294_TI;
extern TypeInfo t88_TI;
extern TypeInfo t2443_TI;
extern TypeInfo t604_TI;
extern TypeInfo t55_TI;
extern TypeInfo t2445_TI;
extern TypeInfo t2446_TI;
extern TypeInfo t2444_TI;
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2447_TI;
extern TypeInfo t87_TI;
extern TypeInfo t2448_TI;
extern TypeInfo t2455_TI;
#include "t348MD.h"
#include "t88MD.h"
#include "t617MD.h"
#include "t2447MD.h"
#include "t2448MD.h"
#include "t2455MD.h"
extern MethodInfo m2973_MI;
extern MethodInfo m13926_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m216_MI;
extern MethodInfo m19966_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m13913_MI;
extern MethodInfo m116_MI;
extern MethodInfo m2968_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m13899_MI;
extern MethodInfo m13906_MI;
extern MethodInfo m13911_MI;
extern MethodInfo m13914_MI;
extern MethodInfo m13916_MI;
extern MethodInfo m13900_MI;
extern MethodInfo m13924_MI;
extern MethodInfo m7028_MI;
extern MethodInfo m13925_MI;
extern MethodInfo m26435_MI;
extern MethodInfo m26436_MI;
extern MethodInfo m26437_MI;
extern MethodInfo m26434_MI;
extern MethodInfo m7424_MI;
extern MethodInfo m202_MI;
extern MethodInfo m13915_MI;
extern MethodInfo m13901_MI;
extern MethodInfo m13902_MI;
extern MethodInfo m13932_MI;
extern MethodInfo m3874_MI;
extern MethodInfo m19968_MI;
extern MethodInfo m13909_MI;
extern MethodInfo m13910_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m14007_MI;
extern MethodInfo m13878_MI;
extern MethodInfo m13912_MI;
extern MethodInfo m13918_MI;
extern MethodInfo m3890_MI;
extern MethodInfo m14013_MI;
extern MethodInfo m19970_MI;
extern MethodInfo m19978_MI;
extern MethodInfo m3877_MI;
struct t52;
struct t52;
 void m17412_gshared (t7 * __this, t350** p0, int32_t p1, MethodInfo* method);
#define m17412(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
#define m19966(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
extern MethodInfo m19966_MI;
struct t52;
#include "t2453.h"
struct t52;
#include "t1511.h"
 int32_t m7824_gshared (t7 * __this, t350* p0, t7 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m7824(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m19968(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m19968_MI;
struct t52;
struct t52;
 void m17481_gshared (t7 * __this, t350* p0, int32_t p1, int32_t p2, t7* p3, MethodInfo* method);
#define m17481(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
#define m19970(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
extern MethodInfo m19970_MI;
struct t52;
struct t52;
#include "t1679.h"
 void m17588_gshared (t7 * __this, t350* p0, int32_t p1, t1679 * p2, MethodInfo* method);
#define m17588(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
#define m19978(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
extern MethodInfo m19978_MI;


extern MethodInfo m2968_MI;
 t604  m2968 (t492 * __this, MethodInfo* method){
	{
		t604  L_0 = {0};
		m13878(&L_0, __this, &m13878_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
extern Il2CppType t60_0_0_32849;
FieldInfo t492_f0_FieldInfo = 
{
	"DefaultCapacity", &t60_0_0_32849, &t492_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2443_0_0_1;
FieldInfo t492_f1_FieldInfo = 
{
	"_items", &t2443_0_0_1, &t492_TI, offsetof(t492, f1), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t492_f2_FieldInfo = 
{
	"_size", &t60_0_0_1, &t492_TI, offsetof(t492, f2), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t492_f3_FieldInfo = 
{
	"_version", &t60_0_0_1, &t492_TI, offsetof(t492, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2443_0_0_49;
FieldInfo t492_f4_FieldInfo = 
{
	"EmptyArray", &t2443_0_0_49, &t492_TI, offsetof(t492_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t492_FIs[] =
{
	&t492_f0_FieldInfo,
	&t492_f1_FieldInfo,
	&t492_f2_FieldInfo,
	&t492_f3_FieldInfo,
	&t492_f4_FieldInfo,
	NULL
};
static const int32_t t492_f0_DefaultValueData = 4;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t492_f0_DefaultValue = 
{
	&t492_f0_FieldInfo, { (char*)&t492_f0_DefaultValueData, &t60_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t492_FDVs[] = 
{
	&t492_f0_DefaultValue,
	NULL
};
extern MethodInfo m13892_MI;
static PropertyInfo t492____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t492_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13892_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13893_MI;
static PropertyInfo t492____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t492_TI, "System.Collections.ICollection.IsSynchronized", &m13893_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13894_MI;
static PropertyInfo t492____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t492_TI, "System.Collections.ICollection.SyncRoot", &m13894_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13895_MI;
static PropertyInfo t492____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t492_TI, "System.Collections.IList.IsFixedSize", &m13895_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13896_MI;
static PropertyInfo t492____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t492_TI, "System.Collections.IList.IsReadOnly", &m13896_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13897_MI;
extern MethodInfo m13898_MI;
static PropertyInfo t492____System_Collections_IList_Item_PropertyInfo = 
{
	&t492_TI, "System.Collections.IList.Item", &m13897_MI, &m13898_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13924_MI;
extern MethodInfo m13925_MI;
static PropertyInfo t492____Capacity_PropertyInfo = 
{
	&t492_TI, "Capacity", &m13924_MI, &m13925_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2972_MI;
static PropertyInfo t492____Count_PropertyInfo = 
{
	&t492_TI, "Count", &m2972_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2973_MI;
extern MethodInfo m13926_MI;
static PropertyInfo t492____Item_PropertyInfo = 
{
	&t492_TI, "Item", &m2973_MI, &m13926_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t492_PIs[] =
{
	&t492____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t492____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t492____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t492____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t492____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t492____System_Collections_IList_Item_PropertyInfo,
	&t492____Capacity_PropertyInfo,
	&t492____Count_PropertyInfo,
	&t492____Item_PropertyInfo,
	NULL
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m2971_MI = 
{
	".ctor", (methodPointerType)&m8211_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t492_m13882_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13882_MI = 
{
	".ctor", (methodPointerType)&m8213_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t492_m13882_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13883_MI = 
{
	".cctor", (methodPointerType)&m8215_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t492_TI;
extern Il2CppType t2444_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13884_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m8217_gshared, &t492_TI, &t2444_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t492_m13885_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13885_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8219_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t492_m13885_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t492_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13886_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8221_gshared, &t492_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t492_m13887_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13887_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8223_gshared, &t492_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t492_m13887_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t492_m13888_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13888_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8225_gshared, &t492_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t492_m13888_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t492_m13889_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13889_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8227_gshared, &t492_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t492_m13889_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t492_m13890_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13890_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8229_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t492_m13890_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t492_m13891_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13891_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8231_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t492_m13891_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t492_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13892_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8233_gshared, &t492_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t492_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13893_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8235_gshared, &t492_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t492_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13894_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8237_gshared, &t492_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t492_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13895_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8239_gshared, &t492_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t492_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13896_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8241_gshared, &t492_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t492_m13897_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13897_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8243_gshared, &t492_TI, &t7_0_0_0, RuntimeInvoker_t7_t60, t492_m13897_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t492_m13898_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13898_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8245_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t492_m13898_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t492_m13899_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13899_MI = 
{
	"Add", (methodPointerType)&m8247_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t492_m13899_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t492_m13900_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13900_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m8249_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t492_m13900_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2445_0_0_0;
static ParameterInfo t492_m13901_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2445_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13901_MI = 
{
	"AddCollection", (methodPointerType)&m8251_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t492_m13901_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2446_0_0_0;
static ParameterInfo t492_m13902_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2446_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13902_MI = 
{
	"AddEnumerable", (methodPointerType)&m8253_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t492_m13902_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2446_0_0_0;
static ParameterInfo t492_m13903_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2446_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13903_MI = 
{
	"AddRange", (methodPointerType)&m8255_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t492_m13903_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t492_TI;
extern Il2CppType t2447_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13904_MI = 
{
	"AsReadOnly", (methodPointerType)&m8257_gshared, &t492_TI, &t2447_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13905_MI = 
{
	"Clear", (methodPointerType)&m8259_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t492_m13906_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13906_MI = 
{
	"Contains", (methodPointerType)&m8261_gshared, &t492_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t492_m13906_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2443_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t492_m13907_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2443_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13907_MI = 
{
	"CopyTo", (methodPointerType)&m8263_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t492_m13907_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2448_0_0_0;
static ParameterInfo t492_m13908_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2448_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t491_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13908_MI = 
{
	"Find", (methodPointerType)&m8265_gshared, &t492_TI, &t491_0_0_0, RuntimeInvoker_t7_t7, t492_m13908_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2448_0_0_0;
static ParameterInfo t492_m13909_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2448_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13909_MI = 
{
	"CheckMatch", (methodPointerType)&m8267_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t492_m13909_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t2448_0_0_0;
static ParameterInfo t492_m13910_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2448_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13910_MI = 
{
	"GetIndex", (methodPointerType)&m8269_gshared, &t492_TI, &t60_0_0_0, RuntimeInvoker_t60_t60_t60_t7, t492_m13910_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t492_TI;
extern Il2CppType t604_0_0_0;
extern void* RuntimeInvoker_t604 (MethodInfo* method, void* obj, void** args);
MethodInfo m2968_MI = 
{
	"GetEnumerator", (methodPointerType)&m2968, &t492_TI, &t604_0_0_0, RuntimeInvoker_t604, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t492_m13911_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13911_MI = 
{
	"IndexOf", (methodPointerType)&m8272_gshared, &t492_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t492_m13911_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t492_m13912_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13912_MI = 
{
	"Shift", (methodPointerType)&m8274_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t492_m13912_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t492_m13913_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13913_MI = 
{
	"CheckIndex", (methodPointerType)&m8276_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t492_m13913_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t491_0_0_0;
static ParameterInfo t492_m13914_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13914_MI = 
{
	"Insert", (methodPointerType)&m8278_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t492_m13914_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2446_0_0_0;
static ParameterInfo t492_m13915_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2446_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13915_MI = 
{
	"CheckCollection", (methodPointerType)&m8280_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t492_m13915_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t492_m13916_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13916_MI = 
{
	"Remove", (methodPointerType)&m8282_gshared, &t492_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t492_m13916_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2448_0_0_0;
static ParameterInfo t492_m13917_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2448_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13917_MI = 
{
	"RemoveAll", (methodPointerType)&m8284_gshared, &t492_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t492_m13917_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t492_m13918_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13918_MI = 
{
	"RemoveAt", (methodPointerType)&m8286_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t492_m13918_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13919_MI = 
{
	"Reverse", (methodPointerType)&m8288_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13920_MI = 
{
	"Sort", (methodPointerType)&m8290_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2449_0_0_0;
static ParameterInfo t492_m13921_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2449_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13921_MI = 
{
	"Sort", (methodPointerType)&m8292_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t492_m13921_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t492_TI;
extern Il2CppType t2443_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13922_MI = 
{
	"ToArray", (methodPointerType)&m8294_gshared, &t492_TI, &t2443_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13923_MI = 
{
	"TrimExcess", (methodPointerType)&m8296_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t492_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13924_MI = 
{
	"get_Capacity", (methodPointerType)&m8298_gshared, &t492_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t492_m13925_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13925_MI = 
{
	"set_Capacity", (methodPointerType)&m8300_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t492_m13925_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t492_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m2972_MI = 
{
	"get_Count", (methodPointerType)&m8301_gshared, &t492_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t492_m2973_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t491_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m2973_MI = 
{
	"get_Item", (methodPointerType)&m8302_gshared, &t492_TI, &t491_0_0_0, RuntimeInvoker_t7_t60, t492_m2973_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t491_0_0_0;
static ParameterInfo t492_m13926_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13926_MI = 
{
	"set_Item", (methodPointerType)&m8304_gshared, &t492_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t492_m13926_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t492_MIs[] =
{
	&m2971_MI,
	&m13882_MI,
	&m13883_MI,
	&m13884_MI,
	&m13885_MI,
	&m13886_MI,
	&m13887_MI,
	&m13888_MI,
	&m13889_MI,
	&m13890_MI,
	&m13891_MI,
	&m13892_MI,
	&m13893_MI,
	&m13894_MI,
	&m13895_MI,
	&m13896_MI,
	&m13897_MI,
	&m13898_MI,
	&m13899_MI,
	&m13900_MI,
	&m13901_MI,
	&m13902_MI,
	&m13903_MI,
	&m13904_MI,
	&m13905_MI,
	&m13906_MI,
	&m13907_MI,
	&m13908_MI,
	&m13909_MI,
	&m13910_MI,
	&m2968_MI,
	&m13911_MI,
	&m13912_MI,
	&m13913_MI,
	&m13914_MI,
	&m13915_MI,
	&m13916_MI,
	&m13917_MI,
	&m13918_MI,
	&m13919_MI,
	&m13920_MI,
	&m13921_MI,
	&m13922_MI,
	&m13923_MI,
	&m13924_MI,
	&m13925_MI,
	&m2972_MI,
	&m2973_MI,
	&m13926_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m13886_MI;
extern MethodInfo m2972_MI;
extern MethodInfo m13893_MI;
extern MethodInfo m13894_MI;
extern MethodInfo m13885_MI;
extern MethodInfo m13895_MI;
extern MethodInfo m13896_MI;
extern MethodInfo m13897_MI;
extern MethodInfo m13898_MI;
extern MethodInfo m13887_MI;
extern MethodInfo m13905_MI;
extern MethodInfo m13888_MI;
extern MethodInfo m13889_MI;
extern MethodInfo m13890_MI;
extern MethodInfo m13891_MI;
extern MethodInfo m13918_MI;
extern MethodInfo m2972_MI;
extern MethodInfo m13892_MI;
extern MethodInfo m13899_MI;
extern MethodInfo m13905_MI;
extern MethodInfo m13906_MI;
extern MethodInfo m13907_MI;
extern MethodInfo m13916_MI;
extern MethodInfo m13884_MI;
extern MethodInfo m13911_MI;
extern MethodInfo m13914_MI;
extern MethodInfo m13918_MI;
extern MethodInfo m2973_MI;
extern MethodInfo m13926_MI;
static MethodInfo* t492_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m13886_MI,
	&m2972_MI,
	&m13893_MI,
	&m13894_MI,
	&m13885_MI,
	&m13895_MI,
	&m13896_MI,
	&m13897_MI,
	&m13898_MI,
	&m13887_MI,
	&m13905_MI,
	&m13888_MI,
	&m13889_MI,
	&m13890_MI,
	&m13891_MI,
	&m13918_MI,
	&m2972_MI,
	&m13892_MI,
	&m13899_MI,
	&m13905_MI,
	&m13906_MI,
	&m13907_MI,
	&m13916_MI,
	&m13884_MI,
	&m13911_MI,
	&m13914_MI,
	&m13918_MI,
	&m2973_MI,
	&m13926_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2445_TI;
extern TypeInfo t2446_TI;
extern TypeInfo t2451_TI;
static TypeInfo* t492_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t1041_TI,
	&t2445_TI,
	&t2446_TI,
	&t2451_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2445_TI;
extern TypeInfo t2446_TI;
extern TypeInfo t2451_TI;
static Il2CppInterfaceOffsetPair t492_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t1041_TI, 9},
	{ &t2445_TI, 20},
	{ &t2446_TI, 27},
	{ &t2451_TI, 28},
};
extern TypeInfo t492_TI;
extern TypeInfo t2443_TI;
extern MethodInfo m2968_MI;
extern TypeInfo t604_TI;
extern TypeInfo t491_TI;
extern MethodInfo m13899_MI;
extern MethodInfo m13906_MI;
extern MethodInfo m13911_MI;
extern MethodInfo m13913_MI;
extern MethodInfo m13914_MI;
extern MethodInfo m13916_MI;
extern MethodInfo m2973_MI;
extern MethodInfo m13926_MI;
extern MethodInfo m13900_MI;
extern MethodInfo m13924_MI;
extern MethodInfo m13925_MI;
extern MethodInfo m26435_MI;
extern MethodInfo m26436_MI;
extern MethodInfo m26437_MI;
extern MethodInfo m26434_MI;
extern MethodInfo m13915_MI;
extern TypeInfo t2445_TI;
extern MethodInfo m13901_MI;
extern MethodInfo m13902_MI;
extern TypeInfo t2447_TI;
extern MethodInfo m13932_MI;
extern MethodInfo m19968_MI;
extern MethodInfo m13909_MI;
extern MethodInfo m13910_MI;
extern MethodInfo m14007_MI;
extern MethodInfo m13878_MI;
extern MethodInfo m13912_MI;
extern MethodInfo m13918_MI;
extern MethodInfo m14013_MI;
extern MethodInfo m19970_MI;
extern MethodInfo m19978_MI;
extern MethodInfo m19966_MI;
static void* t492_RGCTXData[37] = 
{
	&t492_TI,
	&t2443_TI,
	&m2968_MI,
	&t604_TI,
	&t491_TI,
	&m13899_MI,
	&m13906_MI,
	&m13911_MI,
	&m13913_MI,
	&m13914_MI,
	&m13916_MI,
	&m2973_MI,
	&m13926_MI,
	&m13900_MI,
	&m13924_MI,
	&m13925_MI,
	&m26435_MI,
	&m26436_MI,
	&m26437_MI,
	&m26434_MI,
	&m13915_MI,
	&t2445_TI,
	&m13901_MI,
	&m13902_MI,
	&t2447_TI,
	&m13932_MI,
	&m19968_MI,
	&m13909_MI,
	&m13910_MI,
	&m14007_MI,
	&m13878_MI,
	&m13912_MI,
	&m13918_MI,
	&m14013_MI,
	&m19970_MI,
	&m19978_MI,
	&m19966_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t492_0_0_0;
extern Il2CppType t492_1_0_0;
extern TypeInfo t7_TI;
struct t492;
extern TypeInfo t492_TI;
extern Il2CppGenericClass t492_GC;
extern CustomAttributesCache t866__CustomAttributeCache;
TypeInfo t492_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t492_MIs, t492_PIs, t492_FIs, NULL, &t7_TI, NULL, NULL, &t492_TI, t492_ITIs, t492_VT, &t866__CustomAttributeCache, &t492_TI, &t492_0_0_0, &t492_1_0_0, t492_IOs, &t492_GC, NULL, t492_FDVs, NULL, t492_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t492), 0, -1, sizeof(t492_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2445_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>
extern MethodInfo m26435_MI;
static PropertyInfo t2445____Count_PropertyInfo = 
{
	&t2445_TI, "Count", &m26435_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26438_MI;
static PropertyInfo t2445____IsReadOnly_PropertyInfo = 
{
	&t2445_TI, "IsReadOnly", &m26438_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2445_PIs[] =
{
	&t2445____Count_PropertyInfo,
	&t2445____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t2445_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26435_MI = 
{
	"get_Count", NULL, &t2445_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2445_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26438_MI = 
{
	"get_IsReadOnly", NULL, &t2445_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t2445_m26439_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2445_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26439_MI = 
{
	"Add", NULL, &t2445_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2445_m26439_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2445_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26440_MI = 
{
	"Clear", NULL, &t2445_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t2445_m26441_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2445_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26441_MI = 
{
	"Contains", NULL, &t2445_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2445_m26441_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2443_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2445_m26436_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2443_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2445_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26436_MI = 
{
	"CopyTo", NULL, &t2445_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2445_m26436_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t2445_m26442_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2445_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26442_MI = 
{
	"Remove", NULL, &t2445_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2445_m26442_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2445_MIs[] =
{
	&m26435_MI,
	&m26438_MI,
	&m26439_MI,
	&m26440_MI,
	&m26441_MI,
	&m26436_MI,
	&m26442_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t2446_TI;
static TypeInfo* t2445_ITIs[] = 
{
	&t618_TI,
	&t2446_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2445_0_0_0;
extern Il2CppType t2445_1_0_0;
struct t2445;
extern TypeInfo t2445_TI;
extern Il2CppGenericClass t2445_GC;
TypeInfo t2445_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t2445_MIs, t2445_PIs, NULL, NULL, NULL, NULL, NULL, &t2445_TI, t2445_ITIs, NULL, &EmptyCustomAttributesCache, &t2445_TI, &t2445_0_0_0, &t2445_1_0_0, NULL, &t2445_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2446_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.GUILayoutEntry>
extern TypeInfo t2446_TI;
extern Il2CppType t2444_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26437_MI = 
{
	"GetEnumerator", NULL, &t2446_TI, &t2444_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2446_MIs[] =
{
	&m26437_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t2446_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2446_0_0_0;
extern Il2CppType t2446_1_0_0;
struct t2446;
extern TypeInfo t2446_TI;
extern Il2CppGenericClass t2446_GC;
TypeInfo t2446_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2446_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2446_TI, t2446_ITIs, NULL, &EmptyCustomAttributesCache, &t2446_TI, &t2446_0_0_0, &t2446_1_0_0, NULL, &t2446_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#include "t2450.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2450_TI;
#include "t2450MD.h"

extern TypeInfo t2450_TI;
extern TypeInfo t491_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m13931_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m19955_MI;
struct t52;
#define m19955(__this, p0, method) (t491 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m19955_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.GUILayoutEntry>
extern Il2CppType t52_0_0_1;
FieldInfo t2450_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2450_TI, offsetof(t2450, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2450_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2450_TI, offsetof(t2450, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2450_FIs[] =
{
	&t2450_f0_FieldInfo,
	&t2450_f1_FieldInfo,
	NULL
};
extern MethodInfo m13928_MI;
static PropertyInfo t2450____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2450_TI, "System.Collections.IEnumerator.Current", &m13928_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13931_MI;
static PropertyInfo t2450____Current_PropertyInfo = 
{
	&t2450_TI, "Current", &m13931_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2450_PIs[] =
{
	&t2450____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2450____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2450_m13927_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2450_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13927_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2450_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2450_m13927_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2450_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13928_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2450_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2450_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13929_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2450_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2450_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13930_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2450_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2450_TI;
extern Il2CppType t491_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13931_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2450_TI, &t491_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2450_MIs[] =
{
	&m13927_MI,
	&m13928_MI,
	&m13929_MI,
	&m13930_MI,
	&m13931_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m13928_MI;
extern MethodInfo m13930_MI;
extern MethodInfo m13929_MI;
extern MethodInfo m13931_MI;
static MethodInfo* t2450_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m13928_MI,
	&m13930_MI,
	&m13929_MI,
	&m13931_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2444_TI;
static TypeInfo* t2450_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2444_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2444_TI;
static Il2CppInterfaceOffsetPair t2450_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2444_TI, 7},
};
extern MethodInfo m13931_MI;
extern TypeInfo t491_TI;
extern MethodInfo m19955_MI;
static void* t2450_RGCTXData[3] = 
{
	&m13931_MI,
	&t491_TI,
	&m19955_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2450_0_0_0;
extern Il2CppType t2450_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2450_TI;
extern Il2CppGenericClass t2450_GC;
extern TypeInfo t52_TI;
TypeInfo t2450_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2450_MIs, t2450_PIs, t2450_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2450_TI, t2450_ITIs, t2450_VT, &EmptyCustomAttributesCache, &t2450_TI, &t2450_0_0_0, &t2450_1_0_0, t2450_IOs, &t2450_GC, NULL, NULL, NULL, t2450_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2450)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2451_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.GUILayoutEntry>
extern MethodInfo m26443_MI;
extern MethodInfo m26444_MI;
static PropertyInfo t2451____Item_PropertyInfo = 
{
	&t2451_TI, "Item", &m26443_MI, &m26444_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2451_PIs[] =
{
	&t2451____Item_PropertyInfo,
	NULL
};
extern Il2CppType t491_0_0_0;
static ParameterInfo t2451_m26445_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2451_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26445_MI = 
{
	"IndexOf", NULL, &t2451_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2451_m26445_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t491_0_0_0;
static ParameterInfo t2451_m26446_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2451_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26446_MI = 
{
	"Insert", NULL, &t2451_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2451_m26446_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2451_m26447_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2451_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26447_MI = 
{
	"RemoveAt", NULL, &t2451_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2451_m26447_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2451_m26443_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2451_TI;
extern Il2CppType t491_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26443_MI = 
{
	"get_Item", NULL, &t2451_TI, &t491_0_0_0, RuntimeInvoker_t7_t60, t2451_m26443_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t491_0_0_0;
static ParameterInfo t2451_m26444_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2451_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26444_MI = 
{
	"set_Item", NULL, &t2451_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2451_m26444_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2451_MIs[] =
{
	&m26445_MI,
	&m26446_MI,
	&m26447_MI,
	&m26443_MI,
	&m26444_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t2445_TI;
extern TypeInfo t2446_TI;
static TypeInfo* t2451_ITIs[] = 
{
	&t618_TI,
	&t2445_TI,
	&t2446_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2451_0_0_0;
extern Il2CppType t2451_1_0_0;
struct t2451;
extern TypeInfo t2451_TI;
extern Il2CppGenericClass t2451_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t2451_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t2451_MIs, t2451_PIs, NULL, NULL, NULL, NULL, NULL, &t2451_TI, t2451_ITIs, NULL, &t1426__CustomAttributeCache, &t2451_TI, &t2451_0_0_0, &t2451_1_0_0, NULL, &t2451_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2447_TI;

extern TypeInfo t2447_TI;
extern TypeInfo t491_TI;
extern TypeInfo t60_TI;
extern TypeInfo t62_TI;
extern TypeInfo t2451_TI;
extern TypeInfo t2445_TI;
extern TypeInfo t87_TI;
extern TypeInfo t669_TI;
extern TypeInfo t53_TI;
extern TypeInfo t52_TI;
extern TypeInfo t618_TI;
extern TypeInfo t12_TI;
extern TypeInfo t55_TI;
extern TypeInfo t2443_TI;
extern TypeInfo t2446_TI;
extern TypeInfo t2444_TI;
#include "t2452MD.h"
extern MethodInfo m13961_MI;
extern MethodInfo m120_MI;
extern MethodInfo m26443_MI;
extern MethodInfo m26435_MI;
extern MethodInfo m116_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m7516_MI;
extern MethodInfo m7425_MI;
extern MethodInfo m13993_MI;
extern MethodInfo m26441_MI;
extern MethodInfo m26445_MI;
extern MethodInfo m26436_MI;
extern MethodInfo m26437_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>
extern Il2CppType t2451_0_0_1;
FieldInfo t2447_f0_FieldInfo = 
{
	"list", &t2451_0_0_1, &t2447_TI, offsetof(t2447, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2447_FIs[] =
{
	&t2447_f0_FieldInfo,
	NULL
};
extern MethodInfo m13938_MI;
extern MethodInfo m13939_MI;
static PropertyInfo t2447____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2447_TI, "System.Collections.Generic.IList<T>.Item", &m13938_MI, &m13939_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13940_MI;
static PropertyInfo t2447____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2447_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13940_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13950_MI;
static PropertyInfo t2447____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2447_TI, "System.Collections.ICollection.IsSynchronized", &m13950_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13951_MI;
static PropertyInfo t2447____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2447_TI, "System.Collections.ICollection.SyncRoot", &m13951_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13952_MI;
static PropertyInfo t2447____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2447_TI, "System.Collections.IList.IsFixedSize", &m13952_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13953_MI;
static PropertyInfo t2447____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2447_TI, "System.Collections.IList.IsReadOnly", &m13953_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13954_MI;
extern MethodInfo m13955_MI;
static PropertyInfo t2447____System_Collections_IList_Item_PropertyInfo = 
{
	&t2447_TI, "System.Collections.IList.Item", &m13954_MI, &m13955_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13960_MI;
static PropertyInfo t2447____Count_PropertyInfo = 
{
	&t2447_TI, "Count", &m13960_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13961_MI;
static PropertyInfo t2447____Item_PropertyInfo = 
{
	&t2447_TI, "Item", &m13961_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2447_PIs[] =
{
	&t2447____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2447____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2447____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2447____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2447____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2447____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2447____System_Collections_IList_Item_PropertyInfo,
	&t2447____Count_PropertyInfo,
	&t2447____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2451_0_0_0;
static ParameterInfo t2447_m13932_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2451_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13932_MI = 
{
	".ctor", (methodPointerType)&m8312_gshared, &t2447_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2447_m13932_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t2447_m13933_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13933_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m8313_gshared, &t2447_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2447_m13933_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2447_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13934_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m8314_gshared, &t2447_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t491_0_0_0;
static ParameterInfo t2447_m13935_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13935_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m8315_gshared, &t2447_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2447_m13935_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t2447_m13936_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13936_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m8316_gshared, &t2447_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2447_m13936_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2447_m13937_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13937_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m8317_gshared, &t2447_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2447_m13937_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2447_m13938_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t491_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13938_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8318_gshared, &t2447_TI, &t491_0_0_0, RuntimeInvoker_t7_t60, t2447_m13938_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t491_0_0_0;
static ParameterInfo t2447_m13939_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13939_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8319_gshared, &t2447_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2447_m13939_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2447_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13940_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8320_gshared, &t2447_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2447_m13941_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13941_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8321_gshared, &t2447_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2447_m13941_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2447_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13942_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8322_gshared, &t2447_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2447_m13943_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13943_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8323_gshared, &t2447_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2447_m13943_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2447_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13944_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8324_gshared, &t2447_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2447_m13945_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13945_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8325_gshared, &t2447_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2447_m13945_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2447_m13946_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13946_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8326_gshared, &t2447_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2447_m13946_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2447_m13947_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13947_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8327_gshared, &t2447_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2447_m13947_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2447_m13948_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13948_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8328_gshared, &t2447_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2447_m13948_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2447_m13949_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13949_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8329_gshared, &t2447_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2447_m13949_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2447_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13950_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8330_gshared, &t2447_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2447_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13951_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8331_gshared, &t2447_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2447_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13952_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8332_gshared, &t2447_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2447_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13953_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8333_gshared, &t2447_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2447_m13954_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13954_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8334_gshared, &t2447_TI, &t7_0_0_0, RuntimeInvoker_t7_t60, t2447_m13954_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2447_m13955_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13955_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8335_gshared, &t2447_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2447_m13955_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t2447_m13956_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13956_MI = 
{
	"Contains", (methodPointerType)&m8336_gshared, &t2447_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2447_m13956_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2443_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2447_m13957_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2443_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13957_MI = 
{
	"CopyTo", (methodPointerType)&m8337_gshared, &t2447_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2447_m13957_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2447_TI;
extern Il2CppType t2444_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13958_MI = 
{
	"GetEnumerator", (methodPointerType)&m8338_gshared, &t2447_TI, &t2444_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t2447_m13959_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13959_MI = 
{
	"IndexOf", (methodPointerType)&m8339_gshared, &t2447_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2447_m13959_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2447_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13960_MI = 
{
	"get_Count", (methodPointerType)&m8340_gshared, &t2447_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2447_m13961_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2447_TI;
extern Il2CppType t491_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13961_MI = 
{
	"get_Item", (methodPointerType)&m8341_gshared, &t2447_TI, &t491_0_0_0, RuntimeInvoker_t7_t60, t2447_m13961_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2447_MIs[] =
{
	&m13932_MI,
	&m13933_MI,
	&m13934_MI,
	&m13935_MI,
	&m13936_MI,
	&m13937_MI,
	&m13938_MI,
	&m13939_MI,
	&m13940_MI,
	&m13941_MI,
	&m13942_MI,
	&m13943_MI,
	&m13944_MI,
	&m13945_MI,
	&m13946_MI,
	&m13947_MI,
	&m13948_MI,
	&m13949_MI,
	&m13950_MI,
	&m13951_MI,
	&m13952_MI,
	&m13953_MI,
	&m13954_MI,
	&m13955_MI,
	&m13956_MI,
	&m13957_MI,
	&m13958_MI,
	&m13959_MI,
	&m13960_MI,
	&m13961_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m13942_MI;
extern MethodInfo m13960_MI;
extern MethodInfo m13950_MI;
extern MethodInfo m13951_MI;
extern MethodInfo m13941_MI;
extern MethodInfo m13952_MI;
extern MethodInfo m13953_MI;
extern MethodInfo m13954_MI;
extern MethodInfo m13955_MI;
extern MethodInfo m13943_MI;
extern MethodInfo m13944_MI;
extern MethodInfo m13945_MI;
extern MethodInfo m13946_MI;
extern MethodInfo m13947_MI;
extern MethodInfo m13948_MI;
extern MethodInfo m13949_MI;
extern MethodInfo m13960_MI;
extern MethodInfo m13940_MI;
extern MethodInfo m13933_MI;
extern MethodInfo m13934_MI;
extern MethodInfo m13956_MI;
extern MethodInfo m13957_MI;
extern MethodInfo m13936_MI;
extern MethodInfo m13959_MI;
extern MethodInfo m13935_MI;
extern MethodInfo m13937_MI;
extern MethodInfo m13938_MI;
extern MethodInfo m13939_MI;
extern MethodInfo m13958_MI;
extern MethodInfo m13961_MI;
static MethodInfo* t2447_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m13942_MI,
	&m13960_MI,
	&m13950_MI,
	&m13951_MI,
	&m13941_MI,
	&m13952_MI,
	&m13953_MI,
	&m13954_MI,
	&m13955_MI,
	&m13943_MI,
	&m13944_MI,
	&m13945_MI,
	&m13946_MI,
	&m13947_MI,
	&m13948_MI,
	&m13949_MI,
	&m13960_MI,
	&m13940_MI,
	&m13933_MI,
	&m13934_MI,
	&m13956_MI,
	&m13957_MI,
	&m13936_MI,
	&m13959_MI,
	&m13935_MI,
	&m13937_MI,
	&m13938_MI,
	&m13939_MI,
	&m13958_MI,
	&m13961_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2445_TI;
extern TypeInfo t2451_TI;
extern TypeInfo t2446_TI;
static TypeInfo* t2447_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t1041_TI,
	&t2445_TI,
	&t2451_TI,
	&t2446_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2445_TI;
extern TypeInfo t2451_TI;
extern TypeInfo t2446_TI;
static Il2CppInterfaceOffsetPair t2447_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t1041_TI, 9},
	{ &t2445_TI, 20},
	{ &t2451_TI, 27},
	{ &t2446_TI, 32},
};
extern MethodInfo m13961_MI;
extern MethodInfo m13993_MI;
extern TypeInfo t491_TI;
extern MethodInfo m26441_MI;
extern MethodInfo m26445_MI;
extern MethodInfo m26443_MI;
extern MethodInfo m26436_MI;
extern MethodInfo m26437_MI;
extern MethodInfo m26435_MI;
static void* t2447_RGCTXData[9] = 
{
	&m13961_MI,
	&m13993_MI,
	&t491_TI,
	&m26441_MI,
	&m26445_MI,
	&m26443_MI,
	&m26436_MI,
	&m26437_MI,
	&m26435_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2447_0_0_0;
extern Il2CppType t2447_1_0_0;
extern TypeInfo t7_TI;
struct t2447;
extern TypeInfo t2447_TI;
extern Il2CppGenericClass t2447_GC;
extern CustomAttributesCache t868__CustomAttributeCache;
TypeInfo t2447_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2447_MIs, t2447_PIs, t2447_FIs, NULL, &t7_TI, NULL, NULL, &t2447_TI, t2447_ITIs, t2447_VT, &t868__CustomAttributeCache, &t2447_TI, &t2447_0_0_0, &t2447_1_0_0, t2447_IOs, &t2447_GC, NULL, NULL, NULL, t2447_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2447), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2452.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2452_TI;

extern TypeInfo t2452_TI;
extern TypeInfo t2445_TI;
extern TypeInfo t55_TI;
extern TypeInfo t2451_TI;
extern TypeInfo t491_TI;
extern TypeInfo t60_TI;
extern TypeInfo t53_TI;
extern TypeInfo t492_TI;
extern TypeInfo t669_TI;
extern TypeInfo t7_TI;
extern TypeInfo t52_TI;
extern TypeInfo t2446_TI;
extern TypeInfo t2444_TI;
extern TypeInfo t2443_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern TypeInfo t62_TI;
extern TypeInfo t1041_TI;
extern Il2CppType t491_0_0_0;
extern MethodInfo m26438_MI;
extern MethodInfo m13996_MI;
extern MethodInfo m13997_MI;
extern MethodInfo m26443_MI;
extern MethodInfo m13994_MI;
extern MethodInfo m13992_MI;
extern MethodInfo m26435_MI;
extern MethodInfo m116_MI;
extern MethodInfo m2971_MI;
extern MethodInfo m7515_MI;
extern MethodInfo m7516_MI;
extern MethodInfo m26437_MI;
extern MethodInfo m13985_MI;
extern MethodInfo m13993_MI;
extern MethodInfo m26441_MI;
extern MethodInfo m26445_MI;
extern MethodInfo m13995_MI;
extern MethodInfo m13983_MI;
extern MethodInfo m13988_MI;
extern MethodInfo m13979_MI;
extern MethodInfo m26440_MI;
extern MethodInfo m26436_MI;
extern MethodInfo m26446_MI;
extern MethodInfo m26447_MI;
extern MethodInfo m26444_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3933_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m120_MI;
extern MethodInfo m7514_MI;
extern MethodInfo m7517_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.GUILayoutEntry>
extern Il2CppType t2451_0_0_1;
FieldInfo t2452_f0_FieldInfo = 
{
	"list", &t2451_0_0_1, &t2452_TI, offsetof(t2452, f0), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_1;
FieldInfo t2452_f1_FieldInfo = 
{
	"syncRoot", &t7_0_0_1, &t2452_TI, offsetof(t2452, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2452_FIs[] =
{
	&t2452_f0_FieldInfo,
	&t2452_f1_FieldInfo,
	NULL
};
extern MethodInfo m13963_MI;
static PropertyInfo t2452____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2452_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m13963_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13971_MI;
static PropertyInfo t2452____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2452_TI, "System.Collections.ICollection.IsSynchronized", &m13971_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13972_MI;
static PropertyInfo t2452____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2452_TI, "System.Collections.ICollection.SyncRoot", &m13972_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13973_MI;
static PropertyInfo t2452____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2452_TI, "System.Collections.IList.IsFixedSize", &m13973_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13974_MI;
static PropertyInfo t2452____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2452_TI, "System.Collections.IList.IsReadOnly", &m13974_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13975_MI;
extern MethodInfo m13976_MI;
static PropertyInfo t2452____System_Collections_IList_Item_PropertyInfo = 
{
	&t2452_TI, "System.Collections.IList.Item", &m13975_MI, &m13976_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13989_MI;
static PropertyInfo t2452____Count_PropertyInfo = 
{
	&t2452_TI, "Count", &m13989_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13990_MI;
extern MethodInfo m13991_MI;
static PropertyInfo t2452____Item_PropertyInfo = 
{
	&t2452_TI, "Item", &m13990_MI, &m13991_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2452_PIs[] =
{
	&t2452____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2452____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2452____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2452____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2452____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2452____System_Collections_IList_Item_PropertyInfo,
	&t2452____Count_PropertyInfo,
	&t2452____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2452_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13962_MI = 
{
	".ctor", (methodPointerType)&m8342_gshared, &t2452_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2452_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13963_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8343_gshared, &t2452_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2452_m13964_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13964_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8344_gshared, &t2452_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2452_m13964_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2452_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13965_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8345_gshared, &t2452_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2452_m13966_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13966_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8346_gshared, &t2452_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2452_m13966_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2452_m13967_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13967_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8347_gshared, &t2452_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2452_m13967_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2452_m13968_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13968_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8348_gshared, &t2452_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2452_m13968_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2452_m13969_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13969_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8349_gshared, &t2452_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2452_m13969_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2452_m13970_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13970_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8350_gshared, &t2452_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2452_m13970_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2452_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13971_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8351_gshared, &t2452_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2452_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13972_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8352_gshared, &t2452_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2452_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13973_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8353_gshared, &t2452_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2452_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m13974_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8354_gshared, &t2452_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2452_m13975_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13975_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8355_gshared, &t2452_TI, &t7_0_0_0, RuntimeInvoker_t7_t60, t2452_m13975_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2452_m13976_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13976_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8356_gshared, &t2452_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2452_m13976_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t2452_m13977_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13977_MI = 
{
	"Add", (methodPointerType)&m8357_gshared, &t2452_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2452_m13977_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2452_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13978_MI = 
{
	"Clear", (methodPointerType)&m8358_gshared, &t2452_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2452_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13979_MI = 
{
	"ClearItems", (methodPointerType)&m8359_gshared, &t2452_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t2452_m13980_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13980_MI = 
{
	"Contains", (methodPointerType)&m8360_gshared, &t2452_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2452_m13980_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2443_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2452_m13981_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2443_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13981_MI = 
{
	"CopyTo", (methodPointerType)&m8361_gshared, &t2452_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2452_m13981_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2452_TI;
extern Il2CppType t2444_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13982_MI = 
{
	"GetEnumerator", (methodPointerType)&m8362_gshared, &t2452_TI, &t2444_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t2452_m13983_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13983_MI = 
{
	"IndexOf", (methodPointerType)&m8363_gshared, &t2452_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2452_m13983_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t491_0_0_0;
static ParameterInfo t2452_m13984_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13984_MI = 
{
	"Insert", (methodPointerType)&m8364_gshared, &t2452_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2452_m13984_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t491_0_0_0;
static ParameterInfo t2452_m13985_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13985_MI = 
{
	"InsertItem", (methodPointerType)&m8365_gshared, &t2452_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2452_m13985_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t2452_m13986_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13986_MI = 
{
	"Remove", (methodPointerType)&m8366_gshared, &t2452_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2452_m13986_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2452_m13987_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13987_MI = 
{
	"RemoveAt", (methodPointerType)&m8367_gshared, &t2452_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2452_m13987_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2452_m13988_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13988_MI = 
{
	"RemoveItem", (methodPointerType)&m8368_gshared, &t2452_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2452_m13988_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2452_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13989_MI = 
{
	"get_Count", (methodPointerType)&m8369_gshared, &t2452_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2452_m13990_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t491_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m13990_MI = 
{
	"get_Item", (methodPointerType)&m8370_gshared, &t2452_TI, &t491_0_0_0, RuntimeInvoker_t7_t60, t2452_m13990_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t491_0_0_0;
static ParameterInfo t2452_m13991_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13991_MI = 
{
	"set_Item", (methodPointerType)&m8371_gshared, &t2452_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2452_m13991_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t491_0_0_0;
static ParameterInfo t2452_m13992_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13992_MI = 
{
	"SetItem", (methodPointerType)&m8372_gshared, &t2452_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2452_m13992_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2452_m13993_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13993_MI = 
{
	"IsValidItem", (methodPointerType)&m8373_gshared, &t2452_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2452_m13993_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2452_m13994_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t491_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13994_MI = 
{
	"ConvertItem", (methodPointerType)&m8374_gshared, &t2452_TI, &t491_0_0_0, RuntimeInvoker_t7_t7, t2452_m13994_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2451_0_0_0;
static ParameterInfo t2452_m13995_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2451_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13995_MI = 
{
	"CheckWritable", (methodPointerType)&m8375_gshared, &t2452_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2452_m13995_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2451_0_0_0;
static ParameterInfo t2452_m13996_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2451_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13996_MI = 
{
	"IsSynchronized", (methodPointerType)&m8376_gshared, &t2452_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2452_m13996_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2451_0_0_0;
static ParameterInfo t2452_m13997_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2451_0_0_0},
};
extern TypeInfo t2452_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m13997_MI = 
{
	"IsFixedSize", (methodPointerType)&m8377_gshared, &t2452_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2452_m13997_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2452_MIs[] =
{
	&m13962_MI,
	&m13963_MI,
	&m13964_MI,
	&m13965_MI,
	&m13966_MI,
	&m13967_MI,
	&m13968_MI,
	&m13969_MI,
	&m13970_MI,
	&m13971_MI,
	&m13972_MI,
	&m13973_MI,
	&m13974_MI,
	&m13975_MI,
	&m13976_MI,
	&m13977_MI,
	&m13978_MI,
	&m13979_MI,
	&m13980_MI,
	&m13981_MI,
	&m13982_MI,
	&m13983_MI,
	&m13984_MI,
	&m13985_MI,
	&m13986_MI,
	&m13987_MI,
	&m13988_MI,
	&m13989_MI,
	&m13990_MI,
	&m13991_MI,
	&m13992_MI,
	&m13993_MI,
	&m13994_MI,
	&m13995_MI,
	&m13996_MI,
	&m13997_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m13965_MI;
extern MethodInfo m13989_MI;
extern MethodInfo m13971_MI;
extern MethodInfo m13972_MI;
extern MethodInfo m13964_MI;
extern MethodInfo m13973_MI;
extern MethodInfo m13974_MI;
extern MethodInfo m13975_MI;
extern MethodInfo m13976_MI;
extern MethodInfo m13966_MI;
extern MethodInfo m13978_MI;
extern MethodInfo m13967_MI;
extern MethodInfo m13968_MI;
extern MethodInfo m13969_MI;
extern MethodInfo m13970_MI;
extern MethodInfo m13987_MI;
extern MethodInfo m13989_MI;
extern MethodInfo m13963_MI;
extern MethodInfo m13977_MI;
extern MethodInfo m13978_MI;
extern MethodInfo m13980_MI;
extern MethodInfo m13981_MI;
extern MethodInfo m13986_MI;
extern MethodInfo m13983_MI;
extern MethodInfo m13984_MI;
extern MethodInfo m13987_MI;
extern MethodInfo m13990_MI;
extern MethodInfo m13991_MI;
extern MethodInfo m13982_MI;
extern MethodInfo m13979_MI;
extern MethodInfo m13985_MI;
extern MethodInfo m13988_MI;
extern MethodInfo m13992_MI;
static MethodInfo* t2452_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m13965_MI,
	&m13989_MI,
	&m13971_MI,
	&m13972_MI,
	&m13964_MI,
	&m13973_MI,
	&m13974_MI,
	&m13975_MI,
	&m13976_MI,
	&m13966_MI,
	&m13978_MI,
	&m13967_MI,
	&m13968_MI,
	&m13969_MI,
	&m13970_MI,
	&m13987_MI,
	&m13989_MI,
	&m13963_MI,
	&m13977_MI,
	&m13978_MI,
	&m13980_MI,
	&m13981_MI,
	&m13986_MI,
	&m13983_MI,
	&m13984_MI,
	&m13987_MI,
	&m13990_MI,
	&m13991_MI,
	&m13982_MI,
	&m13979_MI,
	&m13985_MI,
	&m13988_MI,
	&m13992_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2445_TI;
extern TypeInfo t2451_TI;
extern TypeInfo t2446_TI;
static TypeInfo* t2452_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t1041_TI,
	&t2445_TI,
	&t2451_TI,
	&t2446_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2445_TI;
extern TypeInfo t2451_TI;
extern TypeInfo t2446_TI;
static Il2CppInterfaceOffsetPair t2452_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t1041_TI, 9},
	{ &t2445_TI, 20},
	{ &t2451_TI, 27},
	{ &t2446_TI, 32},
};
extern TypeInfo t492_TI;
extern MethodInfo m2971_MI;
extern MethodInfo m26438_MI;
extern MethodInfo m26437_MI;
extern MethodInfo m26435_MI;
extern MethodInfo m13994_MI;
extern MethodInfo m13985_MI;
extern MethodInfo m13993_MI;
extern TypeInfo t491_TI;
extern MethodInfo m26441_MI;
extern MethodInfo m26445_MI;
extern MethodInfo m13995_MI;
extern MethodInfo m13983_MI;
extern MethodInfo m13988_MI;
extern MethodInfo m13996_MI;
extern MethodInfo m13997_MI;
extern MethodInfo m26443_MI;
extern MethodInfo m13992_MI;
extern MethodInfo m13979_MI;
extern MethodInfo m26440_MI;
extern MethodInfo m26436_MI;
extern MethodInfo m26446_MI;
extern MethodInfo m26447_MI;
extern MethodInfo m26444_MI;
extern Il2CppType t491_0_0_0;
static void* t2452_RGCTXData[25] = 
{
	&t492_TI,
	&m2971_MI,
	&m26438_MI,
	&m26437_MI,
	&m26435_MI,
	&m13994_MI,
	&m13985_MI,
	&m13993_MI,
	&t491_TI,
	&m26441_MI,
	&m26445_MI,
	&m13995_MI,
	&m13983_MI,
	&m13988_MI,
	&m13996_MI,
	&m13997_MI,
	&m26443_MI,
	&m13992_MI,
	&m13979_MI,
	&m26440_MI,
	&m26436_MI,
	&m26446_MI,
	&m26447_MI,
	&m26444_MI,
	(void*)&t491_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2452_0_0_0;
extern Il2CppType t2452_1_0_0;
extern TypeInfo t7_TI;
struct t2452;
extern TypeInfo t2452_TI;
extern Il2CppGenericClass t2452_GC;
extern CustomAttributesCache t867__CustomAttributeCache;
TypeInfo t2452_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2452_MIs, t2452_PIs, t2452_FIs, NULL, &t7_TI, NULL, NULL, &t2452_TI, t2452_ITIs, t2452_VT, &t867__CustomAttributeCache, &t2452_TI, &t2452_0_0_0, &t2452_1_0_0, t2452_IOs, &t2452_GC, NULL, NULL, NULL, t2452_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2452), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2453_TI;
#include "t2453MD.h"

#include "t2454.h"
extern TypeInfo t2453_TI;
extern TypeInfo t5355_TI;
extern TypeInfo t70_TI;
extern TypeInfo t491_TI;
extern TypeInfo t55_TI;
extern TypeInfo t863_TI;
extern TypeInfo t553_TI;
extern TypeInfo t2454_TI;
extern TypeInfo t60_TI;
#include "t2454MD.h"
extern Il2CppType t5355_0_0_0;
extern Il2CppType t491_0_0_0;
extern Il2CppType t863_0_0_0;
extern MethodInfo m116_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3097_MI;
extern MethodInfo m3095_MI;
extern MethodInfo m6560_MI;
extern MethodInfo m14003_MI;
extern MethodInfo m26448_MI;
extern MethodInfo m19967_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.GUILayoutEntry>
extern Il2CppType t2453_0_0_49;
FieldInfo t2453_f0_FieldInfo = 
{
	"_default", &t2453_0_0_49, &t2453_TI, offsetof(t2453_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2453_FIs[] =
{
	&t2453_f0_FieldInfo,
	NULL
};
extern MethodInfo m14002_MI;
static PropertyInfo t2453____Default_PropertyInfo = 
{
	&t2453_TI, "Default", &m14002_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2453_PIs[] =
{
	&t2453____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2453_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13998_MI = 
{
	".ctor", (methodPointerType)&m8378_gshared, &t2453_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2453_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m13999_MI = 
{
	".cctor", (methodPointerType)&m8379_gshared, &t2453_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2453_m14000_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2453_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14000_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8380_gshared, &t2453_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2453_m14000_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2453_m14001_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2453_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14001_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8381_gshared, &t2453_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2453_m14001_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t2453_m26448_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2453_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26448_MI = 
{
	"GetHashCode", NULL, &t2453_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2453_m26448_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
extern Il2CppType t491_0_0_0;
static ParameterInfo t2453_m19967_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2453_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m19967_MI = 
{
	"Equals", NULL, &t2453_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2453_m19967_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2453_TI;
extern Il2CppType t2453_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14002_MI = 
{
	"get_Default", (methodPointerType)&m8382_gshared, &t2453_TI, &t2453_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2453_MIs[] =
{
	&m13998_MI,
	&m13999_MI,
	&m14000_MI,
	&m14001_MI,
	&m26448_MI,
	&m19967_MI,
	&m14002_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m19967_MI;
extern MethodInfo m26448_MI;
extern MethodInfo m14001_MI;
extern MethodInfo m14000_MI;
static MethodInfo* t2453_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m19967_MI,
	&m26448_MI,
	&m14001_MI,
	&m14000_MI,
	NULL,
	NULL,
};
extern TypeInfo t5356_TI;
extern TypeInfo t886_TI;
static TypeInfo* t2453_ITIs[] = 
{
	&t5356_TI,
	&t886_TI,
};
extern TypeInfo t5356_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t2453_IOs[] = 
{
	{ &t5356_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t5355_0_0_0;
extern Il2CppType t491_0_0_0;
extern TypeInfo t2453_TI;
extern TypeInfo t2453_TI;
extern TypeInfo t2454_TI;
extern MethodInfo m14003_MI;
extern TypeInfo t491_TI;
extern MethodInfo m26448_MI;
extern MethodInfo m19967_MI;
static void* t2453_RGCTXData[9] = 
{
	(void*)&t5355_0_0_0,
	(void*)&t491_0_0_0,
	&t2453_TI,
	&t2453_TI,
	&t2454_TI,
	&m14003_MI,
	&t491_TI,
	&m26448_MI,
	&m19967_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2453_0_0_0;
extern Il2CppType t2453_1_0_0;
extern TypeInfo t7_TI;
struct t2453;
extern TypeInfo t2453_TI;
extern Il2CppGenericClass t2453_GC;
TypeInfo t2453_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2453_MIs, t2453_PIs, t2453_FIs, NULL, &t7_TI, NULL, NULL, &t2453_TI, t2453_ITIs, t2453_VT, &EmptyCustomAttributesCache, &t2453_TI, &t2453_0_0_0, &t2453_1_0_0, t2453_IOs, &t2453_GC, NULL, NULL, NULL, t2453_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2453), 0, -1, sizeof(t2453_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5356_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.GUILayoutEntry>
extern Il2CppType t491_0_0_0;
extern Il2CppType t491_0_0_0;
static ParameterInfo t5356_m26449_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t5356_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26449_MI = 
{
	"Equals", NULL, &t5356_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t5356_m26449_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t5356_m26450_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t5356_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26450_MI = 
{
	"GetHashCode", NULL, &t5356_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5356_m26450_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5356_MIs[] =
{
	&m26449_MI,
	&m26450_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5356_0_0_0;
extern Il2CppType t5356_1_0_0;
struct t5356;
extern TypeInfo t5356_TI;
extern Il2CppGenericClass t5356_GC;
TypeInfo t5356_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5356_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5356_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5356_TI, &t5356_0_0_0, &t5356_1_0_0, NULL, &t5356_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5355_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.GUILayoutEntry>
extern Il2CppType t491_0_0_0;
static ParameterInfo t5355_m26451_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t5355_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26451_MI = 
{
	"Equals", NULL, &t5355_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5355_m26451_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5355_MIs[] =
{
	&m26451_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5355_0_0_0;
extern Il2CppType t5355_1_0_0;
struct t5355;
extern TypeInfo t5355_TI;
extern Il2CppGenericClass t5355_GC;
TypeInfo t5355_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5355_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5355_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5355_TI, &t5355_0_0_0, &t5355_1_0_0, NULL, &t5355_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2454_TI;

extern TypeInfo t491_TI;
extern TypeInfo t7_TI;
extern TypeInfo t60_TI;
extern TypeInfo t55_TI;
extern MethodInfo m13998_MI;
extern MethodInfo m122_MI;
extern MethodInfo m121_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUILayoutEntry>
extern TypeInfo t2454_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14003_MI = 
{
	".ctor", (methodPointerType)&m8413_gshared, &t2454_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t2454_m14004_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2454_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14004_MI = 
{
	"GetHashCode", (methodPointerType)&m8414_gshared, &t2454_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2454_m14004_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
extern Il2CppType t491_0_0_0;
static ParameterInfo t2454_m14005_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2454_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14005_MI = 
{
	"Equals", (methodPointerType)&m8415_gshared, &t2454_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2454_m14005_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2454_MIs[] =
{
	&m14003_MI,
	&m14004_MI,
	&m14005_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14005_MI;
extern MethodInfo m14004_MI;
extern MethodInfo m14001_MI;
extern MethodInfo m14000_MI;
extern MethodInfo m14004_MI;
extern MethodInfo m14005_MI;
static MethodInfo* t2454_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14005_MI,
	&m14004_MI,
	&m14001_MI,
	&m14000_MI,
	&m14004_MI,
	&m14005_MI,
};
extern TypeInfo t5356_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t2454_IOs[] = 
{
	{ &t5356_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t5355_0_0_0;
extern Il2CppType t491_0_0_0;
extern TypeInfo t2453_TI;
extern TypeInfo t2453_TI;
extern TypeInfo t2454_TI;
extern MethodInfo m14003_MI;
extern TypeInfo t491_TI;
extern MethodInfo m26448_MI;
extern MethodInfo m19967_MI;
extern MethodInfo m13998_MI;
extern TypeInfo t491_TI;
static void* t2454_RGCTXData[11] = 
{
	(void*)&t5355_0_0_0,
	(void*)&t491_0_0_0,
	&t2453_TI,
	&t2453_TI,
	&t2454_TI,
	&m14003_MI,
	&t491_TI,
	&m26448_MI,
	&m19967_MI,
	&m13998_MI,
	&t491_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2454_0_0_0;
extern Il2CppType t2454_1_0_0;
extern TypeInfo t2453_TI;
struct t2454;
extern TypeInfo t2454_TI;
extern Il2CppGenericClass t2454_GC;
extern TypeInfo t862_TI;
TypeInfo t2454_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2454_MIs, NULL, NULL, NULL, &t2453_TI, NULL, &t862_TI, &t2454_TI, NULL, t2454_VT, &EmptyCustomAttributesCache, &t2454_TI, &t2454_0_0_0, &t2454_1_0_0, t2454_IOs, &t2454_GC, NULL, NULL, NULL, t2454_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2454), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2448_TI;



// Metadata Definition System.Predicate`1<UnityEngine.GUILayoutEntry>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2448_m14006_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2448_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m14006_MI = 
{
	".ctor", (methodPointerType)&m8416_gshared, &t2448_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2448_m14006_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
static ParameterInfo t2448_m14007_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2448_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14007_MI = 
{
	"Invoke", (methodPointerType)&m8417_gshared, &t2448_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2448_m14007_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2448_m14008_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2448_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14008_MI = 
{
	"BeginInvoke", (methodPointerType)&m8418_gshared, &t2448_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7, t2448_m14008_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2448_m14009_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2448_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14009_MI = 
{
	"EndInvoke", (methodPointerType)&m8419_gshared, &t2448_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2448_m14009_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2448_MIs[] =
{
	&m14006_MI,
	&m14007_MI,
	&m14008_MI,
	&m14009_MI,
	NULL
};
extern MethodInfo m1812_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1813_MI;
extern MethodInfo m123_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1815_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1816_MI;
extern MethodInfo m1817_MI;
extern MethodInfo m1818_MI;
extern MethodInfo m14007_MI;
extern MethodInfo m14008_MI;
extern MethodInfo m14009_MI;
static MethodInfo* t2448_VT[] =
{
	&m1812_MI,
	&m113_MI,
	&m1813_MI,
	&m123_MI,
	&m1814_MI,
	&m1815_MI,
	&m1814_MI,
	&m1816_MI,
	&m1817_MI,
	&m1818_MI,
	&m14007_MI,
	&m14008_MI,
	&m14009_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2448_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2448_0_0_0;
extern Il2CppType t2448_1_0_0;
extern TypeInfo t245_TI;
struct t2448;
extern TypeInfo t2448_TI;
extern Il2CppGenericClass t2448_GC;
TypeInfo t2448_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2448_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t2448_TI, NULL, t2448_VT, &EmptyCustomAttributesCache, &t2448_TI, &t2448_0_0_0, &t2448_1_0_0, t2448_IOs, &t2448_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2448), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2455_TI;

#include "t851.h"
#include "t2456.h"
extern TypeInfo t2455_TI;
extern TypeInfo t3581_TI;
extern TypeInfo t70_TI;
extern TypeInfo t491_TI;
extern TypeInfo t55_TI;
extern TypeInfo t851_TI;
extern TypeInfo t553_TI;
extern TypeInfo t2456_TI;
extern TypeInfo t60_TI;
extern TypeInfo t348_TI;
#include "t2456MD.h"
extern Il2CppType t3581_0_0_0;
extern Il2CppType t491_0_0_0;
extern Il2CppType t851_0_0_0;
extern MethodInfo m116_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3097_MI;
extern MethodInfo m3095_MI;
extern MethodInfo m6560_MI;
extern MethodInfo m14014_MI;
extern MethodInfo m26452_MI;
extern MethodInfo m6582_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.GUILayoutEntry>
extern Il2CppType t2455_0_0_49;
FieldInfo t2455_f0_FieldInfo = 
{
	"_default", &t2455_0_0_49, &t2455_TI, offsetof(t2455_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2455_FIs[] =
{
	&t2455_f0_FieldInfo,
	NULL
};
extern MethodInfo m14013_MI;
static PropertyInfo t2455____Default_PropertyInfo = 
{
	&t2455_TI, "Default", &m14013_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2455_PIs[] =
{
	&t2455____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2455_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14010_MI = 
{
	".ctor", (methodPointerType)&m8420_gshared, &t2455_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2455_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14011_MI = 
{
	".cctor", (methodPointerType)&m8421_gshared, &t2455_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2455_m14012_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2455_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14012_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8422_gshared, &t2455_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t2455_m14012_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
extern Il2CppType t491_0_0_0;
static ParameterInfo t2455_m26452_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2455_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26452_MI = 
{
	"Compare", NULL, &t2455_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t2455_m26452_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2455_TI;
extern Il2CppType t2455_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14013_MI = 
{
	"get_Default", (methodPointerType)&m8423_gshared, &t2455_TI, &t2455_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2455_MIs[] =
{
	&m14010_MI,
	&m14011_MI,
	&m14012_MI,
	&m26452_MI,
	&m14013_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m26452_MI;
extern MethodInfo m14012_MI;
static MethodInfo* t2455_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m26452_MI,
	&m14012_MI,
	NULL,
};
extern TypeInfo t3580_TI;
extern TypeInfo t743_TI;
static TypeInfo* t2455_ITIs[] = 
{
	&t3580_TI,
	&t743_TI,
};
extern TypeInfo t3580_TI;
extern TypeInfo t743_TI;
static Il2CppInterfaceOffsetPair t2455_IOs[] = 
{
	{ &t3580_TI, 4},
	{ &t743_TI, 5},
};
extern Il2CppType t3581_0_0_0;
extern Il2CppType t491_0_0_0;
extern TypeInfo t2455_TI;
extern TypeInfo t2455_TI;
extern TypeInfo t2456_TI;
extern MethodInfo m14014_MI;
extern TypeInfo t491_TI;
extern MethodInfo m26452_MI;
static void* t2455_RGCTXData[8] = 
{
	(void*)&t3581_0_0_0,
	(void*)&t491_0_0_0,
	&t2455_TI,
	&t2455_TI,
	&t2456_TI,
	&m14014_MI,
	&t491_TI,
	&m26452_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2455_0_0_0;
extern Il2CppType t2455_1_0_0;
extern TypeInfo t7_TI;
struct t2455;
extern TypeInfo t2455_TI;
extern Il2CppGenericClass t2455_GC;
TypeInfo t2455_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2455_MIs, t2455_PIs, t2455_FIs, NULL, &t7_TI, NULL, NULL, &t2455_TI, t2455_ITIs, t2455_VT, &EmptyCustomAttributesCache, &t2455_TI, &t2455_0_0_0, &t2455_1_0_0, t2455_IOs, &t2455_GC, NULL, NULL, NULL, t2455_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2455), 0, -1, sizeof(t2455_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3580_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.GUILayoutEntry>
extern Il2CppType t491_0_0_0;
extern Il2CppType t491_0_0_0;
static ParameterInfo t3580_m19975_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t3580_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m19975_MI = 
{
	"Compare", NULL, &t3580_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t3580_m19975_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3580_MIs[] =
{
	&m19975_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3580_0_0_0;
extern Il2CppType t3580_1_0_0;
struct t3580;
extern TypeInfo t3580_TI;
extern Il2CppGenericClass t3580_GC;
TypeInfo t3580_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3580_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3580_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3580_TI, &t3580_0_0_0, &t3580_1_0_0, NULL, &t3580_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3581_TI;



// Metadata Definition System.IComparable`1<UnityEngine.GUILayoutEntry>
extern Il2CppType t491_0_0_0;
static ParameterInfo t3581_m19976_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t3581_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m19976_MI = 
{
	"CompareTo", NULL, &t3581_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t3581_m19976_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3581_MIs[] =
{
	&m19976_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3581_0_0_0;
extern Il2CppType t3581_1_0_0;
struct t3581;
extern TypeInfo t3581_TI;
extern Il2CppGenericClass t3581_GC;
TypeInfo t3581_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3581_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3581_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3581_TI, &t3581_0_0_0, &t3581_1_0_0, NULL, &t3581_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2456_TI;

extern TypeInfo t491_TI;
extern TypeInfo t3581_TI;
extern TypeInfo t60_TI;
extern TypeInfo t78_TI;
extern TypeInfo t7_TI;
extern TypeInfo t348_TI;
extern MethodInfo m14010_MI;
extern MethodInfo m19976_MI;
extern MethodInfo m7420_MI;
extern MethodInfo m2046_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.GUILayoutEntry>
extern TypeInfo t2456_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14014_MI = 
{
	".ctor", (methodPointerType)&m8424_gshared, &t2456_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
extern Il2CppType t491_0_0_0;
static ParameterInfo t2456_m14015_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2456_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14015_MI = 
{
	"Compare", (methodPointerType)&m8425_gshared, &t2456_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t2456_m14015_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2456_MIs[] =
{
	&m14014_MI,
	&m14015_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14015_MI;
extern MethodInfo m14012_MI;
extern MethodInfo m14015_MI;
static MethodInfo* t2456_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14015_MI,
	&m14012_MI,
	&m14015_MI,
};
extern TypeInfo t3580_TI;
extern TypeInfo t743_TI;
static Il2CppInterfaceOffsetPair t2456_IOs[] = 
{
	{ &t3580_TI, 4},
	{ &t743_TI, 5},
};
extern Il2CppType t3581_0_0_0;
extern Il2CppType t491_0_0_0;
extern TypeInfo t2455_TI;
extern TypeInfo t2455_TI;
extern TypeInfo t2456_TI;
extern MethodInfo m14014_MI;
extern TypeInfo t491_TI;
extern MethodInfo m26452_MI;
extern MethodInfo m14010_MI;
extern TypeInfo t491_TI;
extern TypeInfo t3581_TI;
extern MethodInfo m19976_MI;
static void* t2456_RGCTXData[12] = 
{
	(void*)&t3581_0_0_0,
	(void*)&t491_0_0_0,
	&t2455_TI,
	&t2455_TI,
	&t2456_TI,
	&m14014_MI,
	&t491_TI,
	&m26452_MI,
	&m14010_MI,
	&t491_TI,
	&t3581_TI,
	&m19976_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2456_0_0_0;
extern Il2CppType t2456_1_0_0;
extern TypeInfo t2455_TI;
struct t2456;
extern TypeInfo t2456_TI;
extern Il2CppGenericClass t2456_GC;
extern TypeInfo t850_TI;
TypeInfo t2456_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2456_MIs, NULL, NULL, NULL, &t2455_TI, NULL, &t850_TI, &t2456_TI, NULL, t2456_VT, &EmptyCustomAttributesCache, &t2456_TI, &t2456_0_0_0, &t2456_1_0_0, t2456_IOs, &t2456_GC, NULL, NULL, NULL, t2456_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2456), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2449_TI;
#include "t2449MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.GUILayoutEntry>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2449_m14016_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m14016_MI = 
{
	".ctor", (methodPointerType)&m8471_gshared, &t2449_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2449_m14016_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
extern Il2CppType t491_0_0_0;
static ParameterInfo t2449_m14017_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14017_MI = 
{
	"Invoke", (methodPointerType)&m8472_gshared, &t2449_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t2449_m14017_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t491_0_0_0;
extern Il2CppType t491_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2449_m14018_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t491_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14018_MI = 
{
	"BeginInvoke", (methodPointerType)&m8473_gshared, &t2449_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t2449_m14018_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2449_m14019_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2449_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14019_MI = 
{
	"EndInvoke", (methodPointerType)&m8474_gshared, &t2449_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2449_m14019_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2449_MIs[] =
{
	&m14016_MI,
	&m14017_MI,
	&m14018_MI,
	&m14019_MI,
	NULL
};
extern MethodInfo m1812_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1813_MI;
extern MethodInfo m123_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1815_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1816_MI;
extern MethodInfo m1817_MI;
extern MethodInfo m1818_MI;
extern MethodInfo m14017_MI;
extern MethodInfo m14018_MI;
extern MethodInfo m14019_MI;
static MethodInfo* t2449_VT[] =
{
	&m1812_MI,
	&m113_MI,
	&m1813_MI,
	&m123_MI,
	&m1814_MI,
	&m1815_MI,
	&m1814_MI,
	&m1816_MI,
	&m1817_MI,
	&m1818_MI,
	&m14017_MI,
	&m14018_MI,
	&m14019_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2449_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2449_0_0_0;
extern Il2CppType t2449_1_0_0;
extern TypeInfo t245_TI;
struct t2449;
extern TypeInfo t2449_TI;
extern Il2CppGenericClass t2449_GC;
TypeInfo t2449_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2449_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t2449_TI, NULL, t2449_VT, &EmptyCustomAttributesCache, &t2449_TI, &t2449_0_0_0, &t2449_1_0_0, t2449_IOs, &t2449_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2449), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3582_TI;

#include "t494.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutOption/Type>
extern MethodInfo m26453_MI;
static PropertyInfo t3582____Current_PropertyInfo = 
{
	&t3582_TI, "Current", &m26453_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3582_PIs[] =
{
	&t3582____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3582_TI;
extern Il2CppType t494_0_0_0;
extern void* RuntimeInvoker_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m26453_MI = 
{
	"get_Current", NULL, &t3582_TI, &t494_0_0_0, RuntimeInvoker_t494, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3582_MIs[] =
{
	&m26453_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3582_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3582_0_0_0;
extern Il2CppType t3582_1_0_0;
struct t3582;
extern TypeInfo t3582_TI;
extern Il2CppGenericClass t3582_GC;
TypeInfo t3582_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3582_MIs, t3582_PIs, NULL, NULL, NULL, NULL, NULL, &t3582_TI, t3582_ITIs, NULL, &EmptyCustomAttributesCache, &t3582_TI, &t3582_0_0_0, &t3582_1_0_0, NULL, &t3582_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2457.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2457_TI;
#include "t2457MD.h"

extern TypeInfo t2457_TI;
extern TypeInfo t494_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14024_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m19981_MI;
struct t52;
 int32_t m19981 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m19981_MI;


extern MethodInfo m14020_MI;
 void m14020 (t2457 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14021_MI;
 t7 * m14021 (t2457 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14024(__this, &m14024_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t494_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14022_MI;
 void m14022 (t2457 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14023_MI;
 bool m14023 (t2457 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t52 * L_1 = (__this->f0);
		int32_t L_2 = m3829(L_1, &m3829_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m14024_MI;
 int32_t m14024 (t2457 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1295 * L_1 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7023(L_1, (t34*) &_stringLiteral373, &m7023_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1295 * L_3 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7023(L_3, (t34*) &_stringLiteral374, &m7023_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t52 * L_4 = (__this->f0);
		t52 * L_5 = (__this->f0);
		int32_t L_6 = m3829(L_5, &m3829_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m19981(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m19981_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.GUILayoutOption/Type>
extern Il2CppType t52_0_0_1;
FieldInfo t2457_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2457_TI, offsetof(t2457, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2457_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2457_TI, offsetof(t2457, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2457_FIs[] =
{
	&t2457_f0_FieldInfo,
	&t2457_f1_FieldInfo,
	NULL
};
extern MethodInfo m14021_MI;
static PropertyInfo t2457____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2457_TI, "System.Collections.IEnumerator.Current", &m14021_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14024_MI;
static PropertyInfo t2457____Current_PropertyInfo = 
{
	&t2457_TI, "Current", &m14024_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2457_PIs[] =
{
	&t2457____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2457____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2457_m14020_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2457_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14020_MI = 
{
	".ctor", (methodPointerType)&m14020, &t2457_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2457_m14020_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2457_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14021_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14021, &t2457_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2457_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14022_MI = 
{
	"Dispose", (methodPointerType)&m14022, &t2457_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2457_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14023_MI = 
{
	"MoveNext", (methodPointerType)&m14023, &t2457_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2457_TI;
extern Il2CppType t494_0_0_0;
extern void* RuntimeInvoker_t494 (MethodInfo* method, void* obj, void** args);
MethodInfo m14024_MI = 
{
	"get_Current", (methodPointerType)&m14024, &t2457_TI, &t494_0_0_0, RuntimeInvoker_t494, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2457_MIs[] =
{
	&m14020_MI,
	&m14021_MI,
	&m14022_MI,
	&m14023_MI,
	&m14024_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14021_MI;
extern MethodInfo m14023_MI;
extern MethodInfo m14022_MI;
extern MethodInfo m14024_MI;
static MethodInfo* t2457_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14021_MI,
	&m14023_MI,
	&m14022_MI,
	&m14024_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3582_TI;
static TypeInfo* t2457_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3582_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3582_TI;
static Il2CppInterfaceOffsetPair t2457_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3582_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2457_0_0_0;
extern Il2CppType t2457_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2457_TI;
extern Il2CppGenericClass t2457_GC;
extern TypeInfo t52_TI;
TypeInfo t2457_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2457_MIs, t2457_PIs, t2457_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2457_TI, t2457_ITIs, t2457_VT, &EmptyCustomAttributesCache, &t2457_TI, &t2457_0_0_0, &t2457_1_0_0, t2457_IOs, &t2457_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2457)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4423_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutOption/Type>
extern MethodInfo m26454_MI;
static PropertyInfo t4423____Count_PropertyInfo = 
{
	&t4423_TI, "Count", &m26454_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26455_MI;
static PropertyInfo t4423____IsReadOnly_PropertyInfo = 
{
	&t4423_TI, "IsReadOnly", &m26455_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4423_PIs[] =
{
	&t4423____Count_PropertyInfo,
	&t4423____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4423_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26454_MI = 
{
	"get_Count", NULL, &t4423_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4423_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26455_MI = 
{
	"get_IsReadOnly", NULL, &t4423_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t494_0_0_0;
static ParameterInfo t4423_m26456_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t494_0_0_0},
};
extern TypeInfo t4423_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26456_MI = 
{
	"Add", NULL, &t4423_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4423_m26456_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4423_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26457_MI = 
{
	"Clear", NULL, &t4423_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t494_0_0_0;
static ParameterInfo t4423_m26458_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t494_0_0_0},
};
extern TypeInfo t4423_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26458_MI = 
{
	"Contains", NULL, &t4423_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4423_m26458_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3214_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4423_m26459_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3214_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4423_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26459_MI = 
{
	"CopyTo", NULL, &t4423_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4423_m26459_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t494_0_0_0;
static ParameterInfo t4423_m26460_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t494_0_0_0},
};
extern TypeInfo t4423_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26460_MI = 
{
	"Remove", NULL, &t4423_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4423_m26460_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4423_MIs[] =
{
	&m26454_MI,
	&m26455_MI,
	&m26456_MI,
	&m26457_MI,
	&m26458_MI,
	&m26459_MI,
	&m26460_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4425_TI;
static TypeInfo* t4423_ITIs[] = 
{
	&t618_TI,
	&t4425_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4423_0_0_0;
extern Il2CppType t4423_1_0_0;
struct t4423;
extern TypeInfo t4423_TI;
extern Il2CppGenericClass t4423_GC;
TypeInfo t4423_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4423_MIs, t4423_PIs, NULL, NULL, NULL, NULL, NULL, &t4423_TI, t4423_ITIs, NULL, &EmptyCustomAttributesCache, &t4423_TI, &t4423_0_0_0, &t4423_1_0_0, NULL, &t4423_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4425_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.GUILayoutOption/Type>
extern TypeInfo t4425_TI;
extern Il2CppType t3582_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26461_MI = 
{
	"GetEnumerator", NULL, &t4425_TI, &t3582_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4425_MIs[] =
{
	&m26461_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4425_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4425_0_0_0;
extern Il2CppType t4425_1_0_0;
struct t4425;
extern TypeInfo t4425_TI;
extern Il2CppGenericClass t4425_GC;
TypeInfo t4425_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4425_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4425_TI, t4425_ITIs, NULL, &EmptyCustomAttributesCache, &t4425_TI, &t4425_0_0_0, &t4425_1_0_0, NULL, &t4425_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4424_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.GUILayoutOption/Type>
extern MethodInfo m26462_MI;
extern MethodInfo m26463_MI;
static PropertyInfo t4424____Item_PropertyInfo = 
{
	&t4424_TI, "Item", &m26462_MI, &m26463_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4424_PIs[] =
{
	&t4424____Item_PropertyInfo,
	NULL
};
extern Il2CppType t494_0_0_0;
static ParameterInfo t4424_m26464_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t494_0_0_0},
};
extern TypeInfo t4424_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26464_MI = 
{
	"IndexOf", NULL, &t4424_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4424_m26464_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t494_0_0_0;
static ParameterInfo t4424_m26465_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t494_0_0_0},
};
extern TypeInfo t4424_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26465_MI = 
{
	"Insert", NULL, &t4424_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4424_m26465_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4424_m26466_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4424_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26466_MI = 
{
	"RemoveAt", NULL, &t4424_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4424_m26466_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4424_m26462_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4424_TI;
extern Il2CppType t494_0_0_0;
extern void* RuntimeInvoker_t494_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26462_MI = 
{
	"get_Item", NULL, &t4424_TI, &t494_0_0_0, RuntimeInvoker_t494_t60, t4424_m26462_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t494_0_0_0;
static ParameterInfo t4424_m26463_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t494_0_0_0},
};
extern TypeInfo t4424_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26463_MI = 
{
	"set_Item", NULL, &t4424_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4424_m26463_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4424_MIs[] =
{
	&m26464_MI,
	&m26465_MI,
	&m26466_MI,
	&m26462_MI,
	&m26463_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4423_TI;
extern TypeInfo t4425_TI;
static TypeInfo* t4424_ITIs[] = 
{
	&t618_TI,
	&t4423_TI,
	&t4425_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4424_0_0_0;
extern Il2CppType t4424_1_0_0;
struct t4424;
extern TypeInfo t4424_TI;
extern Il2CppGenericClass t4424_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4424_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4424_MIs, t4424_PIs, NULL, NULL, NULL, NULL, NULL, &t4424_TI, t4424_ITIs, NULL, &t1426__CustomAttributeCache, &t4424_TI, &t4424_0_0_0, &t4424_1_0_0, NULL, &t4424_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3583_TI;

#include "t480.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.GUISkin>
extern MethodInfo m26467_MI;
static PropertyInfo t3583____Current_PropertyInfo = 
{
	&t3583_TI, "Current", &m26467_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3583_PIs[] =
{
	&t3583____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3583_TI;
extern Il2CppType t480_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26467_MI = 
{
	"get_Current", NULL, &t3583_TI, &t480_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3583_MIs[] =
{
	&m26467_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3583_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3583_0_0_0;
extern Il2CppType t3583_1_0_0;
struct t3583;
extern TypeInfo t3583_TI;
extern Il2CppGenericClass t3583_GC;
TypeInfo t3583_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3583_MIs, t3583_PIs, NULL, NULL, NULL, NULL, NULL, &t3583_TI, t3583_ITIs, NULL, &EmptyCustomAttributesCache, &t3583_TI, &t3583_0_0_0, &t3583_1_0_0, NULL, &t3583_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2458.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2458_TI;
#include "t2458MD.h"

extern TypeInfo t2458_TI;
extern TypeInfo t480_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14029_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m19992_MI;
struct t52;
#define m19992(__this, p0, method) (t480 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m19992_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.GUISkin>
extern Il2CppType t52_0_0_1;
FieldInfo t2458_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2458_TI, offsetof(t2458, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2458_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2458_TI, offsetof(t2458, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2458_FIs[] =
{
	&t2458_f0_FieldInfo,
	&t2458_f1_FieldInfo,
	NULL
};
extern MethodInfo m14026_MI;
static PropertyInfo t2458____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2458_TI, "System.Collections.IEnumerator.Current", &m14026_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14029_MI;
static PropertyInfo t2458____Current_PropertyInfo = 
{
	&t2458_TI, "Current", &m14029_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2458_PIs[] =
{
	&t2458____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2458____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2458_m14025_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2458_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14025_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2458_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2458_m14025_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2458_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14026_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2458_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2458_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14027_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2458_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2458_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14028_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2458_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2458_TI;
extern Il2CppType t480_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14029_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2458_TI, &t480_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2458_MIs[] =
{
	&m14025_MI,
	&m14026_MI,
	&m14027_MI,
	&m14028_MI,
	&m14029_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14026_MI;
extern MethodInfo m14028_MI;
extern MethodInfo m14027_MI;
extern MethodInfo m14029_MI;
static MethodInfo* t2458_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14026_MI,
	&m14028_MI,
	&m14027_MI,
	&m14029_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3583_TI;
static TypeInfo* t2458_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3583_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3583_TI;
static Il2CppInterfaceOffsetPair t2458_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3583_TI, 7},
};
extern MethodInfo m14029_MI;
extern TypeInfo t480_TI;
extern MethodInfo m19992_MI;
static void* t2458_RGCTXData[3] = 
{
	&m14029_MI,
	&t480_TI,
	&m19992_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2458_0_0_0;
extern Il2CppType t2458_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2458_TI;
extern Il2CppGenericClass t2458_GC;
extern TypeInfo t52_TI;
TypeInfo t2458_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2458_MIs, t2458_PIs, t2458_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2458_TI, t2458_ITIs, t2458_VT, &EmptyCustomAttributesCache, &t2458_TI, &t2458_0_0_0, &t2458_1_0_0, t2458_IOs, &t2458_GC, NULL, NULL, NULL, t2458_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2458)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4426_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.GUISkin>
extern MethodInfo m26468_MI;
static PropertyInfo t4426____Count_PropertyInfo = 
{
	&t4426_TI, "Count", &m26468_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26469_MI;
static PropertyInfo t4426____IsReadOnly_PropertyInfo = 
{
	&t4426_TI, "IsReadOnly", &m26469_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4426_PIs[] =
{
	&t4426____Count_PropertyInfo,
	&t4426____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4426_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26468_MI = 
{
	"get_Count", NULL, &t4426_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4426_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26469_MI = 
{
	"get_IsReadOnly", NULL, &t4426_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t480_0_0_0;
static ParameterInfo t4426_m26470_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t480_0_0_0},
};
extern TypeInfo t4426_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26470_MI = 
{
	"Add", NULL, &t4426_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4426_m26470_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4426_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26471_MI = 
{
	"Clear", NULL, &t4426_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t480_0_0_0;
static ParameterInfo t4426_m26472_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t480_0_0_0},
};
extern TypeInfo t4426_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26472_MI = 
{
	"Contains", NULL, &t4426_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4426_m26472_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3215_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4426_m26473_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3215_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4426_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26473_MI = 
{
	"CopyTo", NULL, &t4426_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4426_m26473_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t480_0_0_0;
static ParameterInfo t4426_m26474_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t480_0_0_0},
};
extern TypeInfo t4426_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26474_MI = 
{
	"Remove", NULL, &t4426_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4426_m26474_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4426_MIs[] =
{
	&m26468_MI,
	&m26469_MI,
	&m26470_MI,
	&m26471_MI,
	&m26472_MI,
	&m26473_MI,
	&m26474_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4428_TI;
static TypeInfo* t4426_ITIs[] = 
{
	&t618_TI,
	&t4428_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4426_0_0_0;
extern Il2CppType t4426_1_0_0;
struct t4426;
extern TypeInfo t4426_TI;
extern Il2CppGenericClass t4426_GC;
TypeInfo t4426_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4426_MIs, t4426_PIs, NULL, NULL, NULL, NULL, NULL, &t4426_TI, t4426_ITIs, NULL, &EmptyCustomAttributesCache, &t4426_TI, &t4426_0_0_0, &t4426_1_0_0, NULL, &t4426_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4428_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.GUISkin>
extern TypeInfo t4428_TI;
extern Il2CppType t3583_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26475_MI = 
{
	"GetEnumerator", NULL, &t4428_TI, &t3583_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4428_MIs[] =
{
	&m26475_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4428_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4428_0_0_0;
extern Il2CppType t4428_1_0_0;
struct t4428;
extern TypeInfo t4428_TI;
extern Il2CppGenericClass t4428_GC;
TypeInfo t4428_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4428_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4428_TI, t4428_ITIs, NULL, &EmptyCustomAttributesCache, &t4428_TI, &t4428_0_0_0, &t4428_1_0_0, NULL, &t4428_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4427_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.GUISkin>
extern MethodInfo m26476_MI;
extern MethodInfo m26477_MI;
static PropertyInfo t4427____Item_PropertyInfo = 
{
	&t4427_TI, "Item", &m26476_MI, &m26477_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4427_PIs[] =
{
	&t4427____Item_PropertyInfo,
	NULL
};
extern Il2CppType t480_0_0_0;
static ParameterInfo t4427_m26478_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t480_0_0_0},
};
extern TypeInfo t4427_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26478_MI = 
{
	"IndexOf", NULL, &t4427_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4427_m26478_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t480_0_0_0;
static ParameterInfo t4427_m26479_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t480_0_0_0},
};
extern TypeInfo t4427_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26479_MI = 
{
	"Insert", NULL, &t4427_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4427_m26479_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4427_m26480_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4427_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26480_MI = 
{
	"RemoveAt", NULL, &t4427_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4427_m26480_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4427_m26476_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4427_TI;
extern Il2CppType t480_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26476_MI = 
{
	"get_Item", NULL, &t4427_TI, &t480_0_0_0, RuntimeInvoker_t7_t60, t4427_m26476_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t480_0_0_0;
static ParameterInfo t4427_m26477_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t480_0_0_0},
};
extern TypeInfo t4427_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26477_MI = 
{
	"set_Item", NULL, &t4427_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4427_m26477_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4427_MIs[] =
{
	&m26478_MI,
	&m26479_MI,
	&m26480_MI,
	&m26476_MI,
	&m26477_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4426_TI;
extern TypeInfo t4428_TI;
static TypeInfo* t4427_ITIs[] = 
{
	&t618_TI,
	&t4426_TI,
	&t4428_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4427_0_0_0;
extern Il2CppType t4427_1_0_0;
struct t4427;
extern TypeInfo t4427_TI;
extern Il2CppGenericClass t4427_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4427_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4427_MIs, t4427_PIs, NULL, NULL, NULL, NULL, NULL, &t4427_TI, t4427_ITIs, NULL, &t1426__CustomAttributeCache, &t4427_TI, &t4427_0_0_0, &t4427_1_0_0, NULL, &t4427_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2459.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2459_TI;
#include "t2459MD.h"

#include "t72.h"
#include "t573.h"
#include "t2460.h"
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t2459_TI;
extern TypeInfo t480_TI;
extern TypeInfo t2460_TI;
extern TypeInfo t53_TI;
#include "t2460MD.h"
extern MethodInfo m14032_MI;
extern MethodInfo m14034_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.GUISkin>
extern Il2CppType t350_0_0_33;
FieldInfo t2459_f1_FieldInfo = 
{
	"m_Arg1", &t350_0_0_33, &t2459_TI, offsetof(t2459, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2459_FIs[] =
{
	&t2459_f1_FieldInfo,
	NULL
};
extern Il2CppType t72_0_0_0;
extern Il2CppType t573_0_0_0;
extern Il2CppType t480_0_0_0;
static ParameterInfo t2459_m14030_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t72_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t480_0_0_0},
};
extern TypeInfo t2459_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14030_MI = 
{
	".ctor", (methodPointerType)&m8007_gshared, &t2459_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7_t7, t2459_m14030_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2459_m14031_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2459_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14031_MI = 
{
	"Invoke", (methodPointerType)&m8009_gshared, &t2459_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2459_m14031_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2459_MIs[] =
{
	&m14030_MI,
	&m14031_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14031_MI;
extern MethodInfo m14035_MI;
static MethodInfo* t2459_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14031_MI,
	&m14035_MI,
};
extern Il2CppType t2461_0_0_0;
extern TypeInfo t2461_TI;
extern MethodInfo m20002_MI;
extern TypeInfo t480_TI;
extern MethodInfo m14037_MI;
extern MethodInfo m14032_MI;
extern TypeInfo t480_TI;
extern MethodInfo m14034_MI;
static void* t2459_RGCTXData[8] = 
{
	(void*)&t2461_0_0_0,
	&t2461_TI,
	&m20002_MI,
	&t480_TI,
	&m14037_MI,
	&m14032_MI,
	&t480_TI,
	&m14034_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2459_0_0_0;
extern Il2CppType t2459_1_0_0;
extern TypeInfo t2460_TI;
struct t2459;
extern TypeInfo t2459_TI;
extern Il2CppGenericClass t2459_GC;
TypeInfo t2459_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2459_MIs, NULL, t2459_FIs, NULL, &t2460_TI, NULL, NULL, &t2459_TI, NULL, t2459_VT, &EmptyCustomAttributesCache, &t2459_TI, &t2459_0_0_0, &t2459_1_0_0, NULL, &t2459_GC, NULL, NULL, NULL, t2459_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2459), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2460_TI;

#include "t2461.h"
#include "t374.h"
extern TypeInfo t2460_TI;
extern TypeInfo t2461_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern TypeInfo t480_TI;
extern TypeInfo t53_TI;
#include "t572MD.h"
#include "t374MD.h"
#include "t2461MD.h"
extern Il2CppType t2461_0_0_0;
extern MethodInfo m2910_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3073_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m20002_MI;
extern MethodInfo m2911_MI;
extern MethodInfo m14037_MI;
extern MethodInfo m3069_MI;
extern MethodInfo m3067_MI;
struct t572;
#include "t572.h"
struct t572;
 void m17212_gshared (t7 * __this, t7 * p0, MethodInfo* method);
#define m17212(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
#define m20002(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
extern MethodInfo m20002_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.GUISkin>
extern Il2CppType t2461_0_0_1;
FieldInfo t2460_f0_FieldInfo = 
{
	"Delegate", &t2461_0_0_1, &t2460_TI, offsetof(t2460, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2460_FIs[] =
{
	&t2460_f0_FieldInfo,
	NULL
};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2460_m14032_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2460_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14032_MI = 
{
	".ctor", (methodPointerType)&m8010_gshared, &t2460_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t2460_m14032_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2461_0_0_0;
static ParameterInfo t2460_m14033_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2461_0_0_0},
};
extern TypeInfo t2460_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14033_MI = 
{
	".ctor", (methodPointerType)&m8011_gshared, &t2460_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2460_m14033_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2460_m14034_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2460_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14034_MI = 
{
	"Invoke", (methodPointerType)&m8012_gshared, &t2460_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2460_m14034_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2460_m14035_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2460_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14035_MI = 
{
	"Find", (methodPointerType)&m8013_gshared, &t2460_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2460_m14035_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2460_MIs[] =
{
	&m14032_MI,
	&m14033_MI,
	&m14034_MI,
	&m14035_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14034_MI;
extern MethodInfo m14035_MI;
static MethodInfo* t2460_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14034_MI,
	&m14035_MI,
};
extern Il2CppType t2461_0_0_0;
extern TypeInfo t2461_TI;
extern MethodInfo m20002_MI;
extern TypeInfo t480_TI;
extern MethodInfo m14037_MI;
static void* t2460_RGCTXData[5] = 
{
	(void*)&t2461_0_0_0,
	&t2461_TI,
	&m20002_MI,
	&t480_TI,
	&m14037_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2460_0_0_0;
extern Il2CppType t2460_1_0_0;
extern TypeInfo t572_TI;
struct t2460;
extern TypeInfo t2460_TI;
extern Il2CppGenericClass t2460_GC;
TypeInfo t2460_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2460_MIs, NULL, t2460_FIs, NULL, &t572_TI, NULL, NULL, &t2460_TI, NULL, t2460_VT, &EmptyCustomAttributesCache, &t2460_TI, &t2460_0_0_0, &t2460_1_0_0, NULL, &t2460_GC, NULL, NULL, NULL, t2460_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2460), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2461_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.GUISkin>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2461_m14036_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2461_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m14036_MI = 
{
	".ctor", (methodPointerType)&m8014_gshared, &t2461_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2461_m14036_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t480_0_0_0;
static ParameterInfo t2461_m14037_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t480_0_0_0},
};
extern TypeInfo t2461_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14037_MI = 
{
	"Invoke", (methodPointerType)&m8015_gshared, &t2461_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2461_m14037_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t480_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2461_m14038_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t480_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2461_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14038_MI = 
{
	"BeginInvoke", (methodPointerType)&m8016_gshared, &t2461_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7, t2461_m14038_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2461_m14039_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2461_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14039_MI = 
{
	"EndInvoke", (methodPointerType)&m8017_gshared, &t2461_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2461_m14039_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2461_MIs[] =
{
	&m14036_MI,
	&m14037_MI,
	&m14038_MI,
	&m14039_MI,
	NULL
};
extern MethodInfo m1812_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1813_MI;
extern MethodInfo m123_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1815_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1816_MI;
extern MethodInfo m1817_MI;
extern MethodInfo m1818_MI;
extern MethodInfo m14037_MI;
extern MethodInfo m14038_MI;
extern MethodInfo m14039_MI;
static MethodInfo* t2461_VT[] =
{
	&m1812_MI,
	&m113_MI,
	&m1813_MI,
	&m123_MI,
	&m1814_MI,
	&m1815_MI,
	&m1814_MI,
	&m1816_MI,
	&m1817_MI,
	&m1818_MI,
	&m14037_MI,
	&m14038_MI,
	&m14039_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2461_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2461_0_0_0;
extern Il2CppType t2461_1_0_0;
extern TypeInfo t245_TI;
struct t2461;
extern TypeInfo t2461_TI;
extern Il2CppGenericClass t2461_GC;
TypeInfo t2461_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2461_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t2461_TI, NULL, t2461_VT, &EmptyCustomAttributesCache, &t2461_TI, &t2461_0_0_0, &t2461_1_0_0, t2461_IOs, &t2461_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2461), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2469_TI;

#include "t483.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.GUIStyle>
extern MethodInfo m26481_MI;
static PropertyInfo t2469____Current_PropertyInfo = 
{
	&t2469_TI, "Current", &m26481_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2469_PIs[] =
{
	&t2469____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2469_TI;
extern Il2CppType t483_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26481_MI = 
{
	"get_Current", NULL, &t2469_TI, &t483_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2469_MIs[] =
{
	&m26481_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t2469_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2469_0_0_0;
extern Il2CppType t2469_1_0_0;
struct t2469;
extern TypeInfo t2469_TI;
extern Il2CppGenericClass t2469_GC;
TypeInfo t2469_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2469_MIs, t2469_PIs, NULL, NULL, NULL, NULL, NULL, &t2469_TI, t2469_ITIs, NULL, &EmptyCustomAttributesCache, &t2469_TI, &t2469_0_0_0, &t2469_1_0_0, NULL, &t2469_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2462.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2462_TI;
#include "t2462MD.h"

extern TypeInfo t2462_TI;
extern TypeInfo t483_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14044_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20004_MI;
struct t52;
#define m20004(__this, p0, method) (t483 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m20004_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.GUIStyle>
extern Il2CppType t52_0_0_1;
FieldInfo t2462_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2462_TI, offsetof(t2462, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2462_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2462_TI, offsetof(t2462, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2462_FIs[] =
{
	&t2462_f0_FieldInfo,
	&t2462_f1_FieldInfo,
	NULL
};
extern MethodInfo m14041_MI;
static PropertyInfo t2462____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2462_TI, "System.Collections.IEnumerator.Current", &m14041_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14044_MI;
static PropertyInfo t2462____Current_PropertyInfo = 
{
	&t2462_TI, "Current", &m14044_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2462_PIs[] =
{
	&t2462____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2462____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2462_m14040_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2462_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14040_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2462_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2462_m14040_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2462_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14041_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2462_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2462_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14042_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2462_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2462_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14043_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2462_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2462_TI;
extern Il2CppType t483_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14044_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2462_TI, &t483_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2462_MIs[] =
{
	&m14040_MI,
	&m14041_MI,
	&m14042_MI,
	&m14043_MI,
	&m14044_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14041_MI;
extern MethodInfo m14043_MI;
extern MethodInfo m14042_MI;
extern MethodInfo m14044_MI;
static MethodInfo* t2462_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14041_MI,
	&m14043_MI,
	&m14042_MI,
	&m14044_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2469_TI;
static TypeInfo* t2462_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2469_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2469_TI;
static Il2CppInterfaceOffsetPair t2462_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2469_TI, 7},
};
extern MethodInfo m14044_MI;
extern TypeInfo t483_TI;
extern MethodInfo m20004_MI;
static void* t2462_RGCTXData[3] = 
{
	&m14044_MI,
	&t483_TI,
	&m20004_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2462_0_0_0;
extern Il2CppType t2462_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2462_TI;
extern Il2CppGenericClass t2462_GC;
extern TypeInfo t52_TI;
TypeInfo t2462_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2462_MIs, t2462_PIs, t2462_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2462_TI, t2462_ITIs, t2462_VT, &EmptyCustomAttributesCache, &t2462_TI, &t2462_0_0_0, &t2462_1_0_0, t2462_IOs, &t2462_GC, NULL, NULL, NULL, t2462_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2462)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4429_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.GUIStyle>
extern MethodInfo m26482_MI;
static PropertyInfo t4429____Count_PropertyInfo = 
{
	&t4429_TI, "Count", &m26482_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26483_MI;
static PropertyInfo t4429____IsReadOnly_PropertyInfo = 
{
	&t4429_TI, "IsReadOnly", &m26483_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4429_PIs[] =
{
	&t4429____Count_PropertyInfo,
	&t4429____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4429_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26482_MI = 
{
	"get_Count", NULL, &t4429_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4429_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26483_MI = 
{
	"get_IsReadOnly", NULL, &t4429_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t483_0_0_0;
static ParameterInfo t4429_m26484_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t4429_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26484_MI = 
{
	"Add", NULL, &t4429_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4429_m26484_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4429_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26485_MI = 
{
	"Clear", NULL, &t4429_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t483_0_0_0;
static ParameterInfo t4429_m26486_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t4429_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26486_MI = 
{
	"Contains", NULL, &t4429_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4429_m26486_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t499_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4429_m26487_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t499_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4429_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26487_MI = 
{
	"CopyTo", NULL, &t4429_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4429_m26487_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t483_0_0_0;
static ParameterInfo t4429_m26488_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t4429_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26488_MI = 
{
	"Remove", NULL, &t4429_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4429_m26488_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4429_MIs[] =
{
	&m26482_MI,
	&m26483_MI,
	&m26484_MI,
	&m26485_MI,
	&m26486_MI,
	&m26487_MI,
	&m26488_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4431_TI;
static TypeInfo* t4429_ITIs[] = 
{
	&t618_TI,
	&t4431_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4429_0_0_0;
extern Il2CppType t4429_1_0_0;
struct t4429;
extern TypeInfo t4429_TI;
extern Il2CppGenericClass t4429_GC;
TypeInfo t4429_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4429_MIs, t4429_PIs, NULL, NULL, NULL, NULL, NULL, &t4429_TI, t4429_ITIs, NULL, &EmptyCustomAttributesCache, &t4429_TI, &t4429_0_0_0, &t4429_1_0_0, NULL, &t4429_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4431_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.GUIStyle>
extern TypeInfo t4431_TI;
extern Il2CppType t2469_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26489_MI = 
{
	"GetEnumerator", NULL, &t4431_TI, &t2469_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4431_MIs[] =
{
	&m26489_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4431_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4431_0_0_0;
extern Il2CppType t4431_1_0_0;
struct t4431;
extern TypeInfo t4431_TI;
extern Il2CppGenericClass t4431_GC;
TypeInfo t4431_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4431_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4431_TI, t4431_ITIs, NULL, &EmptyCustomAttributesCache, &t4431_TI, &t4431_0_0_0, &t4431_1_0_0, NULL, &t4431_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4430_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.GUIStyle>
extern MethodInfo m26490_MI;
extern MethodInfo m26491_MI;
static PropertyInfo t4430____Item_PropertyInfo = 
{
	&t4430_TI, "Item", &m26490_MI, &m26491_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4430_PIs[] =
{
	&t4430____Item_PropertyInfo,
	NULL
};
extern Il2CppType t483_0_0_0;
static ParameterInfo t4430_m26492_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t4430_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26492_MI = 
{
	"IndexOf", NULL, &t4430_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4430_m26492_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t483_0_0_0;
static ParameterInfo t4430_m26493_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t4430_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26493_MI = 
{
	"Insert", NULL, &t4430_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4430_m26493_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4430_m26494_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4430_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26494_MI = 
{
	"RemoveAt", NULL, &t4430_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4430_m26494_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4430_m26490_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4430_TI;
extern Il2CppType t483_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26490_MI = 
{
	"get_Item", NULL, &t4430_TI, &t483_0_0_0, RuntimeInvoker_t7_t60, t4430_m26490_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t483_0_0_0;
static ParameterInfo t4430_m26491_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t4430_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26491_MI = 
{
	"set_Item", NULL, &t4430_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4430_m26491_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4430_MIs[] =
{
	&m26492_MI,
	&m26493_MI,
	&m26494_MI,
	&m26490_MI,
	&m26491_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4429_TI;
extern TypeInfo t4431_TI;
static TypeInfo* t4430_ITIs[] = 
{
	&t618_TI,
	&t4429_TI,
	&t4431_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4430_0_0_0;
extern Il2CppType t4430_1_0_0;
struct t4430;
extern TypeInfo t4430_TI;
extern Il2CppGenericClass t4430_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4430_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4430_MIs, t4430_PIs, NULL, NULL, NULL, NULL, NULL, &t4430_TI, t4430_ITIs, NULL, &t1426__CustomAttributeCache, &t4430_TI, &t4430_0_0_0, &t4430_1_0_0, NULL, &t4430_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t500.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t500_TI;
#include "t500MD.h"

#include "t607.h"
#include "t732.h"
#include "t733.h"
#include "t2465.h"
#include "t2463.h"
#include "t2471.h"
#include "t2467.h"
#include "t2472.h"
#include "t2473.h"
#include "t2476.h"
extern TypeInfo t500_TI;
extern TypeInfo t53_TI;
extern TypeInfo t34_TI;
extern TypeInfo t483_TI;
extern TypeInfo t87_TI;
extern TypeInfo t1598_TI;
extern TypeInfo t60_TI;
extern TypeInfo t852_TI;
extern TypeInfo t55_TI;
extern TypeInfo t607_TI;
extern TypeInfo t2464_TI;
extern TypeInfo t2465_TI;
extern TypeInfo t3020_TI;
extern TypeInfo t854_TI;
extern TypeInfo t2463_TI;
extern TypeInfo t2471_TI;
extern TypeInfo t2467_TI;
extern TypeInfo t2472_TI;
extern TypeInfo t88_TI;
extern TypeInfo t2473_TI;
extern TypeInfo t731_TI;
extern TypeInfo t1476_TI;
extern TypeInfo t463_TI;
extern TypeInfo t499_TI;
extern TypeInfo t348_TI;
extern TypeInfo t881_TI;
extern TypeInfo t2476_TI;
extern TypeInfo t5357_TI;
extern TypeInfo t70_TI;
#include "t607MD.h"
#include "t2465MD.h"
#include "t2463MD.h"
#include "t2471MD.h"
#include "t2467MD.h"
#include "t2472MD.h"
#include "t2473MD.h"
#include "t881MD.h"
#include "t2476MD.h"
#include "t732MD.h"
extern Il2CppType t1598_0_0_0;
extern Il2CppType t2464_0_0_0;
extern Il2CppType t34_0_0_0;
extern Il2CppType t483_0_0_0;
extern MethodInfo m14075_MI;
extern MethodInfo m14076_MI;
extern MethodInfo m2982_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m26495_MI;
extern MethodInfo m26496_MI;
extern MethodInfo m14067_MI;
extern MethodInfo m14091_MI;
extern MethodInfo m116_MI;
extern MethodInfo m14061_MI;
extern MethodInfo m14081_MI;
extern MethodInfo m14083_MI;
extern MethodInfo m14068_MI;
extern MethodInfo m14077_MI;
extern MethodInfo m14066_MI;
extern MethodInfo m14074_MI;
extern MethodInfo m14063_MI;
extern MethodInfo m14079_MI;
extern MethodInfo m14124_MI;
extern MethodInfo m20028_MI;
extern MethodInfo m14064_MI;
extern MethodInfo m14128_MI;
extern MethodInfo m20030_MI;
extern MethodInfo m14109_MI;
extern MethodInfo m14132_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m14141_MI;
extern MethodInfo m14062_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m14060_MI;
extern MethodInfo m14080_MI;
extern MethodInfo m20031_MI;
extern MethodInfo m4529_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m3874_MI;
extern MethodInfo m14152_MI;
extern MethodInfo m26497_MI;
extern MethodInfo m5859_MI;
extern MethodInfo m5865_MI;
extern MethodInfo m5868_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m5855_MI;
extern MethodInfo m3964_MI;
extern MethodInfo m1876_MI;
extern MethodInfo m6583_MI;
extern MethodInfo m3933_MI;
extern MethodInfo m2983_MI;
extern MethodInfo m26498_MI;
extern MethodInfo m4471_MI;
struct t500;
 void m20028 (t500 * __this, t3020* p0, int32_t p1, t2463 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20028_MI;
struct t500;
 void m20030 (t500 * __this, t52 * p0, int32_t p1, t2471 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20030_MI;
struct t500;
 void m20031 (t500 * __this, t2464* p0, int32_t p1, t2471 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20031_MI;


extern MethodInfo m14052_MI;
 void m14052 (t500 * __this, t2465  p0, MethodInfo* method){
	{
		t34* L_0 = m14081((&p0), &m14081_MI);
		t483 * L_1 = m14083((&p0), &m14083_MI);
		VirtActionInvoker2< t34*, t483 * >::Invoke(&m14068_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m14053_MI;
 bool m14053 (t500 * __this, t2465  p0, MethodInfo* method){
	{
		bool L_0 = m14077(__this, p0, &m14077_MI);
		return L_0;
	}
}
extern MethodInfo m14055_MI;
 bool m14055 (t500 * __this, t2465  p0, MethodInfo* method){
	{
		bool L_0 = m14077(__this, p0, &m14077_MI);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		t34* L_1 = m14081((&p0), &m14081_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t34* >::Invoke(&m14074_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m14064_MI;
 t2465  m14064 (t7 * __this, t34* p0, t483 * p1, MethodInfo* method){
	{
		t2465  L_0 = {0};
		m14080(&L_0, p0, p1, &m14080_MI);
		return L_0;
	}
}
extern MethodInfo m14077_MI;
 bool m14077 (t500 * __this, t2465  p0, MethodInfo* method){
	t483 * V_0 = {0};
	{
		t34* L_0 = m14081((&p0), &m14081_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t34*, t483 ** >::Invoke(&m2983_MI, __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2476_TI));
		t2476 * L_2 = m14152(NULL, &m14152_MI);
		t483 * L_3 = m14083((&p0), &m14083_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, t483 *, t483 * >::Invoke(&m26498_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m14078_MI;
 t2467  m14078 (t500 * __this, MethodInfo* method){
	{
		t2467  L_0 = {0};
		m14109(&L_0, __this, &m14109_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
extern Il2CppType t60_0_0_32849;
FieldInfo t500_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t60_0_0_32849, &t500_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_32849;
FieldInfo t500_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t54_0_0_32849, &t500_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_32849;
FieldInfo t500_f2_FieldInfo = 
{
	"NO_SLOT", &t60_0_0_32849, &t500_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_32849;
FieldInfo t500_f3_FieldInfo = 
{
	"HASH_FLAG", &t60_0_0_32849, &t500_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t731_0_0_1;
FieldInfo t500_f4_FieldInfo = 
{
	"table", &t731_0_0_1, &t500_TI, offsetof(t500, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1476_0_0_1;
FieldInfo t500_f5_FieldInfo = 
{
	"linkSlots", &t1476_0_0_1, &t500_TI, offsetof(t500, f5), &EmptyCustomAttributesCache};
extern Il2CppType t463_0_0_1;
FieldInfo t500_f6_FieldInfo = 
{
	"keySlots", &t463_0_0_1, &t500_TI, offsetof(t500, f6), &EmptyCustomAttributesCache};
extern Il2CppType t499_0_0_1;
FieldInfo t500_f7_FieldInfo = 
{
	"valueSlots", &t499_0_0_1, &t500_TI, offsetof(t500, f7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t500_f8_FieldInfo = 
{
	"touchedSlots", &t60_0_0_1, &t500_TI, offsetof(t500, f8), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t500_f9_FieldInfo = 
{
	"emptySlot", &t60_0_0_1, &t500_TI, offsetof(t500, f9), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t500_f10_FieldInfo = 
{
	"count", &t60_0_0_1, &t500_TI, offsetof(t500, f10), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t500_f11_FieldInfo = 
{
	"threshold", &t60_0_0_1, &t500_TI, offsetof(t500, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1598_0_0_1;
FieldInfo t500_f12_FieldInfo = 
{
	"hcp", &t1598_0_0_1, &t500_TI, offsetof(t500, f12), &EmptyCustomAttributesCache};
extern Il2CppType t732_0_0_1;
FieldInfo t500_f13_FieldInfo = 
{
	"serialization_info", &t732_0_0_1, &t500_TI, offsetof(t500, f13), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t500_f14_FieldInfo = 
{
	"generation", &t60_0_0_1, &t500_TI, offsetof(t500, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2463_0_0_17;
extern CustomAttributesCache t859__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t500_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t2463_0_0_17, &t500_TI, offsetof(t500_SFs, f15), &t859__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t500_FIs[] =
{
	&t500_f0_FieldInfo,
	&t500_f1_FieldInfo,
	&t500_f2_FieldInfo,
	&t500_f3_FieldInfo,
	&t500_f4_FieldInfo,
	&t500_f5_FieldInfo,
	&t500_f6_FieldInfo,
	&t500_f7_FieldInfo,
	&t500_f8_FieldInfo,
	&t500_f9_FieldInfo,
	&t500_f10_FieldInfo,
	&t500_f11_FieldInfo,
	&t500_f12_FieldInfo,
	&t500_f13_FieldInfo,
	&t500_f14_FieldInfo,
	&t500_f15_FieldInfo,
	NULL
};
static const int32_t t500_f0_DefaultValueData = 10;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t500_f0_DefaultValue = 
{
	&t500_f0_FieldInfo, { (char*)&t500_f0_DefaultValueData, &t60_0_0_0 }};
static const float t500_f1_DefaultValueData = 0.9f;
extern Il2CppType t54_0_0_0;
static Il2CppFieldDefaultValueEntry t500_f1_DefaultValue = 
{
	&t500_f1_FieldInfo, { (char*)&t500_f1_DefaultValueData, &t54_0_0_0 }};
static const int32_t t500_f2_DefaultValueData = -1;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t500_f2_DefaultValue = 
{
	&t500_f2_FieldInfo, { (char*)&t500_f2_DefaultValueData, &t60_0_0_0 }};
static const int32_t t500_f3_DefaultValueData = -2147483648;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t500_f3_DefaultValue = 
{
	&t500_f3_FieldInfo, { (char*)&t500_f3_DefaultValueData, &t60_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t500_FDVs[] = 
{
	&t500_f0_DefaultValue,
	&t500_f1_DefaultValue,
	&t500_f2_DefaultValue,
	&t500_f3_DefaultValue,
	NULL
};
extern MethodInfo m14048_MI;
static PropertyInfo t500____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t500_TI, "System.Collections.IDictionary.Item", NULL, &m14048_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14049_MI;
static PropertyInfo t500____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t500_TI, "System.Collections.ICollection.IsSynchronized", &m14049_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14050_MI;
static PropertyInfo t500____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t500_TI, "System.Collections.ICollection.SyncRoot", &m14050_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14051_MI;
static PropertyInfo t500____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t500_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m14051_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14060_MI;
static PropertyInfo t500____Count_PropertyInfo = 
{
	&t500_TI, "Count", &m14060_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2982_MI;
static PropertyInfo t500____Item_PropertyInfo = 
{
	&t500_TI, "Item", NULL, &m2982_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2984_MI;
static PropertyInfo t500____Values_PropertyInfo = 
{
	&t500_TI, "Values", &m2984_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t500_PIs[] =
{
	&t500____System_Collections_IDictionary_Item_PropertyInfo,
	&t500____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t500____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t500____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t500____Count_PropertyInfo,
	&t500____Item_PropertyInfo,
	&t500____Values_PropertyInfo,
	NULL
};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14045_MI = 
{
	".ctor", (methodPointerType)&m11135_gshared, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1598_0_0_0;
static ParameterInfo t500_m2981_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t1598_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m2981_MI = 
{
	".ctor", (methodPointerType)&m11137_gshared, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t500_m2981_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t500_m14046_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14046_MI = 
{
	".ctor", (methodPointerType)&m11139_gshared, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t500_m14046_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t732_0_0_0;
extern Il2CppType t733_0_0_0;
static ParameterInfo t500_m14047_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t732_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t733_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t733 (MethodInfo* method, void* obj, void** args);
MethodInfo m14047_MI = 
{
	".ctor", (methodPointerType)&m11141_gshared, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t733, t500_m14047_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t500_m14048_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14048_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m11143_gshared, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t500_m14048_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t500_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14049_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11145_gshared, &t500_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t500_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14050_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11147_gshared, &t500_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t500_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14051_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m11149_gshared, &t500_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2465_0_0_0;
static ParameterInfo t500_m14052_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2465_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t2465 (MethodInfo* method, void* obj, void** args);
MethodInfo m14052_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m14052, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53_t2465, t500_m14052_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2465_0_0_0;
static ParameterInfo t500_m14053_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2465_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2465 (MethodInfo* method, void* obj, void** args);
MethodInfo m14053_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m14053, &t500_TI, &t55_0_0_0, RuntimeInvoker_t55_t2465, t500_m14053_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2464_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t500_m14054_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2464_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14054_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m11153_gshared, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t500_m14054_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2465_0_0_0;
static ParameterInfo t500_m14055_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2465_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2465 (MethodInfo* method, void* obj, void** args);
MethodInfo m14055_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m14055, &t500_TI, &t55_0_0_0, RuntimeInvoker_t55_t2465, t500_m14055_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t500_m14056_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14056_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11156_gshared, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t500_m14056_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t500_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14057_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11158_gshared, &t500_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t500_TI;
extern Il2CppType t2466_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14058_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m11160_gshared, &t500_TI, &t2466_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t500_TI;
extern Il2CppType t860_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14059_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m11162_gshared, &t500_TI, &t860_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t500_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14060_MI = 
{
	"get_Count", (methodPointerType)&m11164_gshared, &t500_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t483_0_0_0;
static ParameterInfo t500_m2982_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m2982_MI = 
{
	"set_Item", (methodPointerType)&m11166_gshared, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t500_m2982_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1598_0_0_0;
static ParameterInfo t500_m14061_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t1598_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14061_MI = 
{
	"Init", (methodPointerType)&m11168_gshared, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t500_m14061_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t500_m14062_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14062_MI = 
{
	"InitArrays", (methodPointerType)&m11170_gshared, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t500_m14062_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t500_m14063_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14063_MI = 
{
	"CopyToCheck", (methodPointerType)&m11172_gshared, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t500_m14063_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern Il2CppGenericContainer m26499_IGC;
extern TypeInfo m26499_gp_TRet_0_TI;
Il2CppGenericParamFull m26499_gp_TRet_0_TI_GenericParamFull = { { &m26499_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m26499_gp_TElem_1_TI;
Il2CppGenericParamFull m26499_gp_TElem_1_TI_GenericParamFull = { { &m26499_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m26499_IGPA[2] = 
{
	&m26499_gp_TRet_0_TI_GenericParamFull,
	&m26499_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m26499_MI;
Il2CppGenericContainer m26499_IGC = { { NULL, NULL }, NULL, &m26499_MI, 2, 1, m26499_IGPA };
MethodInfo m26499_MI = 
{
	"Do_CopyTo", NULL, &t500_TI, &t53_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t483_0_0_0;
static ParameterInfo t500_m14064_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t2465_0_0_0;
extern void* RuntimeInvoker_t2465_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14064_MI = 
{
	"make_pair", (methodPointerType)&m14064, &t500_TI, &t2465_0_0_0, RuntimeInvoker_t2465_t7_t7, t500_m14064_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t483_0_0_0;
static ParameterInfo t500_m14065_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t483_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14065_MI = 
{
	"pick_value", (methodPointerType)&m11175_gshared, &t500_TI, &t483_0_0_0, RuntimeInvoker_t7_t7_t7, t500_m14065_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2464_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t500_m14066_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2464_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14066_MI = 
{
	"CopyTo", (methodPointerType)&m11177_gshared, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t500_m14066_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern Il2CppGenericContainer m26500_IGC;
extern TypeInfo m26500_gp_TRet_0_TI;
Il2CppGenericParamFull m26500_gp_TRet_0_TI_GenericParamFull = { { &m26500_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m26500_IGPA[1] = 
{
	&m26500_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m26500_MI;
Il2CppGenericContainer m26500_IGC = { { NULL, NULL }, NULL, &m26500_MI, 1, 1, m26500_IGPA };
MethodInfo m26500_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t500_TI, &t53_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14067_MI = 
{
	"Resize", (methodPointerType)&m11179_gshared, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t483_0_0_0;
static ParameterInfo t500_m14068_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14068_MI = 
{
	"Add", (methodPointerType)&m11180_gshared, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t500_m14068_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 23, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14069_MI = 
{
	"Clear", (methodPointerType)&m11182_gshared, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t500_m14070_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14070_MI = 
{
	"ContainsKey", (methodPointerType)&m11184_gshared, &t500_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t500_m14070_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t483_0_0_0;
static ParameterInfo t500_m14071_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14071_MI = 
{
	"ContainsValue", (methodPointerType)&m11186_gshared, &t500_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t500_m14071_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t732_0_0_0;
extern Il2CppType t733_0_0_0;
static ParameterInfo t500_m14072_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t732_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t733_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t733 (MethodInfo* method, void* obj, void** args);
MethodInfo m14072_MI = 
{
	"GetObjectData", (methodPointerType)&m11188_gshared, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t733, t500_m14072_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t500_m14073_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14073_MI = 
{
	"OnDeserialization", (methodPointerType)&m11190_gshared, &t500_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t500_m14073_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t500_m14074_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14074_MI = 
{
	"Remove", (methodPointerType)&m11192_gshared, &t500_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t500_m14074_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t483_1_0_0;
static ParameterInfo t500_m2983_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t483_1_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t5358 (MethodInfo* method, void* obj, void** args);
MethodInfo m2983_MI = 
{
	"TryGetValue", (methodPointerType)&m11193_gshared, &t500_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t5358, t500_m2983_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t500_TI;
extern Il2CppType t607_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m2984_MI = 
{
	"get_Values", (methodPointerType)&m11195_gshared, &t500_TI, &t607_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t500_m14075_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14075_MI = 
{
	"ToTKey", (methodPointerType)&m11197_gshared, &t500_TI, &t34_0_0_0, RuntimeInvoker_t7_t7, t500_m14075_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t500_m14076_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t483_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14076_MI = 
{
	"ToTValue", (methodPointerType)&m11199_gshared, &t500_TI, &t483_0_0_0, RuntimeInvoker_t7_t7, t500_m14076_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2465_0_0_0;
static ParameterInfo t500_m14077_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t2465_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2465 (MethodInfo* method, void* obj, void** args);
MethodInfo m14077_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m14077, &t500_TI, &t55_0_0_0, RuntimeInvoker_t55_t2465, t500_m14077_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t500_TI;
extern Il2CppType t2467_0_0_0;
extern void* RuntimeInvoker_t2467 (MethodInfo* method, void* obj, void** args);
MethodInfo m14078_MI = 
{
	"GetEnumerator", (methodPointerType)&m14078, &t500_TI, &t2467_0_0_0, RuntimeInvoker_t2467, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t483_0_0_0;
static ParameterInfo t500_m14079_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t500_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854_t7_t7 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t859__CustomAttributeCache_m7679;
MethodInfo m14079_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m11203_gshared, &t500_TI, &t854_0_0_0, RuntimeInvoker_t854_t7_t7, t500_m14079_ParameterInfos, &t859__CustomAttributeCache_m7679, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t500_MIs[] =
{
	&m14045_MI,
	&m2981_MI,
	&m14046_MI,
	&m14047_MI,
	&m14048_MI,
	&m14049_MI,
	&m14050_MI,
	&m14051_MI,
	&m14052_MI,
	&m14053_MI,
	&m14054_MI,
	&m14055_MI,
	&m14056_MI,
	&m14057_MI,
	&m14058_MI,
	&m14059_MI,
	&m14060_MI,
	&m2982_MI,
	&m14061_MI,
	&m14062_MI,
	&m14063_MI,
	&m26499_MI,
	&m14064_MI,
	&m14065_MI,
	&m14066_MI,
	&m26500_MI,
	&m14067_MI,
	&m14068_MI,
	&m14069_MI,
	&m14070_MI,
	&m14071_MI,
	&m14072_MI,
	&m14073_MI,
	&m14074_MI,
	&m2983_MI,
	&m2984_MI,
	&m14075_MI,
	&m14076_MI,
	&m14077_MI,
	&m14078_MI,
	&m14079_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14057_MI;
extern MethodInfo m14072_MI;
extern MethodInfo m14060_MI;
extern MethodInfo m14049_MI;
extern MethodInfo m14050_MI;
extern MethodInfo m14056_MI;
extern MethodInfo m14060_MI;
extern MethodInfo m14051_MI;
extern MethodInfo m14052_MI;
extern MethodInfo m14069_MI;
extern MethodInfo m14053_MI;
extern MethodInfo m14054_MI;
extern MethodInfo m14055_MI;
extern MethodInfo m14058_MI;
extern MethodInfo m14074_MI;
extern MethodInfo m14048_MI;
extern MethodInfo m14059_MI;
extern MethodInfo m14073_MI;
extern MethodInfo m2982_MI;
extern MethodInfo m14068_MI;
extern MethodInfo m14070_MI;
extern MethodInfo m14072_MI;
extern MethodInfo m14073_MI;
extern MethodInfo m2983_MI;
static MethodInfo* t500_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14057_MI,
	&m14072_MI,
	&m14060_MI,
	&m14049_MI,
	&m14050_MI,
	&m14056_MI,
	&m14060_MI,
	&m14051_MI,
	&m14052_MI,
	&m14069_MI,
	&m14053_MI,
	&m14054_MI,
	&m14055_MI,
	&m14058_MI,
	&m14074_MI,
	&m14048_MI,
	&m14059_MI,
	&m14073_MI,
	&m2982_MI,
	&m14068_MI,
	&m14070_MI,
	&m14072_MI,
	&m14073_MI,
	&m2983_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t396_TI;
extern TypeInfo t669_TI;
extern TypeInfo t4432_TI;
extern TypeInfo t4434_TI;
extern TypeInfo t5359_TI;
extern TypeInfo t756_TI;
extern TypeInfo t1512_TI;
static TypeInfo* t500_ITIs[] = 
{
	&t618_TI,
	&t396_TI,
	&t669_TI,
	&t4432_TI,
	&t4434_TI,
	&t5359_TI,
	&t756_TI,
	&t1512_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t396_TI;
extern TypeInfo t669_TI;
extern TypeInfo t4432_TI;
extern TypeInfo t4434_TI;
extern TypeInfo t5359_TI;
extern TypeInfo t756_TI;
extern TypeInfo t1512_TI;
static Il2CppInterfaceOffsetPair t500_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t396_TI, 5},
	{ &t669_TI, 6},
	{ &t4432_TI, 10},
	{ &t4434_TI, 17},
	{ &t5359_TI, 18},
	{ &t756_TI, 19},
	{ &t1512_TI, 21},
};
extern MethodInfo m14061_MI;
extern MethodInfo m14075_MI;
extern MethodInfo m14076_MI;
extern MethodInfo m2982_MI;
extern MethodInfo m14081_MI;
extern MethodInfo m14083_MI;
extern MethodInfo m14068_MI;
extern MethodInfo m14077_MI;
extern MethodInfo m14066_MI;
extern MethodInfo m14074_MI;
extern TypeInfo t2464_TI;
extern MethodInfo m14063_MI;
extern TypeInfo t500_TI;
extern MethodInfo m14079_MI;
extern TypeInfo t2463_TI;
extern MethodInfo m14124_MI;
extern MethodInfo m20028_MI;
extern MethodInfo m14064_MI;
extern TypeInfo t2471_TI;
extern MethodInfo m14128_MI;
extern MethodInfo m20030_MI;
extern TypeInfo t2467_TI;
extern MethodInfo m14109_MI;
extern TypeInfo t2472_TI;
extern MethodInfo m14132_MI;
extern TypeInfo t34_TI;
extern MethodInfo m26495_MI;
extern MethodInfo m26496_MI;
extern MethodInfo m14067_MI;
extern MethodInfo m14141_MI;
extern MethodInfo m14062_MI;
extern TypeInfo t463_TI;
extern TypeInfo t499_TI;
extern MethodInfo m14060_MI;
extern TypeInfo t2465_TI;
extern MethodInfo m14080_MI;
extern MethodInfo m20031_MI;
extern MethodInfo m14152_MI;
extern MethodInfo m26497_MI;
extern TypeInfo t2464_TI;
extern Il2CppType t1598_0_0_0;
extern TypeInfo t1598_TI;
extern Il2CppType t2464_0_0_0;
extern TypeInfo t607_TI;
extern MethodInfo m14091_MI;
extern Il2CppType t34_0_0_0;
extern Il2CppType t483_0_0_0;
extern TypeInfo t483_TI;
extern MethodInfo m2983_MI;
extern MethodInfo m26498_MI;
static void* t500_RGCTXData[50] = 
{
	&m14061_MI,
	&m14075_MI,
	&m14076_MI,
	&m2982_MI,
	&m14081_MI,
	&m14083_MI,
	&m14068_MI,
	&m14077_MI,
	&m14066_MI,
	&m14074_MI,
	&t2464_TI,
	&m14063_MI,
	&t500_TI,
	&m14079_MI,
	&t2463_TI,
	&m14124_MI,
	&m20028_MI,
	&m14064_MI,
	&t2471_TI,
	&m14128_MI,
	&m20030_MI,
	&t2467_TI,
	&m14109_MI,
	&t2472_TI,
	&m14132_MI,
	&t34_TI,
	&m26495_MI,
	&m26496_MI,
	&m14067_MI,
	&m14141_MI,
	&m14062_MI,
	&t463_TI,
	&t499_TI,
	&m14060_MI,
	&t2465_TI,
	&m14080_MI,
	&m20031_MI,
	&m14152_MI,
	&m26497_MI,
	&t2464_TI,
	(void*)&t1598_0_0_0,
	&t1598_TI,
	(void*)&t2464_0_0_0,
	&t607_TI,
	&m14091_MI,
	(void*)&t34_0_0_0,
	(void*)&t483_0_0_0,
	&t483_TI,
	&m2983_MI,
	&m26498_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t500_0_0_0;
extern Il2CppType t500_1_0_0;
extern TypeInfo t7_TI;
struct t500;
extern TypeInfo t500_TI;
extern Il2CppGenericClass t500_GC;
extern CustomAttributesCache t859__CustomAttributeCache;
extern CustomAttributesCache t859__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t859__CustomAttributeCache_m7679;
TypeInfo t500_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t500_MIs, t500_PIs, t500_FIs, NULL, &t7_TI, NULL, NULL, &t500_TI, t500_ITIs, t500_VT, &t859__CustomAttributeCache, &t500_TI, &t500_0_0_0, &t500_1_0_0, t500_IOs, &t500_GC, NULL, t500_FDVs, NULL, t500_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t500), 0, -1, sizeof(t500_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 41, 7, 16, 0, 0, 28, 8, 8};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4432_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
extern MethodInfo m26501_MI;
static PropertyInfo t4432____Count_PropertyInfo = 
{
	&t4432_TI, "Count", &m26501_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26502_MI;
static PropertyInfo t4432____IsReadOnly_PropertyInfo = 
{
	&t4432_TI, "IsReadOnly", &m26502_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4432_PIs[] =
{
	&t4432____Count_PropertyInfo,
	&t4432____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4432_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26501_MI = 
{
	"get_Count", NULL, &t4432_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4432_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26502_MI = 
{
	"get_IsReadOnly", NULL, &t4432_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2465_0_0_0;
static ParameterInfo t4432_m26503_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2465_0_0_0},
};
extern TypeInfo t4432_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t2465 (MethodInfo* method, void* obj, void** args);
MethodInfo m26503_MI = 
{
	"Add", NULL, &t4432_TI, &t53_0_0_0, RuntimeInvoker_t53_t2465, t4432_m26503_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4432_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26504_MI = 
{
	"Clear", NULL, &t4432_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2465_0_0_0;
static ParameterInfo t4432_m26505_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2465_0_0_0},
};
extern TypeInfo t4432_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2465 (MethodInfo* method, void* obj, void** args);
MethodInfo m26505_MI = 
{
	"Contains", NULL, &t4432_TI, &t55_0_0_0, RuntimeInvoker_t55_t2465, t4432_m26505_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2464_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4432_m26506_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2464_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4432_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26506_MI = 
{
	"CopyTo", NULL, &t4432_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4432_m26506_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2465_0_0_0;
static ParameterInfo t4432_m26507_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2465_0_0_0},
};
extern TypeInfo t4432_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2465 (MethodInfo* method, void* obj, void** args);
MethodInfo m26507_MI = 
{
	"Remove", NULL, &t4432_TI, &t55_0_0_0, RuntimeInvoker_t55_t2465, t4432_m26507_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4432_MIs[] =
{
	&m26501_MI,
	&m26502_MI,
	&m26503_MI,
	&m26504_MI,
	&m26505_MI,
	&m26506_MI,
	&m26507_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4434_TI;
static TypeInfo* t4432_ITIs[] = 
{
	&t618_TI,
	&t4434_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4432_0_0_0;
extern Il2CppType t4432_1_0_0;
struct t4432;
extern TypeInfo t4432_TI;
extern Il2CppGenericClass t4432_GC;
TypeInfo t4432_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4432_MIs, t4432_PIs, NULL, NULL, NULL, NULL, NULL, &t4432_TI, t4432_ITIs, NULL, &EmptyCustomAttributesCache, &t4432_TI, &t4432_0_0_0, &t4432_1_0_0, NULL, &t4432_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4434_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
extern TypeInfo t4434_TI;
extern Il2CppType t2466_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26508_MI = 
{
	"GetEnumerator", NULL, &t4434_TI, &t2466_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4434_MIs[] =
{
	&m26508_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4434_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4434_0_0_0;
extern Il2CppType t4434_1_0_0;
struct t4434;
extern TypeInfo t4434_TI;
extern Il2CppGenericClass t4434_GC;
TypeInfo t4434_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4434_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4434_TI, t4434_ITIs, NULL, &EmptyCustomAttributesCache, &t4434_TI, &t4434_0_0_0, &t4434_1_0_0, NULL, &t4434_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2466_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
extern MethodInfo m26509_MI;
static PropertyInfo t2466____Current_PropertyInfo = 
{
	&t2466_TI, "Current", &m26509_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2466_PIs[] =
{
	&t2466____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2466_TI;
extern Il2CppType t2465_0_0_0;
extern void* RuntimeInvoker_t2465 (MethodInfo* method, void* obj, void** args);
MethodInfo m26509_MI = 
{
	"get_Current", NULL, &t2466_TI, &t2465_0_0_0, RuntimeInvoker_t2465, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2466_MIs[] =
{
	&m26509_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t2466_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2466_0_0_0;
extern Il2CppType t2466_1_0_0;
struct t2466;
extern TypeInfo t2466_TI;
extern Il2CppGenericClass t2466_GC;
TypeInfo t2466_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2466_MIs, t2466_PIs, NULL, NULL, NULL, NULL, NULL, &t2466_TI, t2466_ITIs, NULL, &EmptyCustomAttributesCache, &t2466_TI, &t2466_0_0_0, &t2466_1_0_0, NULL, &t2466_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2465_TI;

extern TypeInfo t2465_TI;
extern TypeInfo t463_TI;
extern TypeInfo t34_TI;
extern TypeInfo t7_TI;
extern TypeInfo t483_TI;
extern MethodInfo m14082_MI;
extern MethodInfo m14084_MI;
extern MethodInfo m14081_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14083_MI;
extern MethodInfo m3540_MI;


// Metadata Definition System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
extern Il2CppType t34_0_0_1;
FieldInfo t2465_f0_FieldInfo = 
{
	"key", &t34_0_0_1, &t2465_TI, offsetof(t2465, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t483_0_0_1;
FieldInfo t2465_f1_FieldInfo = 
{
	"value", &t483_0_0_1, &t2465_TI, offsetof(t2465, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2465_FIs[] =
{
	&t2465_f0_FieldInfo,
	&t2465_f1_FieldInfo,
	NULL
};
extern MethodInfo m14081_MI;
extern MethodInfo m14082_MI;
static PropertyInfo t2465____Key_PropertyInfo = 
{
	&t2465_TI, "Key", &m14081_MI, &m14082_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14083_MI;
extern MethodInfo m14084_MI;
static PropertyInfo t2465____Value_PropertyInfo = 
{
	&t2465_TI, "Value", &m14083_MI, &m14084_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2465_PIs[] =
{
	&t2465____Key_PropertyInfo,
	&t2465____Value_PropertyInfo,
	NULL
};
extern Il2CppType t34_0_0_0;
extern Il2CppType t483_0_0_0;
static ParameterInfo t2465_m14080_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t2465_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14080_MI = 
{
	".ctor", (methodPointerType)&m11210_gshared, &t2465_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t2465_m14080_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2465_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14081_MI = 
{
	"get_Key", (methodPointerType)&m11211_gshared, &t2465_TI, &t34_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t2465_m14082_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t2465_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14082_MI = 
{
	"set_Key", (methodPointerType)&m11212_gshared, &t2465_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2465_m14082_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2465_TI;
extern Il2CppType t483_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14083_MI = 
{
	"get_Value", (methodPointerType)&m11213_gshared, &t2465_TI, &t483_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t483_0_0_0;
static ParameterInfo t2465_m14084_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t2465_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14084_MI = 
{
	"set_Value", (methodPointerType)&m11214_gshared, &t2465_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2465_m14084_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2465_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14085_MI = 
{
	"ToString", (methodPointerType)&m11215_gshared, &t2465_TI, &t34_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2465_MIs[] =
{
	&m14080_MI,
	&m14081_MI,
	&m14082_MI,
	&m14083_MI,
	&m14084_MI,
	&m14085_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m14085_MI;
static MethodInfo* t2465_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m14085_MI,
};
extern MethodInfo m14082_MI;
extern MethodInfo m14084_MI;
extern MethodInfo m14081_MI;
extern TypeInfo t34_TI;
extern MethodInfo m14083_MI;
extern TypeInfo t483_TI;
static void* t2465_RGCTXData[6] = 
{
	&m14082_MI,
	&m14084_MI,
	&m14081_MI,
	&t34_TI,
	&m14083_MI,
	&t483_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2465_0_0_0;
extern Il2CppType t2465_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2465_TI;
extern Il2CppGenericClass t2465_GC;
extern CustomAttributesCache t864__CustomAttributeCache;
TypeInfo t2465_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t2465_MIs, t2465_PIs, t2465_FIs, NULL, &t159_TI, NULL, NULL, &t2465_TI, NULL, t2465_VT, &t864__CustomAttributeCache, &t2465_TI, &t2465_0_0_0, &t2465_1_0_0, NULL, &t2465_GC, NULL, NULL, NULL, t2465_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2465)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t2468.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2468_TI;
#include "t2468MD.h"

extern TypeInfo t2468_TI;
extern TypeInfo t2465_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14090_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20015_MI;
struct t52;
 t2465  m20015 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20015_MI;


extern MethodInfo m14086_MI;
 void m14086 (t2468 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14087_MI;
 t7 * m14087 (t2468 * __this, MethodInfo* method){
	{
		t2465  L_0 = m14090(__this, &m14090_MI);
		t2465  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2465_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14088_MI;
 void m14088 (t2468 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14089_MI;
 bool m14089 (t2468 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t52 * L_1 = (__this->f0);
		int32_t L_2 = m3829(L_1, &m3829_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m14090_MI;
 t2465  m14090 (t2468 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1295 * L_1 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7023(L_1, (t34*) &_stringLiteral373, &m7023_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1295 * L_3 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7023(L_3, (t34*) &_stringLiteral374, &m7023_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t52 * L_4 = (__this->f0);
		t52 * L_5 = (__this->f0);
		int32_t L_6 = m3829(L_5, &m3829_MI);
		int32_t L_7 = (__this->f1);
		t2465  L_8 = m20015(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20015_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
extern Il2CppType t52_0_0_1;
FieldInfo t2468_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2468_TI, offsetof(t2468, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2468_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2468_TI, offsetof(t2468, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2468_FIs[] =
{
	&t2468_f0_FieldInfo,
	&t2468_f1_FieldInfo,
	NULL
};
extern MethodInfo m14087_MI;
static PropertyInfo t2468____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2468_TI, "System.Collections.IEnumerator.Current", &m14087_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14090_MI;
static PropertyInfo t2468____Current_PropertyInfo = 
{
	&t2468_TI, "Current", &m14090_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2468_PIs[] =
{
	&t2468____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2468____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2468_m14086_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2468_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14086_MI = 
{
	".ctor", (methodPointerType)&m14086, &t2468_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2468_m14086_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2468_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14087_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14087, &t2468_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2468_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14088_MI = 
{
	"Dispose", (methodPointerType)&m14088, &t2468_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2468_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14089_MI = 
{
	"MoveNext", (methodPointerType)&m14089, &t2468_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2468_TI;
extern Il2CppType t2465_0_0_0;
extern void* RuntimeInvoker_t2465 (MethodInfo* method, void* obj, void** args);
MethodInfo m14090_MI = 
{
	"get_Current", (methodPointerType)&m14090, &t2468_TI, &t2465_0_0_0, RuntimeInvoker_t2465, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2468_MIs[] =
{
	&m14086_MI,
	&m14087_MI,
	&m14088_MI,
	&m14089_MI,
	&m14090_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14087_MI;
extern MethodInfo m14089_MI;
extern MethodInfo m14088_MI;
extern MethodInfo m14090_MI;
static MethodInfo* t2468_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14087_MI,
	&m14089_MI,
	&m14088_MI,
	&m14090_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2466_TI;
static TypeInfo* t2468_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2466_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2466_TI;
static Il2CppInterfaceOffsetPair t2468_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2466_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2468_0_0_0;
extern Il2CppType t2468_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2468_TI;
extern Il2CppGenericClass t2468_GC;
extern TypeInfo t52_TI;
TypeInfo t2468_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2468_MIs, t2468_PIs, t2468_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2468_TI, t2468_ITIs, t2468_VT, &EmptyCustomAttributesCache, &t2468_TI, &t2468_0_0_0, &t2468_1_0_0, t2468_IOs, &t2468_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2468)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4433_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
extern MethodInfo m26510_MI;
extern MethodInfo m26511_MI;
static PropertyInfo t4433____Item_PropertyInfo = 
{
	&t4433_TI, "Item", &m26510_MI, &m26511_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4433_PIs[] =
{
	&t4433____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2465_0_0_0;
static ParameterInfo t4433_m26512_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2465_0_0_0},
};
extern TypeInfo t4433_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t2465 (MethodInfo* method, void* obj, void** args);
MethodInfo m26512_MI = 
{
	"IndexOf", NULL, &t4433_TI, &t60_0_0_0, RuntimeInvoker_t60_t2465, t4433_m26512_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2465_0_0_0;
static ParameterInfo t4433_m26513_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2465_0_0_0},
};
extern TypeInfo t4433_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t2465 (MethodInfo* method, void* obj, void** args);
MethodInfo m26513_MI = 
{
	"Insert", NULL, &t4433_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t2465, t4433_m26513_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4433_m26514_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4433_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26514_MI = 
{
	"RemoveAt", NULL, &t4433_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4433_m26514_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4433_m26510_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4433_TI;
extern Il2CppType t2465_0_0_0;
extern void* RuntimeInvoker_t2465_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26510_MI = 
{
	"get_Item", NULL, &t4433_TI, &t2465_0_0_0, RuntimeInvoker_t2465_t60, t4433_m26510_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2465_0_0_0;
static ParameterInfo t4433_m26511_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2465_0_0_0},
};
extern TypeInfo t4433_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t2465 (MethodInfo* method, void* obj, void** args);
MethodInfo m26511_MI = 
{
	"set_Item", NULL, &t4433_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t2465, t4433_m26511_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4433_MIs[] =
{
	&m26512_MI,
	&m26513_MI,
	&m26514_MI,
	&m26510_MI,
	&m26511_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4432_TI;
extern TypeInfo t4434_TI;
static TypeInfo* t4433_ITIs[] = 
{
	&t618_TI,
	&t4432_TI,
	&t4434_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4433_0_0_0;
extern Il2CppType t4433_1_0_0;
struct t4433;
extern TypeInfo t4433_TI;
extern Il2CppGenericClass t4433_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4433_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4433_MIs, t4433_PIs, NULL, NULL, NULL, NULL, NULL, &t4433_TI, t4433_ITIs, NULL, &t1426__CustomAttributeCache, &t4433_TI, &t4433_0_0_0, &t4433_1_0_0, NULL, &t4433_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5359_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<System.String,UnityEngine.GUIStyle>
extern Il2CppType t34_0_0_0;
static ParameterInfo t5359_m26515_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t5359_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26515_MI = 
{
	"Remove", NULL, &t5359_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5359_m26515_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5359_MIs[] =
{
	&m26515_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4432_TI;
extern TypeInfo t4434_TI;
static TypeInfo* t5359_ITIs[] = 
{
	&t618_TI,
	&t4432_TI,
	&t4434_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5359_0_0_0;
extern Il2CppType t5359_1_0_0;
struct t5359;
extern TypeInfo t5359_TI;
extern Il2CppGenericClass t5359_GC;
extern CustomAttributesCache t1486__CustomAttributeCache;
TypeInfo t5359_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5359_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5359_TI, t5359_ITIs, NULL, &t1486__CustomAttributeCache, &t5359_TI, &t5359_0_0_0, &t5359_1_0_0, NULL, &t5359_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1598_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.String>
extern Il2CppType t34_0_0_0;
extern Il2CppType t34_0_0_0;
static ParameterInfo t1598_m26496_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t1598_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26496_MI = 
{
	"Equals", NULL, &t1598_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t1598_m26496_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t1598_m26495_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t1598_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26495_MI = 
{
	"GetHashCode", NULL, &t1598_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1598_m26495_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1598_MIs[] =
{
	&m26496_MI,
	&m26495_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1598_0_0_0;
extern Il2CppType t1598_1_0_0;
struct t1598;
extern TypeInfo t1598_TI;
extern Il2CppGenericClass t1598_GC;
TypeInfo t1598_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t1598_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1598_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1598_TI, &t1598_0_0_0, &t1598_1_0_0, NULL, &t1598_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t607_TI;

#include "t608.h"
#include "t2470.h"
extern TypeInfo t607_TI;
extern TypeInfo t669_TI;
extern TypeInfo t7_TI;
extern TypeInfo t500_TI;
extern TypeInfo t60_TI;
extern TypeInfo t87_TI;
extern TypeInfo t62_TI;
extern TypeInfo t608_TI;
extern TypeInfo t499_TI;
extern TypeInfo t483_TI;
extern TypeInfo t53_TI;
extern TypeInfo t2470_TI;
#include "t2470MD.h"
#include "t608MD.h"
extern MethodInfo m7515_MI;
extern MethodInfo m14060_MI;
extern MethodInfo m116_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m7125_MI;
extern MethodInfo m14071_MI;
extern MethodInfo m2985_MI;
extern MethodInfo m14102_MI;
extern MethodInfo m14063_MI;
extern MethodInfo m14065_MI;
extern MethodInfo m14120_MI;
extern MethodInfo m20026_MI;
extern MethodInfo m20027_MI;
extern MethodInfo m14104_MI;
struct t500;
struct t2034;
#include "t2034.h"
#include "t2043.h"
 void m18631_gshared (t2034 * __this, t52 * p0, int32_t p1, t2043 * p2, MethodInfo* method);
#define m18631(__this, p0, p1, p2, method) (void)m18631_gshared((t2034 *)__this, (t52 *)p0, (int32_t)p1, (t2043 *)p2, method)
#define m20026(__this, p0, p1, p2, method) (void)m18631_gshared((t2034 *)__this, (t52 *)p0, (int32_t)p1, (t2043 *)p2, method)
extern MethodInfo m20026_MI;
struct t500;
 void m20027 (t500 * __this, t499* p0, int32_t p1, t2470 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20027_MI;


extern MethodInfo m2985_MI;
 t608  m2985 (t607 * __this, MethodInfo* method){
	{
		t500 * L_0 = (__this->f0);
		t608  L_1 = {0};
		m14104(&L_1, L_0, &m14104_MI);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
extern Il2CppType t500_0_0_1;
FieldInfo t607_f0_FieldInfo = 
{
	"dictionary", &t500_0_0_1, &t607_TI, offsetof(t607, f0), &EmptyCustomAttributesCache};
static FieldInfo* t607_FIs[] =
{
	&t607_f0_FieldInfo,
	NULL
};
extern MethodInfo m14099_MI;
static PropertyInfo t607____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t607_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m14099_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14100_MI;
static PropertyInfo t607____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t607_TI, "System.Collections.ICollection.IsSynchronized", &m14100_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14101_MI;
static PropertyInfo t607____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t607_TI, "System.Collections.ICollection.SyncRoot", &m14101_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14103_MI;
static PropertyInfo t607____Count_PropertyInfo = 
{
	&t607_TI, "Count", &m14103_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t607_PIs[] =
{
	&t607____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t607____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t607____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t607____Count_PropertyInfo,
	NULL
};
extern Il2CppType t500_0_0_0;
static ParameterInfo t607_m14091_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t500_0_0_0},
};
extern TypeInfo t607_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14091_MI = 
{
	".ctor", (methodPointerType)&m11221_gshared, &t607_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t607_m14091_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t483_0_0_0;
static ParameterInfo t607_m14092_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t607_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14092_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m11222_gshared, &t607_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t607_m14092_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t607_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14093_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m11223_gshared, &t607_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t483_0_0_0;
static ParameterInfo t607_m14094_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t607_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14094_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m11224_gshared, &t607_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t607_m14094_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t483_0_0_0;
static ParameterInfo t607_m14095_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t607_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14095_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m11225_gshared, &t607_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t607_m14095_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t607_TI;
extern Il2CppType t2469_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14096_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m11226_gshared, &t607_TI, &t2469_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t607_m14097_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t607_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14097_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11227_gshared, &t607_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t607_m14097_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t607_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14098_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11228_gshared, &t607_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t607_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14099_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m11229_gshared, &t607_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t607_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14100_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11230_gshared, &t607_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t607_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14101_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11231_gshared, &t607_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t499_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t607_m14102_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t499_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t607_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14102_MI = 
{
	"CopyTo", (methodPointerType)&m11232_gshared, &t607_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t607_m14102_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t607_TI;
extern Il2CppType t608_0_0_0;
extern void* RuntimeInvoker_t608 (MethodInfo* method, void* obj, void** args);
MethodInfo m2985_MI = 
{
	"GetEnumerator", (methodPointerType)&m2985, &t607_TI, &t608_0_0_0, RuntimeInvoker_t608, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t607_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14103_MI = 
{
	"get_Count", (methodPointerType)&m11234_gshared, &t607_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t607_MIs[] =
{
	&m14091_MI,
	&m14092_MI,
	&m14093_MI,
	&m14094_MI,
	&m14095_MI,
	&m14096_MI,
	&m14097_MI,
	&m14098_MI,
	&m14099_MI,
	&m14100_MI,
	&m14101_MI,
	&m14102_MI,
	&m2985_MI,
	&m14103_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14098_MI;
extern MethodInfo m14103_MI;
extern MethodInfo m14100_MI;
extern MethodInfo m14101_MI;
extern MethodInfo m14097_MI;
extern MethodInfo m14103_MI;
extern MethodInfo m14099_MI;
extern MethodInfo m14092_MI;
extern MethodInfo m14093_MI;
extern MethodInfo m14094_MI;
extern MethodInfo m14102_MI;
extern MethodInfo m14095_MI;
extern MethodInfo m14096_MI;
static MethodInfo* t607_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14098_MI,
	&m14103_MI,
	&m14100_MI,
	&m14101_MI,
	&m14097_MI,
	&m14103_MI,
	&m14099_MI,
	&m14092_MI,
	&m14093_MI,
	&m14094_MI,
	&m14102_MI,
	&m14095_MI,
	&m14096_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t4429_TI;
extern TypeInfo t4431_TI;
static TypeInfo* t607_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t4429_TI,
	&t4431_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t4429_TI;
extern TypeInfo t4431_TI;
static Il2CppInterfaceOffsetPair t607_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t4429_TI, 9},
	{ &t4431_TI, 16},
};
extern MethodInfo m14071_MI;
extern MethodInfo m2985_MI;
extern TypeInfo t608_TI;
extern TypeInfo t499_TI;
extern MethodInfo m14102_MI;
extern MethodInfo m14063_MI;
extern MethodInfo m14065_MI;
extern TypeInfo t2470_TI;
extern MethodInfo m14120_MI;
extern MethodInfo m20026_MI;
extern MethodInfo m20027_MI;
extern MethodInfo m14104_MI;
extern MethodInfo m14060_MI;
static void* t607_RGCTXData[13] = 
{
	&m14071_MI,
	&m2985_MI,
	&t608_TI,
	&t499_TI,
	&m14102_MI,
	&m14063_MI,
	&m14065_MI,
	&t2470_TI,
	&m14120_MI,
	&m20026_MI,
	&m20027_MI,
	&m14104_MI,
	&m14060_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t607_0_0_0;
extern Il2CppType t607_1_0_0;
extern TypeInfo t7_TI;
struct t607;
extern TypeInfo t607_TI;
extern Il2CppGenericClass t607_GC;
extern TypeInfo t859_TI;
extern CustomAttributesCache t857__CustomAttributeCache;
TypeInfo t607_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t607_MIs, t607_PIs, t607_FIs, NULL, &t7_TI, NULL, &t859_TI, &t607_TI, t607_ITIs, t607_VT, &t857__CustomAttributeCache, &t607_TI, &t607_0_0_0, &t607_1_0_0, t607_IOs, &t607_GC, NULL, NULL, NULL, t607_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t607), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t608_TI;

extern TypeInfo t608_TI;
extern TypeInfo t483_TI;
extern TypeInfo t2467_TI;
extern TypeInfo t53_TI;
extern TypeInfo t55_TI;
extern MethodInfo m14116_MI;
extern MethodInfo m14083_MI;
extern MethodInfo m14078_MI;
extern MethodInfo m14119_MI;
extern MethodInfo m14113_MI;


// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>
extern Il2CppType t2467_0_0_1;
FieldInfo t608_f0_FieldInfo = 
{
	"host_enumerator", &t2467_0_0_1, &t608_TI, offsetof(t608, f0) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t608_FIs[] =
{
	&t608_f0_FieldInfo,
	NULL
};
extern MethodInfo m14105_MI;
static PropertyInfo t608____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t608_TI, "System.Collections.IEnumerator.Current", &m14105_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14108_MI;
static PropertyInfo t608____Current_PropertyInfo = 
{
	&t608_TI, "Current", &m14108_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t608_PIs[] =
{
	&t608____System_Collections_IEnumerator_Current_PropertyInfo,
	&t608____Current_PropertyInfo,
	NULL
};
extern Il2CppType t500_0_0_0;
static ParameterInfo t608_m14104_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t500_0_0_0},
};
extern TypeInfo t608_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14104_MI = 
{
	".ctor", (methodPointerType)&m11235_gshared, &t608_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t608_m14104_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t608_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14105_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11236_gshared, &t608_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t608_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14106_MI = 
{
	"Dispose", (methodPointerType)&m11237_gshared, &t608_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t608_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14107_MI = 
{
	"MoveNext", (methodPointerType)&m11238_gshared, &t608_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t608_TI;
extern Il2CppType t483_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14108_MI = 
{
	"get_Current", (methodPointerType)&m11239_gshared, &t608_TI, &t483_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t608_MIs[] =
{
	&m14104_MI,
	&m14105_MI,
	&m14106_MI,
	&m14107_MI,
	&m14108_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14105_MI;
extern MethodInfo m14107_MI;
extern MethodInfo m14106_MI;
extern MethodInfo m14108_MI;
static MethodInfo* t608_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14105_MI,
	&m14107_MI,
	&m14106_MI,
	&m14108_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2469_TI;
static TypeInfo* t608_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2469_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2469_TI;
static Il2CppInterfaceOffsetPair t608_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2469_TI, 7},
};
extern MethodInfo m14078_MI;
extern MethodInfo m14116_MI;
extern TypeInfo t483_TI;
extern MethodInfo m14119_MI;
extern MethodInfo m14113_MI;
extern MethodInfo m14083_MI;
static void* t608_RGCTXData[6] = 
{
	&m14078_MI,
	&m14116_MI,
	&t483_TI,
	&m14119_MI,
	&m14113_MI,
	&m14083_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t608_0_0_0;
extern Il2CppType t608_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t608_TI;
extern Il2CppGenericClass t608_GC;
extern TypeInfo t857_TI;
TypeInfo t608_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t608_MIs, t608_PIs, t608_FIs, NULL, &t159_TI, NULL, &t857_TI, &t608_TI, t608_ITIs, t608_VT, &EmptyCustomAttributesCache, &t608_TI, &t608_0_0_0, &t608_1_0_0, t608_IOs, &t608_GC, NULL, NULL, NULL, t608_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t608)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2467_TI;

extern TypeInfo t2467_TI;
extern TypeInfo t2465_TI;
extern TypeInfo t34_TI;
extern TypeInfo t483_TI;
extern TypeInfo t854_TI;
extern TypeInfo t500_TI;
extern TypeInfo t852_TI;
extern TypeInfo t1312_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14118_MI;
extern MethodInfo m14081_MI;
extern MethodInfo m14083_MI;
extern MethodInfo m4471_MI;
extern MethodInfo m14115_MI;
extern MethodInfo m14117_MI;
extern MethodInfo m14080_MI;
extern MethodInfo m7227_MI;
extern MethodInfo m7023_MI;


extern MethodInfo m14114_MI;
 t2465  m14114 (t2467 * __this, MethodInfo* method){
	{
		t2465  L_0 = (__this->f3);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>
extern Il2CppType t500_0_0_1;
FieldInfo t2467_f0_FieldInfo = 
{
	"dictionary", &t500_0_0_1, &t2467_TI, offsetof(t2467, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2467_f1_FieldInfo = 
{
	"next", &t60_0_0_1, &t2467_TI, offsetof(t2467, f1) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2467_f2_FieldInfo = 
{
	"stamp", &t60_0_0_1, &t2467_TI, offsetof(t2467, f2) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t2465_0_0_3;
FieldInfo t2467_f3_FieldInfo = 
{
	"current", &t2465_0_0_3, &t2467_TI, offsetof(t2467, f3) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2467_FIs[] =
{
	&t2467_f0_FieldInfo,
	&t2467_f1_FieldInfo,
	&t2467_f2_FieldInfo,
	&t2467_f3_FieldInfo,
	NULL
};
extern MethodInfo m14110_MI;
static PropertyInfo t2467____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2467_TI, "System.Collections.IEnumerator.Current", &m14110_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14111_MI;
static PropertyInfo t2467____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t2467_TI, "System.Collections.IDictionaryEnumerator.Entry", &m14111_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14112_MI;
static PropertyInfo t2467____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t2467_TI, "System.Collections.IDictionaryEnumerator.Key", &m14112_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14114_MI;
static PropertyInfo t2467____Current_PropertyInfo = 
{
	&t2467_TI, "Current", &m14114_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14115_MI;
static PropertyInfo t2467____CurrentKey_PropertyInfo = 
{
	&t2467_TI, "CurrentKey", &m14115_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14116_MI;
static PropertyInfo t2467____CurrentValue_PropertyInfo = 
{
	&t2467_TI, "CurrentValue", &m14116_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2467_PIs[] =
{
	&t2467____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2467____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t2467____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t2467____Current_PropertyInfo,
	&t2467____CurrentKey_PropertyInfo,
	&t2467____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t500_0_0_0;
static ParameterInfo t2467_m14109_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t500_0_0_0},
};
extern TypeInfo t2467_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14109_MI = 
{
	".ctor", (methodPointerType)&m11240_gshared, &t2467_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2467_m14109_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2467_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14110_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11241_gshared, &t2467_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2467_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854 (MethodInfo* method, void* obj, void** args);
MethodInfo m14111_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m11242_gshared, &t2467_TI, &t854_0_0_0, RuntimeInvoker_t854, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2467_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14112_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m11243_gshared, &t2467_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2467_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14113_MI = 
{
	"MoveNext", (methodPointerType)&m11244_gshared, &t2467_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2467_TI;
extern Il2CppType t2465_0_0_0;
extern void* RuntimeInvoker_t2465 (MethodInfo* method, void* obj, void** args);
MethodInfo m14114_MI = 
{
	"get_Current", (methodPointerType)&m14114, &t2467_TI, &t2465_0_0_0, RuntimeInvoker_t2465, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2467_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14115_MI = 
{
	"get_CurrentKey", (methodPointerType)&m11246_gshared, &t2467_TI, &t34_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2467_TI;
extern Il2CppType t483_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14116_MI = 
{
	"get_CurrentValue", (methodPointerType)&m11247_gshared, &t2467_TI, &t483_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2467_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14117_MI = 
{
	"VerifyState", (methodPointerType)&m11248_gshared, &t2467_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2467_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14118_MI = 
{
	"VerifyCurrent", (methodPointerType)&m11249_gshared, &t2467_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2467_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14119_MI = 
{
	"Dispose", (methodPointerType)&m11250_gshared, &t2467_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2467_MIs[] =
{
	&m14109_MI,
	&m14110_MI,
	&m14111_MI,
	&m14112_MI,
	&m14113_MI,
	&m14114_MI,
	&m14115_MI,
	&m14116_MI,
	&m14117_MI,
	&m14118_MI,
	&m14119_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14110_MI;
extern MethodInfo m14113_MI;
extern MethodInfo m14119_MI;
extern MethodInfo m14114_MI;
extern MethodInfo m14111_MI;
extern MethodInfo m14112_MI;
static MethodInfo* t2467_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14110_MI,
	&m14113_MI,
	&m14119_MI,
	&m14114_MI,
	&m14111_MI,
	&m14112_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2466_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2467_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2466_TI,
	&t860_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2466_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2467_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2466_TI, 7},
	{ &t860_TI, 8},
};
extern MethodInfo m14118_MI;
extern TypeInfo t2465_TI;
extern MethodInfo m14081_MI;
extern TypeInfo t34_TI;
extern MethodInfo m14083_MI;
extern TypeInfo t483_TI;
extern MethodInfo m14115_MI;
extern MethodInfo m14117_MI;
extern MethodInfo m14080_MI;
static void* t2467_RGCTXData[9] = 
{
	&m14118_MI,
	&t2465_TI,
	&m14081_MI,
	&t34_TI,
	&m14083_MI,
	&t483_TI,
	&m14115_MI,
	&m14117_MI,
	&m14080_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2467_0_0_0;
extern Il2CppType t2467_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2467_TI;
extern Il2CppGenericClass t2467_GC;
extern TypeInfo t859_TI;
TypeInfo t2467_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2467_MIs, t2467_PIs, t2467_FIs, NULL, &t159_TI, NULL, &t859_TI, &t2467_TI, t2467_ITIs, t2467_VT, &EmptyCustomAttributesCache, &t2467_TI, &t2467_0_0_0, &t2467_1_0_0, t2467_IOs, &t2467_GC, NULL, NULL, NULL, t2467_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2467)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2470_TI;



// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,UnityEngine.GUIStyle>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2470_m14120_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2470_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m14120_MI = 
{
	".ctor", (methodPointerType)&m11251_gshared, &t2470_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2470_m14120_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t483_0_0_0;
static ParameterInfo t2470_m14121_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t2470_TI;
extern Il2CppType t483_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14121_MI = 
{
	"Invoke", (methodPointerType)&m11252_gshared, &t2470_TI, &t483_0_0_0, RuntimeInvoker_t7_t7_t7, t2470_m14121_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t483_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2470_m14122_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2470_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14122_MI = 
{
	"BeginInvoke", (methodPointerType)&m11253_gshared, &t2470_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t2470_m14122_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2470_m14123_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2470_TI;
extern Il2CppType t483_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14123_MI = 
{
	"EndInvoke", (methodPointerType)&m11254_gshared, &t2470_TI, &t483_0_0_0, RuntimeInvoker_t7_t7, t2470_m14123_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2470_MIs[] =
{
	&m14120_MI,
	&m14121_MI,
	&m14122_MI,
	&m14123_MI,
	NULL
};
extern MethodInfo m1812_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1813_MI;
extern MethodInfo m123_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1815_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1816_MI;
extern MethodInfo m1817_MI;
extern MethodInfo m1818_MI;
extern MethodInfo m14121_MI;
extern MethodInfo m14122_MI;
extern MethodInfo m14123_MI;
static MethodInfo* t2470_VT[] =
{
	&m1812_MI,
	&m113_MI,
	&m1813_MI,
	&m123_MI,
	&m1814_MI,
	&m1815_MI,
	&m1814_MI,
	&m1816_MI,
	&m1817_MI,
	&m1818_MI,
	&m14121_MI,
	&m14122_MI,
	&m14123_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2470_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2470_0_0_0;
extern Il2CppType t2470_1_0_0;
extern TypeInfo t245_TI;
struct t2470;
extern TypeInfo t2470_TI;
extern Il2CppGenericClass t2470_GC;
extern TypeInfo t859_TI;
TypeInfo t2470_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2470_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t859_TI, &t2470_TI, NULL, t2470_VT, &EmptyCustomAttributesCache, &t2470_TI, &t2470_0_0_0, &t2470_1_0_0, t2470_IOs, &t2470_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2470), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2463_TI;



extern MethodInfo m14124_MI;
 void m14124 (t2463 * __this, t7 * p0, t114 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14125_MI;
 t854  m14125 (t2463 * __this, t34* p0, t483 * p1, MethodInfo* method){
	typedef  t854  (*FunctionPointerType) (t7 * __this, t34* p0, t483 * p1, MethodInfo* method);
	if (__this->f9)
		m14125((t2463 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m14126_MI;
 t7 * m14126 (t2463 * __this, t34* p0, t483 * p1, t113 * p2, t7 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m14127_MI;
 t854  m14127 (t2463 * __this, t7 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t854 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2463_m14124_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m14124_MI = 
{
	".ctor", (methodPointerType)&m14124, &t2463_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2463_m14124_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t483_0_0_0;
static ParameterInfo t2463_m14125_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14125_MI = 
{
	"Invoke", (methodPointerType)&m14125, &t2463_TI, &t854_0_0_0, RuntimeInvoker_t854_t7_t7, t2463_m14125_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t483_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2463_m14126_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14126_MI = 
{
	"BeginInvoke", (methodPointerType)&m14126, &t2463_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t2463_m14126_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2463_m14127_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2463_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14127_MI = 
{
	"EndInvoke", (methodPointerType)&m14127, &t2463_TI, &t854_0_0_0, RuntimeInvoker_t854_t7, t2463_m14127_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2463_MIs[] =
{
	&m14124_MI,
	&m14125_MI,
	&m14126_MI,
	&m14127_MI,
	NULL
};
extern MethodInfo m1812_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1813_MI;
extern MethodInfo m123_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1815_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1816_MI;
extern MethodInfo m1817_MI;
extern MethodInfo m1818_MI;
extern MethodInfo m14125_MI;
extern MethodInfo m14126_MI;
extern MethodInfo m14127_MI;
static MethodInfo* t2463_VT[] =
{
	&m1812_MI,
	&m113_MI,
	&m1813_MI,
	&m123_MI,
	&m1814_MI,
	&m1815_MI,
	&m1814_MI,
	&m1816_MI,
	&m1817_MI,
	&m1818_MI,
	&m14125_MI,
	&m14126_MI,
	&m14127_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2463_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2463_0_0_0;
extern Il2CppType t2463_1_0_0;
extern TypeInfo t245_TI;
struct t2463;
extern TypeInfo t2463_TI;
extern Il2CppGenericClass t2463_GC;
extern TypeInfo t859_TI;
TypeInfo t2463_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2463_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t859_TI, &t2463_TI, NULL, t2463_VT, &EmptyCustomAttributesCache, &t2463_TI, &t2463_0_0_0, &t2463_1_0_0, t2463_IOs, &t2463_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2463), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2471_TI;



extern MethodInfo m14128_MI;
 void m14128 (t2471 * __this, t7 * p0, t114 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14129_MI;
 t2465  m14129 (t2471 * __this, t34* p0, t483 * p1, MethodInfo* method){
	typedef  t2465  (*FunctionPointerType) (t7 * __this, t34* p0, t483 * p1, MethodInfo* method);
	if (__this->f9)
		m14129((t2471 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m14130_MI;
 t7 * m14130 (t2471 * __this, t34* p0, t483 * p1, t113 * p2, t7 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m14131_MI;
 t2465  m14131 (t2471 * __this, t7 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2465 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2471_m14128_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2471_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m14128_MI = 
{
	".ctor", (methodPointerType)&m14128, &t2471_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2471_m14128_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t483_0_0_0;
static ParameterInfo t2471_m14129_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t2471_TI;
extern Il2CppType t2465_0_0_0;
extern void* RuntimeInvoker_t2465_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14129_MI = 
{
	"Invoke", (methodPointerType)&m14129, &t2471_TI, &t2465_0_0_0, RuntimeInvoker_t2465_t7_t7, t2471_m14129_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t483_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2471_m14130_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2471_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14130_MI = 
{
	"BeginInvoke", (methodPointerType)&m14130, &t2471_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t2471_m14130_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2471_m14131_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2471_TI;
extern Il2CppType t2465_0_0_0;
extern void* RuntimeInvoker_t2465_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14131_MI = 
{
	"EndInvoke", (methodPointerType)&m14131, &t2471_TI, &t2465_0_0_0, RuntimeInvoker_t2465_t7, t2471_m14131_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2471_MIs[] =
{
	&m14128_MI,
	&m14129_MI,
	&m14130_MI,
	&m14131_MI,
	NULL
};
extern MethodInfo m1812_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1813_MI;
extern MethodInfo m123_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1815_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m1816_MI;
extern MethodInfo m1817_MI;
extern MethodInfo m1818_MI;
extern MethodInfo m14129_MI;
extern MethodInfo m14130_MI;
extern MethodInfo m14131_MI;
static MethodInfo* t2471_VT[] =
{
	&m1812_MI,
	&m113_MI,
	&m1813_MI,
	&m123_MI,
	&m1814_MI,
	&m1815_MI,
	&m1814_MI,
	&m1816_MI,
	&m1817_MI,
	&m1818_MI,
	&m14129_MI,
	&m14130_MI,
	&m14131_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2471_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2471_0_0_0;
extern Il2CppType t2471_1_0_0;
extern TypeInfo t245_TI;
struct t2471;
extern TypeInfo t2471_TI;
extern Il2CppGenericClass t2471_GC;
extern TypeInfo t859_TI;
TypeInfo t2471_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2471_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t859_TI, &t2471_TI, NULL, t2471_VT, &EmptyCustomAttributesCache, &t2471_TI, &t2471_0_0_0, &t2471_1_0_0, t2471_IOs, &t2471_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2471), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2472_TI;

extern TypeInfo t2472_TI;
extern TypeInfo t2467_TI;
extern TypeInfo t860_TI;
extern TypeInfo t854_TI;
extern TypeInfo t2465_TI;
extern TypeInfo t34_TI;
extern TypeInfo t55_TI;
extern MethodInfo m7825_MI;
extern MethodInfo m14114_MI;
extern MethodInfo m14081_MI;
extern MethodInfo m14134_MI;
extern MethodInfo m116_MI;
extern MethodInfo m14078_MI;
extern MethodInfo m14113_MI;


// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,UnityEngine.GUIStyle>
extern Il2CppType t2467_0_0_1;
FieldInfo t2472_f0_FieldInfo = 
{
	"host_enumerator", &t2467_0_0_1, &t2472_TI, offsetof(t2472, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2472_FIs[] =
{
	&t2472_f0_FieldInfo,
	NULL
};
extern MethodInfo m14134_MI;
static PropertyInfo t2472____Entry_PropertyInfo = 
{
	&t2472_TI, "Entry", &m14134_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14135_MI;
static PropertyInfo t2472____Key_PropertyInfo = 
{
	&t2472_TI, "Key", &m14135_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14136_MI;
static PropertyInfo t2472____Current_PropertyInfo = 
{
	&t2472_TI, "Current", &m14136_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2472_PIs[] =
{
	&t2472____Entry_PropertyInfo,
	&t2472____Key_PropertyInfo,
	&t2472____Current_PropertyInfo,
	NULL
};
extern Il2CppType t500_0_0_0;
static ParameterInfo t2472_m14132_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t500_0_0_0},
};
extern TypeInfo t2472_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14132_MI = 
{
	".ctor", (methodPointerType)&m11263_gshared, &t2472_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2472_m14132_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2472_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14133_MI = 
{
	"MoveNext", (methodPointerType)&m11264_gshared, &t2472_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2472_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854 (MethodInfo* method, void* obj, void** args);
MethodInfo m14134_MI = 
{
	"get_Entry", (methodPointerType)&m11265_gshared, &t2472_TI, &t854_0_0_0, RuntimeInvoker_t854, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2472_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14135_MI = 
{
	"get_Key", (methodPointerType)&m11266_gshared, &t2472_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2472_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14136_MI = 
{
	"get_Current", (methodPointerType)&m11267_gshared, &t2472_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2472_MIs[] =
{
	&m14132_MI,
	&m14133_MI,
	&m14134_MI,
	&m14135_MI,
	&m14136_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14136_MI;
extern MethodInfo m14133_MI;
extern MethodInfo m14134_MI;
extern MethodInfo m14135_MI;
static MethodInfo* t2472_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14136_MI,
	&m14133_MI,
	&m14134_MI,
	&m14135_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2472_ITIs[] = 
{
	&t12_TI,
	&t860_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2472_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t860_TI, 6},
};
extern MethodInfo m14078_MI;
extern MethodInfo m14113_MI;
extern TypeInfo t2467_TI;
extern MethodInfo m14114_MI;
extern MethodInfo m14081_MI;
extern TypeInfo t34_TI;
extern MethodInfo m14134_MI;
static void* t2472_RGCTXData[7] = 
{
	&m14078_MI,
	&m14113_MI,
	&t2467_TI,
	&m14114_MI,
	&m14081_MI,
	&t34_TI,
	&m14134_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2472_0_0_0;
extern Il2CppType t2472_1_0_0;
extern TypeInfo t7_TI;
struct t2472;
extern TypeInfo t2472_TI;
extern Il2CppGenericClass t2472_GC;
extern TypeInfo t859_TI;
TypeInfo t2472_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t2472_MIs, t2472_PIs, t2472_FIs, NULL, &t7_TI, NULL, &t859_TI, &t2472_TI, t2472_ITIs, t2472_VT, &EmptyCustomAttributesCache, &t2472_TI, &t2472_0_0_0, &t2472_1_0_0, t2472_IOs, &t2472_GC, NULL, NULL, NULL, t2472_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2472), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2473_TI;

#include "t2475.h"
extern TypeInfo t2473_TI;
extern TypeInfo t1391_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
extern TypeInfo t55_TI;
extern TypeInfo t863_TI;
extern TypeInfo t553_TI;
extern TypeInfo t2475_TI;
extern TypeInfo t60_TI;
#include "t2475MD.h"
extern Il2CppType t1391_0_0_0;
extern Il2CppType t34_0_0_0;
extern Il2CppType t863_0_0_0;
extern MethodInfo m116_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3097_MI;
extern MethodInfo m3095_MI;
extern MethodInfo m6560_MI;
extern MethodInfo m14145_MI;
extern MethodInfo m26516_MI;
extern MethodInfo m26517_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.String>
extern Il2CppType t2473_0_0_49;
FieldInfo t2473_f0_FieldInfo = 
{
	"_default", &t2473_0_0_49, &t2473_TI, offsetof(t2473_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2473_FIs[] =
{
	&t2473_f0_FieldInfo,
	NULL
};
extern MethodInfo m14141_MI;
static PropertyInfo t2473____Default_PropertyInfo = 
{
	&t2473_TI, "Default", &m14141_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2473_PIs[] =
{
	&t2473____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2473_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14137_MI = 
{
	".ctor", (methodPointerType)&m8378_gshared, &t2473_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2473_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14138_MI = 
{
	".cctor", (methodPointerType)&m8379_gshared, &t2473_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2473_m14139_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2473_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14139_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8380_gshared, &t2473_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2473_m14139_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2473_m14140_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2473_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14140_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8381_gshared, &t2473_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2473_m14140_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t2473_m26516_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t2473_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26516_MI = 
{
	"GetHashCode", NULL, &t2473_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2473_m26516_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t34_0_0_0;
static ParameterInfo t2473_m26517_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t2473_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26517_MI = 
{
	"Equals", NULL, &t2473_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2473_m26517_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2473_TI;
extern Il2CppType t2473_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14141_MI = 
{
	"get_Default", (methodPointerType)&m8382_gshared, &t2473_TI, &t2473_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2473_MIs[] =
{
	&m14137_MI,
	&m14138_MI,
	&m14139_MI,
	&m14140_MI,
	&m26516_MI,
	&m26517_MI,
	&m14141_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m26517_MI;
extern MethodInfo m26516_MI;
extern MethodInfo m14140_MI;
extern MethodInfo m14139_MI;
static MethodInfo* t2473_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m26517_MI,
	&m26516_MI,
	&m14140_MI,
	&m14139_MI,
	NULL,
	NULL,
};
extern TypeInfo t1598_TI;
extern TypeInfo t886_TI;
static TypeInfo* t2473_ITIs[] = 
{
	&t1598_TI,
	&t886_TI,
};
extern TypeInfo t1598_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t2473_IOs[] = 
{
	{ &t1598_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t1391_0_0_0;
extern Il2CppType t34_0_0_0;
extern TypeInfo t2473_TI;
extern TypeInfo t2473_TI;
extern TypeInfo t2475_TI;
extern MethodInfo m14145_MI;
extern TypeInfo t34_TI;
extern MethodInfo m26516_MI;
extern MethodInfo m26517_MI;
static void* t2473_RGCTXData[9] = 
{
	(void*)&t1391_0_0_0,
	(void*)&t34_0_0_0,
	&t2473_TI,
	&t2473_TI,
	&t2475_TI,
	&m14145_MI,
	&t34_TI,
	&m26516_MI,
	&m26517_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2473_0_0_0;
extern Il2CppType t2473_1_0_0;
extern TypeInfo t7_TI;
struct t2473;
extern TypeInfo t2473_TI;
extern Il2CppGenericClass t2473_GC;
TypeInfo t2473_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2473_MIs, t2473_PIs, t2473_FIs, NULL, &t7_TI, NULL, NULL, &t2473_TI, t2473_ITIs, t2473_VT, &EmptyCustomAttributesCache, &t2473_TI, &t2473_0_0_0, &t2473_1_0_0, t2473_IOs, &t2473_GC, NULL, NULL, NULL, t2473_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2473), 0, -1, sizeof(t2473_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#include "t2474.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2474_TI;
#include "t2474MD.h"

extern TypeInfo t34_TI;
extern TypeInfo t7_TI;
extern TypeInfo t60_TI;
extern TypeInfo t1391_TI;
extern TypeInfo t55_TI;
extern MethodInfo m14137_MI;
extern MethodInfo m122_MI;
extern MethodInfo m24647_MI;


extern MethodInfo m14142_MI;
 void m14142 (t2474 * __this, MethodInfo* method){
	{
		m14137(__this, &m14137_MI);
		return;
	}
}
extern MethodInfo m14143_MI;
 int32_t m14143 (t2474 * __this, t34* p0, MethodInfo* method){
	{
		t34* L_0 = p0;
		if (((t34*)L_0))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m122_MI, (*(&p0)));
		return L_1;
	}
}
extern MethodInfo m14144_MI;
 bool m14144 (t2474 * __this, t34* p0, t34* p1, MethodInfo* method){
	{
		t34* L_0 = p0;
		if (((t34*)L_0))
		{
			goto IL_0012;
		}
	}
	{
		t34* L_1 = p1;
		return ((((t34*)((t34*)L_1)) == ((t7 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, t34* >::Invoke(&m24647_MI, (*(&p0)), p1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.String>
extern TypeInfo t2474_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14142_MI = 
{
	".ctor", (methodPointerType)&m14142, &t2474_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t2474_m14143_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t2474_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14143_MI = 
{
	"GetHashCode", (methodPointerType)&m14143, &t2474_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2474_m14143_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t34_0_0_0;
static ParameterInfo t2474_m14144_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t2474_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14144_MI = 
{
	"Equals", (methodPointerType)&m14144, &t2474_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2474_m14144_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2474_MIs[] =
{
	&m14142_MI,
	&m14143_MI,
	&m14144_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14144_MI;
extern MethodInfo m14143_MI;
extern MethodInfo m14140_MI;
extern MethodInfo m14139_MI;
extern MethodInfo m14143_MI;
extern MethodInfo m14144_MI;
static MethodInfo* t2474_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14144_MI,
	&m14143_MI,
	&m14140_MI,
	&m14139_MI,
	&m14143_MI,
	&m14144_MI,
};
extern TypeInfo t1598_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t2474_IOs[] = 
{
	{ &t1598_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t1391_0_0_0;
extern Il2CppType t34_0_0_0;
extern TypeInfo t2473_TI;
extern TypeInfo t2473_TI;
extern TypeInfo t2475_TI;
extern MethodInfo m14145_MI;
extern TypeInfo t34_TI;
extern MethodInfo m26516_MI;
extern MethodInfo m26517_MI;
static void* t2474_RGCTXData[9] = 
{
	(void*)&t1391_0_0_0,
	(void*)&t34_0_0_0,
	&t2473_TI,
	&t2473_TI,
	&t2475_TI,
	&m14145_MI,
	&t34_TI,
	&m26516_MI,
	&m26517_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2474_0_0_0;
extern Il2CppType t2474_1_0_0;
extern TypeInfo t2473_TI;
struct t2474;
extern TypeInfo t2474_TI;
extern Il2CppGenericClass t2474_GC;
TypeInfo t2474_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GenericEqualityComparer`1", "System.Collections.Generic", t2474_MIs, NULL, NULL, NULL, &t2473_TI, NULL, NULL, &t2474_TI, NULL, t2474_VT, &EmptyCustomAttributesCache, &t2474_TI, &t2474_0_0_0, &t2474_1_0_0, t2474_IOs, &t2474_GC, NULL, NULL, NULL, t2474_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2474), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2475_TI;

extern TypeInfo t34_TI;
extern TypeInfo t7_TI;
extern TypeInfo t60_TI;
extern TypeInfo t55_TI;
extern MethodInfo m14137_MI;
extern MethodInfo m122_MI;
extern MethodInfo m121_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.String>
extern TypeInfo t2475_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14145_MI = 
{
	".ctor", (methodPointerType)&m8413_gshared, &t2475_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t2475_m14146_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t2475_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14146_MI = 
{
	"GetHashCode", (methodPointerType)&m8414_gshared, &t2475_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2475_m14146_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t34_0_0_0;
static ParameterInfo t2475_m14147_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t2475_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14147_MI = 
{
	"Equals", (methodPointerType)&m8415_gshared, &t2475_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2475_m14147_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2475_MIs[] =
{
	&m14145_MI,
	&m14146_MI,
	&m14147_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14147_MI;
extern MethodInfo m14146_MI;
extern MethodInfo m14140_MI;
extern MethodInfo m14139_MI;
extern MethodInfo m14146_MI;
extern MethodInfo m14147_MI;
static MethodInfo* t2475_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14147_MI,
	&m14146_MI,
	&m14140_MI,
	&m14139_MI,
	&m14146_MI,
	&m14147_MI,
};
extern TypeInfo t1598_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t2475_IOs[] = 
{
	{ &t1598_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t1391_0_0_0;
extern Il2CppType t34_0_0_0;
extern TypeInfo t2473_TI;
extern TypeInfo t2473_TI;
extern TypeInfo t2475_TI;
extern MethodInfo m14145_MI;
extern TypeInfo t34_TI;
extern MethodInfo m26516_MI;
extern MethodInfo m26517_MI;
extern MethodInfo m14137_MI;
extern TypeInfo t34_TI;
static void* t2475_RGCTXData[11] = 
{
	(void*)&t1391_0_0_0,
	(void*)&t34_0_0_0,
	&t2473_TI,
	&t2473_TI,
	&t2475_TI,
	&m14145_MI,
	&t34_TI,
	&m26516_MI,
	&m26517_MI,
	&m14137_MI,
	&t34_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2475_0_0_0;
extern Il2CppType t2475_1_0_0;
extern TypeInfo t2473_TI;
struct t2475;
extern TypeInfo t2475_TI;
extern Il2CppGenericClass t2475_GC;
extern TypeInfo t862_TI;
TypeInfo t2475_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2475_MIs, NULL, NULL, NULL, &t2473_TI, NULL, &t862_TI, &t2475_TI, NULL, t2475_VT, &EmptyCustomAttributesCache, &t2475_TI, &t2475_0_0_0, &t2475_1_0_0, t2475_IOs, &t2475_GC, NULL, NULL, NULL, t2475_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2475), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5357_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.GUIStyle>
extern Il2CppType t483_0_0_0;
extern Il2CppType t483_0_0_0;
static ParameterInfo t5357_m26497_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t5357_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26497_MI = 
{
	"Equals", NULL, &t5357_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t5357_m26497_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t483_0_0_0;
static ParameterInfo t5357_m26518_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t5357_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26518_MI = 
{
	"GetHashCode", NULL, &t5357_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5357_m26518_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5357_MIs[] =
{
	&m26497_MI,
	&m26518_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5357_0_0_0;
extern Il2CppType t5357_1_0_0;
struct t5357;
extern TypeInfo t5357_TI;
extern Il2CppGenericClass t5357_GC;
TypeInfo t5357_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5357_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5357_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5357_TI, &t5357_0_0_0, &t5357_1_0_0, NULL, &t5357_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2476_TI;

#include "t2477.h"
extern TypeInfo t2476_TI;
extern TypeInfo t5360_TI;
extern TypeInfo t70_TI;
extern TypeInfo t483_TI;
extern TypeInfo t55_TI;
extern TypeInfo t863_TI;
extern TypeInfo t553_TI;
extern TypeInfo t2477_TI;
extern TypeInfo t60_TI;
#include "t2477MD.h"
extern Il2CppType t5360_0_0_0;
extern Il2CppType t483_0_0_0;
extern Il2CppType t863_0_0_0;
extern MethodInfo m116_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3097_MI;
extern MethodInfo m3095_MI;
extern MethodInfo m6560_MI;
extern MethodInfo m14153_MI;
extern MethodInfo m26519_MI;
extern MethodInfo m26498_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.GUIStyle>
extern Il2CppType t2476_0_0_49;
FieldInfo t2476_f0_FieldInfo = 
{
	"_default", &t2476_0_0_49, &t2476_TI, offsetof(t2476_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2476_FIs[] =
{
	&t2476_f0_FieldInfo,
	NULL
};
extern MethodInfo m14152_MI;
static PropertyInfo t2476____Default_PropertyInfo = 
{
	&t2476_TI, "Default", &m14152_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2476_PIs[] =
{
	&t2476____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2476_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14148_MI = 
{
	".ctor", (methodPointerType)&m8378_gshared, &t2476_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2476_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14149_MI = 
{
	".cctor", (methodPointerType)&m8379_gshared, &t2476_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2476_m14150_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2476_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14150_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8380_gshared, &t2476_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2476_m14150_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2476_m14151_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2476_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14151_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8381_gshared, &t2476_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2476_m14151_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t483_0_0_0;
static ParameterInfo t2476_m26519_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t2476_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26519_MI = 
{
	"GetHashCode", NULL, &t2476_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2476_m26519_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t483_0_0_0;
extern Il2CppType t483_0_0_0;
static ParameterInfo t2476_m26498_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t2476_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26498_MI = 
{
	"Equals", NULL, &t2476_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2476_m26498_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2476_TI;
extern Il2CppType t2476_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14152_MI = 
{
	"get_Default", (methodPointerType)&m8382_gshared, &t2476_TI, &t2476_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2476_MIs[] =
{
	&m14148_MI,
	&m14149_MI,
	&m14150_MI,
	&m14151_MI,
	&m26519_MI,
	&m26498_MI,
	&m14152_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m26498_MI;
extern MethodInfo m26519_MI;
extern MethodInfo m14151_MI;
extern MethodInfo m14150_MI;
static MethodInfo* t2476_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m26498_MI,
	&m26519_MI,
	&m14151_MI,
	&m14150_MI,
	NULL,
	NULL,
};
extern TypeInfo t5357_TI;
extern TypeInfo t886_TI;
static TypeInfo* t2476_ITIs[] = 
{
	&t5357_TI,
	&t886_TI,
};
extern TypeInfo t5357_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t2476_IOs[] = 
{
	{ &t5357_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t5360_0_0_0;
extern Il2CppType t483_0_0_0;
extern TypeInfo t2476_TI;
extern TypeInfo t2476_TI;
extern TypeInfo t2477_TI;
extern MethodInfo m14153_MI;
extern TypeInfo t483_TI;
extern MethodInfo m26519_MI;
extern MethodInfo m26498_MI;
static void* t2476_RGCTXData[9] = 
{
	(void*)&t5360_0_0_0,
	(void*)&t483_0_0_0,
	&t2476_TI,
	&t2476_TI,
	&t2477_TI,
	&m14153_MI,
	&t483_TI,
	&m26519_MI,
	&m26498_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2476_0_0_0;
extern Il2CppType t2476_1_0_0;
extern TypeInfo t7_TI;
struct t2476;
extern TypeInfo t2476_TI;
extern Il2CppGenericClass t2476_GC;
TypeInfo t2476_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2476_MIs, t2476_PIs, t2476_FIs, NULL, &t7_TI, NULL, NULL, &t2476_TI, t2476_ITIs, t2476_VT, &EmptyCustomAttributesCache, &t2476_TI, &t2476_0_0_0, &t2476_1_0_0, t2476_IOs, &t2476_GC, NULL, NULL, NULL, t2476_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2476), 0, -1, sizeof(t2476_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5360_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.GUIStyle>
extern Il2CppType t483_0_0_0;
static ParameterInfo t5360_m26520_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t5360_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26520_MI = 
{
	"Equals", NULL, &t5360_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5360_m26520_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5360_MIs[] =
{
	&m26520_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5360_0_0_0;
extern Il2CppType t5360_1_0_0;
struct t5360;
extern TypeInfo t5360_TI;
extern Il2CppGenericClass t5360_GC;
TypeInfo t5360_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5360_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5360_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5360_TI, &t5360_0_0_0, &t5360_1_0_0, NULL, &t5360_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2477_TI;

extern TypeInfo t483_TI;
extern TypeInfo t7_TI;
extern TypeInfo t60_TI;
extern TypeInfo t55_TI;
extern MethodInfo m14148_MI;
extern MethodInfo m122_MI;
extern MethodInfo m121_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GUIStyle>
extern TypeInfo t2477_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14153_MI = 
{
	".ctor", (methodPointerType)&m8413_gshared, &t2477_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t483_0_0_0;
static ParameterInfo t2477_m14154_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t2477_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14154_MI = 
{
	"GetHashCode", (methodPointerType)&m8414_gshared, &t2477_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2477_m14154_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t483_0_0_0;
extern Il2CppType t483_0_0_0;
static ParameterInfo t2477_m14155_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t483_0_0_0},
};
extern TypeInfo t2477_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14155_MI = 
{
	"Equals", (methodPointerType)&m8415_gshared, &t2477_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2477_m14155_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2477_MIs[] =
{
	&m14153_MI,
	&m14154_MI,
	&m14155_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14155_MI;
extern MethodInfo m14154_MI;
extern MethodInfo m14151_MI;
extern MethodInfo m14150_MI;
extern MethodInfo m14154_MI;
extern MethodInfo m14155_MI;
static MethodInfo* t2477_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14155_MI,
	&m14154_MI,
	&m14151_MI,
	&m14150_MI,
	&m14154_MI,
	&m14155_MI,
};
extern TypeInfo t5357_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t2477_IOs[] = 
{
	{ &t5357_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t5360_0_0_0;
extern Il2CppType t483_0_0_0;
extern TypeInfo t2476_TI;
extern TypeInfo t2476_TI;
extern TypeInfo t2477_TI;
extern MethodInfo m14153_MI;
extern TypeInfo t483_TI;
extern MethodInfo m26519_MI;
extern MethodInfo m26498_MI;
extern MethodInfo m14148_MI;
extern TypeInfo t483_TI;
static void* t2477_RGCTXData[11] = 
{
	(void*)&t5360_0_0_0,
	(void*)&t483_0_0_0,
	&t2476_TI,
	&t2476_TI,
	&t2477_TI,
	&m14153_MI,
	&t483_TI,
	&m26519_MI,
	&m26498_MI,
	&m14148_MI,
	&t483_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2477_0_0_0;
extern Il2CppType t2477_1_0_0;
extern TypeInfo t2476_TI;
struct t2477;
extern TypeInfo t2477_TI;
extern Il2CppGenericClass t2477_GC;
extern TypeInfo t862_TI;
TypeInfo t2477_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2477_MIs, NULL, NULL, NULL, &t2476_TI, NULL, &t862_TI, &t2477_TI, NULL, t2477_VT, &EmptyCustomAttributesCache, &t2477_TI, &t2477_0_0_0, &t2477_1_0_0, t2477_IOs, &t2477_GC, NULL, NULL, NULL, t2477_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2477), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3584_TI;

#include "t200.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.FontStyle>
extern MethodInfo m26521_MI;
static PropertyInfo t3584____Current_PropertyInfo = 
{
	&t3584_TI, "Current", &m26521_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3584_PIs[] =
{
	&t3584____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3584_TI;
extern Il2CppType t200_0_0_0;
extern void* RuntimeInvoker_t200 (MethodInfo* method, void* obj, void** args);
MethodInfo m26521_MI = 
{
	"get_Current", NULL, &t3584_TI, &t200_0_0_0, RuntimeInvoker_t200, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3584_MIs[] =
{
	&m26521_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3584_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3584_0_0_0;
extern Il2CppType t3584_1_0_0;
struct t3584;
extern TypeInfo t3584_TI;
extern Il2CppGenericClass t3584_GC;
TypeInfo t3584_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3584_MIs, t3584_PIs, NULL, NULL, NULL, NULL, NULL, &t3584_TI, t3584_ITIs, NULL, &EmptyCustomAttributesCache, &t3584_TI, &t3584_0_0_0, &t3584_1_0_0, NULL, &t3584_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2478.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2478_TI;
#include "t2478MD.h"

extern TypeInfo t2478_TI;
extern TypeInfo t200_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14160_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20033_MI;
struct t52;
 int32_t m20033 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20033_MI;


extern MethodInfo m14156_MI;
 void m14156 (t2478 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14157_MI;
 t7 * m14157 (t2478 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14160(__this, &m14160_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t200_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14158_MI;
 void m14158 (t2478 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14159_MI;
 bool m14159 (t2478 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t52 * L_1 = (__this->f0);
		int32_t L_2 = m3829(L_1, &m3829_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m14160_MI;
 int32_t m14160 (t2478 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1295 * L_1 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7023(L_1, (t34*) &_stringLiteral373, &m7023_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1295 * L_3 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7023(L_3, (t34*) &_stringLiteral374, &m7023_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t52 * L_4 = (__this->f0);
		t52 * L_5 = (__this->f0);
		int32_t L_6 = m3829(L_5, &m3829_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m20033(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20033_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.FontStyle>
extern Il2CppType t52_0_0_1;
FieldInfo t2478_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2478_TI, offsetof(t2478, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2478_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2478_TI, offsetof(t2478, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2478_FIs[] =
{
	&t2478_f0_FieldInfo,
	&t2478_f1_FieldInfo,
	NULL
};
extern MethodInfo m14157_MI;
static PropertyInfo t2478____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2478_TI, "System.Collections.IEnumerator.Current", &m14157_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14160_MI;
static PropertyInfo t2478____Current_PropertyInfo = 
{
	&t2478_TI, "Current", &m14160_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2478_PIs[] =
{
	&t2478____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2478____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2478_m14156_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2478_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14156_MI = 
{
	".ctor", (methodPointerType)&m14156, &t2478_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2478_m14156_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2478_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14157_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14157, &t2478_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2478_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14158_MI = 
{
	"Dispose", (methodPointerType)&m14158, &t2478_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2478_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14159_MI = 
{
	"MoveNext", (methodPointerType)&m14159, &t2478_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2478_TI;
extern Il2CppType t200_0_0_0;
extern void* RuntimeInvoker_t200 (MethodInfo* method, void* obj, void** args);
MethodInfo m14160_MI = 
{
	"get_Current", (methodPointerType)&m14160, &t2478_TI, &t200_0_0_0, RuntimeInvoker_t200, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2478_MIs[] =
{
	&m14156_MI,
	&m14157_MI,
	&m14158_MI,
	&m14159_MI,
	&m14160_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14157_MI;
extern MethodInfo m14159_MI;
extern MethodInfo m14158_MI;
extern MethodInfo m14160_MI;
static MethodInfo* t2478_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14157_MI,
	&m14159_MI,
	&m14158_MI,
	&m14160_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3584_TI;
static TypeInfo* t2478_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3584_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3584_TI;
static Il2CppInterfaceOffsetPair t2478_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3584_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2478_0_0_0;
extern Il2CppType t2478_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2478_TI;
extern Il2CppGenericClass t2478_GC;
extern TypeInfo t52_TI;
TypeInfo t2478_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2478_MIs, t2478_PIs, t2478_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2478_TI, t2478_ITIs, t2478_VT, &EmptyCustomAttributesCache, &t2478_TI, &t2478_0_0_0, &t2478_1_0_0, t2478_IOs, &t2478_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2478)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4435_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.FontStyle>
extern MethodInfo m26522_MI;
static PropertyInfo t4435____Count_PropertyInfo = 
{
	&t4435_TI, "Count", &m26522_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26523_MI;
static PropertyInfo t4435____IsReadOnly_PropertyInfo = 
{
	&t4435_TI, "IsReadOnly", &m26523_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4435_PIs[] =
{
	&t4435____Count_PropertyInfo,
	&t4435____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4435_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26522_MI = 
{
	"get_Count", NULL, &t4435_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4435_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26523_MI = 
{
	"get_IsReadOnly", NULL, &t4435_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t200_0_0_0;
static ParameterInfo t4435_m26524_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t200_0_0_0},
};
extern TypeInfo t4435_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26524_MI = 
{
	"Add", NULL, &t4435_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4435_m26524_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4435_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26525_MI = 
{
	"Clear", NULL, &t4435_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t200_0_0_0;
static ParameterInfo t4435_m26526_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t200_0_0_0},
};
extern TypeInfo t4435_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26526_MI = 
{
	"Contains", NULL, &t4435_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4435_m26526_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3216_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4435_m26527_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3216_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4435_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26527_MI = 
{
	"CopyTo", NULL, &t4435_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4435_m26527_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t200_0_0_0;
static ParameterInfo t4435_m26528_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t200_0_0_0},
};
extern TypeInfo t4435_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26528_MI = 
{
	"Remove", NULL, &t4435_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4435_m26528_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4435_MIs[] =
{
	&m26522_MI,
	&m26523_MI,
	&m26524_MI,
	&m26525_MI,
	&m26526_MI,
	&m26527_MI,
	&m26528_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4437_TI;
static TypeInfo* t4435_ITIs[] = 
{
	&t618_TI,
	&t4437_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4435_0_0_0;
extern Il2CppType t4435_1_0_0;
struct t4435;
extern TypeInfo t4435_TI;
extern Il2CppGenericClass t4435_GC;
TypeInfo t4435_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4435_MIs, t4435_PIs, NULL, NULL, NULL, NULL, NULL, &t4435_TI, t4435_ITIs, NULL, &EmptyCustomAttributesCache, &t4435_TI, &t4435_0_0_0, &t4435_1_0_0, NULL, &t4435_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4437_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.FontStyle>
extern TypeInfo t4437_TI;
extern Il2CppType t3584_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26529_MI = 
{
	"GetEnumerator", NULL, &t4437_TI, &t3584_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4437_MIs[] =
{
	&m26529_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4437_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4437_0_0_0;
extern Il2CppType t4437_1_0_0;
struct t4437;
extern TypeInfo t4437_TI;
extern Il2CppGenericClass t4437_GC;
TypeInfo t4437_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4437_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4437_TI, t4437_ITIs, NULL, &EmptyCustomAttributesCache, &t4437_TI, &t4437_0_0_0, &t4437_1_0_0, NULL, &t4437_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4436_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.FontStyle>
extern MethodInfo m26530_MI;
extern MethodInfo m26531_MI;
static PropertyInfo t4436____Item_PropertyInfo = 
{
	&t4436_TI, "Item", &m26530_MI, &m26531_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4436_PIs[] =
{
	&t4436____Item_PropertyInfo,
	NULL
};
extern Il2CppType t200_0_0_0;
static ParameterInfo t4436_m26532_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t200_0_0_0},
};
extern TypeInfo t4436_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26532_MI = 
{
	"IndexOf", NULL, &t4436_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4436_m26532_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t200_0_0_0;
static ParameterInfo t4436_m26533_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t200_0_0_0},
};
extern TypeInfo t4436_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26533_MI = 
{
	"Insert", NULL, &t4436_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4436_m26533_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4436_m26534_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4436_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26534_MI = 
{
	"RemoveAt", NULL, &t4436_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4436_m26534_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4436_m26530_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4436_TI;
extern Il2CppType t200_0_0_0;
extern void* RuntimeInvoker_t200_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26530_MI = 
{
	"get_Item", NULL, &t4436_TI, &t200_0_0_0, RuntimeInvoker_t200_t60, t4436_m26530_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t200_0_0_0;
static ParameterInfo t4436_m26531_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t200_0_0_0},
};
extern TypeInfo t4436_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26531_MI = 
{
	"set_Item", NULL, &t4436_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4436_m26531_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4436_MIs[] =
{
	&m26532_MI,
	&m26533_MI,
	&m26534_MI,
	&m26530_MI,
	&m26531_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4435_TI;
extern TypeInfo t4437_TI;
static TypeInfo* t4436_ITIs[] = 
{
	&t618_TI,
	&t4435_TI,
	&t4437_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4436_0_0_0;
extern Il2CppType t4436_1_0_0;
struct t4436;
extern TypeInfo t4436_TI;
extern Il2CppGenericClass t4436_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4436_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4436_MIs, t4436_PIs, NULL, NULL, NULL, NULL, NULL, &t4436_TI, t4436_ITIs, NULL, &t1426__CustomAttributeCache, &t4436_TI, &t4436_0_0_0, &t4436_1_0_0, NULL, &t4436_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3585_TI;

#include "t254.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.TouchScreenKeyboardType>
extern MethodInfo m26535_MI;
static PropertyInfo t3585____Current_PropertyInfo = 
{
	&t3585_TI, "Current", &m26535_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3585_PIs[] =
{
	&t3585____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3585_TI;
extern Il2CppType t254_0_0_0;
extern void* RuntimeInvoker_t254 (MethodInfo* method, void* obj, void** args);
MethodInfo m26535_MI = 
{
	"get_Current", NULL, &t3585_TI, &t254_0_0_0, RuntimeInvoker_t254, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3585_MIs[] =
{
	&m26535_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3585_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3585_0_0_0;
extern Il2CppType t3585_1_0_0;
struct t3585;
extern TypeInfo t3585_TI;
extern Il2CppGenericClass t3585_GC;
TypeInfo t3585_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3585_MIs, t3585_PIs, NULL, NULL, NULL, NULL, NULL, &t3585_TI, t3585_ITIs, NULL, &EmptyCustomAttributesCache, &t3585_TI, &t3585_0_0_0, &t3585_1_0_0, NULL, &t3585_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2479.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2479_TI;
#include "t2479MD.h"

extern TypeInfo t2479_TI;
extern TypeInfo t254_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14165_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20044_MI;
struct t52;
 int32_t m20044 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20044_MI;


extern MethodInfo m14161_MI;
 void m14161 (t2479 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14162_MI;
 t7 * m14162 (t2479 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14165(__this, &m14165_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t254_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14163_MI;
 void m14163 (t2479 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14164_MI;
 bool m14164 (t2479 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t52 * L_1 = (__this->f0);
		int32_t L_2 = m3829(L_1, &m3829_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m14165_MI;
 int32_t m14165 (t2479 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1295 * L_1 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7023(L_1, (t34*) &_stringLiteral373, &m7023_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1295 * L_3 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7023(L_3, (t34*) &_stringLiteral374, &m7023_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t52 * L_4 = (__this->f0);
		t52 * L_5 = (__this->f0);
		int32_t L_6 = m3829(L_5, &m3829_MI);
		int32_t L_7 = (__this->f1);
		int32_t L_8 = m20044(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20044_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.TouchScreenKeyboardType>
extern Il2CppType t52_0_0_1;
FieldInfo t2479_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2479_TI, offsetof(t2479, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2479_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2479_TI, offsetof(t2479, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2479_FIs[] =
{
	&t2479_f0_FieldInfo,
	&t2479_f1_FieldInfo,
	NULL
};
extern MethodInfo m14162_MI;
static PropertyInfo t2479____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2479_TI, "System.Collections.IEnumerator.Current", &m14162_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14165_MI;
static PropertyInfo t2479____Current_PropertyInfo = 
{
	&t2479_TI, "Current", &m14165_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2479_PIs[] =
{
	&t2479____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2479____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2479_m14161_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2479_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14161_MI = 
{
	".ctor", (methodPointerType)&m14161, &t2479_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2479_m14161_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2479_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14162_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14162, &t2479_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2479_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14163_MI = 
{
	"Dispose", (methodPointerType)&m14163, &t2479_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2479_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14164_MI = 
{
	"MoveNext", (methodPointerType)&m14164, &t2479_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2479_TI;
extern Il2CppType t254_0_0_0;
extern void* RuntimeInvoker_t254 (MethodInfo* method, void* obj, void** args);
MethodInfo m14165_MI = 
{
	"get_Current", (methodPointerType)&m14165, &t2479_TI, &t254_0_0_0, RuntimeInvoker_t254, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2479_MIs[] =
{
	&m14161_MI,
	&m14162_MI,
	&m14163_MI,
	&m14164_MI,
	&m14165_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14162_MI;
extern MethodInfo m14164_MI;
extern MethodInfo m14163_MI;
extern MethodInfo m14165_MI;
static MethodInfo* t2479_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14162_MI,
	&m14164_MI,
	&m14163_MI,
	&m14165_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3585_TI;
static TypeInfo* t2479_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3585_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3585_TI;
static Il2CppInterfaceOffsetPair t2479_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3585_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2479_0_0_0;
extern Il2CppType t2479_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2479_TI;
extern Il2CppGenericClass t2479_GC;
extern TypeInfo t52_TI;
TypeInfo t2479_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2479_MIs, t2479_PIs, t2479_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2479_TI, t2479_ITIs, t2479_VT, &EmptyCustomAttributesCache, &t2479_TI, &t2479_0_0_0, &t2479_1_0_0, t2479_IOs, &t2479_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2479)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4438_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.TouchScreenKeyboardType>
extern MethodInfo m26536_MI;
static PropertyInfo t4438____Count_PropertyInfo = 
{
	&t4438_TI, "Count", &m26536_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26537_MI;
static PropertyInfo t4438____IsReadOnly_PropertyInfo = 
{
	&t4438_TI, "IsReadOnly", &m26537_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4438_PIs[] =
{
	&t4438____Count_PropertyInfo,
	&t4438____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4438_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26536_MI = 
{
	"get_Count", NULL, &t4438_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4438_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26537_MI = 
{
	"get_IsReadOnly", NULL, &t4438_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t254_0_0_0;
static ParameterInfo t4438_m26538_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t254_0_0_0},
};
extern TypeInfo t4438_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26538_MI = 
{
	"Add", NULL, &t4438_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4438_m26538_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4438_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26539_MI = 
{
	"Clear", NULL, &t4438_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t254_0_0_0;
static ParameterInfo t4438_m26540_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t254_0_0_0},
};
extern TypeInfo t4438_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26540_MI = 
{
	"Contains", NULL, &t4438_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4438_m26540_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3217_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4438_m26541_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3217_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4438_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26541_MI = 
{
	"CopyTo", NULL, &t4438_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4438_m26541_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t254_0_0_0;
static ParameterInfo t4438_m26542_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t254_0_0_0},
};
extern TypeInfo t4438_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26542_MI = 
{
	"Remove", NULL, &t4438_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4438_m26542_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4438_MIs[] =
{
	&m26536_MI,
	&m26537_MI,
	&m26538_MI,
	&m26539_MI,
	&m26540_MI,
	&m26541_MI,
	&m26542_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4440_TI;
static TypeInfo* t4438_ITIs[] = 
{
	&t618_TI,
	&t4440_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4438_0_0_0;
extern Il2CppType t4438_1_0_0;
struct t4438;
extern TypeInfo t4438_TI;
extern Il2CppGenericClass t4438_GC;
TypeInfo t4438_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4438_MIs, t4438_PIs, NULL, NULL, NULL, NULL, NULL, &t4438_TI, t4438_ITIs, NULL, &EmptyCustomAttributesCache, &t4438_TI, &t4438_0_0_0, &t4438_1_0_0, NULL, &t4438_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4440_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.TouchScreenKeyboardType>
extern TypeInfo t4440_TI;
extern Il2CppType t3585_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26543_MI = 
{
	"GetEnumerator", NULL, &t4440_TI, &t3585_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4440_MIs[] =
{
	&m26543_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4440_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4440_0_0_0;
extern Il2CppType t4440_1_0_0;
struct t4440;
extern TypeInfo t4440_TI;
extern Il2CppGenericClass t4440_GC;
TypeInfo t4440_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4440_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4440_TI, t4440_ITIs, NULL, &EmptyCustomAttributesCache, &t4440_TI, &t4440_0_0_0, &t4440_1_0_0, NULL, &t4440_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4439_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.TouchScreenKeyboardType>
extern MethodInfo m26544_MI;
extern MethodInfo m26545_MI;
static PropertyInfo t4439____Item_PropertyInfo = 
{
	&t4439_TI, "Item", &m26544_MI, &m26545_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4439_PIs[] =
{
	&t4439____Item_PropertyInfo,
	NULL
};
extern Il2CppType t254_0_0_0;
static ParameterInfo t4439_m26546_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t254_0_0_0},
};
extern TypeInfo t4439_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26546_MI = 
{
	"IndexOf", NULL, &t4439_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4439_m26546_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t254_0_0_0;
static ParameterInfo t4439_m26547_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t254_0_0_0},
};
extern TypeInfo t4439_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26547_MI = 
{
	"Insert", NULL, &t4439_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4439_m26547_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4439_m26548_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4439_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26548_MI = 
{
	"RemoveAt", NULL, &t4439_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4439_m26548_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4439_m26544_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4439_TI;
extern Il2CppType t254_0_0_0;
extern void* RuntimeInvoker_t254_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26544_MI = 
{
	"get_Item", NULL, &t4439_TI, &t254_0_0_0, RuntimeInvoker_t254_t60, t4439_m26544_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t254_0_0_0;
static ParameterInfo t4439_m26545_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t254_0_0_0},
};
extern TypeInfo t4439_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26545_MI = 
{
	"set_Item", NULL, &t4439_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4439_m26545_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4439_MIs[] =
{
	&m26546_MI,
	&m26547_MI,
	&m26548_MI,
	&m26544_MI,
	&m26545_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4438_TI;
extern TypeInfo t4440_TI;
static TypeInfo* t4439_ITIs[] = 
{
	&t618_TI,
	&t4438_TI,
	&t4440_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4439_0_0_0;
extern Il2CppType t4439_1_0_0;
struct t4439;
extern TypeInfo t4439_TI;
extern Il2CppGenericClass t4439_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4439_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4439_MIs, t4439_PIs, NULL, NULL, NULL, NULL, NULL, &t4439_TI, t4439_ITIs, NULL, &t1426__CustomAttributeCache, &t4439_TI, &t4439_0_0_0, &t4439_1_0_0, NULL, &t4439_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t502.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t502_TI;
#include "t502MD.h"

#include "t2481.h"
#include "t2483.h"
#include "t2480.h"
#include "t2489.h"
#include "t2485.h"
#include "t2490.h"
#include "t1934.h"
extern TypeInfo t502_TI;
extern TypeInfo t53_TI;
extern TypeInfo t34_TI;
extern TypeInfo t60_TI;
extern TypeInfo t87_TI;
extern TypeInfo t1598_TI;
extern TypeInfo t852_TI;
extern TypeInfo t55_TI;
extern TypeInfo t2481_TI;
extern TypeInfo t2482_TI;
extern TypeInfo t2483_TI;
extern TypeInfo t3020_TI;
extern TypeInfo t854_TI;
extern TypeInfo t2480_TI;
extern TypeInfo t2489_TI;
extern TypeInfo t2485_TI;
extern TypeInfo t2490_TI;
extern TypeInfo t88_TI;
extern TypeInfo t2473_TI;
extern TypeInfo t731_TI;
extern TypeInfo t1476_TI;
extern TypeInfo t463_TI;
extern TypeInfo t348_TI;
extern TypeInfo t881_TI;
extern TypeInfo t1934_TI;
extern TypeInfo t1917_TI;
extern TypeInfo t70_TI;
#include "t2481MD.h"
#include "t2483MD.h"
#include "t2480MD.h"
#include "t2489MD.h"
#include "t2485MD.h"
#include "t2490MD.h"
#include "t1934MD.h"
extern Il2CppType t1598_0_0_0;
extern Il2CppType t2482_0_0_0;
extern Il2CppType t34_0_0_0;
extern Il2CppType t60_0_0_0;
extern MethodInfo m14197_MI;
extern MethodInfo m14198_MI;
extern MethodInfo m14182_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m26495_MI;
extern MethodInfo m26496_MI;
extern MethodInfo m14189_MI;
extern MethodInfo m14213_MI;
extern MethodInfo m116_MI;
extern MethodInfo m14183_MI;
extern MethodInfo m14203_MI;
extern MethodInfo m14205_MI;
extern MethodInfo m7571_MI;
extern MethodInfo m14199_MI;
extern MethodInfo m14188_MI;
extern MethodInfo m14195_MI;
extern MethodInfo m14185_MI;
extern MethodInfo m14201_MI;
extern MethodInfo m14247_MI;
extern MethodInfo m20068_MI;
extern MethodInfo m14186_MI;
extern MethodInfo m14251_MI;
extern MethodInfo m20070_MI;
extern MethodInfo m14232_MI;
extern MethodInfo m14255_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m14141_MI;
extern MethodInfo m14184_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m14181_MI;
extern MethodInfo m14202_MI;
extern MethodInfo m20071_MI;
extern MethodInfo m4529_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m3874_MI;
extern MethodInfo m10483_MI;
extern MethodInfo m24581_MI;
extern MethodInfo m5859_MI;
extern MethodInfo m5865_MI;
extern MethodInfo m5868_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m5855_MI;
extern MethodInfo m3964_MI;
extern MethodInfo m1876_MI;
extern MethodInfo m6583_MI;
extern MethodInfo m3933_MI;
extern MethodInfo m7572_MI;
extern MethodInfo m24716_MI;
extern MethodInfo m4471_MI;
struct t502;
 void m20068 (t502 * __this, t3020* p0, int32_t p1, t2480 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20068_MI;
struct t502;
 void m20070 (t502 * __this, t52 * p0, int32_t p1, t2489 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20070_MI;
struct t502;
 void m20071 (t502 * __this, t2482* p0, int32_t p1, t2489 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20071_MI;


extern MethodInfo m14166_MI;
 void m14166 (t502 * __this, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		m14183(__this, ((int32_t)10), (t7*)NULL, &m14183_MI);
		return;
	}
}
extern MethodInfo m14167_MI;
 void m14167 (t502 * __this, t7* p0, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		m14183(__this, ((int32_t)10), p0, &m14183_MI);
		return;
	}
}
extern MethodInfo m7570_MI;
 void m7570 (t502 * __this, int32_t p0, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		m14183(__this, p0, (t7*)NULL, &m14183_MI);
		return;
	}
}
extern MethodInfo m14168_MI;
 void m14168 (t502 * __this, t732 * p0, t733  p1, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		__this->f13 = p0;
		return;
	}
}
extern MethodInfo m14169_MI;
 void m14169 (t502 * __this, t7 * p0, t7 * p1, MethodInfo* method){
	{
		t34* L_0 = m14197(__this, p0, &m14197_MI);
		int32_t L_1 = m14198(__this, p1, &m14198_MI);
		VirtActionInvoker2< t34*, int32_t >::Invoke(&m14182_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m14170_MI;
 bool m14170 (t502 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14171_MI;
 t7 * m14171 (t502 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m14172_MI;
 bool m14172 (t502 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14173_MI;
 void m14173 (t502 * __this, t2483  p0, MethodInfo* method){
	{
		t34* L_0 = m14203((&p0), &m14203_MI);
		int32_t L_1 = m14205((&p0), &m14205_MI);
		VirtActionInvoker2< t34*, int32_t >::Invoke(&m7571_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m14174_MI;
 bool m14174 (t502 * __this, t2483  p0, MethodInfo* method){
	{
		bool L_0 = m14199(__this, p0, &m14199_MI);
		return L_0;
	}
}
extern MethodInfo m14175_MI;
 void m14175 (t502 * __this, t2482* p0, int32_t p1, MethodInfo* method){
	{
		m14188(__this, p0, p1, &m14188_MI);
		return;
	}
}
extern MethodInfo m14176_MI;
 bool m14176 (t502 * __this, t2483  p0, MethodInfo* method){
	{
		bool L_0 = m14199(__this, p0, &m14199_MI);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		t34* L_1 = m14203((&p0), &m14203_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t34* >::Invoke(&m14195_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m14177_MI;
 void m14177 (t502 * __this, t52 * p0, int32_t p1, MethodInfo* method){
	t2482* V_0 = {0};
	t3020* V_1 = {0};
	int32_t G_B5_0 = 0;
	t3020* G_B5_1 = {0};
	t502 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t3020* G_B4_1 = {0};
	t502 * G_B4_2 = {0};
	{
		V_0 = ((t2482*)IsInst(p0, InitializedTypeInfo(&t2482_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		m14188(__this, V_0, p1, &m14188_MI);
		return;
	}

IL_0013:
	{
		m14185(__this, p0, p1, &m14185_MI);
		V_1 = ((t3020*)IsInst(p0, InitializedTypeInfo(&t3020_TI)));
		if (!V_1)
		{
			goto IL_004b;
		}
	}
	{
		G_B4_0 = p1;
		G_B4_1 = V_1;
		G_B4_2 = ((t502 *)(__this));
		if ((((t502_SFs*)InitializedTypeInfo(&t502_TI)->static_fields)->f15))
		{
			G_B5_0 = p1;
			G_B5_1 = V_1;
			G_B5_2 = ((t502 *)(__this));
			goto IL_0040;
		}
	}
	{
		t114 L_0 = { &m14201_MI };
		t2480 * L_1 = (t2480 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2480_TI));
		m14247(L_1, NULL, L_0, &m14247_MI);
		((t502_SFs*)InitializedTypeInfo(&t502_TI)->static_fields)->f15 = L_1;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t502 *)(G_B4_2));
	}

IL_0040:
	{
		m20068(G_B5_2, G_B5_1, G_B5_0, (((t502_SFs*)InitializedTypeInfo(&t502_TI)->static_fields)->f15), &m20068_MI);
		return;
	}

IL_004b:
	{
		t114 L_2 = { &m14186_MI };
		t2489 * L_3 = (t2489 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2489_TI));
		m14251(L_3, NULL, L_2, &m14251_MI);
		m20070(__this, p0, p1, L_3, &m20070_MI);
		return;
	}
}
extern MethodInfo m14178_MI;
 t7 * m14178 (t502 * __this, MethodInfo* method){
	{
		t2485  L_0 = {0};
		m14232(&L_0, __this, &m14232_MI);
		t2485  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2485_TI), &L_1);
		return (t7 *)L_2;
	}
}
extern MethodInfo m14179_MI;
 t7* m14179 (t502 * __this, MethodInfo* method){
	{
		t2485  L_0 = {0};
		m14232(&L_0, __this, &m14232_MI);
		t2485  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2485_TI), &L_1);
		return (t7*)L_2;
	}
}
extern MethodInfo m14180_MI;
 t7 * m14180 (t502 * __this, MethodInfo* method){
	{
		t2490 * L_0 = (t2490 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2490_TI));
		m14255(L_0, __this, &m14255_MI);
		return L_0;
	}
}
extern MethodInfo m14181_MI;
 int32_t m14181 (t502 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m14182_MI;
 void m14182 (t502 * __this, t34* p0, int32_t p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t34* L_0 = p0;
		if (((t34*)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t87 * L_1 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_1, (t34*) &_stringLiteral539, &m3066_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t7* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t34* >::Invoke(&m26495_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t731* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_4)->max_length)))));
		t731* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		V_3 = (-1);
		if ((((int32_t)V_2) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		t1476* L_6 = (__this->f5);
		int32_t L_7 = (((t852 *)(t852 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0078;
		}
	}
	{
		t7* L_8 = (__this->f12);
		t463* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t34*, t34* >::Invoke(&m26496_MI, L_8, (*(t34**)(t34**)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		V_3 = V_2;
		t1476* L_11 = (__this->f5);
		int32_t L_12 = (((t852 *)(t852 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_13 = (__this->f10);
		int32_t L_14 = ((int32_t)(L_13+1));
		V_4 = L_14;
		__this->f10 = L_14;
		int32_t L_15 = (__this->f11);
		if ((((int32_t)V_4) <= ((int32_t)L_15)))
		{
			goto IL_00c9;
		}
	}
	{
		m14189(__this, &m14189_MI);
		t731* L_16 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_16)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_17 = (__this->f9);
		V_2 = L_17;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_18 = (__this->f8);
		int32_t L_19 = L_18;
		V_4 = L_19;
		__this->f8 = ((int32_t)(L_19+1));
		V_2 = V_4;
		goto IL_0101;
	}

IL_00ea:
	{
		t1476* L_20 = (__this->f5);
		int32_t L_21 = (((t852 *)(t852 *)SZArrayLdElema(L_20, V_2))->f1);
		__this->f9 = L_21;
	}

IL_0101:
	{
		t1476* L_22 = (__this->f5);
		t731* L_23 = (__this->f4);
		((t852 *)(t852 *)SZArrayLdElema(L_22, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_23, V_1))-1));
		t731* L_24 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_1)) = (int32_t)((int32_t)(V_2+1));
		t1476* L_25 = (__this->f5);
		((t852 *)(t852 *)SZArrayLdElema(L_25, V_2))->f0 = V_0;
		t463* L_26 = (__this->f6);
		*((t34**)(t34**)SZArrayLdElema(L_26, V_2)) = (t34*)p0;
		goto IL_0194;
	}

IL_0148:
	{
		if ((((int32_t)V_3) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		t1476* L_27 = (__this->f5);
		t1476* L_28 = (__this->f5);
		int32_t L_29 = (((t852 *)(t852 *)SZArrayLdElema(L_28, V_2))->f1);
		((t852 *)(t852 *)SZArrayLdElema(L_27, V_3))->f1 = L_29;
		t1476* L_30 = (__this->f5);
		t731* L_31 = (__this->f4);
		((t852 *)(t852 *)SZArrayLdElema(L_30, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_31, V_1))-1));
		t731* L_32 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_32, V_1)) = (int32_t)((int32_t)(V_2+1));
	}

IL_0194:
	{
		t731* L_33 = (__this->f7);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_33, V_2)) = (int32_t)p1;
		int32_t L_34 = (__this->f14);
		__this->f14 = ((int32_t)(L_34+1));
		return;
	}
}
extern MethodInfo m14183_MI;
 void m14183 (t502 * __this, int32_t p0, t7* p1, MethodInfo* method){
	t7* V_0 = {0};
	t502 * G_B4_0 = {0};
	t502 * G_B3_0 = {0};
	t7* G_B5_0 = {0};
	t502 * G_B5_1 = {0};
	{
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t88 * L_0 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m6591(L_0, (t34*) &_stringLiteral540, &m6591_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000f:
	{
		G_B3_0 = ((t502 *)(__this));
		if (!p1)
		{
			G_B4_0 = ((t502 *)(__this));
			goto IL_0018;
		}
	}
	{
		V_0 = p1;
		G_B5_0 = V_0;
		G_B5_1 = ((t502 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2473_TI));
		t2473 * L_1 = m14141(NULL, &m14141_MI);
		G_B5_0 = ((t7*)(L_1));
		G_B5_1 = ((t502 *)(G_B4_0));
	}

IL_001d:
	{
		G_B5_1->f12 = G_B5_0;
		if (p0)
		{
			goto IL_002b;
		}
	}
	{
		p0 = ((int32_t)10);
	}

IL_002b:
	{
		p0 = ((int32_t)((((int32_t)((float)((((float)p0))/(0.9f)))))+1));
		m14184(__this, p0, &m14184_MI);
		__this->f14 = 0;
		return;
	}
}
extern MethodInfo m14184_MI;
 void m14184 (t502 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f4 = ((t731*)SZArrayNew(InitializedTypeInfo(&t731_TI), p0));
		__this->f5 = ((t1476*)SZArrayNew(InitializedTypeInfo(&t1476_TI), p0));
		__this->f9 = (-1);
		__this->f6 = ((t463*)SZArrayNew(InitializedTypeInfo(&t463_TI), p0));
		__this->f7 = ((t731*)SZArrayNew(InitializedTypeInfo(&t731_TI), p0));
		__this->f8 = 0;
		t731* L_0 = (__this->f4);
		__this->f11 = (((int32_t)((float)((((float)(((int32_t)(((t52 *)L_0)->max_length)))))*(0.9f)))));
		int32_t L_1 = (__this->f11);
		if (L_1)
		{
			goto IL_006e;
		}
	}
	{
		t731* L_2 = (__this->f4);
		if ((((int32_t)(((int32_t)(((t52 *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->f11 = 1;
	}

IL_006e:
	{
		return;
	}
}
extern MethodInfo m14185_MI;
 void m14185 (t502 * __this, t52 * p0, int32_t p1, MethodInfo* method){
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
		if ((((int32_t)p1) >= ((int32_t)0)))
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
		int32_t L_2 = m3829(p0, &m3829_MI);
		if ((((int32_t)p1) <= ((int32_t)L_2)))
		{
			goto IL_0031;
		}
	}
	{
		t348 * L_3 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m2046(L_3, (t34*) &_stringLiteral541, &m2046_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0031:
	{
		int32_t L_4 = m3829(p0, &m3829_MI);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m14181_MI, __this);
		if ((((int32_t)((int32_t)(L_4-p1))) >= ((int32_t)L_5)))
		{
			goto IL_004c;
		}
	}
	{
		t348 * L_6 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m2046(L_6, (t34*) &_stringLiteral542, &m2046_MI);
		il2cpp_codegen_raise_exception (L_6);
	}

IL_004c:
	{
		return;
	}
}
extern MethodInfo m14186_MI;
 t2483  m14186 (t7 * __this, t34* p0, int32_t p1, MethodInfo* method){
	{
		t2483  L_0 = {0};
		m14202(&L_0, p0, p1, &m14202_MI);
		return L_0;
	}
}
extern MethodInfo m14187_MI;
 int32_t m14187 (t7 * __this, t34* p0, int32_t p1, MethodInfo* method){
	{
		return p1;
	}
}
extern MethodInfo m14188_MI;
 void m14188 (t502 * __this, t2482* p0, int32_t p1, MethodInfo* method){
	{
		m14185(__this, (t52 *)(t52 *)p0, p1, &m14185_MI);
		t114 L_0 = { &m14186_MI };
		t2489 * L_1 = (t2489 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2489_TI));
		m14251(L_1, NULL, L_0, &m14251_MI);
		m20071(__this, p0, p1, L_1, &m20071_MI);
		return;
	}
}
extern MethodInfo m14189_MI;
 void m14189 (t502 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t731* V_1 = {0};
	t1476* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t463* V_7 = {0};
	t731* V_8 = {0};
	int32_t V_9 = 0;
	{
		t731* L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t881_TI));
		int32_t L_1 = m4529(NULL, ((int32_t)(((int32_t)((((int32_t)(((t52 *)L_0)->max_length)))<<1))|1)), &m4529_MI);
		V_0 = L_1;
		V_1 = ((t731*)SZArrayNew(InitializedTypeInfo(&t731_TI), V_0));
		V_2 = ((t1476*)SZArrayNew(InitializedTypeInfo(&t1476_TI), V_0));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		t731* L_2 = (__this->f4);
		V_4 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_2, V_3))-1));
		goto IL_00a2;
	}

IL_0035:
	{
		t7* L_3 = (__this->f12);
		t463* L_4 = (__this->f6);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t34* >::Invoke(&m26495_MI, L_3, (*(t34**)(t34**)SZArrayLdElema(L_4, V_4)));
		int32_t L_6 = ((int32_t)(L_5|((int32_t)-2147483648)));
		V_9 = L_6;
		((t852 *)(t852 *)SZArrayLdElema(V_2, V_4))->f0 = L_6;
		V_5 = V_9;
		V_6 = ((int32_t)(((int32_t)(V_5&((int32_t)2147483647)))%V_0));
		((t852 *)(t852 *)SZArrayLdElema(V_2, V_4))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6))-1));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6)) = (int32_t)((int32_t)(V_4+1));
		t1476* L_7 = (__this->f5);
		int32_t L_8 = (((t852 *)(t852 *)SZArrayLdElema(L_7, V_4))->f1);
		V_4 = L_8;
	}

IL_00a2:
	{
		if ((((uint32_t)V_4) != ((uint32_t)(-1))))
		{
			goto IL_0035;
		}
	}
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_00ab:
	{
		t731* L_9 = (__this->f4);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t52 *)L_9)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->f4 = V_1;
		__this->f5 = V_2;
		V_7 = ((t463*)SZArrayNew(InitializedTypeInfo(&t463_TI), V_0));
		V_8 = ((t731*)SZArrayNew(InitializedTypeInfo(&t731_TI), V_0));
		t463* L_10 = (__this->f6);
		int32_t L_11 = (__this->f8);
		m3878(NULL, (t52 *)(t52 *)L_10, 0, (t52 *)(t52 *)V_7, 0, L_11, &m3878_MI);
		t731* L_12 = (__this->f7);
		int32_t L_13 = (__this->f8);
		m3878(NULL, (t52 *)(t52 *)L_12, 0, (t52 *)(t52 *)V_8, 0, L_13, &m3878_MI);
		__this->f6 = V_7;
		__this->f7 = V_8;
		__this->f11 = (((int32_t)((float)((((float)V_0))*(0.9f)))));
		return;
	}
}
extern MethodInfo m7571_MI;
 void m7571 (t502 * __this, t34* p0, int32_t p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t34* L_0 = p0;
		if (((t34*)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t87 * L_1 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_1, (t34*) &_stringLiteral539, &m3066_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t7* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t34* >::Invoke(&m26495_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t731* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_4)->max_length)))));
		t731* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		goto IL_008f;
	}

IL_0044:
	{
		t1476* L_6 = (__this->f5);
		int32_t L_7 = (((t852 *)(t852 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		t7* L_8 = (__this->f12);
		t463* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t34*, t34* >::Invoke(&m26496_MI, L_8, (*(t34**)(t34**)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		t348 * L_11 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m2046(L_11, (t34*) &_stringLiteral544, &m2046_MI);
		il2cpp_codegen_raise_exception (L_11);
	}

IL_007d:
	{
		t1476* L_12 = (__this->f5);
		int32_t L_13 = (((t852 *)(t852 *)SZArrayLdElema(L_12, V_2))->f1);
		V_2 = L_13;
	}

IL_008f:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_14 = (__this->f10);
		int32_t L_15 = ((int32_t)(L_14+1));
		V_3 = L_15;
		__this->f10 = L_15;
		int32_t L_16 = (__this->f11);
		if ((((int32_t)V_3) <= ((int32_t)L_16)))
		{
			goto IL_00c3;
		}
	}
	{
		m14189(__this, &m14189_MI);
		t731* L_17 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_17)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_18 = (__this->f9);
		V_2 = L_18;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_19 = (__this->f8);
		int32_t L_20 = L_19;
		V_3 = L_20;
		__this->f8 = ((int32_t)(L_20+1));
		V_2 = V_3;
		goto IL_00f9;
	}

IL_00e2:
	{
		t1476* L_21 = (__this->f5);
		int32_t L_22 = (((t852 *)(t852 *)SZArrayLdElema(L_21, V_2))->f1);
		__this->f9 = L_22;
	}

IL_00f9:
	{
		t1476* L_23 = (__this->f5);
		((t852 *)(t852 *)SZArrayLdElema(L_23, V_2))->f0 = V_0;
		t1476* L_24 = (__this->f5);
		t731* L_25 = (__this->f4);
		((t852 *)(t852 *)SZArrayLdElema(L_24, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_25, V_1))-1));
		t731* L_26 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_26, V_1)) = (int32_t)((int32_t)(V_2+1));
		t463* L_27 = (__this->f6);
		*((t34**)(t34**)SZArrayLdElema(L_27, V_2)) = (t34*)p0;
		t731* L_28 = (__this->f7);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_28, V_2)) = (int32_t)p1;
		int32_t L_29 = (__this->f14);
		__this->f14 = ((int32_t)(L_29+1));
		return;
	}
}
extern MethodInfo m14190_MI;
 void m14190 (t502 * __this, MethodInfo* method){
	{
		__this->f10 = 0;
		t731* L_0 = (__this->f4);
		t731* L_1 = (__this->f4);
		m3874(NULL, (t52 *)(t52 *)L_0, 0, (((int32_t)(((t52 *)L_1)->max_length))), &m3874_MI);
		t463* L_2 = (__this->f6);
		t463* L_3 = (__this->f6);
		m3874(NULL, (t52 *)(t52 *)L_2, 0, (((int32_t)(((t52 *)L_3)->max_length))), &m3874_MI);
		t731* L_4 = (__this->f7);
		t731* L_5 = (__this->f7);
		m3874(NULL, (t52 *)(t52 *)L_4, 0, (((int32_t)(((t52 *)L_5)->max_length))), &m3874_MI);
		t1476* L_6 = (__this->f5);
		t1476* L_7 = (__this->f5);
		m3874(NULL, (t52 *)(t52 *)L_6, 0, (((int32_t)(((t52 *)L_7)->max_length))), &m3874_MI);
		__this->f9 = (-1);
		__this->f8 = 0;
		int32_t L_8 = (__this->f14);
		__this->f14 = ((int32_t)(L_8+1));
		return;
	}
}
extern MethodInfo m14191_MI;
 bool m14191 (t502 * __this, t34* p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t34* L_0 = p0;
		if (((t34*)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t87 * L_1 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_1, (t34*) &_stringLiteral539, &m3066_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t7* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t34* >::Invoke(&m26495_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t731* L_4 = (__this->f4);
		t731* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_5)->max_length)))))))-1));
		goto IL_0084;
	}

IL_0042:
	{
		t1476* L_6 = (__this->f5);
		int32_t L_7 = (((t852 *)(t852 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0072;
		}
	}
	{
		t7* L_8 = (__this->f12);
		t463* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t34*, t34* >::Invoke(&m26496_MI, L_8, (*(t34**)(t34**)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		t1476* L_11 = (__this->f5);
		int32_t L_12 = (((t852 *)(t852 *)SZArrayLdElema(L_11, V_1))->f1);
		V_1 = L_12;
	}

IL_0084:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m14192_MI;
 bool m14192 (t502 * __this, int32_t p0, MethodInfo* method){
	t7* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1934_TI));
		t1934 * L_0 = m10483(NULL, &m10483_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		t731* L_1 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_1, V_1))-1));
		goto IL_0040;
	}

IL_0017:
	{
		t731* L_2 = (__this->f7);
		bool L_3 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m24581_MI, V_0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, V_2)), p0);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		t1476* L_4 = (__this->f5);
		int32_t L_5 = (((t852 *)(t852 *)SZArrayLdElema(L_4, V_2))->f1);
		V_2 = L_5;
	}

IL_0040:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0048:
	{
		t731* L_6 = (__this->f4);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t52 *)L_6)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m14193_MI;
 void m14193 (t502 * __this, t732 * p0, t733  p1, MethodInfo* method){
	t2482* V_0 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral297, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = (__this->f14);
		m5859(p0, (t34*) &_stringLiteral545, L_1, &m5859_MI);
		t7* L_2 = (__this->f12);
		m5865(p0, (t34*) &_stringLiteral546, L_2, &m5865_MI);
		V_0 = (t2482*)NULL;
		int32_t L_3 = (__this->f10);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_4 = (__this->f10);
		V_0 = ((t2482*)SZArrayNew(InitializedTypeInfo(&t2482_TI), L_4));
		m14188(__this, V_0, 0, &m14188_MI);
	}

IL_004f:
	{
		t731* L_5 = (__this->f4);
		m5859(p0, (t34*) &_stringLiteral547, (((int32_t)(((t52 *)L_5)->max_length))), &m5859_MI);
		m5865(p0, (t34*) &_stringLiteral548, (t7 *)(t7 *)V_0, &m5865_MI);
		return;
	}
}
extern MethodInfo m14194_MI;
 void m14194 (t502 * __this, t7 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t2482* V_1 = {0};
	int32_t V_2 = 0;
	{
		t732 * L_0 = (__this->f13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		t732 * L_1 = (__this->f13);
		int32_t L_2 = m5868(L_1, (t34*) &_stringLiteral545, &m5868_MI);
		__this->f14 = L_2;
		t732 * L_3 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
		t70 * L_4 = m1675(NULL, LoadTypeToken(&t1598_0_0_0), &m1675_MI);
		t7 * L_5 = m5855(L_3, (t34*) &_stringLiteral546, L_4, &m5855_MI);
		__this->f12 = ((t7*)Castclass(L_5, InitializedTypeInfo(&t1598_TI)));
		t732 * L_6 = (__this->f13);
		int32_t L_7 = m5868(L_6, (t34*) &_stringLiteral547, &m5868_MI);
		V_0 = L_7;
		t732 * L_8 = (__this->f13);
		t70 * L_9 = m1675(NULL, LoadTypeToken(&t2482_0_0_0), &m1675_MI);
		t7 * L_10 = m5855(L_8, (t34*) &_stringLiteral548, L_9, &m5855_MI);
		V_1 = ((t2482*)Castclass(L_10, InitializedTypeInfo(&t2482_TI)));
		if ((((int32_t)V_0) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		m14184(__this, V_0, &m14184_MI);
		__this->f10 = 0;
		if (!V_1)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		t34* L_11 = m14203(((t2483 *)(t2483 *)SZArrayLdElema(V_1, V_2)), &m14203_MI);
		int32_t L_12 = m14205(((t2483 *)(t2483 *)SZArrayLdElema(V_1, V_2)), &m14205_MI);
		VirtActionInvoker2< t34*, int32_t >::Invoke(&m7571_MI, __this, L_11, L_12);
		V_2 = ((int32_t)(V_2+1));
	}

IL_00b4:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t52 *)V_1)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_13 = (__this->f14);
		__this->f14 = ((int32_t)(L_13+1));
		__this->f13 = (t732 *)NULL;
		return;
	}
}
extern MethodInfo m14195_MI;
 bool m14195 (t502 * __this, t34* p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t34* V_4 = {0};
	int32_t V_5 = 0;
	{
		t34* L_0 = p0;
		if (((t34*)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t87 * L_1 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_1, (t34*) &_stringLiteral539, &m3066_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t7* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t34* >::Invoke(&m26495_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t731* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_4)->max_length)))));
		t731* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		t1476* L_6 = (__this->f5);
		int32_t L_7 = (((t852 *)(t852 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007a;
		}
	}
	{
		t7* L_8 = (__this->f12);
		t463* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t34*, t34* >::Invoke(&m26496_MI, L_8, (*(t34**)(t34**)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		V_3 = V_2;
		t1476* L_11 = (__this->f5);
		int32_t L_12 = (((t852 *)(t852 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_13 = (__this->f10);
		__this->f10 = ((int32_t)(L_13-1));
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_00c7;
		}
	}
	{
		t731* L_14 = (__this->f4);
		t1476* L_15 = (__this->f5);
		int32_t L_16 = (((t852 *)(t852 *)SZArrayLdElema(L_15, V_2))->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_14, V_1)) = (int32_t)((int32_t)(L_16+1));
		goto IL_00e9;
	}

IL_00c7:
	{
		t1476* L_17 = (__this->f5);
		t1476* L_18 = (__this->f5);
		int32_t L_19 = (((t852 *)(t852 *)SZArrayLdElema(L_18, V_2))->f1);
		((t852 *)(t852 *)SZArrayLdElema(L_17, V_3))->f1 = L_19;
	}

IL_00e9:
	{
		t1476* L_20 = (__this->f5);
		int32_t L_21 = (__this->f9);
		((t852 *)(t852 *)SZArrayLdElema(L_20, V_2))->f1 = L_21;
		__this->f9 = V_2;
		t1476* L_22 = (__this->f5);
		((t852 *)(t852 *)SZArrayLdElema(L_22, V_2))->f0 = 0;
		t463* L_23 = (__this->f6);
		Initobj (&t34_TI, (&V_4));
		*((t34**)(t34**)SZArrayLdElema(L_23, V_2)) = (t34*)V_4;
		t731* L_24 = (__this->f7);
		Initobj (&t60_TI, (&V_5));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_2)) = (int32_t)V_5;
		int32_t L_25 = (__this->f14);
		__this->f14 = ((int32_t)(L_25+1));
		return 1;
	}
}
extern MethodInfo m7572_MI;
 bool m7572 (t502 * __this, t34* p0, int32_t* p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		t34* L_0 = p0;
		if (((t34*)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t87 * L_1 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_1, (t34*) &_stringLiteral539, &m3066_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t7* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t34* >::Invoke(&m26495_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t731* L_4 = (__this->f4);
		t731* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_5)->max_length)))))))-1));
		goto IL_0096;
	}

IL_0042:
	{
		t1476* L_6 = (__this->f5);
		int32_t L_7 = (((t852 *)(t852 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0084;
		}
	}
	{
		t7* L_8 = (__this->f12);
		t463* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t34*, t34* >::Invoke(&m26496_MI, L_8, (*(t34**)(t34**)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0084;
		}
	}
	{
		t731* L_11 = (__this->f7);
		*p1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, V_1));
		return 1;
	}

IL_0084:
	{
		t1476* L_12 = (__this->f5);
		int32_t L_13 = (((t852 *)(t852 *)SZArrayLdElema(L_12, V_1))->f1);
		V_1 = L_13;
	}

IL_0096:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		Initobj (&t60_TI, (&V_2));
		*p1 = V_2;
		return 0;
	}
}
extern MethodInfo m14196_MI;
 t2481 * m14196 (t502 * __this, MethodInfo* method){
	{
		t2481 * L_0 = (t2481 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2481_TI));
		m14213(L_0, __this, &m14213_MI);
		return L_0;
	}
}
extern MethodInfo m14197_MI;
 t34* m14197 (t502 * __this, t7 * p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral539, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if (((t34*)IsInst(p0, (&t34_TI))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
		t70 * L_1 = m1675(NULL, LoadTypeToken(&t34_0_0_0), &m1675_MI);
		t34* L_2 = (t34*)VirtFuncInvoker0< t34* >::Invoke(&m3964_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		t34* L_3 = m1876(NULL, (t34*) &_stringLiteral549, L_2, &m1876_MI);
		t348 * L_4 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m6583(L_4, L_3, (t34*) &_stringLiteral539, &m6583_MI);
		il2cpp_codegen_raise_exception (L_4);
	}

IL_003a:
	{
		return ((t34*)Castclass(p0, (&t34_TI)));
	}
}
extern MethodInfo m14198_MI;
 int32_t m14198 (t502 * __this, t7 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		if (p0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
		t70 * L_0 = m1675(NULL, LoadTypeToken(&t60_0_0_0), &m1675_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3933_MI, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (&t60_TI, (&V_0));
		return V_0;
	}

IL_001e:
	{
		if (((t7 *)IsInst(p0, InitializedTypeInfo(&t60_TI))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
		t70 * L_2 = m1675(NULL, LoadTypeToken(&t60_0_0_0), &m1675_MI);
		t34* L_3 = (t34*)VirtFuncInvoker0< t34* >::Invoke(&m3964_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		t34* L_4 = m1876(NULL, (t34*) &_stringLiteral549, L_3, &m1876_MI);
		t348 * L_5 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m6583(L_5, L_4, (t34*) &_stringLiteral245, &m6583_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_004a:
	{
		return ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t60_TI)))));
	}
}
extern MethodInfo m14199_MI;
 bool m14199 (t502 * __this, t2483  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t34* L_0 = m14203((&p0), &m14203_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t34*, int32_t* >::Invoke(&m7572_MI, __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1934_TI));
		t1934 * L_2 = m10483(NULL, &m10483_MI);
		int32_t L_3 = m14205((&p0), &m14205_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m24716_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m14200_MI;
 t2485  m14200 (t502 * __this, MethodInfo* method){
	{
		t2485  L_0 = {0};
		m14232(&L_0, __this, &m14232_MI);
		return L_0;
	}
}
extern MethodInfo m14201_MI;
 t854  m14201 (t7 * __this, t34* p0, int32_t p1, MethodInfo* method){
	{
		t34* L_0 = p0;
		int32_t L_1 = p1;
		t7 * L_2 = Box(InitializedTypeInfo(&t60_TI), &L_1);
		t854  L_3 = {0};
		m4471(&L_3, ((t34*)L_0), L_2, &m4471_MI);
		return L_3;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<System.String,System.Int32>
extern Il2CppType t60_0_0_32849;
FieldInfo t502_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t60_0_0_32849, &t502_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_32849;
FieldInfo t502_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t54_0_0_32849, &t502_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_32849;
FieldInfo t502_f2_FieldInfo = 
{
	"NO_SLOT", &t60_0_0_32849, &t502_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_32849;
FieldInfo t502_f3_FieldInfo = 
{
	"HASH_FLAG", &t60_0_0_32849, &t502_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t731_0_0_1;
FieldInfo t502_f4_FieldInfo = 
{
	"table", &t731_0_0_1, &t502_TI, offsetof(t502, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1476_0_0_1;
FieldInfo t502_f5_FieldInfo = 
{
	"linkSlots", &t1476_0_0_1, &t502_TI, offsetof(t502, f5), &EmptyCustomAttributesCache};
extern Il2CppType t463_0_0_1;
FieldInfo t502_f6_FieldInfo = 
{
	"keySlots", &t463_0_0_1, &t502_TI, offsetof(t502, f6), &EmptyCustomAttributesCache};
extern Il2CppType t731_0_0_1;
FieldInfo t502_f7_FieldInfo = 
{
	"valueSlots", &t731_0_0_1, &t502_TI, offsetof(t502, f7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t502_f8_FieldInfo = 
{
	"touchedSlots", &t60_0_0_1, &t502_TI, offsetof(t502, f8), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t502_f9_FieldInfo = 
{
	"emptySlot", &t60_0_0_1, &t502_TI, offsetof(t502, f9), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t502_f10_FieldInfo = 
{
	"count", &t60_0_0_1, &t502_TI, offsetof(t502, f10), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t502_f11_FieldInfo = 
{
	"threshold", &t60_0_0_1, &t502_TI, offsetof(t502, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1598_0_0_1;
FieldInfo t502_f12_FieldInfo = 
{
	"hcp", &t1598_0_0_1, &t502_TI, offsetof(t502, f12), &EmptyCustomAttributesCache};
extern Il2CppType t732_0_0_1;
FieldInfo t502_f13_FieldInfo = 
{
	"serialization_info", &t732_0_0_1, &t502_TI, offsetof(t502, f13), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t502_f14_FieldInfo = 
{
	"generation", &t60_0_0_1, &t502_TI, offsetof(t502, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2480_0_0_17;
extern CustomAttributesCache t859__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t502_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t2480_0_0_17, &t502_TI, offsetof(t502_SFs, f15), &t859__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t502_FIs[] =
{
	&t502_f0_FieldInfo,
	&t502_f1_FieldInfo,
	&t502_f2_FieldInfo,
	&t502_f3_FieldInfo,
	&t502_f4_FieldInfo,
	&t502_f5_FieldInfo,
	&t502_f6_FieldInfo,
	&t502_f7_FieldInfo,
	&t502_f8_FieldInfo,
	&t502_f9_FieldInfo,
	&t502_f10_FieldInfo,
	&t502_f11_FieldInfo,
	&t502_f12_FieldInfo,
	&t502_f13_FieldInfo,
	&t502_f14_FieldInfo,
	&t502_f15_FieldInfo,
	NULL
};
static const int32_t t502_f0_DefaultValueData = 10;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t502_f0_DefaultValue = 
{
	&t502_f0_FieldInfo, { (char*)&t502_f0_DefaultValueData, &t60_0_0_0 }};
static const float t502_f1_DefaultValueData = 0.9f;
extern Il2CppType t54_0_0_0;
static Il2CppFieldDefaultValueEntry t502_f1_DefaultValue = 
{
	&t502_f1_FieldInfo, { (char*)&t502_f1_DefaultValueData, &t54_0_0_0 }};
static const int32_t t502_f2_DefaultValueData = -1;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t502_f2_DefaultValue = 
{
	&t502_f2_FieldInfo, { (char*)&t502_f2_DefaultValueData, &t60_0_0_0 }};
static const int32_t t502_f3_DefaultValueData = -2147483648;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t502_f3_DefaultValue = 
{
	&t502_f3_FieldInfo, { (char*)&t502_f3_DefaultValueData, &t60_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t502_FDVs[] = 
{
	&t502_f0_DefaultValue,
	&t502_f1_DefaultValue,
	&t502_f2_DefaultValue,
	&t502_f3_DefaultValue,
	NULL
};
extern MethodInfo m14169_MI;
static PropertyInfo t502____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t502_TI, "System.Collections.IDictionary.Item", NULL, &m14169_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14170_MI;
static PropertyInfo t502____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t502_TI, "System.Collections.ICollection.IsSynchronized", &m14170_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14171_MI;
static PropertyInfo t502____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t502_TI, "System.Collections.ICollection.SyncRoot", &m14171_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14172_MI;
static PropertyInfo t502____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t502_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m14172_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14181_MI;
static PropertyInfo t502____Count_PropertyInfo = 
{
	&t502_TI, "Count", &m14181_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14182_MI;
static PropertyInfo t502____Item_PropertyInfo = 
{
	&t502_TI, "Item", NULL, &m14182_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14196_MI;
static PropertyInfo t502____Values_PropertyInfo = 
{
	&t502_TI, "Values", &m14196_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t502_PIs[] =
{
	&t502____System_Collections_IDictionary_Item_PropertyInfo,
	&t502____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t502____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t502____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t502____Count_PropertyInfo,
	&t502____Item_PropertyInfo,
	&t502____Values_PropertyInfo,
	NULL
};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14166_MI = 
{
	".ctor", (methodPointerType)&m14166, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1598_0_0_0;
static ParameterInfo t502_m14167_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t1598_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14167_MI = 
{
	".ctor", (methodPointerType)&m14167, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t502_m14167_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t502_m7570_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m7570_MI = 
{
	".ctor", (methodPointerType)&m7570, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t502_m7570_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t732_0_0_0;
extern Il2CppType t733_0_0_0;
static ParameterInfo t502_m14168_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t732_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t733_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t733 (MethodInfo* method, void* obj, void** args);
MethodInfo m14168_MI = 
{
	".ctor", (methodPointerType)&m14168, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t733, t502_m14168_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t502_m14169_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14169_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m14169, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t502_m14169_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t502_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14170_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m14170, &t502_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t502_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14171_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m14171, &t502_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t502_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14172_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m14172, &t502_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2483_0_0_0;
static ParameterInfo t502_m14173_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2483_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t2483 (MethodInfo* method, void* obj, void** args);
MethodInfo m14173_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m14173, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53_t2483, t502_m14173_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2483_0_0_0;
static ParameterInfo t502_m14174_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2483_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2483 (MethodInfo* method, void* obj, void** args);
MethodInfo m14174_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m14174, &t502_TI, &t55_0_0_0, RuntimeInvoker_t55_t2483, t502_m14174_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2482_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t502_m14175_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2482_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14175_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m14175, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t502_m14175_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2483_0_0_0;
static ParameterInfo t502_m14176_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2483_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2483 (MethodInfo* method, void* obj, void** args);
MethodInfo m14176_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m14176, &t502_TI, &t55_0_0_0, RuntimeInvoker_t55_t2483, t502_m14176_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t502_m14177_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14177_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m14177, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t502_m14177_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t502_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14178_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m14178, &t502_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t502_TI;
extern Il2CppType t2484_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14179_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m14179, &t502_TI, &t2484_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t502_TI;
extern Il2CppType t860_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14180_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m14180, &t502_TI, &t860_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t502_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14181_MI = 
{
	"get_Count", (methodPointerType)&m14181, &t502_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t502_m14182_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14182_MI = 
{
	"set_Item", (methodPointerType)&m14182, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t502_m14182_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1598_0_0_0;
static ParameterInfo t502_m14183_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t1598_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14183_MI = 
{
	"Init", (methodPointerType)&m14183, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t502_m14183_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t502_m14184_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14184_MI = 
{
	"InitArrays", (methodPointerType)&m14184, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t502_m14184_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t502_m14185_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14185_MI = 
{
	"CopyToCheck", (methodPointerType)&m14185, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t502_m14185_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern Il2CppGenericContainer m26549_IGC;
extern TypeInfo m26549_gp_TRet_0_TI;
Il2CppGenericParamFull m26549_gp_TRet_0_TI_GenericParamFull = { { &m26549_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m26549_gp_TElem_1_TI;
Il2CppGenericParamFull m26549_gp_TElem_1_TI_GenericParamFull = { { &m26549_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m26549_IGPA[2] = 
{
	&m26549_gp_TRet_0_TI_GenericParamFull,
	&m26549_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m26549_MI;
Il2CppGenericContainer m26549_IGC = { { NULL, NULL }, NULL, &m26549_MI, 2, 1, m26549_IGPA };
MethodInfo m26549_MI = 
{
	"Do_CopyTo", NULL, &t502_TI, &t53_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t502_m14186_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t2483_0_0_0;
extern void* RuntimeInvoker_t2483_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14186_MI = 
{
	"make_pair", (methodPointerType)&m14186, &t502_TI, &t2483_0_0_0, RuntimeInvoker_t2483_t7_t60, t502_m14186_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t502_m14187_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14187_MI = 
{
	"pick_value", (methodPointerType)&m14187, &t502_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t60, t502_m14187_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2482_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t502_m14188_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2482_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14188_MI = 
{
	"CopyTo", (methodPointerType)&m14188, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t502_m14188_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern Il2CppGenericContainer m26550_IGC;
extern TypeInfo m26550_gp_TRet_0_TI;
Il2CppGenericParamFull m26550_gp_TRet_0_TI_GenericParamFull = { { &m26550_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m26550_IGPA[1] = 
{
	&m26550_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m26550_MI;
Il2CppGenericContainer m26550_IGC = { { NULL, NULL }, NULL, &m26550_MI, 1, 1, m26550_IGPA };
MethodInfo m26550_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t502_TI, &t53_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14189_MI = 
{
	"Resize", (methodPointerType)&m14189, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t502_m7571_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m7571_MI = 
{
	"Add", (methodPointerType)&m7571, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t502_m7571_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 23, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14190_MI = 
{
	"Clear", (methodPointerType)&m14190, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t502_m14191_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14191_MI = 
{
	"ContainsKey", (methodPointerType)&m14191, &t502_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t502_m14191_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t502_m14192_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14192_MI = 
{
	"ContainsValue", (methodPointerType)&m14192, &t502_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t502_m14192_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t732_0_0_0;
extern Il2CppType t733_0_0_0;
static ParameterInfo t502_m14193_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t732_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t733_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t733 (MethodInfo* method, void* obj, void** args);
MethodInfo m14193_MI = 
{
	"GetObjectData", (methodPointerType)&m14193, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t733, t502_m14193_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t502_m14194_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14194_MI = 
{
	"OnDeserialization", (methodPointerType)&m14194, &t502_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t502_m14194_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t502_m14195_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14195_MI = 
{
	"Remove", (methodPointerType)&m14195, &t502_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t502_m14195_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t60_1_0_0;
static ParameterInfo t502_m7572_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_1_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t410 (MethodInfo* method, void* obj, void** args);
MethodInfo m7572_MI = 
{
	"TryGetValue", (methodPointerType)&m7572, &t502_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t410, t502_m7572_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t502_TI;
extern Il2CppType t2481_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14196_MI = 
{
	"get_Values", (methodPointerType)&m14196, &t502_TI, &t2481_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t502_m14197_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14197_MI = 
{
	"ToTKey", (methodPointerType)&m14197, &t502_TI, &t34_0_0_0, RuntimeInvoker_t7_t7, t502_m14197_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t502_m14198_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14198_MI = 
{
	"ToTValue", (methodPointerType)&m14198, &t502_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t502_m14198_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2483_0_0_0;
static ParameterInfo t502_m14199_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t2483_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2483 (MethodInfo* method, void* obj, void** args);
MethodInfo m14199_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m14199, &t502_TI, &t55_0_0_0, RuntimeInvoker_t55_t2483, t502_m14199_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t502_TI;
extern Il2CppType t2485_0_0_0;
extern void* RuntimeInvoker_t2485 (MethodInfo* method, void* obj, void** args);
MethodInfo m14200_MI = 
{
	"GetEnumerator", (methodPointerType)&m14200, &t502_TI, &t2485_0_0_0, RuntimeInvoker_t2485, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t502_m14201_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t502_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854_t7_t60 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t859__CustomAttributeCache_m7679;
MethodInfo m14201_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m14201, &t502_TI, &t854_0_0_0, RuntimeInvoker_t854_t7_t60, t502_m14201_ParameterInfos, &t859__CustomAttributeCache_m7679, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t502_MIs[] =
{
	&m14166_MI,
	&m14167_MI,
	&m7570_MI,
	&m14168_MI,
	&m14169_MI,
	&m14170_MI,
	&m14171_MI,
	&m14172_MI,
	&m14173_MI,
	&m14174_MI,
	&m14175_MI,
	&m14176_MI,
	&m14177_MI,
	&m14178_MI,
	&m14179_MI,
	&m14180_MI,
	&m14181_MI,
	&m14182_MI,
	&m14183_MI,
	&m14184_MI,
	&m14185_MI,
	&m26549_MI,
	&m14186_MI,
	&m14187_MI,
	&m14188_MI,
	&m26550_MI,
	&m14189_MI,
	&m7571_MI,
	&m14190_MI,
	&m14191_MI,
	&m14192_MI,
	&m14193_MI,
	&m14194_MI,
	&m14195_MI,
	&m7572_MI,
	&m14196_MI,
	&m14197_MI,
	&m14198_MI,
	&m14199_MI,
	&m14200_MI,
	&m14201_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14178_MI;
extern MethodInfo m14193_MI;
extern MethodInfo m14181_MI;
extern MethodInfo m14170_MI;
extern MethodInfo m14171_MI;
extern MethodInfo m14177_MI;
extern MethodInfo m14181_MI;
extern MethodInfo m14172_MI;
extern MethodInfo m14173_MI;
extern MethodInfo m14190_MI;
extern MethodInfo m14174_MI;
extern MethodInfo m14175_MI;
extern MethodInfo m14176_MI;
extern MethodInfo m14179_MI;
extern MethodInfo m14195_MI;
extern MethodInfo m14169_MI;
extern MethodInfo m14180_MI;
extern MethodInfo m14194_MI;
extern MethodInfo m14182_MI;
extern MethodInfo m7571_MI;
extern MethodInfo m14191_MI;
extern MethodInfo m14193_MI;
extern MethodInfo m14194_MI;
extern MethodInfo m7572_MI;
static MethodInfo* t502_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14178_MI,
	&m14193_MI,
	&m14181_MI,
	&m14170_MI,
	&m14171_MI,
	&m14177_MI,
	&m14181_MI,
	&m14172_MI,
	&m14173_MI,
	&m14190_MI,
	&m14174_MI,
	&m14175_MI,
	&m14176_MI,
	&m14179_MI,
	&m14195_MI,
	&m14169_MI,
	&m14180_MI,
	&m14194_MI,
	&m14182_MI,
	&m7571_MI,
	&m14191_MI,
	&m14193_MI,
	&m14194_MI,
	&m7572_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t396_TI;
extern TypeInfo t669_TI;
extern TypeInfo t4441_TI;
extern TypeInfo t4443_TI;
extern TypeInfo t5361_TI;
extern TypeInfo t756_TI;
extern TypeInfo t1512_TI;
static TypeInfo* t502_ITIs[] = 
{
	&t618_TI,
	&t396_TI,
	&t669_TI,
	&t4441_TI,
	&t4443_TI,
	&t5361_TI,
	&t756_TI,
	&t1512_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t396_TI;
extern TypeInfo t669_TI;
extern TypeInfo t4441_TI;
extern TypeInfo t4443_TI;
extern TypeInfo t5361_TI;
extern TypeInfo t756_TI;
extern TypeInfo t1512_TI;
static Il2CppInterfaceOffsetPair t502_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t396_TI, 5},
	{ &t669_TI, 6},
	{ &t4441_TI, 10},
	{ &t4443_TI, 17},
	{ &t5361_TI, 18},
	{ &t756_TI, 19},
	{ &t1512_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t502_0_0_0;
extern Il2CppType t502_1_0_0;
extern TypeInfo t7_TI;
struct t502;
extern TypeInfo t502_TI;
extern Il2CppGenericClass t502_GC;
extern CustomAttributesCache t859__CustomAttributeCache;
extern CustomAttributesCache t859__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t859__CustomAttributeCache_m7679;
TypeInfo t502_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t502_MIs, t502_PIs, t502_FIs, NULL, &t7_TI, NULL, NULL, &t502_TI, t502_ITIs, t502_VT, &t859__CustomAttributeCache, &t502_TI, &t502_0_0_0, &t502_1_0_0, t502_IOs, &t502_GC, NULL, t502_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t502), 0, -1, sizeof(t502_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 41, 7, 16, 0, 0, 28, 8, 8};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4441_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
extern MethodInfo m26551_MI;
static PropertyInfo t4441____Count_PropertyInfo = 
{
	&t4441_TI, "Count", &m26551_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26552_MI;
static PropertyInfo t4441____IsReadOnly_PropertyInfo = 
{
	&t4441_TI, "IsReadOnly", &m26552_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4441_PIs[] =
{
	&t4441____Count_PropertyInfo,
	&t4441____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4441_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26551_MI = 
{
	"get_Count", NULL, &t4441_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4441_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26552_MI = 
{
	"get_IsReadOnly", NULL, &t4441_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2483_0_0_0;
static ParameterInfo t4441_m26553_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2483_0_0_0},
};
extern TypeInfo t4441_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t2483 (MethodInfo* method, void* obj, void** args);
MethodInfo m26553_MI = 
{
	"Add", NULL, &t4441_TI, &t53_0_0_0, RuntimeInvoker_t53_t2483, t4441_m26553_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4441_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26554_MI = 
{
	"Clear", NULL, &t4441_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2483_0_0_0;
static ParameterInfo t4441_m26555_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2483_0_0_0},
};
extern TypeInfo t4441_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2483 (MethodInfo* method, void* obj, void** args);
MethodInfo m26555_MI = 
{
	"Contains", NULL, &t4441_TI, &t55_0_0_0, RuntimeInvoker_t55_t2483, t4441_m26555_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2482_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4441_m26556_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2482_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4441_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26556_MI = 
{
	"CopyTo", NULL, &t4441_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4441_m26556_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2483_0_0_0;
static ParameterInfo t4441_m26557_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2483_0_0_0},
};
extern TypeInfo t4441_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2483 (MethodInfo* method, void* obj, void** args);
MethodInfo m26557_MI = 
{
	"Remove", NULL, &t4441_TI, &t55_0_0_0, RuntimeInvoker_t55_t2483, t4441_m26557_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4441_MIs[] =
{
	&m26551_MI,
	&m26552_MI,
	&m26553_MI,
	&m26554_MI,
	&m26555_MI,
	&m26556_MI,
	&m26557_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4443_TI;
static TypeInfo* t4441_ITIs[] = 
{
	&t618_TI,
	&t4443_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4441_0_0_0;
extern Il2CppType t4441_1_0_0;
struct t4441;
extern TypeInfo t4441_TI;
extern Il2CppGenericClass t4441_GC;
TypeInfo t4441_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4441_MIs, t4441_PIs, NULL, NULL, NULL, NULL, NULL, &t4441_TI, t4441_ITIs, NULL, &EmptyCustomAttributesCache, &t4441_TI, &t4441_0_0_0, &t4441_1_0_0, NULL, &t4441_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4443_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
extern TypeInfo t4443_TI;
extern Il2CppType t2484_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26558_MI = 
{
	"GetEnumerator", NULL, &t4443_TI, &t2484_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4443_MIs[] =
{
	&m26558_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4443_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4443_0_0_0;
extern Il2CppType t4443_1_0_0;
struct t4443;
extern TypeInfo t4443_TI;
extern Il2CppGenericClass t4443_GC;
TypeInfo t4443_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4443_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4443_TI, t4443_ITIs, NULL, &EmptyCustomAttributesCache, &t4443_TI, &t4443_0_0_0, &t4443_1_0_0, NULL, &t4443_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2484_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
extern MethodInfo m26559_MI;
static PropertyInfo t2484____Current_PropertyInfo = 
{
	&t2484_TI, "Current", &m26559_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2484_PIs[] =
{
	&t2484____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2484_TI;
extern Il2CppType t2483_0_0_0;
extern void* RuntimeInvoker_t2483 (MethodInfo* method, void* obj, void** args);
MethodInfo m26559_MI = 
{
	"get_Current", NULL, &t2484_TI, &t2483_0_0_0, RuntimeInvoker_t2483, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2484_MIs[] =
{
	&m26559_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t2484_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2484_0_0_0;
extern Il2CppType t2484_1_0_0;
struct t2484;
extern TypeInfo t2484_TI;
extern Il2CppGenericClass t2484_GC;
TypeInfo t2484_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2484_MIs, t2484_PIs, NULL, NULL, NULL, NULL, NULL, &t2484_TI, t2484_ITIs, NULL, &EmptyCustomAttributesCache, &t2484_TI, &t2484_0_0_0, &t2484_1_0_0, NULL, &t2484_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2483_TI;

extern TypeInfo t2483_TI;
extern TypeInfo t463_TI;
extern TypeInfo t34_TI;
extern TypeInfo t7_TI;
extern TypeInfo t60_TI;
extern MethodInfo m14204_MI;
extern MethodInfo m14206_MI;
extern MethodInfo m14203_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14205_MI;
extern MethodInfo m3540_MI;


extern MethodInfo m14202_MI;
 void m14202 (t2483 * __this, t34* p0, int32_t p1, MethodInfo* method){
	{
		m14204(__this, p0, &m14204_MI);
		m14206(__this, p1, &m14206_MI);
		return;
	}
}
extern MethodInfo m14203_MI;
 t34* m14203 (t2483 * __this, MethodInfo* method){
	{
		t34* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m14204_MI;
 void m14204 (t2483 * __this, t34* p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m14205_MI;
 int32_t m14205 (t2483 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m14206_MI;
 void m14206 (t2483 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m14207_MI;
 t34* m14207 (t2483 * __this, MethodInfo* method){
	t34* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	t463* G_B2_1 = {0};
	t463* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	t463* G_B1_1 = {0};
	t463* G_B1_2 = {0};
	t34* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t463* G_B3_2 = {0};
	t463* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	t463* G_B5_1 = {0};
	t463* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t463* G_B4_1 = {0};
	t463* G_B4_2 = {0};
	t34* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t463* G_B6_2 = {0};
	t463* G_B6_3 = {0};
	{
		t463* L_0 = ((t463*)SZArrayNew(InitializedTypeInfo(&t463_TI), 5));
		ArrayElementTypeCheck (L_0, (t34*) &_stringLiteral177);
		*((t34**)(t34**)SZArrayLdElema(L_0, 0)) = (t34*)(t34*) &_stringLiteral177;
		t463* L_1 = L_0;
		t34* L_2 = m14203(__this, &m14203_MI);
		t34* L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((t34*)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		t34* L_4 = m14203(__this, &m14203_MI);
		V_0 = L_4;
		t34* L_5 = (t34*)VirtFuncInvoker0< t34* >::Invoke(&m123_MI, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		G_B3_0 = (((t34_SFs*)(&t34_TI)->static_fields)->f2);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t34**)(t34**)SZArrayLdElema(G_B3_2, G_B3_1)) = (t34*)G_B3_0;
		t463* L_6 = G_B3_3;
		ArrayElementTypeCheck (L_6, (t34*) &_stringLiteral186);
		*((t34**)(t34**)SZArrayLdElema(L_6, 2)) = (t34*)(t34*) &_stringLiteral186;
		t463* L_7 = L_6;
		int32_t L_8 = m14205(__this, &m14205_MI);
		int32_t L_9 = L_8;
		t7 * L_10 = Box(InitializedTypeInfo(&t60_TI), &L_9);
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_10)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = m14205(__this, &m14205_MI);
		V_1 = L_11;
		t34* L_12 = (t34*)VirtFuncInvoker0< t34* >::Invoke(&m123_MI, Box(InitializedTypeInfo(&t60_TI), &(*(&V_1))));
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		G_B6_0 = (((t34_SFs*)(&t34_TI)->static_fields)->f2);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t34**)(t34**)SZArrayLdElema(G_B6_2, G_B6_1)) = (t34*)G_B6_0;
		t463* L_13 = G_B6_3;
		ArrayElementTypeCheck (L_13, (t34*) &_stringLiteral178);
		*((t34**)(t34**)SZArrayLdElema(L_13, 4)) = (t34*)(t34*) &_stringLiteral178;
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		t34* L_14 = m3540(NULL, L_13, &m3540_MI);
		return L_14;
	}
}
// Metadata Definition System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
extern Il2CppType t34_0_0_1;
FieldInfo t2483_f0_FieldInfo = 
{
	"key", &t34_0_0_1, &t2483_TI, offsetof(t2483, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2483_f1_FieldInfo = 
{
	"value", &t60_0_0_1, &t2483_TI, offsetof(t2483, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2483_FIs[] =
{
	&t2483_f0_FieldInfo,
	&t2483_f1_FieldInfo,
	NULL
};
extern MethodInfo m14203_MI;
extern MethodInfo m14204_MI;
static PropertyInfo t2483____Key_PropertyInfo = 
{
	&t2483_TI, "Key", &m14203_MI, &m14204_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14205_MI;
extern MethodInfo m14206_MI;
static PropertyInfo t2483____Value_PropertyInfo = 
{
	&t2483_TI, "Value", &m14205_MI, &m14206_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2483_PIs[] =
{
	&t2483____Key_PropertyInfo,
	&t2483____Value_PropertyInfo,
	NULL
};
extern Il2CppType t34_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2483_m14202_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2483_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14202_MI = 
{
	".ctor", (methodPointerType)&m14202, &t2483_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2483_m14202_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2483_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14203_MI = 
{
	"get_Key", (methodPointerType)&m14203, &t2483_TI, &t34_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t2483_m14204_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t2483_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14204_MI = 
{
	"set_Key", (methodPointerType)&m14204, &t2483_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2483_m14204_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2483_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14205_MI = 
{
	"get_Value", (methodPointerType)&m14205, &t2483_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2483_m14206_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2483_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14206_MI = 
{
	"set_Value", (methodPointerType)&m14206, &t2483_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2483_m14206_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2483_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14207_MI = 
{
	"ToString", (methodPointerType)&m14207, &t2483_TI, &t34_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2483_MIs[] =
{
	&m14202_MI,
	&m14203_MI,
	&m14204_MI,
	&m14205_MI,
	&m14206_MI,
	&m14207_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m14207_MI;
static MethodInfo* t2483_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m14207_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2483_0_0_0;
extern Il2CppType t2483_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2483_TI;
extern Il2CppGenericClass t2483_GC;
extern CustomAttributesCache t864__CustomAttributeCache;
TypeInfo t2483_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t2483_MIs, t2483_PIs, t2483_FIs, NULL, &t159_TI, NULL, NULL, &t2483_TI, NULL, t2483_VT, &t864__CustomAttributeCache, &t2483_TI, &t2483_0_0_0, &t2483_1_0_0, NULL, &t2483_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2483)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t2486.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2486_TI;
#include "t2486MD.h"

extern TypeInfo t2486_TI;
extern TypeInfo t2483_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14212_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20055_MI;
struct t52;
 t2483  m20055 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20055_MI;


extern MethodInfo m14208_MI;
 void m14208 (t2486 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14209_MI;
 t7 * m14209 (t2486 * __this, MethodInfo* method){
	{
		t2483  L_0 = m14212(__this, &m14212_MI);
		t2483  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2483_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14210_MI;
 void m14210 (t2486 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14211_MI;
 bool m14211 (t2486 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t52 * L_1 = (__this->f0);
		int32_t L_2 = m3829(L_1, &m3829_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m14212_MI;
 t2483  m14212 (t2486 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1295 * L_1 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7023(L_1, (t34*) &_stringLiteral373, &m7023_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1295 * L_3 = (t1295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1295_TI));
		m7023(L_3, (t34*) &_stringLiteral374, &m7023_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t52 * L_4 = (__this->f0);
		t52 * L_5 = (__this->f0);
		int32_t L_6 = m3829(L_5, &m3829_MI);
		int32_t L_7 = (__this->f1);
		t2483  L_8 = m20055(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20055_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
extern Il2CppType t52_0_0_1;
FieldInfo t2486_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2486_TI, offsetof(t2486, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2486_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2486_TI, offsetof(t2486, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2486_FIs[] =
{
	&t2486_f0_FieldInfo,
	&t2486_f1_FieldInfo,
	NULL
};
extern MethodInfo m14209_MI;
static PropertyInfo t2486____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2486_TI, "System.Collections.IEnumerator.Current", &m14209_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14212_MI;
static PropertyInfo t2486____Current_PropertyInfo = 
{
	&t2486_TI, "Current", &m14212_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2486_PIs[] =
{
	&t2486____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2486____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2486_m14208_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2486_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14208_MI = 
{
	".ctor", (methodPointerType)&m14208, &t2486_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2486_m14208_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2486_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14209_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14209, &t2486_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2486_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14210_MI = 
{
	"Dispose", (methodPointerType)&m14210, &t2486_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2486_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14211_MI = 
{
	"MoveNext", (methodPointerType)&m14211, &t2486_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2486_TI;
extern Il2CppType t2483_0_0_0;
extern void* RuntimeInvoker_t2483 (MethodInfo* method, void* obj, void** args);
MethodInfo m14212_MI = 
{
	"get_Current", (methodPointerType)&m14212, &t2486_TI, &t2483_0_0_0, RuntimeInvoker_t2483, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2486_MIs[] =
{
	&m14208_MI,
	&m14209_MI,
	&m14210_MI,
	&m14211_MI,
	&m14212_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14209_MI;
extern MethodInfo m14211_MI;
extern MethodInfo m14210_MI;
extern MethodInfo m14212_MI;
static MethodInfo* t2486_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14209_MI,
	&m14211_MI,
	&m14210_MI,
	&m14212_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2484_TI;
static TypeInfo* t2486_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2484_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2484_TI;
static Il2CppInterfaceOffsetPair t2486_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2484_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2486_0_0_0;
extern Il2CppType t2486_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2486_TI;
extern Il2CppGenericClass t2486_GC;
extern TypeInfo t52_TI;
TypeInfo t2486_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2486_MIs, t2486_PIs, t2486_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2486_TI, t2486_ITIs, t2486_VT, &EmptyCustomAttributesCache, &t2486_TI, &t2486_0_0_0, &t2486_1_0_0, t2486_IOs, &t2486_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2486)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4442_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
extern MethodInfo m26560_MI;
extern MethodInfo m26561_MI;
static PropertyInfo t4442____Item_PropertyInfo = 
{
	&t4442_TI, "Item", &m26560_MI, &m26561_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4442_PIs[] =
{
	&t4442____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2483_0_0_0;
static ParameterInfo t4442_m26562_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2483_0_0_0},
};
extern TypeInfo t4442_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t2483 (MethodInfo* method, void* obj, void** args);
MethodInfo m26562_MI = 
{
	"IndexOf", NULL, &t4442_TI, &t60_0_0_0, RuntimeInvoker_t60_t2483, t4442_m26562_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2483_0_0_0;
static ParameterInfo t4442_m26563_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2483_0_0_0},
};
extern TypeInfo t4442_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t2483 (MethodInfo* method, void* obj, void** args);
MethodInfo m26563_MI = 
{
	"Insert", NULL, &t4442_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t2483, t4442_m26563_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4442_m26564_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4442_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26564_MI = 
{
	"RemoveAt", NULL, &t4442_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4442_m26564_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4442_m26560_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4442_TI;
extern Il2CppType t2483_0_0_0;
extern void* RuntimeInvoker_t2483_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26560_MI = 
{
	"get_Item", NULL, &t4442_TI, &t2483_0_0_0, RuntimeInvoker_t2483_t60, t4442_m26560_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2483_0_0_0;
static ParameterInfo t4442_m26561_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2483_0_0_0},
};
extern TypeInfo t4442_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t2483 (MethodInfo* method, void* obj, void** args);
MethodInfo m26561_MI = 
{
	"set_Item", NULL, &t4442_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t2483, t4442_m26561_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4442_MIs[] =
{
	&m26562_MI,
	&m26563_MI,
	&m26564_MI,
	&m26560_MI,
	&m26561_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4441_TI;
extern TypeInfo t4443_TI;
static TypeInfo* t4442_ITIs[] = 
{
	&t618_TI,
	&t4441_TI,
	&t4443_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4442_0_0_0;
extern Il2CppType t4442_1_0_0;
struct t4442;
extern TypeInfo t4442_TI;
extern Il2CppGenericClass t4442_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4442_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4442_MIs, t4442_PIs, NULL, NULL, NULL, NULL, NULL, &t4442_TI, t4442_ITIs, NULL, &t1426__CustomAttributeCache, &t4442_TI, &t4442_0_0_0, &t4442_1_0_0, NULL, &t4442_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5361_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<System.String,System.Int32>
extern Il2CppType t34_0_0_0;
static ParameterInfo t5361_m26565_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t5361_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26565_MI = 
{
	"Remove", NULL, &t5361_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5361_m26565_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5361_MIs[] =
{
	&m26565_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4441_TI;
extern TypeInfo t4443_TI;
static TypeInfo* t5361_ITIs[] = 
{
	&t618_TI,
	&t4441_TI,
	&t4443_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5361_0_0_0;
extern Il2CppType t5361_1_0_0;
struct t5361;
extern TypeInfo t5361_TI;
extern Il2CppGenericClass t5361_GC;
extern CustomAttributesCache t1486__CustomAttributeCache;
TypeInfo t5361_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5361_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5361_TI, t5361_ITIs, NULL, &t1486__CustomAttributeCache, &t5361_TI, &t5361_0_0_0, &t5361_1_0_0, NULL, &t5361_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2481_TI;

#include "t2487.h"
#include "t2488.h"
extern TypeInfo t2481_TI;
extern TypeInfo t669_TI;
extern TypeInfo t7_TI;
extern TypeInfo t502_TI;
extern TypeInfo t60_TI;
extern TypeInfo t87_TI;
extern TypeInfo t62_TI;
extern TypeInfo t2487_TI;
extern TypeInfo t731_TI;
extern TypeInfo t53_TI;
extern TypeInfo t2488_TI;
#include "t2488MD.h"
#include "t2487MD.h"
extern MethodInfo m7515_MI;
extern MethodInfo m14181_MI;
extern MethodInfo m116_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m7125_MI;
extern MethodInfo m14192_MI;
extern MethodInfo m14225_MI;
extern MethodInfo m14224_MI;
extern MethodInfo m14185_MI;
extern MethodInfo m14187_MI;
extern MethodInfo m14243_MI;
extern MethodInfo m20066_MI;
extern MethodInfo m20067_MI;
extern MethodInfo m14227_MI;
struct t502;
 void m20066 (t502 * __this, t52 * p0, int32_t p1, t2488 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20066_MI;
struct t502;
 void m20067 (t502 * __this, t731* p0, int32_t p1, t2488 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20067_MI;


extern MethodInfo m14213_MI;
 void m14213 (t2481 * __this, t502 * p0, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral552, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m14214_MI;
 void m14214 (t2481 * __this, int32_t p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral553, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14215_MI;
 void m14215 (t2481 * __this, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral553, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14216_MI;
 bool m14216 (t2481 * __this, int32_t p0, MethodInfo* method){
	{
		t502 * L_0 = (__this->f0);
		bool L_1 = m14192(L_0, p0, &m14192_MI);
		return L_1;
	}
}
extern MethodInfo m14217_MI;
 bool m14217 (t2481 * __this, int32_t p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral553, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m14218_MI;
 t7* m14218 (t2481 * __this, MethodInfo* method){
	{
		t2487  L_0 = m14225(__this, &m14225_MI);
		t2487  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2487_TI), &L_1);
		return (t7*)L_2;
	}
}
extern MethodInfo m14219_MI;
 void m14219 (t2481 * __this, t52 * p0, int32_t p1, MethodInfo* method){
	t731* V_0 = {0};
	{
		V_0 = ((t731*)IsInst(p0, InitializedTypeInfo(&t731_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< t731*, int32_t >::Invoke(&m14224_MI, __this, V_0, p1);
		return;
	}

IL_0013:
	{
		t502 * L_0 = (__this->f0);
		m14185(L_0, p0, p1, &m14185_MI);
		t502 * L_1 = (__this->f0);
		t114 L_2 = { &m14187_MI };
		t2488 * L_3 = (t2488 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2488_TI));
		m14243(L_3, NULL, L_2, &m14243_MI);
		m20066(L_1, p0, p1, L_3, &m20066_MI);
		return;
	}
}
extern MethodInfo m14220_MI;
 t7 * m14220 (t2481 * __this, MethodInfo* method){
	{
		t2487  L_0 = m14225(__this, &m14225_MI);
		t2487  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2487_TI), &L_1);
		return (t7 *)L_2;
	}
}
extern MethodInfo m14221_MI;
 bool m14221 (t2481 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m14222_MI;
 bool m14222 (t2481 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m14223_MI;
 t7 * m14223 (t2481 * __this, MethodInfo* method){
	{
		t502 * L_0 = (__this->f0);
		t7 * L_1 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(&m7515_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m14224_MI;
 void m14224 (t2481 * __this, t731* p0, int32_t p1, MethodInfo* method){
	{
		t502 * L_0 = (__this->f0);
		m14185(L_0, (t52 *)(t52 *)p0, p1, &m14185_MI);
		t502 * L_1 = (__this->f0);
		t114 L_2 = { &m14187_MI };
		t2488 * L_3 = (t2488 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2488_TI));
		m14243(L_3, NULL, L_2, &m14243_MI);
		m20067(L_1, p0, p1, L_3, &m20067_MI);
		return;
	}
}
extern MethodInfo m14225_MI;
 t2487  m14225 (t2481 * __this, MethodInfo* method){
	{
		t502 * L_0 = (__this->f0);
		t2487  L_1 = {0};
		m14227(&L_1, L_0, &m14227_MI);
		return L_1;
	}
}
extern MethodInfo m14226_MI;
 int32_t m14226 (t2481 * __this, MethodInfo* method){
	{
		t502 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m14181_MI, L_0);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
extern Il2CppType t502_0_0_1;
FieldInfo t2481_f0_FieldInfo = 
{
	"dictionary", &t502_0_0_1, &t2481_TI, offsetof(t2481, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2481_FIs[] =
{
	&t2481_f0_FieldInfo,
	NULL
};
extern MethodInfo m14221_MI;
static PropertyInfo t2481____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t2481_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m14221_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14222_MI;
static PropertyInfo t2481____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2481_TI, "System.Collections.ICollection.IsSynchronized", &m14222_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14223_MI;
static PropertyInfo t2481____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2481_TI, "System.Collections.ICollection.SyncRoot", &m14223_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14226_MI;
static PropertyInfo t2481____Count_PropertyInfo = 
{
	&t2481_TI, "Count", &m14226_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2481_PIs[] =
{
	&t2481____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t2481____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2481____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2481____Count_PropertyInfo,
	NULL
};
extern Il2CppType t502_0_0_0;
static ParameterInfo t2481_m14213_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t502_0_0_0},
};
extern TypeInfo t2481_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14213_MI = 
{
	".ctor", (methodPointerType)&m14213, &t2481_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2481_m14213_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2481_m14214_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2481_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14214_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m14214, &t2481_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2481_m14214_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2481_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14215_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m14215, &t2481_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2481_m14216_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2481_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14216_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m14216, &t2481_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t2481_m14216_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2481_m14217_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2481_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14217_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m14217, &t2481_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t2481_m14217_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2481_TI;
extern Il2CppType t1997_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14218_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m14218, &t2481_TI, &t1997_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2481_m14219_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2481_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14219_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m14219, &t2481_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2481_m14219_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2481_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14220_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m14220, &t2481_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2481_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14221_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m14221, &t2481_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2481_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14222_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m14222, &t2481_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2481_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14223_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m14223, &t2481_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t731_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2481_m14224_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t731_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2481_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14224_MI = 
{
	"CopyTo", (methodPointerType)&m14224, &t2481_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2481_m14224_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2481_TI;
extern Il2CppType t2487_0_0_0;
extern void* RuntimeInvoker_t2487 (MethodInfo* method, void* obj, void** args);
MethodInfo m14225_MI = 
{
	"GetEnumerator", (methodPointerType)&m14225, &t2481_TI, &t2487_0_0_0, RuntimeInvoker_t2487, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2481_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14226_MI = 
{
	"get_Count", (methodPointerType)&m14226, &t2481_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2481_MIs[] =
{
	&m14213_MI,
	&m14214_MI,
	&m14215_MI,
	&m14216_MI,
	&m14217_MI,
	&m14218_MI,
	&m14219_MI,
	&m14220_MI,
	&m14221_MI,
	&m14222_MI,
	&m14223_MI,
	&m14224_MI,
	&m14225_MI,
	&m14226_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14220_MI;
extern MethodInfo m14226_MI;
extern MethodInfo m14222_MI;
extern MethodInfo m14223_MI;
extern MethodInfo m14219_MI;
extern MethodInfo m14226_MI;
extern MethodInfo m14221_MI;
extern MethodInfo m14214_MI;
extern MethodInfo m14215_MI;
extern MethodInfo m14216_MI;
extern MethodInfo m14224_MI;
extern MethodInfo m14217_MI;
extern MethodInfo m14218_MI;
static MethodInfo* t2481_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14220_MI,
	&m14226_MI,
	&m14222_MI,
	&m14223_MI,
	&m14219_MI,
	&m14226_MI,
	&m14221_MI,
	&m14214_MI,
	&m14215_MI,
	&m14216_MI,
	&m14224_MI,
	&m14217_MI,
	&m14218_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t3956_TI;
extern TypeInfo t3958_TI;
static TypeInfo* t2481_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t3956_TI,
	&t3958_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t3956_TI;
extern TypeInfo t3958_TI;
static Il2CppInterfaceOffsetPair t2481_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t3956_TI, 9},
	{ &t3958_TI, 16},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2481_0_0_0;
extern Il2CppType t2481_1_0_0;
extern TypeInfo t7_TI;
struct t2481;
extern TypeInfo t2481_TI;
extern Il2CppGenericClass t2481_GC;
extern TypeInfo t859_TI;
extern CustomAttributesCache t857__CustomAttributeCache;
TypeInfo t2481_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t2481_MIs, t2481_PIs, t2481_FIs, NULL, &t7_TI, NULL, &t859_TI, &t2481_TI, t2481_ITIs, t2481_VT, &t857__CustomAttributeCache, &t2481_TI, &t2481_0_0_0, &t2481_1_0_0, t2481_IOs, &t2481_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2481), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2487_TI;

extern TypeInfo t2487_TI;
extern TypeInfo t60_TI;
extern TypeInfo t2485_TI;
extern TypeInfo t53_TI;
extern TypeInfo t55_TI;
extern MethodInfo m14239_MI;
extern MethodInfo m14205_MI;
extern MethodInfo m14200_MI;
extern MethodInfo m14242_MI;
extern MethodInfo m14236_MI;


extern MethodInfo m14227_MI;
 void m14227 (t2487 * __this, t502 * p0, MethodInfo* method){
	{
		t2485  L_0 = m14200(p0, &m14200_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m14228_MI;
 t7 * m14228 (t2487 * __this, MethodInfo* method){
	{
		t2485 * L_0 = &(__this->f0);
		int32_t L_1 = m14239(L_0, &m14239_MI);
		int32_t L_2 = L_1;
		t7 * L_3 = Box(InitializedTypeInfo(&t60_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m14229_MI;
 void m14229 (t2487 * __this, MethodInfo* method){
	{
		t2485 * L_0 = &(__this->f0);
		m14242(L_0, &m14242_MI);
		return;
	}
}
extern MethodInfo m14230_MI;
 bool m14230 (t2487 * __this, MethodInfo* method){
	{
		t2485 * L_0 = &(__this->f0);
		bool L_1 = m14236(L_0, &m14236_MI);
		return L_1;
	}
}
extern MethodInfo m14231_MI;
 int32_t m14231 (t2487 * __this, MethodInfo* method){
	{
		t2485 * L_0 = &(__this->f0);
		t2483 * L_1 = &(L_0->f3);
		int32_t L_2 = m14205(L_1, &m14205_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>
extern Il2CppType t2485_0_0_1;
FieldInfo t2487_f0_FieldInfo = 
{
	"host_enumerator", &t2485_0_0_1, &t2487_TI, offsetof(t2487, f0) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2487_FIs[] =
{
	&t2487_f0_FieldInfo,
	NULL
};
extern MethodInfo m14228_MI;
static PropertyInfo t2487____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2487_TI, "System.Collections.IEnumerator.Current", &m14228_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14231_MI;
static PropertyInfo t2487____Current_PropertyInfo = 
{
	&t2487_TI, "Current", &m14231_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2487_PIs[] =
{
	&t2487____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2487____Current_PropertyInfo,
	NULL
};
extern Il2CppType t502_0_0_0;
static ParameterInfo t2487_m14227_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t502_0_0_0},
};
extern TypeInfo t2487_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14227_MI = 
{
	".ctor", (methodPointerType)&m14227, &t2487_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2487_m14227_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2487_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14228_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14228, &t2487_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2487_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14229_MI = 
{
	"Dispose", (methodPointerType)&m14229, &t2487_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2487_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14230_MI = 
{
	"MoveNext", (methodPointerType)&m14230, &t2487_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2487_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14231_MI = 
{
	"get_Current", (methodPointerType)&m14231, &t2487_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2487_MIs[] =
{
	&m14227_MI,
	&m14228_MI,
	&m14229_MI,
	&m14230_MI,
	&m14231_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14228_MI;
extern MethodInfo m14230_MI;
extern MethodInfo m14229_MI;
extern MethodInfo m14231_MI;
static MethodInfo* t2487_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14228_MI,
	&m14230_MI,
	&m14229_MI,
	&m14231_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t1997_TI;
static TypeInfo* t2487_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t1997_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t1997_TI;
static Il2CppInterfaceOffsetPair t2487_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t1997_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2487_0_0_0;
extern Il2CppType t2487_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2487_TI;
extern Il2CppGenericClass t2487_GC;
extern TypeInfo t857_TI;
TypeInfo t2487_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2487_MIs, t2487_PIs, t2487_FIs, NULL, &t159_TI, NULL, &t857_TI, &t2487_TI, t2487_ITIs, t2487_VT, &EmptyCustomAttributesCache, &t2487_TI, &t2487_0_0_0, &t2487_1_0_0, t2487_IOs, &t2487_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2487)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
