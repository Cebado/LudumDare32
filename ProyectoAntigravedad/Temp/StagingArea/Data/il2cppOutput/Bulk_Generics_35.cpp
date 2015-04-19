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
extern TypeInfo t3879_TI;

#include "t725.h"

#include "t52.h"

// Metadata Definition System.Collections.Generic.IEnumerator`1<System.TypeCode>
extern MethodInfo m30661_MI;
static PropertyInfo t3879____Current_PropertyInfo = 
{
	&t3879_TI, "Current", &m30661_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3879_PIs[] =
{
	&t3879____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3879_TI;
extern Il2CppType t725_0_0_0;
extern void* RuntimeInvoker_t725 (MethodInfo* method, void* obj, void** args);
MethodInfo m30661_MI = 
{
	"get_Current", NULL, &t3879_TI, &t725_0_0_0, RuntimeInvoker_t725, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3879_MIs[] =
{
	&m30661_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3879_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3879_0_0_0;
extern Il2CppType t3879_1_0_0;
struct t3879;
extern TypeInfo t3879_TI;
extern Il2CppGenericClass t3879_GC;
TypeInfo t3879_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3879_MIs, t3879_PIs, NULL, NULL, NULL, NULL, NULL, &t3879_TI, t3879_ITIs, NULL, &EmptyCustomAttributesCache, &t3879_TI, &t3879_0_0_0, &t3879_1_0_0, NULL, &t3879_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2982.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2982_TI;
#include "t2982MD.h"

#include "t7.h"
#include "t60.h"
#include "t34.h"
#include "t1295.h"
#include "t53.h"
#include "t55.h"
extern TypeInfo t2982_TI;
extern TypeInfo t725_TI;
extern TypeInfo t1295_TI;
#include "t1295MD.h"
#include "t52MD.h"
extern MethodInfo m17140_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23348_MI;
struct t52;
#include "t88.h"
 int32_t m23348 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m23348_MI;


extern MethodInfo m17136_MI;
 void m17136 (t2982 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m17137_MI;
 t7 * m17137 (t2982 * __this, MethodInfo* method){
	{
		int32_t L_0 = m17140(__this, &m17140_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t725_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m17138_MI;
 void m17138 (t2982 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m17139_MI;
 bool m17139 (t2982 * __this, MethodInfo* method){
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
extern MethodInfo m17140_MI;
 int32_t m17140 (t2982 * __this, MethodInfo* method){
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
		int32_t L_8 = m23348(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m23348_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.TypeCode>
extern Il2CppType t52_0_0_1;
FieldInfo t2982_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2982_TI, offsetof(t2982, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2982_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2982_TI, offsetof(t2982, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2982_FIs[] =
{
	&t2982_f0_FieldInfo,
	&t2982_f1_FieldInfo,
	NULL
};
extern MethodInfo m17137_MI;
static PropertyInfo t2982____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2982_TI, "System.Collections.IEnumerator.Current", &m17137_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m17140_MI;
static PropertyInfo t2982____Current_PropertyInfo = 
{
	&t2982_TI, "Current", &m17140_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2982_PIs[] =
{
	&t2982____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2982____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2982_m17136_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2982_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m17136_MI = 
{
	".ctor", (methodPointerType)&m17136, &t2982_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2982_m17136_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2982_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m17137_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m17137, &t2982_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2982_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m17138_MI = 
{
	"Dispose", (methodPointerType)&m17138, &t2982_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2982_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m17139_MI = 
{
	"MoveNext", (methodPointerType)&m17139, &t2982_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2982_TI;
extern Il2CppType t725_0_0_0;
extern void* RuntimeInvoker_t725 (MethodInfo* method, void* obj, void** args);
MethodInfo m17140_MI = 
{
	"get_Current", (methodPointerType)&m17140, &t2982_TI, &t725_0_0_0, RuntimeInvoker_t725, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2982_MIs[] =
{
	&m17136_MI,
	&m17137_MI,
	&m17138_MI,
	&m17139_MI,
	&m17140_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m17137_MI;
extern MethodInfo m17139_MI;
extern MethodInfo m17138_MI;
extern MethodInfo m17140_MI;
static MethodInfo* t2982_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m17137_MI,
	&m17139_MI,
	&m17138_MI,
	&m17140_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3879_TI;
static TypeInfo* t2982_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3879_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3879_TI;
static Il2CppInterfaceOffsetPair t2982_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3879_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2982_0_0_0;
extern Il2CppType t2982_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2982_TI;
extern Il2CppGenericClass t2982_GC;
extern TypeInfo t52_TI;
TypeInfo t2982_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2982_MIs, t2982_PIs, t2982_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2982_TI, t2982_ITIs, t2982_VT, &EmptyCustomAttributesCache, &t2982_TI, &t2982_0_0_0, &t2982_1_0_0, t2982_IOs, &t2982_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2982)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5287_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.TypeCode>
extern MethodInfo m30662_MI;
static PropertyInfo t5287____Count_PropertyInfo = 
{
	&t5287_TI, "Count", &m30662_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30663_MI;
static PropertyInfo t5287____IsReadOnly_PropertyInfo = 
{
	&t5287_TI, "IsReadOnly", &m30663_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5287_PIs[] =
{
	&t5287____Count_PropertyInfo,
	&t5287____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5287_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30662_MI = 
{
	"get_Count", NULL, &t5287_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5287_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30663_MI = 
{
	"get_IsReadOnly", NULL, &t5287_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t725_0_0_0;
static ParameterInfo t5287_m30664_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t725_0_0_0},
};
extern TypeInfo t5287_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30664_MI = 
{
	"Add", NULL, &t5287_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5287_m30664_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5287_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30665_MI = 
{
	"Clear", NULL, &t5287_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t725_0_0_0;
static ParameterInfo t5287_m30666_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t725_0_0_0},
};
extern TypeInfo t5287_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30666_MI = 
{
	"Contains", NULL, &t5287_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5287_m30666_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3196_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5287_m30667_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3196_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5287_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30667_MI = 
{
	"CopyTo", NULL, &t5287_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5287_m30667_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t725_0_0_0;
static ParameterInfo t5287_m30668_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t725_0_0_0},
};
extern TypeInfo t5287_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30668_MI = 
{
	"Remove", NULL, &t5287_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5287_m30668_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5287_MIs[] =
{
	&m30662_MI,
	&m30663_MI,
	&m30664_MI,
	&m30665_MI,
	&m30666_MI,
	&m30667_MI,
	&m30668_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5289_TI;
static TypeInfo* t5287_ITIs[] = 
{
	&t618_TI,
	&t5289_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5287_0_0_0;
extern Il2CppType t5287_1_0_0;
struct t5287;
extern TypeInfo t5287_TI;
extern Il2CppGenericClass t5287_GC;
TypeInfo t5287_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5287_MIs, t5287_PIs, NULL, NULL, NULL, NULL, NULL, &t5287_TI, t5287_ITIs, NULL, &EmptyCustomAttributesCache, &t5287_TI, &t5287_0_0_0, &t5287_1_0_0, NULL, &t5287_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5289_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.TypeCode>
extern TypeInfo t5289_TI;
extern Il2CppType t3879_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30669_MI = 
{
	"GetEnumerator", NULL, &t5289_TI, &t3879_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5289_MIs[] =
{
	&m30669_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5289_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5289_0_0_0;
extern Il2CppType t5289_1_0_0;
struct t5289;
extern TypeInfo t5289_TI;
extern Il2CppGenericClass t5289_GC;
TypeInfo t5289_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5289_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5289_TI, t5289_ITIs, NULL, &EmptyCustomAttributesCache, &t5289_TI, &t5289_0_0_0, &t5289_1_0_0, NULL, &t5289_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5288_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.TypeCode>
extern MethodInfo m30670_MI;
extern MethodInfo m30671_MI;
static PropertyInfo t5288____Item_PropertyInfo = 
{
	&t5288_TI, "Item", &m30670_MI, &m30671_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5288_PIs[] =
{
	&t5288____Item_PropertyInfo,
	NULL
};
extern Il2CppType t725_0_0_0;
static ParameterInfo t5288_m30672_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t725_0_0_0},
};
extern TypeInfo t5288_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30672_MI = 
{
	"IndexOf", NULL, &t5288_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5288_m30672_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t725_0_0_0;
static ParameterInfo t5288_m30673_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t725_0_0_0},
};
extern TypeInfo t5288_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30673_MI = 
{
	"Insert", NULL, &t5288_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5288_m30673_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5288_m30674_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5288_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30674_MI = 
{
	"RemoveAt", NULL, &t5288_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5288_m30674_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5288_m30670_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5288_TI;
extern Il2CppType t725_0_0_0;
extern void* RuntimeInvoker_t725_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30670_MI = 
{
	"get_Item", NULL, &t5288_TI, &t725_0_0_0, RuntimeInvoker_t725_t60, t5288_m30670_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t725_0_0_0;
static ParameterInfo t5288_m30671_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t725_0_0_0},
};
extern TypeInfo t5288_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30671_MI = 
{
	"set_Item", NULL, &t5288_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5288_m30671_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5288_MIs[] =
{
	&m30672_MI,
	&m30673_MI,
	&m30674_MI,
	&m30670_MI,
	&m30671_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5287_TI;
extern TypeInfo t5289_TI;
static TypeInfo* t5288_ITIs[] = 
{
	&t618_TI,
	&t5287_TI,
	&t5289_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5288_0_0_0;
extern Il2CppType t5288_1_0_0;
struct t5288;
extern TypeInfo t5288_TI;
extern Il2CppGenericClass t5288_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5288_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5288_MIs, t5288_PIs, NULL, NULL, NULL, NULL, NULL, &t5288_TI, t5288_ITIs, NULL, &t1426__CustomAttributeCache, &t5288_TI, &t5288_0_0_0, &t5288_1_0_0, NULL, &t5288_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3880_TI;

#include "t1325.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo m30675_MI;
static PropertyInfo t3880____Current_PropertyInfo = 
{
	&t3880_TI, "Current", &m30675_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3880_PIs[] =
{
	&t3880____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3880_TI;
extern Il2CppType t1325_0_0_0;
extern void* RuntimeInvoker_t1325 (MethodInfo* method, void* obj, void** args);
MethodInfo m30675_MI = 
{
	"get_Current", NULL, &t3880_TI, &t1325_0_0_0, RuntimeInvoker_t1325, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3880_MIs[] =
{
	&m30675_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3880_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3880_0_0_0;
extern Il2CppType t3880_1_0_0;
struct t3880;
extern TypeInfo t3880_TI;
extern Il2CppGenericClass t3880_GC;
TypeInfo t3880_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3880_MIs, t3880_PIs, NULL, NULL, NULL, NULL, NULL, &t3880_TI, t3880_ITIs, NULL, &EmptyCustomAttributesCache, &t3880_TI, &t3880_0_0_0, &t3880_1_0_0, NULL, &t3880_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2983.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2983_TI;
#include "t2983MD.h"

extern TypeInfo t2983_TI;
extern TypeInfo t1325_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m17145_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23359_MI;
struct t52;
 uint8_t m23359 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m23359_MI;


extern MethodInfo m17141_MI;
 void m17141 (t2983 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m17142_MI;
 t7 * m17142 (t2983 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m17145(__this, &m17145_MI);
		uint8_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1325_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m17143_MI;
 void m17143 (t2983 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m17144_MI;
 bool m17144 (t2983 * __this, MethodInfo* method){
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
extern MethodInfo m17145_MI;
 uint8_t m17145 (t2983 * __this, MethodInfo* method){
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
		uint8_t L_8 = m23359(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m23359_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>
extern Il2CppType t52_0_0_1;
FieldInfo t2983_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2983_TI, offsetof(t2983, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2983_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2983_TI, offsetof(t2983, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2983_FIs[] =
{
	&t2983_f0_FieldInfo,
	&t2983_f1_FieldInfo,
	NULL
};
extern MethodInfo m17142_MI;
static PropertyInfo t2983____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2983_TI, "System.Collections.IEnumerator.Current", &m17142_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m17145_MI;
static PropertyInfo t2983____Current_PropertyInfo = 
{
	&t2983_TI, "Current", &m17145_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2983_PIs[] =
{
	&t2983____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2983____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2983_m17141_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2983_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m17141_MI = 
{
	".ctor", (methodPointerType)&m17141, &t2983_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2983_m17141_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2983_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m17142_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m17142, &t2983_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2983_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m17143_MI = 
{
	"Dispose", (methodPointerType)&m17143, &t2983_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2983_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m17144_MI = 
{
	"MoveNext", (methodPointerType)&m17144, &t2983_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2983_TI;
extern Il2CppType t1325_0_0_0;
extern void* RuntimeInvoker_t1325 (MethodInfo* method, void* obj, void** args);
MethodInfo m17145_MI = 
{
	"get_Current", (methodPointerType)&m17145, &t2983_TI, &t1325_0_0_0, RuntimeInvoker_t1325, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2983_MIs[] =
{
	&m17141_MI,
	&m17142_MI,
	&m17143_MI,
	&m17144_MI,
	&m17145_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m17142_MI;
extern MethodInfo m17144_MI;
extern MethodInfo m17143_MI;
extern MethodInfo m17145_MI;
static MethodInfo* t2983_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m17142_MI,
	&m17144_MI,
	&m17143_MI,
	&m17145_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3880_TI;
static TypeInfo* t2983_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3880_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3880_TI;
static Il2CppInterfaceOffsetPair t2983_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3880_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2983_0_0_0;
extern Il2CppType t2983_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2983_TI;
extern Il2CppGenericClass t2983_GC;
extern TypeInfo t52_TI;
TypeInfo t2983_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2983_MIs, t2983_PIs, t2983_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2983_TI, t2983_ITIs, t2983_VT, &EmptyCustomAttributesCache, &t2983_TI, &t2983_0_0_0, &t2983_1_0_0, t2983_IOs, &t2983_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2983)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5290_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo m30676_MI;
static PropertyInfo t5290____Count_PropertyInfo = 
{
	&t5290_TI, "Count", &m30676_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30677_MI;
static PropertyInfo t5290____IsReadOnly_PropertyInfo = 
{
	&t5290_TI, "IsReadOnly", &m30677_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5290_PIs[] =
{
	&t5290____Count_PropertyInfo,
	&t5290____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5290_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30676_MI = 
{
	"get_Count", NULL, &t5290_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5290_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30677_MI = 
{
	"get_IsReadOnly", NULL, &t5290_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1325_0_0_0;
static ParameterInfo t5290_m30678_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1325_0_0_0},
};
extern TypeInfo t5290_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30678_MI = 
{
	"Add", NULL, &t5290_TI, &t53_0_0_0, RuntimeInvoker_t53_t89, t5290_m30678_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5290_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30679_MI = 
{
	"Clear", NULL, &t5290_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1325_0_0_0;
static ParameterInfo t5290_m30680_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1325_0_0_0},
};
extern TypeInfo t5290_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30680_MI = 
{
	"Contains", NULL, &t5290_TI, &t55_0_0_0, RuntimeInvoker_t55_t89, t5290_m30680_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3197_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5290_m30681_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3197_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5290_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30681_MI = 
{
	"CopyTo", NULL, &t5290_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5290_m30681_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1325_0_0_0;
static ParameterInfo t5290_m30682_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1325_0_0_0},
};
extern TypeInfo t5290_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30682_MI = 
{
	"Remove", NULL, &t5290_TI, &t55_0_0_0, RuntimeInvoker_t55_t89, t5290_m30682_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5290_MIs[] =
{
	&m30676_MI,
	&m30677_MI,
	&m30678_MI,
	&m30679_MI,
	&m30680_MI,
	&m30681_MI,
	&m30682_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5292_TI;
static TypeInfo* t5290_ITIs[] = 
{
	&t618_TI,
	&t5292_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5290_0_0_0;
extern Il2CppType t5290_1_0_0;
struct t5290;
extern TypeInfo t5290_TI;
extern Il2CppGenericClass t5290_GC;
TypeInfo t5290_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5290_MIs, t5290_PIs, NULL, NULL, NULL, NULL, NULL, &t5290_TI, t5290_ITIs, NULL, &EmptyCustomAttributesCache, &t5290_TI, &t5290_0_0_0, &t5290_1_0_0, NULL, &t5290_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5292_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UnitySerializationHolder/UnityType>
extern TypeInfo t5292_TI;
extern Il2CppType t3880_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30683_MI = 
{
	"GetEnumerator", NULL, &t5292_TI, &t3880_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5292_MIs[] =
{
	&m30683_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5292_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5292_0_0_0;
extern Il2CppType t5292_1_0_0;
struct t5292;
extern TypeInfo t5292_TI;
extern Il2CppGenericClass t5292_GC;
TypeInfo t5292_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5292_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5292_TI, t5292_ITIs, NULL, &EmptyCustomAttributesCache, &t5292_TI, &t5292_0_0_0, &t5292_1_0_0, NULL, &t5292_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5291_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo m30684_MI;
extern MethodInfo m30685_MI;
static PropertyInfo t5291____Item_PropertyInfo = 
{
	&t5291_TI, "Item", &m30684_MI, &m30685_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5291_PIs[] =
{
	&t5291____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1325_0_0_0;
static ParameterInfo t5291_m30686_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1325_0_0_0},
};
extern TypeInfo t5291_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30686_MI = 
{
	"IndexOf", NULL, &t5291_TI, &t60_0_0_0, RuntimeInvoker_t60_t89, t5291_m30686_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1325_0_0_0;
static ParameterInfo t5291_m30687_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1325_0_0_0},
};
extern TypeInfo t5291_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30687_MI = 
{
	"Insert", NULL, &t5291_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t89, t5291_m30687_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5291_m30688_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5291_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30688_MI = 
{
	"RemoveAt", NULL, &t5291_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5291_m30688_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5291_m30684_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5291_TI;
extern Il2CppType t1325_0_0_0;
extern void* RuntimeInvoker_t1325_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30684_MI = 
{
	"get_Item", NULL, &t5291_TI, &t1325_0_0_0, RuntimeInvoker_t1325_t60, t5291_m30684_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1325_0_0_0;
static ParameterInfo t5291_m30685_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1325_0_0_0},
};
extern TypeInfo t5291_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30685_MI = 
{
	"set_Item", NULL, &t5291_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t89, t5291_m30685_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5291_MIs[] =
{
	&m30686_MI,
	&m30687_MI,
	&m30688_MI,
	&m30684_MI,
	&m30685_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5290_TI;
extern TypeInfo t5292_TI;
static TypeInfo* t5291_ITIs[] = 
{
	&t618_TI,
	&t5290_TI,
	&t5292_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5291_0_0_0;
extern Il2CppType t5291_1_0_0;
struct t5291;
extern TypeInfo t5291_TI;
extern Il2CppGenericClass t5291_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5291_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5291_MIs, t5291_PIs, NULL, NULL, NULL, NULL, NULL, &t5291_TI, t5291_ITIs, NULL, &t1426__CustomAttributeCache, &t5291_TI, &t5291_0_0_0, &t5291_1_0_0, NULL, &t5291_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1605_TI;

#include "t975.h"


// Metadata Definition System.IComparable`1<System.Version>
extern Il2CppType t975_0_0_0;
static ParameterInfo t1605_m30689_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t975_0_0_0},
};
extern TypeInfo t1605_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30689_MI = 
{
	"CompareTo", NULL, &t1605_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1605_m30689_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1605_MIs[] =
{
	&m30689_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1605_0_0_0;
extern Il2CppType t1605_1_0_0;
struct t1605;
extern TypeInfo t1605_TI;
extern Il2CppGenericClass t1605_GC;
TypeInfo t1605_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1605_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1605_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1605_TI, &t1605_0_0_0, &t1605_1_0_0, NULL, &t1605_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1606_TI;



// Metadata Definition System.IEquatable`1<System.Version>
extern Il2CppType t975_0_0_0;
static ParameterInfo t1606_m30690_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t975_0_0_0},
};
extern TypeInfo t1606_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30690_MI = 
{
	"Equals", NULL, &t1606_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t1606_m30690_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1606_MIs[] =
{
	&m30690_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1606_0_0_0;
extern Il2CppType t1606_1_0_0;
struct t1606;
extern TypeInfo t1606_TI;
extern Il2CppGenericClass t1606_GC;
TypeInfo t1606_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1606_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1606_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1606_TI, &t1606_0_0_0, &t1606_1_0_0, NULL, &t1606_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
