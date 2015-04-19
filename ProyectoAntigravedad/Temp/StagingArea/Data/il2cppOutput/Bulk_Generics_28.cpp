#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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
extern TypeInfo t3750_TI;

#include "t907.h"

#include "t52.h"

// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.GregorianCalendarTypes>
extern MethodInfo m28827_MI;
static PropertyInfo t3750____Current_PropertyInfo = 
{
	&t3750_TI, "Current", &m28827_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3750_PIs[] =
{
	&t3750____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3750_TI;
extern Il2CppType t907_0_0_0;
extern void* RuntimeInvoker_t907 (MethodInfo* method, void* obj, void** args);
MethodInfo m28827_MI = 
{
	"get_Current", NULL, &t3750_TI, &t907_0_0_0, RuntimeInvoker_t907, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3750_MIs[] =
{
	&m28827_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3750_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3750_0_0_0;
extern Il2CppType t3750_1_0_0;
struct t3750;
extern TypeInfo t3750_TI;
extern Il2CppGenericClass t3750_GC;
TypeInfo t3750_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3750_MIs, t3750_PIs, NULL, NULL, NULL, NULL, NULL, &t3750_TI, t3750_ITIs, NULL, &EmptyCustomAttributesCache, &t3750_TI, &t3750_0_0_0, &t3750_1_0_0, NULL, &t3750_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2825.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2825_TI;
#include "t2825MD.h"

#include "t7.h"
#include "t60.h"
#include "t34.h"
#include "t1295.h"
#include "t53.h"
#include "t55.h"
extern TypeInfo t2825_TI;
extern TypeInfo t907_TI;
extern TypeInfo t1295_TI;
#include "t1295MD.h"
#include "t52MD.h"
extern MethodInfo m16286_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m21925_MI;
struct t52;
#include "t88.h"
 int32_t m21925 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21925_MI;


extern MethodInfo m16282_MI;
 void m16282 (t2825 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16283_MI;
 t7 * m16283 (t2825 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16286(__this, &m16286_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t907_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16284_MI;
 void m16284 (t2825 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16285_MI;
 bool m16285 (t2825 * __this, MethodInfo* method){
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
extern MethodInfo m16286_MI;
 int32_t m16286 (t2825 * __this, MethodInfo* method){
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
		int32_t L_8 = m21925(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21925_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.GregorianCalendarTypes>
extern Il2CppType t52_0_0_1;
FieldInfo t2825_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2825_TI, offsetof(t2825, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2825_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2825_TI, offsetof(t2825, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2825_FIs[] =
{
	&t2825_f0_FieldInfo,
	&t2825_f1_FieldInfo,
	NULL
};
extern MethodInfo m16283_MI;
static PropertyInfo t2825____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2825_TI, "System.Collections.IEnumerator.Current", &m16283_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16286_MI;
static PropertyInfo t2825____Current_PropertyInfo = 
{
	&t2825_TI, "Current", &m16286_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2825_PIs[] =
{
	&t2825____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2825____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2825_m16282_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2825_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16282_MI = 
{
	".ctor", (methodPointerType)&m16282, &t2825_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2825_m16282_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2825_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16283_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16283, &t2825_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2825_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16284_MI = 
{
	"Dispose", (methodPointerType)&m16284, &t2825_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2825_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16285_MI = 
{
	"MoveNext", (methodPointerType)&m16285, &t2825_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2825_TI;
extern Il2CppType t907_0_0_0;
extern void* RuntimeInvoker_t907 (MethodInfo* method, void* obj, void** args);
MethodInfo m16286_MI = 
{
	"get_Current", (methodPointerType)&m16286, &t2825_TI, &t907_0_0_0, RuntimeInvoker_t907, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2825_MIs[] =
{
	&m16282_MI,
	&m16283_MI,
	&m16284_MI,
	&m16285_MI,
	&m16286_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16283_MI;
extern MethodInfo m16285_MI;
extern MethodInfo m16284_MI;
extern MethodInfo m16286_MI;
static MethodInfo* t2825_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16283_MI,
	&m16285_MI,
	&m16284_MI,
	&m16286_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3750_TI;
static TypeInfo* t2825_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3750_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3750_TI;
static Il2CppInterfaceOffsetPair t2825_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3750_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2825_0_0_0;
extern Il2CppType t2825_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2825_TI;
extern Il2CppGenericClass t2825_GC;
extern TypeInfo t52_TI;
TypeInfo t2825_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2825_MIs, t2825_PIs, t2825_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2825_TI, t2825_ITIs, t2825_VT, &EmptyCustomAttributesCache, &t2825_TI, &t2825_0_0_0, &t2825_1_0_0, t2825_IOs, &t2825_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2825)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4906_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.GregorianCalendarTypes>
extern MethodInfo m28828_MI;
static PropertyInfo t4906____Count_PropertyInfo = 
{
	&t4906_TI, "Count", &m28828_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28829_MI;
static PropertyInfo t4906____IsReadOnly_PropertyInfo = 
{
	&t4906_TI, "IsReadOnly", &m28829_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4906_PIs[] =
{
	&t4906____Count_PropertyInfo,
	&t4906____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4906_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28828_MI = 
{
	"get_Count", NULL, &t4906_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4906_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m28829_MI = 
{
	"get_IsReadOnly", NULL, &t4906_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t907_0_0_0;
static ParameterInfo t4906_m28830_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t907_0_0_0},
};
extern TypeInfo t4906_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28830_MI = 
{
	"Add", NULL, &t4906_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4906_m28830_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4906_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m28831_MI = 
{
	"Clear", NULL, &t4906_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t907_0_0_0;
static ParameterInfo t4906_m28832_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t907_0_0_0},
};
extern TypeInfo t4906_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28832_MI = 
{
	"Contains", NULL, &t4906_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4906_m28832_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3084_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4906_m28833_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3084_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4906_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28833_MI = 
{
	"CopyTo", NULL, &t4906_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4906_m28833_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t907_0_0_0;
static ParameterInfo t4906_m28834_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t907_0_0_0},
};
extern TypeInfo t4906_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28834_MI = 
{
	"Remove", NULL, &t4906_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4906_m28834_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4906_MIs[] =
{
	&m28828_MI,
	&m28829_MI,
	&m28830_MI,
	&m28831_MI,
	&m28832_MI,
	&m28833_MI,
	&m28834_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4908_TI;
static TypeInfo* t4906_ITIs[] = 
{
	&t618_TI,
	&t4908_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4906_0_0_0;
extern Il2CppType t4906_1_0_0;
struct t4906;
extern TypeInfo t4906_TI;
extern Il2CppGenericClass t4906_GC;
TypeInfo t4906_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4906_MIs, t4906_PIs, NULL, NULL, NULL, NULL, NULL, &t4906_TI, t4906_ITIs, NULL, &EmptyCustomAttributesCache, &t4906_TI, &t4906_0_0_0, &t4906_1_0_0, NULL, &t4906_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4908_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.GregorianCalendarTypes>
extern TypeInfo t4908_TI;
extern Il2CppType t3750_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28835_MI = 
{
	"GetEnumerator", NULL, &t4908_TI, &t3750_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4908_MIs[] =
{
	&m28835_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4908_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4908_0_0_0;
extern Il2CppType t4908_1_0_0;
struct t4908;
extern TypeInfo t4908_TI;
extern Il2CppGenericClass t4908_GC;
TypeInfo t4908_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4908_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4908_TI, t4908_ITIs, NULL, &EmptyCustomAttributesCache, &t4908_TI, &t4908_0_0_0, &t4908_1_0_0, NULL, &t4908_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4907_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.GregorianCalendarTypes>
extern MethodInfo m28836_MI;
extern MethodInfo m28837_MI;
static PropertyInfo t4907____Item_PropertyInfo = 
{
	&t4907_TI, "Item", &m28836_MI, &m28837_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4907_PIs[] =
{
	&t4907____Item_PropertyInfo,
	NULL
};
extern Il2CppType t907_0_0_0;
static ParameterInfo t4907_m28838_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t907_0_0_0},
};
extern TypeInfo t4907_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28838_MI = 
{
	"IndexOf", NULL, &t4907_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4907_m28838_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t907_0_0_0;
static ParameterInfo t4907_m28839_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t907_0_0_0},
};
extern TypeInfo t4907_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28839_MI = 
{
	"Insert", NULL, &t4907_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4907_m28839_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4907_m28840_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4907_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28840_MI = 
{
	"RemoveAt", NULL, &t4907_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4907_m28840_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4907_m28836_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4907_TI;
extern Il2CppType t907_0_0_0;
extern void* RuntimeInvoker_t907_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28836_MI = 
{
	"get_Item", NULL, &t4907_TI, &t907_0_0_0, RuntimeInvoker_t907_t60, t4907_m28836_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t907_0_0_0;
static ParameterInfo t4907_m28837_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t907_0_0_0},
};
extern TypeInfo t4907_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28837_MI = 
{
	"set_Item", NULL, &t4907_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4907_m28837_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4907_MIs[] =
{
	&m28838_MI,
	&m28839_MI,
	&m28840_MI,
	&m28836_MI,
	&m28837_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4906_TI;
extern TypeInfo t4908_TI;
static TypeInfo* t4907_ITIs[] = 
{
	&t618_TI,
	&t4906_TI,
	&t4908_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4907_0_0_0;
extern Il2CppType t4907_1_0_0;
struct t4907;
extern TypeInfo t4907_TI;
extern Il2CppGenericClass t4907_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4907_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4907_MIs, t4907_PIs, NULL, NULL, NULL, NULL, NULL, &t4907_TI, t4907_ITIs, NULL, &t1426__CustomAttributeCache, &t4907_TI, &t4907_0_0_0, &t4907_1_0_0, NULL, &t4907_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3751_TI;

#include "t724.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.NumberStyles>
extern MethodInfo m28841_MI;
static PropertyInfo t3751____Current_PropertyInfo = 
{
	&t3751_TI, "Current", &m28841_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3751_PIs[] =
{
	&t3751____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3751_TI;
extern Il2CppType t724_0_0_0;
extern void* RuntimeInvoker_t724 (MethodInfo* method, void* obj, void** args);
MethodInfo m28841_MI = 
{
	"get_Current", NULL, &t3751_TI, &t724_0_0_0, RuntimeInvoker_t724, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3751_MIs[] =
{
	&m28841_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3751_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3751_0_0_0;
extern Il2CppType t3751_1_0_0;
struct t3751;
extern TypeInfo t3751_TI;
extern Il2CppGenericClass t3751_GC;
TypeInfo t3751_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3751_MIs, t3751_PIs, NULL, NULL, NULL, NULL, NULL, &t3751_TI, t3751_ITIs, NULL, &EmptyCustomAttributesCache, &t3751_TI, &t3751_0_0_0, &t3751_1_0_0, NULL, &t3751_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2826.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2826_TI;
#include "t2826MD.h"

extern TypeInfo t2826_TI;
extern TypeInfo t724_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16291_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m21936_MI;
struct t52;
 int32_t m21936 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21936_MI;


extern MethodInfo m16287_MI;
 void m16287 (t2826 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16288_MI;
 t7 * m16288 (t2826 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16291(__this, &m16291_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t724_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16289_MI;
 void m16289 (t2826 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16290_MI;
 bool m16290 (t2826 * __this, MethodInfo* method){
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
extern MethodInfo m16291_MI;
 int32_t m16291 (t2826 * __this, MethodInfo* method){
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
		int32_t L_8 = m21936(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21936_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.NumberStyles>
extern Il2CppType t52_0_0_1;
FieldInfo t2826_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2826_TI, offsetof(t2826, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2826_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2826_TI, offsetof(t2826, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2826_FIs[] =
{
	&t2826_f0_FieldInfo,
	&t2826_f1_FieldInfo,
	NULL
};
extern MethodInfo m16288_MI;
static PropertyInfo t2826____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2826_TI, "System.Collections.IEnumerator.Current", &m16288_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16291_MI;
static PropertyInfo t2826____Current_PropertyInfo = 
{
	&t2826_TI, "Current", &m16291_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2826_PIs[] =
{
	&t2826____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2826____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2826_m16287_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2826_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16287_MI = 
{
	".ctor", (methodPointerType)&m16287, &t2826_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2826_m16287_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2826_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16288_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16288, &t2826_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2826_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16289_MI = 
{
	"Dispose", (methodPointerType)&m16289, &t2826_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2826_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16290_MI = 
{
	"MoveNext", (methodPointerType)&m16290, &t2826_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2826_TI;
extern Il2CppType t724_0_0_0;
extern void* RuntimeInvoker_t724 (MethodInfo* method, void* obj, void** args);
MethodInfo m16291_MI = 
{
	"get_Current", (methodPointerType)&m16291, &t2826_TI, &t724_0_0_0, RuntimeInvoker_t724, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2826_MIs[] =
{
	&m16287_MI,
	&m16288_MI,
	&m16289_MI,
	&m16290_MI,
	&m16291_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16288_MI;
extern MethodInfo m16290_MI;
extern MethodInfo m16289_MI;
extern MethodInfo m16291_MI;
static MethodInfo* t2826_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16288_MI,
	&m16290_MI,
	&m16289_MI,
	&m16291_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3751_TI;
static TypeInfo* t2826_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3751_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3751_TI;
static Il2CppInterfaceOffsetPair t2826_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3751_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2826_0_0_0;
extern Il2CppType t2826_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2826_TI;
extern Il2CppGenericClass t2826_GC;
extern TypeInfo t52_TI;
TypeInfo t2826_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2826_MIs, t2826_PIs, t2826_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2826_TI, t2826_ITIs, t2826_VT, &EmptyCustomAttributesCache, &t2826_TI, &t2826_0_0_0, &t2826_1_0_0, t2826_IOs, &t2826_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2826)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4909_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.NumberStyles>
extern MethodInfo m28842_MI;
static PropertyInfo t4909____Count_PropertyInfo = 
{
	&t4909_TI, "Count", &m28842_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28843_MI;
static PropertyInfo t4909____IsReadOnly_PropertyInfo = 
{
	&t4909_TI, "IsReadOnly", &m28843_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4909_PIs[] =
{
	&t4909____Count_PropertyInfo,
	&t4909____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4909_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28842_MI = 
{
	"get_Count", NULL, &t4909_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4909_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m28843_MI = 
{
	"get_IsReadOnly", NULL, &t4909_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t724_0_0_0;
static ParameterInfo t4909_m28844_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t724_0_0_0},
};
extern TypeInfo t4909_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28844_MI = 
{
	"Add", NULL, &t4909_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4909_m28844_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4909_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m28845_MI = 
{
	"Clear", NULL, &t4909_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t724_0_0_0;
static ParameterInfo t4909_m28846_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t724_0_0_0},
};
extern TypeInfo t4909_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28846_MI = 
{
	"Contains", NULL, &t4909_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4909_m28846_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3085_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4909_m28847_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3085_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4909_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28847_MI = 
{
	"CopyTo", NULL, &t4909_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4909_m28847_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t724_0_0_0;
static ParameterInfo t4909_m28848_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t724_0_0_0},
};
extern TypeInfo t4909_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28848_MI = 
{
	"Remove", NULL, &t4909_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4909_m28848_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4909_MIs[] =
{
	&m28842_MI,
	&m28843_MI,
	&m28844_MI,
	&m28845_MI,
	&m28846_MI,
	&m28847_MI,
	&m28848_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4911_TI;
static TypeInfo* t4909_ITIs[] = 
{
	&t618_TI,
	&t4911_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4909_0_0_0;
extern Il2CppType t4909_1_0_0;
struct t4909;
extern TypeInfo t4909_TI;
extern Il2CppGenericClass t4909_GC;
TypeInfo t4909_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4909_MIs, t4909_PIs, NULL, NULL, NULL, NULL, NULL, &t4909_TI, t4909_ITIs, NULL, &EmptyCustomAttributesCache, &t4909_TI, &t4909_0_0_0, &t4909_1_0_0, NULL, &t4909_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4911_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.NumberStyles>
extern TypeInfo t4911_TI;
extern Il2CppType t3751_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28849_MI = 
{
	"GetEnumerator", NULL, &t4911_TI, &t3751_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4911_MIs[] =
{
	&m28849_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4911_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4911_0_0_0;
extern Il2CppType t4911_1_0_0;
struct t4911;
extern TypeInfo t4911_TI;
extern Il2CppGenericClass t4911_GC;
TypeInfo t4911_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4911_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4911_TI, t4911_ITIs, NULL, &EmptyCustomAttributesCache, &t4911_TI, &t4911_0_0_0, &t4911_1_0_0, NULL, &t4911_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4910_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.NumberStyles>
extern MethodInfo m28850_MI;
extern MethodInfo m28851_MI;
static PropertyInfo t4910____Item_PropertyInfo = 
{
	&t4910_TI, "Item", &m28850_MI, &m28851_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4910_PIs[] =
{
	&t4910____Item_PropertyInfo,
	NULL
};
extern Il2CppType t724_0_0_0;
static ParameterInfo t4910_m28852_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t724_0_0_0},
};
extern TypeInfo t4910_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28852_MI = 
{
	"IndexOf", NULL, &t4910_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4910_m28852_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t724_0_0_0;
static ParameterInfo t4910_m28853_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t724_0_0_0},
};
extern TypeInfo t4910_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28853_MI = 
{
	"Insert", NULL, &t4910_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4910_m28853_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4910_m28854_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4910_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28854_MI = 
{
	"RemoveAt", NULL, &t4910_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4910_m28854_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4910_m28850_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4910_TI;
extern Il2CppType t724_0_0_0;
extern void* RuntimeInvoker_t724_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28850_MI = 
{
	"get_Item", NULL, &t4910_TI, &t724_0_0_0, RuntimeInvoker_t724_t60, t4910_m28850_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t724_0_0_0;
static ParameterInfo t4910_m28851_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t724_0_0_0},
};
extern TypeInfo t4910_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28851_MI = 
{
	"set_Item", NULL, &t4910_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4910_m28851_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4910_MIs[] =
{
	&m28852_MI,
	&m28853_MI,
	&m28854_MI,
	&m28850_MI,
	&m28851_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4909_TI;
extern TypeInfo t4911_TI;
static TypeInfo* t4910_ITIs[] = 
{
	&t618_TI,
	&t4909_TI,
	&t4911_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4910_0_0_0;
extern Il2CppType t4910_1_0_0;
struct t4910;
extern TypeInfo t4910_TI;
extern Il2CppGenericClass t4910_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4910_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4910_MIs, t4910_PIs, NULL, NULL, NULL, NULL, NULL, &t4910_TI, t4910_ITIs, NULL, &t1426__CustomAttributeCache, &t4910_TI, &t4910_0_0_0, &t4910_1_0_0, NULL, &t4910_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3752_TI;

#include "t728.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.UnicodeCategory>
extern MethodInfo m28855_MI;
static PropertyInfo t3752____Current_PropertyInfo = 
{
	&t3752_TI, "Current", &m28855_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3752_PIs[] =
{
	&t3752____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3752_TI;
extern Il2CppType t728_0_0_0;
extern void* RuntimeInvoker_t728 (MethodInfo* method, void* obj, void** args);
MethodInfo m28855_MI = 
{
	"get_Current", NULL, &t3752_TI, &t728_0_0_0, RuntimeInvoker_t728, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3752_MIs[] =
{
	&m28855_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3752_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3752_0_0_0;
extern Il2CppType t3752_1_0_0;
struct t3752;
extern TypeInfo t3752_TI;
extern Il2CppGenericClass t3752_GC;
TypeInfo t3752_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3752_MIs, t3752_PIs, NULL, NULL, NULL, NULL, NULL, &t3752_TI, t3752_ITIs, NULL, &EmptyCustomAttributesCache, &t3752_TI, &t3752_0_0_0, &t3752_1_0_0, NULL, &t3752_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2827.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2827_TI;
#include "t2827MD.h"

extern TypeInfo t2827_TI;
extern TypeInfo t728_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16296_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m21947_MI;
struct t52;
 int32_t m21947 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21947_MI;


extern MethodInfo m16292_MI;
 void m16292 (t2827 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16293_MI;
 t7 * m16293 (t2827 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16296(__this, &m16296_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t728_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16294_MI;
 void m16294 (t2827 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16295_MI;
 bool m16295 (t2827 * __this, MethodInfo* method){
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
extern MethodInfo m16296_MI;
 int32_t m16296 (t2827 * __this, MethodInfo* method){
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
		int32_t L_8 = m21947(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21947_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.UnicodeCategory>
extern Il2CppType t52_0_0_1;
FieldInfo t2827_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2827_TI, offsetof(t2827, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2827_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2827_TI, offsetof(t2827, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2827_FIs[] =
{
	&t2827_f0_FieldInfo,
	&t2827_f1_FieldInfo,
	NULL
};
extern MethodInfo m16293_MI;
static PropertyInfo t2827____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2827_TI, "System.Collections.IEnumerator.Current", &m16293_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16296_MI;
static PropertyInfo t2827____Current_PropertyInfo = 
{
	&t2827_TI, "Current", &m16296_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2827_PIs[] =
{
	&t2827____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2827____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2827_m16292_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2827_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16292_MI = 
{
	".ctor", (methodPointerType)&m16292, &t2827_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2827_m16292_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2827_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16293_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16293, &t2827_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2827_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16294_MI = 
{
	"Dispose", (methodPointerType)&m16294, &t2827_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2827_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16295_MI = 
{
	"MoveNext", (methodPointerType)&m16295, &t2827_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2827_TI;
extern Il2CppType t728_0_0_0;
extern void* RuntimeInvoker_t728 (MethodInfo* method, void* obj, void** args);
MethodInfo m16296_MI = 
{
	"get_Current", (methodPointerType)&m16296, &t2827_TI, &t728_0_0_0, RuntimeInvoker_t728, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2827_MIs[] =
{
	&m16292_MI,
	&m16293_MI,
	&m16294_MI,
	&m16295_MI,
	&m16296_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16293_MI;
extern MethodInfo m16295_MI;
extern MethodInfo m16294_MI;
extern MethodInfo m16296_MI;
static MethodInfo* t2827_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16293_MI,
	&m16295_MI,
	&m16294_MI,
	&m16296_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3752_TI;
static TypeInfo* t2827_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3752_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3752_TI;
static Il2CppInterfaceOffsetPair t2827_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3752_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2827_0_0_0;
extern Il2CppType t2827_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2827_TI;
extern Il2CppGenericClass t2827_GC;
extern TypeInfo t52_TI;
TypeInfo t2827_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2827_MIs, t2827_PIs, t2827_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2827_TI, t2827_ITIs, t2827_VT, &EmptyCustomAttributesCache, &t2827_TI, &t2827_0_0_0, &t2827_1_0_0, t2827_IOs, &t2827_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2827)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4912_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.UnicodeCategory>
extern MethodInfo m28856_MI;
static PropertyInfo t4912____Count_PropertyInfo = 
{
	&t4912_TI, "Count", &m28856_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28857_MI;
static PropertyInfo t4912____IsReadOnly_PropertyInfo = 
{
	&t4912_TI, "IsReadOnly", &m28857_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4912_PIs[] =
{
	&t4912____Count_PropertyInfo,
	&t4912____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4912_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28856_MI = 
{
	"get_Count", NULL, &t4912_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4912_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m28857_MI = 
{
	"get_IsReadOnly", NULL, &t4912_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t728_0_0_0;
static ParameterInfo t4912_m28858_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t728_0_0_0},
};
extern TypeInfo t4912_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28858_MI = 
{
	"Add", NULL, &t4912_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4912_m28858_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4912_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m28859_MI = 
{
	"Clear", NULL, &t4912_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t728_0_0_0;
static ParameterInfo t4912_m28860_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t728_0_0_0},
};
extern TypeInfo t4912_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28860_MI = 
{
	"Contains", NULL, &t4912_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4912_m28860_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3086_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4912_m28861_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3086_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4912_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28861_MI = 
{
	"CopyTo", NULL, &t4912_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4912_m28861_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t728_0_0_0;
static ParameterInfo t4912_m28862_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t728_0_0_0},
};
extern TypeInfo t4912_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28862_MI = 
{
	"Remove", NULL, &t4912_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4912_m28862_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4912_MIs[] =
{
	&m28856_MI,
	&m28857_MI,
	&m28858_MI,
	&m28859_MI,
	&m28860_MI,
	&m28861_MI,
	&m28862_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4914_TI;
static TypeInfo* t4912_ITIs[] = 
{
	&t618_TI,
	&t4914_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4912_0_0_0;
extern Il2CppType t4912_1_0_0;
struct t4912;
extern TypeInfo t4912_TI;
extern Il2CppGenericClass t4912_GC;
TypeInfo t4912_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4912_MIs, t4912_PIs, NULL, NULL, NULL, NULL, NULL, &t4912_TI, t4912_ITIs, NULL, &EmptyCustomAttributesCache, &t4912_TI, &t4912_0_0_0, &t4912_1_0_0, NULL, &t4912_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4914_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.UnicodeCategory>
extern TypeInfo t4914_TI;
extern Il2CppType t3752_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28863_MI = 
{
	"GetEnumerator", NULL, &t4914_TI, &t3752_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4914_MIs[] =
{
	&m28863_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4914_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4914_0_0_0;
extern Il2CppType t4914_1_0_0;
struct t4914;
extern TypeInfo t4914_TI;
extern Il2CppGenericClass t4914_GC;
TypeInfo t4914_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4914_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4914_TI, t4914_ITIs, NULL, &EmptyCustomAttributesCache, &t4914_TI, &t4914_0_0_0, &t4914_1_0_0, NULL, &t4914_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4913_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.UnicodeCategory>
extern MethodInfo m28864_MI;
extern MethodInfo m28865_MI;
static PropertyInfo t4913____Item_PropertyInfo = 
{
	&t4913_TI, "Item", &m28864_MI, &m28865_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4913_PIs[] =
{
	&t4913____Item_PropertyInfo,
	NULL
};
extern Il2CppType t728_0_0_0;
static ParameterInfo t4913_m28866_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t728_0_0_0},
};
extern TypeInfo t4913_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28866_MI = 
{
	"IndexOf", NULL, &t4913_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4913_m28866_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t728_0_0_0;
static ParameterInfo t4913_m28867_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t728_0_0_0},
};
extern TypeInfo t4913_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28867_MI = 
{
	"Insert", NULL, &t4913_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4913_m28867_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4913_m28868_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4913_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28868_MI = 
{
	"RemoveAt", NULL, &t4913_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4913_m28868_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4913_m28864_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4913_TI;
extern Il2CppType t728_0_0_0;
extern void* RuntimeInvoker_t728_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28864_MI = 
{
	"get_Item", NULL, &t4913_TI, &t728_0_0_0, RuntimeInvoker_t728_t60, t4913_m28864_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t728_0_0_0;
static ParameterInfo t4913_m28865_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t728_0_0_0},
};
extern TypeInfo t4913_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28865_MI = 
{
	"set_Item", NULL, &t4913_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4913_m28865_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4913_MIs[] =
{
	&m28866_MI,
	&m28867_MI,
	&m28868_MI,
	&m28864_MI,
	&m28865_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4912_TI;
extern TypeInfo t4914_TI;
static TypeInfo* t4913_ITIs[] = 
{
	&t618_TI,
	&t4912_TI,
	&t4914_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4913_0_0_0;
extern Il2CppType t4913_1_0_0;
struct t4913;
extern TypeInfo t4913_TI;
extern Il2CppGenericClass t4913_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4913_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4913_MIs, t4913_PIs, NULL, NULL, NULL, NULL, NULL, &t4913_TI, t4913_ITIs, NULL, &t1426__CustomAttributeCache, &t4913_TI, &t4913_0_0_0, &t4913_1_0_0, NULL, &t4913_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3753_TI;

#include "t923.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.FileAccess>
extern MethodInfo m28869_MI;
static PropertyInfo t3753____Current_PropertyInfo = 
{
	&t3753_TI, "Current", &m28869_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3753_PIs[] =
{
	&t3753____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3753_TI;
extern Il2CppType t923_0_0_0;
extern void* RuntimeInvoker_t923 (MethodInfo* method, void* obj, void** args);
MethodInfo m28869_MI = 
{
	"get_Current", NULL, &t3753_TI, &t923_0_0_0, RuntimeInvoker_t923, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3753_MIs[] =
{
	&m28869_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3753_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3753_0_0_0;
extern Il2CppType t3753_1_0_0;
struct t3753;
extern TypeInfo t3753_TI;
extern Il2CppGenericClass t3753_GC;
TypeInfo t3753_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3753_MIs, t3753_PIs, NULL, NULL, NULL, NULL, NULL, &t3753_TI, t3753_ITIs, NULL, &EmptyCustomAttributesCache, &t3753_TI, &t3753_0_0_0, &t3753_1_0_0, NULL, &t3753_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2828.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2828_TI;
#include "t2828MD.h"

extern TypeInfo t2828_TI;
extern TypeInfo t923_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16301_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m21958_MI;
struct t52;
 int32_t m21958 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21958_MI;


extern MethodInfo m16297_MI;
 void m16297 (t2828 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16298_MI;
 t7 * m16298 (t2828 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16301(__this, &m16301_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t923_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16299_MI;
 void m16299 (t2828 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16300_MI;
 bool m16300 (t2828 * __this, MethodInfo* method){
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
extern MethodInfo m16301_MI;
 int32_t m16301 (t2828 * __this, MethodInfo* method){
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
		int32_t L_8 = m21958(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21958_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.FileAccess>
extern Il2CppType t52_0_0_1;
FieldInfo t2828_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2828_TI, offsetof(t2828, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2828_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2828_TI, offsetof(t2828, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2828_FIs[] =
{
	&t2828_f0_FieldInfo,
	&t2828_f1_FieldInfo,
	NULL
};
extern MethodInfo m16298_MI;
static PropertyInfo t2828____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2828_TI, "System.Collections.IEnumerator.Current", &m16298_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16301_MI;
static PropertyInfo t2828____Current_PropertyInfo = 
{
	&t2828_TI, "Current", &m16301_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2828_PIs[] =
{
	&t2828____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2828____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2828_m16297_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2828_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16297_MI = 
{
	".ctor", (methodPointerType)&m16297, &t2828_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2828_m16297_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2828_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16298_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16298, &t2828_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2828_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16299_MI = 
{
	"Dispose", (methodPointerType)&m16299, &t2828_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2828_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16300_MI = 
{
	"MoveNext", (methodPointerType)&m16300, &t2828_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2828_TI;
extern Il2CppType t923_0_0_0;
extern void* RuntimeInvoker_t923 (MethodInfo* method, void* obj, void** args);
MethodInfo m16301_MI = 
{
	"get_Current", (methodPointerType)&m16301, &t2828_TI, &t923_0_0_0, RuntimeInvoker_t923, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2828_MIs[] =
{
	&m16297_MI,
	&m16298_MI,
	&m16299_MI,
	&m16300_MI,
	&m16301_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16298_MI;
extern MethodInfo m16300_MI;
extern MethodInfo m16299_MI;
extern MethodInfo m16301_MI;
static MethodInfo* t2828_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16298_MI,
	&m16300_MI,
	&m16299_MI,
	&m16301_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3753_TI;
static TypeInfo* t2828_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3753_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3753_TI;
static Il2CppInterfaceOffsetPair t2828_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3753_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2828_0_0_0;
extern Il2CppType t2828_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2828_TI;
extern Il2CppGenericClass t2828_GC;
extern TypeInfo t52_TI;
TypeInfo t2828_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2828_MIs, t2828_PIs, t2828_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2828_TI, t2828_ITIs, t2828_VT, &EmptyCustomAttributesCache, &t2828_TI, &t2828_0_0_0, &t2828_1_0_0, t2828_IOs, &t2828_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2828)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4915_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.FileAccess>
extern MethodInfo m28870_MI;
static PropertyInfo t4915____Count_PropertyInfo = 
{
	&t4915_TI, "Count", &m28870_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28871_MI;
static PropertyInfo t4915____IsReadOnly_PropertyInfo = 
{
	&t4915_TI, "IsReadOnly", &m28871_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4915_PIs[] =
{
	&t4915____Count_PropertyInfo,
	&t4915____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4915_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28870_MI = 
{
	"get_Count", NULL, &t4915_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4915_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m28871_MI = 
{
	"get_IsReadOnly", NULL, &t4915_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t923_0_0_0;
static ParameterInfo t4915_m28872_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t923_0_0_0},
};
extern TypeInfo t4915_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28872_MI = 
{
	"Add", NULL, &t4915_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4915_m28872_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4915_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m28873_MI = 
{
	"Clear", NULL, &t4915_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t923_0_0_0;
static ParameterInfo t4915_m28874_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t923_0_0_0},
};
extern TypeInfo t4915_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28874_MI = 
{
	"Contains", NULL, &t4915_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4915_m28874_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3087_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4915_m28875_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3087_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4915_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28875_MI = 
{
	"CopyTo", NULL, &t4915_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4915_m28875_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t923_0_0_0;
static ParameterInfo t4915_m28876_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t923_0_0_0},
};
extern TypeInfo t4915_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28876_MI = 
{
	"Remove", NULL, &t4915_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4915_m28876_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4915_MIs[] =
{
	&m28870_MI,
	&m28871_MI,
	&m28872_MI,
	&m28873_MI,
	&m28874_MI,
	&m28875_MI,
	&m28876_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4917_TI;
static TypeInfo* t4915_ITIs[] = 
{
	&t618_TI,
	&t4917_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4915_0_0_0;
extern Il2CppType t4915_1_0_0;
struct t4915;
extern TypeInfo t4915_TI;
extern Il2CppGenericClass t4915_GC;
TypeInfo t4915_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4915_MIs, t4915_PIs, NULL, NULL, NULL, NULL, NULL, &t4915_TI, t4915_ITIs, NULL, &EmptyCustomAttributesCache, &t4915_TI, &t4915_0_0_0, &t4915_1_0_0, NULL, &t4915_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4917_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.FileAccess>
extern TypeInfo t4917_TI;
extern Il2CppType t3753_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28877_MI = 
{
	"GetEnumerator", NULL, &t4917_TI, &t3753_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4917_MIs[] =
{
	&m28877_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4917_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4917_0_0_0;
extern Il2CppType t4917_1_0_0;
struct t4917;
extern TypeInfo t4917_TI;
extern Il2CppGenericClass t4917_GC;
TypeInfo t4917_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4917_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4917_TI, t4917_ITIs, NULL, &EmptyCustomAttributesCache, &t4917_TI, &t4917_0_0_0, &t4917_1_0_0, NULL, &t4917_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4916_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.FileAccess>
extern MethodInfo m28878_MI;
extern MethodInfo m28879_MI;
static PropertyInfo t4916____Item_PropertyInfo = 
{
	&t4916_TI, "Item", &m28878_MI, &m28879_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4916_PIs[] =
{
	&t4916____Item_PropertyInfo,
	NULL
};
extern Il2CppType t923_0_0_0;
static ParameterInfo t4916_m28880_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t923_0_0_0},
};
extern TypeInfo t4916_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28880_MI = 
{
	"IndexOf", NULL, &t4916_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4916_m28880_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t923_0_0_0;
static ParameterInfo t4916_m28881_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t923_0_0_0},
};
extern TypeInfo t4916_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28881_MI = 
{
	"Insert", NULL, &t4916_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4916_m28881_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4916_m28882_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4916_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28882_MI = 
{
	"RemoveAt", NULL, &t4916_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4916_m28882_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4916_m28878_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4916_TI;
extern Il2CppType t923_0_0_0;
extern void* RuntimeInvoker_t923_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28878_MI = 
{
	"get_Item", NULL, &t4916_TI, &t923_0_0_0, RuntimeInvoker_t923_t60, t4916_m28878_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t923_0_0_0;
static ParameterInfo t4916_m28879_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t923_0_0_0},
};
extern TypeInfo t4916_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28879_MI = 
{
	"set_Item", NULL, &t4916_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4916_m28879_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4916_MIs[] =
{
	&m28880_MI,
	&m28881_MI,
	&m28882_MI,
	&m28878_MI,
	&m28879_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4915_TI;
extern TypeInfo t4917_TI;
static TypeInfo* t4916_ITIs[] = 
{
	&t618_TI,
	&t4915_TI,
	&t4917_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4916_0_0_0;
extern Il2CppType t4916_1_0_0;
struct t4916;
extern TypeInfo t4916_TI;
extern Il2CppGenericClass t4916_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4916_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4916_MIs, t4916_PIs, NULL, NULL, NULL, NULL, NULL, &t4916_TI, t4916_ITIs, NULL, &t1426__CustomAttributeCache, &t4916_TI, &t4916_0_0_0, &t4916_1_0_0, NULL, &t4916_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3754_TI;

#include "t924.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.FileAttributes>
extern MethodInfo m28883_MI;
static PropertyInfo t3754____Current_PropertyInfo = 
{
	&t3754_TI, "Current", &m28883_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3754_PIs[] =
{
	&t3754____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3754_TI;
extern Il2CppType t924_0_0_0;
extern void* RuntimeInvoker_t924 (MethodInfo* method, void* obj, void** args);
MethodInfo m28883_MI = 
{
	"get_Current", NULL, &t3754_TI, &t924_0_0_0, RuntimeInvoker_t924, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3754_MIs[] =
{
	&m28883_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3754_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3754_0_0_0;
extern Il2CppType t3754_1_0_0;
struct t3754;
extern TypeInfo t3754_TI;
extern Il2CppGenericClass t3754_GC;
TypeInfo t3754_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3754_MIs, t3754_PIs, NULL, NULL, NULL, NULL, NULL, &t3754_TI, t3754_ITIs, NULL, &EmptyCustomAttributesCache, &t3754_TI, &t3754_0_0_0, &t3754_1_0_0, NULL, &t3754_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2829.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2829_TI;
#include "t2829MD.h"

extern TypeInfo t2829_TI;
extern TypeInfo t924_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16306_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m21969_MI;
struct t52;
 int32_t m21969 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21969_MI;


extern MethodInfo m16302_MI;
 void m16302 (t2829 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16303_MI;
 t7 * m16303 (t2829 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16306(__this, &m16306_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t924_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16304_MI;
 void m16304 (t2829 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16305_MI;
 bool m16305 (t2829 * __this, MethodInfo* method){
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
extern MethodInfo m16306_MI;
 int32_t m16306 (t2829 * __this, MethodInfo* method){
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
		int32_t L_8 = m21969(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21969_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.FileAttributes>
extern Il2CppType t52_0_0_1;
FieldInfo t2829_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2829_TI, offsetof(t2829, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2829_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2829_TI, offsetof(t2829, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2829_FIs[] =
{
	&t2829_f0_FieldInfo,
	&t2829_f1_FieldInfo,
	NULL
};
extern MethodInfo m16303_MI;
static PropertyInfo t2829____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2829_TI, "System.Collections.IEnumerator.Current", &m16303_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16306_MI;
static PropertyInfo t2829____Current_PropertyInfo = 
{
	&t2829_TI, "Current", &m16306_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2829_PIs[] =
{
	&t2829____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2829____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2829_m16302_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2829_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16302_MI = 
{
	".ctor", (methodPointerType)&m16302, &t2829_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2829_m16302_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2829_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16303_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16303, &t2829_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2829_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16304_MI = 
{
	"Dispose", (methodPointerType)&m16304, &t2829_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2829_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16305_MI = 
{
	"MoveNext", (methodPointerType)&m16305, &t2829_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2829_TI;
extern Il2CppType t924_0_0_0;
extern void* RuntimeInvoker_t924 (MethodInfo* method, void* obj, void** args);
MethodInfo m16306_MI = 
{
	"get_Current", (methodPointerType)&m16306, &t2829_TI, &t924_0_0_0, RuntimeInvoker_t924, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2829_MIs[] =
{
	&m16302_MI,
	&m16303_MI,
	&m16304_MI,
	&m16305_MI,
	&m16306_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16303_MI;
extern MethodInfo m16305_MI;
extern MethodInfo m16304_MI;
extern MethodInfo m16306_MI;
static MethodInfo* t2829_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16303_MI,
	&m16305_MI,
	&m16304_MI,
	&m16306_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3754_TI;
static TypeInfo* t2829_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3754_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3754_TI;
static Il2CppInterfaceOffsetPair t2829_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3754_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2829_0_0_0;
extern Il2CppType t2829_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2829_TI;
extern Il2CppGenericClass t2829_GC;
extern TypeInfo t52_TI;
TypeInfo t2829_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2829_MIs, t2829_PIs, t2829_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2829_TI, t2829_ITIs, t2829_VT, &EmptyCustomAttributesCache, &t2829_TI, &t2829_0_0_0, &t2829_1_0_0, t2829_IOs, &t2829_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2829)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4918_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.FileAttributes>
extern MethodInfo m28884_MI;
static PropertyInfo t4918____Count_PropertyInfo = 
{
	&t4918_TI, "Count", &m28884_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28885_MI;
static PropertyInfo t4918____IsReadOnly_PropertyInfo = 
{
	&t4918_TI, "IsReadOnly", &m28885_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4918_PIs[] =
{
	&t4918____Count_PropertyInfo,
	&t4918____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4918_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28884_MI = 
{
	"get_Count", NULL, &t4918_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4918_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m28885_MI = 
{
	"get_IsReadOnly", NULL, &t4918_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t924_0_0_0;
static ParameterInfo t4918_m28886_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t924_0_0_0},
};
extern TypeInfo t4918_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28886_MI = 
{
	"Add", NULL, &t4918_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4918_m28886_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4918_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m28887_MI = 
{
	"Clear", NULL, &t4918_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t924_0_0_0;
static ParameterInfo t4918_m28888_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t924_0_0_0},
};
extern TypeInfo t4918_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28888_MI = 
{
	"Contains", NULL, &t4918_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4918_m28888_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3088_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4918_m28889_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3088_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4918_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28889_MI = 
{
	"CopyTo", NULL, &t4918_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4918_m28889_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t924_0_0_0;
static ParameterInfo t4918_m28890_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t924_0_0_0},
};
extern TypeInfo t4918_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28890_MI = 
{
	"Remove", NULL, &t4918_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4918_m28890_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4918_MIs[] =
{
	&m28884_MI,
	&m28885_MI,
	&m28886_MI,
	&m28887_MI,
	&m28888_MI,
	&m28889_MI,
	&m28890_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4920_TI;
static TypeInfo* t4918_ITIs[] = 
{
	&t618_TI,
	&t4920_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4918_0_0_0;
extern Il2CppType t4918_1_0_0;
struct t4918;
extern TypeInfo t4918_TI;
extern Il2CppGenericClass t4918_GC;
TypeInfo t4918_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4918_MIs, t4918_PIs, NULL, NULL, NULL, NULL, NULL, &t4918_TI, t4918_ITIs, NULL, &EmptyCustomAttributesCache, &t4918_TI, &t4918_0_0_0, &t4918_1_0_0, NULL, &t4918_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4920_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.FileAttributes>
extern TypeInfo t4920_TI;
extern Il2CppType t3754_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28891_MI = 
{
	"GetEnumerator", NULL, &t4920_TI, &t3754_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4920_MIs[] =
{
	&m28891_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4920_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4920_0_0_0;
extern Il2CppType t4920_1_0_0;
struct t4920;
extern TypeInfo t4920_TI;
extern Il2CppGenericClass t4920_GC;
TypeInfo t4920_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4920_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4920_TI, t4920_ITIs, NULL, &EmptyCustomAttributesCache, &t4920_TI, &t4920_0_0_0, &t4920_1_0_0, NULL, &t4920_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4919_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.FileAttributes>
extern MethodInfo m28892_MI;
extern MethodInfo m28893_MI;
static PropertyInfo t4919____Item_PropertyInfo = 
{
	&t4919_TI, "Item", &m28892_MI, &m28893_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4919_PIs[] =
{
	&t4919____Item_PropertyInfo,
	NULL
};
extern Il2CppType t924_0_0_0;
static ParameterInfo t4919_m28894_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t924_0_0_0},
};
extern TypeInfo t4919_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28894_MI = 
{
	"IndexOf", NULL, &t4919_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4919_m28894_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t924_0_0_0;
static ParameterInfo t4919_m28895_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t924_0_0_0},
};
extern TypeInfo t4919_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28895_MI = 
{
	"Insert", NULL, &t4919_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4919_m28895_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4919_m28896_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4919_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28896_MI = 
{
	"RemoveAt", NULL, &t4919_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4919_m28896_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4919_m28892_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4919_TI;
extern Il2CppType t924_0_0_0;
extern void* RuntimeInvoker_t924_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28892_MI = 
{
	"get_Item", NULL, &t4919_TI, &t924_0_0_0, RuntimeInvoker_t924_t60, t4919_m28892_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t924_0_0_0;
static ParameterInfo t4919_m28893_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t924_0_0_0},
};
extern TypeInfo t4919_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28893_MI = 
{
	"set_Item", NULL, &t4919_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4919_m28893_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4919_MIs[] =
{
	&m28894_MI,
	&m28895_MI,
	&m28896_MI,
	&m28892_MI,
	&m28893_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4918_TI;
extern TypeInfo t4920_TI;
static TypeInfo* t4919_ITIs[] = 
{
	&t618_TI,
	&t4918_TI,
	&t4920_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4919_0_0_0;
extern Il2CppType t4919_1_0_0;
struct t4919;
extern TypeInfo t4919_TI;
extern Il2CppGenericClass t4919_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4919_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4919_MIs, t4919_PIs, NULL, NULL, NULL, NULL, NULL, &t4919_TI, t4919_ITIs, NULL, &t1426__CustomAttributeCache, &t4919_TI, &t4919_0_0_0, &t4919_1_0_0, NULL, &t4919_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3755_TI;

#include "t922.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.FileMode>
extern MethodInfo m28897_MI;
static PropertyInfo t3755____Current_PropertyInfo = 
{
	&t3755_TI, "Current", &m28897_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3755_PIs[] =
{
	&t3755____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3755_TI;
extern Il2CppType t922_0_0_0;
extern void* RuntimeInvoker_t922 (MethodInfo* method, void* obj, void** args);
MethodInfo m28897_MI = 
{
	"get_Current", NULL, &t3755_TI, &t922_0_0_0, RuntimeInvoker_t922, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3755_MIs[] =
{
	&m28897_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3755_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3755_0_0_0;
extern Il2CppType t3755_1_0_0;
struct t3755;
extern TypeInfo t3755_TI;
extern Il2CppGenericClass t3755_GC;
TypeInfo t3755_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3755_MIs, t3755_PIs, NULL, NULL, NULL, NULL, NULL, &t3755_TI, t3755_ITIs, NULL, &EmptyCustomAttributesCache, &t3755_TI, &t3755_0_0_0, &t3755_1_0_0, NULL, &t3755_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2830.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2830_TI;
#include "t2830MD.h"

extern TypeInfo t2830_TI;
extern TypeInfo t922_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16311_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m21980_MI;
struct t52;
 int32_t m21980 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21980_MI;


extern MethodInfo m16307_MI;
 void m16307 (t2830 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16308_MI;
 t7 * m16308 (t2830 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16311(__this, &m16311_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t922_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16309_MI;
 void m16309 (t2830 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16310_MI;
 bool m16310 (t2830 * __this, MethodInfo* method){
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
extern MethodInfo m16311_MI;
 int32_t m16311 (t2830 * __this, MethodInfo* method){
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
		int32_t L_8 = m21980(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21980_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.FileMode>
extern Il2CppType t52_0_0_1;
FieldInfo t2830_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2830_TI, offsetof(t2830, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2830_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2830_TI, offsetof(t2830, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2830_FIs[] =
{
	&t2830_f0_FieldInfo,
	&t2830_f1_FieldInfo,
	NULL
};
extern MethodInfo m16308_MI;
static PropertyInfo t2830____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2830_TI, "System.Collections.IEnumerator.Current", &m16308_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16311_MI;
static PropertyInfo t2830____Current_PropertyInfo = 
{
	&t2830_TI, "Current", &m16311_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2830_PIs[] =
{
	&t2830____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2830____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2830_m16307_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2830_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16307_MI = 
{
	".ctor", (methodPointerType)&m16307, &t2830_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2830_m16307_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2830_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16308_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16308, &t2830_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2830_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16309_MI = 
{
	"Dispose", (methodPointerType)&m16309, &t2830_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2830_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16310_MI = 
{
	"MoveNext", (methodPointerType)&m16310, &t2830_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2830_TI;
extern Il2CppType t922_0_0_0;
extern void* RuntimeInvoker_t922 (MethodInfo* method, void* obj, void** args);
MethodInfo m16311_MI = 
{
	"get_Current", (methodPointerType)&m16311, &t2830_TI, &t922_0_0_0, RuntimeInvoker_t922, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2830_MIs[] =
{
	&m16307_MI,
	&m16308_MI,
	&m16309_MI,
	&m16310_MI,
	&m16311_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16308_MI;
extern MethodInfo m16310_MI;
extern MethodInfo m16309_MI;
extern MethodInfo m16311_MI;
static MethodInfo* t2830_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16308_MI,
	&m16310_MI,
	&m16309_MI,
	&m16311_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3755_TI;
static TypeInfo* t2830_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3755_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3755_TI;
static Il2CppInterfaceOffsetPair t2830_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3755_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2830_0_0_0;
extern Il2CppType t2830_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2830_TI;
extern Il2CppGenericClass t2830_GC;
extern TypeInfo t52_TI;
TypeInfo t2830_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2830_MIs, t2830_PIs, t2830_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2830_TI, t2830_ITIs, t2830_VT, &EmptyCustomAttributesCache, &t2830_TI, &t2830_0_0_0, &t2830_1_0_0, t2830_IOs, &t2830_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2830)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4921_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.FileMode>
extern MethodInfo m28898_MI;
static PropertyInfo t4921____Count_PropertyInfo = 
{
	&t4921_TI, "Count", &m28898_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28899_MI;
static PropertyInfo t4921____IsReadOnly_PropertyInfo = 
{
	&t4921_TI, "IsReadOnly", &m28899_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4921_PIs[] =
{
	&t4921____Count_PropertyInfo,
	&t4921____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4921_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28898_MI = 
{
	"get_Count", NULL, &t4921_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4921_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m28899_MI = 
{
	"get_IsReadOnly", NULL, &t4921_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t922_0_0_0;
static ParameterInfo t4921_m28900_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t922_0_0_0},
};
extern TypeInfo t4921_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28900_MI = 
{
	"Add", NULL, &t4921_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4921_m28900_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4921_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m28901_MI = 
{
	"Clear", NULL, &t4921_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t922_0_0_0;
static ParameterInfo t4921_m28902_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t922_0_0_0},
};
extern TypeInfo t4921_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28902_MI = 
{
	"Contains", NULL, &t4921_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4921_m28902_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3089_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4921_m28903_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3089_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4921_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28903_MI = 
{
	"CopyTo", NULL, &t4921_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4921_m28903_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t922_0_0_0;
static ParameterInfo t4921_m28904_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t922_0_0_0},
};
extern TypeInfo t4921_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28904_MI = 
{
	"Remove", NULL, &t4921_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4921_m28904_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4921_MIs[] =
{
	&m28898_MI,
	&m28899_MI,
	&m28900_MI,
	&m28901_MI,
	&m28902_MI,
	&m28903_MI,
	&m28904_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4923_TI;
static TypeInfo* t4921_ITIs[] = 
{
	&t618_TI,
	&t4923_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4921_0_0_0;
extern Il2CppType t4921_1_0_0;
struct t4921;
extern TypeInfo t4921_TI;
extern Il2CppGenericClass t4921_GC;
TypeInfo t4921_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4921_MIs, t4921_PIs, NULL, NULL, NULL, NULL, NULL, &t4921_TI, t4921_ITIs, NULL, &EmptyCustomAttributesCache, &t4921_TI, &t4921_0_0_0, &t4921_1_0_0, NULL, &t4921_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4923_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.FileMode>
extern TypeInfo t4923_TI;
extern Il2CppType t3755_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28905_MI = 
{
	"GetEnumerator", NULL, &t4923_TI, &t3755_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4923_MIs[] =
{
	&m28905_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4923_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4923_0_0_0;
extern Il2CppType t4923_1_0_0;
struct t4923;
extern TypeInfo t4923_TI;
extern Il2CppGenericClass t4923_GC;
TypeInfo t4923_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4923_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4923_TI, t4923_ITIs, NULL, &EmptyCustomAttributesCache, &t4923_TI, &t4923_0_0_0, &t4923_1_0_0, NULL, &t4923_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4922_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.FileMode>
extern MethodInfo m28906_MI;
extern MethodInfo m28907_MI;
static PropertyInfo t4922____Item_PropertyInfo = 
{
	&t4922_TI, "Item", &m28906_MI, &m28907_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4922_PIs[] =
{
	&t4922____Item_PropertyInfo,
	NULL
};
extern Il2CppType t922_0_0_0;
static ParameterInfo t4922_m28908_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t922_0_0_0},
};
extern TypeInfo t4922_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28908_MI = 
{
	"IndexOf", NULL, &t4922_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4922_m28908_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t922_0_0_0;
static ParameterInfo t4922_m28909_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t922_0_0_0},
};
extern TypeInfo t4922_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28909_MI = 
{
	"Insert", NULL, &t4922_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4922_m28909_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4922_m28910_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4922_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28910_MI = 
{
	"RemoveAt", NULL, &t4922_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4922_m28910_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4922_m28906_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4922_TI;
extern Il2CppType t922_0_0_0;
extern void* RuntimeInvoker_t922_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28906_MI = 
{
	"get_Item", NULL, &t4922_TI, &t922_0_0_0, RuntimeInvoker_t922_t60, t4922_m28906_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t922_0_0_0;
static ParameterInfo t4922_m28907_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t922_0_0_0},
};
extern TypeInfo t4922_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28907_MI = 
{
	"set_Item", NULL, &t4922_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4922_m28907_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4922_MIs[] =
{
	&m28908_MI,
	&m28909_MI,
	&m28910_MI,
	&m28906_MI,
	&m28907_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4921_TI;
extern TypeInfo t4923_TI;
static TypeInfo* t4922_ITIs[] = 
{
	&t618_TI,
	&t4921_TI,
	&t4923_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4922_0_0_0;
extern Il2CppType t4922_1_0_0;
struct t4922;
extern TypeInfo t4922_TI;
extern Il2CppGenericClass t4922_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4922_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4922_MIs, t4922_PIs, NULL, NULL, NULL, NULL, NULL, &t4922_TI, t4922_ITIs, NULL, &t1426__CustomAttributeCache, &t4922_TI, &t4922_0_0_0, &t4922_1_0_0, NULL, &t4922_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3756_TI;

#include "t926.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.FileOptions>
extern MethodInfo m28911_MI;
static PropertyInfo t3756____Current_PropertyInfo = 
{
	&t3756_TI, "Current", &m28911_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3756_PIs[] =
{
	&t3756____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3756_TI;
extern Il2CppType t926_0_0_0;
extern void* RuntimeInvoker_t926 (MethodInfo* method, void* obj, void** args);
MethodInfo m28911_MI = 
{
	"get_Current", NULL, &t3756_TI, &t926_0_0_0, RuntimeInvoker_t926, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3756_MIs[] =
{
	&m28911_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3756_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3756_0_0_0;
extern Il2CppType t3756_1_0_0;
struct t3756;
extern TypeInfo t3756_TI;
extern Il2CppGenericClass t3756_GC;
TypeInfo t3756_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3756_MIs, t3756_PIs, NULL, NULL, NULL, NULL, NULL, &t3756_TI, t3756_ITIs, NULL, &EmptyCustomAttributesCache, &t3756_TI, &t3756_0_0_0, &t3756_1_0_0, NULL, &t3756_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2831.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2831_TI;
#include "t2831MD.h"

extern TypeInfo t2831_TI;
extern TypeInfo t926_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16316_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m21991_MI;
struct t52;
 int32_t m21991 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21991_MI;


extern MethodInfo m16312_MI;
 void m16312 (t2831 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16313_MI;
 t7 * m16313 (t2831 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16316(__this, &m16316_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t926_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16314_MI;
 void m16314 (t2831 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16315_MI;
 bool m16315 (t2831 * __this, MethodInfo* method){
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
extern MethodInfo m16316_MI;
 int32_t m16316 (t2831 * __this, MethodInfo* method){
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
		int32_t L_8 = m21991(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21991_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.FileOptions>
extern Il2CppType t52_0_0_1;
FieldInfo t2831_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2831_TI, offsetof(t2831, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2831_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2831_TI, offsetof(t2831, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2831_FIs[] =
{
	&t2831_f0_FieldInfo,
	&t2831_f1_FieldInfo,
	NULL
};
extern MethodInfo m16313_MI;
static PropertyInfo t2831____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2831_TI, "System.Collections.IEnumerator.Current", &m16313_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16316_MI;
static PropertyInfo t2831____Current_PropertyInfo = 
{
	&t2831_TI, "Current", &m16316_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2831_PIs[] =
{
	&t2831____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2831____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2831_m16312_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2831_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16312_MI = 
{
	".ctor", (methodPointerType)&m16312, &t2831_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2831_m16312_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2831_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16313_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16313, &t2831_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2831_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16314_MI = 
{
	"Dispose", (methodPointerType)&m16314, &t2831_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2831_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16315_MI = 
{
	"MoveNext", (methodPointerType)&m16315, &t2831_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2831_TI;
extern Il2CppType t926_0_0_0;
extern void* RuntimeInvoker_t926 (MethodInfo* method, void* obj, void** args);
MethodInfo m16316_MI = 
{
	"get_Current", (methodPointerType)&m16316, &t2831_TI, &t926_0_0_0, RuntimeInvoker_t926, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2831_MIs[] =
{
	&m16312_MI,
	&m16313_MI,
	&m16314_MI,
	&m16315_MI,
	&m16316_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16313_MI;
extern MethodInfo m16315_MI;
extern MethodInfo m16314_MI;
extern MethodInfo m16316_MI;
static MethodInfo* t2831_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16313_MI,
	&m16315_MI,
	&m16314_MI,
	&m16316_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3756_TI;
static TypeInfo* t2831_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3756_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3756_TI;
static Il2CppInterfaceOffsetPair t2831_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3756_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2831_0_0_0;
extern Il2CppType t2831_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2831_TI;
extern Il2CppGenericClass t2831_GC;
extern TypeInfo t52_TI;
TypeInfo t2831_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2831_MIs, t2831_PIs, t2831_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2831_TI, t2831_ITIs, t2831_VT, &EmptyCustomAttributesCache, &t2831_TI, &t2831_0_0_0, &t2831_1_0_0, t2831_IOs, &t2831_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2831)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4924_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.FileOptions>
extern MethodInfo m28912_MI;
static PropertyInfo t4924____Count_PropertyInfo = 
{
	&t4924_TI, "Count", &m28912_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28913_MI;
static PropertyInfo t4924____IsReadOnly_PropertyInfo = 
{
	&t4924_TI, "IsReadOnly", &m28913_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4924_PIs[] =
{
	&t4924____Count_PropertyInfo,
	&t4924____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4924_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28912_MI = 
{
	"get_Count", NULL, &t4924_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4924_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m28913_MI = 
{
	"get_IsReadOnly", NULL, &t4924_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t926_0_0_0;
static ParameterInfo t4924_m28914_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t926_0_0_0},
};
extern TypeInfo t4924_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28914_MI = 
{
	"Add", NULL, &t4924_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4924_m28914_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4924_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m28915_MI = 
{
	"Clear", NULL, &t4924_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t926_0_0_0;
static ParameterInfo t4924_m28916_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t926_0_0_0},
};
extern TypeInfo t4924_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28916_MI = 
{
	"Contains", NULL, &t4924_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4924_m28916_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3090_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4924_m28917_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3090_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4924_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28917_MI = 
{
	"CopyTo", NULL, &t4924_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4924_m28917_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t926_0_0_0;
static ParameterInfo t4924_m28918_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t926_0_0_0},
};
extern TypeInfo t4924_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28918_MI = 
{
	"Remove", NULL, &t4924_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4924_m28918_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4924_MIs[] =
{
	&m28912_MI,
	&m28913_MI,
	&m28914_MI,
	&m28915_MI,
	&m28916_MI,
	&m28917_MI,
	&m28918_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4926_TI;
static TypeInfo* t4924_ITIs[] = 
{
	&t618_TI,
	&t4926_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4924_0_0_0;
extern Il2CppType t4924_1_0_0;
struct t4924;
extern TypeInfo t4924_TI;
extern Il2CppGenericClass t4924_GC;
TypeInfo t4924_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4924_MIs, t4924_PIs, NULL, NULL, NULL, NULL, NULL, &t4924_TI, t4924_ITIs, NULL, &EmptyCustomAttributesCache, &t4924_TI, &t4924_0_0_0, &t4924_1_0_0, NULL, &t4924_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4926_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.FileOptions>
extern TypeInfo t4926_TI;
extern Il2CppType t3756_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28919_MI = 
{
	"GetEnumerator", NULL, &t4926_TI, &t3756_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4926_MIs[] =
{
	&m28919_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4926_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4926_0_0_0;
extern Il2CppType t4926_1_0_0;
struct t4926;
extern TypeInfo t4926_TI;
extern Il2CppGenericClass t4926_GC;
TypeInfo t4926_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4926_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4926_TI, t4926_ITIs, NULL, &EmptyCustomAttributesCache, &t4926_TI, &t4926_0_0_0, &t4926_1_0_0, NULL, &t4926_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4925_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.FileOptions>
extern MethodInfo m28920_MI;
extern MethodInfo m28921_MI;
static PropertyInfo t4925____Item_PropertyInfo = 
{
	&t4925_TI, "Item", &m28920_MI, &m28921_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4925_PIs[] =
{
	&t4925____Item_PropertyInfo,
	NULL
};
extern Il2CppType t926_0_0_0;
static ParameterInfo t4925_m28922_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t926_0_0_0},
};
extern TypeInfo t4925_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28922_MI = 
{
	"IndexOf", NULL, &t4925_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4925_m28922_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t926_0_0_0;
static ParameterInfo t4925_m28923_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t926_0_0_0},
};
extern TypeInfo t4925_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28923_MI = 
{
	"Insert", NULL, &t4925_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4925_m28923_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4925_m28924_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4925_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28924_MI = 
{
	"RemoveAt", NULL, &t4925_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4925_m28924_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4925_m28920_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4925_TI;
extern Il2CppType t926_0_0_0;
extern void* RuntimeInvoker_t926_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28920_MI = 
{
	"get_Item", NULL, &t4925_TI, &t926_0_0_0, RuntimeInvoker_t926_t60, t4925_m28920_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t926_0_0_0;
static ParameterInfo t4925_m28921_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t926_0_0_0},
};
extern TypeInfo t4925_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28921_MI = 
{
	"set_Item", NULL, &t4925_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4925_m28921_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4925_MIs[] =
{
	&m28922_MI,
	&m28923_MI,
	&m28924_MI,
	&m28920_MI,
	&m28921_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4924_TI;
extern TypeInfo t4926_TI;
static TypeInfo* t4925_ITIs[] = 
{
	&t618_TI,
	&t4924_TI,
	&t4926_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4925_0_0_0;
extern Il2CppType t4925_1_0_0;
struct t4925;
extern TypeInfo t4925_TI;
extern Il2CppGenericClass t4925_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4925_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4925_MIs, t4925_PIs, NULL, NULL, NULL, NULL, NULL, &t4925_TI, t4925_ITIs, NULL, &t1426__CustomAttributeCache, &t4925_TI, &t4925_0_0_0, &t4925_1_0_0, NULL, &t4925_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3757_TI;

#include "t927.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.FileShare>
extern MethodInfo m28925_MI;
static PropertyInfo t3757____Current_PropertyInfo = 
{
	&t3757_TI, "Current", &m28925_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3757_PIs[] =
{
	&t3757____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3757_TI;
extern Il2CppType t927_0_0_0;
extern void* RuntimeInvoker_t927 (MethodInfo* method, void* obj, void** args);
MethodInfo m28925_MI = 
{
	"get_Current", NULL, &t3757_TI, &t927_0_0_0, RuntimeInvoker_t927, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3757_MIs[] =
{
	&m28925_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3757_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3757_0_0_0;
extern Il2CppType t3757_1_0_0;
struct t3757;
extern TypeInfo t3757_TI;
extern Il2CppGenericClass t3757_GC;
TypeInfo t3757_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3757_MIs, t3757_PIs, NULL, NULL, NULL, NULL, NULL, &t3757_TI, t3757_ITIs, NULL, &EmptyCustomAttributesCache, &t3757_TI, &t3757_0_0_0, &t3757_1_0_0, NULL, &t3757_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2832.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2832_TI;
#include "t2832MD.h"

extern TypeInfo t2832_TI;
extern TypeInfo t927_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16321_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22002_MI;
struct t52;
 int32_t m22002 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22002_MI;


extern MethodInfo m16317_MI;
 void m16317 (t2832 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16318_MI;
 t7 * m16318 (t2832 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16321(__this, &m16321_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t927_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16319_MI;
 void m16319 (t2832 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16320_MI;
 bool m16320 (t2832 * __this, MethodInfo* method){
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
extern MethodInfo m16321_MI;
 int32_t m16321 (t2832 * __this, MethodInfo* method){
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
		int32_t L_8 = m22002(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22002_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.FileShare>
extern Il2CppType t52_0_0_1;
FieldInfo t2832_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2832_TI, offsetof(t2832, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2832_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2832_TI, offsetof(t2832, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2832_FIs[] =
{
	&t2832_f0_FieldInfo,
	&t2832_f1_FieldInfo,
	NULL
};
extern MethodInfo m16318_MI;
static PropertyInfo t2832____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2832_TI, "System.Collections.IEnumerator.Current", &m16318_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16321_MI;
static PropertyInfo t2832____Current_PropertyInfo = 
{
	&t2832_TI, "Current", &m16321_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2832_PIs[] =
{
	&t2832____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2832____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2832_m16317_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2832_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16317_MI = 
{
	".ctor", (methodPointerType)&m16317, &t2832_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2832_m16317_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2832_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16318_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16318, &t2832_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2832_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16319_MI = 
{
	"Dispose", (methodPointerType)&m16319, &t2832_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2832_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16320_MI = 
{
	"MoveNext", (methodPointerType)&m16320, &t2832_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2832_TI;
extern Il2CppType t927_0_0_0;
extern void* RuntimeInvoker_t927 (MethodInfo* method, void* obj, void** args);
MethodInfo m16321_MI = 
{
	"get_Current", (methodPointerType)&m16321, &t2832_TI, &t927_0_0_0, RuntimeInvoker_t927, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2832_MIs[] =
{
	&m16317_MI,
	&m16318_MI,
	&m16319_MI,
	&m16320_MI,
	&m16321_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16318_MI;
extern MethodInfo m16320_MI;
extern MethodInfo m16319_MI;
extern MethodInfo m16321_MI;
static MethodInfo* t2832_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16318_MI,
	&m16320_MI,
	&m16319_MI,
	&m16321_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3757_TI;
static TypeInfo* t2832_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3757_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3757_TI;
static Il2CppInterfaceOffsetPair t2832_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3757_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2832_0_0_0;
extern Il2CppType t2832_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2832_TI;
extern Il2CppGenericClass t2832_GC;
extern TypeInfo t52_TI;
TypeInfo t2832_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2832_MIs, t2832_PIs, t2832_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2832_TI, t2832_ITIs, t2832_VT, &EmptyCustomAttributesCache, &t2832_TI, &t2832_0_0_0, &t2832_1_0_0, t2832_IOs, &t2832_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2832)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4927_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.FileShare>
extern MethodInfo m28926_MI;
static PropertyInfo t4927____Count_PropertyInfo = 
{
	&t4927_TI, "Count", &m28926_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28927_MI;
static PropertyInfo t4927____IsReadOnly_PropertyInfo = 
{
	&t4927_TI, "IsReadOnly", &m28927_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4927_PIs[] =
{
	&t4927____Count_PropertyInfo,
	&t4927____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4927_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28926_MI = 
{
	"get_Count", NULL, &t4927_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4927_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m28927_MI = 
{
	"get_IsReadOnly", NULL, &t4927_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t927_0_0_0;
static ParameterInfo t4927_m28928_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t927_0_0_0},
};
extern TypeInfo t4927_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28928_MI = 
{
	"Add", NULL, &t4927_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4927_m28928_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4927_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m28929_MI = 
{
	"Clear", NULL, &t4927_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t927_0_0_0;
static ParameterInfo t4927_m28930_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t927_0_0_0},
};
extern TypeInfo t4927_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28930_MI = 
{
	"Contains", NULL, &t4927_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4927_m28930_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3091_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4927_m28931_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3091_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4927_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28931_MI = 
{
	"CopyTo", NULL, &t4927_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4927_m28931_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t927_0_0_0;
static ParameterInfo t4927_m28932_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t927_0_0_0},
};
extern TypeInfo t4927_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28932_MI = 
{
	"Remove", NULL, &t4927_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4927_m28932_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4927_MIs[] =
{
	&m28926_MI,
	&m28927_MI,
	&m28928_MI,
	&m28929_MI,
	&m28930_MI,
	&m28931_MI,
	&m28932_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4929_TI;
static TypeInfo* t4927_ITIs[] = 
{
	&t618_TI,
	&t4929_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4927_0_0_0;
extern Il2CppType t4927_1_0_0;
struct t4927;
extern TypeInfo t4927_TI;
extern Il2CppGenericClass t4927_GC;
TypeInfo t4927_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4927_MIs, t4927_PIs, NULL, NULL, NULL, NULL, NULL, &t4927_TI, t4927_ITIs, NULL, &EmptyCustomAttributesCache, &t4927_TI, &t4927_0_0_0, &t4927_1_0_0, NULL, &t4927_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4929_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.FileShare>
extern TypeInfo t4929_TI;
extern Il2CppType t3757_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28933_MI = 
{
	"GetEnumerator", NULL, &t4929_TI, &t3757_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4929_MIs[] =
{
	&m28933_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4929_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4929_0_0_0;
extern Il2CppType t4929_1_0_0;
struct t4929;
extern TypeInfo t4929_TI;
extern Il2CppGenericClass t4929_GC;
TypeInfo t4929_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4929_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4929_TI, t4929_ITIs, NULL, &EmptyCustomAttributesCache, &t4929_TI, &t4929_0_0_0, &t4929_1_0_0, NULL, &t4929_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4928_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.FileShare>
extern MethodInfo m28934_MI;
extern MethodInfo m28935_MI;
static PropertyInfo t4928____Item_PropertyInfo = 
{
	&t4928_TI, "Item", &m28934_MI, &m28935_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4928_PIs[] =
{
	&t4928____Item_PropertyInfo,
	NULL
};
extern Il2CppType t927_0_0_0;
static ParameterInfo t4928_m28936_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t927_0_0_0},
};
extern TypeInfo t4928_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28936_MI = 
{
	"IndexOf", NULL, &t4928_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4928_m28936_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t927_0_0_0;
static ParameterInfo t4928_m28937_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t927_0_0_0},
};
extern TypeInfo t4928_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28937_MI = 
{
	"Insert", NULL, &t4928_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4928_m28937_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4928_m28938_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4928_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28938_MI = 
{
	"RemoveAt", NULL, &t4928_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4928_m28938_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4928_m28934_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4928_TI;
extern Il2CppType t927_0_0_0;
extern void* RuntimeInvoker_t927_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28934_MI = 
{
	"get_Item", NULL, &t4928_TI, &t927_0_0_0, RuntimeInvoker_t927_t60, t4928_m28934_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t927_0_0_0;
static ParameterInfo t4928_m28935_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t927_0_0_0},
};
extern TypeInfo t4928_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28935_MI = 
{
	"set_Item", NULL, &t4928_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4928_m28935_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4928_MIs[] =
{
	&m28936_MI,
	&m28937_MI,
	&m28938_MI,
	&m28934_MI,
	&m28935_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4927_TI;
extern TypeInfo t4929_TI;
static TypeInfo* t4928_ITIs[] = 
{
	&t618_TI,
	&t4927_TI,
	&t4929_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4928_0_0_0;
extern Il2CppType t4928_1_0_0;
struct t4928;
extern TypeInfo t4928_TI;
extern Il2CppGenericClass t4928_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4928_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4928_MIs, t4928_PIs, NULL, NULL, NULL, NULL, NULL, &t4928_TI, t4928_ITIs, NULL, &t1426__CustomAttributeCache, &t4928_TI, &t4928_0_0_0, &t4928_1_0_0, NULL, &t4928_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3758_TI;

#include "t935.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.MonoFileType>
extern MethodInfo m28939_MI;
static PropertyInfo t3758____Current_PropertyInfo = 
{
	&t3758_TI, "Current", &m28939_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3758_PIs[] =
{
	&t3758____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3758_TI;
extern Il2CppType t935_0_0_0;
extern void* RuntimeInvoker_t935 (MethodInfo* method, void* obj, void** args);
MethodInfo m28939_MI = 
{
	"get_Current", NULL, &t3758_TI, &t935_0_0_0, RuntimeInvoker_t935, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3758_MIs[] =
{
	&m28939_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3758_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3758_0_0_0;
extern Il2CppType t3758_1_0_0;
struct t3758;
extern TypeInfo t3758_TI;
extern Il2CppGenericClass t3758_GC;
TypeInfo t3758_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3758_MIs, t3758_PIs, NULL, NULL, NULL, NULL, NULL, &t3758_TI, t3758_ITIs, NULL, &EmptyCustomAttributesCache, &t3758_TI, &t3758_0_0_0, &t3758_1_0_0, NULL, &t3758_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2833.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2833_TI;
#include "t2833MD.h"

extern TypeInfo t2833_TI;
extern TypeInfo t935_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16326_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22013_MI;
struct t52;
 int32_t m22013 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22013_MI;


extern MethodInfo m16322_MI;
 void m16322 (t2833 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16323_MI;
 t7 * m16323 (t2833 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16326(__this, &m16326_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t935_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16324_MI;
 void m16324 (t2833 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16325_MI;
 bool m16325 (t2833 * __this, MethodInfo* method){
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
extern MethodInfo m16326_MI;
 int32_t m16326 (t2833 * __this, MethodInfo* method){
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
		int32_t L_8 = m22013(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22013_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.MonoFileType>
extern Il2CppType t52_0_0_1;
FieldInfo t2833_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2833_TI, offsetof(t2833, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2833_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2833_TI, offsetof(t2833, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2833_FIs[] =
{
	&t2833_f0_FieldInfo,
	&t2833_f1_FieldInfo,
	NULL
};
extern MethodInfo m16323_MI;
static PropertyInfo t2833____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2833_TI, "System.Collections.IEnumerator.Current", &m16323_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16326_MI;
static PropertyInfo t2833____Current_PropertyInfo = 
{
	&t2833_TI, "Current", &m16326_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2833_PIs[] =
{
	&t2833____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2833____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2833_m16322_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2833_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16322_MI = 
{
	".ctor", (methodPointerType)&m16322, &t2833_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2833_m16322_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2833_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16323_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16323, &t2833_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2833_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16324_MI = 
{
	"Dispose", (methodPointerType)&m16324, &t2833_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2833_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16325_MI = 
{
	"MoveNext", (methodPointerType)&m16325, &t2833_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2833_TI;
extern Il2CppType t935_0_0_0;
extern void* RuntimeInvoker_t935 (MethodInfo* method, void* obj, void** args);
MethodInfo m16326_MI = 
{
	"get_Current", (methodPointerType)&m16326, &t2833_TI, &t935_0_0_0, RuntimeInvoker_t935, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2833_MIs[] =
{
	&m16322_MI,
	&m16323_MI,
	&m16324_MI,
	&m16325_MI,
	&m16326_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16323_MI;
extern MethodInfo m16325_MI;
extern MethodInfo m16324_MI;
extern MethodInfo m16326_MI;
static MethodInfo* t2833_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16323_MI,
	&m16325_MI,
	&m16324_MI,
	&m16326_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3758_TI;
static TypeInfo* t2833_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3758_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3758_TI;
static Il2CppInterfaceOffsetPair t2833_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3758_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2833_0_0_0;
extern Il2CppType t2833_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2833_TI;
extern Il2CppGenericClass t2833_GC;
extern TypeInfo t52_TI;
TypeInfo t2833_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2833_MIs, t2833_PIs, t2833_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2833_TI, t2833_ITIs, t2833_VT, &EmptyCustomAttributesCache, &t2833_TI, &t2833_0_0_0, &t2833_1_0_0, t2833_IOs, &t2833_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2833)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4930_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.MonoFileType>
extern MethodInfo m28940_MI;
static PropertyInfo t4930____Count_PropertyInfo = 
{
	&t4930_TI, "Count", &m28940_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28941_MI;
static PropertyInfo t4930____IsReadOnly_PropertyInfo = 
{
	&t4930_TI, "IsReadOnly", &m28941_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4930_PIs[] =
{
	&t4930____Count_PropertyInfo,
	&t4930____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4930_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28940_MI = 
{
	"get_Count", NULL, &t4930_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4930_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m28941_MI = 
{
	"get_IsReadOnly", NULL, &t4930_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t935_0_0_0;
static ParameterInfo t4930_m28942_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t935_0_0_0},
};
extern TypeInfo t4930_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28942_MI = 
{
	"Add", NULL, &t4930_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4930_m28942_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4930_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m28943_MI = 
{
	"Clear", NULL, &t4930_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t935_0_0_0;
static ParameterInfo t4930_m28944_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t935_0_0_0},
};
extern TypeInfo t4930_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28944_MI = 
{
	"Contains", NULL, &t4930_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4930_m28944_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3092_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4930_m28945_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3092_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4930_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28945_MI = 
{
	"CopyTo", NULL, &t4930_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4930_m28945_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t935_0_0_0;
static ParameterInfo t4930_m28946_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t935_0_0_0},
};
extern TypeInfo t4930_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28946_MI = 
{
	"Remove", NULL, &t4930_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4930_m28946_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4930_MIs[] =
{
	&m28940_MI,
	&m28941_MI,
	&m28942_MI,
	&m28943_MI,
	&m28944_MI,
	&m28945_MI,
	&m28946_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4932_TI;
static TypeInfo* t4930_ITIs[] = 
{
	&t618_TI,
	&t4932_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4930_0_0_0;
extern Il2CppType t4930_1_0_0;
struct t4930;
extern TypeInfo t4930_TI;
extern Il2CppGenericClass t4930_GC;
TypeInfo t4930_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4930_MIs, t4930_PIs, NULL, NULL, NULL, NULL, NULL, &t4930_TI, t4930_ITIs, NULL, &EmptyCustomAttributesCache, &t4930_TI, &t4930_0_0_0, &t4930_1_0_0, NULL, &t4930_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4932_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.MonoFileType>
extern TypeInfo t4932_TI;
extern Il2CppType t3758_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28947_MI = 
{
	"GetEnumerator", NULL, &t4932_TI, &t3758_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4932_MIs[] =
{
	&m28947_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4932_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4932_0_0_0;
extern Il2CppType t4932_1_0_0;
struct t4932;
extern TypeInfo t4932_TI;
extern Il2CppGenericClass t4932_GC;
TypeInfo t4932_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4932_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4932_TI, t4932_ITIs, NULL, &EmptyCustomAttributesCache, &t4932_TI, &t4932_0_0_0, &t4932_1_0_0, NULL, &t4932_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4931_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.MonoFileType>
extern MethodInfo m28948_MI;
extern MethodInfo m28949_MI;
static PropertyInfo t4931____Item_PropertyInfo = 
{
	&t4931_TI, "Item", &m28948_MI, &m28949_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4931_PIs[] =
{
	&t4931____Item_PropertyInfo,
	NULL
};
extern Il2CppType t935_0_0_0;
static ParameterInfo t4931_m28950_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t935_0_0_0},
};
extern TypeInfo t4931_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28950_MI = 
{
	"IndexOf", NULL, &t4931_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4931_m28950_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t935_0_0_0;
static ParameterInfo t4931_m28951_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t935_0_0_0},
};
extern TypeInfo t4931_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28951_MI = 
{
	"Insert", NULL, &t4931_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4931_m28951_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4931_m28952_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4931_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28952_MI = 
{
	"RemoveAt", NULL, &t4931_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4931_m28952_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4931_m28948_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4931_TI;
extern Il2CppType t935_0_0_0;
extern void* RuntimeInvoker_t935_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28948_MI = 
{
	"get_Item", NULL, &t4931_TI, &t935_0_0_0, RuntimeInvoker_t935_t60, t4931_m28948_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t935_0_0_0;
static ParameterInfo t4931_m28949_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t935_0_0_0},
};
extern TypeInfo t4931_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28949_MI = 
{
	"set_Item", NULL, &t4931_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4931_m28949_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4931_MIs[] =
{
	&m28950_MI,
	&m28951_MI,
	&m28952_MI,
	&m28948_MI,
	&m28949_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4930_TI;
extern TypeInfo t4932_TI;
static TypeInfo* t4931_ITIs[] = 
{
	&t618_TI,
	&t4930_TI,
	&t4932_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4931_0_0_0;
extern Il2CppType t4931_1_0_0;
struct t4931;
extern TypeInfo t4931_TI;
extern Il2CppGenericClass t4931_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4931_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4931_MIs, t4931_PIs, NULL, NULL, NULL, NULL, NULL, &t4931_TI, t4931_ITIs, NULL, &t1426__CustomAttributeCache, &t4931_TI, &t4931_0_0_0, &t4931_1_0_0, NULL, &t4931_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3759_TI;

#include "t937.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.MonoIOError>
extern MethodInfo m28953_MI;
static PropertyInfo t3759____Current_PropertyInfo = 
{
	&t3759_TI, "Current", &m28953_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3759_PIs[] =
{
	&t3759____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3759_TI;
extern Il2CppType t937_0_0_0;
extern void* RuntimeInvoker_t937 (MethodInfo* method, void* obj, void** args);
MethodInfo m28953_MI = 
{
	"get_Current", NULL, &t3759_TI, &t937_0_0_0, RuntimeInvoker_t937, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3759_MIs[] =
{
	&m28953_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3759_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3759_0_0_0;
extern Il2CppType t3759_1_0_0;
struct t3759;
extern TypeInfo t3759_TI;
extern Il2CppGenericClass t3759_GC;
TypeInfo t3759_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3759_MIs, t3759_PIs, NULL, NULL, NULL, NULL, NULL, &t3759_TI, t3759_ITIs, NULL, &EmptyCustomAttributesCache, &t3759_TI, &t3759_0_0_0, &t3759_1_0_0, NULL, &t3759_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2834.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2834_TI;
#include "t2834MD.h"

extern TypeInfo t2834_TI;
extern TypeInfo t937_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16331_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22024_MI;
struct t52;
 int32_t m22024 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22024_MI;


extern MethodInfo m16327_MI;
 void m16327 (t2834 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16328_MI;
 t7 * m16328 (t2834 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16331(__this, &m16331_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t937_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16329_MI;
 void m16329 (t2834 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16330_MI;
 bool m16330 (t2834 * __this, MethodInfo* method){
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
extern MethodInfo m16331_MI;
 int32_t m16331 (t2834 * __this, MethodInfo* method){
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
		int32_t L_8 = m22024(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22024_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.MonoIOError>
extern Il2CppType t52_0_0_1;
FieldInfo t2834_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2834_TI, offsetof(t2834, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2834_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2834_TI, offsetof(t2834, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2834_FIs[] =
{
	&t2834_f0_FieldInfo,
	&t2834_f1_FieldInfo,
	NULL
};
extern MethodInfo m16328_MI;
static PropertyInfo t2834____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2834_TI, "System.Collections.IEnumerator.Current", &m16328_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16331_MI;
static PropertyInfo t2834____Current_PropertyInfo = 
{
	&t2834_TI, "Current", &m16331_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2834_PIs[] =
{
	&t2834____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2834____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2834_m16327_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2834_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16327_MI = 
{
	".ctor", (methodPointerType)&m16327, &t2834_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2834_m16327_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2834_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16328_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16328, &t2834_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2834_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16329_MI = 
{
	"Dispose", (methodPointerType)&m16329, &t2834_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2834_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16330_MI = 
{
	"MoveNext", (methodPointerType)&m16330, &t2834_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2834_TI;
extern Il2CppType t937_0_0_0;
extern void* RuntimeInvoker_t937 (MethodInfo* method, void* obj, void** args);
MethodInfo m16331_MI = 
{
	"get_Current", (methodPointerType)&m16331, &t2834_TI, &t937_0_0_0, RuntimeInvoker_t937, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2834_MIs[] =
{
	&m16327_MI,
	&m16328_MI,
	&m16329_MI,
	&m16330_MI,
	&m16331_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16328_MI;
extern MethodInfo m16330_MI;
extern MethodInfo m16329_MI;
extern MethodInfo m16331_MI;
static MethodInfo* t2834_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16328_MI,
	&m16330_MI,
	&m16329_MI,
	&m16331_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3759_TI;
static TypeInfo* t2834_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3759_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3759_TI;
static Il2CppInterfaceOffsetPair t2834_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3759_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2834_0_0_0;
extern Il2CppType t2834_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2834_TI;
extern Il2CppGenericClass t2834_GC;
extern TypeInfo t52_TI;
TypeInfo t2834_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2834_MIs, t2834_PIs, t2834_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2834_TI, t2834_ITIs, t2834_VT, &EmptyCustomAttributesCache, &t2834_TI, &t2834_0_0_0, &t2834_1_0_0, t2834_IOs, &t2834_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2834)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4933_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.MonoIOError>
extern MethodInfo m28954_MI;
static PropertyInfo t4933____Count_PropertyInfo = 
{
	&t4933_TI, "Count", &m28954_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28955_MI;
static PropertyInfo t4933____IsReadOnly_PropertyInfo = 
{
	&t4933_TI, "IsReadOnly", &m28955_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4933_PIs[] =
{
	&t4933____Count_PropertyInfo,
	&t4933____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4933_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28954_MI = 
{
	"get_Count", NULL, &t4933_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4933_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m28955_MI = 
{
	"get_IsReadOnly", NULL, &t4933_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t937_0_0_0;
static ParameterInfo t4933_m28956_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t937_0_0_0},
};
extern TypeInfo t4933_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28956_MI = 
{
	"Add", NULL, &t4933_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4933_m28956_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4933_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m28957_MI = 
{
	"Clear", NULL, &t4933_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t937_0_0_0;
static ParameterInfo t4933_m28958_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t937_0_0_0},
};
extern TypeInfo t4933_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28958_MI = 
{
	"Contains", NULL, &t4933_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4933_m28958_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3093_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4933_m28959_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3093_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4933_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28959_MI = 
{
	"CopyTo", NULL, &t4933_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4933_m28959_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t937_0_0_0;
static ParameterInfo t4933_m28960_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t937_0_0_0},
};
extern TypeInfo t4933_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28960_MI = 
{
	"Remove", NULL, &t4933_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4933_m28960_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4933_MIs[] =
{
	&m28954_MI,
	&m28955_MI,
	&m28956_MI,
	&m28957_MI,
	&m28958_MI,
	&m28959_MI,
	&m28960_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4935_TI;
static TypeInfo* t4933_ITIs[] = 
{
	&t618_TI,
	&t4935_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4933_0_0_0;
extern Il2CppType t4933_1_0_0;
struct t4933;
extern TypeInfo t4933_TI;
extern Il2CppGenericClass t4933_GC;
TypeInfo t4933_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4933_MIs, t4933_PIs, NULL, NULL, NULL, NULL, NULL, &t4933_TI, t4933_ITIs, NULL, &EmptyCustomAttributesCache, &t4933_TI, &t4933_0_0_0, &t4933_1_0_0, NULL, &t4933_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4935_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.MonoIOError>
extern TypeInfo t4935_TI;
extern Il2CppType t3759_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28961_MI = 
{
	"GetEnumerator", NULL, &t4935_TI, &t3759_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4935_MIs[] =
{
	&m28961_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4935_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4935_0_0_0;
extern Il2CppType t4935_1_0_0;
struct t4935;
extern TypeInfo t4935_TI;
extern Il2CppGenericClass t4935_GC;
TypeInfo t4935_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4935_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4935_TI, t4935_ITIs, NULL, &EmptyCustomAttributesCache, &t4935_TI, &t4935_0_0_0, &t4935_1_0_0, NULL, &t4935_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4934_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.MonoIOError>
extern MethodInfo m28962_MI;
extern MethodInfo m28963_MI;
static PropertyInfo t4934____Item_PropertyInfo = 
{
	&t4934_TI, "Item", &m28962_MI, &m28963_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4934_PIs[] =
{
	&t4934____Item_PropertyInfo,
	NULL
};
extern Il2CppType t937_0_0_0;
static ParameterInfo t4934_m28964_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t937_0_0_0},
};
extern TypeInfo t4934_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28964_MI = 
{
	"IndexOf", NULL, &t4934_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4934_m28964_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t937_0_0_0;
static ParameterInfo t4934_m28965_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t937_0_0_0},
};
extern TypeInfo t4934_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28965_MI = 
{
	"Insert", NULL, &t4934_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4934_m28965_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4934_m28966_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4934_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28966_MI = 
{
	"RemoveAt", NULL, &t4934_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4934_m28966_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4934_m28962_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4934_TI;
extern Il2CppType t937_0_0_0;
extern void* RuntimeInvoker_t937_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28962_MI = 
{
	"get_Item", NULL, &t4934_TI, &t937_0_0_0, RuntimeInvoker_t937_t60, t4934_m28962_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t937_0_0_0;
static ParameterInfo t4934_m28963_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t937_0_0_0},
};
extern TypeInfo t4934_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28963_MI = 
{
	"set_Item", NULL, &t4934_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4934_m28963_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4934_MIs[] =
{
	&m28964_MI,
	&m28965_MI,
	&m28966_MI,
	&m28962_MI,
	&m28963_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4933_TI;
extern TypeInfo t4935_TI;
static TypeInfo* t4934_ITIs[] = 
{
	&t618_TI,
	&t4933_TI,
	&t4935_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4934_0_0_0;
extern Il2CppType t4934_1_0_0;
struct t4934;
extern TypeInfo t4934_TI;
extern Il2CppGenericClass t4934_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4934_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4934_MIs, t4934_PIs, NULL, NULL, NULL, NULL, NULL, &t4934_TI, t4934_ITIs, NULL, &t1426__CustomAttributeCache, &t4934_TI, &t4934_0_0_0, &t4934_1_0_0, NULL, &t4934_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3760_TI;

#include "t930.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.SeekOrigin>
extern MethodInfo m28967_MI;
static PropertyInfo t3760____Current_PropertyInfo = 
{
	&t3760_TI, "Current", &m28967_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3760_PIs[] =
{
	&t3760____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3760_TI;
extern Il2CppType t930_0_0_0;
extern void* RuntimeInvoker_t930 (MethodInfo* method, void* obj, void** args);
MethodInfo m28967_MI = 
{
	"get_Current", NULL, &t3760_TI, &t930_0_0_0, RuntimeInvoker_t930, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3760_MIs[] =
{
	&m28967_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3760_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3760_0_0_0;
extern Il2CppType t3760_1_0_0;
struct t3760;
extern TypeInfo t3760_TI;
extern Il2CppGenericClass t3760_GC;
TypeInfo t3760_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3760_MIs, t3760_PIs, NULL, NULL, NULL, NULL, NULL, &t3760_TI, t3760_ITIs, NULL, &EmptyCustomAttributesCache, &t3760_TI, &t3760_0_0_0, &t3760_1_0_0, NULL, &t3760_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2835.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2835_TI;
#include "t2835MD.h"

extern TypeInfo t2835_TI;
extern TypeInfo t930_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16336_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22035_MI;
struct t52;
 int32_t m22035 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22035_MI;


extern MethodInfo m16332_MI;
 void m16332 (t2835 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16333_MI;
 t7 * m16333 (t2835 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16336(__this, &m16336_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t930_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16334_MI;
 void m16334 (t2835 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16335_MI;
 bool m16335 (t2835 * __this, MethodInfo* method){
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
extern MethodInfo m16336_MI;
 int32_t m16336 (t2835 * __this, MethodInfo* method){
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
		int32_t L_8 = m22035(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22035_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.SeekOrigin>
extern Il2CppType t52_0_0_1;
FieldInfo t2835_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2835_TI, offsetof(t2835, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2835_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2835_TI, offsetof(t2835, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2835_FIs[] =
{
	&t2835_f0_FieldInfo,
	&t2835_f1_FieldInfo,
	NULL
};
extern MethodInfo m16333_MI;
static PropertyInfo t2835____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2835_TI, "System.Collections.IEnumerator.Current", &m16333_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16336_MI;
static PropertyInfo t2835____Current_PropertyInfo = 
{
	&t2835_TI, "Current", &m16336_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2835_PIs[] =
{
	&t2835____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2835____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2835_m16332_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2835_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16332_MI = 
{
	".ctor", (methodPointerType)&m16332, &t2835_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2835_m16332_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2835_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16333_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16333, &t2835_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2835_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16334_MI = 
{
	"Dispose", (methodPointerType)&m16334, &t2835_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2835_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16335_MI = 
{
	"MoveNext", (methodPointerType)&m16335, &t2835_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2835_TI;
extern Il2CppType t930_0_0_0;
extern void* RuntimeInvoker_t930 (MethodInfo* method, void* obj, void** args);
MethodInfo m16336_MI = 
{
	"get_Current", (methodPointerType)&m16336, &t2835_TI, &t930_0_0_0, RuntimeInvoker_t930, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2835_MIs[] =
{
	&m16332_MI,
	&m16333_MI,
	&m16334_MI,
	&m16335_MI,
	&m16336_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16333_MI;
extern MethodInfo m16335_MI;
extern MethodInfo m16334_MI;
extern MethodInfo m16336_MI;
static MethodInfo* t2835_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16333_MI,
	&m16335_MI,
	&m16334_MI,
	&m16336_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3760_TI;
static TypeInfo* t2835_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3760_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3760_TI;
static Il2CppInterfaceOffsetPair t2835_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3760_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2835_0_0_0;
extern Il2CppType t2835_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2835_TI;
extern Il2CppGenericClass t2835_GC;
extern TypeInfo t52_TI;
TypeInfo t2835_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2835_MIs, t2835_PIs, t2835_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2835_TI, t2835_ITIs, t2835_VT, &EmptyCustomAttributesCache, &t2835_TI, &t2835_0_0_0, &t2835_1_0_0, t2835_IOs, &t2835_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2835)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4936_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>
extern MethodInfo m28968_MI;
static PropertyInfo t4936____Count_PropertyInfo = 
{
	&t4936_TI, "Count", &m28968_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28969_MI;
static PropertyInfo t4936____IsReadOnly_PropertyInfo = 
{
	&t4936_TI, "IsReadOnly", &m28969_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4936_PIs[] =
{
	&t4936____Count_PropertyInfo,
	&t4936____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4936_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28968_MI = 
{
	"get_Count", NULL, &t4936_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4936_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m28969_MI = 
{
	"get_IsReadOnly", NULL, &t4936_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t930_0_0_0;
static ParameterInfo t4936_m28970_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t930_0_0_0},
};
extern TypeInfo t4936_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28970_MI = 
{
	"Add", NULL, &t4936_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4936_m28970_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4936_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m28971_MI = 
{
	"Clear", NULL, &t4936_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t930_0_0_0;
static ParameterInfo t4936_m28972_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t930_0_0_0},
};
extern TypeInfo t4936_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28972_MI = 
{
	"Contains", NULL, &t4936_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4936_m28972_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3094_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4936_m28973_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3094_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4936_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28973_MI = 
{
	"CopyTo", NULL, &t4936_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4936_m28973_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t930_0_0_0;
static ParameterInfo t4936_m28974_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t930_0_0_0},
};
extern TypeInfo t4936_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28974_MI = 
{
	"Remove", NULL, &t4936_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4936_m28974_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4936_MIs[] =
{
	&m28968_MI,
	&m28969_MI,
	&m28970_MI,
	&m28971_MI,
	&m28972_MI,
	&m28973_MI,
	&m28974_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4938_TI;
static TypeInfo* t4936_ITIs[] = 
{
	&t618_TI,
	&t4938_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4936_0_0_0;
extern Il2CppType t4936_1_0_0;
struct t4936;
extern TypeInfo t4936_TI;
extern Il2CppGenericClass t4936_GC;
TypeInfo t4936_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4936_MIs, t4936_PIs, NULL, NULL, NULL, NULL, NULL, &t4936_TI, t4936_ITIs, NULL, &EmptyCustomAttributesCache, &t4936_TI, &t4936_0_0_0, &t4936_1_0_0, NULL, &t4936_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4938_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.SeekOrigin>
extern TypeInfo t4938_TI;
extern Il2CppType t3760_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28975_MI = 
{
	"GetEnumerator", NULL, &t4938_TI, &t3760_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4938_MIs[] =
{
	&m28975_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4938_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4938_0_0_0;
extern Il2CppType t4938_1_0_0;
struct t4938;
extern TypeInfo t4938_TI;
extern Il2CppGenericClass t4938_GC;
TypeInfo t4938_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4938_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4938_TI, t4938_ITIs, NULL, &EmptyCustomAttributesCache, &t4938_TI, &t4938_0_0_0, &t4938_1_0_0, NULL, &t4938_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4937_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.SeekOrigin>
extern MethodInfo m28976_MI;
extern MethodInfo m28977_MI;
static PropertyInfo t4937____Item_PropertyInfo = 
{
	&t4937_TI, "Item", &m28976_MI, &m28977_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4937_PIs[] =
{
	&t4937____Item_PropertyInfo,
	NULL
};
extern Il2CppType t930_0_0_0;
static ParameterInfo t4937_m28978_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t930_0_0_0},
};
extern TypeInfo t4937_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28978_MI = 
{
	"IndexOf", NULL, &t4937_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4937_m28978_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t930_0_0_0;
static ParameterInfo t4937_m28979_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t930_0_0_0},
};
extern TypeInfo t4937_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28979_MI = 
{
	"Insert", NULL, &t4937_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4937_m28979_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4937_m28980_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4937_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28980_MI = 
{
	"RemoveAt", NULL, &t4937_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4937_m28980_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4937_m28976_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4937_TI;
extern Il2CppType t930_0_0_0;
extern void* RuntimeInvoker_t930_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28976_MI = 
{
	"get_Item", NULL, &t4937_TI, &t930_0_0_0, RuntimeInvoker_t930_t60, t4937_m28976_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t930_0_0_0;
static ParameterInfo t4937_m28977_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t930_0_0_0},
};
extern TypeInfo t4937_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28977_MI = 
{
	"set_Item", NULL, &t4937_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4937_m28977_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4937_MIs[] =
{
	&m28978_MI,
	&m28979_MI,
	&m28980_MI,
	&m28976_MI,
	&m28977_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4936_TI;
extern TypeInfo t4938_TI;
static TypeInfo* t4937_ITIs[] = 
{
	&t618_TI,
	&t4936_TI,
	&t4938_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4937_0_0_0;
extern Il2CppType t4937_1_0_0;
struct t4937;
extern TypeInfo t4937_TI;
extern Il2CppGenericClass t4937_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4937_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4937_MIs, t4937_PIs, NULL, NULL, NULL, NULL, NULL, &t4937_TI, t4937_ITIs, NULL, &t1426__CustomAttributeCache, &t4937_TI, &t4937_0_0_0, &t4937_1_0_0, NULL, &t4937_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3761_TI;

#include "t950.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ModuleBuilder>
extern MethodInfo m28981_MI;
static PropertyInfo t3761____Current_PropertyInfo = 
{
	&t3761_TI, "Current", &m28981_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3761_PIs[] =
{
	&t3761____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3761_TI;
extern Il2CppType t950_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28981_MI = 
{
	"get_Current", NULL, &t3761_TI, &t950_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3761_MIs[] =
{
	&m28981_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3761_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3761_0_0_0;
extern Il2CppType t3761_1_0_0;
struct t3761;
extern TypeInfo t3761_TI;
extern Il2CppGenericClass t3761_GC;
TypeInfo t3761_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3761_MIs, t3761_PIs, NULL, NULL, NULL, NULL, NULL, &t3761_TI, t3761_ITIs, NULL, &EmptyCustomAttributesCache, &t3761_TI, &t3761_0_0_0, &t3761_1_0_0, NULL, &t3761_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2836.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2836_TI;
#include "t2836MD.h"

extern TypeInfo t2836_TI;
extern TypeInfo t950_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16341_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22046_MI;
struct t52;
struct t52;
 t7 * m17147_gshared (t52 * __this, int32_t p0, MethodInfo* method);
#define m17147(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
#define m22046(__this, p0, method) (t950 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22046_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>
extern Il2CppType t52_0_0_1;
FieldInfo t2836_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2836_TI, offsetof(t2836, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2836_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2836_TI, offsetof(t2836, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2836_FIs[] =
{
	&t2836_f0_FieldInfo,
	&t2836_f1_FieldInfo,
	NULL
};
extern MethodInfo m16338_MI;
static PropertyInfo t2836____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2836_TI, "System.Collections.IEnumerator.Current", &m16338_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16341_MI;
static PropertyInfo t2836____Current_PropertyInfo = 
{
	&t2836_TI, "Current", &m16341_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2836_PIs[] =
{
	&t2836____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2836____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2836_m16337_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2836_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16337_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2836_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2836_m16337_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2836_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16338_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2836_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2836_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16339_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2836_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2836_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16340_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2836_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2836_TI;
extern Il2CppType t950_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16341_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2836_TI, &t950_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2836_MIs[] =
{
	&m16337_MI,
	&m16338_MI,
	&m16339_MI,
	&m16340_MI,
	&m16341_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16338_MI;
extern MethodInfo m16340_MI;
extern MethodInfo m16339_MI;
extern MethodInfo m16341_MI;
static MethodInfo* t2836_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16338_MI,
	&m16340_MI,
	&m16339_MI,
	&m16341_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3761_TI;
static TypeInfo* t2836_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3761_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3761_TI;
static Il2CppInterfaceOffsetPair t2836_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3761_TI, 7},
};
extern MethodInfo m16341_MI;
extern TypeInfo t950_TI;
extern MethodInfo m22046_MI;
static void* t2836_RGCTXData[3] = 
{
	&m16341_MI,
	&t950_TI,
	&m22046_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2836_0_0_0;
extern Il2CppType t2836_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2836_TI;
extern Il2CppGenericClass t2836_GC;
extern TypeInfo t52_TI;
TypeInfo t2836_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2836_MIs, t2836_PIs, t2836_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2836_TI, t2836_ITIs, t2836_VT, &EmptyCustomAttributesCache, &t2836_TI, &t2836_0_0_0, &t2836_1_0_0, t2836_IOs, &t2836_GC, NULL, NULL, NULL, t2836_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2836)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4939_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>
extern MethodInfo m28982_MI;
static PropertyInfo t4939____Count_PropertyInfo = 
{
	&t4939_TI, "Count", &m28982_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28983_MI;
static PropertyInfo t4939____IsReadOnly_PropertyInfo = 
{
	&t4939_TI, "IsReadOnly", &m28983_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4939_PIs[] =
{
	&t4939____Count_PropertyInfo,
	&t4939____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4939_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28982_MI = 
{
	"get_Count", NULL, &t4939_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4939_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m28983_MI = 
{
	"get_IsReadOnly", NULL, &t4939_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t950_0_0_0;
static ParameterInfo t4939_m28984_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t950_0_0_0},
};
extern TypeInfo t4939_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28984_MI = 
{
	"Add", NULL, &t4939_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4939_m28984_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4939_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m28985_MI = 
{
	"Clear", NULL, &t4939_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t950_0_0_0;
static ParameterInfo t4939_m28986_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t950_0_0_0},
};
extern TypeInfo t4939_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28986_MI = 
{
	"Contains", NULL, &t4939_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4939_m28986_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t949_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4939_m28987_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t949_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4939_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28987_MI = 
{
	"CopyTo", NULL, &t4939_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4939_m28987_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t950_0_0_0;
static ParameterInfo t4939_m28988_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t950_0_0_0},
};
extern TypeInfo t4939_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28988_MI = 
{
	"Remove", NULL, &t4939_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4939_m28988_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4939_MIs[] =
{
	&m28982_MI,
	&m28983_MI,
	&m28984_MI,
	&m28985_MI,
	&m28986_MI,
	&m28987_MI,
	&m28988_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4941_TI;
static TypeInfo* t4939_ITIs[] = 
{
	&t618_TI,
	&t4941_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4939_0_0_0;
extern Il2CppType t4939_1_0_0;
struct t4939;
extern TypeInfo t4939_TI;
extern Il2CppGenericClass t4939_GC;
TypeInfo t4939_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4939_MIs, t4939_PIs, NULL, NULL, NULL, NULL, NULL, &t4939_TI, t4939_ITIs, NULL, &EmptyCustomAttributesCache, &t4939_TI, &t4939_0_0_0, &t4939_1_0_0, NULL, &t4939_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4941_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ModuleBuilder>
extern TypeInfo t4941_TI;
extern Il2CppType t3761_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28989_MI = 
{
	"GetEnumerator", NULL, &t4941_TI, &t3761_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4941_MIs[] =
{
	&m28989_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4941_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4941_0_0_0;
extern Il2CppType t4941_1_0_0;
struct t4941;
extern TypeInfo t4941_TI;
extern Il2CppGenericClass t4941_GC;
TypeInfo t4941_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4941_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4941_TI, t4941_ITIs, NULL, &EmptyCustomAttributesCache, &t4941_TI, &t4941_0_0_0, &t4941_1_0_0, NULL, &t4941_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4940_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>
extern MethodInfo m28990_MI;
extern MethodInfo m28991_MI;
static PropertyInfo t4940____Item_PropertyInfo = 
{
	&t4940_TI, "Item", &m28990_MI, &m28991_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4940_PIs[] =
{
	&t4940____Item_PropertyInfo,
	NULL
};
extern Il2CppType t950_0_0_0;
static ParameterInfo t4940_m28992_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t950_0_0_0},
};
extern TypeInfo t4940_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28992_MI = 
{
	"IndexOf", NULL, &t4940_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4940_m28992_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t950_0_0_0;
static ParameterInfo t4940_m28993_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t950_0_0_0},
};
extern TypeInfo t4940_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28993_MI = 
{
	"Insert", NULL, &t4940_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4940_m28993_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4940_m28994_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4940_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28994_MI = 
{
	"RemoveAt", NULL, &t4940_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4940_m28994_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4940_m28990_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4940_TI;
extern Il2CppType t950_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28990_MI = 
{
	"get_Item", NULL, &t4940_TI, &t950_0_0_0, RuntimeInvoker_t7_t60, t4940_m28990_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t950_0_0_0;
static ParameterInfo t4940_m28991_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t950_0_0_0},
};
extern TypeInfo t4940_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28991_MI = 
{
	"set_Item", NULL, &t4940_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4940_m28991_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4940_MIs[] =
{
	&m28992_MI,
	&m28993_MI,
	&m28994_MI,
	&m28990_MI,
	&m28991_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4939_TI;
extern TypeInfo t4941_TI;
static TypeInfo* t4940_ITIs[] = 
{
	&t618_TI,
	&t4939_TI,
	&t4941_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4940_0_0_0;
extern Il2CppType t4940_1_0_0;
struct t4940;
extern TypeInfo t4940_TI;
extern Il2CppGenericClass t4940_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4940_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4940_MIs, t4940_PIs, NULL, NULL, NULL, NULL, NULL, &t4940_TI, t4940_ITIs, NULL, &t1426__CustomAttributeCache, &t4940_TI, &t4940_0_0_0, &t4940_1_0_0, NULL, &t4940_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4942_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>
extern MethodInfo m28995_MI;
static PropertyInfo t4942____Count_PropertyInfo = 
{
	&t4942_TI, "Count", &m28995_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28996_MI;
static PropertyInfo t4942____IsReadOnly_PropertyInfo = 
{
	&t4942_TI, "IsReadOnly", &m28996_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4942_PIs[] =
{
	&t4942____Count_PropertyInfo,
	&t4942____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4942_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m28995_MI = 
{
	"get_Count", NULL, &t4942_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4942_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m28996_MI = 
{
	"get_IsReadOnly", NULL, &t4942_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1527_0_0_0;
static ParameterInfo t4942_m28997_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1527_0_0_0},
};
extern TypeInfo t4942_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28997_MI = 
{
	"Add", NULL, &t4942_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4942_m28997_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4942_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m28998_MI = 
{
	"Clear", NULL, &t4942_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1527_0_0_0;
static ParameterInfo t4942_m28999_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1527_0_0_0},
};
extern TypeInfo t4942_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m28999_MI = 
{
	"Contains", NULL, &t4942_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4942_m28999_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3095_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4942_m29000_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3095_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4942_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29000_MI = 
{
	"CopyTo", NULL, &t4942_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4942_m29000_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1527_0_0_0;
static ParameterInfo t4942_m29001_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1527_0_0_0},
};
extern TypeInfo t4942_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29001_MI = 
{
	"Remove", NULL, &t4942_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4942_m29001_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4942_MIs[] =
{
	&m28995_MI,
	&m28996_MI,
	&m28997_MI,
	&m28998_MI,
	&m28999_MI,
	&m29000_MI,
	&m29001_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4944_TI;
static TypeInfo* t4942_ITIs[] = 
{
	&t618_TI,
	&t4944_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4942_0_0_0;
extern Il2CppType t4942_1_0_0;
struct t4942;
extern TypeInfo t4942_TI;
extern Il2CppGenericClass t4942_GC;
TypeInfo t4942_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4942_MIs, t4942_PIs, NULL, NULL, NULL, NULL, NULL, &t4942_TI, t4942_ITIs, NULL, &EmptyCustomAttributesCache, &t4942_TI, &t4942_0_0_0, &t4942_1_0_0, NULL, &t4942_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4944_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ModuleBuilder>
extern TypeInfo t4944_TI;
extern Il2CppType t3762_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29002_MI = 
{
	"GetEnumerator", NULL, &t4944_TI, &t3762_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4944_MIs[] =
{
	&m29002_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4944_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4944_0_0_0;
extern Il2CppType t4944_1_0_0;
struct t4944;
extern TypeInfo t4944_TI;
extern Il2CppGenericClass t4944_GC;
TypeInfo t4944_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4944_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4944_TI, t4944_ITIs, NULL, &EmptyCustomAttributesCache, &t4944_TI, &t4944_0_0_0, &t4944_1_0_0, NULL, &t4944_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3762_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>
extern MethodInfo m29003_MI;
static PropertyInfo t3762____Current_PropertyInfo = 
{
	&t3762_TI, "Current", &m29003_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3762_PIs[] =
{
	&t3762____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3762_TI;
extern Il2CppType t1527_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29003_MI = 
{
	"get_Current", NULL, &t3762_TI, &t1527_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3762_MIs[] =
{
	&m29003_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3762_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3762_0_0_0;
extern Il2CppType t3762_1_0_0;
struct t3762;
extern TypeInfo t3762_TI;
extern Il2CppGenericClass t3762_GC;
TypeInfo t3762_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3762_MIs, t3762_PIs, NULL, NULL, NULL, NULL, NULL, &t3762_TI, t3762_ITIs, NULL, &EmptyCustomAttributesCache, &t3762_TI, &t3762_0_0_0, &t3762_1_0_0, NULL, &t3762_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2837.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2837_TI;
#include "t2837MD.h"

extern TypeInfo t2837_TI;
extern TypeInfo t1527_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16346_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22057_MI;
struct t52;
#define m22057(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22057_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>
extern Il2CppType t52_0_0_1;
FieldInfo t2837_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2837_TI, offsetof(t2837, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2837_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2837_TI, offsetof(t2837, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2837_FIs[] =
{
	&t2837_f0_FieldInfo,
	&t2837_f1_FieldInfo,
	NULL
};
extern MethodInfo m16343_MI;
static PropertyInfo t2837____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2837_TI, "System.Collections.IEnumerator.Current", &m16343_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16346_MI;
static PropertyInfo t2837____Current_PropertyInfo = 
{
	&t2837_TI, "Current", &m16346_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2837_PIs[] =
{
	&t2837____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2837____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2837_m16342_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2837_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16342_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2837_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2837_m16342_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2837_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16343_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2837_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2837_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16344_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2837_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2837_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16345_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2837_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2837_TI;
extern Il2CppType t1527_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16346_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2837_TI, &t1527_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2837_MIs[] =
{
	&m16342_MI,
	&m16343_MI,
	&m16344_MI,
	&m16345_MI,
	&m16346_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16343_MI;
extern MethodInfo m16345_MI;
extern MethodInfo m16344_MI;
extern MethodInfo m16346_MI;
static MethodInfo* t2837_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16343_MI,
	&m16345_MI,
	&m16344_MI,
	&m16346_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3762_TI;
static TypeInfo* t2837_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3762_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3762_TI;
static Il2CppInterfaceOffsetPair t2837_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3762_TI, 7},
};
extern MethodInfo m16346_MI;
extern TypeInfo t1527_TI;
extern MethodInfo m22057_MI;
static void* t2837_RGCTXData[3] = 
{
	&m16346_MI,
	&t1527_TI,
	&m22057_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2837_0_0_0;
extern Il2CppType t2837_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2837_TI;
extern Il2CppGenericClass t2837_GC;
extern TypeInfo t52_TI;
TypeInfo t2837_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2837_MIs, t2837_PIs, t2837_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2837_TI, t2837_ITIs, t2837_VT, &EmptyCustomAttributesCache, &t2837_TI, &t2837_0_0_0, &t2837_1_0_0, t2837_IOs, &t2837_GC, NULL, NULL, NULL, t2837_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2837)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4943_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>
extern MethodInfo m29004_MI;
extern MethodInfo m29005_MI;
static PropertyInfo t4943____Item_PropertyInfo = 
{
	&t4943_TI, "Item", &m29004_MI, &m29005_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4943_PIs[] =
{
	&t4943____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1527_0_0_0;
static ParameterInfo t4943_m29006_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1527_0_0_0},
};
extern TypeInfo t4943_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29006_MI = 
{
	"IndexOf", NULL, &t4943_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4943_m29006_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1527_0_0_0;
static ParameterInfo t4943_m29007_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1527_0_0_0},
};
extern TypeInfo t4943_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29007_MI = 
{
	"Insert", NULL, &t4943_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4943_m29007_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4943_m29008_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4943_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29008_MI = 
{
	"RemoveAt", NULL, &t4943_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4943_m29008_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4943_m29004_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4943_TI;
extern Il2CppType t1527_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29004_MI = 
{
	"get_Item", NULL, &t4943_TI, &t1527_0_0_0, RuntimeInvoker_t7_t60, t4943_m29004_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1527_0_0_0;
static ParameterInfo t4943_m29005_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1527_0_0_0},
};
extern TypeInfo t4943_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29005_MI = 
{
	"set_Item", NULL, &t4943_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4943_m29005_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4943_MIs[] =
{
	&m29006_MI,
	&m29007_MI,
	&m29008_MI,
	&m29004_MI,
	&m29005_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4942_TI;
extern TypeInfo t4944_TI;
static TypeInfo* t4943_ITIs[] = 
{
	&t618_TI,
	&t4942_TI,
	&t4944_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4943_0_0_0;
extern Il2CppType t4943_1_0_0;
struct t4943;
extern TypeInfo t4943_TI;
extern Il2CppGenericClass t4943_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4943_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4943_MIs, t4943_PIs, NULL, NULL, NULL, NULL, NULL, &t4943_TI, t4943_ITIs, NULL, &t1426__CustomAttributeCache, &t4943_TI, &t4943_0_0_0, &t4943_1_0_0, NULL, &t4943_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4945_TI;

#include "t747.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Module>
extern MethodInfo m29009_MI;
static PropertyInfo t4945____Count_PropertyInfo = 
{
	&t4945_TI, "Count", &m29009_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29010_MI;
static PropertyInfo t4945____IsReadOnly_PropertyInfo = 
{
	&t4945_TI, "IsReadOnly", &m29010_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4945_PIs[] =
{
	&t4945____Count_PropertyInfo,
	&t4945____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4945_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29009_MI = 
{
	"get_Count", NULL, &t4945_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4945_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29010_MI = 
{
	"get_IsReadOnly", NULL, &t4945_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t747_0_0_0;
static ParameterInfo t4945_m29011_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t747_0_0_0},
};
extern TypeInfo t4945_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29011_MI = 
{
	"Add", NULL, &t4945_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4945_m29011_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4945_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29012_MI = 
{
	"Clear", NULL, &t4945_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t747_0_0_0;
static ParameterInfo t4945_m29013_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t747_0_0_0},
};
extern TypeInfo t4945_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29013_MI = 
{
	"Contains", NULL, &t4945_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4945_m29013_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t951_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4945_m29014_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t951_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4945_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29014_MI = 
{
	"CopyTo", NULL, &t4945_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4945_m29014_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t747_0_0_0;
static ParameterInfo t4945_m29015_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t747_0_0_0},
};
extern TypeInfo t4945_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29015_MI = 
{
	"Remove", NULL, &t4945_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4945_m29015_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4945_MIs[] =
{
	&m29009_MI,
	&m29010_MI,
	&m29011_MI,
	&m29012_MI,
	&m29013_MI,
	&m29014_MI,
	&m29015_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4947_TI;
static TypeInfo* t4945_ITIs[] = 
{
	&t618_TI,
	&t4947_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4945_0_0_0;
extern Il2CppType t4945_1_0_0;
struct t4945;
extern TypeInfo t4945_TI;
extern Il2CppGenericClass t4945_GC;
TypeInfo t4945_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4945_MIs, t4945_PIs, NULL, NULL, NULL, NULL, NULL, &t4945_TI, t4945_ITIs, NULL, &EmptyCustomAttributesCache, &t4945_TI, &t4945_0_0_0, &t4945_1_0_0, NULL, &t4945_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4947_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Module>
extern TypeInfo t4947_TI;
extern Il2CppType t3763_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29016_MI = 
{
	"GetEnumerator", NULL, &t4947_TI, &t3763_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4947_MIs[] =
{
	&m29016_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4947_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4947_0_0_0;
extern Il2CppType t4947_1_0_0;
struct t4947;
extern TypeInfo t4947_TI;
extern Il2CppGenericClass t4947_GC;
TypeInfo t4947_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4947_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4947_TI, t4947_ITIs, NULL, &EmptyCustomAttributesCache, &t4947_TI, &t4947_0_0_0, &t4947_1_0_0, NULL, &t4947_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3763_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Module>
extern MethodInfo m29017_MI;
static PropertyInfo t3763____Current_PropertyInfo = 
{
	&t3763_TI, "Current", &m29017_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3763_PIs[] =
{
	&t3763____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3763_TI;
extern Il2CppType t747_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29017_MI = 
{
	"get_Current", NULL, &t3763_TI, &t747_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3763_MIs[] =
{
	&m29017_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3763_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3763_0_0_0;
extern Il2CppType t3763_1_0_0;
struct t3763;
extern TypeInfo t3763_TI;
extern Il2CppGenericClass t3763_GC;
TypeInfo t3763_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3763_MIs, t3763_PIs, NULL, NULL, NULL, NULL, NULL, &t3763_TI, t3763_ITIs, NULL, &EmptyCustomAttributesCache, &t3763_TI, &t3763_0_0_0, &t3763_1_0_0, NULL, &t3763_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2838.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2838_TI;
#include "t2838MD.h"

extern TypeInfo t2838_TI;
extern TypeInfo t747_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16351_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22068_MI;
struct t52;
#define m22068(__this, p0, method) (t747 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22068_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Module>
extern Il2CppType t52_0_0_1;
FieldInfo t2838_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2838_TI, offsetof(t2838, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2838_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2838_TI, offsetof(t2838, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2838_FIs[] =
{
	&t2838_f0_FieldInfo,
	&t2838_f1_FieldInfo,
	NULL
};
extern MethodInfo m16348_MI;
static PropertyInfo t2838____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2838_TI, "System.Collections.IEnumerator.Current", &m16348_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16351_MI;
static PropertyInfo t2838____Current_PropertyInfo = 
{
	&t2838_TI, "Current", &m16351_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2838_PIs[] =
{
	&t2838____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2838____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2838_m16347_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2838_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16347_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2838_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2838_m16347_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2838_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16348_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2838_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2838_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16349_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2838_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2838_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16350_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2838_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2838_TI;
extern Il2CppType t747_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16351_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2838_TI, &t747_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2838_MIs[] =
{
	&m16347_MI,
	&m16348_MI,
	&m16349_MI,
	&m16350_MI,
	&m16351_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16348_MI;
extern MethodInfo m16350_MI;
extern MethodInfo m16349_MI;
extern MethodInfo m16351_MI;
static MethodInfo* t2838_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16348_MI,
	&m16350_MI,
	&m16349_MI,
	&m16351_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3763_TI;
static TypeInfo* t2838_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3763_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3763_TI;
static Il2CppInterfaceOffsetPair t2838_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3763_TI, 7},
};
extern MethodInfo m16351_MI;
extern TypeInfo t747_TI;
extern MethodInfo m22068_MI;
static void* t2838_RGCTXData[3] = 
{
	&m16351_MI,
	&t747_TI,
	&m22068_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2838_0_0_0;
extern Il2CppType t2838_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2838_TI;
extern Il2CppGenericClass t2838_GC;
extern TypeInfo t52_TI;
TypeInfo t2838_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2838_MIs, t2838_PIs, t2838_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2838_TI, t2838_ITIs, t2838_VT, &EmptyCustomAttributesCache, &t2838_TI, &t2838_0_0_0, &t2838_1_0_0, t2838_IOs, &t2838_GC, NULL, NULL, NULL, t2838_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2838)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4946_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Module>
extern MethodInfo m29018_MI;
extern MethodInfo m29019_MI;
static PropertyInfo t4946____Item_PropertyInfo = 
{
	&t4946_TI, "Item", &m29018_MI, &m29019_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4946_PIs[] =
{
	&t4946____Item_PropertyInfo,
	NULL
};
extern Il2CppType t747_0_0_0;
static ParameterInfo t4946_m29020_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t747_0_0_0},
};
extern TypeInfo t4946_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29020_MI = 
{
	"IndexOf", NULL, &t4946_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4946_m29020_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t747_0_0_0;
static ParameterInfo t4946_m29021_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t747_0_0_0},
};
extern TypeInfo t4946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29021_MI = 
{
	"Insert", NULL, &t4946_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4946_m29021_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4946_m29022_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29022_MI = 
{
	"RemoveAt", NULL, &t4946_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4946_m29022_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4946_m29018_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4946_TI;
extern Il2CppType t747_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29018_MI = 
{
	"get_Item", NULL, &t4946_TI, &t747_0_0_0, RuntimeInvoker_t7_t60, t4946_m29018_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t747_0_0_0;
static ParameterInfo t4946_m29019_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t747_0_0_0},
};
extern TypeInfo t4946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29019_MI = 
{
	"set_Item", NULL, &t4946_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4946_m29019_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4946_MIs[] =
{
	&m29020_MI,
	&m29021_MI,
	&m29022_MI,
	&m29018_MI,
	&m29019_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4945_TI;
extern TypeInfo t4947_TI;
static TypeInfo* t4946_ITIs[] = 
{
	&t618_TI,
	&t4945_TI,
	&t4947_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4946_0_0_0;
extern Il2CppType t4946_1_0_0;
struct t4946;
extern TypeInfo t4946_TI;
extern Il2CppGenericClass t4946_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4946_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4946_MIs, t4946_PIs, NULL, NULL, NULL, NULL, NULL, &t4946_TI, t4946_ITIs, NULL, &t1426__CustomAttributeCache, &t4946_TI, &t4946_0_0_0, &t4946_1_0_0, NULL, &t4946_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4948_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>
extern MethodInfo m29023_MI;
static PropertyInfo t4948____Count_PropertyInfo = 
{
	&t4948_TI, "Count", &m29023_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29024_MI;
static PropertyInfo t4948____IsReadOnly_PropertyInfo = 
{
	&t4948_TI, "IsReadOnly", &m29024_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4948_PIs[] =
{
	&t4948____Count_PropertyInfo,
	&t4948____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4948_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29023_MI = 
{
	"get_Count", NULL, &t4948_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4948_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29024_MI = 
{
	"get_IsReadOnly", NULL, &t4948_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1528_0_0_0;
static ParameterInfo t4948_m29025_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1528_0_0_0},
};
extern TypeInfo t4948_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29025_MI = 
{
	"Add", NULL, &t4948_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4948_m29025_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4948_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29026_MI = 
{
	"Clear", NULL, &t4948_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1528_0_0_0;
static ParameterInfo t4948_m29027_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1528_0_0_0},
};
extern TypeInfo t4948_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29027_MI = 
{
	"Contains", NULL, &t4948_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4948_m29027_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3096_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4948_m29028_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3096_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4948_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29028_MI = 
{
	"CopyTo", NULL, &t4948_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4948_m29028_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1528_0_0_0;
static ParameterInfo t4948_m29029_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1528_0_0_0},
};
extern TypeInfo t4948_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29029_MI = 
{
	"Remove", NULL, &t4948_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4948_m29029_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4948_MIs[] =
{
	&m29023_MI,
	&m29024_MI,
	&m29025_MI,
	&m29026_MI,
	&m29027_MI,
	&m29028_MI,
	&m29029_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4950_TI;
static TypeInfo* t4948_ITIs[] = 
{
	&t618_TI,
	&t4950_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4948_0_0_0;
extern Il2CppType t4948_1_0_0;
struct t4948;
extern TypeInfo t4948_TI;
extern Il2CppGenericClass t4948_GC;
TypeInfo t4948_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4948_MIs, t4948_PIs, NULL, NULL, NULL, NULL, NULL, &t4948_TI, t4948_ITIs, NULL, &EmptyCustomAttributesCache, &t4948_TI, &t4948_0_0_0, &t4948_1_0_0, NULL, &t4948_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4950_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._Module>
extern TypeInfo t4950_TI;
extern Il2CppType t3764_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29030_MI = 
{
	"GetEnumerator", NULL, &t4950_TI, &t3764_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4950_MIs[] =
{
	&m29030_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4950_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4950_0_0_0;
extern Il2CppType t4950_1_0_0;
struct t4950;
extern TypeInfo t4950_TI;
extern Il2CppGenericClass t4950_GC;
TypeInfo t4950_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4950_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4950_TI, t4950_ITIs, NULL, &EmptyCustomAttributesCache, &t4950_TI, &t4950_0_0_0, &t4950_1_0_0, NULL, &t4950_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3764_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._Module>
extern MethodInfo m29031_MI;
static PropertyInfo t3764____Current_PropertyInfo = 
{
	&t3764_TI, "Current", &m29031_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3764_PIs[] =
{
	&t3764____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3764_TI;
extern Il2CppType t1528_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29031_MI = 
{
	"get_Current", NULL, &t3764_TI, &t1528_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3764_MIs[] =
{
	&m29031_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3764_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3764_0_0_0;
extern Il2CppType t3764_1_0_0;
struct t3764;
extern TypeInfo t3764_TI;
extern Il2CppGenericClass t3764_GC;
TypeInfo t3764_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3764_MIs, t3764_PIs, NULL, NULL, NULL, NULL, NULL, &t3764_TI, t3764_ITIs, NULL, &EmptyCustomAttributesCache, &t3764_TI, &t3764_0_0_0, &t3764_1_0_0, NULL, &t3764_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2839.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2839_TI;
#include "t2839MD.h"

extern TypeInfo t2839_TI;
extern TypeInfo t1528_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16356_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22079_MI;
struct t52;
#define m22079(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22079_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>
extern Il2CppType t52_0_0_1;
FieldInfo t2839_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2839_TI, offsetof(t2839, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2839_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2839_TI, offsetof(t2839, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2839_FIs[] =
{
	&t2839_f0_FieldInfo,
	&t2839_f1_FieldInfo,
	NULL
};
extern MethodInfo m16353_MI;
static PropertyInfo t2839____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2839_TI, "System.Collections.IEnumerator.Current", &m16353_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16356_MI;
static PropertyInfo t2839____Current_PropertyInfo = 
{
	&t2839_TI, "Current", &m16356_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2839_PIs[] =
{
	&t2839____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2839____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2839_m16352_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2839_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16352_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2839_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2839_m16352_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2839_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16353_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2839_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2839_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16354_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2839_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2839_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16355_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2839_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2839_TI;
extern Il2CppType t1528_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16356_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2839_TI, &t1528_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2839_MIs[] =
{
	&m16352_MI,
	&m16353_MI,
	&m16354_MI,
	&m16355_MI,
	&m16356_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16353_MI;
extern MethodInfo m16355_MI;
extern MethodInfo m16354_MI;
extern MethodInfo m16356_MI;
static MethodInfo* t2839_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16353_MI,
	&m16355_MI,
	&m16354_MI,
	&m16356_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3764_TI;
static TypeInfo* t2839_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3764_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3764_TI;
static Il2CppInterfaceOffsetPair t2839_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3764_TI, 7},
};
extern MethodInfo m16356_MI;
extern TypeInfo t1528_TI;
extern MethodInfo m22079_MI;
static void* t2839_RGCTXData[3] = 
{
	&m16356_MI,
	&t1528_TI,
	&m22079_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2839_0_0_0;
extern Il2CppType t2839_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2839_TI;
extern Il2CppGenericClass t2839_GC;
extern TypeInfo t52_TI;
TypeInfo t2839_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2839_MIs, t2839_PIs, t2839_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2839_TI, t2839_ITIs, t2839_VT, &EmptyCustomAttributesCache, &t2839_TI, &t2839_0_0_0, &t2839_1_0_0, t2839_IOs, &t2839_GC, NULL, NULL, NULL, t2839_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2839)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4949_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>
extern MethodInfo m29032_MI;
extern MethodInfo m29033_MI;
static PropertyInfo t4949____Item_PropertyInfo = 
{
	&t4949_TI, "Item", &m29032_MI, &m29033_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4949_PIs[] =
{
	&t4949____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1528_0_0_0;
static ParameterInfo t4949_m29034_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1528_0_0_0},
};
extern TypeInfo t4949_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29034_MI = 
{
	"IndexOf", NULL, &t4949_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4949_m29034_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1528_0_0_0;
static ParameterInfo t4949_m29035_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1528_0_0_0},
};
extern TypeInfo t4949_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29035_MI = 
{
	"Insert", NULL, &t4949_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4949_m29035_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4949_m29036_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4949_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29036_MI = 
{
	"RemoveAt", NULL, &t4949_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4949_m29036_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4949_m29032_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4949_TI;
extern Il2CppType t1528_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29032_MI = 
{
	"get_Item", NULL, &t4949_TI, &t1528_0_0_0, RuntimeInvoker_t7_t60, t4949_m29032_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1528_0_0_0;
static ParameterInfo t4949_m29033_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1528_0_0_0},
};
extern TypeInfo t4949_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29033_MI = 
{
	"set_Item", NULL, &t4949_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4949_m29033_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4949_MIs[] =
{
	&m29034_MI,
	&m29035_MI,
	&m29036_MI,
	&m29032_MI,
	&m29033_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4948_TI;
extern TypeInfo t4950_TI;
static TypeInfo* t4949_ITIs[] = 
{
	&t618_TI,
	&t4948_TI,
	&t4950_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4949_0_0_0;
extern Il2CppType t4949_1_0_0;
struct t4949;
extern TypeInfo t4949_TI;
extern Il2CppGenericClass t4949_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4949_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4949_MIs, t4949_PIs, NULL, NULL, NULL, NULL, NULL, &t4949_TI, t4949_ITIs, NULL, &t1426__CustomAttributeCache, &t4949_TI, &t4949_0_0_0, &t4949_1_0_0, NULL, &t4949_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3765_TI;

#include "t956.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ParameterBuilder>
extern MethodInfo m29037_MI;
static PropertyInfo t3765____Current_PropertyInfo = 
{
	&t3765_TI, "Current", &m29037_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3765_PIs[] =
{
	&t3765____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3765_TI;
extern Il2CppType t956_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29037_MI = 
{
	"get_Current", NULL, &t3765_TI, &t956_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3765_MIs[] =
{
	&m29037_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3765_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3765_0_0_0;
extern Il2CppType t3765_1_0_0;
struct t3765;
extern TypeInfo t3765_TI;
extern Il2CppGenericClass t3765_GC;
TypeInfo t3765_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3765_MIs, t3765_PIs, NULL, NULL, NULL, NULL, NULL, &t3765_TI, t3765_ITIs, NULL, &EmptyCustomAttributesCache, &t3765_TI, &t3765_0_0_0, &t3765_1_0_0, NULL, &t3765_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2840.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2840_TI;
#include "t2840MD.h"

extern TypeInfo t2840_TI;
extern TypeInfo t956_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16361_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22090_MI;
struct t52;
#define m22090(__this, p0, method) (t956 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22090_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>
extern Il2CppType t52_0_0_1;
FieldInfo t2840_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2840_TI, offsetof(t2840, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2840_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2840_TI, offsetof(t2840, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2840_FIs[] =
{
	&t2840_f0_FieldInfo,
	&t2840_f1_FieldInfo,
	NULL
};
extern MethodInfo m16358_MI;
static PropertyInfo t2840____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2840_TI, "System.Collections.IEnumerator.Current", &m16358_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16361_MI;
static PropertyInfo t2840____Current_PropertyInfo = 
{
	&t2840_TI, "Current", &m16361_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2840_PIs[] =
{
	&t2840____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2840____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2840_m16357_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2840_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16357_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2840_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2840_m16357_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2840_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16358_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2840_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2840_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16359_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2840_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2840_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16360_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2840_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2840_TI;
extern Il2CppType t956_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16361_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2840_TI, &t956_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2840_MIs[] =
{
	&m16357_MI,
	&m16358_MI,
	&m16359_MI,
	&m16360_MI,
	&m16361_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16358_MI;
extern MethodInfo m16360_MI;
extern MethodInfo m16359_MI;
extern MethodInfo m16361_MI;
static MethodInfo* t2840_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16358_MI,
	&m16360_MI,
	&m16359_MI,
	&m16361_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3765_TI;
static TypeInfo* t2840_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3765_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3765_TI;
static Il2CppInterfaceOffsetPair t2840_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3765_TI, 7},
};
extern MethodInfo m16361_MI;
extern TypeInfo t956_TI;
extern MethodInfo m22090_MI;
static void* t2840_RGCTXData[3] = 
{
	&m16361_MI,
	&t956_TI,
	&m22090_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2840_0_0_0;
extern Il2CppType t2840_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2840_TI;
extern Il2CppGenericClass t2840_GC;
extern TypeInfo t52_TI;
TypeInfo t2840_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2840_MIs, t2840_PIs, t2840_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2840_TI, t2840_ITIs, t2840_VT, &EmptyCustomAttributesCache, &t2840_TI, &t2840_0_0_0, &t2840_1_0_0, t2840_IOs, &t2840_GC, NULL, NULL, NULL, t2840_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2840)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4951_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>
extern MethodInfo m29038_MI;
static PropertyInfo t4951____Count_PropertyInfo = 
{
	&t4951_TI, "Count", &m29038_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29039_MI;
static PropertyInfo t4951____IsReadOnly_PropertyInfo = 
{
	&t4951_TI, "IsReadOnly", &m29039_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4951_PIs[] =
{
	&t4951____Count_PropertyInfo,
	&t4951____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4951_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29038_MI = 
{
	"get_Count", NULL, &t4951_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4951_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29039_MI = 
{
	"get_IsReadOnly", NULL, &t4951_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t956_0_0_0;
static ParameterInfo t4951_m29040_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t956_0_0_0},
};
extern TypeInfo t4951_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29040_MI = 
{
	"Add", NULL, &t4951_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4951_m29040_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4951_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29041_MI = 
{
	"Clear", NULL, &t4951_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t956_0_0_0;
static ParameterInfo t4951_m29042_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t956_0_0_0},
};
extern TypeInfo t4951_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29042_MI = 
{
	"Contains", NULL, &t4951_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4951_m29042_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t955_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4951_m29043_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t955_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4951_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29043_MI = 
{
	"CopyTo", NULL, &t4951_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4951_m29043_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t956_0_0_0;
static ParameterInfo t4951_m29044_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t956_0_0_0},
};
extern TypeInfo t4951_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29044_MI = 
{
	"Remove", NULL, &t4951_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4951_m29044_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4951_MIs[] =
{
	&m29038_MI,
	&m29039_MI,
	&m29040_MI,
	&m29041_MI,
	&m29042_MI,
	&m29043_MI,
	&m29044_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4953_TI;
static TypeInfo* t4951_ITIs[] = 
{
	&t618_TI,
	&t4953_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4951_0_0_0;
extern Il2CppType t4951_1_0_0;
struct t4951;
extern TypeInfo t4951_TI;
extern Il2CppGenericClass t4951_GC;
TypeInfo t4951_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4951_MIs, t4951_PIs, NULL, NULL, NULL, NULL, NULL, &t4951_TI, t4951_ITIs, NULL, &EmptyCustomAttributesCache, &t4951_TI, &t4951_0_0_0, &t4951_1_0_0, NULL, &t4951_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4953_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ParameterBuilder>
extern TypeInfo t4953_TI;
extern Il2CppType t3765_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29045_MI = 
{
	"GetEnumerator", NULL, &t4953_TI, &t3765_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4953_MIs[] =
{
	&m29045_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4953_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4953_0_0_0;
extern Il2CppType t4953_1_0_0;
struct t4953;
extern TypeInfo t4953_TI;
extern Il2CppGenericClass t4953_GC;
TypeInfo t4953_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4953_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4953_TI, t4953_ITIs, NULL, &EmptyCustomAttributesCache, &t4953_TI, &t4953_0_0_0, &t4953_1_0_0, NULL, &t4953_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4952_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>
extern MethodInfo m29046_MI;
extern MethodInfo m29047_MI;
static PropertyInfo t4952____Item_PropertyInfo = 
{
	&t4952_TI, "Item", &m29046_MI, &m29047_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4952_PIs[] =
{
	&t4952____Item_PropertyInfo,
	NULL
};
extern Il2CppType t956_0_0_0;
static ParameterInfo t4952_m29048_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t956_0_0_0},
};
extern TypeInfo t4952_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29048_MI = 
{
	"IndexOf", NULL, &t4952_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4952_m29048_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t956_0_0_0;
static ParameterInfo t4952_m29049_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t956_0_0_0},
};
extern TypeInfo t4952_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29049_MI = 
{
	"Insert", NULL, &t4952_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4952_m29049_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4952_m29050_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4952_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29050_MI = 
{
	"RemoveAt", NULL, &t4952_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4952_m29050_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4952_m29046_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4952_TI;
extern Il2CppType t956_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29046_MI = 
{
	"get_Item", NULL, &t4952_TI, &t956_0_0_0, RuntimeInvoker_t7_t60, t4952_m29046_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t956_0_0_0;
static ParameterInfo t4952_m29047_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t956_0_0_0},
};
extern TypeInfo t4952_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29047_MI = 
{
	"set_Item", NULL, &t4952_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4952_m29047_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4952_MIs[] =
{
	&m29048_MI,
	&m29049_MI,
	&m29050_MI,
	&m29046_MI,
	&m29047_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4951_TI;
extern TypeInfo t4953_TI;
static TypeInfo* t4952_ITIs[] = 
{
	&t618_TI,
	&t4951_TI,
	&t4953_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4952_0_0_0;
extern Il2CppType t4952_1_0_0;
struct t4952;
extern TypeInfo t4952_TI;
extern Il2CppGenericClass t4952_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4952_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4952_MIs, t4952_PIs, NULL, NULL, NULL, NULL, NULL, &t4952_TI, t4952_ITIs, NULL, &t1426__CustomAttributeCache, &t4952_TI, &t4952_0_0_0, &t4952_1_0_0, NULL, &t4952_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4954_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>
extern MethodInfo m29051_MI;
static PropertyInfo t4954____Count_PropertyInfo = 
{
	&t4954_TI, "Count", &m29051_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29052_MI;
static PropertyInfo t4954____IsReadOnly_PropertyInfo = 
{
	&t4954_TI, "IsReadOnly", &m29052_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4954_PIs[] =
{
	&t4954____Count_PropertyInfo,
	&t4954____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4954_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29051_MI = 
{
	"get_Count", NULL, &t4954_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4954_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29052_MI = 
{
	"get_IsReadOnly", NULL, &t4954_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1529_0_0_0;
static ParameterInfo t4954_m29053_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1529_0_0_0},
};
extern TypeInfo t4954_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29053_MI = 
{
	"Add", NULL, &t4954_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4954_m29053_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4954_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29054_MI = 
{
	"Clear", NULL, &t4954_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1529_0_0_0;
static ParameterInfo t4954_m29055_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1529_0_0_0},
};
extern TypeInfo t4954_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29055_MI = 
{
	"Contains", NULL, &t4954_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4954_m29055_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3097_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4954_m29056_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3097_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4954_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29056_MI = 
{
	"CopyTo", NULL, &t4954_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4954_m29056_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1529_0_0_0;
static ParameterInfo t4954_m29057_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1529_0_0_0},
};
extern TypeInfo t4954_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29057_MI = 
{
	"Remove", NULL, &t4954_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4954_m29057_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4954_MIs[] =
{
	&m29051_MI,
	&m29052_MI,
	&m29053_MI,
	&m29054_MI,
	&m29055_MI,
	&m29056_MI,
	&m29057_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4956_TI;
static TypeInfo* t4954_ITIs[] = 
{
	&t618_TI,
	&t4956_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4954_0_0_0;
extern Il2CppType t4954_1_0_0;
struct t4954;
extern TypeInfo t4954_TI;
extern Il2CppGenericClass t4954_GC;
TypeInfo t4954_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4954_MIs, t4954_PIs, NULL, NULL, NULL, NULL, NULL, &t4954_TI, t4954_ITIs, NULL, &EmptyCustomAttributesCache, &t4954_TI, &t4954_0_0_0, &t4954_1_0_0, NULL, &t4954_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4956_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ParameterBuilder>
extern TypeInfo t4956_TI;
extern Il2CppType t3766_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29058_MI = 
{
	"GetEnumerator", NULL, &t4956_TI, &t3766_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4956_MIs[] =
{
	&m29058_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4956_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4956_0_0_0;
extern Il2CppType t4956_1_0_0;
struct t4956;
extern TypeInfo t4956_TI;
extern Il2CppGenericClass t4956_GC;
TypeInfo t4956_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4956_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4956_TI, t4956_ITIs, NULL, &EmptyCustomAttributesCache, &t4956_TI, &t4956_0_0_0, &t4956_1_0_0, NULL, &t4956_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3766_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>
extern MethodInfo m29059_MI;
static PropertyInfo t3766____Current_PropertyInfo = 
{
	&t3766_TI, "Current", &m29059_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3766_PIs[] =
{
	&t3766____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3766_TI;
extern Il2CppType t1529_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29059_MI = 
{
	"get_Current", NULL, &t3766_TI, &t1529_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3766_MIs[] =
{
	&m29059_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3766_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3766_0_0_0;
extern Il2CppType t3766_1_0_0;
struct t3766;
extern TypeInfo t3766_TI;
extern Il2CppGenericClass t3766_GC;
TypeInfo t3766_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3766_MIs, t3766_PIs, NULL, NULL, NULL, NULL, NULL, &t3766_TI, t3766_ITIs, NULL, &EmptyCustomAttributesCache, &t3766_TI, &t3766_0_0_0, &t3766_1_0_0, NULL, &t3766_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2841.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2841_TI;
#include "t2841MD.h"

extern TypeInfo t2841_TI;
extern TypeInfo t1529_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16366_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22101_MI;
struct t52;
#define m22101(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22101_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>
extern Il2CppType t52_0_0_1;
FieldInfo t2841_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2841_TI, offsetof(t2841, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2841_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2841_TI, offsetof(t2841, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2841_FIs[] =
{
	&t2841_f0_FieldInfo,
	&t2841_f1_FieldInfo,
	NULL
};
extern MethodInfo m16363_MI;
static PropertyInfo t2841____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2841_TI, "System.Collections.IEnumerator.Current", &m16363_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16366_MI;
static PropertyInfo t2841____Current_PropertyInfo = 
{
	&t2841_TI, "Current", &m16366_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2841_PIs[] =
{
	&t2841____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2841____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2841_m16362_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2841_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16362_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2841_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2841_m16362_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2841_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16363_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2841_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2841_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16364_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2841_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2841_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16365_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2841_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2841_TI;
extern Il2CppType t1529_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16366_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2841_TI, &t1529_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2841_MIs[] =
{
	&m16362_MI,
	&m16363_MI,
	&m16364_MI,
	&m16365_MI,
	&m16366_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16363_MI;
extern MethodInfo m16365_MI;
extern MethodInfo m16364_MI;
extern MethodInfo m16366_MI;
static MethodInfo* t2841_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16363_MI,
	&m16365_MI,
	&m16364_MI,
	&m16366_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3766_TI;
static TypeInfo* t2841_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3766_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3766_TI;
static Il2CppInterfaceOffsetPair t2841_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3766_TI, 7},
};
extern MethodInfo m16366_MI;
extern TypeInfo t1529_TI;
extern MethodInfo m22101_MI;
static void* t2841_RGCTXData[3] = 
{
	&m16366_MI,
	&t1529_TI,
	&m22101_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2841_0_0_0;
extern Il2CppType t2841_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2841_TI;
extern Il2CppGenericClass t2841_GC;
extern TypeInfo t52_TI;
TypeInfo t2841_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2841_MIs, t2841_PIs, t2841_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2841_TI, t2841_ITIs, t2841_VT, &EmptyCustomAttributesCache, &t2841_TI, &t2841_0_0_0, &t2841_1_0_0, t2841_IOs, &t2841_GC, NULL, NULL, NULL, t2841_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2841)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4955_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>
extern MethodInfo m29060_MI;
extern MethodInfo m29061_MI;
static PropertyInfo t4955____Item_PropertyInfo = 
{
	&t4955_TI, "Item", &m29060_MI, &m29061_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4955_PIs[] =
{
	&t4955____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1529_0_0_0;
static ParameterInfo t4955_m29062_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1529_0_0_0},
};
extern TypeInfo t4955_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29062_MI = 
{
	"IndexOf", NULL, &t4955_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4955_m29062_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1529_0_0_0;
static ParameterInfo t4955_m29063_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1529_0_0_0},
};
extern TypeInfo t4955_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29063_MI = 
{
	"Insert", NULL, &t4955_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4955_m29063_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4955_m29064_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4955_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29064_MI = 
{
	"RemoveAt", NULL, &t4955_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4955_m29064_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4955_m29060_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4955_TI;
extern Il2CppType t1529_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29060_MI = 
{
	"get_Item", NULL, &t4955_TI, &t1529_0_0_0, RuntimeInvoker_t7_t60, t4955_m29060_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1529_0_0_0;
static ParameterInfo t4955_m29061_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1529_0_0_0},
};
extern TypeInfo t4955_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29061_MI = 
{
	"set_Item", NULL, &t4955_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4955_m29061_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4955_MIs[] =
{
	&m29062_MI,
	&m29063_MI,
	&m29064_MI,
	&m29060_MI,
	&m29061_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4954_TI;
extern TypeInfo t4956_TI;
static TypeInfo* t4955_ITIs[] = 
{
	&t618_TI,
	&t4954_TI,
	&t4956_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4955_0_0_0;
extern Il2CppType t4955_1_0_0;
struct t4955;
extern TypeInfo t4955_TI;
extern Il2CppGenericClass t4955_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4955_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4955_MIs, t4955_PIs, NULL, NULL, NULL, NULL, NULL, &t4955_TI, t4955_ITIs, NULL, &t1426__CustomAttributeCache, &t4955_TI, &t4955_0_0_0, &t4955_1_0_0, NULL, &t4955_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3767_TI;

#include "t963.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern MethodInfo m29065_MI;
static PropertyInfo t3767____Current_PropertyInfo = 
{
	&t3767_TI, "Current", &m29065_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3767_PIs[] =
{
	&t3767____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3767_TI;
extern Il2CppType t963_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29065_MI = 
{
	"get_Current", NULL, &t3767_TI, &t963_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3767_MIs[] =
{
	&m29065_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3767_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3767_0_0_0;
extern Il2CppType t3767_1_0_0;
struct t3767;
extern TypeInfo t3767_TI;
extern Il2CppGenericClass t3767_GC;
TypeInfo t3767_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3767_MIs, t3767_PIs, NULL, NULL, NULL, NULL, NULL, &t3767_TI, t3767_ITIs, NULL, &EmptyCustomAttributesCache, &t3767_TI, &t3767_0_0_0, &t3767_1_0_0, NULL, &t3767_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2842.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2842_TI;
#include "t2842MD.h"

extern TypeInfo t2842_TI;
extern TypeInfo t963_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16371_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22112_MI;
struct t52;
#define m22112(__this, p0, method) (t963 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22112_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern Il2CppType t52_0_0_1;
FieldInfo t2842_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2842_TI, offsetof(t2842, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2842_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2842_TI, offsetof(t2842, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2842_FIs[] =
{
	&t2842_f0_FieldInfo,
	&t2842_f1_FieldInfo,
	NULL
};
extern MethodInfo m16368_MI;
static PropertyInfo t2842____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2842_TI, "System.Collections.IEnumerator.Current", &m16368_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16371_MI;
static PropertyInfo t2842____Current_PropertyInfo = 
{
	&t2842_TI, "Current", &m16371_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2842_PIs[] =
{
	&t2842____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2842____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2842_m16367_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2842_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16367_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2842_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2842_m16367_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2842_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16368_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2842_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2842_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16369_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2842_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2842_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16370_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2842_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2842_TI;
extern Il2CppType t963_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16371_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2842_TI, &t963_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2842_MIs[] =
{
	&m16367_MI,
	&m16368_MI,
	&m16369_MI,
	&m16370_MI,
	&m16371_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16368_MI;
extern MethodInfo m16370_MI;
extern MethodInfo m16369_MI;
extern MethodInfo m16371_MI;
static MethodInfo* t2842_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16368_MI,
	&m16370_MI,
	&m16369_MI,
	&m16371_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3767_TI;
static TypeInfo* t2842_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3767_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3767_TI;
static Il2CppInterfaceOffsetPair t2842_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3767_TI, 7},
};
extern MethodInfo m16371_MI;
extern TypeInfo t963_TI;
extern MethodInfo m22112_MI;
static void* t2842_RGCTXData[3] = 
{
	&m16371_MI,
	&t963_TI,
	&m22112_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2842_0_0_0;
extern Il2CppType t2842_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2842_TI;
extern Il2CppGenericClass t2842_GC;
extern TypeInfo t52_TI;
TypeInfo t2842_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2842_MIs, t2842_PIs, t2842_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2842_TI, t2842_ITIs, t2842_VT, &EmptyCustomAttributesCache, &t2842_TI, &t2842_0_0_0, &t2842_1_0_0, t2842_IOs, &t2842_GC, NULL, NULL, NULL, t2842_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2842)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4957_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern MethodInfo m29066_MI;
static PropertyInfo t4957____Count_PropertyInfo = 
{
	&t4957_TI, "Count", &m29066_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29067_MI;
static PropertyInfo t4957____IsReadOnly_PropertyInfo = 
{
	&t4957_TI, "IsReadOnly", &m29067_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4957_PIs[] =
{
	&t4957____Count_PropertyInfo,
	&t4957____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4957_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29066_MI = 
{
	"get_Count", NULL, &t4957_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4957_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29067_MI = 
{
	"get_IsReadOnly", NULL, &t4957_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t963_0_0_0;
static ParameterInfo t4957_m29068_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t963_0_0_0},
};
extern TypeInfo t4957_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29068_MI = 
{
	"Add", NULL, &t4957_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4957_m29068_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4957_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29069_MI = 
{
	"Clear", NULL, &t4957_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t963_0_0_0;
static ParameterInfo t4957_m29070_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t963_0_0_0},
};
extern TypeInfo t4957_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29070_MI = 
{
	"Contains", NULL, &t4957_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4957_m29070_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t965_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4957_m29071_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t965_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4957_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29071_MI = 
{
	"CopyTo", NULL, &t4957_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4957_m29071_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t963_0_0_0;
static ParameterInfo t4957_m29072_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t963_0_0_0},
};
extern TypeInfo t4957_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29072_MI = 
{
	"Remove", NULL, &t4957_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4957_m29072_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4957_MIs[] =
{
	&m29066_MI,
	&m29067_MI,
	&m29068_MI,
	&m29069_MI,
	&m29070_MI,
	&m29071_MI,
	&m29072_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4959_TI;
static TypeInfo* t4957_ITIs[] = 
{
	&t618_TI,
	&t4959_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4957_0_0_0;
extern Il2CppType t4957_1_0_0;
struct t4957;
extern TypeInfo t4957_TI;
extern Il2CppGenericClass t4957_GC;
TypeInfo t4957_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4957_MIs, t4957_PIs, NULL, NULL, NULL, NULL, NULL, &t4957_TI, t4957_ITIs, NULL, &EmptyCustomAttributesCache, &t4957_TI, &t4957_0_0_0, &t4957_1_0_0, NULL, &t4957_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4959_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern TypeInfo t4959_TI;
extern Il2CppType t3767_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29073_MI = 
{
	"GetEnumerator", NULL, &t4959_TI, &t3767_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4959_MIs[] =
{
	&m29073_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4959_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4959_0_0_0;
extern Il2CppType t4959_1_0_0;
struct t4959;
extern TypeInfo t4959_TI;
extern Il2CppGenericClass t4959_GC;
TypeInfo t4959_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4959_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4959_TI, t4959_ITIs, NULL, &EmptyCustomAttributesCache, &t4959_TI, &t4959_0_0_0, &t4959_1_0_0, NULL, &t4959_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4958_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern MethodInfo m29074_MI;
extern MethodInfo m29075_MI;
static PropertyInfo t4958____Item_PropertyInfo = 
{
	&t4958_TI, "Item", &m29074_MI, &m29075_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4958_PIs[] =
{
	&t4958____Item_PropertyInfo,
	NULL
};
extern Il2CppType t963_0_0_0;
static ParameterInfo t4958_m29076_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t963_0_0_0},
};
extern TypeInfo t4958_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29076_MI = 
{
	"IndexOf", NULL, &t4958_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4958_m29076_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t963_0_0_0;
static ParameterInfo t4958_m29077_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t963_0_0_0},
};
extern TypeInfo t4958_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29077_MI = 
{
	"Insert", NULL, &t4958_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4958_m29077_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4958_m29078_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4958_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29078_MI = 
{
	"RemoveAt", NULL, &t4958_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4958_m29078_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4958_m29074_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4958_TI;
extern Il2CppType t963_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29074_MI = 
{
	"get_Item", NULL, &t4958_TI, &t963_0_0_0, RuntimeInvoker_t7_t60, t4958_m29074_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t963_0_0_0;
static ParameterInfo t4958_m29075_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t963_0_0_0},
};
extern TypeInfo t4958_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29075_MI = 
{
	"set_Item", NULL, &t4958_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4958_m29075_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4958_MIs[] =
{
	&m29076_MI,
	&m29077_MI,
	&m29078_MI,
	&m29074_MI,
	&m29075_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4957_TI;
extern TypeInfo t4959_TI;
static TypeInfo* t4958_ITIs[] = 
{
	&t618_TI,
	&t4957_TI,
	&t4959_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4958_0_0_0;
extern Il2CppType t4958_1_0_0;
struct t4958;
extern TypeInfo t4958_TI;
extern Il2CppGenericClass t4958_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4958_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4958_MIs, t4958_PIs, NULL, NULL, NULL, NULL, NULL, &t4958_TI, t4958_ITIs, NULL, &t1426__CustomAttributeCache, &t4958_TI, &t4958_0_0_0, &t4958_1_0_0, NULL, &t4958_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3768_TI;

#include "t964.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.MethodBuilder>
extern MethodInfo m29079_MI;
static PropertyInfo t3768____Current_PropertyInfo = 
{
	&t3768_TI, "Current", &m29079_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3768_PIs[] =
{
	&t3768____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3768_TI;
extern Il2CppType t964_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29079_MI = 
{
	"get_Current", NULL, &t3768_TI, &t964_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3768_MIs[] =
{
	&m29079_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3768_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3768_0_0_0;
extern Il2CppType t3768_1_0_0;
struct t3768;
extern TypeInfo t3768_TI;
extern Il2CppGenericClass t3768_GC;
TypeInfo t3768_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3768_MIs, t3768_PIs, NULL, NULL, NULL, NULL, NULL, &t3768_TI, t3768_ITIs, NULL, &EmptyCustomAttributesCache, &t3768_TI, &t3768_0_0_0, &t3768_1_0_0, NULL, &t3768_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2843.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2843_TI;
#include "t2843MD.h"

extern TypeInfo t2843_TI;
extern TypeInfo t964_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16376_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22123_MI;
struct t52;
#define m22123(__this, p0, method) (t964 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22123_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>
extern Il2CppType t52_0_0_1;
FieldInfo t2843_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2843_TI, offsetof(t2843, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2843_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2843_TI, offsetof(t2843, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2843_FIs[] =
{
	&t2843_f0_FieldInfo,
	&t2843_f1_FieldInfo,
	NULL
};
extern MethodInfo m16373_MI;
static PropertyInfo t2843____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2843_TI, "System.Collections.IEnumerator.Current", &m16373_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16376_MI;
static PropertyInfo t2843____Current_PropertyInfo = 
{
	&t2843_TI, "Current", &m16376_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2843_PIs[] =
{
	&t2843____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2843____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2843_m16372_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2843_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16372_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2843_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2843_m16372_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2843_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16373_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2843_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2843_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16374_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2843_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2843_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16375_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2843_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2843_TI;
extern Il2CppType t964_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16376_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2843_TI, &t964_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2843_MIs[] =
{
	&m16372_MI,
	&m16373_MI,
	&m16374_MI,
	&m16375_MI,
	&m16376_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16373_MI;
extern MethodInfo m16375_MI;
extern MethodInfo m16374_MI;
extern MethodInfo m16376_MI;
static MethodInfo* t2843_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16373_MI,
	&m16375_MI,
	&m16374_MI,
	&m16376_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3768_TI;
static TypeInfo* t2843_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3768_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3768_TI;
static Il2CppInterfaceOffsetPair t2843_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3768_TI, 7},
};
extern MethodInfo m16376_MI;
extern TypeInfo t964_TI;
extern MethodInfo m22123_MI;
static void* t2843_RGCTXData[3] = 
{
	&m16376_MI,
	&t964_TI,
	&m22123_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2843_0_0_0;
extern Il2CppType t2843_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2843_TI;
extern Il2CppGenericClass t2843_GC;
extern TypeInfo t52_TI;
TypeInfo t2843_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2843_MIs, t2843_PIs, t2843_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2843_TI, t2843_ITIs, t2843_VT, &EmptyCustomAttributesCache, &t2843_TI, &t2843_0_0_0, &t2843_1_0_0, t2843_IOs, &t2843_GC, NULL, NULL, NULL, t2843_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2843)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4960_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>
extern MethodInfo m29080_MI;
static PropertyInfo t4960____Count_PropertyInfo = 
{
	&t4960_TI, "Count", &m29080_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29081_MI;
static PropertyInfo t4960____IsReadOnly_PropertyInfo = 
{
	&t4960_TI, "IsReadOnly", &m29081_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4960_PIs[] =
{
	&t4960____Count_PropertyInfo,
	&t4960____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4960_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29080_MI = 
{
	"get_Count", NULL, &t4960_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4960_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29081_MI = 
{
	"get_IsReadOnly", NULL, &t4960_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t964_0_0_0;
static ParameterInfo t4960_m29082_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t964_0_0_0},
};
extern TypeInfo t4960_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29082_MI = 
{
	"Add", NULL, &t4960_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4960_m29082_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4960_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29083_MI = 
{
	"Clear", NULL, &t4960_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t964_0_0_0;
static ParameterInfo t4960_m29084_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t964_0_0_0},
};
extern TypeInfo t4960_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29084_MI = 
{
	"Contains", NULL, &t4960_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4960_m29084_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t967_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4960_m29085_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t967_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4960_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29085_MI = 
{
	"CopyTo", NULL, &t4960_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4960_m29085_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t964_0_0_0;
static ParameterInfo t4960_m29086_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t964_0_0_0},
};
extern TypeInfo t4960_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29086_MI = 
{
	"Remove", NULL, &t4960_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4960_m29086_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4960_MIs[] =
{
	&m29080_MI,
	&m29081_MI,
	&m29082_MI,
	&m29083_MI,
	&m29084_MI,
	&m29085_MI,
	&m29086_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4962_TI;
static TypeInfo* t4960_ITIs[] = 
{
	&t618_TI,
	&t4962_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4960_0_0_0;
extern Il2CppType t4960_1_0_0;
struct t4960;
extern TypeInfo t4960_TI;
extern Il2CppGenericClass t4960_GC;
TypeInfo t4960_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4960_MIs, t4960_PIs, NULL, NULL, NULL, NULL, NULL, &t4960_TI, t4960_ITIs, NULL, &EmptyCustomAttributesCache, &t4960_TI, &t4960_0_0_0, &t4960_1_0_0, NULL, &t4960_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4962_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.MethodBuilder>
extern TypeInfo t4962_TI;
extern Il2CppType t3768_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29087_MI = 
{
	"GetEnumerator", NULL, &t4962_TI, &t3768_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4962_MIs[] =
{
	&m29087_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4962_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4962_0_0_0;
extern Il2CppType t4962_1_0_0;
struct t4962;
extern TypeInfo t4962_TI;
extern Il2CppGenericClass t4962_GC;
TypeInfo t4962_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4962_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4962_TI, t4962_ITIs, NULL, &EmptyCustomAttributesCache, &t4962_TI, &t4962_0_0_0, &t4962_1_0_0, NULL, &t4962_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4961_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>
extern MethodInfo m29088_MI;
extern MethodInfo m29089_MI;
static PropertyInfo t4961____Item_PropertyInfo = 
{
	&t4961_TI, "Item", &m29088_MI, &m29089_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4961_PIs[] =
{
	&t4961____Item_PropertyInfo,
	NULL
};
extern Il2CppType t964_0_0_0;
static ParameterInfo t4961_m29090_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t964_0_0_0},
};
extern TypeInfo t4961_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29090_MI = 
{
	"IndexOf", NULL, &t4961_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4961_m29090_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t964_0_0_0;
static ParameterInfo t4961_m29091_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t964_0_0_0},
};
extern TypeInfo t4961_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29091_MI = 
{
	"Insert", NULL, &t4961_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4961_m29091_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4961_m29092_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4961_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29092_MI = 
{
	"RemoveAt", NULL, &t4961_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4961_m29092_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4961_m29088_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4961_TI;
extern Il2CppType t964_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29088_MI = 
{
	"get_Item", NULL, &t4961_TI, &t964_0_0_0, RuntimeInvoker_t7_t60, t4961_m29088_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t964_0_0_0;
static ParameterInfo t4961_m29089_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t964_0_0_0},
};
extern TypeInfo t4961_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29089_MI = 
{
	"set_Item", NULL, &t4961_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4961_m29089_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4961_MIs[] =
{
	&m29090_MI,
	&m29091_MI,
	&m29092_MI,
	&m29088_MI,
	&m29089_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4960_TI;
extern TypeInfo t4962_TI;
static TypeInfo* t4961_ITIs[] = 
{
	&t618_TI,
	&t4960_TI,
	&t4962_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4961_0_0_0;
extern Il2CppType t4961_1_0_0;
struct t4961;
extern TypeInfo t4961_TI;
extern Il2CppGenericClass t4961_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4961_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4961_MIs, t4961_PIs, NULL, NULL, NULL, NULL, NULL, &t4961_TI, t4961_ITIs, NULL, &t1426__CustomAttributeCache, &t4961_TI, &t4961_0_0_0, &t4961_1_0_0, NULL, &t4961_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4963_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>
extern MethodInfo m29093_MI;
static PropertyInfo t4963____Count_PropertyInfo = 
{
	&t4963_TI, "Count", &m29093_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29094_MI;
static PropertyInfo t4963____IsReadOnly_PropertyInfo = 
{
	&t4963_TI, "IsReadOnly", &m29094_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4963_PIs[] =
{
	&t4963____Count_PropertyInfo,
	&t4963____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4963_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29093_MI = 
{
	"get_Count", NULL, &t4963_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4963_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29094_MI = 
{
	"get_IsReadOnly", NULL, &t4963_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1525_0_0_0;
static ParameterInfo t4963_m29095_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1525_0_0_0},
};
extern TypeInfo t4963_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29095_MI = 
{
	"Add", NULL, &t4963_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4963_m29095_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4963_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29096_MI = 
{
	"Clear", NULL, &t4963_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1525_0_0_0;
static ParameterInfo t4963_m29097_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1525_0_0_0},
};
extern TypeInfo t4963_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29097_MI = 
{
	"Contains", NULL, &t4963_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4963_m29097_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3098_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4963_m29098_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3098_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4963_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29098_MI = 
{
	"CopyTo", NULL, &t4963_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4963_m29098_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1525_0_0_0;
static ParameterInfo t4963_m29099_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1525_0_0_0},
};
extern TypeInfo t4963_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29099_MI = 
{
	"Remove", NULL, &t4963_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4963_m29099_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4963_MIs[] =
{
	&m29093_MI,
	&m29094_MI,
	&m29095_MI,
	&m29096_MI,
	&m29097_MI,
	&m29098_MI,
	&m29099_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4965_TI;
static TypeInfo* t4963_ITIs[] = 
{
	&t618_TI,
	&t4965_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4963_0_0_0;
extern Il2CppType t4963_1_0_0;
struct t4963;
extern TypeInfo t4963_TI;
extern Il2CppGenericClass t4963_GC;
TypeInfo t4963_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4963_MIs, t4963_PIs, NULL, NULL, NULL, NULL, NULL, &t4963_TI, t4963_ITIs, NULL, &EmptyCustomAttributesCache, &t4963_TI, &t4963_0_0_0, &t4963_1_0_0, NULL, &t4963_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4965_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodBuilder>
extern TypeInfo t4965_TI;
extern Il2CppType t3769_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29100_MI = 
{
	"GetEnumerator", NULL, &t4965_TI, &t3769_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4965_MIs[] =
{
	&m29100_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4965_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4965_0_0_0;
extern Il2CppType t4965_1_0_0;
struct t4965;
extern TypeInfo t4965_TI;
extern Il2CppGenericClass t4965_GC;
TypeInfo t4965_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4965_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4965_TI, t4965_ITIs, NULL, &EmptyCustomAttributesCache, &t4965_TI, &t4965_0_0_0, &t4965_1_0_0, NULL, &t4965_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3769_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodBuilder>
extern MethodInfo m29101_MI;
static PropertyInfo t3769____Current_PropertyInfo = 
{
	&t3769_TI, "Current", &m29101_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3769_PIs[] =
{
	&t3769____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3769_TI;
extern Il2CppType t1525_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29101_MI = 
{
	"get_Current", NULL, &t3769_TI, &t1525_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3769_MIs[] =
{
	&m29101_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3769_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3769_0_0_0;
extern Il2CppType t3769_1_0_0;
struct t3769;
extern TypeInfo t3769_TI;
extern Il2CppGenericClass t3769_GC;
TypeInfo t3769_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3769_MIs, t3769_PIs, NULL, NULL, NULL, NULL, NULL, &t3769_TI, t3769_ITIs, NULL, &EmptyCustomAttributesCache, &t3769_TI, &t3769_0_0_0, &t3769_1_0_0, NULL, &t3769_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2844.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2844_TI;
#include "t2844MD.h"

extern TypeInfo t2844_TI;
extern TypeInfo t1525_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16381_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22134_MI;
struct t52;
#define m22134(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22134_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>
extern Il2CppType t52_0_0_1;
FieldInfo t2844_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2844_TI, offsetof(t2844, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2844_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2844_TI, offsetof(t2844, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2844_FIs[] =
{
	&t2844_f0_FieldInfo,
	&t2844_f1_FieldInfo,
	NULL
};
extern MethodInfo m16378_MI;
static PropertyInfo t2844____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2844_TI, "System.Collections.IEnumerator.Current", &m16378_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16381_MI;
static PropertyInfo t2844____Current_PropertyInfo = 
{
	&t2844_TI, "Current", &m16381_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2844_PIs[] =
{
	&t2844____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2844____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2844_m16377_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2844_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16377_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2844_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2844_m16377_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2844_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16378_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2844_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2844_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16379_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2844_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2844_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16380_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2844_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2844_TI;
extern Il2CppType t1525_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16381_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2844_TI, &t1525_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2844_MIs[] =
{
	&m16377_MI,
	&m16378_MI,
	&m16379_MI,
	&m16380_MI,
	&m16381_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16378_MI;
extern MethodInfo m16380_MI;
extern MethodInfo m16379_MI;
extern MethodInfo m16381_MI;
static MethodInfo* t2844_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16378_MI,
	&m16380_MI,
	&m16379_MI,
	&m16381_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3769_TI;
static TypeInfo* t2844_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3769_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3769_TI;
static Il2CppInterfaceOffsetPair t2844_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3769_TI, 7},
};
extern MethodInfo m16381_MI;
extern TypeInfo t1525_TI;
extern MethodInfo m22134_MI;
static void* t2844_RGCTXData[3] = 
{
	&m16381_MI,
	&t1525_TI,
	&m22134_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2844_0_0_0;
extern Il2CppType t2844_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2844_TI;
extern Il2CppGenericClass t2844_GC;
extern TypeInfo t52_TI;
TypeInfo t2844_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2844_MIs, t2844_PIs, t2844_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2844_TI, t2844_ITIs, t2844_VT, &EmptyCustomAttributesCache, &t2844_TI, &t2844_0_0_0, &t2844_1_0_0, t2844_IOs, &t2844_GC, NULL, NULL, NULL, t2844_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2844)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4964_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>
extern MethodInfo m29102_MI;
extern MethodInfo m29103_MI;
static PropertyInfo t4964____Item_PropertyInfo = 
{
	&t4964_TI, "Item", &m29102_MI, &m29103_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4964_PIs[] =
{
	&t4964____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1525_0_0_0;
static ParameterInfo t4964_m29104_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1525_0_0_0},
};
extern TypeInfo t4964_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29104_MI = 
{
	"IndexOf", NULL, &t4964_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4964_m29104_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1525_0_0_0;
static ParameterInfo t4964_m29105_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1525_0_0_0},
};
extern TypeInfo t4964_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29105_MI = 
{
	"Insert", NULL, &t4964_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4964_m29105_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4964_m29106_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4964_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29106_MI = 
{
	"RemoveAt", NULL, &t4964_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4964_m29106_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4964_m29102_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4964_TI;
extern Il2CppType t1525_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29102_MI = 
{
	"get_Item", NULL, &t4964_TI, &t1525_0_0_0, RuntimeInvoker_t7_t60, t4964_m29102_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1525_0_0_0;
static ParameterInfo t4964_m29103_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1525_0_0_0},
};
extern TypeInfo t4964_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29103_MI = 
{
	"set_Item", NULL, &t4964_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4964_m29103_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4964_MIs[] =
{
	&m29104_MI,
	&m29105_MI,
	&m29106_MI,
	&m29102_MI,
	&m29103_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4963_TI;
extern TypeInfo t4965_TI;
static TypeInfo* t4964_ITIs[] = 
{
	&t618_TI,
	&t4963_TI,
	&t4965_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4964_0_0_0;
extern Il2CppType t4964_1_0_0;
struct t4964;
extern TypeInfo t4964_TI;
extern Il2CppGenericClass t4964_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4964_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4964_MIs, t4964_PIs, NULL, NULL, NULL, NULL, NULL, &t4964_TI, t4964_ITIs, NULL, &t1426__CustomAttributeCache, &t4964_TI, &t4964_0_0_0, &t4964_1_0_0, NULL, &t4964_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
