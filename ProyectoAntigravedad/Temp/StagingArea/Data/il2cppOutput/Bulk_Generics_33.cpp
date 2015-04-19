#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2924.h"
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
extern TypeInfo t2924_TI;
#include "t2924MD.h"

#include "t7.h"
#include "t1107.h"
#include "t60.h"
#include "t34.h"
#include "t1295.h"
#include "t53.h"
#include "t52.h"
#include "t55.h"
extern TypeInfo t2924_TI;
extern TypeInfo t1107_TI;
extern TypeInfo t1295_TI;
#include "t1295MD.h"
#include "t52MD.h"
extern MethodInfo m16781_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23014_MI;
struct t52;
#include "t88.h"
 int32_t m23014 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m23014_MI;


extern MethodInfo m16777_MI;
 void m16777 (t2924 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16778_MI;
 t7 * m16778 (t2924 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16781(__this, &m16781_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1107_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16779_MI;
 void m16779 (t2924 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16780_MI;
 bool m16780 (t2924 * __this, MethodInfo* method){
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
extern MethodInfo m16781_MI;
 int32_t m16781 (t2924 * __this, MethodInfo* method){
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
		int32_t L_8 = m23014(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m23014_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern Il2CppType t52_0_0_1;
FieldInfo t2924_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2924_TI, offsetof(t2924, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2924_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2924_TI, offsetof(t2924, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2924_FIs[] =
{
	&t2924_f0_FieldInfo,
	&t2924_f1_FieldInfo,
	NULL
};
extern MethodInfo m16778_MI;
static PropertyInfo t2924____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2924_TI, "System.Collections.IEnumerator.Current", &m16778_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16781_MI;
static PropertyInfo t2924____Current_PropertyInfo = 
{
	&t2924_TI, "Current", &m16781_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2924_PIs[] =
{
	&t2924____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2924____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2924_m16777_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2924_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16777_MI = 
{
	".ctor", (methodPointerType)&m16777, &t2924_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2924_m16777_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2924_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16778_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16778, &t2924_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2924_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16779_MI = 
{
	"Dispose", (methodPointerType)&m16779, &t2924_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2924_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16780_MI = 
{
	"MoveNext", (methodPointerType)&m16780, &t2924_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2924_TI;
extern Il2CppType t1107_0_0_0;
extern void* RuntimeInvoker_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m16781_MI = 
{
	"get_Current", (methodPointerType)&m16781, &t2924_TI, &t1107_0_0_0, RuntimeInvoker_t1107, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2924_MIs[] =
{
	&m16777_MI,
	&m16778_MI,
	&m16779_MI,
	&m16780_MI,
	&m16781_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16778_MI;
extern MethodInfo m16780_MI;
extern MethodInfo m16779_MI;
extern MethodInfo m16781_MI;
static MethodInfo* t2924_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16778_MI,
	&m16780_MI,
	&m16779_MI,
	&m16781_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3849_TI;
static TypeInfo* t2924_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3849_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3849_TI;
static Il2CppInterfaceOffsetPair t2924_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3849_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2924_0_0_0;
extern Il2CppType t2924_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2924_TI;
extern Il2CppGenericClass t2924_GC;
extern TypeInfo t52_TI;
TypeInfo t2924_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2924_MIs, t2924_PIs, t2924_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2924_TI, t2924_ITIs, t2924_VT, &EmptyCustomAttributesCache, &t2924_TI, &t2924_0_0_0, &t2924_1_0_0, t2924_IOs, &t2924_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2924)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5203_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern MethodInfo m30218_MI;
static PropertyInfo t5203____Count_PropertyInfo = 
{
	&t5203_TI, "Count", &m30218_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30219_MI;
static PropertyInfo t5203____IsReadOnly_PropertyInfo = 
{
	&t5203_TI, "IsReadOnly", &m30219_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5203_PIs[] =
{
	&t5203____Count_PropertyInfo,
	&t5203____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5203_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30218_MI = 
{
	"get_Count", NULL, &t5203_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5203_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30219_MI = 
{
	"get_IsReadOnly", NULL, &t5203_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1107_0_0_0;
static ParameterInfo t5203_m30220_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern TypeInfo t5203_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30220_MI = 
{
	"Add", NULL, &t5203_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5203_m30220_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5203_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30221_MI = 
{
	"Clear", NULL, &t5203_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1107_0_0_0;
static ParameterInfo t5203_m30222_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern TypeInfo t5203_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30222_MI = 
{
	"Contains", NULL, &t5203_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5203_m30222_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3168_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5203_m30223_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3168_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5203_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30223_MI = 
{
	"CopyTo", NULL, &t5203_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5203_m30223_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1107_0_0_0;
static ParameterInfo t5203_m30224_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern TypeInfo t5203_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30224_MI = 
{
	"Remove", NULL, &t5203_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5203_m30224_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5203_MIs[] =
{
	&m30218_MI,
	&m30219_MI,
	&m30220_MI,
	&m30221_MI,
	&m30222_MI,
	&m30223_MI,
	&m30224_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5205_TI;
static TypeInfo* t5203_ITIs[] = 
{
	&t618_TI,
	&t5205_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5203_0_0_0;
extern Il2CppType t5203_1_0_0;
struct t5203;
extern TypeInfo t5203_TI;
extern Il2CppGenericClass t5203_GC;
TypeInfo t5203_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5203_MIs, t5203_PIs, NULL, NULL, NULL, NULL, NULL, &t5203_TI, t5203_ITIs, NULL, &EmptyCustomAttributesCache, &t5203_TI, &t5203_0_0_0, &t5203_1_0_0, NULL, &t5203_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5205_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern TypeInfo t5205_TI;
extern Il2CppType t3849_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30225_MI = 
{
	"GetEnumerator", NULL, &t5205_TI, &t3849_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5205_MIs[] =
{
	&m30225_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5205_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5205_0_0_0;
extern Il2CppType t5205_1_0_0;
struct t5205;
extern TypeInfo t5205_TI;
extern Il2CppGenericClass t5205_GC;
TypeInfo t5205_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5205_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5205_TI, t5205_ITIs, NULL, &EmptyCustomAttributesCache, &t5205_TI, &t5205_0_0_0, &t5205_1_0_0, NULL, &t5205_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5204_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern MethodInfo m30226_MI;
extern MethodInfo m30227_MI;
static PropertyInfo t5204____Item_PropertyInfo = 
{
	&t5204_TI, "Item", &m30226_MI, &m30227_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5204_PIs[] =
{
	&t5204____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1107_0_0_0;
static ParameterInfo t5204_m30228_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern TypeInfo t5204_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30228_MI = 
{
	"IndexOf", NULL, &t5204_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5204_m30228_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t5204_m30229_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern TypeInfo t5204_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30229_MI = 
{
	"Insert", NULL, &t5204_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5204_m30229_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5204_m30230_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5204_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30230_MI = 
{
	"RemoveAt", NULL, &t5204_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5204_m30230_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5204_m30226_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5204_TI;
extern Il2CppType t1107_0_0_0;
extern void* RuntimeInvoker_t1107_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30226_MI = 
{
	"get_Item", NULL, &t5204_TI, &t1107_0_0_0, RuntimeInvoker_t1107_t60, t5204_m30226_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1107_0_0_0;
static ParameterInfo t5204_m30227_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1107_0_0_0},
};
extern TypeInfo t5204_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30227_MI = 
{
	"set_Item", NULL, &t5204_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5204_m30227_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5204_MIs[] =
{
	&m30228_MI,
	&m30229_MI,
	&m30230_MI,
	&m30226_MI,
	&m30227_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5203_TI;
extern TypeInfo t5205_TI;
static TypeInfo* t5204_ITIs[] = 
{
	&t618_TI,
	&t5203_TI,
	&t5205_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5204_0_0_0;
extern Il2CppType t5204_1_0_0;
struct t5204;
extern TypeInfo t5204_TI;
extern Il2CppGenericClass t5204_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5204_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5204_MIs, t5204_PIs, NULL, NULL, NULL, NULL, NULL, &t5204_TI, t5204_ITIs, NULL, &t1426__CustomAttributeCache, &t5204_TI, &t5204_0_0_0, &t5204_1_0_0, NULL, &t5204_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3850_TI;

#include "t1108.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern MethodInfo m30231_MI;
static PropertyInfo t3850____Current_PropertyInfo = 
{
	&t3850_TI, "Current", &m30231_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3850_PIs[] =
{
	&t3850____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3850_TI;
extern Il2CppType t1108_0_0_0;
extern void* RuntimeInvoker_t1108 (MethodInfo* method, void* obj, void** args);
MethodInfo m30231_MI = 
{
	"get_Current", NULL, &t3850_TI, &t1108_0_0_0, RuntimeInvoker_t1108, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3850_MIs[] =
{
	&m30231_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3850_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3850_0_0_0;
extern Il2CppType t3850_1_0_0;
struct t3850;
extern TypeInfo t3850_TI;
extern Il2CppGenericClass t3850_GC;
TypeInfo t3850_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3850_MIs, t3850_PIs, NULL, NULL, NULL, NULL, NULL, &t3850_TI, t3850_ITIs, NULL, &EmptyCustomAttributesCache, &t3850_TI, &t3850_0_0_0, &t3850_1_0_0, NULL, &t3850_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2925.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2925_TI;
#include "t2925MD.h"

extern TypeInfo t2925_TI;
extern TypeInfo t1108_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16786_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23025_MI;
struct t52;
 int32_t m23025 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m23025_MI;


extern MethodInfo m16782_MI;
 void m16782 (t2925 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16783_MI;
 t7 * m16783 (t2925 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16786(__this, &m16786_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1108_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16784_MI;
 void m16784 (t2925 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16785_MI;
 bool m16785 (t2925 * __this, MethodInfo* method){
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
extern MethodInfo m16786_MI;
 int32_t m16786 (t2925 * __this, MethodInfo* method){
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
		int32_t L_8 = m23025(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m23025_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern Il2CppType t52_0_0_1;
FieldInfo t2925_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2925_TI, offsetof(t2925, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2925_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2925_TI, offsetof(t2925, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2925_FIs[] =
{
	&t2925_f0_FieldInfo,
	&t2925_f1_FieldInfo,
	NULL
};
extern MethodInfo m16783_MI;
static PropertyInfo t2925____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2925_TI, "System.Collections.IEnumerator.Current", &m16783_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16786_MI;
static PropertyInfo t2925____Current_PropertyInfo = 
{
	&t2925_TI, "Current", &m16786_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2925_PIs[] =
{
	&t2925____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2925____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2925_m16782_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2925_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16782_MI = 
{
	".ctor", (methodPointerType)&m16782, &t2925_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2925_m16782_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2925_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16783_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16783, &t2925_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2925_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16784_MI = 
{
	"Dispose", (methodPointerType)&m16784, &t2925_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2925_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16785_MI = 
{
	"MoveNext", (methodPointerType)&m16785, &t2925_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2925_TI;
extern Il2CppType t1108_0_0_0;
extern void* RuntimeInvoker_t1108 (MethodInfo* method, void* obj, void** args);
MethodInfo m16786_MI = 
{
	"get_Current", (methodPointerType)&m16786, &t2925_TI, &t1108_0_0_0, RuntimeInvoker_t1108, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2925_MIs[] =
{
	&m16782_MI,
	&m16783_MI,
	&m16784_MI,
	&m16785_MI,
	&m16786_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16783_MI;
extern MethodInfo m16785_MI;
extern MethodInfo m16784_MI;
extern MethodInfo m16786_MI;
static MethodInfo* t2925_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16783_MI,
	&m16785_MI,
	&m16784_MI,
	&m16786_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3850_TI;
static TypeInfo* t2925_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3850_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3850_TI;
static Il2CppInterfaceOffsetPair t2925_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3850_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2925_0_0_0;
extern Il2CppType t2925_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2925_TI;
extern Il2CppGenericClass t2925_GC;
extern TypeInfo t52_TI;
TypeInfo t2925_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2925_MIs, t2925_PIs, t2925_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2925_TI, t2925_ITIs, t2925_VT, &EmptyCustomAttributesCache, &t2925_TI, &t2925_0_0_0, &t2925_1_0_0, t2925_IOs, &t2925_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2925)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5206_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern MethodInfo m30232_MI;
static PropertyInfo t5206____Count_PropertyInfo = 
{
	&t5206_TI, "Count", &m30232_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30233_MI;
static PropertyInfo t5206____IsReadOnly_PropertyInfo = 
{
	&t5206_TI, "IsReadOnly", &m30233_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5206_PIs[] =
{
	&t5206____Count_PropertyInfo,
	&t5206____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5206_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30232_MI = 
{
	"get_Count", NULL, &t5206_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5206_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30233_MI = 
{
	"get_IsReadOnly", NULL, &t5206_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1108_0_0_0;
static ParameterInfo t5206_m30234_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1108_0_0_0},
};
extern TypeInfo t5206_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30234_MI = 
{
	"Add", NULL, &t5206_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5206_m30234_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5206_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30235_MI = 
{
	"Clear", NULL, &t5206_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1108_0_0_0;
static ParameterInfo t5206_m30236_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1108_0_0_0},
};
extern TypeInfo t5206_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30236_MI = 
{
	"Contains", NULL, &t5206_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5206_m30236_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3169_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5206_m30237_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3169_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5206_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30237_MI = 
{
	"CopyTo", NULL, &t5206_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5206_m30237_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1108_0_0_0;
static ParameterInfo t5206_m30238_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1108_0_0_0},
};
extern TypeInfo t5206_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30238_MI = 
{
	"Remove", NULL, &t5206_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5206_m30238_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5206_MIs[] =
{
	&m30232_MI,
	&m30233_MI,
	&m30234_MI,
	&m30235_MI,
	&m30236_MI,
	&m30237_MI,
	&m30238_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5208_TI;
static TypeInfo* t5206_ITIs[] = 
{
	&t618_TI,
	&t5208_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5206_0_0_0;
extern Il2CppType t5206_1_0_0;
struct t5206;
extern TypeInfo t5206_TI;
extern Il2CppGenericClass t5206_GC;
TypeInfo t5206_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5206_MIs, t5206_PIs, NULL, NULL, NULL, NULL, NULL, &t5206_TI, t5206_ITIs, NULL, &EmptyCustomAttributesCache, &t5206_TI, &t5206_0_0_0, &t5206_1_0_0, NULL, &t5206_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5208_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern TypeInfo t5208_TI;
extern Il2CppType t3850_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30239_MI = 
{
	"GetEnumerator", NULL, &t5208_TI, &t3850_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5208_MIs[] =
{
	&m30239_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5208_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5208_0_0_0;
extern Il2CppType t5208_1_0_0;
struct t5208;
extern TypeInfo t5208_TI;
extern Il2CppGenericClass t5208_GC;
TypeInfo t5208_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5208_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5208_TI, t5208_ITIs, NULL, &EmptyCustomAttributesCache, &t5208_TI, &t5208_0_0_0, &t5208_1_0_0, NULL, &t5208_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5207_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern MethodInfo m30240_MI;
extern MethodInfo m30241_MI;
static PropertyInfo t5207____Item_PropertyInfo = 
{
	&t5207_TI, "Item", &m30240_MI, &m30241_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5207_PIs[] =
{
	&t5207____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1108_0_0_0;
static ParameterInfo t5207_m30242_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1108_0_0_0},
};
extern TypeInfo t5207_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30242_MI = 
{
	"IndexOf", NULL, &t5207_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5207_m30242_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1108_0_0_0;
static ParameterInfo t5207_m30243_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1108_0_0_0},
};
extern TypeInfo t5207_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30243_MI = 
{
	"Insert", NULL, &t5207_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5207_m30243_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5207_m30244_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5207_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30244_MI = 
{
	"RemoveAt", NULL, &t5207_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5207_m30244_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5207_m30240_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5207_TI;
extern Il2CppType t1108_0_0_0;
extern void* RuntimeInvoker_t1108_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30240_MI = 
{
	"get_Item", NULL, &t5207_TI, &t1108_0_0_0, RuntimeInvoker_t1108_t60, t5207_m30240_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1108_0_0_0;
static ParameterInfo t5207_m30241_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1108_0_0_0},
};
extern TypeInfo t5207_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30241_MI = 
{
	"set_Item", NULL, &t5207_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5207_m30241_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5207_MIs[] =
{
	&m30242_MI,
	&m30243_MI,
	&m30244_MI,
	&m30240_MI,
	&m30241_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5206_TI;
extern TypeInfo t5208_TI;
static TypeInfo* t5207_ITIs[] = 
{
	&t618_TI,
	&t5206_TI,
	&t5208_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5207_0_0_0;
extern Il2CppType t5207_1_0_0;
struct t5207;
extern TypeInfo t5207_TI;
extern Il2CppGenericClass t5207_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5207_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5207_MIs, t5207_PIs, NULL, NULL, NULL, NULL, NULL, &t5207_TI, t5207_ITIs, NULL, &t1426__CustomAttributeCache, &t5207_TI, &t5207_0_0_0, &t5207_1_0_0, NULL, &t5207_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3851_TI;

#include "t1124.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>
extern MethodInfo m30245_MI;
static PropertyInfo t3851____Current_PropertyInfo = 
{
	&t3851_TI, "Current", &m30245_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3851_PIs[] =
{
	&t3851____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3851_TI;
extern Il2CppType t1124_0_0_0;
extern void* RuntimeInvoker_t1124 (MethodInfo* method, void* obj, void** args);
MethodInfo m30245_MI = 
{
	"get_Current", NULL, &t3851_TI, &t1124_0_0_0, RuntimeInvoker_t1124, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3851_MIs[] =
{
	&m30245_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3851_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3851_0_0_0;
extern Il2CppType t3851_1_0_0;
struct t3851;
extern TypeInfo t3851_TI;
extern Il2CppGenericClass t3851_GC;
TypeInfo t3851_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3851_MIs, t3851_PIs, NULL, NULL, NULL, NULL, NULL, &t3851_TI, t3851_ITIs, NULL, &EmptyCustomAttributesCache, &t3851_TI, &t3851_0_0_0, &t3851_1_0_0, NULL, &t3851_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2926.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2926_TI;
#include "t2926MD.h"

extern TypeInfo t2926_TI;
extern TypeInfo t1124_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16791_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23036_MI;
struct t52;
 uint8_t m23036 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m23036_MI;


extern MethodInfo m16787_MI;
 void m16787 (t2926 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16788_MI;
 t7 * m16788 (t2926 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m16791(__this, &m16791_MI);
		uint8_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1124_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16789_MI;
 void m16789 (t2926 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16790_MI;
 bool m16790 (t2926 * __this, MethodInfo* method){
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
extern MethodInfo m16791_MI;
 uint8_t m16791 (t2926 * __this, MethodInfo* method){
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
		uint8_t L_8 = m23036(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m23036_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>
extern Il2CppType t52_0_0_1;
FieldInfo t2926_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2926_TI, offsetof(t2926, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2926_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2926_TI, offsetof(t2926, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2926_FIs[] =
{
	&t2926_f0_FieldInfo,
	&t2926_f1_FieldInfo,
	NULL
};
extern MethodInfo m16788_MI;
static PropertyInfo t2926____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2926_TI, "System.Collections.IEnumerator.Current", &m16788_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16791_MI;
static PropertyInfo t2926____Current_PropertyInfo = 
{
	&t2926_TI, "Current", &m16791_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2926_PIs[] =
{
	&t2926____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2926____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2926_m16787_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2926_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16787_MI = 
{
	".ctor", (methodPointerType)&m16787, &t2926_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2926_m16787_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2926_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16788_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16788, &t2926_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2926_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16789_MI = 
{
	"Dispose", (methodPointerType)&m16789, &t2926_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2926_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16790_MI = 
{
	"MoveNext", (methodPointerType)&m16790, &t2926_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2926_TI;
extern Il2CppType t1124_0_0_0;
extern void* RuntimeInvoker_t1124 (MethodInfo* method, void* obj, void** args);
MethodInfo m16791_MI = 
{
	"get_Current", (methodPointerType)&m16791, &t2926_TI, &t1124_0_0_0, RuntimeInvoker_t1124, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2926_MIs[] =
{
	&m16787_MI,
	&m16788_MI,
	&m16789_MI,
	&m16790_MI,
	&m16791_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16788_MI;
extern MethodInfo m16790_MI;
extern MethodInfo m16789_MI;
extern MethodInfo m16791_MI;
static MethodInfo* t2926_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16788_MI,
	&m16790_MI,
	&m16789_MI,
	&m16791_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3851_TI;
static TypeInfo* t2926_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3851_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3851_TI;
static Il2CppInterfaceOffsetPair t2926_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3851_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2926_0_0_0;
extern Il2CppType t2926_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2926_TI;
extern Il2CppGenericClass t2926_GC;
extern TypeInfo t52_TI;
TypeInfo t2926_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2926_MIs, t2926_PIs, t2926_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2926_TI, t2926_ITIs, t2926_VT, &EmptyCustomAttributesCache, &t2926_TI, &t2926_0_0_0, &t2926_1_0_0, t2926_IOs, &t2926_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2926)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5209_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>
extern MethodInfo m30246_MI;
static PropertyInfo t5209____Count_PropertyInfo = 
{
	&t5209_TI, "Count", &m30246_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30247_MI;
static PropertyInfo t5209____IsReadOnly_PropertyInfo = 
{
	&t5209_TI, "IsReadOnly", &m30247_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5209_PIs[] =
{
	&t5209____Count_PropertyInfo,
	&t5209____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5209_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30246_MI = 
{
	"get_Count", NULL, &t5209_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5209_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30247_MI = 
{
	"get_IsReadOnly", NULL, &t5209_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1124_0_0_0;
static ParameterInfo t5209_m30248_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1124_0_0_0},
};
extern TypeInfo t5209_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30248_MI = 
{
	"Add", NULL, &t5209_TI, &t53_0_0_0, RuntimeInvoker_t53_t89, t5209_m30248_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5209_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30249_MI = 
{
	"Clear", NULL, &t5209_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1124_0_0_0;
static ParameterInfo t5209_m30250_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1124_0_0_0},
};
extern TypeInfo t5209_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30250_MI = 
{
	"Contains", NULL, &t5209_TI, &t55_0_0_0, RuntimeInvoker_t55_t89, t5209_m30250_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3170_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5209_m30251_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3170_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5209_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30251_MI = 
{
	"CopyTo", NULL, &t5209_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5209_m30251_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1124_0_0_0;
static ParameterInfo t5209_m30252_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1124_0_0_0},
};
extern TypeInfo t5209_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30252_MI = 
{
	"Remove", NULL, &t5209_TI, &t55_0_0_0, RuntimeInvoker_t55_t89, t5209_m30252_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5209_MIs[] =
{
	&m30246_MI,
	&m30247_MI,
	&m30248_MI,
	&m30249_MI,
	&m30250_MI,
	&m30251_MI,
	&m30252_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5211_TI;
static TypeInfo* t5209_ITIs[] = 
{
	&t618_TI,
	&t5211_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5209_0_0_0;
extern Il2CppType t5209_1_0_0;
struct t5209;
extern TypeInfo t5209_TI;
extern Il2CppGenericClass t5209_GC;
TypeInfo t5209_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5209_MIs, t5209_PIs, NULL, NULL, NULL, NULL, NULL, &t5209_TI, t5209_ITIs, NULL, &EmptyCustomAttributesCache, &t5209_TI, &t5209_0_0_0, &t5209_1_0_0, NULL, &t5209_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5211_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.ObjectRecordStatus>
extern TypeInfo t5211_TI;
extern Il2CppType t3851_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30253_MI = 
{
	"GetEnumerator", NULL, &t5211_TI, &t3851_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5211_MIs[] =
{
	&m30253_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5211_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5211_0_0_0;
extern Il2CppType t5211_1_0_0;
struct t5211;
extern TypeInfo t5211_TI;
extern Il2CppGenericClass t5211_GC;
TypeInfo t5211_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5211_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5211_TI, t5211_ITIs, NULL, &EmptyCustomAttributesCache, &t5211_TI, &t5211_0_0_0, &t5211_1_0_0, NULL, &t5211_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5210_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>
extern MethodInfo m30254_MI;
extern MethodInfo m30255_MI;
static PropertyInfo t5210____Item_PropertyInfo = 
{
	&t5210_TI, "Item", &m30254_MI, &m30255_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5210_PIs[] =
{
	&t5210____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1124_0_0_0;
static ParameterInfo t5210_m30256_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1124_0_0_0},
};
extern TypeInfo t5210_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30256_MI = 
{
	"IndexOf", NULL, &t5210_TI, &t60_0_0_0, RuntimeInvoker_t60_t89, t5210_m30256_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1124_0_0_0;
static ParameterInfo t5210_m30257_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1124_0_0_0},
};
extern TypeInfo t5210_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30257_MI = 
{
	"Insert", NULL, &t5210_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t89, t5210_m30257_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5210_m30258_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5210_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30258_MI = 
{
	"RemoveAt", NULL, &t5210_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5210_m30258_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5210_m30254_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5210_TI;
extern Il2CppType t1124_0_0_0;
extern void* RuntimeInvoker_t1124_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30254_MI = 
{
	"get_Item", NULL, &t5210_TI, &t1124_0_0_0, RuntimeInvoker_t1124_t60, t5210_m30254_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1124_0_0_0;
static ParameterInfo t5210_m30255_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1124_0_0_0},
};
extern TypeInfo t5210_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30255_MI = 
{
	"set_Item", NULL, &t5210_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t89, t5210_m30255_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5210_MIs[] =
{
	&m30256_MI,
	&m30257_MI,
	&m30258_MI,
	&m30254_MI,
	&m30255_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5209_TI;
extern TypeInfo t5211_TI;
static TypeInfo* t5210_ITIs[] = 
{
	&t618_TI,
	&t5209_TI,
	&t5211_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5210_0_0_0;
extern Il2CppType t5210_1_0_0;
struct t5210;
extern TypeInfo t5210_TI;
extern Il2CppGenericClass t5210_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5210_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5210_MIs, t5210_PIs, NULL, NULL, NULL, NULL, NULL, &t5210_TI, t5210_ITIs, NULL, &t1426__CustomAttributeCache, &t5210_TI, &t5210_0_0_0, &t5210_1_0_0, NULL, &t5210_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3852_TI;

#include "t1125.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern MethodInfo m30259_MI;
static PropertyInfo t3852____Current_PropertyInfo = 
{
	&t3852_TI, "Current", &m30259_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3852_PIs[] =
{
	&t3852____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3852_TI;
extern Il2CppType t1125_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30259_MI = 
{
	"get_Current", NULL, &t3852_TI, &t1125_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3852_MIs[] =
{
	&m30259_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3852_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3852_0_0_0;
extern Il2CppType t3852_1_0_0;
struct t3852;
extern TypeInfo t3852_TI;
extern Il2CppGenericClass t3852_GC;
TypeInfo t3852_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3852_MIs, t3852_PIs, NULL, NULL, NULL, NULL, NULL, &t3852_TI, t3852_ITIs, NULL, &EmptyCustomAttributesCache, &t3852_TI, &t3852_0_0_0, &t3852_1_0_0, NULL, &t3852_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2927.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2927_TI;
#include "t2927MD.h"

extern TypeInfo t2927_TI;
extern TypeInfo t1125_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16796_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23047_MI;
struct t52;
struct t52;
 t7 * m17147_gshared (t52 * __this, int32_t p0, MethodInfo* method);
#define m17147(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
#define m23047(__this, p0, method) (t1125 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m23047_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2927_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2927_TI, offsetof(t2927, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2927_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2927_TI, offsetof(t2927, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2927_FIs[] =
{
	&t2927_f0_FieldInfo,
	&t2927_f1_FieldInfo,
	NULL
};
extern MethodInfo m16793_MI;
static PropertyInfo t2927____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2927_TI, "System.Collections.IEnumerator.Current", &m16793_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16796_MI;
static PropertyInfo t2927____Current_PropertyInfo = 
{
	&t2927_TI, "Current", &m16796_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2927_PIs[] =
{
	&t2927____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2927____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2927_m16792_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2927_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16792_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2927_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2927_m16792_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2927_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16793_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2927_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2927_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16794_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2927_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2927_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16795_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2927_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2927_TI;
extern Il2CppType t1125_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16796_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2927_TI, &t1125_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2927_MIs[] =
{
	&m16792_MI,
	&m16793_MI,
	&m16794_MI,
	&m16795_MI,
	&m16796_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16793_MI;
extern MethodInfo m16795_MI;
extern MethodInfo m16794_MI;
extern MethodInfo m16796_MI;
static MethodInfo* t2927_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16793_MI,
	&m16795_MI,
	&m16794_MI,
	&m16796_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3852_TI;
static TypeInfo* t2927_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3852_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3852_TI;
static Il2CppInterfaceOffsetPair t2927_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3852_TI, 7},
};
extern MethodInfo m16796_MI;
extern TypeInfo t1125_TI;
extern MethodInfo m23047_MI;
static void* t2927_RGCTXData[3] = 
{
	&m16796_MI,
	&t1125_TI,
	&m23047_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2927_0_0_0;
extern Il2CppType t2927_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2927_TI;
extern Il2CppGenericClass t2927_GC;
extern TypeInfo t52_TI;
TypeInfo t2927_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2927_MIs, t2927_PIs, t2927_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2927_TI, t2927_ITIs, t2927_VT, &EmptyCustomAttributesCache, &t2927_TI, &t2927_0_0_0, &t2927_1_0_0, t2927_IOs, &t2927_GC, NULL, NULL, NULL, t2927_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2927)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5212_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern MethodInfo m30260_MI;
static PropertyInfo t5212____Count_PropertyInfo = 
{
	&t5212_TI, "Count", &m30260_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30261_MI;
static PropertyInfo t5212____IsReadOnly_PropertyInfo = 
{
	&t5212_TI, "IsReadOnly", &m30261_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5212_PIs[] =
{
	&t5212____Count_PropertyInfo,
	&t5212____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5212_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30260_MI = 
{
	"get_Count", NULL, &t5212_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5212_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30261_MI = 
{
	"get_IsReadOnly", NULL, &t5212_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1125_0_0_0;
static ParameterInfo t5212_m30262_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1125_0_0_0},
};
extern TypeInfo t5212_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30262_MI = 
{
	"Add", NULL, &t5212_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5212_m30262_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5212_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30263_MI = 
{
	"Clear", NULL, &t5212_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1125_0_0_0;
static ParameterInfo t5212_m30264_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1125_0_0_0},
};
extern TypeInfo t5212_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30264_MI = 
{
	"Contains", NULL, &t5212_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5212_m30264_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3171_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5212_m30265_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3171_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5212_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30265_MI = 
{
	"CopyTo", NULL, &t5212_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5212_m30265_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1125_0_0_0;
static ParameterInfo t5212_m30266_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1125_0_0_0},
};
extern TypeInfo t5212_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30266_MI = 
{
	"Remove", NULL, &t5212_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5212_m30266_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5212_MIs[] =
{
	&m30260_MI,
	&m30261_MI,
	&m30262_MI,
	&m30263_MI,
	&m30264_MI,
	&m30265_MI,
	&m30266_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5214_TI;
static TypeInfo* t5212_ITIs[] = 
{
	&t618_TI,
	&t5214_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5212_0_0_0;
extern Il2CppType t5212_1_0_0;
struct t5212;
extern TypeInfo t5212_TI;
extern Il2CppGenericClass t5212_GC;
TypeInfo t5212_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5212_MIs, t5212_PIs, NULL, NULL, NULL, NULL, NULL, &t5212_TI, t5212_ITIs, NULL, &EmptyCustomAttributesCache, &t5212_TI, &t5212_0_0_0, &t5212_1_0_0, NULL, &t5212_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5214_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern TypeInfo t5214_TI;
extern Il2CppType t3852_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30267_MI = 
{
	"GetEnumerator", NULL, &t5214_TI, &t3852_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5214_MIs[] =
{
	&m30267_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5214_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5214_0_0_0;
extern Il2CppType t5214_1_0_0;
struct t5214;
extern TypeInfo t5214_TI;
extern Il2CppGenericClass t5214_GC;
TypeInfo t5214_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5214_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5214_TI, t5214_ITIs, NULL, &EmptyCustomAttributesCache, &t5214_TI, &t5214_0_0_0, &t5214_1_0_0, NULL, &t5214_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5213_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern MethodInfo m30268_MI;
extern MethodInfo m30269_MI;
static PropertyInfo t5213____Item_PropertyInfo = 
{
	&t5213_TI, "Item", &m30268_MI, &m30269_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5213_PIs[] =
{
	&t5213____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1125_0_0_0;
static ParameterInfo t5213_m30270_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1125_0_0_0},
};
extern TypeInfo t5213_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30270_MI = 
{
	"IndexOf", NULL, &t5213_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5213_m30270_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1125_0_0_0;
static ParameterInfo t5213_m30271_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1125_0_0_0},
};
extern TypeInfo t5213_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30271_MI = 
{
	"Insert", NULL, &t5213_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5213_m30271_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5213_m30272_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5213_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30272_MI = 
{
	"RemoveAt", NULL, &t5213_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5213_m30272_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5213_m30268_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5213_TI;
extern Il2CppType t1125_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30268_MI = 
{
	"get_Item", NULL, &t5213_TI, &t1125_0_0_0, RuntimeInvoker_t7_t60, t5213_m30268_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1125_0_0_0;
static ParameterInfo t5213_m30269_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1125_0_0_0},
};
extern TypeInfo t5213_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30269_MI = 
{
	"set_Item", NULL, &t5213_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5213_m30269_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5213_MIs[] =
{
	&m30270_MI,
	&m30271_MI,
	&m30272_MI,
	&m30268_MI,
	&m30269_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5212_TI;
extern TypeInfo t5214_TI;
static TypeInfo* t5213_ITIs[] = 
{
	&t618_TI,
	&t5212_TI,
	&t5214_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5213_0_0_0;
extern Il2CppType t5213_1_0_0;
struct t5213;
extern TypeInfo t5213_TI;
extern Il2CppGenericClass t5213_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5213_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5213_MIs, t5213_PIs, NULL, NULL, NULL, NULL, NULL, &t5213_TI, t5213_ITIs, NULL, &t1426__CustomAttributeCache, &t5213_TI, &t5213_0_0_0, &t5213_1_0_0, NULL, &t5213_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3853_TI;

#include "t1126.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern MethodInfo m30273_MI;
static PropertyInfo t3853____Current_PropertyInfo = 
{
	&t3853_TI, "Current", &m30273_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3853_PIs[] =
{
	&t3853____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3853_TI;
extern Il2CppType t1126_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30273_MI = 
{
	"get_Current", NULL, &t3853_TI, &t1126_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3853_MIs[] =
{
	&m30273_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3853_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3853_0_0_0;
extern Il2CppType t3853_1_0_0;
struct t3853;
extern TypeInfo t3853_TI;
extern Il2CppGenericClass t3853_GC;
TypeInfo t3853_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3853_MIs, t3853_PIs, NULL, NULL, NULL, NULL, NULL, &t3853_TI, t3853_ITIs, NULL, &EmptyCustomAttributesCache, &t3853_TI, &t3853_0_0_0, &t3853_1_0_0, NULL, &t3853_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2928.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2928_TI;
#include "t2928MD.h"

extern TypeInfo t2928_TI;
extern TypeInfo t1126_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16801_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23058_MI;
struct t52;
#define m23058(__this, p0, method) (t1126 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m23058_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2928_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2928_TI, offsetof(t2928, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2928_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2928_TI, offsetof(t2928, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2928_FIs[] =
{
	&t2928_f0_FieldInfo,
	&t2928_f1_FieldInfo,
	NULL
};
extern MethodInfo m16798_MI;
static PropertyInfo t2928____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2928_TI, "System.Collections.IEnumerator.Current", &m16798_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16801_MI;
static PropertyInfo t2928____Current_PropertyInfo = 
{
	&t2928_TI, "Current", &m16801_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2928_PIs[] =
{
	&t2928____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2928____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2928_m16797_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2928_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16797_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2928_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2928_m16797_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2928_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16798_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2928_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2928_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16799_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2928_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2928_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16800_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2928_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2928_TI;
extern Il2CppType t1126_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16801_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2928_TI, &t1126_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2928_MIs[] =
{
	&m16797_MI,
	&m16798_MI,
	&m16799_MI,
	&m16800_MI,
	&m16801_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16798_MI;
extern MethodInfo m16800_MI;
extern MethodInfo m16799_MI;
extern MethodInfo m16801_MI;
static MethodInfo* t2928_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16798_MI,
	&m16800_MI,
	&m16799_MI,
	&m16801_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3853_TI;
static TypeInfo* t2928_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3853_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3853_TI;
static Il2CppInterfaceOffsetPair t2928_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3853_TI, 7},
};
extern MethodInfo m16801_MI;
extern TypeInfo t1126_TI;
extern MethodInfo m23058_MI;
static void* t2928_RGCTXData[3] = 
{
	&m16801_MI,
	&t1126_TI,
	&m23058_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2928_0_0_0;
extern Il2CppType t2928_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2928_TI;
extern Il2CppGenericClass t2928_GC;
extern TypeInfo t52_TI;
TypeInfo t2928_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2928_MIs, t2928_PIs, t2928_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2928_TI, t2928_ITIs, t2928_VT, &EmptyCustomAttributesCache, &t2928_TI, &t2928_0_0_0, &t2928_1_0_0, t2928_IOs, &t2928_GC, NULL, NULL, NULL, t2928_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2928)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5215_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern MethodInfo m30274_MI;
static PropertyInfo t5215____Count_PropertyInfo = 
{
	&t5215_TI, "Count", &m30274_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30275_MI;
static PropertyInfo t5215____IsReadOnly_PropertyInfo = 
{
	&t5215_TI, "IsReadOnly", &m30275_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5215_PIs[] =
{
	&t5215____Count_PropertyInfo,
	&t5215____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5215_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30274_MI = 
{
	"get_Count", NULL, &t5215_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5215_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30275_MI = 
{
	"get_IsReadOnly", NULL, &t5215_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1126_0_0_0;
static ParameterInfo t5215_m30276_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1126_0_0_0},
};
extern TypeInfo t5215_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30276_MI = 
{
	"Add", NULL, &t5215_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5215_m30276_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5215_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30277_MI = 
{
	"Clear", NULL, &t5215_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1126_0_0_0;
static ParameterInfo t5215_m30278_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1126_0_0_0},
};
extern TypeInfo t5215_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30278_MI = 
{
	"Contains", NULL, &t5215_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5215_m30278_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3172_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5215_m30279_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3172_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5215_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30279_MI = 
{
	"CopyTo", NULL, &t5215_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5215_m30279_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1126_0_0_0;
static ParameterInfo t5215_m30280_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1126_0_0_0},
};
extern TypeInfo t5215_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30280_MI = 
{
	"Remove", NULL, &t5215_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5215_m30280_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5215_MIs[] =
{
	&m30274_MI,
	&m30275_MI,
	&m30276_MI,
	&m30277_MI,
	&m30278_MI,
	&m30279_MI,
	&m30280_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5217_TI;
static TypeInfo* t5215_ITIs[] = 
{
	&t618_TI,
	&t5217_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5215_0_0_0;
extern Il2CppType t5215_1_0_0;
struct t5215;
extern TypeInfo t5215_TI;
extern Il2CppGenericClass t5215_GC;
TypeInfo t5215_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5215_MIs, t5215_PIs, NULL, NULL, NULL, NULL, NULL, &t5215_TI, t5215_ITIs, NULL, &EmptyCustomAttributesCache, &t5215_TI, &t5215_0_0_0, &t5215_1_0_0, NULL, &t5215_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5217_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern TypeInfo t5217_TI;
extern Il2CppType t3853_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30281_MI = 
{
	"GetEnumerator", NULL, &t5217_TI, &t3853_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5217_MIs[] =
{
	&m30281_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5217_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5217_0_0_0;
extern Il2CppType t5217_1_0_0;
struct t5217;
extern TypeInfo t5217_TI;
extern Il2CppGenericClass t5217_GC;
TypeInfo t5217_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5217_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5217_TI, t5217_ITIs, NULL, &EmptyCustomAttributesCache, &t5217_TI, &t5217_0_0_0, &t5217_1_0_0, NULL, &t5217_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5216_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern MethodInfo m30282_MI;
extern MethodInfo m30283_MI;
static PropertyInfo t5216____Item_PropertyInfo = 
{
	&t5216_TI, "Item", &m30282_MI, &m30283_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5216_PIs[] =
{
	&t5216____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1126_0_0_0;
static ParameterInfo t5216_m30284_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1126_0_0_0},
};
extern TypeInfo t5216_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30284_MI = 
{
	"IndexOf", NULL, &t5216_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5216_m30284_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1126_0_0_0;
static ParameterInfo t5216_m30285_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1126_0_0_0},
};
extern TypeInfo t5216_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30285_MI = 
{
	"Insert", NULL, &t5216_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5216_m30285_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5216_m30286_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5216_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30286_MI = 
{
	"RemoveAt", NULL, &t5216_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5216_m30286_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5216_m30282_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5216_TI;
extern Il2CppType t1126_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30282_MI = 
{
	"get_Item", NULL, &t5216_TI, &t1126_0_0_0, RuntimeInvoker_t7_t60, t5216_m30282_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1126_0_0_0;
static ParameterInfo t5216_m30283_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1126_0_0_0},
};
extern TypeInfo t5216_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30283_MI = 
{
	"set_Item", NULL, &t5216_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5216_m30283_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5216_MIs[] =
{
	&m30284_MI,
	&m30285_MI,
	&m30286_MI,
	&m30282_MI,
	&m30283_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5215_TI;
extern TypeInfo t5217_TI;
static TypeInfo* t5216_ITIs[] = 
{
	&t618_TI,
	&t5215_TI,
	&t5217_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5216_0_0_0;
extern Il2CppType t5216_1_0_0;
struct t5216;
extern TypeInfo t5216_TI;
extern Il2CppGenericClass t5216_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5216_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5216_MIs, t5216_PIs, NULL, NULL, NULL, NULL, NULL, &t5216_TI, t5216_ITIs, NULL, &t1426__CustomAttributeCache, &t5216_TI, &t5216_0_0_0, &t5216_1_0_0, NULL, &t5216_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3854_TI;

#include "t1127.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>
extern MethodInfo m30287_MI;
static PropertyInfo t3854____Current_PropertyInfo = 
{
	&t3854_TI, "Current", &m30287_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3854_PIs[] =
{
	&t3854____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3854_TI;
extern Il2CppType t1127_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30287_MI = 
{
	"get_Current", NULL, &t3854_TI, &t1127_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3854_MIs[] =
{
	&m30287_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3854_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3854_0_0_0;
extern Il2CppType t3854_1_0_0;
struct t3854;
extern TypeInfo t3854_TI;
extern Il2CppGenericClass t3854_GC;
TypeInfo t3854_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3854_MIs, t3854_PIs, NULL, NULL, NULL, NULL, NULL, &t3854_TI, t3854_ITIs, NULL, &EmptyCustomAttributesCache, &t3854_TI, &t3854_0_0_0, &t3854_1_0_0, NULL, &t3854_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2929.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2929_TI;
#include "t2929MD.h"

extern TypeInfo t2929_TI;
extern TypeInfo t1127_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16806_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23069_MI;
struct t52;
#define m23069(__this, p0, method) (t1127 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m23069_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2929_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2929_TI, offsetof(t2929, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2929_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2929_TI, offsetof(t2929, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2929_FIs[] =
{
	&t2929_f0_FieldInfo,
	&t2929_f1_FieldInfo,
	NULL
};
extern MethodInfo m16803_MI;
static PropertyInfo t2929____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2929_TI, "System.Collections.IEnumerator.Current", &m16803_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16806_MI;
static PropertyInfo t2929____Current_PropertyInfo = 
{
	&t2929_TI, "Current", &m16806_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2929_PIs[] =
{
	&t2929____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2929____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2929_m16802_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2929_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16802_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2929_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2929_m16802_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2929_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16803_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2929_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2929_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16804_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2929_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2929_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16805_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2929_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2929_TI;
extern Il2CppType t1127_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16806_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2929_TI, &t1127_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2929_MIs[] =
{
	&m16802_MI,
	&m16803_MI,
	&m16804_MI,
	&m16805_MI,
	&m16806_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16803_MI;
extern MethodInfo m16805_MI;
extern MethodInfo m16804_MI;
extern MethodInfo m16806_MI;
static MethodInfo* t2929_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16803_MI,
	&m16805_MI,
	&m16804_MI,
	&m16806_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3854_TI;
static TypeInfo* t2929_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3854_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3854_TI;
static Il2CppInterfaceOffsetPair t2929_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3854_TI, 7},
};
extern MethodInfo m16806_MI;
extern TypeInfo t1127_TI;
extern MethodInfo m23069_MI;
static void* t2929_RGCTXData[3] = 
{
	&m16806_MI,
	&t1127_TI,
	&m23069_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2929_0_0_0;
extern Il2CppType t2929_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2929_TI;
extern Il2CppGenericClass t2929_GC;
extern TypeInfo t52_TI;
TypeInfo t2929_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2929_MIs, t2929_PIs, t2929_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2929_TI, t2929_ITIs, t2929_VT, &EmptyCustomAttributesCache, &t2929_TI, &t2929_0_0_0, &t2929_1_0_0, t2929_IOs, &t2929_GC, NULL, NULL, NULL, t2929_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2929)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5218_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>
extern MethodInfo m30288_MI;
static PropertyInfo t5218____Count_PropertyInfo = 
{
	&t5218_TI, "Count", &m30288_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30289_MI;
static PropertyInfo t5218____IsReadOnly_PropertyInfo = 
{
	&t5218_TI, "IsReadOnly", &m30289_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5218_PIs[] =
{
	&t5218____Count_PropertyInfo,
	&t5218____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5218_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30288_MI = 
{
	"get_Count", NULL, &t5218_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5218_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30289_MI = 
{
	"get_IsReadOnly", NULL, &t5218_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1127_0_0_0;
static ParameterInfo t5218_m30290_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern TypeInfo t5218_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30290_MI = 
{
	"Add", NULL, &t5218_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5218_m30290_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5218_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30291_MI = 
{
	"Clear", NULL, &t5218_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1127_0_0_0;
static ParameterInfo t5218_m30292_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern TypeInfo t5218_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30292_MI = 
{
	"Contains", NULL, &t5218_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5218_m30292_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3173_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5218_m30293_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3173_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5218_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30293_MI = 
{
	"CopyTo", NULL, &t5218_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5218_m30293_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1127_0_0_0;
static ParameterInfo t5218_m30294_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern TypeInfo t5218_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30294_MI = 
{
	"Remove", NULL, &t5218_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5218_m30294_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5218_MIs[] =
{
	&m30288_MI,
	&m30289_MI,
	&m30290_MI,
	&m30291_MI,
	&m30292_MI,
	&m30293_MI,
	&m30294_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5220_TI;
static TypeInfo* t5218_ITIs[] = 
{
	&t618_TI,
	&t5220_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5218_0_0_0;
extern Il2CppType t5218_1_0_0;
struct t5218;
extern TypeInfo t5218_TI;
extern Il2CppGenericClass t5218_GC;
TypeInfo t5218_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5218_MIs, t5218_PIs, NULL, NULL, NULL, NULL, NULL, &t5218_TI, t5218_ITIs, NULL, &EmptyCustomAttributesCache, &t5218_TI, &t5218_0_0_0, &t5218_1_0_0, NULL, &t5218_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5220_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnSerializedAttribute>
extern TypeInfo t5220_TI;
extern Il2CppType t3854_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30295_MI = 
{
	"GetEnumerator", NULL, &t5220_TI, &t3854_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5220_MIs[] =
{
	&m30295_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5220_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5220_0_0_0;
extern Il2CppType t5220_1_0_0;
struct t5220;
extern TypeInfo t5220_TI;
extern Il2CppGenericClass t5220_GC;
TypeInfo t5220_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5220_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5220_TI, t5220_ITIs, NULL, &EmptyCustomAttributesCache, &t5220_TI, &t5220_0_0_0, &t5220_1_0_0, NULL, &t5220_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5219_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>
extern MethodInfo m30296_MI;
extern MethodInfo m30297_MI;
static PropertyInfo t5219____Item_PropertyInfo = 
{
	&t5219_TI, "Item", &m30296_MI, &m30297_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5219_PIs[] =
{
	&t5219____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1127_0_0_0;
static ParameterInfo t5219_m30298_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern TypeInfo t5219_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30298_MI = 
{
	"IndexOf", NULL, &t5219_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5219_m30298_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1127_0_0_0;
static ParameterInfo t5219_m30299_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern TypeInfo t5219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30299_MI = 
{
	"Insert", NULL, &t5219_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5219_m30299_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5219_m30300_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30300_MI = 
{
	"RemoveAt", NULL, &t5219_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5219_m30300_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5219_m30296_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5219_TI;
extern Il2CppType t1127_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30296_MI = 
{
	"get_Item", NULL, &t5219_TI, &t1127_0_0_0, RuntimeInvoker_t7_t60, t5219_m30296_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1127_0_0_0;
static ParameterInfo t5219_m30297_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern TypeInfo t5219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30297_MI = 
{
	"set_Item", NULL, &t5219_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5219_m30297_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5219_MIs[] =
{
	&m30298_MI,
	&m30299_MI,
	&m30300_MI,
	&m30296_MI,
	&m30297_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5218_TI;
extern TypeInfo t5220_TI;
static TypeInfo* t5219_ITIs[] = 
{
	&t618_TI,
	&t5218_TI,
	&t5220_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5219_0_0_0;
extern Il2CppType t5219_1_0_0;
struct t5219;
extern TypeInfo t5219_TI;
extern Il2CppGenericClass t5219_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5219_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5219_MIs, t5219_PIs, NULL, NULL, NULL, NULL, NULL, &t5219_TI, t5219_ITIs, NULL, &t1426__CustomAttributeCache, &t5219_TI, &t5219_0_0_0, &t5219_1_0_0, NULL, &t5219_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3855_TI;

#include "t1128.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>
extern MethodInfo m30301_MI;
static PropertyInfo t3855____Current_PropertyInfo = 
{
	&t3855_TI, "Current", &m30301_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3855_PIs[] =
{
	&t3855____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3855_TI;
extern Il2CppType t1128_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30301_MI = 
{
	"get_Current", NULL, &t3855_TI, &t1128_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3855_MIs[] =
{
	&m30301_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3855_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3855_0_0_0;
extern Il2CppType t3855_1_0_0;
struct t3855;
extern TypeInfo t3855_TI;
extern Il2CppGenericClass t3855_GC;
TypeInfo t3855_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3855_MIs, t3855_PIs, NULL, NULL, NULL, NULL, NULL, &t3855_TI, t3855_ITIs, NULL, &EmptyCustomAttributesCache, &t3855_TI, &t3855_0_0_0, &t3855_1_0_0, NULL, &t3855_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2930.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2930_TI;
#include "t2930MD.h"

extern TypeInfo t2930_TI;
extern TypeInfo t1128_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16811_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23080_MI;
struct t52;
#define m23080(__this, p0, method) (t1128 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m23080_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2930_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2930_TI, offsetof(t2930, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2930_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2930_TI, offsetof(t2930, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2930_FIs[] =
{
	&t2930_f0_FieldInfo,
	&t2930_f1_FieldInfo,
	NULL
};
extern MethodInfo m16808_MI;
static PropertyInfo t2930____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2930_TI, "System.Collections.IEnumerator.Current", &m16808_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16811_MI;
static PropertyInfo t2930____Current_PropertyInfo = 
{
	&t2930_TI, "Current", &m16811_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2930_PIs[] =
{
	&t2930____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2930____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2930_m16807_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2930_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16807_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2930_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2930_m16807_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2930_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16808_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2930_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2930_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16809_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2930_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2930_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16810_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2930_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2930_TI;
extern Il2CppType t1128_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16811_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2930_TI, &t1128_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2930_MIs[] =
{
	&m16807_MI,
	&m16808_MI,
	&m16809_MI,
	&m16810_MI,
	&m16811_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16808_MI;
extern MethodInfo m16810_MI;
extern MethodInfo m16809_MI;
extern MethodInfo m16811_MI;
static MethodInfo* t2930_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16808_MI,
	&m16810_MI,
	&m16809_MI,
	&m16811_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3855_TI;
static TypeInfo* t2930_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3855_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3855_TI;
static Il2CppInterfaceOffsetPair t2930_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3855_TI, 7},
};
extern MethodInfo m16811_MI;
extern TypeInfo t1128_TI;
extern MethodInfo m23080_MI;
static void* t2930_RGCTXData[3] = 
{
	&m16811_MI,
	&t1128_TI,
	&m23080_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2930_0_0_0;
extern Il2CppType t2930_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2930_TI;
extern Il2CppGenericClass t2930_GC;
extern TypeInfo t52_TI;
TypeInfo t2930_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2930_MIs, t2930_PIs, t2930_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2930_TI, t2930_ITIs, t2930_VT, &EmptyCustomAttributesCache, &t2930_TI, &t2930_0_0_0, &t2930_1_0_0, t2930_IOs, &t2930_GC, NULL, NULL, NULL, t2930_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2930)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5221_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializingAttribute>
extern MethodInfo m30302_MI;
static PropertyInfo t5221____Count_PropertyInfo = 
{
	&t5221_TI, "Count", &m30302_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30303_MI;
static PropertyInfo t5221____IsReadOnly_PropertyInfo = 
{
	&t5221_TI, "IsReadOnly", &m30303_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5221_PIs[] =
{
	&t5221____Count_PropertyInfo,
	&t5221____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5221_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30302_MI = 
{
	"get_Count", NULL, &t5221_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5221_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30303_MI = 
{
	"get_IsReadOnly", NULL, &t5221_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1128_0_0_0;
static ParameterInfo t5221_m30304_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1128_0_0_0},
};
extern TypeInfo t5221_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30304_MI = 
{
	"Add", NULL, &t5221_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5221_m30304_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5221_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30305_MI = 
{
	"Clear", NULL, &t5221_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1128_0_0_0;
static ParameterInfo t5221_m30306_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1128_0_0_0},
};
extern TypeInfo t5221_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30306_MI = 
{
	"Contains", NULL, &t5221_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5221_m30306_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3174_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5221_m30307_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3174_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5221_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30307_MI = 
{
	"CopyTo", NULL, &t5221_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5221_m30307_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1128_0_0_0;
static ParameterInfo t5221_m30308_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1128_0_0_0},
};
extern TypeInfo t5221_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30308_MI = 
{
	"Remove", NULL, &t5221_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5221_m30308_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5221_MIs[] =
{
	&m30302_MI,
	&m30303_MI,
	&m30304_MI,
	&m30305_MI,
	&m30306_MI,
	&m30307_MI,
	&m30308_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5223_TI;
static TypeInfo* t5221_ITIs[] = 
{
	&t618_TI,
	&t5223_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5221_0_0_0;
extern Il2CppType t5221_1_0_0;
struct t5221;
extern TypeInfo t5221_TI;
extern Il2CppGenericClass t5221_GC;
TypeInfo t5221_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5221_MIs, t5221_PIs, NULL, NULL, NULL, NULL, NULL, &t5221_TI, t5221_ITIs, NULL, &EmptyCustomAttributesCache, &t5221_TI, &t5221_0_0_0, &t5221_1_0_0, NULL, &t5221_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5223_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnSerializingAttribute>
extern TypeInfo t5223_TI;
extern Il2CppType t3855_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30309_MI = 
{
	"GetEnumerator", NULL, &t5223_TI, &t3855_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5223_MIs[] =
{
	&m30309_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5223_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5223_0_0_0;
extern Il2CppType t5223_1_0_0;
struct t5223;
extern TypeInfo t5223_TI;
extern Il2CppGenericClass t5223_GC;
TypeInfo t5223_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5223_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5223_TI, t5223_ITIs, NULL, &EmptyCustomAttributesCache, &t5223_TI, &t5223_0_0_0, &t5223_1_0_0, NULL, &t5223_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5222_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializingAttribute>
extern MethodInfo m30310_MI;
extern MethodInfo m30311_MI;
static PropertyInfo t5222____Item_PropertyInfo = 
{
	&t5222_TI, "Item", &m30310_MI, &m30311_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5222_PIs[] =
{
	&t5222____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1128_0_0_0;
static ParameterInfo t5222_m30312_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1128_0_0_0},
};
extern TypeInfo t5222_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30312_MI = 
{
	"IndexOf", NULL, &t5222_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5222_m30312_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1128_0_0_0;
static ParameterInfo t5222_m30313_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1128_0_0_0},
};
extern TypeInfo t5222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30313_MI = 
{
	"Insert", NULL, &t5222_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5222_m30313_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5222_m30314_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30314_MI = 
{
	"RemoveAt", NULL, &t5222_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5222_m30314_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5222_m30310_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5222_TI;
extern Il2CppType t1128_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30310_MI = 
{
	"get_Item", NULL, &t5222_TI, &t1128_0_0_0, RuntimeInvoker_t7_t60, t5222_m30310_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1128_0_0_0;
static ParameterInfo t5222_m30311_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1128_0_0_0},
};
extern TypeInfo t5222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30311_MI = 
{
	"set_Item", NULL, &t5222_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5222_m30311_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5222_MIs[] =
{
	&m30312_MI,
	&m30313_MI,
	&m30314_MI,
	&m30310_MI,
	&m30311_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5221_TI;
extern TypeInfo t5223_TI;
static TypeInfo* t5222_ITIs[] = 
{
	&t618_TI,
	&t5221_TI,
	&t5223_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5222_0_0_0;
extern Il2CppType t5222_1_0_0;
struct t5222;
extern TypeInfo t5222_TI;
extern Il2CppGenericClass t5222_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5222_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5222_MIs, t5222_PIs, NULL, NULL, NULL, NULL, NULL, &t5222_TI, t5222_ITIs, NULL, &t1426__CustomAttributeCache, &t5222_TI, &t5222_0_0_0, &t5222_1_0_0, NULL, &t5222_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3856_TI;

#include "t1135.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.StreamingContextStates>
extern MethodInfo m30315_MI;
static PropertyInfo t3856____Current_PropertyInfo = 
{
	&t3856_TI, "Current", &m30315_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3856_PIs[] =
{
	&t3856____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3856_TI;
extern Il2CppType t1135_0_0_0;
extern void* RuntimeInvoker_t1135 (MethodInfo* method, void* obj, void** args);
MethodInfo m30315_MI = 
{
	"get_Current", NULL, &t3856_TI, &t1135_0_0_0, RuntimeInvoker_t1135, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3856_MIs[] =
{
	&m30315_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3856_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3856_0_0_0;
extern Il2CppType t3856_1_0_0;
struct t3856;
extern TypeInfo t3856_TI;
extern Il2CppGenericClass t3856_GC;
TypeInfo t3856_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3856_MIs, t3856_PIs, NULL, NULL, NULL, NULL, NULL, &t3856_TI, t3856_ITIs, NULL, &EmptyCustomAttributesCache, &t3856_TI, &t3856_0_0_0, &t3856_1_0_0, NULL, &t3856_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2931.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2931_TI;
#include "t2931MD.h"

extern TypeInfo t2931_TI;
extern TypeInfo t1135_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16816_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23091_MI;
struct t52;
 int32_t m23091 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m23091_MI;


extern MethodInfo m16812_MI;
 void m16812 (t2931 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16813_MI;
 t7 * m16813 (t2931 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16816(__this, &m16816_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1135_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16814_MI;
 void m16814 (t2931 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16815_MI;
 bool m16815 (t2931 * __this, MethodInfo* method){
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
extern MethodInfo m16816_MI;
 int32_t m16816 (t2931 * __this, MethodInfo* method){
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
		int32_t L_8 = m23091(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m23091_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.StreamingContextStates>
extern Il2CppType t52_0_0_1;
FieldInfo t2931_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2931_TI, offsetof(t2931, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2931_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2931_TI, offsetof(t2931, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2931_FIs[] =
{
	&t2931_f0_FieldInfo,
	&t2931_f1_FieldInfo,
	NULL
};
extern MethodInfo m16813_MI;
static PropertyInfo t2931____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2931_TI, "System.Collections.IEnumerator.Current", &m16813_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16816_MI;
static PropertyInfo t2931____Current_PropertyInfo = 
{
	&t2931_TI, "Current", &m16816_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2931_PIs[] =
{
	&t2931____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2931____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2931_m16812_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2931_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16812_MI = 
{
	".ctor", (methodPointerType)&m16812, &t2931_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2931_m16812_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2931_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16813_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16813, &t2931_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2931_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16814_MI = 
{
	"Dispose", (methodPointerType)&m16814, &t2931_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2931_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16815_MI = 
{
	"MoveNext", (methodPointerType)&m16815, &t2931_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2931_TI;
extern Il2CppType t1135_0_0_0;
extern void* RuntimeInvoker_t1135 (MethodInfo* method, void* obj, void** args);
MethodInfo m16816_MI = 
{
	"get_Current", (methodPointerType)&m16816, &t2931_TI, &t1135_0_0_0, RuntimeInvoker_t1135, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2931_MIs[] =
{
	&m16812_MI,
	&m16813_MI,
	&m16814_MI,
	&m16815_MI,
	&m16816_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16813_MI;
extern MethodInfo m16815_MI;
extern MethodInfo m16814_MI;
extern MethodInfo m16816_MI;
static MethodInfo* t2931_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16813_MI,
	&m16815_MI,
	&m16814_MI,
	&m16816_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3856_TI;
static TypeInfo* t2931_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3856_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3856_TI;
static Il2CppInterfaceOffsetPair t2931_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3856_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2931_0_0_0;
extern Il2CppType t2931_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2931_TI;
extern Il2CppGenericClass t2931_GC;
extern TypeInfo t52_TI;
TypeInfo t2931_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2931_MIs, t2931_PIs, t2931_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2931_TI, t2931_ITIs, t2931_VT, &EmptyCustomAttributesCache, &t2931_TI, &t2931_0_0_0, &t2931_1_0_0, t2931_IOs, &t2931_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2931)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5224_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.StreamingContextStates>
extern MethodInfo m30316_MI;
static PropertyInfo t5224____Count_PropertyInfo = 
{
	&t5224_TI, "Count", &m30316_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30317_MI;
static PropertyInfo t5224____IsReadOnly_PropertyInfo = 
{
	&t5224_TI, "IsReadOnly", &m30317_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5224_PIs[] =
{
	&t5224____Count_PropertyInfo,
	&t5224____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5224_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30316_MI = 
{
	"get_Count", NULL, &t5224_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5224_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30317_MI = 
{
	"get_IsReadOnly", NULL, &t5224_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1135_0_0_0;
static ParameterInfo t5224_m30318_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1135_0_0_0},
};
extern TypeInfo t5224_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30318_MI = 
{
	"Add", NULL, &t5224_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5224_m30318_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5224_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30319_MI = 
{
	"Clear", NULL, &t5224_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1135_0_0_0;
static ParameterInfo t5224_m30320_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1135_0_0_0},
};
extern TypeInfo t5224_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30320_MI = 
{
	"Contains", NULL, &t5224_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5224_m30320_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3175_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5224_m30321_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3175_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5224_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30321_MI = 
{
	"CopyTo", NULL, &t5224_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5224_m30321_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1135_0_0_0;
static ParameterInfo t5224_m30322_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1135_0_0_0},
};
extern TypeInfo t5224_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30322_MI = 
{
	"Remove", NULL, &t5224_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5224_m30322_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5224_MIs[] =
{
	&m30316_MI,
	&m30317_MI,
	&m30318_MI,
	&m30319_MI,
	&m30320_MI,
	&m30321_MI,
	&m30322_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5226_TI;
static TypeInfo* t5224_ITIs[] = 
{
	&t618_TI,
	&t5226_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5224_0_0_0;
extern Il2CppType t5224_1_0_0;
struct t5224;
extern TypeInfo t5224_TI;
extern Il2CppGenericClass t5224_GC;
TypeInfo t5224_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5224_MIs, t5224_PIs, NULL, NULL, NULL, NULL, NULL, &t5224_TI, t5224_ITIs, NULL, &EmptyCustomAttributesCache, &t5224_TI, &t5224_0_0_0, &t5224_1_0_0, NULL, &t5224_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5226_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.StreamingContextStates>
extern TypeInfo t5226_TI;
extern Il2CppType t3856_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30323_MI = 
{
	"GetEnumerator", NULL, &t5226_TI, &t3856_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5226_MIs[] =
{
	&m30323_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5226_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5226_0_0_0;
extern Il2CppType t5226_1_0_0;
struct t5226;
extern TypeInfo t5226_TI;
extern Il2CppGenericClass t5226_GC;
TypeInfo t5226_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5226_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5226_TI, t5226_ITIs, NULL, &EmptyCustomAttributesCache, &t5226_TI, &t5226_0_0_0, &t5226_1_0_0, NULL, &t5226_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5225_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.StreamingContextStates>
extern MethodInfo m30324_MI;
extern MethodInfo m30325_MI;
static PropertyInfo t5225____Item_PropertyInfo = 
{
	&t5225_TI, "Item", &m30324_MI, &m30325_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5225_PIs[] =
{
	&t5225____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1135_0_0_0;
static ParameterInfo t5225_m30326_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1135_0_0_0},
};
extern TypeInfo t5225_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30326_MI = 
{
	"IndexOf", NULL, &t5225_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5225_m30326_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1135_0_0_0;
static ParameterInfo t5225_m30327_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1135_0_0_0},
};
extern TypeInfo t5225_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30327_MI = 
{
	"Insert", NULL, &t5225_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5225_m30327_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5225_m30328_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5225_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30328_MI = 
{
	"RemoveAt", NULL, &t5225_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5225_m30328_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5225_m30324_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5225_TI;
extern Il2CppType t1135_0_0_0;
extern void* RuntimeInvoker_t1135_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30324_MI = 
{
	"get_Item", NULL, &t5225_TI, &t1135_0_0_0, RuntimeInvoker_t1135_t60, t5225_m30324_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1135_0_0_0;
static ParameterInfo t5225_m30325_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1135_0_0_0},
};
extern TypeInfo t5225_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30325_MI = 
{
	"set_Item", NULL, &t5225_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5225_m30325_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5225_MIs[] =
{
	&m30326_MI,
	&m30327_MI,
	&m30328_MI,
	&m30324_MI,
	&m30325_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5224_TI;
extern TypeInfo t5226_TI;
static TypeInfo* t5225_ITIs[] = 
{
	&t618_TI,
	&t5224_TI,
	&t5226_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5225_0_0_0;
extern Il2CppType t5225_1_0_0;
struct t5225;
extern TypeInfo t5225_TI;
extern Il2CppGenericClass t5225_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5225_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5225_MIs, t5225_PIs, NULL, NULL, NULL, NULL, NULL, &t5225_TI, t5225_ITIs, NULL, &t1426__CustomAttributeCache, &t5225_TI, &t5225_0_0_0, &t5225_1_0_0, NULL, &t5225_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3857_TI;

#include "t1142.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.CipherMode>
extern MethodInfo m30329_MI;
static PropertyInfo t3857____Current_PropertyInfo = 
{
	&t3857_TI, "Current", &m30329_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3857_PIs[] =
{
	&t3857____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3857_TI;
extern Il2CppType t1142_0_0_0;
extern void* RuntimeInvoker_t1142 (MethodInfo* method, void* obj, void** args);
MethodInfo m30329_MI = 
{
	"get_Current", NULL, &t3857_TI, &t1142_0_0_0, RuntimeInvoker_t1142, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3857_MIs[] =
{
	&m30329_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3857_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3857_0_0_0;
extern Il2CppType t3857_1_0_0;
struct t3857;
extern TypeInfo t3857_TI;
extern Il2CppGenericClass t3857_GC;
TypeInfo t3857_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3857_MIs, t3857_PIs, NULL, NULL, NULL, NULL, NULL, &t3857_TI, t3857_ITIs, NULL, &EmptyCustomAttributesCache, &t3857_TI, &t3857_0_0_0, &t3857_1_0_0, NULL, &t3857_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2932.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2932_TI;
#include "t2932MD.h"

extern TypeInfo t2932_TI;
extern TypeInfo t1142_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16821_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23102_MI;
struct t52;
 int32_t m23102 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m23102_MI;


extern MethodInfo m16817_MI;
 void m16817 (t2932 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16818_MI;
 t7 * m16818 (t2932 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16821(__this, &m16821_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1142_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16819_MI;
 void m16819 (t2932 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16820_MI;
 bool m16820 (t2932 * __this, MethodInfo* method){
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
extern MethodInfo m16821_MI;
 int32_t m16821 (t2932 * __this, MethodInfo* method){
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
		int32_t L_8 = m23102(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m23102_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.CipherMode>
extern Il2CppType t52_0_0_1;
FieldInfo t2932_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2932_TI, offsetof(t2932, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2932_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2932_TI, offsetof(t2932, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2932_FIs[] =
{
	&t2932_f0_FieldInfo,
	&t2932_f1_FieldInfo,
	NULL
};
extern MethodInfo m16818_MI;
static PropertyInfo t2932____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2932_TI, "System.Collections.IEnumerator.Current", &m16818_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16821_MI;
static PropertyInfo t2932____Current_PropertyInfo = 
{
	&t2932_TI, "Current", &m16821_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2932_PIs[] =
{
	&t2932____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2932____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2932_m16817_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2932_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16817_MI = 
{
	".ctor", (methodPointerType)&m16817, &t2932_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2932_m16817_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2932_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16818_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16818, &t2932_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2932_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16819_MI = 
{
	"Dispose", (methodPointerType)&m16819, &t2932_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2932_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16820_MI = 
{
	"MoveNext", (methodPointerType)&m16820, &t2932_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2932_TI;
extern Il2CppType t1142_0_0_0;
extern void* RuntimeInvoker_t1142 (MethodInfo* method, void* obj, void** args);
MethodInfo m16821_MI = 
{
	"get_Current", (methodPointerType)&m16821, &t2932_TI, &t1142_0_0_0, RuntimeInvoker_t1142, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2932_MIs[] =
{
	&m16817_MI,
	&m16818_MI,
	&m16819_MI,
	&m16820_MI,
	&m16821_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16818_MI;
extern MethodInfo m16820_MI;
extern MethodInfo m16819_MI;
extern MethodInfo m16821_MI;
static MethodInfo* t2932_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16818_MI,
	&m16820_MI,
	&m16819_MI,
	&m16821_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3857_TI;
static TypeInfo* t2932_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3857_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3857_TI;
static Il2CppInterfaceOffsetPair t2932_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3857_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2932_0_0_0;
extern Il2CppType t2932_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2932_TI;
extern Il2CppGenericClass t2932_GC;
extern TypeInfo t52_TI;
TypeInfo t2932_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2932_MIs, t2932_PIs, t2932_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2932_TI, t2932_ITIs, t2932_VT, &EmptyCustomAttributesCache, &t2932_TI, &t2932_0_0_0, &t2932_1_0_0, t2932_IOs, &t2932_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2932)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5227_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.CipherMode>
extern MethodInfo m30330_MI;
static PropertyInfo t5227____Count_PropertyInfo = 
{
	&t5227_TI, "Count", &m30330_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30331_MI;
static PropertyInfo t5227____IsReadOnly_PropertyInfo = 
{
	&t5227_TI, "IsReadOnly", &m30331_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5227_PIs[] =
{
	&t5227____Count_PropertyInfo,
	&t5227____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5227_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30330_MI = 
{
	"get_Count", NULL, &t5227_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5227_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30331_MI = 
{
	"get_IsReadOnly", NULL, &t5227_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1142_0_0_0;
static ParameterInfo t5227_m30332_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1142_0_0_0},
};
extern TypeInfo t5227_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30332_MI = 
{
	"Add", NULL, &t5227_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5227_m30332_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5227_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30333_MI = 
{
	"Clear", NULL, &t5227_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1142_0_0_0;
static ParameterInfo t5227_m30334_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1142_0_0_0},
};
extern TypeInfo t5227_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30334_MI = 
{
	"Contains", NULL, &t5227_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5227_m30334_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3176_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5227_m30335_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3176_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5227_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30335_MI = 
{
	"CopyTo", NULL, &t5227_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5227_m30335_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1142_0_0_0;
static ParameterInfo t5227_m30336_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1142_0_0_0},
};
extern TypeInfo t5227_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30336_MI = 
{
	"Remove", NULL, &t5227_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5227_m30336_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5227_MIs[] =
{
	&m30330_MI,
	&m30331_MI,
	&m30332_MI,
	&m30333_MI,
	&m30334_MI,
	&m30335_MI,
	&m30336_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5229_TI;
static TypeInfo* t5227_ITIs[] = 
{
	&t618_TI,
	&t5229_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5227_0_0_0;
extern Il2CppType t5227_1_0_0;
struct t5227;
extern TypeInfo t5227_TI;
extern Il2CppGenericClass t5227_GC;
TypeInfo t5227_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5227_MIs, t5227_PIs, NULL, NULL, NULL, NULL, NULL, &t5227_TI, t5227_ITIs, NULL, &EmptyCustomAttributesCache, &t5227_TI, &t5227_0_0_0, &t5227_1_0_0, NULL, &t5227_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5229_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.CipherMode>
extern TypeInfo t5229_TI;
extern Il2CppType t3857_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30337_MI = 
{
	"GetEnumerator", NULL, &t5229_TI, &t3857_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5229_MIs[] =
{
	&m30337_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5229_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5229_0_0_0;
extern Il2CppType t5229_1_0_0;
struct t5229;
extern TypeInfo t5229_TI;
extern Il2CppGenericClass t5229_GC;
TypeInfo t5229_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5229_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5229_TI, t5229_ITIs, NULL, &EmptyCustomAttributesCache, &t5229_TI, &t5229_0_0_0, &t5229_1_0_0, NULL, &t5229_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5228_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.CipherMode>
extern MethodInfo m30338_MI;
extern MethodInfo m30339_MI;
static PropertyInfo t5228____Item_PropertyInfo = 
{
	&t5228_TI, "Item", &m30338_MI, &m30339_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5228_PIs[] =
{
	&t5228____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1142_0_0_0;
static ParameterInfo t5228_m30340_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1142_0_0_0},
};
extern TypeInfo t5228_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30340_MI = 
{
	"IndexOf", NULL, &t5228_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5228_m30340_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1142_0_0_0;
static ParameterInfo t5228_m30341_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1142_0_0_0},
};
extern TypeInfo t5228_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30341_MI = 
{
	"Insert", NULL, &t5228_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5228_m30341_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5228_m30342_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5228_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30342_MI = 
{
	"RemoveAt", NULL, &t5228_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5228_m30342_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5228_m30338_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5228_TI;
extern Il2CppType t1142_0_0_0;
extern void* RuntimeInvoker_t1142_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30338_MI = 
{
	"get_Item", NULL, &t5228_TI, &t1142_0_0_0, RuntimeInvoker_t1142_t60, t5228_m30338_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1142_0_0_0;
static ParameterInfo t5228_m30339_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1142_0_0_0},
};
extern TypeInfo t5228_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30339_MI = 
{
	"set_Item", NULL, &t5228_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5228_m30339_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5228_MIs[] =
{
	&m30340_MI,
	&m30341_MI,
	&m30342_MI,
	&m30338_MI,
	&m30339_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5227_TI;
extern TypeInfo t5229_TI;
static TypeInfo* t5228_ITIs[] = 
{
	&t618_TI,
	&t5227_TI,
	&t5229_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5228_0_0_0;
extern Il2CppType t5228_1_0_0;
struct t5228;
extern TypeInfo t5228_TI;
extern Il2CppGenericClass t5228_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5228_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5228_MIs, t5228_PIs, NULL, NULL, NULL, NULL, NULL, &t5228_TI, t5228_ITIs, NULL, &t1426__CustomAttributeCache, &t5228_TI, &t5228_0_0_0, &t5228_1_0_0, NULL, &t5228_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3858_TI;

#include "t1146.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.CspProviderFlags>
extern MethodInfo m30343_MI;
static PropertyInfo t3858____Current_PropertyInfo = 
{
	&t3858_TI, "Current", &m30343_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3858_PIs[] =
{
	&t3858____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3858_TI;
extern Il2CppType t1146_0_0_0;
extern void* RuntimeInvoker_t1146 (MethodInfo* method, void* obj, void** args);
MethodInfo m30343_MI = 
{
	"get_Current", NULL, &t3858_TI, &t1146_0_0_0, RuntimeInvoker_t1146, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3858_MIs[] =
{
	&m30343_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3858_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3858_0_0_0;
extern Il2CppType t3858_1_0_0;
struct t3858;
extern TypeInfo t3858_TI;
extern Il2CppGenericClass t3858_GC;
TypeInfo t3858_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3858_MIs, t3858_PIs, NULL, NULL, NULL, NULL, NULL, &t3858_TI, t3858_ITIs, NULL, &EmptyCustomAttributesCache, &t3858_TI, &t3858_0_0_0, &t3858_1_0_0, NULL, &t3858_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2933.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2933_TI;
#include "t2933MD.h"

extern TypeInfo t2933_TI;
extern TypeInfo t1146_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16826_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23113_MI;
struct t52;
 int32_t m23113 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m23113_MI;


extern MethodInfo m16822_MI;
 void m16822 (t2933 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16823_MI;
 t7 * m16823 (t2933 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16826(__this, &m16826_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1146_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16824_MI;
 void m16824 (t2933 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16825_MI;
 bool m16825 (t2933 * __this, MethodInfo* method){
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
extern MethodInfo m16826_MI;
 int32_t m16826 (t2933 * __this, MethodInfo* method){
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
		int32_t L_8 = m23113(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m23113_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.CspProviderFlags>
extern Il2CppType t52_0_0_1;
FieldInfo t2933_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2933_TI, offsetof(t2933, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2933_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2933_TI, offsetof(t2933, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2933_FIs[] =
{
	&t2933_f0_FieldInfo,
	&t2933_f1_FieldInfo,
	NULL
};
extern MethodInfo m16823_MI;
static PropertyInfo t2933____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2933_TI, "System.Collections.IEnumerator.Current", &m16823_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16826_MI;
static PropertyInfo t2933____Current_PropertyInfo = 
{
	&t2933_TI, "Current", &m16826_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2933_PIs[] =
{
	&t2933____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2933____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2933_m16822_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2933_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16822_MI = 
{
	".ctor", (methodPointerType)&m16822, &t2933_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2933_m16822_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2933_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16823_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16823, &t2933_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2933_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16824_MI = 
{
	"Dispose", (methodPointerType)&m16824, &t2933_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2933_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16825_MI = 
{
	"MoveNext", (methodPointerType)&m16825, &t2933_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2933_TI;
extern Il2CppType t1146_0_0_0;
extern void* RuntimeInvoker_t1146 (MethodInfo* method, void* obj, void** args);
MethodInfo m16826_MI = 
{
	"get_Current", (methodPointerType)&m16826, &t2933_TI, &t1146_0_0_0, RuntimeInvoker_t1146, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2933_MIs[] =
{
	&m16822_MI,
	&m16823_MI,
	&m16824_MI,
	&m16825_MI,
	&m16826_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16823_MI;
extern MethodInfo m16825_MI;
extern MethodInfo m16824_MI;
extern MethodInfo m16826_MI;
static MethodInfo* t2933_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16823_MI,
	&m16825_MI,
	&m16824_MI,
	&m16826_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3858_TI;
static TypeInfo* t2933_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3858_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3858_TI;
static Il2CppInterfaceOffsetPair t2933_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3858_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2933_0_0_0;
extern Il2CppType t2933_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2933_TI;
extern Il2CppGenericClass t2933_GC;
extern TypeInfo t52_TI;
TypeInfo t2933_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2933_MIs, t2933_PIs, t2933_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2933_TI, t2933_ITIs, t2933_VT, &EmptyCustomAttributesCache, &t2933_TI, &t2933_0_0_0, &t2933_1_0_0, t2933_IOs, &t2933_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2933)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5230_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.CspProviderFlags>
extern MethodInfo m30344_MI;
static PropertyInfo t5230____Count_PropertyInfo = 
{
	&t5230_TI, "Count", &m30344_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30345_MI;
static PropertyInfo t5230____IsReadOnly_PropertyInfo = 
{
	&t5230_TI, "IsReadOnly", &m30345_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5230_PIs[] =
{
	&t5230____Count_PropertyInfo,
	&t5230____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5230_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30344_MI = 
{
	"get_Count", NULL, &t5230_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5230_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30345_MI = 
{
	"get_IsReadOnly", NULL, &t5230_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1146_0_0_0;
static ParameterInfo t5230_m30346_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1146_0_0_0},
};
extern TypeInfo t5230_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30346_MI = 
{
	"Add", NULL, &t5230_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5230_m30346_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5230_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30347_MI = 
{
	"Clear", NULL, &t5230_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1146_0_0_0;
static ParameterInfo t5230_m30348_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1146_0_0_0},
};
extern TypeInfo t5230_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30348_MI = 
{
	"Contains", NULL, &t5230_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5230_m30348_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3177_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5230_m30349_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3177_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5230_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30349_MI = 
{
	"CopyTo", NULL, &t5230_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5230_m30349_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1146_0_0_0;
static ParameterInfo t5230_m30350_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1146_0_0_0},
};
extern TypeInfo t5230_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30350_MI = 
{
	"Remove", NULL, &t5230_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5230_m30350_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5230_MIs[] =
{
	&m30344_MI,
	&m30345_MI,
	&m30346_MI,
	&m30347_MI,
	&m30348_MI,
	&m30349_MI,
	&m30350_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5232_TI;
static TypeInfo* t5230_ITIs[] = 
{
	&t618_TI,
	&t5232_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5230_0_0_0;
extern Il2CppType t5230_1_0_0;
struct t5230;
extern TypeInfo t5230_TI;
extern Il2CppGenericClass t5230_GC;
TypeInfo t5230_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5230_MIs, t5230_PIs, NULL, NULL, NULL, NULL, NULL, &t5230_TI, t5230_ITIs, NULL, &EmptyCustomAttributesCache, &t5230_TI, &t5230_0_0_0, &t5230_1_0_0, NULL, &t5230_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5232_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.CspProviderFlags>
extern TypeInfo t5232_TI;
extern Il2CppType t3858_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30351_MI = 
{
	"GetEnumerator", NULL, &t5232_TI, &t3858_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5232_MIs[] =
{
	&m30351_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5232_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5232_0_0_0;
extern Il2CppType t5232_1_0_0;
struct t5232;
extern TypeInfo t5232_TI;
extern Il2CppGenericClass t5232_GC;
TypeInfo t5232_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5232_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5232_TI, t5232_ITIs, NULL, &EmptyCustomAttributesCache, &t5232_TI, &t5232_0_0_0, &t5232_1_0_0, NULL, &t5232_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5231_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.CspProviderFlags>
extern MethodInfo m30352_MI;
extern MethodInfo m30353_MI;
static PropertyInfo t5231____Item_PropertyInfo = 
{
	&t5231_TI, "Item", &m30352_MI, &m30353_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5231_PIs[] =
{
	&t5231____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1146_0_0_0;
static ParameterInfo t5231_m30354_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1146_0_0_0},
};
extern TypeInfo t5231_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30354_MI = 
{
	"IndexOf", NULL, &t5231_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5231_m30354_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1146_0_0_0;
static ParameterInfo t5231_m30355_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1146_0_0_0},
};
extern TypeInfo t5231_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30355_MI = 
{
	"Insert", NULL, &t5231_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5231_m30355_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5231_m30356_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5231_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30356_MI = 
{
	"RemoveAt", NULL, &t5231_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5231_m30356_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5231_m30352_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5231_TI;
extern Il2CppType t1146_0_0_0;
extern void* RuntimeInvoker_t1146_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30352_MI = 
{
	"get_Item", NULL, &t5231_TI, &t1146_0_0_0, RuntimeInvoker_t1146_t60, t5231_m30352_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1146_0_0_0;
static ParameterInfo t5231_m30353_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1146_0_0_0},
};
extern TypeInfo t5231_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30353_MI = 
{
	"set_Item", NULL, &t5231_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5231_m30353_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5231_MIs[] =
{
	&m30354_MI,
	&m30355_MI,
	&m30356_MI,
	&m30352_MI,
	&m30353_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5230_TI;
extern TypeInfo t5232_TI;
static TypeInfo* t5231_ITIs[] = 
{
	&t618_TI,
	&t5230_TI,
	&t5232_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5231_0_0_0;
extern Il2CppType t5231_1_0_0;
struct t5231;
extern TypeInfo t5231_TI;
extern Il2CppGenericClass t5231_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5231_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5231_MIs, t5231_PIs, NULL, NULL, NULL, NULL, NULL, &t5231_TI, t5231_ITIs, NULL, &t1426__CustomAttributeCache, &t5231_TI, &t5231_0_0_0, &t5231_1_0_0, NULL, &t5231_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3859_TI;

#include "t834.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.PaddingMode>
extern MethodInfo m30357_MI;
static PropertyInfo t3859____Current_PropertyInfo = 
{
	&t3859_TI, "Current", &m30357_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3859_PIs[] =
{
	&t3859____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3859_TI;
extern Il2CppType t834_0_0_0;
extern void* RuntimeInvoker_t834 (MethodInfo* method, void* obj, void** args);
MethodInfo m30357_MI = 
{
	"get_Current", NULL, &t3859_TI, &t834_0_0_0, RuntimeInvoker_t834, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3859_MIs[] =
{
	&m30357_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3859_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3859_0_0_0;
extern Il2CppType t3859_1_0_0;
struct t3859;
extern TypeInfo t3859_TI;
extern Il2CppGenericClass t3859_GC;
TypeInfo t3859_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3859_MIs, t3859_PIs, NULL, NULL, NULL, NULL, NULL, &t3859_TI, t3859_ITIs, NULL, &EmptyCustomAttributesCache, &t3859_TI, &t3859_0_0_0, &t3859_1_0_0, NULL, &t3859_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2934.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2934_TI;
#include "t2934MD.h"

extern TypeInfo t2934_TI;
extern TypeInfo t834_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16831_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23124_MI;
struct t52;
 int32_t m23124 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m23124_MI;


extern MethodInfo m16827_MI;
 void m16827 (t2934 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16828_MI;
 t7 * m16828 (t2934 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16831(__this, &m16831_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t834_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16829_MI;
 void m16829 (t2934 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16830_MI;
 bool m16830 (t2934 * __this, MethodInfo* method){
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
extern MethodInfo m16831_MI;
 int32_t m16831 (t2934 * __this, MethodInfo* method){
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
		int32_t L_8 = m23124(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m23124_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.PaddingMode>
extern Il2CppType t52_0_0_1;
FieldInfo t2934_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2934_TI, offsetof(t2934, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2934_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2934_TI, offsetof(t2934, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2934_FIs[] =
{
	&t2934_f0_FieldInfo,
	&t2934_f1_FieldInfo,
	NULL
};
extern MethodInfo m16828_MI;
static PropertyInfo t2934____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2934_TI, "System.Collections.IEnumerator.Current", &m16828_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16831_MI;
static PropertyInfo t2934____Current_PropertyInfo = 
{
	&t2934_TI, "Current", &m16831_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2934_PIs[] =
{
	&t2934____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2934____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2934_m16827_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2934_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16827_MI = 
{
	".ctor", (methodPointerType)&m16827, &t2934_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2934_m16827_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2934_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16828_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16828, &t2934_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2934_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16829_MI = 
{
	"Dispose", (methodPointerType)&m16829, &t2934_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2934_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16830_MI = 
{
	"MoveNext", (methodPointerType)&m16830, &t2934_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2934_TI;
extern Il2CppType t834_0_0_0;
extern void* RuntimeInvoker_t834 (MethodInfo* method, void* obj, void** args);
MethodInfo m16831_MI = 
{
	"get_Current", (methodPointerType)&m16831, &t2934_TI, &t834_0_0_0, RuntimeInvoker_t834, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2934_MIs[] =
{
	&m16827_MI,
	&m16828_MI,
	&m16829_MI,
	&m16830_MI,
	&m16831_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16828_MI;
extern MethodInfo m16830_MI;
extern MethodInfo m16829_MI;
extern MethodInfo m16831_MI;
static MethodInfo* t2934_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16828_MI,
	&m16830_MI,
	&m16829_MI,
	&m16831_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3859_TI;
static TypeInfo* t2934_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3859_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3859_TI;
static Il2CppInterfaceOffsetPair t2934_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3859_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2934_0_0_0;
extern Il2CppType t2934_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2934_TI;
extern Il2CppGenericClass t2934_GC;
extern TypeInfo t52_TI;
TypeInfo t2934_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2934_MIs, t2934_PIs, t2934_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2934_TI, t2934_ITIs, t2934_VT, &EmptyCustomAttributesCache, &t2934_TI, &t2934_0_0_0, &t2934_1_0_0, t2934_IOs, &t2934_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2934)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5233_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.PaddingMode>
extern MethodInfo m30358_MI;
static PropertyInfo t5233____Count_PropertyInfo = 
{
	&t5233_TI, "Count", &m30358_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30359_MI;
static PropertyInfo t5233____IsReadOnly_PropertyInfo = 
{
	&t5233_TI, "IsReadOnly", &m30359_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5233_PIs[] =
{
	&t5233____Count_PropertyInfo,
	&t5233____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5233_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30358_MI = 
{
	"get_Count", NULL, &t5233_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5233_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30359_MI = 
{
	"get_IsReadOnly", NULL, &t5233_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t834_0_0_0;
static ParameterInfo t5233_m30360_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t834_0_0_0},
};
extern TypeInfo t5233_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30360_MI = 
{
	"Add", NULL, &t5233_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5233_m30360_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5233_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30361_MI = 
{
	"Clear", NULL, &t5233_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t834_0_0_0;
static ParameterInfo t5233_m30362_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t834_0_0_0},
};
extern TypeInfo t5233_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30362_MI = 
{
	"Contains", NULL, &t5233_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5233_m30362_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3178_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5233_m30363_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3178_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5233_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30363_MI = 
{
	"CopyTo", NULL, &t5233_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5233_m30363_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t834_0_0_0;
static ParameterInfo t5233_m30364_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t834_0_0_0},
};
extern TypeInfo t5233_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30364_MI = 
{
	"Remove", NULL, &t5233_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5233_m30364_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5233_MIs[] =
{
	&m30358_MI,
	&m30359_MI,
	&m30360_MI,
	&m30361_MI,
	&m30362_MI,
	&m30363_MI,
	&m30364_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5235_TI;
static TypeInfo* t5233_ITIs[] = 
{
	&t618_TI,
	&t5235_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5233_0_0_0;
extern Il2CppType t5233_1_0_0;
struct t5233;
extern TypeInfo t5233_TI;
extern Il2CppGenericClass t5233_GC;
TypeInfo t5233_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5233_MIs, t5233_PIs, NULL, NULL, NULL, NULL, NULL, &t5233_TI, t5233_ITIs, NULL, &EmptyCustomAttributesCache, &t5233_TI, &t5233_0_0_0, &t5233_1_0_0, NULL, &t5233_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5235_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.PaddingMode>
extern TypeInfo t5235_TI;
extern Il2CppType t3859_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30365_MI = 
{
	"GetEnumerator", NULL, &t5235_TI, &t3859_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5235_MIs[] =
{
	&m30365_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5235_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5235_0_0_0;
extern Il2CppType t5235_1_0_0;
struct t5235;
extern TypeInfo t5235_TI;
extern Il2CppGenericClass t5235_GC;
TypeInfo t5235_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5235_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5235_TI, t5235_ITIs, NULL, &EmptyCustomAttributesCache, &t5235_TI, &t5235_0_0_0, &t5235_1_0_0, NULL, &t5235_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5234_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.PaddingMode>
extern MethodInfo m30366_MI;
extern MethodInfo m30367_MI;
static PropertyInfo t5234____Item_PropertyInfo = 
{
	&t5234_TI, "Item", &m30366_MI, &m30367_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5234_PIs[] =
{
	&t5234____Item_PropertyInfo,
	NULL
};
extern Il2CppType t834_0_0_0;
static ParameterInfo t5234_m30368_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t834_0_0_0},
};
extern TypeInfo t5234_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30368_MI = 
{
	"IndexOf", NULL, &t5234_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5234_m30368_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t834_0_0_0;
static ParameterInfo t5234_m30369_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t834_0_0_0},
};
extern TypeInfo t5234_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30369_MI = 
{
	"Insert", NULL, &t5234_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5234_m30369_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5234_m30370_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5234_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30370_MI = 
{
	"RemoveAt", NULL, &t5234_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5234_m30370_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5234_m30366_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5234_TI;
extern Il2CppType t834_0_0_0;
extern void* RuntimeInvoker_t834_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30366_MI = 
{
	"get_Item", NULL, &t5234_TI, &t834_0_0_0, RuntimeInvoker_t834_t60, t5234_m30366_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t834_0_0_0;
static ParameterInfo t5234_m30367_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t834_0_0_0},
};
extern TypeInfo t5234_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30367_MI = 
{
	"set_Item", NULL, &t5234_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5234_m30367_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5234_MIs[] =
{
	&m30368_MI,
	&m30369_MI,
	&m30370_MI,
	&m30366_MI,
	&m30367_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5233_TI;
extern TypeInfo t5235_TI;
static TypeInfo* t5234_ITIs[] = 
{
	&t618_TI,
	&t5233_TI,
	&t5235_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5234_0_0_0;
extern Il2CppType t5234_1_0_0;
struct t5234;
extern TypeInfo t5234_TI;
extern Il2CppGenericClass t5234_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5234_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5234_MIs, t5234_PIs, NULL, NULL, NULL, NULL, NULL, &t5234_TI, t5234_ITIs, NULL, &t1426__CustomAttributeCache, &t5234_TI, &t5234_0_0_0, &t5234_1_0_0, NULL, &t5234_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1199_TI;

#include "t1202.h"


// Metadata Definition System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
extern MethodInfo m30371_MI;
extern MethodInfo m30372_MI;
static PropertyInfo t1199____Item_PropertyInfo = 
{
	&t1199_TI, "Item", &m30371_MI, &m30372_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1199_PIs[] =
{
	&t1199____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t1199_m30373_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t1199_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30373_MI = 
{
	"IndexOf", NULL, &t1199_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1199_m30373_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1202_0_0_0;
static ParameterInfo t1199_m30374_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t1199_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30374_MI = 
{
	"Insert", NULL, &t1199_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t1199_m30374_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1199_m30375_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1199_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30375_MI = 
{
	"RemoveAt", NULL, &t1199_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t1199_m30375_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1199_m30371_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1199_TI;
extern Il2CppType t1202_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30371_MI = 
{
	"get_Item", NULL, &t1199_TI, &t1202_0_0_0, RuntimeInvoker_t7_t60, t1199_m30371_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1202_0_0_0;
static ParameterInfo t1199_m30372_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t1199_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30372_MI = 
{
	"set_Item", NULL, &t1199_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t1199_m30372_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1199_MIs[] =
{
	&m30373_MI,
	&m30374_MI,
	&m30375_MI,
	&m30371_MI,
	&m30372_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t2940_TI;
extern TypeInfo t2941_TI;
static TypeInfo* t1199_ITIs[] = 
{
	&t618_TI,
	&t2940_TI,
	&t2941_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1199_0_0_0;
extern Il2CppType t1199_1_0_0;
struct t1199;
extern TypeInfo t1199_TI;
extern Il2CppGenericClass t1199_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t1199_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t1199_MIs, t1199_PIs, NULL, NULL, NULL, NULL, NULL, &t1199_TI, t1199_ITIs, NULL, &t1426__CustomAttributeCache, &t1199_TI, &t1199_0_0_0, &t1199_1_0_0, NULL, &t1199_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2940_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>
extern MethodInfo m30376_MI;
static PropertyInfo t2940____Count_PropertyInfo = 
{
	&t2940_TI, "Count", &m30376_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30377_MI;
static PropertyInfo t2940____IsReadOnly_PropertyInfo = 
{
	&t2940_TI, "IsReadOnly", &m30377_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2940_PIs[] =
{
	&t2940____Count_PropertyInfo,
	&t2940____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t2940_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30376_MI = 
{
	"get_Count", NULL, &t2940_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2940_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30377_MI = 
{
	"get_IsReadOnly", NULL, &t2940_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2940_m30378_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2940_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30378_MI = 
{
	"Add", NULL, &t2940_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2940_m30378_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2940_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30379_MI = 
{
	"Clear", NULL, &t2940_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2940_m30380_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2940_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30380_MI = 
{
	"Contains", NULL, &t2940_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2940_m30380_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2938_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2940_m30381_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2938_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2940_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30381_MI = 
{
	"CopyTo", NULL, &t2940_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2940_m30381_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2940_m30382_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2940_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30382_MI = 
{
	"Remove", NULL, &t2940_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2940_m30382_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2940_MIs[] =
{
	&m30376_MI,
	&m30377_MI,
	&m30378_MI,
	&m30379_MI,
	&m30380_MI,
	&m30381_MI,
	&m30382_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t2941_TI;
static TypeInfo* t2940_ITIs[] = 
{
	&t618_TI,
	&t2941_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2940_0_0_0;
extern Il2CppType t2940_1_0_0;
struct t2940;
extern TypeInfo t2940_TI;
extern Il2CppGenericClass t2940_GC;
TypeInfo t2940_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t2940_MIs, t2940_PIs, NULL, NULL, NULL, NULL, NULL, &t2940_TI, t2940_ITIs, NULL, &EmptyCustomAttributesCache, &t2940_TI, &t2940_0_0_0, &t2940_1_0_0, NULL, &t2940_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2941_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Policy.StrongName>
extern TypeInfo t2941_TI;
extern Il2CppType t2939_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30383_MI = 
{
	"GetEnumerator", NULL, &t2941_TI, &t2939_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2941_MIs[] =
{
	&m30383_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t2941_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2941_0_0_0;
extern Il2CppType t2941_1_0_0;
struct t2941;
extern TypeInfo t2941_TI;
extern Il2CppGenericClass t2941_GC;
TypeInfo t2941_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2941_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2941_TI, t2941_ITIs, NULL, &EmptyCustomAttributesCache, &t2941_TI, &t2941_0_0_0, &t2941_1_0_0, NULL, &t2941_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2939_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
extern MethodInfo m30384_MI;
static PropertyInfo t2939____Current_PropertyInfo = 
{
	&t2939_TI, "Current", &m30384_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2939_PIs[] =
{
	&t2939____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2939_TI;
extern Il2CppType t1202_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30384_MI = 
{
	"get_Current", NULL, &t2939_TI, &t1202_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2939_MIs[] =
{
	&m30384_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t2939_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2939_0_0_0;
extern Il2CppType t2939_1_0_0;
struct t2939;
extern TypeInfo t2939_TI;
extern Il2CppGenericClass t2939_GC;
TypeInfo t2939_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2939_MIs, t2939_PIs, NULL, NULL, NULL, NULL, NULL, &t2939_TI, t2939_ITIs, NULL, &EmptyCustomAttributesCache, &t2939_TI, &t2939_0_0_0, &t2939_1_0_0, NULL, &t2939_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2935.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2935_TI;
#include "t2935MD.h"

extern TypeInfo t2935_TI;
extern TypeInfo t1202_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16836_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23135_MI;
struct t52;
#define m23135(__this, p0, method) (t1202 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m23135_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>
extern Il2CppType t52_0_0_1;
FieldInfo t2935_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2935_TI, offsetof(t2935, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2935_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2935_TI, offsetof(t2935, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2935_FIs[] =
{
	&t2935_f0_FieldInfo,
	&t2935_f1_FieldInfo,
	NULL
};
extern MethodInfo m16833_MI;
static PropertyInfo t2935____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2935_TI, "System.Collections.IEnumerator.Current", &m16833_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16836_MI;
static PropertyInfo t2935____Current_PropertyInfo = 
{
	&t2935_TI, "Current", &m16836_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2935_PIs[] =
{
	&t2935____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2935____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2935_m16832_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2935_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16832_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2935_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2935_m16832_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2935_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16833_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2935_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2935_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16834_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2935_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2935_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16835_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2935_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2935_TI;
extern Il2CppType t1202_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16836_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2935_TI, &t1202_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2935_MIs[] =
{
	&m16832_MI,
	&m16833_MI,
	&m16834_MI,
	&m16835_MI,
	&m16836_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16833_MI;
extern MethodInfo m16835_MI;
extern MethodInfo m16834_MI;
extern MethodInfo m16836_MI;
static MethodInfo* t2935_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16833_MI,
	&m16835_MI,
	&m16834_MI,
	&m16836_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2939_TI;
static TypeInfo* t2935_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2939_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2939_TI;
static Il2CppInterfaceOffsetPair t2935_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2939_TI, 7},
};
extern MethodInfo m16836_MI;
extern TypeInfo t1202_TI;
extern MethodInfo m23135_MI;
static void* t2935_RGCTXData[3] = 
{
	&m16836_MI,
	&t1202_TI,
	&m23135_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2935_0_0_0;
extern Il2CppType t2935_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2935_TI;
extern Il2CppGenericClass t2935_GC;
extern TypeInfo t52_TI;
TypeInfo t2935_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2935_MIs, t2935_PIs, t2935_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2935_TI, t2935_ITIs, t2935_VT, &EmptyCustomAttributesCache, &t2935_TI, &t2935_0_0_0, &t2935_1_0_0, t2935_IOs, &t2935_GC, NULL, NULL, NULL, t2935_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2935)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5236_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Policy.IBuiltInEvidence>
extern MethodInfo m30385_MI;
static PropertyInfo t5236____Count_PropertyInfo = 
{
	&t5236_TI, "Count", &m30385_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30386_MI;
static PropertyInfo t5236____IsReadOnly_PropertyInfo = 
{
	&t5236_TI, "IsReadOnly", &m30386_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5236_PIs[] =
{
	&t5236____Count_PropertyInfo,
	&t5236____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5236_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30385_MI = 
{
	"get_Count", NULL, &t5236_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5236_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30386_MI = 
{
	"get_IsReadOnly", NULL, &t5236_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1564_0_0_0;
static ParameterInfo t5236_m30387_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1564_0_0_0},
};
extern TypeInfo t5236_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30387_MI = 
{
	"Add", NULL, &t5236_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5236_m30387_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5236_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30388_MI = 
{
	"Clear", NULL, &t5236_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1564_0_0_0;
static ParameterInfo t5236_m30389_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1564_0_0_0},
};
extern TypeInfo t5236_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30389_MI = 
{
	"Contains", NULL, &t5236_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5236_m30389_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3179_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5236_m30390_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3179_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5236_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30390_MI = 
{
	"CopyTo", NULL, &t5236_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5236_m30390_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1564_0_0_0;
static ParameterInfo t5236_m30391_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1564_0_0_0},
};
extern TypeInfo t5236_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30391_MI = 
{
	"Remove", NULL, &t5236_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5236_m30391_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5236_MIs[] =
{
	&m30385_MI,
	&m30386_MI,
	&m30387_MI,
	&m30388_MI,
	&m30389_MI,
	&m30390_MI,
	&m30391_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5238_TI;
static TypeInfo* t5236_ITIs[] = 
{
	&t618_TI,
	&t5238_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5236_0_0_0;
extern Il2CppType t5236_1_0_0;
struct t5236;
extern TypeInfo t5236_TI;
extern Il2CppGenericClass t5236_GC;
TypeInfo t5236_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5236_MIs, t5236_PIs, NULL, NULL, NULL, NULL, NULL, &t5236_TI, t5236_ITIs, NULL, &EmptyCustomAttributesCache, &t5236_TI, &t5236_0_0_0, &t5236_1_0_0, NULL, &t5236_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5238_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Policy.IBuiltInEvidence>
extern TypeInfo t5238_TI;
extern Il2CppType t3860_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30392_MI = 
{
	"GetEnumerator", NULL, &t5238_TI, &t3860_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5238_MIs[] =
{
	&m30392_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5238_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5238_0_0_0;
extern Il2CppType t5238_1_0_0;
struct t5238;
extern TypeInfo t5238_TI;
extern Il2CppGenericClass t5238_GC;
TypeInfo t5238_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5238_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5238_TI, t5238_ITIs, NULL, &EmptyCustomAttributesCache, &t5238_TI, &t5238_0_0_0, &t5238_1_0_0, NULL, &t5238_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3860_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Policy.IBuiltInEvidence>
extern MethodInfo m30393_MI;
static PropertyInfo t3860____Current_PropertyInfo = 
{
	&t3860_TI, "Current", &m30393_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3860_PIs[] =
{
	&t3860____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3860_TI;
extern Il2CppType t1564_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30393_MI = 
{
	"get_Current", NULL, &t3860_TI, &t1564_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3860_MIs[] =
{
	&m30393_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3860_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3860_0_0_0;
extern Il2CppType t3860_1_0_0;
struct t3860;
extern TypeInfo t3860_TI;
extern Il2CppGenericClass t3860_GC;
TypeInfo t3860_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3860_MIs, t3860_PIs, NULL, NULL, NULL, NULL, NULL, &t3860_TI, t3860_ITIs, NULL, &EmptyCustomAttributesCache, &t3860_TI, &t3860_0_0_0, &t3860_1_0_0, NULL, &t3860_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2936.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2936_TI;
#include "t2936MD.h"

extern TypeInfo t2936_TI;
extern TypeInfo t1564_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16841_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23146_MI;
struct t52;
#define m23146(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m23146_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>
extern Il2CppType t52_0_0_1;
FieldInfo t2936_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2936_TI, offsetof(t2936, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2936_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2936_TI, offsetof(t2936, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2936_FIs[] =
{
	&t2936_f0_FieldInfo,
	&t2936_f1_FieldInfo,
	NULL
};
extern MethodInfo m16838_MI;
static PropertyInfo t2936____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2936_TI, "System.Collections.IEnumerator.Current", &m16838_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16841_MI;
static PropertyInfo t2936____Current_PropertyInfo = 
{
	&t2936_TI, "Current", &m16841_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2936_PIs[] =
{
	&t2936____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2936____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2936_m16837_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2936_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16837_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2936_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2936_m16837_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2936_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16838_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2936_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2936_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16839_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2936_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2936_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16840_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2936_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2936_TI;
extern Il2CppType t1564_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16841_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2936_TI, &t1564_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2936_MIs[] =
{
	&m16837_MI,
	&m16838_MI,
	&m16839_MI,
	&m16840_MI,
	&m16841_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16838_MI;
extern MethodInfo m16840_MI;
extern MethodInfo m16839_MI;
extern MethodInfo m16841_MI;
static MethodInfo* t2936_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16838_MI,
	&m16840_MI,
	&m16839_MI,
	&m16841_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3860_TI;
static TypeInfo* t2936_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3860_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3860_TI;
static Il2CppInterfaceOffsetPair t2936_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3860_TI, 7},
};
extern MethodInfo m16841_MI;
extern TypeInfo t1564_TI;
extern MethodInfo m23146_MI;
static void* t2936_RGCTXData[3] = 
{
	&m16841_MI,
	&t1564_TI,
	&m23146_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2936_0_0_0;
extern Il2CppType t2936_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2936_TI;
extern Il2CppGenericClass t2936_GC;
extern TypeInfo t52_TI;
TypeInfo t2936_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2936_MIs, t2936_PIs, t2936_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2936_TI, t2936_ITIs, t2936_VT, &EmptyCustomAttributesCache, &t2936_TI, &t2936_0_0_0, &t2936_1_0_0, t2936_IOs, &t2936_GC, NULL, NULL, NULL, t2936_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2936)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5237_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Policy.IBuiltInEvidence>
extern MethodInfo m30394_MI;
extern MethodInfo m30395_MI;
static PropertyInfo t5237____Item_PropertyInfo = 
{
	&t5237_TI, "Item", &m30394_MI, &m30395_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5237_PIs[] =
{
	&t5237____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1564_0_0_0;
static ParameterInfo t5237_m30396_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1564_0_0_0},
};
extern TypeInfo t5237_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30396_MI = 
{
	"IndexOf", NULL, &t5237_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5237_m30396_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1564_0_0_0;
static ParameterInfo t5237_m30397_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1564_0_0_0},
};
extern TypeInfo t5237_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30397_MI = 
{
	"Insert", NULL, &t5237_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5237_m30397_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5237_m30398_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5237_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30398_MI = 
{
	"RemoveAt", NULL, &t5237_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5237_m30398_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5237_m30394_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5237_TI;
extern Il2CppType t1564_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30394_MI = 
{
	"get_Item", NULL, &t5237_TI, &t1564_0_0_0, RuntimeInvoker_t7_t60, t5237_m30394_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1564_0_0_0;
static ParameterInfo t5237_m30395_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1564_0_0_0},
};
extern TypeInfo t5237_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30395_MI = 
{
	"set_Item", NULL, &t5237_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5237_m30395_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5237_MIs[] =
{
	&m30396_MI,
	&m30397_MI,
	&m30398_MI,
	&m30394_MI,
	&m30395_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5236_TI;
extern TypeInfo t5238_TI;
static TypeInfo* t5237_ITIs[] = 
{
	&t618_TI,
	&t5236_TI,
	&t5238_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5237_0_0_0;
extern Il2CppType t5237_1_0_0;
struct t5237;
extern TypeInfo t5237_TI;
extern Il2CppGenericClass t5237_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5237_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5237_MIs, t5237_PIs, NULL, NULL, NULL, NULL, NULL, &t5237_TI, t5237_ITIs, NULL, &t1426__CustomAttributeCache, &t5237_TI, &t5237_0_0_0, &t5237_1_0_0, NULL, &t5237_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5239_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Policy.IIdentityPermissionFactory>
extern MethodInfo m30399_MI;
static PropertyInfo t5239____Count_PropertyInfo = 
{
	&t5239_TI, "Count", &m30399_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30400_MI;
static PropertyInfo t5239____IsReadOnly_PropertyInfo = 
{
	&t5239_TI, "IsReadOnly", &m30400_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5239_PIs[] =
{
	&t5239____Count_PropertyInfo,
	&t5239____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5239_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30399_MI = 
{
	"get_Count", NULL, &t5239_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5239_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30400_MI = 
{
	"get_IsReadOnly", NULL, &t5239_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1565_0_0_0;
static ParameterInfo t5239_m30401_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1565_0_0_0},
};
extern TypeInfo t5239_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30401_MI = 
{
	"Add", NULL, &t5239_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5239_m30401_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5239_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30402_MI = 
{
	"Clear", NULL, &t5239_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1565_0_0_0;
static ParameterInfo t5239_m30403_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1565_0_0_0},
};
extern TypeInfo t5239_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30403_MI = 
{
	"Contains", NULL, &t5239_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5239_m30403_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3180_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5239_m30404_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3180_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5239_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30404_MI = 
{
	"CopyTo", NULL, &t5239_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5239_m30404_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1565_0_0_0;
static ParameterInfo t5239_m30405_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1565_0_0_0},
};
extern TypeInfo t5239_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30405_MI = 
{
	"Remove", NULL, &t5239_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5239_m30405_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5239_MIs[] =
{
	&m30399_MI,
	&m30400_MI,
	&m30401_MI,
	&m30402_MI,
	&m30403_MI,
	&m30404_MI,
	&m30405_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5241_TI;
static TypeInfo* t5239_ITIs[] = 
{
	&t618_TI,
	&t5241_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5239_0_0_0;
extern Il2CppType t5239_1_0_0;
struct t5239;
extern TypeInfo t5239_TI;
extern Il2CppGenericClass t5239_GC;
TypeInfo t5239_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5239_MIs, t5239_PIs, NULL, NULL, NULL, NULL, NULL, &t5239_TI, t5239_ITIs, NULL, &EmptyCustomAttributesCache, &t5239_TI, &t5239_0_0_0, &t5239_1_0_0, NULL, &t5239_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5241_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Policy.IIdentityPermissionFactory>
extern TypeInfo t5241_TI;
extern Il2CppType t3861_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30406_MI = 
{
	"GetEnumerator", NULL, &t5241_TI, &t3861_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5241_MIs[] =
{
	&m30406_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5241_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5241_0_0_0;
extern Il2CppType t5241_1_0_0;
struct t5241;
extern TypeInfo t5241_TI;
extern Il2CppGenericClass t5241_GC;
TypeInfo t5241_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5241_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5241_TI, t5241_ITIs, NULL, &EmptyCustomAttributesCache, &t5241_TI, &t5241_0_0_0, &t5241_1_0_0, NULL, &t5241_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3861_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>
extern MethodInfo m30407_MI;
static PropertyInfo t3861____Current_PropertyInfo = 
{
	&t3861_TI, "Current", &m30407_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3861_PIs[] =
{
	&t3861____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3861_TI;
extern Il2CppType t1565_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30407_MI = 
{
	"get_Current", NULL, &t3861_TI, &t1565_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3861_MIs[] =
{
	&m30407_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3861_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3861_0_0_0;
extern Il2CppType t3861_1_0_0;
struct t3861;
extern TypeInfo t3861_TI;
extern Il2CppGenericClass t3861_GC;
TypeInfo t3861_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3861_MIs, t3861_PIs, NULL, NULL, NULL, NULL, NULL, &t3861_TI, t3861_ITIs, NULL, &EmptyCustomAttributesCache, &t3861_TI, &t3861_0_0_0, &t3861_1_0_0, NULL, &t3861_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2937.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2937_TI;
#include "t2937MD.h"

extern TypeInfo t2937_TI;
extern TypeInfo t1565_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16846_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23157_MI;
struct t52;
#define m23157(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m23157_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>
extern Il2CppType t52_0_0_1;
FieldInfo t2937_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2937_TI, offsetof(t2937, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2937_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2937_TI, offsetof(t2937, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2937_FIs[] =
{
	&t2937_f0_FieldInfo,
	&t2937_f1_FieldInfo,
	NULL
};
extern MethodInfo m16843_MI;
static PropertyInfo t2937____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2937_TI, "System.Collections.IEnumerator.Current", &m16843_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16846_MI;
static PropertyInfo t2937____Current_PropertyInfo = 
{
	&t2937_TI, "Current", &m16846_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2937_PIs[] =
{
	&t2937____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2937____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2937_m16842_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2937_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16842_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2937_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2937_m16842_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2937_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16843_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2937_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2937_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16844_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2937_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2937_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16845_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2937_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2937_TI;
extern Il2CppType t1565_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16846_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2937_TI, &t1565_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2937_MIs[] =
{
	&m16842_MI,
	&m16843_MI,
	&m16844_MI,
	&m16845_MI,
	&m16846_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16843_MI;
extern MethodInfo m16845_MI;
extern MethodInfo m16844_MI;
extern MethodInfo m16846_MI;
static MethodInfo* t2937_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16843_MI,
	&m16845_MI,
	&m16844_MI,
	&m16846_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3861_TI;
static TypeInfo* t2937_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3861_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3861_TI;
static Il2CppInterfaceOffsetPair t2937_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3861_TI, 7},
};
extern MethodInfo m16846_MI;
extern TypeInfo t1565_TI;
extern MethodInfo m23157_MI;
static void* t2937_RGCTXData[3] = 
{
	&m16846_MI,
	&t1565_TI,
	&m23157_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2937_0_0_0;
extern Il2CppType t2937_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2937_TI;
extern Il2CppGenericClass t2937_GC;
extern TypeInfo t52_TI;
TypeInfo t2937_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2937_MIs, t2937_PIs, t2937_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2937_TI, t2937_ITIs, t2937_VT, &EmptyCustomAttributesCache, &t2937_TI, &t2937_0_0_0, &t2937_1_0_0, t2937_IOs, &t2937_GC, NULL, NULL, NULL, t2937_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2937)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5240_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Policy.IIdentityPermissionFactory>
extern MethodInfo m30408_MI;
extern MethodInfo m30409_MI;
static PropertyInfo t5240____Item_PropertyInfo = 
{
	&t5240_TI, "Item", &m30408_MI, &m30409_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5240_PIs[] =
{
	&t5240____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1565_0_0_0;
static ParameterInfo t5240_m30410_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1565_0_0_0},
};
extern TypeInfo t5240_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30410_MI = 
{
	"IndexOf", NULL, &t5240_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5240_m30410_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1565_0_0_0;
static ParameterInfo t5240_m30411_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1565_0_0_0},
};
extern TypeInfo t5240_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30411_MI = 
{
	"Insert", NULL, &t5240_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5240_m30411_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5240_m30412_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5240_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30412_MI = 
{
	"RemoveAt", NULL, &t5240_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5240_m30412_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5240_m30408_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5240_TI;
extern Il2CppType t1565_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30408_MI = 
{
	"get_Item", NULL, &t5240_TI, &t1565_0_0_0, RuntimeInvoker_t7_t60, t5240_m30408_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1565_0_0_0;
static ParameterInfo t5240_m30409_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1565_0_0_0},
};
extern TypeInfo t5240_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30409_MI = 
{
	"set_Item", NULL, &t5240_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5240_m30409_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5240_MIs[] =
{
	&m30410_MI,
	&m30411_MI,
	&m30412_MI,
	&m30408_MI,
	&m30409_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5239_TI;
extern TypeInfo t5241_TI;
static TypeInfo* t5240_ITIs[] = 
{
	&t618_TI,
	&t5239_TI,
	&t5241_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5240_0_0_0;
extern Il2CppType t5240_1_0_0;
struct t5240;
extern TypeInfo t5240_TI;
extern Il2CppGenericClass t5240_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5240_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5240_MIs, t5240_PIs, NULL, NULL, NULL, NULL, NULL, &t5240_TI, t5240_ITIs, NULL, &t1426__CustomAttributeCache, &t5240_TI, &t5240_0_0_0, &t5240_1_0_0, NULL, &t5240_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1562.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1562_TI;
#include "t1562MD.h"

#include "t348.h"
#include "t2945.h"
#include "t2942.h"
#include "t2943.h"
#include "t87.h"
#include "t2949.h"
#include "t2944.h"
extern TypeInfo t1562_TI;
extern TypeInfo t1202_TI;
extern TypeInfo t60_TI;
extern TypeInfo t53_TI;
extern TypeInfo t348_TI;
extern TypeInfo t601_TI;
extern TypeInfo t1294_TI;
extern TypeInfo t88_TI;
extern TypeInfo t2938_TI;
extern TypeInfo t2945_TI;
extern TypeInfo t55_TI;
extern TypeInfo t2940_TI;
extern TypeInfo t2941_TI;
extern TypeInfo t2939_TI;
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2942_TI;
extern TypeInfo t87_TI;
extern TypeInfo t2943_TI;
extern TypeInfo t2949_TI;
#include "t348MD.h"
#include "t88MD.h"
#include "t7MD.h"
#include "t617MD.h"
#include "t2942MD.h"
#include "t87MD.h"
#include "t2943MD.h"
#include "t2945MD.h"
#include "t2949MD.h"
extern MethodInfo m16893_MI;
extern MethodInfo m16894_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m216_MI;
extern MethodInfo m23168_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m16879_MI;
extern MethodInfo m116_MI;
extern MethodInfo m16876_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m16864_MI;
extern MethodInfo m16871_MI;
extern MethodInfo m16877_MI;
extern MethodInfo m16880_MI;
extern MethodInfo m16882_MI;
extern MethodInfo m16865_MI;
extern MethodInfo m16890_MI;
extern MethodInfo m7028_MI;
extern MethodInfo m16891_MI;
extern MethodInfo m30376_MI;
extern MethodInfo m30381_MI;
extern MethodInfo m30383_MI;
extern MethodInfo m30384_MI;
extern MethodInfo m7424_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16881_MI;
extern MethodInfo m16866_MI;
extern MethodInfo m16867_MI;
extern MethodInfo m16901_MI;
extern MethodInfo m3874_MI;
extern MethodInfo m23170_MI;
extern MethodInfo m16874_MI;
extern MethodInfo m16875_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m16976_MI;
extern MethodInfo m16895_MI;
extern MethodInfo m16878_MI;
extern MethodInfo m16884_MI;
extern MethodInfo m3890_MI;
extern MethodInfo m16982_MI;
extern MethodInfo m23172_MI;
extern MethodInfo m23180_MI;
extern MethodInfo m3877_MI;
struct t52;
struct t52;
 void m17412_gshared (t7 * __this, t350** p0, int32_t p1, MethodInfo* method);
#define m17412(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
#define m23168(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
extern MethodInfo m23168_MI;
struct t52;
#include "t2947.h"
struct t52;
#include "t1511.h"
 int32_t m7824_gshared (t7 * __this, t350* p0, t7 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m7824(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m23170(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m23170_MI;
struct t52;
struct t52;
 void m17481_gshared (t7 * __this, t350* p0, int32_t p1, int32_t p2, t7* p3, MethodInfo* method);
#define m17481(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
#define m23172(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
extern MethodInfo m23172_MI;
struct t52;
#include "t86.h"
struct t52;
#include "t1679.h"
 void m17588_gshared (t7 * __this, t350* p0, int32_t p1, t1679 * p2, MethodInfo* method);
#define m17588(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
#define m23180(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
extern MethodInfo m23180_MI;


extern MethodInfo m16876_MI;
 t2945  m16876 (t1562 * __this, MethodInfo* method){
	{
		t2945  L_0 = {0};
		m16895(&L_0, __this, &m16895_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<System.Security.Policy.StrongName>
extern Il2CppType t60_0_0_32849;
FieldInfo t1562_f0_FieldInfo = 
{
	"DefaultCapacity", &t60_0_0_32849, &t1562_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2938_0_0_1;
FieldInfo t1562_f1_FieldInfo = 
{
	"_items", &t2938_0_0_1, &t1562_TI, offsetof(t1562, f1), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t1562_f2_FieldInfo = 
{
	"_size", &t60_0_0_1, &t1562_TI, offsetof(t1562, f2), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t1562_f3_FieldInfo = 
{
	"_version", &t60_0_0_1, &t1562_TI, offsetof(t1562, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2938_0_0_49;
FieldInfo t1562_f4_FieldInfo = 
{
	"EmptyArray", &t2938_0_0_49, &t1562_TI, offsetof(t1562_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1562_FIs[] =
{
	&t1562_f0_FieldInfo,
	&t1562_f1_FieldInfo,
	&t1562_f2_FieldInfo,
	&t1562_f3_FieldInfo,
	&t1562_f4_FieldInfo,
	NULL
};
static const int32_t t1562_f0_DefaultValueData = 4;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t1562_f0_DefaultValue = 
{
	&t1562_f0_FieldInfo, { (char*)&t1562_f0_DefaultValueData, &t60_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1562_FDVs[] = 
{
	&t1562_f0_DefaultValue,
	NULL
};
extern MethodInfo m16857_MI;
static PropertyInfo t1562____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1562_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m16857_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16858_MI;
static PropertyInfo t1562____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1562_TI, "System.Collections.ICollection.IsSynchronized", &m16858_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16859_MI;
static PropertyInfo t1562____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1562_TI, "System.Collections.ICollection.SyncRoot", &m16859_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16860_MI;
static PropertyInfo t1562____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1562_TI, "System.Collections.IList.IsFixedSize", &m16860_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16861_MI;
static PropertyInfo t1562____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1562_TI, "System.Collections.IList.IsReadOnly", &m16861_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16862_MI;
extern MethodInfo m16863_MI;
static PropertyInfo t1562____System_Collections_IList_Item_PropertyInfo = 
{
	&t1562_TI, "System.Collections.IList.Item", &m16862_MI, &m16863_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16890_MI;
extern MethodInfo m16891_MI;
static PropertyInfo t1562____Capacity_PropertyInfo = 
{
	&t1562_TI, "Capacity", &m16890_MI, &m16891_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16892_MI;
static PropertyInfo t1562____Count_PropertyInfo = 
{
	&t1562_TI, "Count", &m16892_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16893_MI;
extern MethodInfo m16894_MI;
static PropertyInfo t1562____Item_PropertyInfo = 
{
	&t1562_TI, "Item", &m16893_MI, &m16894_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1562_PIs[] =
{
	&t1562____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1562____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1562____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1562____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1562____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1562____System_Collections_IList_Item_PropertyInfo,
	&t1562____Capacity_PropertyInfo,
	&t1562____Count_PropertyInfo,
	&t1562____Item_PropertyInfo,
	NULL
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16847_MI = 
{
	".ctor", (methodPointerType)&m8211_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1562_m7931_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m7931_MI = 
{
	".ctor", (methodPointerType)&m8213_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t1562_m7931_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16848_MI = 
{
	".cctor", (methodPointerType)&m8215_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1562_TI;
extern Il2CppType t2939_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16849_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m8217_gshared, &t1562_TI, &t2939_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1562_m16850_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16850_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8219_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t1562_m16850_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1562_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16851_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8221_gshared, &t1562_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t1562_m16852_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16852_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8223_gshared, &t1562_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1562_m16852_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t1562_m16853_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16853_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8225_gshared, &t1562_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t1562_m16853_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t1562_m16854_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16854_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8227_gshared, &t1562_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1562_m16854_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t1562_m16855_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16855_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8229_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t1562_m16855_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t1562_m16856_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16856_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8231_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1562_m16856_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1562_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16857_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8233_gshared, &t1562_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1562_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16858_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8235_gshared, &t1562_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1562_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16859_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8237_gshared, &t1562_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1562_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16860_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8239_gshared, &t1562_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1562_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16861_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8241_gshared, &t1562_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1562_m16862_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16862_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8243_gshared, &t1562_TI, &t7_0_0_0, RuntimeInvoker_t7_t60, t1562_m16862_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t1562_m16863_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16863_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8245_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t1562_m16863_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t1562_m16864_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16864_MI = 
{
	"Add", (methodPointerType)&m8247_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1562_m16864_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1562_m16865_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16865_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m8249_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t1562_m16865_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2940_0_0_0;
static ParameterInfo t1562_m16866_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2940_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16866_MI = 
{
	"AddCollection", (methodPointerType)&m8251_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1562_m16866_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2941_0_0_0;
static ParameterInfo t1562_m16867_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2941_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16867_MI = 
{
	"AddEnumerable", (methodPointerType)&m8253_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1562_m16867_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2941_0_0_0;
static ParameterInfo t1562_m16868_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2941_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16868_MI = 
{
	"AddRange", (methodPointerType)&m8255_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1562_m16868_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1562_TI;
extern Il2CppType t2942_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16869_MI = 
{
	"AsReadOnly", (methodPointerType)&m8257_gshared, &t1562_TI, &t2942_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16870_MI = 
{
	"Clear", (methodPointerType)&m8259_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t1562_m16871_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16871_MI = 
{
	"Contains", (methodPointerType)&m8261_gshared, &t1562_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t1562_m16871_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2938_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1562_m16872_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2938_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16872_MI = 
{
	"CopyTo", (methodPointerType)&m8263_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t1562_m16872_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2943_0_0_0;
static ParameterInfo t1562_m16873_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2943_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t1202_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16873_MI = 
{
	"Find", (methodPointerType)&m8265_gshared, &t1562_TI, &t1202_0_0_0, RuntimeInvoker_t7_t7, t1562_m16873_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2943_0_0_0;
static ParameterInfo t1562_m16874_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2943_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16874_MI = 
{
	"CheckMatch", (methodPointerType)&m8267_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1562_m16874_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t2943_0_0_0;
static ParameterInfo t1562_m16875_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2943_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16875_MI = 
{
	"GetIndex", (methodPointerType)&m8269_gshared, &t1562_TI, &t60_0_0_0, RuntimeInvoker_t60_t60_t60_t7, t1562_m16875_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1562_TI;
extern Il2CppType t2945_0_0_0;
extern void* RuntimeInvoker_t2945 (MethodInfo* method, void* obj, void** args);
MethodInfo m16876_MI = 
{
	"GetEnumerator", (methodPointerType)&m16876, &t1562_TI, &t2945_0_0_0, RuntimeInvoker_t2945, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t1562_m16877_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16877_MI = 
{
	"IndexOf", (methodPointerType)&m8272_gshared, &t1562_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1562_m16877_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1562_m16878_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16878_MI = 
{
	"Shift", (methodPointerType)&m8274_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t1562_m16878_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1562_m16879_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16879_MI = 
{
	"CheckIndex", (methodPointerType)&m8276_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t1562_m16879_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1202_0_0_0;
static ParameterInfo t1562_m16880_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16880_MI = 
{
	"Insert", (methodPointerType)&m8278_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t1562_m16880_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2941_0_0_0;
static ParameterInfo t1562_m16881_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2941_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16881_MI = 
{
	"CheckCollection", (methodPointerType)&m8280_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1562_m16881_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t1562_m16882_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16882_MI = 
{
	"Remove", (methodPointerType)&m8282_gshared, &t1562_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t1562_m16882_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2943_0_0_0;
static ParameterInfo t1562_m16883_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2943_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16883_MI = 
{
	"RemoveAll", (methodPointerType)&m8284_gshared, &t1562_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1562_m16883_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1562_m16884_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16884_MI = 
{
	"RemoveAt", (methodPointerType)&m8286_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t1562_m16884_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16885_MI = 
{
	"Reverse", (methodPointerType)&m8288_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16886_MI = 
{
	"Sort", (methodPointerType)&m8290_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2944_0_0_0;
static ParameterInfo t1562_m16887_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2944_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16887_MI = 
{
	"Sort", (methodPointerType)&m8292_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1562_m16887_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1562_TI;
extern Il2CppType t2938_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16888_MI = 
{
	"ToArray", (methodPointerType)&m8294_gshared, &t1562_TI, &t2938_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16889_MI = 
{
	"TrimExcess", (methodPointerType)&m8296_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1562_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16890_MI = 
{
	"get_Capacity", (methodPointerType)&m8298_gshared, &t1562_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1562_m16891_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16891_MI = 
{
	"set_Capacity", (methodPointerType)&m8300_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t1562_m16891_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1562_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16892_MI = 
{
	"get_Count", (methodPointerType)&m8301_gshared, &t1562_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1562_m16893_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t1202_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16893_MI = 
{
	"get_Item", (methodPointerType)&m8302_gshared, &t1562_TI, &t1202_0_0_0, RuntimeInvoker_t7_t60, t1562_m16893_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1202_0_0_0;
static ParameterInfo t1562_m16894_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t1562_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16894_MI = 
{
	"set_Item", (methodPointerType)&m8304_gshared, &t1562_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t1562_m16894_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1562_MIs[] =
{
	&m16847_MI,
	&m7931_MI,
	&m16848_MI,
	&m16849_MI,
	&m16850_MI,
	&m16851_MI,
	&m16852_MI,
	&m16853_MI,
	&m16854_MI,
	&m16855_MI,
	&m16856_MI,
	&m16857_MI,
	&m16858_MI,
	&m16859_MI,
	&m16860_MI,
	&m16861_MI,
	&m16862_MI,
	&m16863_MI,
	&m16864_MI,
	&m16865_MI,
	&m16866_MI,
	&m16867_MI,
	&m16868_MI,
	&m16869_MI,
	&m16870_MI,
	&m16871_MI,
	&m16872_MI,
	&m16873_MI,
	&m16874_MI,
	&m16875_MI,
	&m16876_MI,
	&m16877_MI,
	&m16878_MI,
	&m16879_MI,
	&m16880_MI,
	&m16881_MI,
	&m16882_MI,
	&m16883_MI,
	&m16884_MI,
	&m16885_MI,
	&m16886_MI,
	&m16887_MI,
	&m16888_MI,
	&m16889_MI,
	&m16890_MI,
	&m16891_MI,
	&m16892_MI,
	&m16893_MI,
	&m16894_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m16851_MI;
extern MethodInfo m16892_MI;
extern MethodInfo m16858_MI;
extern MethodInfo m16859_MI;
extern MethodInfo m16850_MI;
extern MethodInfo m16860_MI;
extern MethodInfo m16861_MI;
extern MethodInfo m16862_MI;
extern MethodInfo m16863_MI;
extern MethodInfo m16852_MI;
extern MethodInfo m16870_MI;
extern MethodInfo m16853_MI;
extern MethodInfo m16854_MI;
extern MethodInfo m16855_MI;
extern MethodInfo m16856_MI;
extern MethodInfo m16884_MI;
extern MethodInfo m16892_MI;
extern MethodInfo m16857_MI;
extern MethodInfo m16864_MI;
extern MethodInfo m16870_MI;
extern MethodInfo m16871_MI;
extern MethodInfo m16872_MI;
extern MethodInfo m16882_MI;
extern MethodInfo m16849_MI;
extern MethodInfo m16877_MI;
extern MethodInfo m16880_MI;
extern MethodInfo m16884_MI;
extern MethodInfo m16893_MI;
extern MethodInfo m16894_MI;
static MethodInfo* t1562_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m16851_MI,
	&m16892_MI,
	&m16858_MI,
	&m16859_MI,
	&m16850_MI,
	&m16860_MI,
	&m16861_MI,
	&m16862_MI,
	&m16863_MI,
	&m16852_MI,
	&m16870_MI,
	&m16853_MI,
	&m16854_MI,
	&m16855_MI,
	&m16856_MI,
	&m16884_MI,
	&m16892_MI,
	&m16857_MI,
	&m16864_MI,
	&m16870_MI,
	&m16871_MI,
	&m16872_MI,
	&m16882_MI,
	&m16849_MI,
	&m16877_MI,
	&m16880_MI,
	&m16884_MI,
	&m16893_MI,
	&m16894_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2940_TI;
extern TypeInfo t2941_TI;
extern TypeInfo t1199_TI;
static TypeInfo* t1562_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t1041_TI,
	&t2940_TI,
	&t2941_TI,
	&t1199_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2940_TI;
extern TypeInfo t2941_TI;
extern TypeInfo t1199_TI;
static Il2CppInterfaceOffsetPair t1562_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t1041_TI, 9},
	{ &t2940_TI, 20},
	{ &t2941_TI, 27},
	{ &t1199_TI, 28},
};
extern TypeInfo t1562_TI;
extern TypeInfo t2938_TI;
extern MethodInfo m16876_MI;
extern TypeInfo t2945_TI;
extern TypeInfo t1202_TI;
extern MethodInfo m16864_MI;
extern MethodInfo m16871_MI;
extern MethodInfo m16877_MI;
extern MethodInfo m16879_MI;
extern MethodInfo m16880_MI;
extern MethodInfo m16882_MI;
extern MethodInfo m16893_MI;
extern MethodInfo m16894_MI;
extern MethodInfo m16865_MI;
extern MethodInfo m16890_MI;
extern MethodInfo m16891_MI;
extern MethodInfo m30376_MI;
extern MethodInfo m30381_MI;
extern MethodInfo m30383_MI;
extern MethodInfo m30384_MI;
extern MethodInfo m16881_MI;
extern TypeInfo t2940_TI;
extern MethodInfo m16866_MI;
extern MethodInfo m16867_MI;
extern TypeInfo t2942_TI;
extern MethodInfo m16901_MI;
extern MethodInfo m23170_MI;
extern MethodInfo m16874_MI;
extern MethodInfo m16875_MI;
extern MethodInfo m16976_MI;
extern MethodInfo m16895_MI;
extern MethodInfo m16878_MI;
extern MethodInfo m16884_MI;
extern MethodInfo m16982_MI;
extern MethodInfo m23172_MI;
extern MethodInfo m23180_MI;
extern MethodInfo m23168_MI;
static void* t1562_RGCTXData[37] = 
{
	&t1562_TI,
	&t2938_TI,
	&m16876_MI,
	&t2945_TI,
	&t1202_TI,
	&m16864_MI,
	&m16871_MI,
	&m16877_MI,
	&m16879_MI,
	&m16880_MI,
	&m16882_MI,
	&m16893_MI,
	&m16894_MI,
	&m16865_MI,
	&m16890_MI,
	&m16891_MI,
	&m30376_MI,
	&m30381_MI,
	&m30383_MI,
	&m30384_MI,
	&m16881_MI,
	&t2940_TI,
	&m16866_MI,
	&m16867_MI,
	&t2942_TI,
	&m16901_MI,
	&m23170_MI,
	&m16874_MI,
	&m16875_MI,
	&m16976_MI,
	&m16895_MI,
	&m16878_MI,
	&m16884_MI,
	&m16982_MI,
	&m23172_MI,
	&m23180_MI,
	&m23168_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1562_0_0_0;
extern Il2CppType t1562_1_0_0;
extern TypeInfo t7_TI;
struct t1562;
extern TypeInfo t1562_TI;
extern Il2CppGenericClass t1562_GC;
extern CustomAttributesCache t866__CustomAttributeCache;
TypeInfo t1562_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t1562_MIs, t1562_PIs, t1562_FIs, NULL, &t7_TI, NULL, NULL, &t1562_TI, t1562_ITIs, t1562_VT, &t866__CustomAttributeCache, &t1562_TI, &t1562_0_0_0, &t1562_1_0_0, t1562_IOs, &t1562_GC, NULL, t1562_FDVs, NULL, t1562_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1562), 0, -1, sizeof(t1562_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2945_TI;

#include "t70.h"
#include "t1312.h"
extern TypeInfo t2945_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t1202_TI;
extern TypeInfo t1562_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1312_TI;
#include "t70MD.h"
#include "t1312MD.h"
extern MethodInfo m16898_MI;
extern MethodInfo m7022_MI;
extern MethodInfo m1555_MI;
extern MethodInfo m3114_MI;
extern MethodInfo m7227_MI;
extern MethodInfo m7023_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
extern Il2CppType t1562_0_0_1;
FieldInfo t2945_f0_FieldInfo = 
{
	"l", &t1562_0_0_1, &t2945_TI, offsetof(t2945, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2945_f1_FieldInfo = 
{
	"next", &t60_0_0_1, &t2945_TI, offsetof(t2945, f1) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2945_f2_FieldInfo = 
{
	"ver", &t60_0_0_1, &t2945_TI, offsetof(t2945, f2) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t1202_0_0_1;
FieldInfo t2945_f3_FieldInfo = 
{
	"current", &t1202_0_0_1, &t2945_TI, offsetof(t2945, f3) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2945_FIs[] =
{
	&t2945_f0_FieldInfo,
	&t2945_f1_FieldInfo,
	&t2945_f2_FieldInfo,
	&t2945_f3_FieldInfo,
	NULL
};
extern MethodInfo m16896_MI;
static PropertyInfo t2945____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2945_TI, "System.Collections.IEnumerator.Current", &m16896_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16900_MI;
static PropertyInfo t2945____Current_PropertyInfo = 
{
	&t2945_TI, "Current", &m16900_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2945_PIs[] =
{
	&t2945____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2945____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1562_0_0_0;
static ParameterInfo t2945_m16895_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t1562_0_0_0},
};
extern TypeInfo t2945_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16895_MI = 
{
	".ctor", (methodPointerType)&m8306_gshared, &t2945_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2945_m16895_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2945_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16896_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8307_gshared, &t2945_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2945_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16897_MI = 
{
	"Dispose", (methodPointerType)&m8308_gshared, &t2945_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2945_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16898_MI = 
{
	"VerifyState", (methodPointerType)&m8309_gshared, &t2945_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2945_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16899_MI = 
{
	"MoveNext", (methodPointerType)&m8310_gshared, &t2945_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2945_TI;
extern Il2CppType t1202_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16900_MI = 
{
	"get_Current", (methodPointerType)&m8311_gshared, &t2945_TI, &t1202_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2945_MIs[] =
{
	&m16895_MI,
	&m16896_MI,
	&m16897_MI,
	&m16898_MI,
	&m16899_MI,
	&m16900_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16896_MI;
extern MethodInfo m16899_MI;
extern MethodInfo m16897_MI;
extern MethodInfo m16900_MI;
static MethodInfo* t2945_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16896_MI,
	&m16899_MI,
	&m16897_MI,
	&m16900_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2939_TI;
static TypeInfo* t2945_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2939_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2939_TI;
static Il2CppInterfaceOffsetPair t2945_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2939_TI, 7},
};
extern MethodInfo m16898_MI;
extern TypeInfo t1202_TI;
extern TypeInfo t2945_TI;
static void* t2945_RGCTXData[3] = 
{
	&m16898_MI,
	&t1202_TI,
	&t2945_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2945_0_0_0;
extern Il2CppType t2945_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2945_TI;
extern Il2CppGenericClass t2945_GC;
extern TypeInfo t866_TI;
TypeInfo t2945_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2945_MIs, t2945_PIs, t2945_FIs, NULL, &t159_TI, NULL, &t866_TI, &t2945_TI, t2945_ITIs, t2945_VT, &EmptyCustomAttributesCache, &t2945_TI, &t2945_0_0_0, &t2945_1_0_0, t2945_IOs, &t2945_GC, NULL, NULL, NULL, t2945_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2945)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2942_TI;

#include "t62.h"
extern TypeInfo t2942_TI;
extern TypeInfo t1202_TI;
extern TypeInfo t60_TI;
extern TypeInfo t62_TI;
extern TypeInfo t1199_TI;
extern TypeInfo t2940_TI;
extern TypeInfo t87_TI;
extern TypeInfo t669_TI;
extern TypeInfo t53_TI;
extern TypeInfo t52_TI;
extern TypeInfo t618_TI;
extern TypeInfo t12_TI;
extern TypeInfo t55_TI;
extern TypeInfo t2938_TI;
extern TypeInfo t2941_TI;
extern TypeInfo t2939_TI;
#include "t62MD.h"
#include "t2946MD.h"
extern MethodInfo m16930_MI;
extern MethodInfo m120_MI;
extern MethodInfo m30371_MI;
extern MethodInfo m30376_MI;
extern MethodInfo m116_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m7516_MI;
extern MethodInfo m7425_MI;
extern MethodInfo m16962_MI;
extern MethodInfo m30380_MI;
extern MethodInfo m30373_MI;
extern MethodInfo m30381_MI;
extern MethodInfo m30383_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>
extern Il2CppType t1199_0_0_1;
FieldInfo t2942_f0_FieldInfo = 
{
	"list", &t1199_0_0_1, &t2942_TI, offsetof(t2942, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2942_FIs[] =
{
	&t2942_f0_FieldInfo,
	NULL
};
extern MethodInfo m16907_MI;
extern MethodInfo m16908_MI;
static PropertyInfo t2942____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2942_TI, "System.Collections.Generic.IList<T>.Item", &m16907_MI, &m16908_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16909_MI;
static PropertyInfo t2942____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2942_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m16909_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16919_MI;
static PropertyInfo t2942____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2942_TI, "System.Collections.ICollection.IsSynchronized", &m16919_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16920_MI;
static PropertyInfo t2942____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2942_TI, "System.Collections.ICollection.SyncRoot", &m16920_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16921_MI;
static PropertyInfo t2942____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2942_TI, "System.Collections.IList.IsFixedSize", &m16921_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16922_MI;
static PropertyInfo t2942____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2942_TI, "System.Collections.IList.IsReadOnly", &m16922_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16923_MI;
extern MethodInfo m16924_MI;
static PropertyInfo t2942____System_Collections_IList_Item_PropertyInfo = 
{
	&t2942_TI, "System.Collections.IList.Item", &m16923_MI, &m16924_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16929_MI;
static PropertyInfo t2942____Count_PropertyInfo = 
{
	&t2942_TI, "Count", &m16929_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16930_MI;
static PropertyInfo t2942____Item_PropertyInfo = 
{
	&t2942_TI, "Item", &m16930_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2942_PIs[] =
{
	&t2942____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2942____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2942____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2942____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2942____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2942____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2942____System_Collections_IList_Item_PropertyInfo,
	&t2942____Count_PropertyInfo,
	&t2942____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1199_0_0_0;
static ParameterInfo t2942_m16901_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1199_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16901_MI = 
{
	".ctor", (methodPointerType)&m8312_gshared, &t2942_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2942_m16901_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2942_m16902_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16902_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m8313_gshared, &t2942_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2942_m16902_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2942_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16903_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m8314_gshared, &t2942_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2942_m16904_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16904_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m8315_gshared, &t2942_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2942_m16904_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2942_m16905_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16905_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m8316_gshared, &t2942_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2942_m16905_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2942_m16906_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16906_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m8317_gshared, &t2942_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2942_m16906_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2942_m16907_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t1202_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16907_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8318_gshared, &t2942_TI, &t1202_0_0_0, RuntimeInvoker_t7_t60, t2942_m16907_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2942_m16908_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16908_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8319_gshared, &t2942_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2942_m16908_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2942_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16909_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8320_gshared, &t2942_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2942_m16910_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16910_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8321_gshared, &t2942_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2942_m16910_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2942_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16911_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8322_gshared, &t2942_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2942_m16912_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16912_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8323_gshared, &t2942_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2942_m16912_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2942_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16913_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8324_gshared, &t2942_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2942_m16914_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16914_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8325_gshared, &t2942_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2942_m16914_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2942_m16915_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16915_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8326_gshared, &t2942_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2942_m16915_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2942_m16916_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16916_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8327_gshared, &t2942_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2942_m16916_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2942_m16917_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16917_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8328_gshared, &t2942_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2942_m16917_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2942_m16918_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16918_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8329_gshared, &t2942_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2942_m16918_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2942_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16919_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8330_gshared, &t2942_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2942_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16920_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8331_gshared, &t2942_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2942_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16921_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8332_gshared, &t2942_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2942_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16922_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8333_gshared, &t2942_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2942_m16923_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16923_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8334_gshared, &t2942_TI, &t7_0_0_0, RuntimeInvoker_t7_t60, t2942_m16923_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2942_m16924_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16924_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8335_gshared, &t2942_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2942_m16924_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2942_m16925_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16925_MI = 
{
	"Contains", (methodPointerType)&m8336_gshared, &t2942_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2942_m16925_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2938_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2942_m16926_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2938_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16926_MI = 
{
	"CopyTo", (methodPointerType)&m8337_gshared, &t2942_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2942_m16926_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2942_TI;
extern Il2CppType t2939_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16927_MI = 
{
	"GetEnumerator", (methodPointerType)&m8338_gshared, &t2942_TI, &t2939_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2942_m16928_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16928_MI = 
{
	"IndexOf", (methodPointerType)&m8339_gshared, &t2942_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2942_m16928_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2942_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16929_MI = 
{
	"get_Count", (methodPointerType)&m8340_gshared, &t2942_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2942_m16930_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2942_TI;
extern Il2CppType t1202_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16930_MI = 
{
	"get_Item", (methodPointerType)&m8341_gshared, &t2942_TI, &t1202_0_0_0, RuntimeInvoker_t7_t60, t2942_m16930_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2942_MIs[] =
{
	&m16901_MI,
	&m16902_MI,
	&m16903_MI,
	&m16904_MI,
	&m16905_MI,
	&m16906_MI,
	&m16907_MI,
	&m16908_MI,
	&m16909_MI,
	&m16910_MI,
	&m16911_MI,
	&m16912_MI,
	&m16913_MI,
	&m16914_MI,
	&m16915_MI,
	&m16916_MI,
	&m16917_MI,
	&m16918_MI,
	&m16919_MI,
	&m16920_MI,
	&m16921_MI,
	&m16922_MI,
	&m16923_MI,
	&m16924_MI,
	&m16925_MI,
	&m16926_MI,
	&m16927_MI,
	&m16928_MI,
	&m16929_MI,
	&m16930_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m16911_MI;
extern MethodInfo m16929_MI;
extern MethodInfo m16919_MI;
extern MethodInfo m16920_MI;
extern MethodInfo m16910_MI;
extern MethodInfo m16921_MI;
extern MethodInfo m16922_MI;
extern MethodInfo m16923_MI;
extern MethodInfo m16924_MI;
extern MethodInfo m16912_MI;
extern MethodInfo m16913_MI;
extern MethodInfo m16914_MI;
extern MethodInfo m16915_MI;
extern MethodInfo m16916_MI;
extern MethodInfo m16917_MI;
extern MethodInfo m16918_MI;
extern MethodInfo m16929_MI;
extern MethodInfo m16909_MI;
extern MethodInfo m16902_MI;
extern MethodInfo m16903_MI;
extern MethodInfo m16925_MI;
extern MethodInfo m16926_MI;
extern MethodInfo m16905_MI;
extern MethodInfo m16928_MI;
extern MethodInfo m16904_MI;
extern MethodInfo m16906_MI;
extern MethodInfo m16907_MI;
extern MethodInfo m16908_MI;
extern MethodInfo m16927_MI;
extern MethodInfo m16930_MI;
static MethodInfo* t2942_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m16911_MI,
	&m16929_MI,
	&m16919_MI,
	&m16920_MI,
	&m16910_MI,
	&m16921_MI,
	&m16922_MI,
	&m16923_MI,
	&m16924_MI,
	&m16912_MI,
	&m16913_MI,
	&m16914_MI,
	&m16915_MI,
	&m16916_MI,
	&m16917_MI,
	&m16918_MI,
	&m16929_MI,
	&m16909_MI,
	&m16902_MI,
	&m16903_MI,
	&m16925_MI,
	&m16926_MI,
	&m16905_MI,
	&m16928_MI,
	&m16904_MI,
	&m16906_MI,
	&m16907_MI,
	&m16908_MI,
	&m16927_MI,
	&m16930_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2940_TI;
extern TypeInfo t1199_TI;
extern TypeInfo t2941_TI;
static TypeInfo* t2942_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t1041_TI,
	&t2940_TI,
	&t1199_TI,
	&t2941_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2940_TI;
extern TypeInfo t1199_TI;
extern TypeInfo t2941_TI;
static Il2CppInterfaceOffsetPair t2942_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t1041_TI, 9},
	{ &t2940_TI, 20},
	{ &t1199_TI, 27},
	{ &t2941_TI, 32},
};
extern MethodInfo m16930_MI;
extern MethodInfo m16962_MI;
extern TypeInfo t1202_TI;
extern MethodInfo m30380_MI;
extern MethodInfo m30373_MI;
extern MethodInfo m30371_MI;
extern MethodInfo m30381_MI;
extern MethodInfo m30383_MI;
extern MethodInfo m30376_MI;
static void* t2942_RGCTXData[9] = 
{
	&m16930_MI,
	&m16962_MI,
	&t1202_TI,
	&m30380_MI,
	&m30373_MI,
	&m30371_MI,
	&m30381_MI,
	&m30383_MI,
	&m30376_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2942_0_0_0;
extern Il2CppType t2942_1_0_0;
extern TypeInfo t7_TI;
struct t2942;
extern TypeInfo t2942_TI;
extern Il2CppGenericClass t2942_GC;
extern CustomAttributesCache t868__CustomAttributeCache;
TypeInfo t2942_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2942_MIs, t2942_PIs, t2942_FIs, NULL, &t7_TI, NULL, NULL, &t2942_TI, t2942_ITIs, t2942_VT, &t868__CustomAttributeCache, &t2942_TI, &t2942_0_0_0, &t2942_1_0_0, t2942_IOs, &t2942_GC, NULL, NULL, NULL, t2942_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2942), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2946.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2946_TI;

#include "t71.h"
extern TypeInfo t2946_TI;
extern TypeInfo t2940_TI;
extern TypeInfo t55_TI;
extern TypeInfo t1199_TI;
extern TypeInfo t1202_TI;
extern TypeInfo t60_TI;
extern TypeInfo t53_TI;
extern TypeInfo t1562_TI;
extern TypeInfo t669_TI;
extern TypeInfo t7_TI;
extern TypeInfo t52_TI;
extern TypeInfo t2941_TI;
extern TypeInfo t2939_TI;
extern TypeInfo t2938_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern TypeInfo t62_TI;
extern TypeInfo t1041_TI;
extern Il2CppType t1202_0_0_0;
extern MethodInfo m30377_MI;
extern MethodInfo m16965_MI;
extern MethodInfo m16966_MI;
extern MethodInfo m30371_MI;
extern MethodInfo m16963_MI;
extern MethodInfo m16961_MI;
extern MethodInfo m30376_MI;
extern MethodInfo m116_MI;
extern MethodInfo m16847_MI;
extern MethodInfo m7515_MI;
extern MethodInfo m7516_MI;
extern MethodInfo m30383_MI;
extern MethodInfo m16954_MI;
extern MethodInfo m16962_MI;
extern MethodInfo m30380_MI;
extern MethodInfo m30373_MI;
extern MethodInfo m16964_MI;
extern MethodInfo m16952_MI;
extern MethodInfo m16957_MI;
extern MethodInfo m16948_MI;
extern MethodInfo m30379_MI;
extern MethodInfo m30381_MI;
extern MethodInfo m30374_MI;
extern MethodInfo m30375_MI;
extern MethodInfo m30372_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3933_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m120_MI;
extern MethodInfo m7514_MI;
extern MethodInfo m7517_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>
extern Il2CppType t1199_0_0_1;
FieldInfo t2946_f0_FieldInfo = 
{
	"list", &t1199_0_0_1, &t2946_TI, offsetof(t2946, f0), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_1;
FieldInfo t2946_f1_FieldInfo = 
{
	"syncRoot", &t7_0_0_1, &t2946_TI, offsetof(t2946, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2946_FIs[] =
{
	&t2946_f0_FieldInfo,
	&t2946_f1_FieldInfo,
	NULL
};
extern MethodInfo m16932_MI;
static PropertyInfo t2946____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2946_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m16932_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16940_MI;
static PropertyInfo t2946____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2946_TI, "System.Collections.ICollection.IsSynchronized", &m16940_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16941_MI;
static PropertyInfo t2946____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2946_TI, "System.Collections.ICollection.SyncRoot", &m16941_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16942_MI;
static PropertyInfo t2946____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2946_TI, "System.Collections.IList.IsFixedSize", &m16942_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16943_MI;
static PropertyInfo t2946____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2946_TI, "System.Collections.IList.IsReadOnly", &m16943_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16944_MI;
extern MethodInfo m16945_MI;
static PropertyInfo t2946____System_Collections_IList_Item_PropertyInfo = 
{
	&t2946_TI, "System.Collections.IList.Item", &m16944_MI, &m16945_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16958_MI;
static PropertyInfo t2946____Count_PropertyInfo = 
{
	&t2946_TI, "Count", &m16958_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16959_MI;
extern MethodInfo m16960_MI;
static PropertyInfo t2946____Item_PropertyInfo = 
{
	&t2946_TI, "Item", &m16959_MI, &m16960_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2946_PIs[] =
{
	&t2946____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2946____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2946____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2946____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2946____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2946____System_Collections_IList_Item_PropertyInfo,
	&t2946____Count_PropertyInfo,
	&t2946____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16931_MI = 
{
	".ctor", (methodPointerType)&m8342_gshared, &t2946_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2946_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16932_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8343_gshared, &t2946_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2946_m16933_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16933_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8344_gshared, &t2946_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2946_m16933_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2946_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16934_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8345_gshared, &t2946_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2946_m16935_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16935_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8346_gshared, &t2946_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2946_m16935_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2946_m16936_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16936_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8347_gshared, &t2946_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2946_m16936_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2946_m16937_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16937_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8348_gshared, &t2946_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2946_m16937_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2946_m16938_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16938_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8349_gshared, &t2946_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2946_m16938_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2946_m16939_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16939_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8350_gshared, &t2946_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2946_m16939_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2946_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16940_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8351_gshared, &t2946_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2946_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16941_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8352_gshared, &t2946_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2946_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16942_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8353_gshared, &t2946_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2946_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16943_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8354_gshared, &t2946_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2946_m16944_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16944_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8355_gshared, &t2946_TI, &t7_0_0_0, RuntimeInvoker_t7_t60, t2946_m16944_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2946_m16945_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16945_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8356_gshared, &t2946_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2946_m16945_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2946_m16946_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16946_MI = 
{
	"Add", (methodPointerType)&m8357_gshared, &t2946_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2946_m16946_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16947_MI = 
{
	"Clear", (methodPointerType)&m8358_gshared, &t2946_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16948_MI = 
{
	"ClearItems", (methodPointerType)&m8359_gshared, &t2946_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2946_m16949_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16949_MI = 
{
	"Contains", (methodPointerType)&m8360_gshared, &t2946_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2946_m16949_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2938_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2946_m16950_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2938_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16950_MI = 
{
	"CopyTo", (methodPointerType)&m8361_gshared, &t2946_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2946_m16950_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2946_TI;
extern Il2CppType t2939_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16951_MI = 
{
	"GetEnumerator", (methodPointerType)&m8362_gshared, &t2946_TI, &t2939_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2946_m16952_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16952_MI = 
{
	"IndexOf", (methodPointerType)&m8363_gshared, &t2946_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2946_m16952_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2946_m16953_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16953_MI = 
{
	"Insert", (methodPointerType)&m8364_gshared, &t2946_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2946_m16953_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2946_m16954_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16954_MI = 
{
	"InsertItem", (methodPointerType)&m8365_gshared, &t2946_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2946_m16954_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2946_m16955_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16955_MI = 
{
	"Remove", (methodPointerType)&m8366_gshared, &t2946_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2946_m16955_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2946_m16956_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16956_MI = 
{
	"RemoveAt", (methodPointerType)&m8367_gshared, &t2946_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2946_m16956_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2946_m16957_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16957_MI = 
{
	"RemoveItem", (methodPointerType)&m8368_gshared, &t2946_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2946_m16957_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2946_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16958_MI = 
{
	"get_Count", (methodPointerType)&m8369_gshared, &t2946_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2946_m16959_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t1202_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m16959_MI = 
{
	"get_Item", (methodPointerType)&m8370_gshared, &t2946_TI, &t1202_0_0_0, RuntimeInvoker_t7_t60, t2946_m16959_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2946_m16960_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16960_MI = 
{
	"set_Item", (methodPointerType)&m8371_gshared, &t2946_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2946_m16960_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2946_m16961_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16961_MI = 
{
	"SetItem", (methodPointerType)&m8372_gshared, &t2946_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2946_m16961_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2946_m16962_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16962_MI = 
{
	"IsValidItem", (methodPointerType)&m8373_gshared, &t2946_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2946_m16962_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2946_m16963_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t1202_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16963_MI = 
{
	"ConvertItem", (methodPointerType)&m8374_gshared, &t2946_TI, &t1202_0_0_0, RuntimeInvoker_t7_t7, t2946_m16963_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1199_0_0_0;
static ParameterInfo t2946_m16964_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1199_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16964_MI = 
{
	"CheckWritable", (methodPointerType)&m8375_gshared, &t2946_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2946_m16964_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1199_0_0_0;
static ParameterInfo t2946_m16965_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1199_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16965_MI = 
{
	"IsSynchronized", (methodPointerType)&m8376_gshared, &t2946_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2946_m16965_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1199_0_0_0;
static ParameterInfo t2946_m16966_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1199_0_0_0},
};
extern TypeInfo t2946_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16966_MI = 
{
	"IsFixedSize", (methodPointerType)&m8377_gshared, &t2946_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2946_m16966_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2946_MIs[] =
{
	&m16931_MI,
	&m16932_MI,
	&m16933_MI,
	&m16934_MI,
	&m16935_MI,
	&m16936_MI,
	&m16937_MI,
	&m16938_MI,
	&m16939_MI,
	&m16940_MI,
	&m16941_MI,
	&m16942_MI,
	&m16943_MI,
	&m16944_MI,
	&m16945_MI,
	&m16946_MI,
	&m16947_MI,
	&m16948_MI,
	&m16949_MI,
	&m16950_MI,
	&m16951_MI,
	&m16952_MI,
	&m16953_MI,
	&m16954_MI,
	&m16955_MI,
	&m16956_MI,
	&m16957_MI,
	&m16958_MI,
	&m16959_MI,
	&m16960_MI,
	&m16961_MI,
	&m16962_MI,
	&m16963_MI,
	&m16964_MI,
	&m16965_MI,
	&m16966_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m16934_MI;
extern MethodInfo m16958_MI;
extern MethodInfo m16940_MI;
extern MethodInfo m16941_MI;
extern MethodInfo m16933_MI;
extern MethodInfo m16942_MI;
extern MethodInfo m16943_MI;
extern MethodInfo m16944_MI;
extern MethodInfo m16945_MI;
extern MethodInfo m16935_MI;
extern MethodInfo m16947_MI;
extern MethodInfo m16936_MI;
extern MethodInfo m16937_MI;
extern MethodInfo m16938_MI;
extern MethodInfo m16939_MI;
extern MethodInfo m16956_MI;
extern MethodInfo m16958_MI;
extern MethodInfo m16932_MI;
extern MethodInfo m16946_MI;
extern MethodInfo m16947_MI;
extern MethodInfo m16949_MI;
extern MethodInfo m16950_MI;
extern MethodInfo m16955_MI;
extern MethodInfo m16952_MI;
extern MethodInfo m16953_MI;
extern MethodInfo m16956_MI;
extern MethodInfo m16959_MI;
extern MethodInfo m16960_MI;
extern MethodInfo m16951_MI;
extern MethodInfo m16948_MI;
extern MethodInfo m16954_MI;
extern MethodInfo m16957_MI;
extern MethodInfo m16961_MI;
static MethodInfo* t2946_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m16934_MI,
	&m16958_MI,
	&m16940_MI,
	&m16941_MI,
	&m16933_MI,
	&m16942_MI,
	&m16943_MI,
	&m16944_MI,
	&m16945_MI,
	&m16935_MI,
	&m16947_MI,
	&m16936_MI,
	&m16937_MI,
	&m16938_MI,
	&m16939_MI,
	&m16956_MI,
	&m16958_MI,
	&m16932_MI,
	&m16946_MI,
	&m16947_MI,
	&m16949_MI,
	&m16950_MI,
	&m16955_MI,
	&m16952_MI,
	&m16953_MI,
	&m16956_MI,
	&m16959_MI,
	&m16960_MI,
	&m16951_MI,
	&m16948_MI,
	&m16954_MI,
	&m16957_MI,
	&m16961_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2940_TI;
extern TypeInfo t1199_TI;
extern TypeInfo t2941_TI;
static TypeInfo* t2946_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t1041_TI,
	&t2940_TI,
	&t1199_TI,
	&t2941_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2940_TI;
extern TypeInfo t1199_TI;
extern TypeInfo t2941_TI;
static Il2CppInterfaceOffsetPair t2946_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t1041_TI, 9},
	{ &t2940_TI, 20},
	{ &t1199_TI, 27},
	{ &t2941_TI, 32},
};
extern TypeInfo t1562_TI;
extern MethodInfo m16847_MI;
extern MethodInfo m30377_MI;
extern MethodInfo m30383_MI;
extern MethodInfo m30376_MI;
extern MethodInfo m16963_MI;
extern MethodInfo m16954_MI;
extern MethodInfo m16962_MI;
extern TypeInfo t1202_TI;
extern MethodInfo m30380_MI;
extern MethodInfo m30373_MI;
extern MethodInfo m16964_MI;
extern MethodInfo m16952_MI;
extern MethodInfo m16957_MI;
extern MethodInfo m16965_MI;
extern MethodInfo m16966_MI;
extern MethodInfo m30371_MI;
extern MethodInfo m16961_MI;
extern MethodInfo m16948_MI;
extern MethodInfo m30379_MI;
extern MethodInfo m30381_MI;
extern MethodInfo m30374_MI;
extern MethodInfo m30375_MI;
extern MethodInfo m30372_MI;
extern Il2CppType t1202_0_0_0;
static void* t2946_RGCTXData[25] = 
{
	&t1562_TI,
	&m16847_MI,
	&m30377_MI,
	&m30383_MI,
	&m30376_MI,
	&m16963_MI,
	&m16954_MI,
	&m16962_MI,
	&t1202_TI,
	&m30380_MI,
	&m30373_MI,
	&m16964_MI,
	&m16952_MI,
	&m16957_MI,
	&m16965_MI,
	&m16966_MI,
	&m30371_MI,
	&m16961_MI,
	&m16948_MI,
	&m30379_MI,
	&m30381_MI,
	&m30374_MI,
	&m30375_MI,
	&m30372_MI,
	(void*)&t1202_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2946_0_0_0;
extern Il2CppType t2946_1_0_0;
extern TypeInfo t7_TI;
struct t2946;
extern TypeInfo t2946_TI;
extern Il2CppGenericClass t2946_GC;
extern CustomAttributesCache t867__CustomAttributeCache;
TypeInfo t2946_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2946_MIs, t2946_PIs, t2946_FIs, NULL, &t7_TI, NULL, NULL, &t2946_TI, t2946_ITIs, t2946_VT, &t867__CustomAttributeCache, &t2946_TI, &t2946_0_0_0, &t2946_1_0_0, t2946_IOs, &t2946_GC, NULL, NULL, NULL, t2946_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2946), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2947_TI;
#include "t2947MD.h"

#include "t863.h"
#include "t2948.h"
extern TypeInfo t2947_TI;
extern TypeInfo t5379_TI;
extern TypeInfo t70_TI;
extern TypeInfo t1202_TI;
extern TypeInfo t55_TI;
extern TypeInfo t863_TI;
extern TypeInfo t553_TI;
extern TypeInfo t2948_TI;
extern TypeInfo t60_TI;
#include "t1249MD.h"
#include "t2948MD.h"
extern Il2CppType t5379_0_0_0;
extern Il2CppType t1202_0_0_0;
extern Il2CppType t863_0_0_0;
extern MethodInfo m116_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3097_MI;
extern MethodInfo m3095_MI;
extern MethodInfo m6560_MI;
extern MethodInfo m16972_MI;
extern MethodInfo m30413_MI;
extern MethodInfo m23169_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>
extern Il2CppType t2947_0_0_49;
FieldInfo t2947_f0_FieldInfo = 
{
	"_default", &t2947_0_0_49, &t2947_TI, offsetof(t2947_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2947_FIs[] =
{
	&t2947_f0_FieldInfo,
	NULL
};
extern MethodInfo m16971_MI;
static PropertyInfo t2947____Default_PropertyInfo = 
{
	&t2947_TI, "Default", &m16971_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2947_PIs[] =
{
	&t2947____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2947_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16967_MI = 
{
	".ctor", (methodPointerType)&m8378_gshared, &t2947_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2947_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16968_MI = 
{
	".cctor", (methodPointerType)&m8379_gshared, &t2947_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2947_m16969_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2947_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16969_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8380_gshared, &t2947_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2947_m16969_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2947_m16970_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2947_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16970_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8381_gshared, &t2947_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2947_m16970_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2947_m30413_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2947_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30413_MI = 
{
	"GetHashCode", NULL, &t2947_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2947_m30413_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2947_m23169_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2947_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m23169_MI = 
{
	"Equals", NULL, &t2947_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2947_m23169_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2947_TI;
extern Il2CppType t2947_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16971_MI = 
{
	"get_Default", (methodPointerType)&m8382_gshared, &t2947_TI, &t2947_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2947_MIs[] =
{
	&m16967_MI,
	&m16968_MI,
	&m16969_MI,
	&m16970_MI,
	&m30413_MI,
	&m23169_MI,
	&m16971_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m23169_MI;
extern MethodInfo m30413_MI;
extern MethodInfo m16970_MI;
extern MethodInfo m16969_MI;
static MethodInfo* t2947_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m23169_MI,
	&m30413_MI,
	&m16970_MI,
	&m16969_MI,
	NULL,
	NULL,
};
extern TypeInfo t5380_TI;
extern TypeInfo t886_TI;
static TypeInfo* t2947_ITIs[] = 
{
	&t5380_TI,
	&t886_TI,
};
extern TypeInfo t5380_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t2947_IOs[] = 
{
	{ &t5380_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t5379_0_0_0;
extern Il2CppType t1202_0_0_0;
extern TypeInfo t2947_TI;
extern TypeInfo t2947_TI;
extern TypeInfo t2948_TI;
extern MethodInfo m16972_MI;
extern TypeInfo t1202_TI;
extern MethodInfo m30413_MI;
extern MethodInfo m23169_MI;
static void* t2947_RGCTXData[9] = 
{
	(void*)&t5379_0_0_0,
	(void*)&t1202_0_0_0,
	&t2947_TI,
	&t2947_TI,
	&t2948_TI,
	&m16972_MI,
	&t1202_TI,
	&m30413_MI,
	&m23169_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2947_0_0_0;
extern Il2CppType t2947_1_0_0;
extern TypeInfo t7_TI;
struct t2947;
extern TypeInfo t2947_TI;
extern Il2CppGenericClass t2947_GC;
TypeInfo t2947_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2947_MIs, t2947_PIs, t2947_FIs, NULL, &t7_TI, NULL, NULL, &t2947_TI, t2947_ITIs, t2947_VT, &EmptyCustomAttributesCache, &t2947_TI, &t2947_0_0_0, &t2947_1_0_0, t2947_IOs, &t2947_GC, NULL, NULL, NULL, t2947_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2947), 0, -1, sizeof(t2947_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5380_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Security.Policy.StrongName>
extern Il2CppType t1202_0_0_0;
extern Il2CppType t1202_0_0_0;
static ParameterInfo t5380_m30414_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t5380_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30414_MI = 
{
	"Equals", NULL, &t5380_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t5380_m30414_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t5380_m30415_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t5380_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30415_MI = 
{
	"GetHashCode", NULL, &t5380_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5380_m30415_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5380_MIs[] =
{
	&m30414_MI,
	&m30415_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5380_0_0_0;
extern Il2CppType t5380_1_0_0;
struct t5380;
extern TypeInfo t5380_TI;
extern Il2CppGenericClass t5380_GC;
TypeInfo t5380_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5380_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5380_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5380_TI, &t5380_0_0_0, &t5380_1_0_0, NULL, &t5380_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5379_TI;



// Metadata Definition System.IEquatable`1<System.Security.Policy.StrongName>
extern Il2CppType t1202_0_0_0;
static ParameterInfo t5379_m30416_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t5379_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30416_MI = 
{
	"Equals", NULL, &t5379_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5379_m30416_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5379_MIs[] =
{
	&m30416_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5379_0_0_0;
extern Il2CppType t5379_1_0_0;
struct t5379;
extern TypeInfo t5379_TI;
extern Il2CppGenericClass t5379_GC;
TypeInfo t5379_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5379_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5379_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5379_TI, &t5379_0_0_0, &t5379_1_0_0, NULL, &t5379_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2948_TI;

extern TypeInfo t1202_TI;
extern TypeInfo t7_TI;
extern TypeInfo t60_TI;
extern TypeInfo t55_TI;
extern MethodInfo m16967_MI;
extern MethodInfo m122_MI;
extern MethodInfo m121_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Security.Policy.StrongName>
extern TypeInfo t2948_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16972_MI = 
{
	".ctor", (methodPointerType)&m8413_gshared, &t2948_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2948_m16973_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2948_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16973_MI = 
{
	"GetHashCode", (methodPointerType)&m8414_gshared, &t2948_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2948_m16973_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2948_m16974_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2948_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16974_MI = 
{
	"Equals", (methodPointerType)&m8415_gshared, &t2948_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2948_m16974_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2948_MIs[] =
{
	&m16972_MI,
	&m16973_MI,
	&m16974_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m16974_MI;
extern MethodInfo m16973_MI;
extern MethodInfo m16970_MI;
extern MethodInfo m16969_MI;
extern MethodInfo m16973_MI;
extern MethodInfo m16974_MI;
static MethodInfo* t2948_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m16974_MI,
	&m16973_MI,
	&m16970_MI,
	&m16969_MI,
	&m16973_MI,
	&m16974_MI,
};
extern TypeInfo t5380_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t2948_IOs[] = 
{
	{ &t5380_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t5379_0_0_0;
extern Il2CppType t1202_0_0_0;
extern TypeInfo t2947_TI;
extern TypeInfo t2947_TI;
extern TypeInfo t2948_TI;
extern MethodInfo m16972_MI;
extern TypeInfo t1202_TI;
extern MethodInfo m30413_MI;
extern MethodInfo m23169_MI;
extern MethodInfo m16967_MI;
extern TypeInfo t1202_TI;
static void* t2948_RGCTXData[11] = 
{
	(void*)&t5379_0_0_0,
	(void*)&t1202_0_0_0,
	&t2947_TI,
	&t2947_TI,
	&t2948_TI,
	&m16972_MI,
	&t1202_TI,
	&m30413_MI,
	&m23169_MI,
	&m16967_MI,
	&t1202_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2948_0_0_0;
extern Il2CppType t2948_1_0_0;
extern TypeInfo t2947_TI;
struct t2948;
extern TypeInfo t2948_TI;
extern Il2CppGenericClass t2948_GC;
extern TypeInfo t862_TI;
TypeInfo t2948_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2948_MIs, NULL, NULL, NULL, &t2947_TI, NULL, &t862_TI, &t2948_TI, NULL, t2948_VT, &EmptyCustomAttributesCache, &t2948_TI, &t2948_0_0_0, &t2948_1_0_0, t2948_IOs, &t2948_GC, NULL, NULL, NULL, t2948_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2948), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2943_TI;

#include "t114.h"
#include "t113.h"


// Metadata Definition System.Predicate`1<System.Security.Policy.StrongName>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2943_m16975_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2943_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m16975_MI = 
{
	".ctor", (methodPointerType)&m8416_gshared, &t2943_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2943_m16975_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2943_m16976_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2943_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16976_MI = 
{
	"Invoke", (methodPointerType)&m8417_gshared, &t2943_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2943_m16976_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2943_m16977_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2943_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16977_MI = 
{
	"BeginInvoke", (methodPointerType)&m8418_gshared, &t2943_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7, t2943_m16977_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2943_m16978_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2943_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16978_MI = 
{
	"EndInvoke", (methodPointerType)&m8419_gshared, &t2943_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2943_m16978_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2943_MIs[] =
{
	&m16975_MI,
	&m16976_MI,
	&m16977_MI,
	&m16978_MI,
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
extern MethodInfo m16976_MI;
extern MethodInfo m16977_MI;
extern MethodInfo m16978_MI;
static MethodInfo* t2943_VT[] =
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
	&m16976_MI,
	&m16977_MI,
	&m16978_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2943_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2943_0_0_0;
extern Il2CppType t2943_1_0_0;
extern TypeInfo t245_TI;
struct t2943;
extern TypeInfo t2943_TI;
extern Il2CppGenericClass t2943_GC;
TypeInfo t2943_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2943_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t2943_TI, NULL, t2943_VT, &EmptyCustomAttributesCache, &t2943_TI, &t2943_0_0_0, &t2943_1_0_0, t2943_IOs, &t2943_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2943), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2949_TI;

#include "t851.h"
#include "t2950.h"
extern TypeInfo t2949_TI;
extern TypeInfo t3863_TI;
extern TypeInfo t70_TI;
extern TypeInfo t1202_TI;
extern TypeInfo t55_TI;
extern TypeInfo t851_TI;
extern TypeInfo t553_TI;
extern TypeInfo t2950_TI;
extern TypeInfo t60_TI;
extern TypeInfo t348_TI;
#include "t2950MD.h"
extern Il2CppType t3863_0_0_0;
extern Il2CppType t1202_0_0_0;
extern Il2CppType t851_0_0_0;
extern MethodInfo m116_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3097_MI;
extern MethodInfo m3095_MI;
extern MethodInfo m6560_MI;
extern MethodInfo m16983_MI;
extern MethodInfo m30417_MI;
extern MethodInfo m6582_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<System.Security.Policy.StrongName>
extern Il2CppType t2949_0_0_49;
FieldInfo t2949_f0_FieldInfo = 
{
	"_default", &t2949_0_0_49, &t2949_TI, offsetof(t2949_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2949_FIs[] =
{
	&t2949_f0_FieldInfo,
	NULL
};
extern MethodInfo m16982_MI;
static PropertyInfo t2949____Default_PropertyInfo = 
{
	&t2949_TI, "Default", &m16982_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2949_PIs[] =
{
	&t2949____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2949_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16979_MI = 
{
	".ctor", (methodPointerType)&m8420_gshared, &t2949_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2949_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16980_MI = 
{
	".cctor", (methodPointerType)&m8421_gshared, &t2949_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2949_m16981_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2949_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16981_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8422_gshared, &t2949_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t2949_m16981_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2949_m30417_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2949_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30417_MI = 
{
	"Compare", NULL, &t2949_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t2949_m30417_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2949_TI;
extern Il2CppType t2949_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16982_MI = 
{
	"get_Default", (methodPointerType)&m8423_gshared, &t2949_TI, &t2949_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2949_MIs[] =
{
	&m16979_MI,
	&m16980_MI,
	&m16981_MI,
	&m30417_MI,
	&m16982_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m30417_MI;
extern MethodInfo m16981_MI;
static MethodInfo* t2949_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m30417_MI,
	&m16981_MI,
	NULL,
};
extern TypeInfo t3862_TI;
extern TypeInfo t743_TI;
static TypeInfo* t2949_ITIs[] = 
{
	&t3862_TI,
	&t743_TI,
};
extern TypeInfo t3862_TI;
extern TypeInfo t743_TI;
static Il2CppInterfaceOffsetPair t2949_IOs[] = 
{
	{ &t3862_TI, 4},
	{ &t743_TI, 5},
};
extern Il2CppType t3863_0_0_0;
extern Il2CppType t1202_0_0_0;
extern TypeInfo t2949_TI;
extern TypeInfo t2949_TI;
extern TypeInfo t2950_TI;
extern MethodInfo m16983_MI;
extern TypeInfo t1202_TI;
extern MethodInfo m30417_MI;
static void* t2949_RGCTXData[8] = 
{
	(void*)&t3863_0_0_0,
	(void*)&t1202_0_0_0,
	&t2949_TI,
	&t2949_TI,
	&t2950_TI,
	&m16983_MI,
	&t1202_TI,
	&m30417_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2949_0_0_0;
extern Il2CppType t2949_1_0_0;
extern TypeInfo t7_TI;
struct t2949;
extern TypeInfo t2949_TI;
extern Il2CppGenericClass t2949_GC;
TypeInfo t2949_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2949_MIs, t2949_PIs, t2949_FIs, NULL, &t7_TI, NULL, NULL, &t2949_TI, t2949_ITIs, t2949_VT, &EmptyCustomAttributesCache, &t2949_TI, &t2949_0_0_0, &t2949_1_0_0, t2949_IOs, &t2949_GC, NULL, NULL, NULL, t2949_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2949), 0, -1, sizeof(t2949_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3862_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<System.Security.Policy.StrongName>
extern Il2CppType t1202_0_0_0;
extern Il2CppType t1202_0_0_0;
static ParameterInfo t3862_m23177_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t3862_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m23177_MI = 
{
	"Compare", NULL, &t3862_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t3862_m23177_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3862_MIs[] =
{
	&m23177_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3862_0_0_0;
extern Il2CppType t3862_1_0_0;
struct t3862;
extern TypeInfo t3862_TI;
extern Il2CppGenericClass t3862_GC;
TypeInfo t3862_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3862_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3862_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3862_TI, &t3862_0_0_0, &t3862_1_0_0, NULL, &t3862_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3863_TI;



// Metadata Definition System.IComparable`1<System.Security.Policy.StrongName>
extern Il2CppType t1202_0_0_0;
static ParameterInfo t3863_m23178_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t3863_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m23178_MI = 
{
	"CompareTo", NULL, &t3863_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t3863_m23178_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3863_MIs[] =
{
	&m23178_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3863_0_0_0;
extern Il2CppType t3863_1_0_0;
struct t3863;
extern TypeInfo t3863_TI;
extern Il2CppGenericClass t3863_GC;
TypeInfo t3863_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3863_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3863_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3863_TI, &t3863_0_0_0, &t3863_1_0_0, NULL, &t3863_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2950_TI;

extern TypeInfo t1202_TI;
extern TypeInfo t3863_TI;
extern TypeInfo t60_TI;
extern TypeInfo t78_TI;
extern TypeInfo t7_TI;
extern TypeInfo t348_TI;
extern MethodInfo m16979_MI;
extern MethodInfo m23178_MI;
extern MethodInfo m7420_MI;
extern MethodInfo m2046_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.Security.Policy.StrongName>
extern TypeInfo t2950_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16983_MI = 
{
	".ctor", (methodPointerType)&m8424_gshared, &t2950_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2950_m16984_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2950_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16984_MI = 
{
	"Compare", (methodPointerType)&m8425_gshared, &t2950_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t2950_m16984_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2950_MIs[] =
{
	&m16983_MI,
	&m16984_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m16984_MI;
extern MethodInfo m16981_MI;
extern MethodInfo m16984_MI;
static MethodInfo* t2950_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m16984_MI,
	&m16981_MI,
	&m16984_MI,
};
extern TypeInfo t3862_TI;
extern TypeInfo t743_TI;
static Il2CppInterfaceOffsetPair t2950_IOs[] = 
{
	{ &t3862_TI, 4},
	{ &t743_TI, 5},
};
extern Il2CppType t3863_0_0_0;
extern Il2CppType t1202_0_0_0;
extern TypeInfo t2949_TI;
extern TypeInfo t2949_TI;
extern TypeInfo t2950_TI;
extern MethodInfo m16983_MI;
extern TypeInfo t1202_TI;
extern MethodInfo m30417_MI;
extern MethodInfo m16979_MI;
extern TypeInfo t1202_TI;
extern TypeInfo t3863_TI;
extern MethodInfo m23178_MI;
static void* t2950_RGCTXData[12] = 
{
	(void*)&t3863_0_0_0,
	(void*)&t1202_0_0_0,
	&t2949_TI,
	&t2949_TI,
	&t2950_TI,
	&m16983_MI,
	&t1202_TI,
	&m30417_MI,
	&m16979_MI,
	&t1202_TI,
	&t3863_TI,
	&m23178_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2950_0_0_0;
extern Il2CppType t2950_1_0_0;
extern TypeInfo t2949_TI;
struct t2950;
extern TypeInfo t2950_TI;
extern Il2CppGenericClass t2950_GC;
extern TypeInfo t850_TI;
TypeInfo t2950_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2950_MIs, NULL, NULL, NULL, &t2949_TI, NULL, &t850_TI, &t2950_TI, NULL, t2950_VT, &EmptyCustomAttributesCache, &t2950_TI, &t2950_0_0_0, &t2950_1_0_0, t2950_IOs, &t2950_GC, NULL, NULL, NULL, t2950_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2950), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2944_TI;
#include "t2944MD.h"



// Metadata Definition System.Comparison`1<System.Security.Policy.StrongName>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2944_m16985_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2944_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m16985_MI = 
{
	".ctor", (methodPointerType)&m8471_gshared, &t2944_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2944_m16985_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
extern Il2CppType t1202_0_0_0;
static ParameterInfo t2944_m16986_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
};
extern TypeInfo t2944_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16986_MI = 
{
	"Invoke", (methodPointerType)&m8472_gshared, &t2944_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t2944_m16986_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1202_0_0_0;
extern Il2CppType t1202_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2944_m16987_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t1202_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2944_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16987_MI = 
{
	"BeginInvoke", (methodPointerType)&m8473_gshared, &t2944_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t2944_m16987_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2944_m16988_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2944_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16988_MI = 
{
	"EndInvoke", (methodPointerType)&m8474_gshared, &t2944_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2944_m16988_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2944_MIs[] =
{
	&m16985_MI,
	&m16986_MI,
	&m16987_MI,
	&m16988_MI,
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
extern MethodInfo m16986_MI;
extern MethodInfo m16987_MI;
extern MethodInfo m16988_MI;
static MethodInfo* t2944_VT[] =
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
	&m16986_MI,
	&m16987_MI,
	&m16988_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2944_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2944_0_0_0;
extern Il2CppType t2944_1_0_0;
extern TypeInfo t245_TI;
struct t2944;
extern TypeInfo t2944_TI;
extern Il2CppGenericClass t2944_GC;
TypeInfo t2944_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2944_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t2944_TI, NULL, t2944_VT, &EmptyCustomAttributesCache, &t2944_TI, &t2944_0_0_0, &t2944_1_0_0, t2944_IOs, &t2944_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2944), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3864_TI;

#include "t1203.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Principal.PrincipalPolicy>
extern MethodInfo m30418_MI;
static PropertyInfo t3864____Current_PropertyInfo = 
{
	&t3864_TI, "Current", &m30418_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3864_PIs[] =
{
	&t3864____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3864_TI;
extern Il2CppType t1203_0_0_0;
extern void* RuntimeInvoker_t1203 (MethodInfo* method, void* obj, void** args);
MethodInfo m30418_MI = 
{
	"get_Current", NULL, &t3864_TI, &t1203_0_0_0, RuntimeInvoker_t1203, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3864_MIs[] =
{
	&m30418_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3864_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3864_0_0_0;
extern Il2CppType t3864_1_0_0;
struct t3864;
extern TypeInfo t3864_TI;
extern Il2CppGenericClass t3864_GC;
TypeInfo t3864_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3864_MIs, t3864_PIs, NULL, NULL, NULL, NULL, NULL, &t3864_TI, t3864_ITIs, NULL, &EmptyCustomAttributesCache, &t3864_TI, &t3864_0_0_0, &t3864_1_0_0, NULL, &t3864_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2951.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2951_TI;
#include "t2951MD.h"

extern TypeInfo t2951_TI;
extern TypeInfo t1203_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16993_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23183_MI;
struct t52;
 int32_t m23183 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m23183_MI;


extern MethodInfo m16989_MI;
 void m16989 (t2951 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16990_MI;
 t7 * m16990 (t2951 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16993(__this, &m16993_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1203_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16991_MI;
 void m16991 (t2951 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16992_MI;
 bool m16992 (t2951 * __this, MethodInfo* method){
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
extern MethodInfo m16993_MI;
 int32_t m16993 (t2951 * __this, MethodInfo* method){
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
		int32_t L_8 = m23183(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m23183_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Principal.PrincipalPolicy>
extern Il2CppType t52_0_0_1;
FieldInfo t2951_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2951_TI, offsetof(t2951, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2951_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2951_TI, offsetof(t2951, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2951_FIs[] =
{
	&t2951_f0_FieldInfo,
	&t2951_f1_FieldInfo,
	NULL
};
extern MethodInfo m16990_MI;
static PropertyInfo t2951____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2951_TI, "System.Collections.IEnumerator.Current", &m16990_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16993_MI;
static PropertyInfo t2951____Current_PropertyInfo = 
{
	&t2951_TI, "Current", &m16993_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2951_PIs[] =
{
	&t2951____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2951____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2951_m16989_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2951_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16989_MI = 
{
	".ctor", (methodPointerType)&m16989, &t2951_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2951_m16989_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2951_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16990_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16990, &t2951_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2951_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16991_MI = 
{
	"Dispose", (methodPointerType)&m16991, &t2951_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2951_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16992_MI = 
{
	"MoveNext", (methodPointerType)&m16992, &t2951_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2951_TI;
extern Il2CppType t1203_0_0_0;
extern void* RuntimeInvoker_t1203 (MethodInfo* method, void* obj, void** args);
MethodInfo m16993_MI = 
{
	"get_Current", (methodPointerType)&m16993, &t2951_TI, &t1203_0_0_0, RuntimeInvoker_t1203, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2951_MIs[] =
{
	&m16989_MI,
	&m16990_MI,
	&m16991_MI,
	&m16992_MI,
	&m16993_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16990_MI;
extern MethodInfo m16992_MI;
extern MethodInfo m16991_MI;
extern MethodInfo m16993_MI;
static MethodInfo* t2951_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16990_MI,
	&m16992_MI,
	&m16991_MI,
	&m16993_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3864_TI;
static TypeInfo* t2951_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3864_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3864_TI;
static Il2CppInterfaceOffsetPair t2951_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3864_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2951_0_0_0;
extern Il2CppType t2951_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2951_TI;
extern Il2CppGenericClass t2951_GC;
extern TypeInfo t52_TI;
TypeInfo t2951_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2951_MIs, t2951_PIs, t2951_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2951_TI, t2951_ITIs, t2951_VT, &EmptyCustomAttributesCache, &t2951_TI, &t2951_0_0_0, &t2951_1_0_0, t2951_IOs, &t2951_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2951)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5242_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>
extern MethodInfo m30419_MI;
static PropertyInfo t5242____Count_PropertyInfo = 
{
	&t5242_TI, "Count", &m30419_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30420_MI;
static PropertyInfo t5242____IsReadOnly_PropertyInfo = 
{
	&t5242_TI, "IsReadOnly", &m30420_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5242_PIs[] =
{
	&t5242____Count_PropertyInfo,
	&t5242____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5242_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30419_MI = 
{
	"get_Count", NULL, &t5242_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5242_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30420_MI = 
{
	"get_IsReadOnly", NULL, &t5242_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1203_0_0_0;
static ParameterInfo t5242_m30421_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1203_0_0_0},
};
extern TypeInfo t5242_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30421_MI = 
{
	"Add", NULL, &t5242_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5242_m30421_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5242_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30422_MI = 
{
	"Clear", NULL, &t5242_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1203_0_0_0;
static ParameterInfo t5242_m30423_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1203_0_0_0},
};
extern TypeInfo t5242_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30423_MI = 
{
	"Contains", NULL, &t5242_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5242_m30423_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3181_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5242_m30424_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3181_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5242_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30424_MI = 
{
	"CopyTo", NULL, &t5242_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5242_m30424_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1203_0_0_0;
static ParameterInfo t5242_m30425_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1203_0_0_0},
};
extern TypeInfo t5242_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30425_MI = 
{
	"Remove", NULL, &t5242_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5242_m30425_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5242_MIs[] =
{
	&m30419_MI,
	&m30420_MI,
	&m30421_MI,
	&m30422_MI,
	&m30423_MI,
	&m30424_MI,
	&m30425_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5244_TI;
static TypeInfo* t5242_ITIs[] = 
{
	&t618_TI,
	&t5244_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5242_0_0_0;
extern Il2CppType t5242_1_0_0;
struct t5242;
extern TypeInfo t5242_TI;
extern Il2CppGenericClass t5242_GC;
TypeInfo t5242_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5242_MIs, t5242_PIs, NULL, NULL, NULL, NULL, NULL, &t5242_TI, t5242_ITIs, NULL, &EmptyCustomAttributesCache, &t5242_TI, &t5242_0_0_0, &t5242_1_0_0, NULL, &t5242_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5244_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Principal.PrincipalPolicy>
extern TypeInfo t5244_TI;
extern Il2CppType t3864_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30426_MI = 
{
	"GetEnumerator", NULL, &t5244_TI, &t3864_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5244_MIs[] =
{
	&m30426_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5244_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5244_0_0_0;
extern Il2CppType t5244_1_0_0;
struct t5244;
extern TypeInfo t5244_TI;
extern Il2CppGenericClass t5244_GC;
TypeInfo t5244_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5244_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5244_TI, t5244_ITIs, NULL, &EmptyCustomAttributesCache, &t5244_TI, &t5244_0_0_0, &t5244_1_0_0, NULL, &t5244_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5243_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.Principal.PrincipalPolicy>
extern MethodInfo m30427_MI;
extern MethodInfo m30428_MI;
static PropertyInfo t5243____Item_PropertyInfo = 
{
	&t5243_TI, "Item", &m30427_MI, &m30428_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5243_PIs[] =
{
	&t5243____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1203_0_0_0;
static ParameterInfo t5243_m30429_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1203_0_0_0},
};
extern TypeInfo t5243_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30429_MI = 
{
	"IndexOf", NULL, &t5243_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5243_m30429_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1203_0_0_0;
static ParameterInfo t5243_m30430_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1203_0_0_0},
};
extern TypeInfo t5243_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30430_MI = 
{
	"Insert", NULL, &t5243_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5243_m30430_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5243_m30431_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5243_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30431_MI = 
{
	"RemoveAt", NULL, &t5243_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5243_m30431_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5243_m30427_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5243_TI;
extern Il2CppType t1203_0_0_0;
extern void* RuntimeInvoker_t1203_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30427_MI = 
{
	"get_Item", NULL, &t5243_TI, &t1203_0_0_0, RuntimeInvoker_t1203_t60, t5243_m30427_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1203_0_0_0;
static ParameterInfo t5243_m30428_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1203_0_0_0},
};
extern TypeInfo t5243_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30428_MI = 
{
	"set_Item", NULL, &t5243_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5243_m30428_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5243_MIs[] =
{
	&m30429_MI,
	&m30430_MI,
	&m30431_MI,
	&m30427_MI,
	&m30428_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5242_TI;
extern TypeInfo t5244_TI;
static TypeInfo* t5243_ITIs[] = 
{
	&t618_TI,
	&t5242_TI,
	&t5244_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5243_0_0_0;
extern Il2CppType t5243_1_0_0;
struct t5243;
extern TypeInfo t5243_TI;
extern Il2CppGenericClass t5243_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5243_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5243_MIs, t5243_PIs, NULL, NULL, NULL, NULL, NULL, &t5243_TI, t5243_ITIs, NULL, &t1426__CustomAttributeCache, &t5243_TI, &t5243_0_0_0, &t5243_1_0_0, NULL, &t5243_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3865_TI;

#include "t624.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.SecuritySafeCriticalAttribute>
extern MethodInfo m30432_MI;
static PropertyInfo t3865____Current_PropertyInfo = 
{
	&t3865_TI, "Current", &m30432_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3865_PIs[] =
{
	&t3865____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3865_TI;
extern Il2CppType t624_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30432_MI = 
{
	"get_Current", NULL, &t3865_TI, &t624_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3865_MIs[] =
{
	&m30432_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3865_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3865_0_0_0;
extern Il2CppType t3865_1_0_0;
struct t3865;
extern TypeInfo t3865_TI;
extern Il2CppGenericClass t3865_GC;
TypeInfo t3865_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3865_MIs, t3865_PIs, NULL, NULL, NULL, NULL, NULL, &t3865_TI, t3865_ITIs, NULL, &EmptyCustomAttributesCache, &t3865_TI, &t3865_0_0_0, &t3865_1_0_0, NULL, &t3865_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2952.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2952_TI;
#include "t2952MD.h"

extern TypeInfo t2952_TI;
extern TypeInfo t624_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16998_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23194_MI;
struct t52;
#define m23194(__this, p0, method) (t624 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m23194_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2952_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2952_TI, offsetof(t2952, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2952_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2952_TI, offsetof(t2952, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2952_FIs[] =
{
	&t2952_f0_FieldInfo,
	&t2952_f1_FieldInfo,
	NULL
};
extern MethodInfo m16995_MI;
static PropertyInfo t2952____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2952_TI, "System.Collections.IEnumerator.Current", &m16995_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16998_MI;
static PropertyInfo t2952____Current_PropertyInfo = 
{
	&t2952_TI, "Current", &m16998_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2952_PIs[] =
{
	&t2952____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2952____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2952_m16994_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2952_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16994_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2952_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2952_m16994_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2952_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16995_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2952_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2952_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16996_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2952_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2952_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16997_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2952_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2952_TI;
extern Il2CppType t624_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16998_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2952_TI, &t624_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2952_MIs[] =
{
	&m16994_MI,
	&m16995_MI,
	&m16996_MI,
	&m16997_MI,
	&m16998_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16995_MI;
extern MethodInfo m16997_MI;
extern MethodInfo m16996_MI;
extern MethodInfo m16998_MI;
static MethodInfo* t2952_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16995_MI,
	&m16997_MI,
	&m16996_MI,
	&m16998_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3865_TI;
static TypeInfo* t2952_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3865_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3865_TI;
static Il2CppInterfaceOffsetPair t2952_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3865_TI, 7},
};
extern MethodInfo m16998_MI;
extern TypeInfo t624_TI;
extern MethodInfo m23194_MI;
static void* t2952_RGCTXData[3] = 
{
	&m16998_MI,
	&t624_TI,
	&m23194_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2952_0_0_0;
extern Il2CppType t2952_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2952_TI;
extern Il2CppGenericClass t2952_GC;
extern TypeInfo t52_TI;
TypeInfo t2952_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2952_MIs, t2952_PIs, t2952_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2952_TI, t2952_ITIs, t2952_VT, &EmptyCustomAttributesCache, &t2952_TI, &t2952_0_0_0, &t2952_1_0_0, t2952_IOs, &t2952_GC, NULL, NULL, NULL, t2952_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2952)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5245_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>
extern MethodInfo m30433_MI;
static PropertyInfo t5245____Count_PropertyInfo = 
{
	&t5245_TI, "Count", &m30433_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30434_MI;
static PropertyInfo t5245____IsReadOnly_PropertyInfo = 
{
	&t5245_TI, "IsReadOnly", &m30434_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5245_PIs[] =
{
	&t5245____Count_PropertyInfo,
	&t5245____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5245_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30433_MI = 
{
	"get_Count", NULL, &t5245_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5245_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30434_MI = 
{
	"get_IsReadOnly", NULL, &t5245_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t624_0_0_0;
static ParameterInfo t5245_m30435_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t624_0_0_0},
};
extern TypeInfo t5245_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30435_MI = 
{
	"Add", NULL, &t5245_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5245_m30435_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5245_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30436_MI = 
{
	"Clear", NULL, &t5245_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t624_0_0_0;
static ParameterInfo t5245_m30437_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t624_0_0_0},
};
extern TypeInfo t5245_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30437_MI = 
{
	"Contains", NULL, &t5245_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5245_m30437_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3182_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5245_m30438_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3182_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5245_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30438_MI = 
{
	"CopyTo", NULL, &t5245_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5245_m30438_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t624_0_0_0;
static ParameterInfo t5245_m30439_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t624_0_0_0},
};
extern TypeInfo t5245_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30439_MI = 
{
	"Remove", NULL, &t5245_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5245_m30439_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5245_MIs[] =
{
	&m30433_MI,
	&m30434_MI,
	&m30435_MI,
	&m30436_MI,
	&m30437_MI,
	&m30438_MI,
	&m30439_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5247_TI;
static TypeInfo* t5245_ITIs[] = 
{
	&t618_TI,
	&t5247_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5245_0_0_0;
extern Il2CppType t5245_1_0_0;
struct t5245;
extern TypeInfo t5245_TI;
extern Il2CppGenericClass t5245_GC;
TypeInfo t5245_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5245_MIs, t5245_PIs, NULL, NULL, NULL, NULL, NULL, &t5245_TI, t5245_ITIs, NULL, &EmptyCustomAttributesCache, &t5245_TI, &t5245_0_0_0, &t5245_1_0_0, NULL, &t5245_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5247_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.SecuritySafeCriticalAttribute>
extern TypeInfo t5247_TI;
extern Il2CppType t3865_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30440_MI = 
{
	"GetEnumerator", NULL, &t5247_TI, &t3865_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5247_MIs[] =
{
	&m30440_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5247_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5247_0_0_0;
extern Il2CppType t5247_1_0_0;
struct t5247;
extern TypeInfo t5247_TI;
extern Il2CppGenericClass t5247_GC;
TypeInfo t5247_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5247_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5247_TI, t5247_ITIs, NULL, &EmptyCustomAttributesCache, &t5247_TI, &t5247_0_0_0, &t5247_1_0_0, NULL, &t5247_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5246_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>
extern MethodInfo m30441_MI;
extern MethodInfo m30442_MI;
static PropertyInfo t5246____Item_PropertyInfo = 
{
	&t5246_TI, "Item", &m30441_MI, &m30442_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5246_PIs[] =
{
	&t5246____Item_PropertyInfo,
	NULL
};
extern Il2CppType t624_0_0_0;
static ParameterInfo t5246_m30443_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t624_0_0_0},
};
extern TypeInfo t5246_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30443_MI = 
{
	"IndexOf", NULL, &t5246_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5246_m30443_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t624_0_0_0;
static ParameterInfo t5246_m30444_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t624_0_0_0},
};
extern TypeInfo t5246_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30444_MI = 
{
	"Insert", NULL, &t5246_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5246_m30444_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5246_m30445_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5246_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30445_MI = 
{
	"RemoveAt", NULL, &t5246_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5246_m30445_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5246_m30441_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5246_TI;
extern Il2CppType t624_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30441_MI = 
{
	"get_Item", NULL, &t5246_TI, &t624_0_0_0, RuntimeInvoker_t7_t60, t5246_m30441_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t624_0_0_0;
static ParameterInfo t5246_m30442_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t624_0_0_0},
};
extern TypeInfo t5246_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30442_MI = 
{
	"set_Item", NULL, &t5246_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5246_m30442_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5246_MIs[] =
{
	&m30443_MI,
	&m30444_MI,
	&m30445_MI,
	&m30441_MI,
	&m30442_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5245_TI;
extern TypeInfo t5247_TI;
static TypeInfo* t5246_ITIs[] = 
{
	&t618_TI,
	&t5245_TI,
	&t5247_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5246_0_0_0;
extern Il2CppType t5246_1_0_0;
struct t5246;
extern TypeInfo t5246_TI;
extern Il2CppGenericClass t5246_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5246_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5246_MIs, t5246_PIs, NULL, NULL, NULL, NULL, NULL, &t5246_TI, t5246_ITIs, NULL, &t1426__CustomAttributeCache, &t5246_TI, &t5246_0_0_0, &t5246_1_0_0, NULL, &t5246_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3866_TI;

#include "t1207.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern MethodInfo m30446_MI;
static PropertyInfo t3866____Current_PropertyInfo = 
{
	&t3866_TI, "Current", &m30446_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3866_PIs[] =
{
	&t3866____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3866_TI;
extern Il2CppType t1207_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30446_MI = 
{
	"get_Current", NULL, &t3866_TI, &t1207_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3866_MIs[] =
{
	&m30446_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3866_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3866_0_0_0;
extern Il2CppType t3866_1_0_0;
struct t3866;
extern TypeInfo t3866_TI;
extern Il2CppGenericClass t3866_GC;
TypeInfo t3866_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3866_MIs, t3866_PIs, NULL, NULL, NULL, NULL, NULL, &t3866_TI, t3866_ITIs, NULL, &EmptyCustomAttributesCache, &t3866_TI, &t3866_0_0_0, &t3866_1_0_0, NULL, &t3866_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2953.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2953_TI;
#include "t2953MD.h"

extern TypeInfo t2953_TI;
extern TypeInfo t1207_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m17003_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23205_MI;
struct t52;
#define m23205(__this, p0, method) (t1207 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m23205_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2953_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2953_TI, offsetof(t2953, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2953_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2953_TI, offsetof(t2953, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2953_FIs[] =
{
	&t2953_f0_FieldInfo,
	&t2953_f1_FieldInfo,
	NULL
};
extern MethodInfo m17000_MI;
static PropertyInfo t2953____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2953_TI, "System.Collections.IEnumerator.Current", &m17000_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m17003_MI;
static PropertyInfo t2953____Current_PropertyInfo = 
{
	&t2953_TI, "Current", &m17003_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2953_PIs[] =
{
	&t2953____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2953____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2953_m16999_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2953_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16999_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2953_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2953_m16999_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2953_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m17000_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2953_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2953_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m17001_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2953_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2953_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m17002_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2953_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2953_TI;
extern Il2CppType t1207_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m17003_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2953_TI, &t1207_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2953_MIs[] =
{
	&m16999_MI,
	&m17000_MI,
	&m17001_MI,
	&m17002_MI,
	&m17003_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m17000_MI;
extern MethodInfo m17002_MI;
extern MethodInfo m17001_MI;
extern MethodInfo m17003_MI;
static MethodInfo* t2953_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m17000_MI,
	&m17002_MI,
	&m17001_MI,
	&m17003_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3866_TI;
static TypeInfo* t2953_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3866_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3866_TI;
static Il2CppInterfaceOffsetPair t2953_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3866_TI, 7},
};
extern MethodInfo m17003_MI;
extern TypeInfo t1207_TI;
extern MethodInfo m23205_MI;
static void* t2953_RGCTXData[3] = 
{
	&m17003_MI,
	&t1207_TI,
	&m23205_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2953_0_0_0;
extern Il2CppType t2953_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2953_TI;
extern Il2CppGenericClass t2953_GC;
extern TypeInfo t52_TI;
TypeInfo t2953_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2953_MIs, t2953_PIs, t2953_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2953_TI, t2953_ITIs, t2953_VT, &EmptyCustomAttributesCache, &t2953_TI, &t2953_0_0_0, &t2953_1_0_0, t2953_IOs, &t2953_GC, NULL, NULL, NULL, t2953_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2953)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5248_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern MethodInfo m30447_MI;
static PropertyInfo t5248____Count_PropertyInfo = 
{
	&t5248_TI, "Count", &m30447_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30448_MI;
static PropertyInfo t5248____IsReadOnly_PropertyInfo = 
{
	&t5248_TI, "IsReadOnly", &m30448_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5248_PIs[] =
{
	&t5248____Count_PropertyInfo,
	&t5248____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5248_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30447_MI = 
{
	"get_Count", NULL, &t5248_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5248_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30448_MI = 
{
	"get_IsReadOnly", NULL, &t5248_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1207_0_0_0;
static ParameterInfo t5248_m30449_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1207_0_0_0},
};
extern TypeInfo t5248_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30449_MI = 
{
	"Add", NULL, &t5248_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5248_m30449_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5248_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30450_MI = 
{
	"Clear", NULL, &t5248_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1207_0_0_0;
static ParameterInfo t5248_m30451_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1207_0_0_0},
};
extern TypeInfo t5248_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30451_MI = 
{
	"Contains", NULL, &t5248_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5248_m30451_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3183_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5248_m30452_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3183_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5248_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30452_MI = 
{
	"CopyTo", NULL, &t5248_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5248_m30452_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1207_0_0_0;
static ParameterInfo t5248_m30453_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1207_0_0_0},
};
extern TypeInfo t5248_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30453_MI = 
{
	"Remove", NULL, &t5248_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5248_m30453_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5248_MIs[] =
{
	&m30447_MI,
	&m30448_MI,
	&m30449_MI,
	&m30450_MI,
	&m30451_MI,
	&m30452_MI,
	&m30453_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5250_TI;
static TypeInfo* t5248_ITIs[] = 
{
	&t618_TI,
	&t5250_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5248_0_0_0;
extern Il2CppType t5248_1_0_0;
struct t5248;
extern TypeInfo t5248_TI;
extern Il2CppGenericClass t5248_GC;
TypeInfo t5248_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5248_MIs, t5248_PIs, NULL, NULL, NULL, NULL, NULL, &t5248_TI, t5248_ITIs, NULL, &EmptyCustomAttributesCache, &t5248_TI, &t5248_0_0_0, &t5248_1_0_0, NULL, &t5248_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5250_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern TypeInfo t5250_TI;
extern Il2CppType t3866_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30454_MI = 
{
	"GetEnumerator", NULL, &t5250_TI, &t3866_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5250_MIs[] =
{
	&m30454_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5250_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5250_0_0_0;
extern Il2CppType t5250_1_0_0;
struct t5250;
extern TypeInfo t5250_TI;
extern Il2CppGenericClass t5250_GC;
TypeInfo t5250_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5250_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5250_TI, t5250_ITIs, NULL, &EmptyCustomAttributesCache, &t5250_TI, &t5250_0_0_0, &t5250_1_0_0, NULL, &t5250_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5249_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern MethodInfo m30455_MI;
extern MethodInfo m30456_MI;
static PropertyInfo t5249____Item_PropertyInfo = 
{
	&t5249_TI, "Item", &m30455_MI, &m30456_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5249_PIs[] =
{
	&t5249____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1207_0_0_0;
static ParameterInfo t5249_m30457_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1207_0_0_0},
};
extern TypeInfo t5249_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30457_MI = 
{
	"IndexOf", NULL, &t5249_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5249_m30457_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1207_0_0_0;
static ParameterInfo t5249_m30458_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1207_0_0_0},
};
extern TypeInfo t5249_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30458_MI = 
{
	"Insert", NULL, &t5249_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5249_m30458_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5249_m30459_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5249_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30459_MI = 
{
	"RemoveAt", NULL, &t5249_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5249_m30459_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5249_m30455_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5249_TI;
extern Il2CppType t1207_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30455_MI = 
{
	"get_Item", NULL, &t5249_TI, &t1207_0_0_0, RuntimeInvoker_t7_t60, t5249_m30455_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1207_0_0_0;
static ParameterInfo t5249_m30456_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1207_0_0_0},
};
extern TypeInfo t5249_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30456_MI = 
{
	"set_Item", NULL, &t5249_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5249_m30456_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5249_MIs[] =
{
	&m30457_MI,
	&m30458_MI,
	&m30459_MI,
	&m30455_MI,
	&m30456_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5248_TI;
extern TypeInfo t5250_TI;
static TypeInfo* t5249_ITIs[] = 
{
	&t618_TI,
	&t5248_TI,
	&t5250_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5249_0_0_0;
extern Il2CppType t5249_1_0_0;
struct t5249;
extern TypeInfo t5249_TI;
extern Il2CppGenericClass t5249_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5249_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5249_MIs, t5249_PIs, NULL, NULL, NULL, NULL, NULL, &t5249_TI, t5249_ITIs, NULL, &t1426__CustomAttributeCache, &t5249_TI, &t5249_0_0_0, &t5249_1_0_0, NULL, &t5249_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3867_TI;

#include "t1208.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.UnverifiableCodeAttribute>
extern MethodInfo m30460_MI;
static PropertyInfo t3867____Current_PropertyInfo = 
{
	&t3867_TI, "Current", &m30460_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3867_PIs[] =
{
	&t3867____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3867_TI;
extern Il2CppType t1208_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30460_MI = 
{
	"get_Current", NULL, &t3867_TI, &t1208_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3867_MIs[] =
{
	&m30460_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3867_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3867_0_0_0;
extern Il2CppType t3867_1_0_0;
struct t3867;
extern TypeInfo t3867_TI;
extern Il2CppGenericClass t3867_GC;
TypeInfo t3867_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3867_MIs, t3867_PIs, NULL, NULL, NULL, NULL, NULL, &t3867_TI, t3867_ITIs, NULL, &EmptyCustomAttributesCache, &t3867_TI, &t3867_0_0_0, &t3867_1_0_0, NULL, &t3867_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2954.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2954_TI;
#include "t2954MD.h"

extern TypeInfo t2954_TI;
extern TypeInfo t1208_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m17008_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23216_MI;
struct t52;
#define m23216(__this, p0, method) (t1208 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m23216_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2954_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2954_TI, offsetof(t2954, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2954_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2954_TI, offsetof(t2954, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2954_FIs[] =
{
	&t2954_f0_FieldInfo,
	&t2954_f1_FieldInfo,
	NULL
};
extern MethodInfo m17005_MI;
static PropertyInfo t2954____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2954_TI, "System.Collections.IEnumerator.Current", &m17005_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m17008_MI;
static PropertyInfo t2954____Current_PropertyInfo = 
{
	&t2954_TI, "Current", &m17008_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2954_PIs[] =
{
	&t2954____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2954____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2954_m17004_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2954_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m17004_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2954_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2954_m17004_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2954_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m17005_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2954_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2954_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m17006_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2954_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2954_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m17007_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2954_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2954_TI;
extern Il2CppType t1208_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m17008_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2954_TI, &t1208_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2954_MIs[] =
{
	&m17004_MI,
	&m17005_MI,
	&m17006_MI,
	&m17007_MI,
	&m17008_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m17005_MI;
extern MethodInfo m17007_MI;
extern MethodInfo m17006_MI;
extern MethodInfo m17008_MI;
static MethodInfo* t2954_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m17005_MI,
	&m17007_MI,
	&m17006_MI,
	&m17008_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3867_TI;
static TypeInfo* t2954_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3867_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3867_TI;
static Il2CppInterfaceOffsetPair t2954_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3867_TI, 7},
};
extern MethodInfo m17008_MI;
extern TypeInfo t1208_TI;
extern MethodInfo m23216_MI;
static void* t2954_RGCTXData[3] = 
{
	&m17008_MI,
	&t1208_TI,
	&m23216_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2954_0_0_0;
extern Il2CppType t2954_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2954_TI;
extern Il2CppGenericClass t2954_GC;
extern TypeInfo t52_TI;
TypeInfo t2954_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2954_MIs, t2954_PIs, t2954_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2954_TI, t2954_ITIs, t2954_VT, &EmptyCustomAttributesCache, &t2954_TI, &t2954_0_0_0, &t2954_1_0_0, t2954_IOs, &t2954_GC, NULL, NULL, NULL, t2954_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2954)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
