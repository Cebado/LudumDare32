#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1889.h"
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
extern TypeInfo t1889_TI;
#include "t1889MD.h"

#include "t7.h"
#include "t107.h"
#include "t60.h"
#include "t34.h"
#include "t1295.h"
#include "t53.h"
#include "t52.h"
#include "t55.h"
extern TypeInfo t1889_TI;
extern TypeInfo t107_TI;
extern TypeInfo t1295_TI;
#include "t1295MD.h"
#include "t52MD.h"
extern MethodInfo m10114_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18174_MI;
struct t52;
#include "t88.h"
 int32_t m18174 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18174_MI;


extern MethodInfo m10110_MI;
 void m10110 (t1889 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10111_MI;
 t7 * m10111 (t1889 * __this, MethodInfo* method){
	{
		int32_t L_0 = m10114(__this, &m10114_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t107_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10112_MI;
 void m10112 (t1889 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10113_MI;
 bool m10113 (t1889 * __this, MethodInfo* method){
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
extern MethodInfo m10114_MI;
 int32_t m10114 (t1889 * __this, MethodInfo* method){
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
		int32_t L_8 = m18174(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18174_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTriggerType>
extern Il2CppType t52_0_0_1;
FieldInfo t1889_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t1889_TI, offsetof(t1889, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t1889_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t1889_TI, offsetof(t1889, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t1889_FIs[] =
{
	&t1889_f0_FieldInfo,
	&t1889_f1_FieldInfo,
	NULL
};
extern MethodInfo m10111_MI;
static PropertyInfo t1889____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1889_TI, "System.Collections.IEnumerator.Current", &m10111_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10114_MI;
static PropertyInfo t1889____Current_PropertyInfo = 
{
	&t1889_TI, "Current", &m10114_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1889_PIs[] =
{
	&t1889____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1889____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t1889_m10110_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t1889_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10110_MI = 
{
	".ctor", (methodPointerType)&m10110, &t1889_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1889_m10110_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1889_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10111_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10111, &t1889_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1889_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10112_MI = 
{
	"Dispose", (methodPointerType)&m10112, &t1889_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1889_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10113_MI = 
{
	"MoveNext", (methodPointerType)&m10113, &t1889_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1889_TI;
extern Il2CppType t107_0_0_0;
extern void* RuntimeInvoker_t107 (MethodInfo* method, void* obj, void** args);
MethodInfo m10114_MI = 
{
	"get_Current", (methodPointerType)&m10114, &t1889_TI, &t107_0_0_0, RuntimeInvoker_t107, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1889_MIs[] =
{
	&m10110_MI,
	&m10111_MI,
	&m10112_MI,
	&m10113_MI,
	&m10114_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m10111_MI;
extern MethodInfo m10113_MI;
extern MethodInfo m10112_MI;
extern MethodInfo m10114_MI;
static MethodInfo* t1889_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m10111_MI,
	&m10113_MI,
	&m10112_MI,
	&m10114_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3454_TI;
static TypeInfo* t1889_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3454_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3454_TI;
static Il2CppInterfaceOffsetPair t1889_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3454_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1889_0_0_0;
extern Il2CppType t1889_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t1889_TI;
extern Il2CppGenericClass t1889_GC;
extern TypeInfo t52_TI;
TypeInfo t1889_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1889_MIs, t1889_PIs, t1889_FIs, NULL, &t159_TI, NULL, &t52_TI, &t1889_TI, t1889_ITIs, t1889_VT, &EmptyCustomAttributesCache, &t1889_TI, &t1889_0_0_0, &t1889_1_0_0, t1889_IOs, &t1889_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1889)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4072_TI;

#include "UnityEngine.UI_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTriggerType>
extern MethodInfo m24494_MI;
static PropertyInfo t4072____Count_PropertyInfo = 
{
	&t4072_TI, "Count", &m24494_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24495_MI;
static PropertyInfo t4072____IsReadOnly_PropertyInfo = 
{
	&t4072_TI, "IsReadOnly", &m24495_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4072_PIs[] =
{
	&t4072____Count_PropertyInfo,
	&t4072____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4072_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24494_MI = 
{
	"get_Count", NULL, &t4072_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4072_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m24495_MI = 
{
	"get_IsReadOnly", NULL, &t4072_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4072_m24496_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern TypeInfo t4072_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24496_MI = 
{
	"Add", NULL, &t4072_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4072_m24496_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4072_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m24497_MI = 
{
	"Clear", NULL, &t4072_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4072_m24498_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern TypeInfo t4072_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24498_MI = 
{
	"Contains", NULL, &t4072_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4072_m24498_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3292_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4072_m24499_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3292_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4072_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24499_MI = 
{
	"CopyTo", NULL, &t4072_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4072_m24499_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4072_m24500_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern TypeInfo t4072_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24500_MI = 
{
	"Remove", NULL, &t4072_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4072_m24500_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4072_MIs[] =
{
	&m24494_MI,
	&m24495_MI,
	&m24496_MI,
	&m24497_MI,
	&m24498_MI,
	&m24499_MI,
	&m24500_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4074_TI;
static TypeInfo* t4072_ITIs[] = 
{
	&t618_TI,
	&t4074_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4072_0_0_0;
extern Il2CppType t4072_1_0_0;
struct t4072;
extern TypeInfo t4072_TI;
extern Il2CppGenericClass t4072_GC;
TypeInfo t4072_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4072_MIs, t4072_PIs, NULL, NULL, NULL, NULL, NULL, &t4072_TI, t4072_ITIs, NULL, &EmptyCustomAttributesCache, &t4072_TI, &t4072_0_0_0, &t4072_1_0_0, NULL, &t4072_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4074_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.EventTriggerType>
extern TypeInfo t4074_TI;
extern Il2CppType t3454_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24501_MI = 
{
	"GetEnumerator", NULL, &t4074_TI, &t3454_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4074_MIs[] =
{
	&m24501_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4074_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4074_0_0_0;
extern Il2CppType t4074_1_0_0;
struct t4074;
extern TypeInfo t4074_TI;
extern Il2CppGenericClass t4074_GC;
TypeInfo t4074_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4074_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4074_TI, t4074_ITIs, NULL, &EmptyCustomAttributesCache, &t4074_TI, &t4074_0_0_0, &t4074_1_0_0, NULL, &t4074_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4073_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTriggerType>
extern MethodInfo m24502_MI;
extern MethodInfo m24503_MI;
static PropertyInfo t4073____Item_PropertyInfo = 
{
	&t4073_TI, "Item", &m24502_MI, &m24503_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4073_PIs[] =
{
	&t4073____Item_PropertyInfo,
	NULL
};
extern Il2CppType t107_0_0_0;
static ParameterInfo t4073_m24504_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern TypeInfo t4073_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24504_MI = 
{
	"IndexOf", NULL, &t4073_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4073_m24504_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t107_0_0_0;
static ParameterInfo t4073_m24505_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern TypeInfo t4073_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24505_MI = 
{
	"Insert", NULL, &t4073_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4073_m24505_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4073_m24506_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4073_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24506_MI = 
{
	"RemoveAt", NULL, &t4073_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4073_m24506_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4073_m24502_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4073_TI;
extern Il2CppType t107_0_0_0;
extern void* RuntimeInvoker_t107_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24502_MI = 
{
	"get_Item", NULL, &t4073_TI, &t107_0_0_0, RuntimeInvoker_t107_t60, t4073_m24502_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t107_0_0_0;
static ParameterInfo t4073_m24503_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t107_0_0_0},
};
extern TypeInfo t4073_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24503_MI = 
{
	"set_Item", NULL, &t4073_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4073_m24503_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4073_MIs[] =
{
	&m24504_MI,
	&m24505_MI,
	&m24506_MI,
	&m24502_MI,
	&m24503_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4072_TI;
extern TypeInfo t4074_TI;
static TypeInfo* t4073_ITIs[] = 
{
	&t618_TI,
	&t4072_TI,
	&t4074_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4073_0_0_0;
extern Il2CppType t4073_1_0_0;
struct t4073;
extern TypeInfo t4073_TI;
extern Il2CppGenericClass t4073_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4073_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4073_MIs, t4073_PIs, NULL, NULL, NULL, NULL, NULL, &t4073_TI, t4073_ITIs, NULL, &t1426__CustomAttributeCache, &t4073_TI, &t4073_0_0_0, &t4073_1_0_0, NULL, &t4073_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t116.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t116_TI;
#include "t116MD.h"

#include "t114.h"
#include "t98.h"
#include "t113.h"


// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t116_m1478_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t116_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m1478_MI = 
{
	".ctor", (methodPointerType)&m9206_gshared, &t116_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t116_m1478_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t136_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t116_m10115_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t136_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern TypeInfo t116_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10115_MI = 
{
	"Invoke", (methodPointerType)&m9208_gshared, &t116_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t116_m10115_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t136_0_0_0;
extern Il2CppType t98_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t116_m10116_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t136_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t116_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10116_MI = 
{
	"BeginInvoke", (methodPointerType)&m9210_gshared, &t116_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t116_m10116_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t116_m10117_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t116_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10117_MI = 
{
	"EndInvoke", (methodPointerType)&m9212_gshared, &t116_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t116_m10117_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t116_MIs[] =
{
	&m1478_MI,
	&m10115_MI,
	&m10116_MI,
	&m10117_MI,
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
extern MethodInfo m10115_MI;
extern MethodInfo m10116_MI;
extern MethodInfo m10117_MI;
static MethodInfo* t116_VT[] =
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
	&m10115_MI,
	&m10116_MI,
	&m10117_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t116_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t116_0_0_0;
extern Il2CppType t116_1_0_0;
extern TypeInfo t245_TI;
struct t116;
extern TypeInfo t116_TI;
extern Il2CppGenericClass t116_GC;
extern TypeInfo t115_TI;
TypeInfo t116_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t116_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t115_TI, &t116_TI, NULL, t116_VT, &EmptyCustomAttributesCache, &t116_TI, &t116_0_0_0, &t116_1_0_0, t116_IOs, &t116_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t116), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t117.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t117_TI;
#include "t117MD.h"



// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t117_m1479_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m1479_MI = 
{
	".ctor", (methodPointerType)&m9206_gshared, &t117_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t117_m1479_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t137_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t117_m10118_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t137_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10118_MI = 
{
	"Invoke", (methodPointerType)&m9208_gshared, &t117_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t117_m10118_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t137_0_0_0;
extern Il2CppType t98_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t117_m10119_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t137_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10119_MI = 
{
	"BeginInvoke", (methodPointerType)&m9210_gshared, &t117_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t117_m10119_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t117_m10120_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t117_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10120_MI = 
{
	"EndInvoke", (methodPointerType)&m9212_gshared, &t117_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t117_m10120_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t117_MIs[] =
{
	&m1479_MI,
	&m10118_MI,
	&m10119_MI,
	&m10120_MI,
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
extern MethodInfo m10118_MI;
extern MethodInfo m10119_MI;
extern MethodInfo m10120_MI;
static MethodInfo* t117_VT[] =
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
	&m10118_MI,
	&m10119_MI,
	&m10120_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t117_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t117_0_0_0;
extern Il2CppType t117_1_0_0;
extern TypeInfo t245_TI;
struct t117;
extern TypeInfo t117_TI;
extern Il2CppGenericClass t117_GC;
extern TypeInfo t115_TI;
TypeInfo t117_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t117_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t115_TI, &t117_TI, NULL, t117_VT, &EmptyCustomAttributesCache, &t117_TI, &t117_0_0_0, &t117_1_0_0, t117_IOs, &t117_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t117), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t118.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t118_TI;
#include "t118MD.h"



// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t118_m1480_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t118_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m1480_MI = 
{
	".ctor", (methodPointerType)&m9206_gshared, &t118_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t118_m1480_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t118_m10121_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern TypeInfo t118_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10121_MI = 
{
	"Invoke", (methodPointerType)&m9208_gshared, &t118_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t118_m10121_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t138_0_0_0;
extern Il2CppType t98_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t118_m10122_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t138_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t118_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10122_MI = 
{
	"BeginInvoke", (methodPointerType)&m9210_gshared, &t118_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t118_m10122_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t118_m10123_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t118_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10123_MI = 
{
	"EndInvoke", (methodPointerType)&m9212_gshared, &t118_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t118_m10123_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t118_MIs[] =
{
	&m1480_MI,
	&m10121_MI,
	&m10122_MI,
	&m10123_MI,
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
extern MethodInfo m10121_MI;
extern MethodInfo m10122_MI;
extern MethodInfo m10123_MI;
static MethodInfo* t118_VT[] =
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
	&m10121_MI,
	&m10122_MI,
	&m10123_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t118_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t118_0_0_0;
extern Il2CppType t118_1_0_0;
extern TypeInfo t245_TI;
struct t118;
extern TypeInfo t118_TI;
extern Il2CppGenericClass t118_GC;
extern TypeInfo t115_TI;
TypeInfo t118_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t118_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t115_TI, &t118_TI, NULL, t118_VT, &EmptyCustomAttributesCache, &t118_TI, &t118_0_0_0, &t118_1_0_0, t118_IOs, &t118_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t118), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t119.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t119_TI;
#include "t119MD.h"



// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t119_m1481_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t119_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m1481_MI = 
{
	".ctor", (methodPointerType)&m9206_gshared, &t119_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t119_m1481_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t139_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t119_m10124_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t139_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern TypeInfo t119_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10124_MI = 
{
	"Invoke", (methodPointerType)&m9208_gshared, &t119_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t119_m10124_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t139_0_0_0;
extern Il2CppType t98_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t119_m10125_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t139_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t119_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10125_MI = 
{
	"BeginInvoke", (methodPointerType)&m9210_gshared, &t119_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t119_m10125_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t119_m10126_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t119_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10126_MI = 
{
	"EndInvoke", (methodPointerType)&m9212_gshared, &t119_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t119_m10126_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t119_MIs[] =
{
	&m1481_MI,
	&m10124_MI,
	&m10125_MI,
	&m10126_MI,
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
extern MethodInfo m10124_MI;
extern MethodInfo m10125_MI;
extern MethodInfo m10126_MI;
static MethodInfo* t119_VT[] =
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
	&m10124_MI,
	&m10125_MI,
	&m10126_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t119_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t119_0_0_0;
extern Il2CppType t119_1_0_0;
extern TypeInfo t245_TI;
struct t119;
extern TypeInfo t119_TI;
extern Il2CppGenericClass t119_GC;
extern TypeInfo t115_TI;
TypeInfo t119_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t119_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t115_TI, &t119_TI, NULL, t119_VT, &EmptyCustomAttributesCache, &t119_TI, &t119_0_0_0, &t119_1_0_0, t119_IOs, &t119_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t119), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t120.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t120_TI;
#include "t120MD.h"



// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t120_m1482_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t120_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m1482_MI = 
{
	".ctor", (methodPointerType)&m9206_gshared, &t120_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t120_m1482_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t140_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t120_m10127_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t140_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern TypeInfo t120_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10127_MI = 
{
	"Invoke", (methodPointerType)&m9208_gshared, &t120_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t120_m10127_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t140_0_0_0;
extern Il2CppType t98_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t120_m10128_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t140_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t120_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10128_MI = 
{
	"BeginInvoke", (methodPointerType)&m9210_gshared, &t120_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t120_m10128_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t120_m10129_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t120_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10129_MI = 
{
	"EndInvoke", (methodPointerType)&m9212_gshared, &t120_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t120_m10129_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t120_MIs[] =
{
	&m1482_MI,
	&m10127_MI,
	&m10128_MI,
	&m10129_MI,
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
extern MethodInfo m10127_MI;
extern MethodInfo m10128_MI;
extern MethodInfo m10129_MI;
static MethodInfo* t120_VT[] =
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
	&m10127_MI,
	&m10128_MI,
	&m10129_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t120_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t120_0_0_0;
extern Il2CppType t120_1_0_0;
extern TypeInfo t245_TI;
struct t120;
extern TypeInfo t120_TI;
extern Il2CppGenericClass t120_GC;
extern TypeInfo t115_TI;
TypeInfo t120_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t120_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t115_TI, &t120_TI, NULL, t120_VT, &EmptyCustomAttributesCache, &t120_TI, &t120_0_0_0, &t120_1_0_0, t120_IOs, &t120_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t120), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t121.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t121_TI;
#include "t121MD.h"



// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t121_m1483_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t121_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m1483_MI = 
{
	".ctor", (methodPointerType)&m9206_gshared, &t121_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t121_m1483_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t141_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t121_m10130_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t141_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern TypeInfo t121_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10130_MI = 
{
	"Invoke", (methodPointerType)&m9208_gshared, &t121_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t121_m10130_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t141_0_0_0;
extern Il2CppType t98_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t121_m10131_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t141_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t121_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10131_MI = 
{
	"BeginInvoke", (methodPointerType)&m9210_gshared, &t121_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t121_m10131_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t121_m10132_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t121_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10132_MI = 
{
	"EndInvoke", (methodPointerType)&m9212_gshared, &t121_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t121_m10132_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t121_MIs[] =
{
	&m1483_MI,
	&m10130_MI,
	&m10131_MI,
	&m10132_MI,
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
extern MethodInfo m10130_MI;
extern MethodInfo m10131_MI;
extern MethodInfo m10132_MI;
static MethodInfo* t121_VT[] =
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
	&m10130_MI,
	&m10131_MI,
	&m10132_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t121_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t121_0_0_0;
extern Il2CppType t121_1_0_0;
extern TypeInfo t245_TI;
struct t121;
extern TypeInfo t121_TI;
extern Il2CppGenericClass t121_GC;
extern TypeInfo t115_TI;
TypeInfo t121_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t121_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t115_TI, &t121_TI, NULL, t121_VT, &EmptyCustomAttributesCache, &t121_TI, &t121_0_0_0, &t121_1_0_0, t121_IOs, &t121_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t121), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t122.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t122_TI;
#include "t122MD.h"



// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t122_m1484_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t122_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m1484_MI = 
{
	".ctor", (methodPointerType)&m9206_gshared, &t122_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t122_m1484_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t122_m10133_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern TypeInfo t122_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10133_MI = 
{
	"Invoke", (methodPointerType)&m9208_gshared, &t122_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t122_m10133_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t142_0_0_0;
extern Il2CppType t98_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t122_m10134_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t142_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t122_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10134_MI = 
{
	"BeginInvoke", (methodPointerType)&m9210_gshared, &t122_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t122_m10134_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t122_m10135_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t122_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10135_MI = 
{
	"EndInvoke", (methodPointerType)&m9212_gshared, &t122_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t122_m10135_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t122_MIs[] =
{
	&m1484_MI,
	&m10133_MI,
	&m10134_MI,
	&m10135_MI,
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
extern MethodInfo m10133_MI;
extern MethodInfo m10134_MI;
extern MethodInfo m10135_MI;
static MethodInfo* t122_VT[] =
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
	&m10133_MI,
	&m10134_MI,
	&m10135_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t122_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t122_0_0_0;
extern Il2CppType t122_1_0_0;
extern TypeInfo t245_TI;
struct t122;
extern TypeInfo t122_TI;
extern Il2CppGenericClass t122_GC;
extern TypeInfo t115_TI;
TypeInfo t122_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t122_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t115_TI, &t122_TI, NULL, t122_VT, &EmptyCustomAttributesCache, &t122_TI, &t122_0_0_0, &t122_1_0_0, t122_IOs, &t122_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t122), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t123.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t123_TI;
#include "t123MD.h"



// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t123_m1485_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t123_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m1485_MI = 
{
	".ctor", (methodPointerType)&m9206_gshared, &t123_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t123_m1485_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t143_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t123_m10136_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t143_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern TypeInfo t123_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10136_MI = 
{
	"Invoke", (methodPointerType)&m9208_gshared, &t123_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t123_m10136_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t143_0_0_0;
extern Il2CppType t98_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t123_m10137_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t143_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t123_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10137_MI = 
{
	"BeginInvoke", (methodPointerType)&m9210_gshared, &t123_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t123_m10137_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t123_m10138_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t123_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10138_MI = 
{
	"EndInvoke", (methodPointerType)&m9212_gshared, &t123_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t123_m10138_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t123_MIs[] =
{
	&m1485_MI,
	&m10136_MI,
	&m10137_MI,
	&m10138_MI,
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
extern MethodInfo m10136_MI;
extern MethodInfo m10137_MI;
extern MethodInfo m10138_MI;
static MethodInfo* t123_VT[] =
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
	&m10136_MI,
	&m10137_MI,
	&m10138_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t123_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t123_0_0_0;
extern Il2CppType t123_1_0_0;
extern TypeInfo t245_TI;
struct t123;
extern TypeInfo t123_TI;
extern Il2CppGenericClass t123_GC;
extern TypeInfo t115_TI;
TypeInfo t123_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t123_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t115_TI, &t123_TI, NULL, t123_VT, &EmptyCustomAttributesCache, &t123_TI, &t123_0_0_0, &t123_1_0_0, t123_IOs, &t123_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t123), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t124.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t124_TI;
#include "t124MD.h"



// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t124_m1486_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m1486_MI = 
{
	".ctor", (methodPointerType)&m9206_gshared, &t124_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t124_m1486_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t144_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t124_m10139_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t144_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern TypeInfo t124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10139_MI = 
{
	"Invoke", (methodPointerType)&m9208_gshared, &t124_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t124_m10139_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t144_0_0_0;
extern Il2CppType t98_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t124_m10140_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t144_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t124_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10140_MI = 
{
	"BeginInvoke", (methodPointerType)&m9210_gshared, &t124_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t124_m10140_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t124_m10141_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10141_MI = 
{
	"EndInvoke", (methodPointerType)&m9212_gshared, &t124_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t124_m10141_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t124_MIs[] =
{
	&m1486_MI,
	&m10139_MI,
	&m10140_MI,
	&m10141_MI,
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
extern MethodInfo m10139_MI;
extern MethodInfo m10140_MI;
extern MethodInfo m10141_MI;
static MethodInfo* t124_VT[] =
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
	&m10139_MI,
	&m10140_MI,
	&m10141_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t124_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_1_0_0;
extern TypeInfo t245_TI;
struct t124;
extern TypeInfo t124_TI;
extern Il2CppGenericClass t124_GC;
extern TypeInfo t115_TI;
TypeInfo t124_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t124_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t115_TI, &t124_TI, NULL, t124_VT, &EmptyCustomAttributesCache, &t124_TI, &t124_0_0_0, &t124_1_0_0, t124_IOs, &t124_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t124), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t125.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t125_TI;
#include "t125MD.h"



// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t125_m1487_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t125_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m1487_MI = 
{
	".ctor", (methodPointerType)&m9206_gshared, &t125_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t125_m1487_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t145_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t125_m10142_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t145_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern TypeInfo t125_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10142_MI = 
{
	"Invoke", (methodPointerType)&m9208_gshared, &t125_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t125_m10142_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t145_0_0_0;
extern Il2CppType t98_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t125_m10143_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t145_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t125_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10143_MI = 
{
	"BeginInvoke", (methodPointerType)&m9210_gshared, &t125_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t125_m10143_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t125_m10144_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t125_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10144_MI = 
{
	"EndInvoke", (methodPointerType)&m9212_gshared, &t125_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t125_m10144_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t125_MIs[] =
{
	&m1487_MI,
	&m10142_MI,
	&m10143_MI,
	&m10144_MI,
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
extern MethodInfo m10142_MI;
extern MethodInfo m10143_MI;
extern MethodInfo m10144_MI;
static MethodInfo* t125_VT[] =
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
	&m10142_MI,
	&m10143_MI,
	&m10144_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t125_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t125_0_0_0;
extern Il2CppType t125_1_0_0;
extern TypeInfo t245_TI;
struct t125;
extern TypeInfo t125_TI;
extern Il2CppGenericClass t125_GC;
extern TypeInfo t115_TI;
TypeInfo t125_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t125_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t115_TI, &t125_TI, NULL, t125_VT, &EmptyCustomAttributesCache, &t125_TI, &t125_0_0_0, &t125_1_0_0, t125_IOs, &t125_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t125), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t126.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t126_TI;
#include "t126MD.h"



// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t126_m1488_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t126_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m1488_MI = 
{
	".ctor", (methodPointerType)&m9206_gshared, &t126_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t126_m1488_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t146_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t126_m10145_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t146_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern TypeInfo t126_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10145_MI = 
{
	"Invoke", (methodPointerType)&m9208_gshared, &t126_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t126_m10145_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t146_0_0_0;
extern Il2CppType t98_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t126_m10146_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t146_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t126_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10146_MI = 
{
	"BeginInvoke", (methodPointerType)&m9210_gshared, &t126_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t126_m10146_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t126_m10147_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t126_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10147_MI = 
{
	"EndInvoke", (methodPointerType)&m9212_gshared, &t126_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t126_m10147_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t126_MIs[] =
{
	&m1488_MI,
	&m10145_MI,
	&m10146_MI,
	&m10147_MI,
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
extern MethodInfo m10145_MI;
extern MethodInfo m10146_MI;
extern MethodInfo m10147_MI;
static MethodInfo* t126_VT[] =
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
	&m10145_MI,
	&m10146_MI,
	&m10147_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t126_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t126_0_0_0;
extern Il2CppType t126_1_0_0;
extern TypeInfo t245_TI;
struct t126;
extern TypeInfo t126_TI;
extern Il2CppGenericClass t126_GC;
extern TypeInfo t115_TI;
TypeInfo t126_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t126_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t115_TI, &t126_TI, NULL, t126_VT, &EmptyCustomAttributesCache, &t126_TI, &t126_0_0_0, &t126_1_0_0, t126_IOs, &t126_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t126), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t127.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t127_TI;
#include "t127MD.h"



// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t127_m1489_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t127_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m1489_MI = 
{
	".ctor", (methodPointerType)&m9206_gshared, &t127_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t127_m1489_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t147_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t127_m10148_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t147_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern TypeInfo t127_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10148_MI = 
{
	"Invoke", (methodPointerType)&m9208_gshared, &t127_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t127_m10148_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t147_0_0_0;
extern Il2CppType t98_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t127_m10149_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t147_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t127_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10149_MI = 
{
	"BeginInvoke", (methodPointerType)&m9210_gshared, &t127_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t127_m10149_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t127_m10150_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t127_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10150_MI = 
{
	"EndInvoke", (methodPointerType)&m9212_gshared, &t127_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t127_m10150_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t127_MIs[] =
{
	&m1489_MI,
	&m10148_MI,
	&m10149_MI,
	&m10150_MI,
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
extern MethodInfo m10148_MI;
extern MethodInfo m10149_MI;
extern MethodInfo m10150_MI;
static MethodInfo* t127_VT[] =
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
	&m10148_MI,
	&m10149_MI,
	&m10150_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t127_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t127_0_0_0;
extern Il2CppType t127_1_0_0;
extern TypeInfo t245_TI;
struct t127;
extern TypeInfo t127_TI;
extern Il2CppGenericClass t127_GC;
extern TypeInfo t115_TI;
TypeInfo t127_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t127_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t115_TI, &t127_TI, NULL, t127_VT, &EmptyCustomAttributesCache, &t127_TI, &t127_0_0_0, &t127_1_0_0, t127_IOs, &t127_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t127), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t130.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t130_TI;
#include "t130MD.h"



// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t130_m1492_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t130_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m1492_MI = 
{
	".ctor", (methodPointerType)&m9206_gshared, &t130_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t130_m1492_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t150_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t130_m10151_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t150_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern TypeInfo t130_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10151_MI = 
{
	"Invoke", (methodPointerType)&m9208_gshared, &t130_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t130_m10151_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t150_0_0_0;
extern Il2CppType t98_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t130_m10152_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t150_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t130_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10152_MI = 
{
	"BeginInvoke", (methodPointerType)&m9210_gshared, &t130_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t130_m10152_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t130_m10153_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t130_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10153_MI = 
{
	"EndInvoke", (methodPointerType)&m9212_gshared, &t130_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t130_m10153_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t130_MIs[] =
{
	&m1492_MI,
	&m10151_MI,
	&m10152_MI,
	&m10153_MI,
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
extern MethodInfo m10151_MI;
extern MethodInfo m10152_MI;
extern MethodInfo m10153_MI;
static MethodInfo* t130_VT[] =
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
	&m10151_MI,
	&m10152_MI,
	&m10153_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t130_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t130_0_0_0;
extern Il2CppType t130_1_0_0;
extern TypeInfo t245_TI;
struct t130;
extern TypeInfo t130_TI;
extern Il2CppGenericClass t130_GC;
extern TypeInfo t115_TI;
TypeInfo t130_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t130_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t115_TI, &t130_TI, NULL, t130_VT, &EmptyCustomAttributesCache, &t130_TI, &t130_0_0_0, &t130_1_0_0, t130_IOs, &t130_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t130), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t131.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t131_TI;
#include "t131MD.h"



// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t131_m1493_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t131_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m1493_MI = 
{
	".ctor", (methodPointerType)&m9206_gshared, &t131_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t131_m1493_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t151_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t131_m10154_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t151_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern TypeInfo t131_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10154_MI = 
{
	"Invoke", (methodPointerType)&m9208_gshared, &t131_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t131_m10154_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t151_0_0_0;
extern Il2CppType t98_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t131_m10155_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t151_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t131_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10155_MI = 
{
	"BeginInvoke", (methodPointerType)&m9210_gshared, &t131_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t131_m10155_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t131_m10156_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t131_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10156_MI = 
{
	"EndInvoke", (methodPointerType)&m9212_gshared, &t131_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t131_m10156_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t131_MIs[] =
{
	&m1493_MI,
	&m10154_MI,
	&m10155_MI,
	&m10156_MI,
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
extern MethodInfo m10154_MI;
extern MethodInfo m10155_MI;
extern MethodInfo m10156_MI;
static MethodInfo* t131_VT[] =
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
	&m10154_MI,
	&m10155_MI,
	&m10156_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t131_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t131_0_0_0;
extern Il2CppType t131_1_0_0;
extern TypeInfo t245_TI;
struct t131;
extern TypeInfo t131_TI;
extern Il2CppGenericClass t131_GC;
extern TypeInfo t115_TI;
TypeInfo t131_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t131_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t115_TI, &t131_TI, NULL, t131_VT, &EmptyCustomAttributesCache, &t131_TI, &t131_0_0_0, &t131_1_0_0, t131_IOs, &t131_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t131), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t132.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t132_TI;
#include "t132MD.h"



// Metadata Definition UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t132_m1494_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t132_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m1494_MI = 
{
	".ctor", (methodPointerType)&m9206_gshared, &t132_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t132_m1494_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t152_0_0_0;
extern Il2CppType t98_0_0_0;
static ParameterInfo t132_m10157_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
};
extern TypeInfo t132_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10157_MI = 
{
	"Invoke", (methodPointerType)&m9208_gshared, &t132_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t132_m10157_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t152_0_0_0;
extern Il2CppType t98_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t132_m10158_ParameterInfos[] = 
{
	{"handler", 0, 134217728, &EmptyCustomAttributesCache, &t152_0_0_0},
	{"eventData", 1, 134217728, &EmptyCustomAttributesCache, &t98_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t132_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10158_MI = 
{
	"BeginInvoke", (methodPointerType)&m9210_gshared, &t132_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t132_m10158_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t132_m10159_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t132_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10159_MI = 
{
	"EndInvoke", (methodPointerType)&m9212_gshared, &t132_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t132_m10159_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t132_MIs[] =
{
	&m1494_MI,
	&m10157_MI,
	&m10158_MI,
	&m10159_MI,
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
extern MethodInfo m10157_MI;
extern MethodInfo m10158_MI;
extern MethodInfo m10159_MI;
static MethodInfo* t132_VT[] =
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
	&m10157_MI,
	&m10158_MI,
	&m10159_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t132_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t132_0_0_0;
extern Il2CppType t132_1_0_0;
extern TypeInfo t245_TI;
struct t132;
extern TypeInfo t132_TI;
extern Il2CppGenericClass t132_GC;
extern TypeInfo t115_TI;
TypeInfo t132_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "EventFunction`1", "", t132_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t115_TI, &t132_TI, NULL, t132_VT, &EmptyCustomAttributesCache, &t132_TI, &t132_0_0_0, &t132_1_0_0, t132_IOs, &t132_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t132), 0, -1, 0, 0, -1, 258, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t134.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t134_TI;
#include "t134MD.h"

#include "t2.h"
#include "t348.h"
#include "UnityEngine_ArrayTypes.h"
#include "t1896.h"
#include "t1893.h"
#include "t1894.h"
#include "t87.h"
#include "t1901.h"
#include "t1895.h"
extern TypeInfo t134_TI;
extern TypeInfo t2_TI;
extern TypeInfo t60_TI;
extern TypeInfo t53_TI;
extern TypeInfo t348_TI;
extern TypeInfo t601_TI;
extern TypeInfo t1294_TI;
extern TypeInfo t88_TI;
extern TypeInfo t1890_TI;
extern TypeInfo t1896_TI;
extern TypeInfo t55_TI;
extern TypeInfo t347_TI;
extern TypeInfo t1892_TI;
extern TypeInfo t1891_TI;
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t1893_TI;
extern TypeInfo t87_TI;
extern TypeInfo t1894_TI;
extern TypeInfo t1901_TI;
#include "t348MD.h"
#include "t88MD.h"
#include "t7MD.h"
#include "t617MD.h"
#include "t1893MD.h"
#include "t87MD.h"
#include "t1894MD.h"
#include "t1896MD.h"
#include "t1901MD.h"
extern MethodInfo m10206_MI;
extern MethodInfo m10207_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m216_MI;
extern MethodInfo m18196_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m10192_MI;
extern MethodInfo m116_MI;
extern MethodInfo m10189_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m10177_MI;
extern MethodInfo m10184_MI;
extern MethodInfo m10190_MI;
extern MethodInfo m10193_MI;
extern MethodInfo m10195_MI;
extern MethodInfo m10178_MI;
extern MethodInfo m10203_MI;
extern MethodInfo m7028_MI;
extern MethodInfo m10204_MI;
extern MethodInfo m24507_MI;
extern MethodInfo m24508_MI;
extern MethodInfo m24509_MI;
extern MethodInfo m24510_MI;
extern MethodInfo m7424_MI;
extern MethodInfo m202_MI;
extern MethodInfo m10194_MI;
extern MethodInfo m10179_MI;
extern MethodInfo m10180_MI;
extern MethodInfo m10219_MI;
extern MethodInfo m3874_MI;
extern MethodInfo m18198_MI;
extern MethodInfo m10187_MI;
extern MethodInfo m10188_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m10294_MI;
extern MethodInfo m10213_MI;
extern MethodInfo m10191_MI;
extern MethodInfo m10197_MI;
extern MethodInfo m3890_MI;
extern MethodInfo m10300_MI;
extern MethodInfo m18200_MI;
extern MethodInfo m18208_MI;
extern MethodInfo m3877_MI;
struct t52;
struct t52;
#include "mscorlib_ArrayTypes.h"
 void m17412_gshared (t7 * __this, t350** p0, int32_t p1, MethodInfo* method);
#define m17412(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
#define m18196(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
extern MethodInfo m18196_MI;
struct t52;
#include "t1899.h"
struct t52;
#include "t1511.h"
 int32_t m7824_gshared (t7 * __this, t350* p0, t7 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m7824(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m18198(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m18198_MI;
struct t52;
struct t52;
 void m17481_gshared (t7 * __this, t350* p0, int32_t p1, int32_t p2, t7* p3, MethodInfo* method);
#define m17481(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
#define m18200(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
extern MethodInfo m18200_MI;
struct t52;
#include "t86.h"
struct t52;
#include "t1679.h"
 void m17588_gshared (t7 * __this, t350* p0, int32_t p1, t1679 * p2, MethodInfo* method);
#define m17588(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
#define m18208(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
extern MethodInfo m18208_MI;


extern MethodInfo m10189_MI;
 t1896  m10189 (t134 * __this, MethodInfo* method){
	{
		t1896  L_0 = {0};
		m10213(&L_0, __this, &m10213_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.Transform>
extern Il2CppType t60_0_0_32849;
FieldInfo t134_f0_FieldInfo = 
{
	"DefaultCapacity", &t60_0_0_32849, &t134_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1890_0_0_1;
FieldInfo t134_f1_FieldInfo = 
{
	"_items", &t1890_0_0_1, &t134_TI, offsetof(t134, f1), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t134_f2_FieldInfo = 
{
	"_size", &t60_0_0_1, &t134_TI, offsetof(t134, f2), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t134_f3_FieldInfo = 
{
	"_version", &t60_0_0_1, &t134_TI, offsetof(t134, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1890_0_0_49;
FieldInfo t134_f4_FieldInfo = 
{
	"EmptyArray", &t1890_0_0_49, &t134_TI, offsetof(t134_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t134_FIs[] =
{
	&t134_f0_FieldInfo,
	&t134_f1_FieldInfo,
	&t134_f2_FieldInfo,
	&t134_f3_FieldInfo,
	&t134_f4_FieldInfo,
	NULL
};
static const int32_t t134_f0_DefaultValueData = 4;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t134_f0_DefaultValue = 
{
	&t134_f0_FieldInfo, { (char*)&t134_f0_DefaultValueData, &t60_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t134_FDVs[] = 
{
	&t134_f0_DefaultValue,
	NULL
};
extern MethodInfo m10170_MI;
static PropertyInfo t134____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t134_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10170_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10171_MI;
static PropertyInfo t134____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t134_TI, "System.Collections.ICollection.IsSynchronized", &m10171_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10172_MI;
static PropertyInfo t134____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t134_TI, "System.Collections.ICollection.SyncRoot", &m10172_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10173_MI;
static PropertyInfo t134____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t134_TI, "System.Collections.IList.IsFixedSize", &m10173_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10174_MI;
static PropertyInfo t134____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t134_TI, "System.Collections.IList.IsReadOnly", &m10174_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10175_MI;
extern MethodInfo m10176_MI;
static PropertyInfo t134____System_Collections_IList_Item_PropertyInfo = 
{
	&t134_TI, "System.Collections.IList.Item", &m10175_MI, &m10176_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10203_MI;
extern MethodInfo m10204_MI;
static PropertyInfo t134____Capacity_PropertyInfo = 
{
	&t134_TI, "Capacity", &m10203_MI, &m10204_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10205_MI;
static PropertyInfo t134____Count_PropertyInfo = 
{
	&t134_TI, "Count", &m10205_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10206_MI;
extern MethodInfo m10207_MI;
static PropertyInfo t134____Item_PropertyInfo = 
{
	&t134_TI, "Item", &m10206_MI, &m10207_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t134_PIs[] =
{
	&t134____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t134____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t134____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t134____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t134____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t134____System_Collections_IList_Item_PropertyInfo,
	&t134____Capacity_PropertyInfo,
	&t134____Count_PropertyInfo,
	&t134____Item_PropertyInfo,
	NULL
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10160_MI = 
{
	".ctor", (methodPointerType)&m8211_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t134_m1497_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m1497_MI = 
{
	".ctor", (methodPointerType)&m8213_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t134_m1497_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10161_MI = 
{
	".cctor", (methodPointerType)&m8215_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t134_TI;
extern Il2CppType t1891_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10162_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m8217_gshared, &t134_TI, &t1891_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t134_m10163_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10163_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8219_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t134_m10163_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t134_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10164_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8221_gshared, &t134_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t134_m10165_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10165_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8223_gshared, &t134_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t134_m10165_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t134_m10166_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10166_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8225_gshared, &t134_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t134_m10166_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t134_m10167_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10167_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8227_gshared, &t134_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t134_m10167_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t134_m10168_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10168_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8229_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t134_m10168_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t134_m10169_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10169_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8231_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t134_m10169_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t134_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10170_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8233_gshared, &t134_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t134_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10171_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8235_gshared, &t134_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t134_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10172_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8237_gshared, &t134_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t134_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10173_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8239_gshared, &t134_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t134_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10174_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8241_gshared, &t134_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t134_m10175_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10175_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8243_gshared, &t134_TI, &t7_0_0_0, RuntimeInvoker_t7_t60, t134_m10175_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t134_m10176_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10176_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8245_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t134_m10176_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t134_m10177_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10177_MI = 
{
	"Add", (methodPointerType)&m8247_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t134_m10177_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t134_m10178_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10178_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m8249_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t134_m10178_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t347_0_0_0;
static ParameterInfo t134_m10179_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t347_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10179_MI = 
{
	"AddCollection", (methodPointerType)&m8251_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t134_m10179_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1892_0_0_0;
static ParameterInfo t134_m10180_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t1892_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10180_MI = 
{
	"AddEnumerable", (methodPointerType)&m8253_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t134_m10180_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1892_0_0_0;
static ParameterInfo t134_m10181_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1892_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10181_MI = 
{
	"AddRange", (methodPointerType)&m8255_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t134_m10181_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t134_TI;
extern Il2CppType t1893_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10182_MI = 
{
	"AsReadOnly", (methodPointerType)&m8257_gshared, &t134_TI, &t1893_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10183_MI = 
{
	"Clear", (methodPointerType)&m8259_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t134_m10184_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10184_MI = 
{
	"Contains", (methodPointerType)&m8261_gshared, &t134_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t134_m10184_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1890_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t134_m10185_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1890_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10185_MI = 
{
	"CopyTo", (methodPointerType)&m8263_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t134_m10185_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1894_0_0_0;
static ParameterInfo t134_m10186_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1894_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10186_MI = 
{
	"Find", (methodPointerType)&m8265_gshared, &t134_TI, &t2_0_0_0, RuntimeInvoker_t7_t7, t134_m10186_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1894_0_0_0;
static ParameterInfo t134_m10187_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1894_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10187_MI = 
{
	"CheckMatch", (methodPointerType)&m8267_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t134_m10187_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t1894_0_0_0;
static ParameterInfo t134_m10188_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t1894_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10188_MI = 
{
	"GetIndex", (methodPointerType)&m8269_gshared, &t134_TI, &t60_0_0_0, RuntimeInvoker_t60_t60_t60_t7, t134_m10188_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t134_TI;
extern Il2CppType t1896_0_0_0;
extern void* RuntimeInvoker_t1896 (MethodInfo* method, void* obj, void** args);
MethodInfo m10189_MI = 
{
	"GetEnumerator", (methodPointerType)&m10189, &t134_TI, &t1896_0_0_0, RuntimeInvoker_t1896, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t134_m10190_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10190_MI = 
{
	"IndexOf", (methodPointerType)&m8272_gshared, &t134_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t134_m10190_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t134_m10191_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10191_MI = 
{
	"Shift", (methodPointerType)&m8274_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t134_m10191_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t134_m10192_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10192_MI = 
{
	"CheckIndex", (methodPointerType)&m8276_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t134_m10192_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t134_m10193_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10193_MI = 
{
	"Insert", (methodPointerType)&m8278_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t134_m10193_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1892_0_0_0;
static ParameterInfo t134_m10194_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1892_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10194_MI = 
{
	"CheckCollection", (methodPointerType)&m8280_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t134_m10194_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t134_m10195_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10195_MI = 
{
	"Remove", (methodPointerType)&m8282_gshared, &t134_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t134_m10195_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1894_0_0_0;
static ParameterInfo t134_m10196_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1894_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10196_MI = 
{
	"RemoveAll", (methodPointerType)&m8284_gshared, &t134_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t134_m10196_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t134_m10197_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10197_MI = 
{
	"RemoveAt", (methodPointerType)&m8286_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t134_m10197_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10198_MI = 
{
	"Reverse", (methodPointerType)&m8288_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10199_MI = 
{
	"Sort", (methodPointerType)&m8290_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1895_0_0_0;
static ParameterInfo t134_m10200_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t1895_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10200_MI = 
{
	"Sort", (methodPointerType)&m8292_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t134_m10200_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t134_TI;
extern Il2CppType t1890_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10201_MI = 
{
	"ToArray", (methodPointerType)&m8294_gshared, &t134_TI, &t1890_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10202_MI = 
{
	"TrimExcess", (methodPointerType)&m8296_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t134_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10203_MI = 
{
	"get_Capacity", (methodPointerType)&m8298_gshared, &t134_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t134_m10204_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10204_MI = 
{
	"set_Capacity", (methodPointerType)&m8300_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t134_m10204_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t134_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10205_MI = 
{
	"get_Count", (methodPointerType)&m8301_gshared, &t134_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t134_m10206_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10206_MI = 
{
	"get_Item", (methodPointerType)&m8302_gshared, &t134_TI, &t2_0_0_0, RuntimeInvoker_t7_t60, t134_m10206_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t134_m10207_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10207_MI = 
{
	"set_Item", (methodPointerType)&m8304_gshared, &t134_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t134_m10207_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t134_MIs[] =
{
	&m10160_MI,
	&m1497_MI,
	&m10161_MI,
	&m10162_MI,
	&m10163_MI,
	&m10164_MI,
	&m10165_MI,
	&m10166_MI,
	&m10167_MI,
	&m10168_MI,
	&m10169_MI,
	&m10170_MI,
	&m10171_MI,
	&m10172_MI,
	&m10173_MI,
	&m10174_MI,
	&m10175_MI,
	&m10176_MI,
	&m10177_MI,
	&m10178_MI,
	&m10179_MI,
	&m10180_MI,
	&m10181_MI,
	&m10182_MI,
	&m10183_MI,
	&m10184_MI,
	&m10185_MI,
	&m10186_MI,
	&m10187_MI,
	&m10188_MI,
	&m10189_MI,
	&m10190_MI,
	&m10191_MI,
	&m10192_MI,
	&m10193_MI,
	&m10194_MI,
	&m10195_MI,
	&m10196_MI,
	&m10197_MI,
	&m10198_MI,
	&m10199_MI,
	&m10200_MI,
	&m10201_MI,
	&m10202_MI,
	&m10203_MI,
	&m10204_MI,
	&m10205_MI,
	&m10206_MI,
	&m10207_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m10164_MI;
extern MethodInfo m10205_MI;
extern MethodInfo m10171_MI;
extern MethodInfo m10172_MI;
extern MethodInfo m10163_MI;
extern MethodInfo m10173_MI;
extern MethodInfo m10174_MI;
extern MethodInfo m10175_MI;
extern MethodInfo m10176_MI;
extern MethodInfo m10165_MI;
extern MethodInfo m10183_MI;
extern MethodInfo m10166_MI;
extern MethodInfo m10167_MI;
extern MethodInfo m10168_MI;
extern MethodInfo m10169_MI;
extern MethodInfo m10197_MI;
extern MethodInfo m10205_MI;
extern MethodInfo m10170_MI;
extern MethodInfo m10177_MI;
extern MethodInfo m10183_MI;
extern MethodInfo m10184_MI;
extern MethodInfo m10185_MI;
extern MethodInfo m10195_MI;
extern MethodInfo m10162_MI;
extern MethodInfo m10190_MI;
extern MethodInfo m10193_MI;
extern MethodInfo m10197_MI;
extern MethodInfo m10206_MI;
extern MethodInfo m10207_MI;
static MethodInfo* t134_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m10164_MI,
	&m10205_MI,
	&m10171_MI,
	&m10172_MI,
	&m10163_MI,
	&m10173_MI,
	&m10174_MI,
	&m10175_MI,
	&m10176_MI,
	&m10165_MI,
	&m10183_MI,
	&m10166_MI,
	&m10167_MI,
	&m10168_MI,
	&m10169_MI,
	&m10197_MI,
	&m10205_MI,
	&m10170_MI,
	&m10177_MI,
	&m10183_MI,
	&m10184_MI,
	&m10185_MI,
	&m10195_MI,
	&m10162_MI,
	&m10190_MI,
	&m10193_MI,
	&m10197_MI,
	&m10206_MI,
	&m10207_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t347_TI;
extern TypeInfo t1892_TI;
extern TypeInfo t153_TI;
static TypeInfo* t134_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t1041_TI,
	&t347_TI,
	&t1892_TI,
	&t153_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t347_TI;
extern TypeInfo t1892_TI;
extern TypeInfo t153_TI;
static Il2CppInterfaceOffsetPair t134_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t1041_TI, 9},
	{ &t347_TI, 20},
	{ &t1892_TI, 27},
	{ &t153_TI, 28},
};
extern TypeInfo t134_TI;
extern TypeInfo t1890_TI;
extern MethodInfo m10189_MI;
extern TypeInfo t1896_TI;
extern TypeInfo t2_TI;
extern MethodInfo m10177_MI;
extern MethodInfo m10184_MI;
extern MethodInfo m10190_MI;
extern MethodInfo m10192_MI;
extern MethodInfo m10193_MI;
extern MethodInfo m10195_MI;
extern MethodInfo m10206_MI;
extern MethodInfo m10207_MI;
extern MethodInfo m10178_MI;
extern MethodInfo m10203_MI;
extern MethodInfo m10204_MI;
extern MethodInfo m24507_MI;
extern MethodInfo m24508_MI;
extern MethodInfo m24509_MI;
extern MethodInfo m24510_MI;
extern MethodInfo m10194_MI;
extern TypeInfo t347_TI;
extern MethodInfo m10179_MI;
extern MethodInfo m10180_MI;
extern TypeInfo t1893_TI;
extern MethodInfo m10219_MI;
extern MethodInfo m18198_MI;
extern MethodInfo m10187_MI;
extern MethodInfo m10188_MI;
extern MethodInfo m10294_MI;
extern MethodInfo m10213_MI;
extern MethodInfo m10191_MI;
extern MethodInfo m10197_MI;
extern MethodInfo m10300_MI;
extern MethodInfo m18200_MI;
extern MethodInfo m18208_MI;
extern MethodInfo m18196_MI;
static void* t134_RGCTXData[37] = 
{
	&t134_TI,
	&t1890_TI,
	&m10189_MI,
	&t1896_TI,
	&t2_TI,
	&m10177_MI,
	&m10184_MI,
	&m10190_MI,
	&m10192_MI,
	&m10193_MI,
	&m10195_MI,
	&m10206_MI,
	&m10207_MI,
	&m10178_MI,
	&m10203_MI,
	&m10204_MI,
	&m24507_MI,
	&m24508_MI,
	&m24509_MI,
	&m24510_MI,
	&m10194_MI,
	&t347_TI,
	&m10179_MI,
	&m10180_MI,
	&t1893_TI,
	&m10219_MI,
	&m18198_MI,
	&m10187_MI,
	&m10188_MI,
	&m10294_MI,
	&m10213_MI,
	&m10191_MI,
	&m10197_MI,
	&m10300_MI,
	&m18200_MI,
	&m18208_MI,
	&m18196_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t134_0_0_0;
extern Il2CppType t134_1_0_0;
extern TypeInfo t7_TI;
struct t134;
extern TypeInfo t134_TI;
extern Il2CppGenericClass t134_GC;
extern CustomAttributesCache t866__CustomAttributeCache;
TypeInfo t134_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t134_MIs, t134_PIs, t134_FIs, NULL, &t7_TI, NULL, NULL, &t134_TI, t134_ITIs, t134_VT, &t866__CustomAttributeCache, &t134_TI, &t134_0_0_0, &t134_1_0_0, t134_IOs, &t134_GC, NULL, t134_FDVs, NULL, t134_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t134), 0, -1, sizeof(t134_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t347_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Transform>
extern MethodInfo m24507_MI;
static PropertyInfo t347____Count_PropertyInfo = 
{
	&t347_TI, "Count", &m24507_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24511_MI;
static PropertyInfo t347____IsReadOnly_PropertyInfo = 
{
	&t347_TI, "IsReadOnly", &m24511_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t347_PIs[] =
{
	&t347____Count_PropertyInfo,
	&t347____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t347_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24507_MI = 
{
	"get_Count", NULL, &t347_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t347_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m24511_MI = 
{
	"get_IsReadOnly", NULL, &t347_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t347_m1501_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t347_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m1501_MI = 
{
	"Add", NULL, &t347_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t347_m1501_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t347_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m1500_MI = 
{
	"Clear", NULL, &t347_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t347_m24512_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t347_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24512_MI = 
{
	"Contains", NULL, &t347_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t347_m24512_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1890_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t347_m24508_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1890_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t347_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24508_MI = 
{
	"CopyTo", NULL, &t347_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t347_m24508_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t347_m24513_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t347_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24513_MI = 
{
	"Remove", NULL, &t347_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t347_m24513_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t347_MIs[] =
{
	&m24507_MI,
	&m24511_MI,
	&m1501_MI,
	&m1500_MI,
	&m24512_MI,
	&m24508_MI,
	&m24513_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t1892_TI;
static TypeInfo* t347_ITIs[] = 
{
	&t618_TI,
	&t1892_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t347_0_0_0;
extern Il2CppType t347_1_0_0;
struct t347;
extern TypeInfo t347_TI;
extern Il2CppGenericClass t347_GC;
TypeInfo t347_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t347_MIs, t347_PIs, NULL, NULL, NULL, NULL, NULL, &t347_TI, t347_ITIs, NULL, &EmptyCustomAttributesCache, &t347_TI, &t347_0_0_0, &t347_1_0_0, NULL, &t347_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1892_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
extern TypeInfo t1892_TI;
extern Il2CppType t1891_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24509_MI = 
{
	"GetEnumerator", NULL, &t1892_TI, &t1891_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1892_MIs[] =
{
	&m24509_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t1892_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1892_0_0_0;
extern Il2CppType t1892_1_0_0;
struct t1892;
extern TypeInfo t1892_TI;
extern Il2CppGenericClass t1892_GC;
TypeInfo t1892_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t1892_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1892_TI, t1892_ITIs, NULL, &EmptyCustomAttributesCache, &t1892_TI, &t1892_0_0_0, &t1892_1_0_0, NULL, &t1892_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1891_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>
extern MethodInfo m24510_MI;
static PropertyInfo t1891____Current_PropertyInfo = 
{
	&t1891_TI, "Current", &m24510_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1891_PIs[] =
{
	&t1891____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1891_TI;
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24510_MI = 
{
	"get_Current", NULL, &t1891_TI, &t2_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1891_MIs[] =
{
	&m24510_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t1891_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1891_0_0_0;
extern Il2CppType t1891_1_0_0;
struct t1891;
extern TypeInfo t1891_TI;
extern Il2CppGenericClass t1891_GC;
TypeInfo t1891_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1891_MIs, t1891_PIs, NULL, NULL, NULL, NULL, NULL, &t1891_TI, t1891_ITIs, NULL, &EmptyCustomAttributesCache, &t1891_TI, &t1891_0_0_0, &t1891_1_0_0, NULL, &t1891_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1897.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1897_TI;
#include "t1897MD.h"

extern TypeInfo t1897_TI;
extern TypeInfo t2_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m10212_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18185_MI;
struct t52;
struct t52;
 t7 * m17147_gshared (t52 * __this, int32_t p0, MethodInfo* method);
#define m17147(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
#define m18185(__this, p0, method) (t2 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m18185_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Transform>
extern Il2CppType t52_0_0_1;
FieldInfo t1897_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t1897_TI, offsetof(t1897, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t1897_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t1897_TI, offsetof(t1897, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t1897_FIs[] =
{
	&t1897_f0_FieldInfo,
	&t1897_f1_FieldInfo,
	NULL
};
extern MethodInfo m10209_MI;
static PropertyInfo t1897____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1897_TI, "System.Collections.IEnumerator.Current", &m10209_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10212_MI;
static PropertyInfo t1897____Current_PropertyInfo = 
{
	&t1897_TI, "Current", &m10212_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1897_PIs[] =
{
	&t1897____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1897____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t1897_m10208_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t1897_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10208_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t1897_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1897_m10208_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1897_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10209_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t1897_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1897_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10210_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t1897_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1897_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10211_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t1897_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1897_TI;
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10212_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t1897_TI, &t2_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1897_MIs[] =
{
	&m10208_MI,
	&m10209_MI,
	&m10210_MI,
	&m10211_MI,
	&m10212_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m10209_MI;
extern MethodInfo m10211_MI;
extern MethodInfo m10210_MI;
extern MethodInfo m10212_MI;
static MethodInfo* t1897_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m10209_MI,
	&m10211_MI,
	&m10210_MI,
	&m10212_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t1891_TI;
static TypeInfo* t1897_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t1891_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t1891_TI;
static Il2CppInterfaceOffsetPair t1897_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t1891_TI, 7},
};
extern MethodInfo m10212_MI;
extern TypeInfo t2_TI;
extern MethodInfo m18185_MI;
static void* t1897_RGCTXData[3] = 
{
	&m10212_MI,
	&t2_TI,
	&m18185_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1897_0_0_0;
extern Il2CppType t1897_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t1897_TI;
extern Il2CppGenericClass t1897_GC;
extern TypeInfo t52_TI;
TypeInfo t1897_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1897_MIs, t1897_PIs, t1897_FIs, NULL, &t159_TI, NULL, &t52_TI, &t1897_TI, t1897_ITIs, t1897_VT, &EmptyCustomAttributesCache, &t1897_TI, &t1897_0_0_0, &t1897_1_0_0, t1897_IOs, &t1897_GC, NULL, NULL, NULL, t1897_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1897)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t153_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Transform>
extern MethodInfo m24514_MI;
extern MethodInfo m24515_MI;
static PropertyInfo t153____Item_PropertyInfo = 
{
	&t153_TI, "Item", &m24514_MI, &m24515_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t153_PIs[] =
{
	&t153____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2_0_0_0;
static ParameterInfo t153_m24516_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t153_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24516_MI = 
{
	"IndexOf", NULL, &t153_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t153_m24516_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t153_m24517_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t153_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24517_MI = 
{
	"Insert", NULL, &t153_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t153_m24517_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t153_m24518_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t153_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24518_MI = 
{
	"RemoveAt", NULL, &t153_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t153_m24518_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t153_m24514_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t153_TI;
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24514_MI = 
{
	"get_Item", NULL, &t153_TI, &t2_0_0_0, RuntimeInvoker_t7_t60, t153_m24514_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t153_m24515_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t153_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24515_MI = 
{
	"set_Item", NULL, &t153_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t153_m24515_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t153_MIs[] =
{
	&m24516_MI,
	&m24517_MI,
	&m24518_MI,
	&m24514_MI,
	&m24515_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t347_TI;
extern TypeInfo t1892_TI;
static TypeInfo* t153_ITIs[] = 
{
	&t618_TI,
	&t347_TI,
	&t1892_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t153_0_0_0;
extern Il2CppType t153_1_0_0;
struct t153;
extern TypeInfo t153_TI;
extern Il2CppGenericClass t153_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t153_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t153_MIs, t153_PIs, NULL, NULL, NULL, NULL, NULL, &t153_TI, t153_ITIs, NULL, &t1426__CustomAttributeCache, &t153_TI, &t153_0_0_0, &t153_1_0_0, NULL, &t153_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1896_TI;

#include "t70.h"
#include "t1312.h"
extern TypeInfo t1896_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t2_TI;
extern TypeInfo t134_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1312_TI;
#include "t70MD.h"
#include "t1312MD.h"
extern MethodInfo m10216_MI;
extern MethodInfo m7022_MI;
extern MethodInfo m1555_MI;
extern MethodInfo m3114_MI;
extern MethodInfo m7227_MI;
extern MethodInfo m7023_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>
extern Il2CppType t134_0_0_1;
FieldInfo t1896_f0_FieldInfo = 
{
	"l", &t134_0_0_1, &t1896_TI, offsetof(t1896, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t1896_f1_FieldInfo = 
{
	"next", &t60_0_0_1, &t1896_TI, offsetof(t1896, f1) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t1896_f2_FieldInfo = 
{
	"ver", &t60_0_0_1, &t1896_TI, offsetof(t1896, f2) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t1896_f3_FieldInfo = 
{
	"current", &t2_0_0_1, &t1896_TI, offsetof(t1896, f3) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t1896_FIs[] =
{
	&t1896_f0_FieldInfo,
	&t1896_f1_FieldInfo,
	&t1896_f2_FieldInfo,
	&t1896_f3_FieldInfo,
	NULL
};
extern MethodInfo m10214_MI;
static PropertyInfo t1896____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1896_TI, "System.Collections.IEnumerator.Current", &m10214_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10218_MI;
static PropertyInfo t1896____Current_PropertyInfo = 
{
	&t1896_TI, "Current", &m10218_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1896_PIs[] =
{
	&t1896____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1896____Current_PropertyInfo,
	NULL
};
extern Il2CppType t134_0_0_0;
static ParameterInfo t1896_m10213_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t134_0_0_0},
};
extern TypeInfo t1896_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10213_MI = 
{
	".ctor", (methodPointerType)&m8306_gshared, &t1896_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1896_m10213_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10214_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8307_gshared, &t1896_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10215_MI = 
{
	"Dispose", (methodPointerType)&m8308_gshared, &t1896_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10216_MI = 
{
	"VerifyState", (methodPointerType)&m8309_gshared, &t1896_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10217_MI = 
{
	"MoveNext", (methodPointerType)&m8310_gshared, &t1896_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1896_TI;
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10218_MI = 
{
	"get_Current", (methodPointerType)&m8311_gshared, &t1896_TI, &t2_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1896_MIs[] =
{
	&m10213_MI,
	&m10214_MI,
	&m10215_MI,
	&m10216_MI,
	&m10217_MI,
	&m10218_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m10214_MI;
extern MethodInfo m10217_MI;
extern MethodInfo m10215_MI;
extern MethodInfo m10218_MI;
static MethodInfo* t1896_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m10214_MI,
	&m10217_MI,
	&m10215_MI,
	&m10218_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t1891_TI;
static TypeInfo* t1896_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t1891_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t1891_TI;
static Il2CppInterfaceOffsetPair t1896_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t1891_TI, 7},
};
extern MethodInfo m10216_MI;
extern TypeInfo t2_TI;
extern TypeInfo t1896_TI;
static void* t1896_RGCTXData[3] = 
{
	&m10216_MI,
	&t2_TI,
	&t1896_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1896_0_0_0;
extern Il2CppType t1896_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t1896_TI;
extern Il2CppGenericClass t1896_GC;
extern TypeInfo t866_TI;
TypeInfo t1896_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1896_MIs, t1896_PIs, t1896_FIs, NULL, &t159_TI, NULL, &t866_TI, &t1896_TI, t1896_ITIs, t1896_VT, &EmptyCustomAttributesCache, &t1896_TI, &t1896_0_0_0, &t1896_1_0_0, t1896_IOs, &t1896_GC, NULL, NULL, NULL, t1896_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1896)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1893_TI;

#include "t62.h"
extern TypeInfo t1893_TI;
extern TypeInfo t2_TI;
extern TypeInfo t60_TI;
extern TypeInfo t62_TI;
extern TypeInfo t153_TI;
extern TypeInfo t347_TI;
extern TypeInfo t87_TI;
extern TypeInfo t669_TI;
extern TypeInfo t53_TI;
extern TypeInfo t52_TI;
extern TypeInfo t618_TI;
extern TypeInfo t12_TI;
extern TypeInfo t55_TI;
extern TypeInfo t1890_TI;
extern TypeInfo t1892_TI;
extern TypeInfo t1891_TI;
#include "t62MD.h"
#include "t1898MD.h"
extern MethodInfo m10248_MI;
extern MethodInfo m120_MI;
extern MethodInfo m24514_MI;
extern MethodInfo m24507_MI;
extern MethodInfo m116_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m7516_MI;
extern MethodInfo m7425_MI;
extern MethodInfo m10280_MI;
extern MethodInfo m24512_MI;
extern MethodInfo m24516_MI;
extern MethodInfo m24508_MI;
extern MethodInfo m24509_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Transform>
extern Il2CppType t153_0_0_1;
FieldInfo t1893_f0_FieldInfo = 
{
	"list", &t153_0_0_1, &t1893_TI, offsetof(t1893, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1893_FIs[] =
{
	&t1893_f0_FieldInfo,
	NULL
};
extern MethodInfo m10225_MI;
extern MethodInfo m10226_MI;
static PropertyInfo t1893____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t1893_TI, "System.Collections.Generic.IList<T>.Item", &m10225_MI, &m10226_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10227_MI;
static PropertyInfo t1893____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1893_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10227_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10237_MI;
static PropertyInfo t1893____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1893_TI, "System.Collections.ICollection.IsSynchronized", &m10237_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10238_MI;
static PropertyInfo t1893____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1893_TI, "System.Collections.ICollection.SyncRoot", &m10238_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10239_MI;
static PropertyInfo t1893____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1893_TI, "System.Collections.IList.IsFixedSize", &m10239_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10240_MI;
static PropertyInfo t1893____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1893_TI, "System.Collections.IList.IsReadOnly", &m10240_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10241_MI;
extern MethodInfo m10242_MI;
static PropertyInfo t1893____System_Collections_IList_Item_PropertyInfo = 
{
	&t1893_TI, "System.Collections.IList.Item", &m10241_MI, &m10242_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10247_MI;
static PropertyInfo t1893____Count_PropertyInfo = 
{
	&t1893_TI, "Count", &m10247_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10248_MI;
static PropertyInfo t1893____Item_PropertyInfo = 
{
	&t1893_TI, "Item", &m10248_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1893_PIs[] =
{
	&t1893____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t1893____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1893____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1893____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1893____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1893____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1893____System_Collections_IList_Item_PropertyInfo,
	&t1893____Count_PropertyInfo,
	&t1893____Item_PropertyInfo,
	NULL
};
extern Il2CppType t153_0_0_0;
static ParameterInfo t1893_m10219_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t153_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10219_MI = 
{
	".ctor", (methodPointerType)&m8312_gshared, &t1893_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1893_m10219_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1893_m10220_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10220_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m8313_gshared, &t1893_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1893_m10220_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1893_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10221_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m8314_gshared, &t1893_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1893_m10222_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10222_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m8315_gshared, &t1893_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t1893_m10222_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1893_m10223_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10223_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m8316_gshared, &t1893_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t1893_m10223_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1893_m10224_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10224_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m8317_gshared, &t1893_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t1893_m10224_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1893_m10225_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10225_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8318_gshared, &t1893_TI, &t2_0_0_0, RuntimeInvoker_t7_t60, t1893_m10225_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1893_m10226_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10226_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8319_gshared, &t1893_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t1893_m10226_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1893_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10227_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8320_gshared, &t1893_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1893_m10228_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10228_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8321_gshared, &t1893_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t1893_m10228_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1893_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10229_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8322_gshared, &t1893_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t1893_m10230_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10230_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8323_gshared, &t1893_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1893_m10230_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1893_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10231_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8324_gshared, &t1893_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t1893_m10232_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10232_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8325_gshared, &t1893_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t1893_m10232_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t1893_m10233_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10233_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8326_gshared, &t1893_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1893_m10233_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t1893_m10234_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10234_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8327_gshared, &t1893_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t1893_m10234_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t1893_m10235_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10235_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8328_gshared, &t1893_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1893_m10235_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1893_m10236_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10236_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8329_gshared, &t1893_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t1893_m10236_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1893_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10237_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8330_gshared, &t1893_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1893_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10238_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8331_gshared, &t1893_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1893_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10239_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8332_gshared, &t1893_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1893_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10240_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8333_gshared, &t1893_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1893_m10241_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10241_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8334_gshared, &t1893_TI, &t7_0_0_0, RuntimeInvoker_t7_t60, t1893_m10241_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t1893_m10242_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10242_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8335_gshared, &t1893_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t1893_m10242_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1893_m10243_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10243_MI = 
{
	"Contains", (methodPointerType)&m8336_gshared, &t1893_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t1893_m10243_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1890_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1893_m10244_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1890_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10244_MI = 
{
	"CopyTo", (methodPointerType)&m8337_gshared, &t1893_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t1893_m10244_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1893_TI;
extern Il2CppType t1891_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10245_MI = 
{
	"GetEnumerator", (methodPointerType)&m8338_gshared, &t1893_TI, &t1891_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1893_m10246_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10246_MI = 
{
	"IndexOf", (methodPointerType)&m8339_gshared, &t1893_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1893_m10246_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1893_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10247_MI = 
{
	"get_Count", (methodPointerType)&m8340_gshared, &t1893_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1893_m10248_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1893_TI;
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10248_MI = 
{
	"get_Item", (methodPointerType)&m8341_gshared, &t1893_TI, &t2_0_0_0, RuntimeInvoker_t7_t60, t1893_m10248_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1893_MIs[] =
{
	&m10219_MI,
	&m10220_MI,
	&m10221_MI,
	&m10222_MI,
	&m10223_MI,
	&m10224_MI,
	&m10225_MI,
	&m10226_MI,
	&m10227_MI,
	&m10228_MI,
	&m10229_MI,
	&m10230_MI,
	&m10231_MI,
	&m10232_MI,
	&m10233_MI,
	&m10234_MI,
	&m10235_MI,
	&m10236_MI,
	&m10237_MI,
	&m10238_MI,
	&m10239_MI,
	&m10240_MI,
	&m10241_MI,
	&m10242_MI,
	&m10243_MI,
	&m10244_MI,
	&m10245_MI,
	&m10246_MI,
	&m10247_MI,
	&m10248_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m10229_MI;
extern MethodInfo m10247_MI;
extern MethodInfo m10237_MI;
extern MethodInfo m10238_MI;
extern MethodInfo m10228_MI;
extern MethodInfo m10239_MI;
extern MethodInfo m10240_MI;
extern MethodInfo m10241_MI;
extern MethodInfo m10242_MI;
extern MethodInfo m10230_MI;
extern MethodInfo m10231_MI;
extern MethodInfo m10232_MI;
extern MethodInfo m10233_MI;
extern MethodInfo m10234_MI;
extern MethodInfo m10235_MI;
extern MethodInfo m10236_MI;
extern MethodInfo m10247_MI;
extern MethodInfo m10227_MI;
extern MethodInfo m10220_MI;
extern MethodInfo m10221_MI;
extern MethodInfo m10243_MI;
extern MethodInfo m10244_MI;
extern MethodInfo m10223_MI;
extern MethodInfo m10246_MI;
extern MethodInfo m10222_MI;
extern MethodInfo m10224_MI;
extern MethodInfo m10225_MI;
extern MethodInfo m10226_MI;
extern MethodInfo m10245_MI;
extern MethodInfo m10248_MI;
static MethodInfo* t1893_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m10229_MI,
	&m10247_MI,
	&m10237_MI,
	&m10238_MI,
	&m10228_MI,
	&m10239_MI,
	&m10240_MI,
	&m10241_MI,
	&m10242_MI,
	&m10230_MI,
	&m10231_MI,
	&m10232_MI,
	&m10233_MI,
	&m10234_MI,
	&m10235_MI,
	&m10236_MI,
	&m10247_MI,
	&m10227_MI,
	&m10220_MI,
	&m10221_MI,
	&m10243_MI,
	&m10244_MI,
	&m10223_MI,
	&m10246_MI,
	&m10222_MI,
	&m10224_MI,
	&m10225_MI,
	&m10226_MI,
	&m10245_MI,
	&m10248_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t347_TI;
extern TypeInfo t153_TI;
extern TypeInfo t1892_TI;
static TypeInfo* t1893_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t1041_TI,
	&t347_TI,
	&t153_TI,
	&t1892_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t347_TI;
extern TypeInfo t153_TI;
extern TypeInfo t1892_TI;
static Il2CppInterfaceOffsetPair t1893_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t1041_TI, 9},
	{ &t347_TI, 20},
	{ &t153_TI, 27},
	{ &t1892_TI, 32},
};
extern MethodInfo m10248_MI;
extern MethodInfo m10280_MI;
extern TypeInfo t2_TI;
extern MethodInfo m24512_MI;
extern MethodInfo m24516_MI;
extern MethodInfo m24514_MI;
extern MethodInfo m24508_MI;
extern MethodInfo m24509_MI;
extern MethodInfo m24507_MI;
static void* t1893_RGCTXData[9] = 
{
	&m10248_MI,
	&m10280_MI,
	&t2_TI,
	&m24512_MI,
	&m24516_MI,
	&m24514_MI,
	&m24508_MI,
	&m24509_MI,
	&m24507_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1893_0_0_0;
extern Il2CppType t1893_1_0_0;
extern TypeInfo t7_TI;
struct t1893;
extern TypeInfo t1893_TI;
extern Il2CppGenericClass t1893_GC;
extern CustomAttributesCache t868__CustomAttributeCache;
TypeInfo t1893_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t1893_MIs, t1893_PIs, t1893_FIs, NULL, &t7_TI, NULL, NULL, &t1893_TI, t1893_ITIs, t1893_VT, &t868__CustomAttributeCache, &t1893_TI, &t1893_0_0_0, &t1893_1_0_0, t1893_IOs, &t1893_GC, NULL, NULL, NULL, t1893_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1893), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t1898.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1898_TI;

#include "t71.h"
extern TypeInfo t1898_TI;
extern TypeInfo t347_TI;
extern TypeInfo t55_TI;
extern TypeInfo t153_TI;
extern TypeInfo t2_TI;
extern TypeInfo t60_TI;
extern TypeInfo t53_TI;
extern TypeInfo t134_TI;
extern TypeInfo t669_TI;
extern TypeInfo t7_TI;
extern TypeInfo t52_TI;
extern TypeInfo t1892_TI;
extern TypeInfo t1891_TI;
extern TypeInfo t1890_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern TypeInfo t62_TI;
extern TypeInfo t1041_TI;
extern Il2CppType t2_0_0_0;
extern MethodInfo m24511_MI;
extern MethodInfo m10283_MI;
extern MethodInfo m10284_MI;
extern MethodInfo m24514_MI;
extern MethodInfo m10281_MI;
extern MethodInfo m10279_MI;
extern MethodInfo m24507_MI;
extern MethodInfo m116_MI;
extern MethodInfo m10160_MI;
extern MethodInfo m7515_MI;
extern MethodInfo m7516_MI;
extern MethodInfo m24509_MI;
extern MethodInfo m10272_MI;
extern MethodInfo m10280_MI;
extern MethodInfo m24512_MI;
extern MethodInfo m24516_MI;
extern MethodInfo m10282_MI;
extern MethodInfo m10270_MI;
extern MethodInfo m10275_MI;
extern MethodInfo m10266_MI;
extern MethodInfo m1500_MI;
extern MethodInfo m24508_MI;
extern MethodInfo m24517_MI;
extern MethodInfo m24518_MI;
extern MethodInfo m24515_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3933_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m120_MI;
extern MethodInfo m7514_MI;
extern MethodInfo m7517_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>
extern Il2CppType t153_0_0_1;
FieldInfo t1898_f0_FieldInfo = 
{
	"list", &t153_0_0_1, &t1898_TI, offsetof(t1898, f0), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_1;
FieldInfo t1898_f1_FieldInfo = 
{
	"syncRoot", &t7_0_0_1, &t1898_TI, offsetof(t1898, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1898_FIs[] =
{
	&t1898_f0_FieldInfo,
	&t1898_f1_FieldInfo,
	NULL
};
extern MethodInfo m10250_MI;
static PropertyInfo t1898____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1898_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10250_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10258_MI;
static PropertyInfo t1898____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1898_TI, "System.Collections.ICollection.IsSynchronized", &m10258_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10259_MI;
static PropertyInfo t1898____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1898_TI, "System.Collections.ICollection.SyncRoot", &m10259_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10260_MI;
static PropertyInfo t1898____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1898_TI, "System.Collections.IList.IsFixedSize", &m10260_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10261_MI;
static PropertyInfo t1898____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1898_TI, "System.Collections.IList.IsReadOnly", &m10261_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10262_MI;
extern MethodInfo m10263_MI;
static PropertyInfo t1898____System_Collections_IList_Item_PropertyInfo = 
{
	&t1898_TI, "System.Collections.IList.Item", &m10262_MI, &m10263_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10276_MI;
static PropertyInfo t1898____Count_PropertyInfo = 
{
	&t1898_TI, "Count", &m10276_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10277_MI;
extern MethodInfo m10278_MI;
static PropertyInfo t1898____Item_PropertyInfo = 
{
	&t1898_TI, "Item", &m10277_MI, &m10278_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1898_PIs[] =
{
	&t1898____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1898____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1898____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1898____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1898____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1898____System_Collections_IList_Item_PropertyInfo,
	&t1898____Count_PropertyInfo,
	&t1898____Item_PropertyInfo,
	NULL
};
extern TypeInfo t1898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10249_MI = 
{
	".ctor", (methodPointerType)&m8342_gshared, &t1898_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1898_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10250_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8343_gshared, &t1898_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1898_m10251_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10251_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8344_gshared, &t1898_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t1898_m10251_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1898_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10252_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8345_gshared, &t1898_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t1898_m10253_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10253_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8346_gshared, &t1898_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1898_m10253_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t1898_m10254_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10254_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8347_gshared, &t1898_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t1898_m10254_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t1898_m10255_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10255_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8348_gshared, &t1898_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1898_m10255_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t1898_m10256_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10256_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8349_gshared, &t1898_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t1898_m10256_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t1898_m10257_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10257_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8350_gshared, &t1898_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1898_m10257_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1898_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10258_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8351_gshared, &t1898_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1898_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10259_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8352_gshared, &t1898_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1898_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10260_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8353_gshared, &t1898_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1898_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10261_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8354_gshared, &t1898_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1898_m10262_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10262_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8355_gshared, &t1898_TI, &t7_0_0_0, RuntimeInvoker_t7_t60, t1898_m10262_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t1898_m10263_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10263_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8356_gshared, &t1898_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t1898_m10263_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1898_m10264_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10264_MI = 
{
	"Add", (methodPointerType)&m8357_gshared, &t1898_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1898_m10264_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10265_MI = 
{
	"Clear", (methodPointerType)&m8358_gshared, &t1898_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10266_MI = 
{
	"ClearItems", (methodPointerType)&m8359_gshared, &t1898_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1898_m10267_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10267_MI = 
{
	"Contains", (methodPointerType)&m8360_gshared, &t1898_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t1898_m10267_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1890_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1898_m10268_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1890_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10268_MI = 
{
	"CopyTo", (methodPointerType)&m8361_gshared, &t1898_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t1898_m10268_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1898_TI;
extern Il2CppType t1891_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10269_MI = 
{
	"GetEnumerator", (methodPointerType)&m8362_gshared, &t1898_TI, &t1891_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1898_m10270_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10270_MI = 
{
	"IndexOf", (methodPointerType)&m8363_gshared, &t1898_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1898_m10270_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1898_m10271_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10271_MI = 
{
	"Insert", (methodPointerType)&m8364_gshared, &t1898_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t1898_m10271_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1898_m10272_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10272_MI = 
{
	"InsertItem", (methodPointerType)&m8365_gshared, &t1898_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t1898_m10272_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1898_m10273_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10273_MI = 
{
	"Remove", (methodPointerType)&m8366_gshared, &t1898_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t1898_m10273_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1898_m10274_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10274_MI = 
{
	"RemoveAt", (methodPointerType)&m8367_gshared, &t1898_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t1898_m10274_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1898_m10275_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10275_MI = 
{
	"RemoveItem", (methodPointerType)&m8368_gshared, &t1898_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t1898_m10275_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1898_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10276_MI = 
{
	"get_Count", (methodPointerType)&m8369_gshared, &t1898_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1898_m10277_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10277_MI = 
{
	"get_Item", (methodPointerType)&m8370_gshared, &t1898_TI, &t2_0_0_0, RuntimeInvoker_t7_t60, t1898_m10277_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1898_m10278_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10278_MI = 
{
	"set_Item", (methodPointerType)&m8371_gshared, &t1898_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t1898_m10278_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1898_m10279_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10279_MI = 
{
	"SetItem", (methodPointerType)&m8372_gshared, &t1898_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t1898_m10279_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t1898_m10280_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10280_MI = 
{
	"IsValidItem", (methodPointerType)&m8373_gshared, &t1898_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t1898_m10280_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t1898_m10281_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t2_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10281_MI = 
{
	"ConvertItem", (methodPointerType)&m8374_gshared, &t1898_TI, &t2_0_0_0, RuntimeInvoker_t7_t7, t1898_m10281_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t153_0_0_0;
static ParameterInfo t1898_m10282_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t153_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10282_MI = 
{
	"CheckWritable", (methodPointerType)&m8375_gshared, &t1898_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1898_m10282_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t153_0_0_0;
static ParameterInfo t1898_m10283_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t153_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10283_MI = 
{
	"IsSynchronized", (methodPointerType)&m8376_gshared, &t1898_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t1898_m10283_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t153_0_0_0;
static ParameterInfo t1898_m10284_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t153_0_0_0},
};
extern TypeInfo t1898_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10284_MI = 
{
	"IsFixedSize", (methodPointerType)&m8377_gshared, &t1898_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t1898_m10284_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1898_MIs[] =
{
	&m10249_MI,
	&m10250_MI,
	&m10251_MI,
	&m10252_MI,
	&m10253_MI,
	&m10254_MI,
	&m10255_MI,
	&m10256_MI,
	&m10257_MI,
	&m10258_MI,
	&m10259_MI,
	&m10260_MI,
	&m10261_MI,
	&m10262_MI,
	&m10263_MI,
	&m10264_MI,
	&m10265_MI,
	&m10266_MI,
	&m10267_MI,
	&m10268_MI,
	&m10269_MI,
	&m10270_MI,
	&m10271_MI,
	&m10272_MI,
	&m10273_MI,
	&m10274_MI,
	&m10275_MI,
	&m10276_MI,
	&m10277_MI,
	&m10278_MI,
	&m10279_MI,
	&m10280_MI,
	&m10281_MI,
	&m10282_MI,
	&m10283_MI,
	&m10284_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m10252_MI;
extern MethodInfo m10276_MI;
extern MethodInfo m10258_MI;
extern MethodInfo m10259_MI;
extern MethodInfo m10251_MI;
extern MethodInfo m10260_MI;
extern MethodInfo m10261_MI;
extern MethodInfo m10262_MI;
extern MethodInfo m10263_MI;
extern MethodInfo m10253_MI;
extern MethodInfo m10265_MI;
extern MethodInfo m10254_MI;
extern MethodInfo m10255_MI;
extern MethodInfo m10256_MI;
extern MethodInfo m10257_MI;
extern MethodInfo m10274_MI;
extern MethodInfo m10276_MI;
extern MethodInfo m10250_MI;
extern MethodInfo m10264_MI;
extern MethodInfo m10265_MI;
extern MethodInfo m10267_MI;
extern MethodInfo m10268_MI;
extern MethodInfo m10273_MI;
extern MethodInfo m10270_MI;
extern MethodInfo m10271_MI;
extern MethodInfo m10274_MI;
extern MethodInfo m10277_MI;
extern MethodInfo m10278_MI;
extern MethodInfo m10269_MI;
extern MethodInfo m10266_MI;
extern MethodInfo m10272_MI;
extern MethodInfo m10275_MI;
extern MethodInfo m10279_MI;
static MethodInfo* t1898_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m10252_MI,
	&m10276_MI,
	&m10258_MI,
	&m10259_MI,
	&m10251_MI,
	&m10260_MI,
	&m10261_MI,
	&m10262_MI,
	&m10263_MI,
	&m10253_MI,
	&m10265_MI,
	&m10254_MI,
	&m10255_MI,
	&m10256_MI,
	&m10257_MI,
	&m10274_MI,
	&m10276_MI,
	&m10250_MI,
	&m10264_MI,
	&m10265_MI,
	&m10267_MI,
	&m10268_MI,
	&m10273_MI,
	&m10270_MI,
	&m10271_MI,
	&m10274_MI,
	&m10277_MI,
	&m10278_MI,
	&m10269_MI,
	&m10266_MI,
	&m10272_MI,
	&m10275_MI,
	&m10279_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t347_TI;
extern TypeInfo t153_TI;
extern TypeInfo t1892_TI;
static TypeInfo* t1898_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t1041_TI,
	&t347_TI,
	&t153_TI,
	&t1892_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t347_TI;
extern TypeInfo t153_TI;
extern TypeInfo t1892_TI;
static Il2CppInterfaceOffsetPair t1898_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t1041_TI, 9},
	{ &t347_TI, 20},
	{ &t153_TI, 27},
	{ &t1892_TI, 32},
};
extern TypeInfo t134_TI;
extern MethodInfo m10160_MI;
extern MethodInfo m24511_MI;
extern MethodInfo m24509_MI;
extern MethodInfo m24507_MI;
extern MethodInfo m10281_MI;
extern MethodInfo m10272_MI;
extern MethodInfo m10280_MI;
extern TypeInfo t2_TI;
extern MethodInfo m24512_MI;
extern MethodInfo m24516_MI;
extern MethodInfo m10282_MI;
extern MethodInfo m10270_MI;
extern MethodInfo m10275_MI;
extern MethodInfo m10283_MI;
extern MethodInfo m10284_MI;
extern MethodInfo m24514_MI;
extern MethodInfo m10279_MI;
extern MethodInfo m10266_MI;
extern MethodInfo m1500_MI;
extern MethodInfo m24508_MI;
extern MethodInfo m24517_MI;
extern MethodInfo m24518_MI;
extern MethodInfo m24515_MI;
extern Il2CppType t2_0_0_0;
static void* t1898_RGCTXData[25] = 
{
	&t134_TI,
	&m10160_MI,
	&m24511_MI,
	&m24509_MI,
	&m24507_MI,
	&m10281_MI,
	&m10272_MI,
	&m10280_MI,
	&t2_TI,
	&m24512_MI,
	&m24516_MI,
	&m10282_MI,
	&m10270_MI,
	&m10275_MI,
	&m10283_MI,
	&m10284_MI,
	&m24514_MI,
	&m10279_MI,
	&m10266_MI,
	&m1500_MI,
	&m24508_MI,
	&m24517_MI,
	&m24518_MI,
	&m24515_MI,
	(void*)&t2_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1898_0_0_0;
extern Il2CppType t1898_1_0_0;
extern TypeInfo t7_TI;
struct t1898;
extern TypeInfo t1898_TI;
extern Il2CppGenericClass t1898_GC;
extern CustomAttributesCache t867__CustomAttributeCache;
TypeInfo t1898_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t1898_MIs, t1898_PIs, t1898_FIs, NULL, &t7_TI, NULL, NULL, &t1898_TI, t1898_ITIs, t1898_VT, &t867__CustomAttributeCache, &t1898_TI, &t1898_0_0_0, &t1898_1_0_0, t1898_IOs, &t1898_GC, NULL, NULL, NULL, t1898_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1898), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1899_TI;
#include "t1899MD.h"

#include "t863.h"
#include "t1900.h"
extern TypeInfo t1899_TI;
extern TypeInfo t5314_TI;
extern TypeInfo t70_TI;
extern TypeInfo t2_TI;
extern TypeInfo t55_TI;
extern TypeInfo t863_TI;
extern TypeInfo t553_TI;
extern TypeInfo t1900_TI;
extern TypeInfo t60_TI;
#include "t1249MD.h"
#include "t1900MD.h"
extern Il2CppType t5314_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t863_0_0_0;
extern MethodInfo m116_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3097_MI;
extern MethodInfo m3095_MI;
extern MethodInfo m6560_MI;
extern MethodInfo m10290_MI;
extern MethodInfo m24519_MI;
extern MethodInfo m18197_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.Transform>
extern Il2CppType t1899_0_0_49;
FieldInfo t1899_f0_FieldInfo = 
{
	"_default", &t1899_0_0_49, &t1899_TI, offsetof(t1899_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1899_FIs[] =
{
	&t1899_f0_FieldInfo,
	NULL
};
extern MethodInfo m10289_MI;
static PropertyInfo t1899____Default_PropertyInfo = 
{
	&t1899_TI, "Default", &m10289_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1899_PIs[] =
{
	&t1899____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1899_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10285_MI = 
{
	".ctor", (methodPointerType)&m8378_gshared, &t1899_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1899_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10286_MI = 
{
	".cctor", (methodPointerType)&m8379_gshared, &t1899_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t1899_m10287_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1899_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10287_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8380_gshared, &t1899_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1899_m10287_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t1899_m10288_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1899_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10288_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8381_gshared, &t1899_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t1899_m10288_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1899_m24519_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1899_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24519_MI = 
{
	"GetHashCode", NULL, &t1899_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1899_m24519_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1899_m18197_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1899_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m18197_MI = 
{
	"Equals", NULL, &t1899_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t1899_m18197_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1899_TI;
extern Il2CppType t1899_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10289_MI = 
{
	"get_Default", (methodPointerType)&m8382_gshared, &t1899_TI, &t1899_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1899_MIs[] =
{
	&m10285_MI,
	&m10286_MI,
	&m10287_MI,
	&m10288_MI,
	&m24519_MI,
	&m18197_MI,
	&m10289_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m18197_MI;
extern MethodInfo m24519_MI;
extern MethodInfo m10288_MI;
extern MethodInfo m10287_MI;
static MethodInfo* t1899_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m18197_MI,
	&m24519_MI,
	&m10288_MI,
	&m10287_MI,
	NULL,
	NULL,
};
extern TypeInfo t5315_TI;
extern TypeInfo t886_TI;
static TypeInfo* t1899_ITIs[] = 
{
	&t5315_TI,
	&t886_TI,
};
extern TypeInfo t5315_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t1899_IOs[] = 
{
	{ &t5315_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t5314_0_0_0;
extern Il2CppType t2_0_0_0;
extern TypeInfo t1899_TI;
extern TypeInfo t1899_TI;
extern TypeInfo t1900_TI;
extern MethodInfo m10290_MI;
extern TypeInfo t2_TI;
extern MethodInfo m24519_MI;
extern MethodInfo m18197_MI;
static void* t1899_RGCTXData[9] = 
{
	(void*)&t5314_0_0_0,
	(void*)&t2_0_0_0,
	&t1899_TI,
	&t1899_TI,
	&t1900_TI,
	&m10290_MI,
	&t2_TI,
	&m24519_MI,
	&m18197_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1899_0_0_0;
extern Il2CppType t1899_1_0_0;
extern TypeInfo t7_TI;
struct t1899;
extern TypeInfo t1899_TI;
extern Il2CppGenericClass t1899_GC;
TypeInfo t1899_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t1899_MIs, t1899_PIs, t1899_FIs, NULL, &t7_TI, NULL, NULL, &t1899_TI, t1899_ITIs, t1899_VT, &EmptyCustomAttributesCache, &t1899_TI, &t1899_0_0_0, &t1899_1_0_0, t1899_IOs, &t1899_GC, NULL, NULL, NULL, t1899_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1899), 0, -1, sizeof(t1899_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5315_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.Transform>
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t5315_m24520_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t5315_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24520_MI = 
{
	"Equals", NULL, &t5315_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t5315_m24520_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t5315_m24521_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t5315_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24521_MI = 
{
	"GetHashCode", NULL, &t5315_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5315_m24521_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5315_MIs[] =
{
	&m24520_MI,
	&m24521_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5315_0_0_0;
extern Il2CppType t5315_1_0_0;
struct t5315;
extern TypeInfo t5315_TI;
extern Il2CppGenericClass t5315_GC;
TypeInfo t5315_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5315_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5315_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5315_TI, &t5315_0_0_0, &t5315_1_0_0, NULL, &t5315_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5314_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.Transform>
extern Il2CppType t2_0_0_0;
static ParameterInfo t5314_m24522_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t5314_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24522_MI = 
{
	"Equals", NULL, &t5314_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5314_m24522_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5314_MIs[] =
{
	&m24522_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5314_0_0_0;
extern Il2CppType t5314_1_0_0;
struct t5314;
extern TypeInfo t5314_TI;
extern Il2CppGenericClass t5314_GC;
TypeInfo t5314_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5314_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5314_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5314_TI, &t5314_0_0_0, &t5314_1_0_0, NULL, &t5314_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1900_TI;

extern TypeInfo t2_TI;
extern TypeInfo t7_TI;
extern TypeInfo t60_TI;
extern TypeInfo t55_TI;
extern MethodInfo m10285_MI;
extern MethodInfo m122_MI;
extern MethodInfo m121_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Transform>
extern TypeInfo t1900_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10290_MI = 
{
	".ctor", (methodPointerType)&m8413_gshared, &t1900_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1900_m10291_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1900_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10291_MI = 
{
	"GetHashCode", (methodPointerType)&m8414_gshared, &t1900_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1900_m10291_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1900_m10292_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1900_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10292_MI = 
{
	"Equals", (methodPointerType)&m8415_gshared, &t1900_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t1900_m10292_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1900_MIs[] =
{
	&m10290_MI,
	&m10291_MI,
	&m10292_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m10292_MI;
extern MethodInfo m10291_MI;
extern MethodInfo m10288_MI;
extern MethodInfo m10287_MI;
extern MethodInfo m10291_MI;
extern MethodInfo m10292_MI;
static MethodInfo* t1900_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m10292_MI,
	&m10291_MI,
	&m10288_MI,
	&m10287_MI,
	&m10291_MI,
	&m10292_MI,
};
extern TypeInfo t5315_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t1900_IOs[] = 
{
	{ &t5315_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t5314_0_0_0;
extern Il2CppType t2_0_0_0;
extern TypeInfo t1899_TI;
extern TypeInfo t1899_TI;
extern TypeInfo t1900_TI;
extern MethodInfo m10290_MI;
extern TypeInfo t2_TI;
extern MethodInfo m24519_MI;
extern MethodInfo m18197_MI;
extern MethodInfo m10285_MI;
extern TypeInfo t2_TI;
static void* t1900_RGCTXData[11] = 
{
	(void*)&t5314_0_0_0,
	(void*)&t2_0_0_0,
	&t1899_TI,
	&t1899_TI,
	&t1900_TI,
	&m10290_MI,
	&t2_TI,
	&m24519_MI,
	&m18197_MI,
	&m10285_MI,
	&t2_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1900_0_0_0;
extern Il2CppType t1900_1_0_0;
extern TypeInfo t1899_TI;
struct t1900;
extern TypeInfo t1900_TI;
extern Il2CppGenericClass t1900_GC;
extern TypeInfo t862_TI;
TypeInfo t1900_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1900_MIs, NULL, NULL, NULL, &t1899_TI, NULL, &t862_TI, &t1900_TI, NULL, t1900_VT, &EmptyCustomAttributesCache, &t1900_TI, &t1900_0_0_0, &t1900_1_0_0, t1900_IOs, &t1900_GC, NULL, NULL, NULL, t1900_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1900), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1894_TI;



// Metadata Definition System.Predicate`1<UnityEngine.Transform>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t1894_m10293_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t1894_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m10293_MI = 
{
	".ctor", (methodPointerType)&m8416_gshared, &t1894_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t1894_m10293_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
static ParameterInfo t1894_m10294_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1894_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10294_MI = 
{
	"Invoke", (methodPointerType)&m8417_gshared, &t1894_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t1894_m10294_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t1894_m10295_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1894_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10295_MI = 
{
	"BeginInvoke", (methodPointerType)&m8418_gshared, &t1894_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7, t1894_m10295_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t1894_m10296_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t1894_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10296_MI = 
{
	"EndInvoke", (methodPointerType)&m8419_gshared, &t1894_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t1894_m10296_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1894_MIs[] =
{
	&m10293_MI,
	&m10294_MI,
	&m10295_MI,
	&m10296_MI,
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
extern MethodInfo m10294_MI;
extern MethodInfo m10295_MI;
extern MethodInfo m10296_MI;
static MethodInfo* t1894_VT[] =
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
	&m10294_MI,
	&m10295_MI,
	&m10296_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t1894_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1894_0_0_0;
extern Il2CppType t1894_1_0_0;
extern TypeInfo t245_TI;
struct t1894;
extern TypeInfo t1894_TI;
extern Il2CppGenericClass t1894_GC;
TypeInfo t1894_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t1894_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t1894_TI, NULL, t1894_VT, &EmptyCustomAttributesCache, &t1894_TI, &t1894_0_0_0, &t1894_1_0_0, t1894_IOs, &t1894_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1894), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1901_TI;

#include "t851.h"
#include "t1902.h"
extern TypeInfo t1901_TI;
extern TypeInfo t3456_TI;
extern TypeInfo t70_TI;
extern TypeInfo t2_TI;
extern TypeInfo t55_TI;
extern TypeInfo t851_TI;
extern TypeInfo t553_TI;
extern TypeInfo t1902_TI;
extern TypeInfo t60_TI;
extern TypeInfo t348_TI;
#include "t1902MD.h"
extern Il2CppType t3456_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t851_0_0_0;
extern MethodInfo m116_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3097_MI;
extern MethodInfo m3095_MI;
extern MethodInfo m6560_MI;
extern MethodInfo m10301_MI;
extern MethodInfo m24523_MI;
extern MethodInfo m6582_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.Transform>
extern Il2CppType t1901_0_0_49;
FieldInfo t1901_f0_FieldInfo = 
{
	"_default", &t1901_0_0_49, &t1901_TI, offsetof(t1901_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1901_FIs[] =
{
	&t1901_f0_FieldInfo,
	NULL
};
extern MethodInfo m10300_MI;
static PropertyInfo t1901____Default_PropertyInfo = 
{
	&t1901_TI, "Default", &m10300_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1901_PIs[] =
{
	&t1901____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1901_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10297_MI = 
{
	".ctor", (methodPointerType)&m8420_gshared, &t1901_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1901_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10298_MI = 
{
	".cctor", (methodPointerType)&m8421_gshared, &t1901_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t1901_m10299_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1901_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10299_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8422_gshared, &t1901_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t1901_m10299_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1901_m24523_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1901_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24523_MI = 
{
	"Compare", NULL, &t1901_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t1901_m24523_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1901_TI;
extern Il2CppType t1901_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10300_MI = 
{
	"get_Default", (methodPointerType)&m8423_gshared, &t1901_TI, &t1901_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1901_MIs[] =
{
	&m10297_MI,
	&m10298_MI,
	&m10299_MI,
	&m24523_MI,
	&m10300_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m24523_MI;
extern MethodInfo m10299_MI;
static MethodInfo* t1901_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m24523_MI,
	&m10299_MI,
	NULL,
};
extern TypeInfo t3455_TI;
extern TypeInfo t743_TI;
static TypeInfo* t1901_ITIs[] = 
{
	&t3455_TI,
	&t743_TI,
};
extern TypeInfo t3455_TI;
extern TypeInfo t743_TI;
static Il2CppInterfaceOffsetPair t1901_IOs[] = 
{
	{ &t3455_TI, 4},
	{ &t743_TI, 5},
};
extern Il2CppType t3456_0_0_0;
extern Il2CppType t2_0_0_0;
extern TypeInfo t1901_TI;
extern TypeInfo t1901_TI;
extern TypeInfo t1902_TI;
extern MethodInfo m10301_MI;
extern TypeInfo t2_TI;
extern MethodInfo m24523_MI;
static void* t1901_RGCTXData[8] = 
{
	(void*)&t3456_0_0_0,
	(void*)&t2_0_0_0,
	&t1901_TI,
	&t1901_TI,
	&t1902_TI,
	&m10301_MI,
	&t2_TI,
	&m24523_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1901_0_0_0;
extern Il2CppType t1901_1_0_0;
extern TypeInfo t7_TI;
struct t1901;
extern TypeInfo t1901_TI;
extern Il2CppGenericClass t1901_GC;
TypeInfo t1901_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t1901_MIs, t1901_PIs, t1901_FIs, NULL, &t7_TI, NULL, NULL, &t1901_TI, t1901_ITIs, t1901_VT, &EmptyCustomAttributesCache, &t1901_TI, &t1901_0_0_0, &t1901_1_0_0, t1901_IOs, &t1901_GC, NULL, NULL, NULL, t1901_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1901), 0, -1, sizeof(t1901_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3455_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.Transform>
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t3455_m18205_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t3455_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m18205_MI = 
{
	"Compare", NULL, &t3455_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t3455_m18205_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3455_MIs[] =
{
	&m18205_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3455_0_0_0;
extern Il2CppType t3455_1_0_0;
struct t3455;
extern TypeInfo t3455_TI;
extern Il2CppGenericClass t3455_GC;
TypeInfo t3455_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3455_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3455_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3455_TI, &t3455_0_0_0, &t3455_1_0_0, NULL, &t3455_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3456_TI;



// Metadata Definition System.IComparable`1<UnityEngine.Transform>
extern Il2CppType t2_0_0_0;
static ParameterInfo t3456_m18206_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t3456_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m18206_MI = 
{
	"CompareTo", NULL, &t3456_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t3456_m18206_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3456_MIs[] =
{
	&m18206_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3456_0_0_0;
extern Il2CppType t3456_1_0_0;
struct t3456;
extern TypeInfo t3456_TI;
extern Il2CppGenericClass t3456_GC;
TypeInfo t3456_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3456_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3456_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3456_TI, &t3456_0_0_0, &t3456_1_0_0, NULL, &t3456_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1902_TI;

extern TypeInfo t2_TI;
extern TypeInfo t3456_TI;
extern TypeInfo t60_TI;
extern TypeInfo t78_TI;
extern TypeInfo t7_TI;
extern TypeInfo t348_TI;
extern MethodInfo m10297_MI;
extern MethodInfo m18206_MI;
extern MethodInfo m7420_MI;
extern MethodInfo m2046_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Transform>
extern TypeInfo t1902_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10301_MI = 
{
	".ctor", (methodPointerType)&m8424_gshared, &t1902_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1902_m10302_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1902_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10302_MI = 
{
	"Compare", (methodPointerType)&m8425_gshared, &t1902_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t1902_m10302_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1902_MIs[] =
{
	&m10301_MI,
	&m10302_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m10302_MI;
extern MethodInfo m10299_MI;
extern MethodInfo m10302_MI;
static MethodInfo* t1902_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m10302_MI,
	&m10299_MI,
	&m10302_MI,
};
extern TypeInfo t3455_TI;
extern TypeInfo t743_TI;
static Il2CppInterfaceOffsetPair t1902_IOs[] = 
{
	{ &t3455_TI, 4},
	{ &t743_TI, 5},
};
extern Il2CppType t3456_0_0_0;
extern Il2CppType t2_0_0_0;
extern TypeInfo t1901_TI;
extern TypeInfo t1901_TI;
extern TypeInfo t1902_TI;
extern MethodInfo m10301_MI;
extern TypeInfo t2_TI;
extern MethodInfo m24523_MI;
extern MethodInfo m10297_MI;
extern TypeInfo t2_TI;
extern TypeInfo t3456_TI;
extern MethodInfo m18206_MI;
static void* t1902_RGCTXData[12] = 
{
	(void*)&t3456_0_0_0,
	(void*)&t2_0_0_0,
	&t1901_TI,
	&t1901_TI,
	&t1902_TI,
	&m10301_MI,
	&t2_TI,
	&m24523_MI,
	&m10297_MI,
	&t2_TI,
	&t3456_TI,
	&m18206_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1902_0_0_0;
extern Il2CppType t1902_1_0_0;
extern TypeInfo t1901_TI;
struct t1902;
extern TypeInfo t1902_TI;
extern Il2CppGenericClass t1902_GC;
extern TypeInfo t850_TI;
TypeInfo t1902_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t1902_MIs, NULL, NULL, NULL, &t1901_TI, NULL, &t850_TI, &t1902_TI, NULL, t1902_VT, &EmptyCustomAttributesCache, &t1902_TI, &t1902_0_0_0, &t1902_1_0_0, t1902_IOs, &t1902_GC, NULL, NULL, NULL, t1902_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1902), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1895_TI;
#include "t1895MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.Transform>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t1895_m10303_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t1895_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m10303_MI = 
{
	".ctor", (methodPointerType)&m8471_gshared, &t1895_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t1895_m10303_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
static ParameterInfo t1895_m10304_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
};
extern TypeInfo t1895_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10304_MI = 
{
	"Invoke", (methodPointerType)&m8472_gshared, &t1895_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t1895_m10304_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t1895_m10305_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1895_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10305_MI = 
{
	"BeginInvoke", (methodPointerType)&m8473_gshared, &t1895_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t1895_m10305_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t1895_m10306_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t1895_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10306_MI = 
{
	"EndInvoke", (methodPointerType)&m8474_gshared, &t1895_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1895_m10306_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1895_MIs[] =
{
	&m10303_MI,
	&m10304_MI,
	&m10305_MI,
	&m10306_MI,
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
extern MethodInfo m10304_MI;
extern MethodInfo m10305_MI;
extern MethodInfo m10306_MI;
static MethodInfo* t1895_VT[] =
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
	&m10304_MI,
	&m10305_MI,
	&m10306_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t1895_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1895_0_0_0;
extern Il2CppType t1895_1_0_0;
extern TypeInfo t245_TI;
struct t1895;
extern TypeInfo t1895_TI;
extern Il2CppGenericClass t1895_GC;
TypeInfo t1895_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t1895_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t1895_TI, NULL, t1895_VT, &EmptyCustomAttributesCache, &t1895_TI, &t1895_0_0_0, &t1895_1_0_0, t1895_IOs, &t1895_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1895), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3457_TI;

#include "t155.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.MoveDirection>
extern MethodInfo m24524_MI;
static PropertyInfo t3457____Current_PropertyInfo = 
{
	&t3457_TI, "Current", &m24524_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3457_PIs[] =
{
	&t3457____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3457_TI;
extern Il2CppType t155_0_0_0;
extern void* RuntimeInvoker_t155 (MethodInfo* method, void* obj, void** args);
MethodInfo m24524_MI = 
{
	"get_Current", NULL, &t3457_TI, &t155_0_0_0, RuntimeInvoker_t155, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3457_MIs[] =
{
	&m24524_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3457_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3457_0_0_0;
extern Il2CppType t3457_1_0_0;
struct t3457;
extern TypeInfo t3457_TI;
extern Il2CppGenericClass t3457_GC;
TypeInfo t3457_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3457_MIs, t3457_PIs, NULL, NULL, NULL, NULL, NULL, &t3457_TI, t3457_ITIs, NULL, &EmptyCustomAttributesCache, &t3457_TI, &t3457_0_0_0, &t3457_1_0_0, NULL, &t3457_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1903.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1903_TI;
#include "t1903MD.h"

extern TypeInfo t1903_TI;
extern TypeInfo t155_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m10311_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18211_MI;
struct t52;
 int32_t m18211 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18211_MI;


extern MethodInfo m10307_MI;
 void m10307 (t1903 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10308_MI;
 t7 * m10308 (t1903 * __this, MethodInfo* method){
	{
		int32_t L_0 = m10311(__this, &m10311_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t155_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10309_MI;
 void m10309 (t1903 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10310_MI;
 bool m10310 (t1903 * __this, MethodInfo* method){
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
extern MethodInfo m10311_MI;
 int32_t m10311 (t1903 * __this, MethodInfo* method){
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
		int32_t L_8 = m18211(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18211_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.MoveDirection>
extern Il2CppType t52_0_0_1;
FieldInfo t1903_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t1903_TI, offsetof(t1903, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t1903_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t1903_TI, offsetof(t1903, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t1903_FIs[] =
{
	&t1903_f0_FieldInfo,
	&t1903_f1_FieldInfo,
	NULL
};
extern MethodInfo m10308_MI;
static PropertyInfo t1903____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1903_TI, "System.Collections.IEnumerator.Current", &m10308_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10311_MI;
static PropertyInfo t1903____Current_PropertyInfo = 
{
	&t1903_TI, "Current", &m10311_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1903_PIs[] =
{
	&t1903____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1903____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t1903_m10307_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t1903_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10307_MI = 
{
	".ctor", (methodPointerType)&m10307, &t1903_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1903_m10307_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1903_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10308_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10308, &t1903_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1903_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10309_MI = 
{
	"Dispose", (methodPointerType)&m10309, &t1903_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1903_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10310_MI = 
{
	"MoveNext", (methodPointerType)&m10310, &t1903_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1903_TI;
extern Il2CppType t155_0_0_0;
extern void* RuntimeInvoker_t155 (MethodInfo* method, void* obj, void** args);
MethodInfo m10311_MI = 
{
	"get_Current", (methodPointerType)&m10311, &t1903_TI, &t155_0_0_0, RuntimeInvoker_t155, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1903_MIs[] =
{
	&m10307_MI,
	&m10308_MI,
	&m10309_MI,
	&m10310_MI,
	&m10311_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m10308_MI;
extern MethodInfo m10310_MI;
extern MethodInfo m10309_MI;
extern MethodInfo m10311_MI;
static MethodInfo* t1903_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m10308_MI,
	&m10310_MI,
	&m10309_MI,
	&m10311_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3457_TI;
static TypeInfo* t1903_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3457_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3457_TI;
static Il2CppInterfaceOffsetPair t1903_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3457_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1903_0_0_0;
extern Il2CppType t1903_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t1903_TI;
extern Il2CppGenericClass t1903_GC;
extern TypeInfo t52_TI;
TypeInfo t1903_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1903_MIs, t1903_PIs, t1903_FIs, NULL, &t159_TI, NULL, &t52_TI, &t1903_TI, t1903_ITIs, t1903_VT, &EmptyCustomAttributesCache, &t1903_TI, &t1903_0_0_0, &t1903_1_0_0, t1903_IOs, &t1903_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1903)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4075_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.MoveDirection>
extern MethodInfo m24525_MI;
static PropertyInfo t4075____Count_PropertyInfo = 
{
	&t4075_TI, "Count", &m24525_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24526_MI;
static PropertyInfo t4075____IsReadOnly_PropertyInfo = 
{
	&t4075_TI, "IsReadOnly", &m24526_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4075_PIs[] =
{
	&t4075____Count_PropertyInfo,
	&t4075____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4075_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24525_MI = 
{
	"get_Count", NULL, &t4075_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4075_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m24526_MI = 
{
	"get_IsReadOnly", NULL, &t4075_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t155_0_0_0;
static ParameterInfo t4075_m24527_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t155_0_0_0},
};
extern TypeInfo t4075_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24527_MI = 
{
	"Add", NULL, &t4075_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4075_m24527_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4075_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m24528_MI = 
{
	"Clear", NULL, &t4075_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t155_0_0_0;
static ParameterInfo t4075_m24529_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t155_0_0_0},
};
extern TypeInfo t4075_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24529_MI = 
{
	"Contains", NULL, &t4075_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4075_m24529_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3293_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4075_m24530_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3293_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4075_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24530_MI = 
{
	"CopyTo", NULL, &t4075_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4075_m24530_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t155_0_0_0;
static ParameterInfo t4075_m24531_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t155_0_0_0},
};
extern TypeInfo t4075_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24531_MI = 
{
	"Remove", NULL, &t4075_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4075_m24531_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4075_MIs[] =
{
	&m24525_MI,
	&m24526_MI,
	&m24527_MI,
	&m24528_MI,
	&m24529_MI,
	&m24530_MI,
	&m24531_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4077_TI;
static TypeInfo* t4075_ITIs[] = 
{
	&t618_TI,
	&t4077_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4075_0_0_0;
extern Il2CppType t4075_1_0_0;
struct t4075;
extern TypeInfo t4075_TI;
extern Il2CppGenericClass t4075_GC;
TypeInfo t4075_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4075_MIs, t4075_PIs, NULL, NULL, NULL, NULL, NULL, &t4075_TI, t4075_ITIs, NULL, &EmptyCustomAttributesCache, &t4075_TI, &t4075_0_0_0, &t4075_1_0_0, NULL, &t4075_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4077_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.MoveDirection>
extern TypeInfo t4077_TI;
extern Il2CppType t3457_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24532_MI = 
{
	"GetEnumerator", NULL, &t4077_TI, &t3457_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4077_MIs[] =
{
	&m24532_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4077_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4077_0_0_0;
extern Il2CppType t4077_1_0_0;
struct t4077;
extern TypeInfo t4077_TI;
extern Il2CppGenericClass t4077_GC;
TypeInfo t4077_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4077_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4077_TI, t4077_ITIs, NULL, &EmptyCustomAttributesCache, &t4077_TI, &t4077_0_0_0, &t4077_1_0_0, NULL, &t4077_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4076_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.MoveDirection>
extern MethodInfo m24533_MI;
extern MethodInfo m24534_MI;
static PropertyInfo t4076____Item_PropertyInfo = 
{
	&t4076_TI, "Item", &m24533_MI, &m24534_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4076_PIs[] =
{
	&t4076____Item_PropertyInfo,
	NULL
};
extern Il2CppType t155_0_0_0;
static ParameterInfo t4076_m24535_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t155_0_0_0},
};
extern TypeInfo t4076_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24535_MI = 
{
	"IndexOf", NULL, &t4076_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4076_m24535_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t155_0_0_0;
static ParameterInfo t4076_m24536_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t155_0_0_0},
};
extern TypeInfo t4076_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24536_MI = 
{
	"Insert", NULL, &t4076_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4076_m24536_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4076_m24537_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4076_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24537_MI = 
{
	"RemoveAt", NULL, &t4076_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4076_m24537_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4076_m24533_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4076_TI;
extern Il2CppType t155_0_0_0;
extern void* RuntimeInvoker_t155_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24533_MI = 
{
	"get_Item", NULL, &t4076_TI, &t155_0_0_0, RuntimeInvoker_t155_t60, t4076_m24533_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t155_0_0_0;
static ParameterInfo t4076_m24534_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t155_0_0_0},
};
extern TypeInfo t4076_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24534_MI = 
{
	"set_Item", NULL, &t4076_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4076_m24534_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4076_MIs[] =
{
	&m24535_MI,
	&m24536_MI,
	&m24537_MI,
	&m24533_MI,
	&m24534_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4075_TI;
extern TypeInfo t4077_TI;
static TypeInfo* t4076_ITIs[] = 
{
	&t618_TI,
	&t4075_TI,
	&t4077_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4076_0_0_0;
extern Il2CppType t4076_1_0_0;
struct t4076;
extern TypeInfo t4076_TI;
extern Il2CppGenericClass t4076_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4076_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4076_MIs, t4076_PIs, NULL, NULL, NULL, NULL, NULL, &t4076_TI, t4076_ITIs, NULL, &t1426__CustomAttributeCache, &t4076_TI, &t4076_0_0_0, &t4076_1_0_0, NULL, &t4076_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1904.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1904_TI;
#include "t1904MD.h"

#include "t72.h"
#include "t573.h"
#include "t100.h"
#include "t1905.h"
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t1904_TI;
extern TypeInfo t100_TI;
extern TypeInfo t1905_TI;
extern TypeInfo t53_TI;
#include "t1905MD.h"
extern MethodInfo m10314_MI;
extern MethodInfo m10316_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.EventSystems.UIBehaviour>
extern Il2CppType t350_0_0_33;
FieldInfo t1904_f1_FieldInfo = 
{
	"m_Arg1", &t350_0_0_33, &t1904_TI, offsetof(t1904, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1904_FIs[] =
{
	&t1904_f1_FieldInfo,
	NULL
};
extern Il2CppType t72_0_0_0;
extern Il2CppType t573_0_0_0;
extern Il2CppType t100_0_0_0;
static ParameterInfo t1904_m10312_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t72_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1904_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10312_MI = 
{
	".ctor", (methodPointerType)&m8007_gshared, &t1904_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7_t7, t1904_m10312_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t1904_m10313_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t1904_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10313_MI = 
{
	"Invoke", (methodPointerType)&m8009_gshared, &t1904_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1904_m10313_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1904_MIs[] =
{
	&m10312_MI,
	&m10313_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m10313_MI;
extern MethodInfo m10317_MI;
static MethodInfo* t1904_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m10313_MI,
	&m10317_MI,
};
extern Il2CppType t1906_0_0_0;
extern TypeInfo t1906_TI;
extern MethodInfo m18221_MI;
extern TypeInfo t100_TI;
extern MethodInfo m10319_MI;
extern MethodInfo m10314_MI;
extern TypeInfo t100_TI;
extern MethodInfo m10316_MI;
static void* t1904_RGCTXData[8] = 
{
	(void*)&t1906_0_0_0,
	&t1906_TI,
	&m18221_MI,
	&t100_TI,
	&m10319_MI,
	&m10314_MI,
	&t100_TI,
	&m10316_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1904_0_0_0;
extern Il2CppType t1904_1_0_0;
extern TypeInfo t1905_TI;
struct t1904;
extern TypeInfo t1904_TI;
extern Il2CppGenericClass t1904_GC;
TypeInfo t1904_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t1904_MIs, NULL, t1904_FIs, NULL, &t1905_TI, NULL, NULL, &t1904_TI, NULL, t1904_VT, &EmptyCustomAttributesCache, &t1904_TI, &t1904_0_0_0, &t1904_1_0_0, NULL, &t1904_GC, NULL, NULL, NULL, t1904_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1904), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1905_TI;

#include "t1906.h"
#include "t374.h"
extern TypeInfo t1905_TI;
extern TypeInfo t1906_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern TypeInfo t100_TI;
extern TypeInfo t53_TI;
#include "t572MD.h"
#include "t374MD.h"
#include "t1906MD.h"
extern Il2CppType t1906_0_0_0;
extern MethodInfo m2910_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3073_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m18221_MI;
extern MethodInfo m2911_MI;
extern MethodInfo m10319_MI;
extern MethodInfo m3069_MI;
extern MethodInfo m3067_MI;
struct t572;
#include "t572.h"
struct t572;
 void m17212_gshared (t7 * __this, t7 * p0, MethodInfo* method);
#define m17212(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
#define m18221(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
extern MethodInfo m18221_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.UIBehaviour>
extern Il2CppType t1906_0_0_1;
FieldInfo t1905_f0_FieldInfo = 
{
	"Delegate", &t1906_0_0_1, &t1905_TI, offsetof(t1905, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1905_FIs[] =
{
	&t1905_f0_FieldInfo,
	NULL
};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t1905_m10314_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t1905_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10314_MI = 
{
	".ctor", (methodPointerType)&m8010_gshared, &t1905_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t1905_m10314_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1906_0_0_0;
static ParameterInfo t1905_m10315_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t1906_0_0_0},
};
extern TypeInfo t1905_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10315_MI = 
{
	".ctor", (methodPointerType)&m8011_gshared, &t1905_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1905_m10315_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t1905_m10316_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t1905_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10316_MI = 
{
	"Invoke", (methodPointerType)&m8012_gshared, &t1905_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1905_m10316_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t1905_m10317_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t1905_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10317_MI = 
{
	"Find", (methodPointerType)&m8013_gshared, &t1905_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t1905_m10317_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1905_MIs[] =
{
	&m10314_MI,
	&m10315_MI,
	&m10316_MI,
	&m10317_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m10316_MI;
extern MethodInfo m10317_MI;
static MethodInfo* t1905_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m10316_MI,
	&m10317_MI,
};
extern Il2CppType t1906_0_0_0;
extern TypeInfo t1906_TI;
extern MethodInfo m18221_MI;
extern TypeInfo t100_TI;
extern MethodInfo m10319_MI;
static void* t1905_RGCTXData[5] = 
{
	(void*)&t1906_0_0_0,
	&t1906_TI,
	&m18221_MI,
	&t100_TI,
	&m10319_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1905_0_0_0;
extern Il2CppType t1905_1_0_0;
extern TypeInfo t572_TI;
struct t1905;
extern TypeInfo t1905_TI;
extern Il2CppGenericClass t1905_GC;
TypeInfo t1905_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t1905_MIs, NULL, t1905_FIs, NULL, &t572_TI, NULL, NULL, &t1905_TI, NULL, t1905_VT, &EmptyCustomAttributesCache, &t1905_TI, &t1905_0_0_0, &t1905_1_0_0, NULL, &t1905_GC, NULL, NULL, NULL, t1905_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1905), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1906_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.UIBehaviour>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t1906_m10318_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m10318_MI = 
{
	".ctor", (methodPointerType)&m8014_gshared, &t1906_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t1906_m10318_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
static ParameterInfo t1906_m10319_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10319_MI = 
{
	"Invoke", (methodPointerType)&m8015_gshared, &t1906_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1906_m10319_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t100_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t1906_m10320_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t100_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10320_MI = 
{
	"BeginInvoke", (methodPointerType)&m8016_gshared, &t1906_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7, t1906_m10320_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t1906_m10321_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t1906_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10321_MI = 
{
	"EndInvoke", (methodPointerType)&m8017_gshared, &t1906_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1906_m10321_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1906_MIs[] =
{
	&m10318_MI,
	&m10319_MI,
	&m10320_MI,
	&m10321_MI,
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
extern MethodInfo m10319_MI;
extern MethodInfo m10320_MI;
extern MethodInfo m10321_MI;
static MethodInfo* t1906_VT[] =
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
	&m10319_MI,
	&m10320_MI,
	&m10321_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t1906_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1906_0_0_0;
extern Il2CppType t1906_1_0_0;
extern TypeInfo t245_TI;
struct t1906;
extern TypeInfo t1906_TI;
extern Il2CppGenericClass t1906_GC;
TypeInfo t1906_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t1906_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t1906_TI, NULL, t1906_VT, &EmptyCustomAttributesCache, &t1906_TI, &t1906_0_0_0, &t1906_1_0_0, t1906_IOs, &t1906_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1906), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3458_TI;

#include "t160.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.PointerEventData/InputButton>
extern MethodInfo m24538_MI;
static PropertyInfo t3458____Current_PropertyInfo = 
{
	&t3458_TI, "Current", &m24538_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3458_PIs[] =
{
	&t3458____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3458_TI;
extern Il2CppType t160_0_0_0;
extern void* RuntimeInvoker_t160 (MethodInfo* method, void* obj, void** args);
MethodInfo m24538_MI = 
{
	"get_Current", NULL, &t3458_TI, &t160_0_0_0, RuntimeInvoker_t160, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3458_MIs[] =
{
	&m24538_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3458_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3458_0_0_0;
extern Il2CppType t3458_1_0_0;
struct t3458;
extern TypeInfo t3458_TI;
extern Il2CppGenericClass t3458_GC;
TypeInfo t3458_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3458_MIs, t3458_PIs, NULL, NULL, NULL, NULL, NULL, &t3458_TI, t3458_ITIs, NULL, &EmptyCustomAttributesCache, &t3458_TI, &t3458_0_0_0, &t3458_1_0_0, NULL, &t3458_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1907.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1907_TI;
#include "t1907MD.h"

extern TypeInfo t1907_TI;
extern TypeInfo t160_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m10326_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18223_MI;
struct t52;
 int32_t m18223 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18223_MI;


extern MethodInfo m10322_MI;
 void m10322 (t1907 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10323_MI;
 t7 * m10323 (t1907 * __this, MethodInfo* method){
	{
		int32_t L_0 = m10326(__this, &m10326_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t160_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10324_MI;
 void m10324 (t1907 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10325_MI;
 bool m10325 (t1907 * __this, MethodInfo* method){
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
extern MethodInfo m10326_MI;
 int32_t m10326 (t1907 * __this, MethodInfo* method){
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
		int32_t L_8 = m18223(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18223_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData/InputButton>
extern Il2CppType t52_0_0_1;
FieldInfo t1907_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t1907_TI, offsetof(t1907, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t1907_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t1907_TI, offsetof(t1907, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t1907_FIs[] =
{
	&t1907_f0_FieldInfo,
	&t1907_f1_FieldInfo,
	NULL
};
extern MethodInfo m10323_MI;
static PropertyInfo t1907____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1907_TI, "System.Collections.IEnumerator.Current", &m10323_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10326_MI;
static PropertyInfo t1907____Current_PropertyInfo = 
{
	&t1907_TI, "Current", &m10326_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1907_PIs[] =
{
	&t1907____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1907____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t1907_m10322_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t1907_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10322_MI = 
{
	".ctor", (methodPointerType)&m10322, &t1907_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1907_m10322_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1907_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10323_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10323, &t1907_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1907_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10324_MI = 
{
	"Dispose", (methodPointerType)&m10324, &t1907_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1907_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10325_MI = 
{
	"MoveNext", (methodPointerType)&m10325, &t1907_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1907_TI;
extern Il2CppType t160_0_0_0;
extern void* RuntimeInvoker_t160 (MethodInfo* method, void* obj, void** args);
MethodInfo m10326_MI = 
{
	"get_Current", (methodPointerType)&m10326, &t1907_TI, &t160_0_0_0, RuntimeInvoker_t160, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1907_MIs[] =
{
	&m10322_MI,
	&m10323_MI,
	&m10324_MI,
	&m10325_MI,
	&m10326_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m10323_MI;
extern MethodInfo m10325_MI;
extern MethodInfo m10324_MI;
extern MethodInfo m10326_MI;
static MethodInfo* t1907_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m10323_MI,
	&m10325_MI,
	&m10324_MI,
	&m10326_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3458_TI;
static TypeInfo* t1907_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3458_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3458_TI;
static Il2CppInterfaceOffsetPair t1907_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3458_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1907_0_0_0;
extern Il2CppType t1907_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t1907_TI;
extern Il2CppGenericClass t1907_GC;
extern TypeInfo t52_TI;
TypeInfo t1907_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1907_MIs, t1907_PIs, t1907_FIs, NULL, &t159_TI, NULL, &t52_TI, &t1907_TI, t1907_ITIs, t1907_VT, &EmptyCustomAttributesCache, &t1907_TI, &t1907_0_0_0, &t1907_1_0_0, t1907_IOs, &t1907_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1907)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4078_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData/InputButton>
extern MethodInfo m24539_MI;
static PropertyInfo t4078____Count_PropertyInfo = 
{
	&t4078_TI, "Count", &m24539_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24540_MI;
static PropertyInfo t4078____IsReadOnly_PropertyInfo = 
{
	&t4078_TI, "IsReadOnly", &m24540_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4078_PIs[] =
{
	&t4078____Count_PropertyInfo,
	&t4078____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4078_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24539_MI = 
{
	"get_Count", NULL, &t4078_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4078_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m24540_MI = 
{
	"get_IsReadOnly", NULL, &t4078_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t160_0_0_0;
static ParameterInfo t4078_m24541_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t160_0_0_0},
};
extern TypeInfo t4078_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24541_MI = 
{
	"Add", NULL, &t4078_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4078_m24541_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4078_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m24542_MI = 
{
	"Clear", NULL, &t4078_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t160_0_0_0;
static ParameterInfo t4078_m24543_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t160_0_0_0},
};
extern TypeInfo t4078_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24543_MI = 
{
	"Contains", NULL, &t4078_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4078_m24543_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3294_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4078_m24544_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3294_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4078_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24544_MI = 
{
	"CopyTo", NULL, &t4078_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4078_m24544_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t160_0_0_0;
static ParameterInfo t4078_m24545_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t160_0_0_0},
};
extern TypeInfo t4078_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24545_MI = 
{
	"Remove", NULL, &t4078_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4078_m24545_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4078_MIs[] =
{
	&m24539_MI,
	&m24540_MI,
	&m24541_MI,
	&m24542_MI,
	&m24543_MI,
	&m24544_MI,
	&m24545_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4080_TI;
static TypeInfo* t4078_ITIs[] = 
{
	&t618_TI,
	&t4080_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4078_0_0_0;
extern Il2CppType t4078_1_0_0;
struct t4078;
extern TypeInfo t4078_TI;
extern Il2CppGenericClass t4078_GC;
TypeInfo t4078_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4078_MIs, t4078_PIs, NULL, NULL, NULL, NULL, NULL, &t4078_TI, t4078_ITIs, NULL, &EmptyCustomAttributesCache, &t4078_TI, &t4078_0_0_0, &t4078_1_0_0, NULL, &t4078_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4080_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.PointerEventData/InputButton>
extern TypeInfo t4080_TI;
extern Il2CppType t3458_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24546_MI = 
{
	"GetEnumerator", NULL, &t4080_TI, &t3458_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4080_MIs[] =
{
	&m24546_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4080_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4080_0_0_0;
extern Il2CppType t4080_1_0_0;
struct t4080;
extern TypeInfo t4080_TI;
extern Il2CppGenericClass t4080_GC;
TypeInfo t4080_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4080_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4080_TI, t4080_ITIs, NULL, &EmptyCustomAttributesCache, &t4080_TI, &t4080_0_0_0, &t4080_1_0_0, NULL, &t4080_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4079_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerEventData/InputButton>
extern MethodInfo m24547_MI;
extern MethodInfo m24548_MI;
static PropertyInfo t4079____Item_PropertyInfo = 
{
	&t4079_TI, "Item", &m24547_MI, &m24548_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4079_PIs[] =
{
	&t4079____Item_PropertyInfo,
	NULL
};
extern Il2CppType t160_0_0_0;
static ParameterInfo t4079_m24549_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t160_0_0_0},
};
extern TypeInfo t4079_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24549_MI = 
{
	"IndexOf", NULL, &t4079_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4079_m24549_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t160_0_0_0;
static ParameterInfo t4079_m24550_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t160_0_0_0},
};
extern TypeInfo t4079_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24550_MI = 
{
	"Insert", NULL, &t4079_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4079_m24550_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4079_m24551_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4079_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24551_MI = 
{
	"RemoveAt", NULL, &t4079_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4079_m24551_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4079_m24547_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4079_TI;
extern Il2CppType t160_0_0_0;
extern void* RuntimeInvoker_t160_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24547_MI = 
{
	"get_Item", NULL, &t4079_TI, &t160_0_0_0, RuntimeInvoker_t160_t60, t4079_m24547_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t160_0_0_0;
static ParameterInfo t4079_m24548_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t160_0_0_0},
};
extern TypeInfo t4079_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24548_MI = 
{
	"set_Item", NULL, &t4079_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4079_m24548_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4079_MIs[] =
{
	&m24549_MI,
	&m24550_MI,
	&m24551_MI,
	&m24547_MI,
	&m24548_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4078_TI;
extern TypeInfo t4080_TI;
static TypeInfo* t4079_ITIs[] = 
{
	&t618_TI,
	&t4078_TI,
	&t4080_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4079_0_0_0;
extern Il2CppType t4079_1_0_0;
struct t4079;
extern TypeInfo t4079_TI;
extern Il2CppGenericClass t4079_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4079_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4079_MIs, t4079_PIs, NULL, NULL, NULL, NULL, NULL, &t4079_TI, t4079_ITIs, NULL, &t1426__CustomAttributeCache, &t4079_TI, &t4079_0_0_0, &t4079_1_0_0, NULL, &t4079_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3459_TI;

#include "t161.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.PointerEventData/FramePressState>
extern MethodInfo m24552_MI;
static PropertyInfo t3459____Current_PropertyInfo = 
{
	&t3459_TI, "Current", &m24552_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3459_PIs[] =
{
	&t3459____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3459_TI;
extern Il2CppType t161_0_0_0;
extern void* RuntimeInvoker_t161 (MethodInfo* method, void* obj, void** args);
MethodInfo m24552_MI = 
{
	"get_Current", NULL, &t3459_TI, &t161_0_0_0, RuntimeInvoker_t161, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3459_MIs[] =
{
	&m24552_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3459_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3459_0_0_0;
extern Il2CppType t3459_1_0_0;
struct t3459;
extern TypeInfo t3459_TI;
extern Il2CppGenericClass t3459_GC;
TypeInfo t3459_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3459_MIs, t3459_PIs, NULL, NULL, NULL, NULL, NULL, &t3459_TI, t3459_ITIs, NULL, &EmptyCustomAttributesCache, &t3459_TI, &t3459_0_0_0, &t3459_1_0_0, NULL, &t3459_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1908.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1908_TI;
#include "t1908MD.h"

extern TypeInfo t1908_TI;
extern TypeInfo t161_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m10331_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18234_MI;
struct t52;
 int32_t m18234 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18234_MI;


extern MethodInfo m10327_MI;
 void m10327 (t1908 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10328_MI;
 t7 * m10328 (t1908 * __this, MethodInfo* method){
	{
		int32_t L_0 = m10331(__this, &m10331_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t161_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10329_MI;
 void m10329 (t1908 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10330_MI;
 bool m10330 (t1908 * __this, MethodInfo* method){
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
extern MethodInfo m10331_MI;
 int32_t m10331 (t1908 * __this, MethodInfo* method){
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
		int32_t L_8 = m18234(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18234_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData/FramePressState>
extern Il2CppType t52_0_0_1;
FieldInfo t1908_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t1908_TI, offsetof(t1908, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t1908_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t1908_TI, offsetof(t1908, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t1908_FIs[] =
{
	&t1908_f0_FieldInfo,
	&t1908_f1_FieldInfo,
	NULL
};
extern MethodInfo m10328_MI;
static PropertyInfo t1908____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1908_TI, "System.Collections.IEnumerator.Current", &m10328_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10331_MI;
static PropertyInfo t1908____Current_PropertyInfo = 
{
	&t1908_TI, "Current", &m10331_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1908_PIs[] =
{
	&t1908____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1908____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t1908_m10327_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t1908_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10327_MI = 
{
	".ctor", (methodPointerType)&m10327, &t1908_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1908_m10327_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1908_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10328_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10328, &t1908_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1908_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10329_MI = 
{
	"Dispose", (methodPointerType)&m10329, &t1908_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1908_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10330_MI = 
{
	"MoveNext", (methodPointerType)&m10330, &t1908_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1908_TI;
extern Il2CppType t161_0_0_0;
extern void* RuntimeInvoker_t161 (MethodInfo* method, void* obj, void** args);
MethodInfo m10331_MI = 
{
	"get_Current", (methodPointerType)&m10331, &t1908_TI, &t161_0_0_0, RuntimeInvoker_t161, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1908_MIs[] =
{
	&m10327_MI,
	&m10328_MI,
	&m10329_MI,
	&m10330_MI,
	&m10331_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m10328_MI;
extern MethodInfo m10330_MI;
extern MethodInfo m10329_MI;
extern MethodInfo m10331_MI;
static MethodInfo* t1908_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m10328_MI,
	&m10330_MI,
	&m10329_MI,
	&m10331_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3459_TI;
static TypeInfo* t1908_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3459_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3459_TI;
static Il2CppInterfaceOffsetPair t1908_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3459_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1908_0_0_0;
extern Il2CppType t1908_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t1908_TI;
extern Il2CppGenericClass t1908_GC;
extern TypeInfo t52_TI;
TypeInfo t1908_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1908_MIs, t1908_PIs, t1908_FIs, NULL, &t159_TI, NULL, &t52_TI, &t1908_TI, t1908_ITIs, t1908_VT, &EmptyCustomAttributesCache, &t1908_TI, &t1908_0_0_0, &t1908_1_0_0, t1908_IOs, &t1908_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1908)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4081_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData/FramePressState>
extern MethodInfo m24553_MI;
static PropertyInfo t4081____Count_PropertyInfo = 
{
	&t4081_TI, "Count", &m24553_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24554_MI;
static PropertyInfo t4081____IsReadOnly_PropertyInfo = 
{
	&t4081_TI, "IsReadOnly", &m24554_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4081_PIs[] =
{
	&t4081____Count_PropertyInfo,
	&t4081____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4081_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24553_MI = 
{
	"get_Count", NULL, &t4081_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4081_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m24554_MI = 
{
	"get_IsReadOnly", NULL, &t4081_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t161_0_0_0;
static ParameterInfo t4081_m24555_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t161_0_0_0},
};
extern TypeInfo t4081_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24555_MI = 
{
	"Add", NULL, &t4081_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4081_m24555_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4081_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m24556_MI = 
{
	"Clear", NULL, &t4081_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t161_0_0_0;
static ParameterInfo t4081_m24557_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t161_0_0_0},
};
extern TypeInfo t4081_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24557_MI = 
{
	"Contains", NULL, &t4081_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4081_m24557_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3295_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4081_m24558_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3295_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4081_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24558_MI = 
{
	"CopyTo", NULL, &t4081_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4081_m24558_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t161_0_0_0;
static ParameterInfo t4081_m24559_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t161_0_0_0},
};
extern TypeInfo t4081_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24559_MI = 
{
	"Remove", NULL, &t4081_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4081_m24559_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4081_MIs[] =
{
	&m24553_MI,
	&m24554_MI,
	&m24555_MI,
	&m24556_MI,
	&m24557_MI,
	&m24558_MI,
	&m24559_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4083_TI;
static TypeInfo* t4081_ITIs[] = 
{
	&t618_TI,
	&t4083_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4081_0_0_0;
extern Il2CppType t4081_1_0_0;
struct t4081;
extern TypeInfo t4081_TI;
extern Il2CppGenericClass t4081_GC;
TypeInfo t4081_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4081_MIs, t4081_PIs, NULL, NULL, NULL, NULL, NULL, &t4081_TI, t4081_ITIs, NULL, &EmptyCustomAttributesCache, &t4081_TI, &t4081_0_0_0, &t4081_1_0_0, NULL, &t4081_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4083_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.PointerEventData/FramePressState>
extern TypeInfo t4083_TI;
extern Il2CppType t3459_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24560_MI = 
{
	"GetEnumerator", NULL, &t4083_TI, &t3459_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4083_MIs[] =
{
	&m24560_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4083_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4083_0_0_0;
extern Il2CppType t4083_1_0_0;
struct t4083;
extern TypeInfo t4083_TI;
extern Il2CppGenericClass t4083_GC;
TypeInfo t4083_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4083_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4083_TI, t4083_ITIs, NULL, &EmptyCustomAttributesCache, &t4083_TI, &t4083_0_0_0, &t4083_1_0_0, NULL, &t4083_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4082_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerEventData/FramePressState>
extern MethodInfo m24561_MI;
extern MethodInfo m24562_MI;
static PropertyInfo t4082____Item_PropertyInfo = 
{
	&t4082_TI, "Item", &m24561_MI, &m24562_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4082_PIs[] =
{
	&t4082____Item_PropertyInfo,
	NULL
};
extern Il2CppType t161_0_0_0;
static ParameterInfo t4082_m24563_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t161_0_0_0},
};
extern TypeInfo t4082_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24563_MI = 
{
	"IndexOf", NULL, &t4082_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4082_m24563_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t161_0_0_0;
static ParameterInfo t4082_m24564_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t161_0_0_0},
};
extern TypeInfo t4082_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24564_MI = 
{
	"Insert", NULL, &t4082_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4082_m24564_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4082_m24565_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4082_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24565_MI = 
{
	"RemoveAt", NULL, &t4082_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4082_m24565_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4082_m24561_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4082_TI;
extern Il2CppType t161_0_0_0;
extern void* RuntimeInvoker_t161_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24561_MI = 
{
	"get_Item", NULL, &t4082_TI, &t161_0_0_0, RuntimeInvoker_t161_t60, t4082_m24561_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t161_0_0_0;
static ParameterInfo t4082_m24562_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t161_0_0_0},
};
extern TypeInfo t4082_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24562_MI = 
{
	"set_Item", NULL, &t4082_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4082_m24562_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4082_MIs[] =
{
	&m24563_MI,
	&m24564_MI,
	&m24565_MI,
	&m24561_MI,
	&m24562_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4081_TI;
extern TypeInfo t4083_TI;
static TypeInfo* t4082_ITIs[] = 
{
	&t618_TI,
	&t4081_TI,
	&t4083_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4082_0_0_0;
extern Il2CppType t4082_1_0_0;
struct t4082;
extern TypeInfo t4082_TI;
extern Il2CppGenericClass t4082_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4082_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4082_MIs, t4082_PIs, NULL, NULL, NULL, NULL, NULL, &t4082_TI, t4082_ITIs, NULL, &t1426__CustomAttributeCache, &t4082_TI, &t4082_0_0_0, &t4082_1_0_0, NULL, &t4082_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1909.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1909_TI;
#include "t1909MD.h"

#include "t97.h"
#include "t1910.h"
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t1909_TI;
extern TypeInfo t97_TI;
extern TypeInfo t1910_TI;
extern TypeInfo t53_TI;
#include "t1910MD.h"
extern MethodInfo m10334_MI;
extern MethodInfo m10336_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t350_0_0_33;
FieldInfo t1909_f1_FieldInfo = 
{
	"m_Arg1", &t350_0_0_33, &t1909_TI, offsetof(t1909, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1909_FIs[] =
{
	&t1909_f1_FieldInfo,
	NULL
};
extern Il2CppType t72_0_0_0;
extern Il2CppType t573_0_0_0;
extern Il2CppType t97_0_0_0;
static ParameterInfo t1909_m10332_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t72_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t97_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10332_MI = 
{
	".ctor", (methodPointerType)&m8007_gshared, &t1909_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7_t7, t1909_m10332_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t1909_m10333_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t1909_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10333_MI = 
{
	"Invoke", (methodPointerType)&m8009_gshared, &t1909_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1909_m10333_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1909_MIs[] =
{
	&m10332_MI,
	&m10333_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m10333_MI;
extern MethodInfo m10337_MI;
static MethodInfo* t1909_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m10333_MI,
	&m10337_MI,
};
extern Il2CppType t1911_0_0_0;
extern TypeInfo t1911_TI;
extern MethodInfo m18244_MI;
extern TypeInfo t97_TI;
extern MethodInfo m10339_MI;
extern MethodInfo m10334_MI;
extern TypeInfo t97_TI;
extern MethodInfo m10336_MI;
static void* t1909_RGCTXData[8] = 
{
	(void*)&t1911_0_0_0,
	&t1911_TI,
	&m18244_MI,
	&t97_TI,
	&m10339_MI,
	&m10334_MI,
	&t97_TI,
	&m10336_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1909_0_0_0;
extern Il2CppType t1909_1_0_0;
extern TypeInfo t1910_TI;
struct t1909;
extern TypeInfo t1909_TI;
extern Il2CppGenericClass t1909_GC;
TypeInfo t1909_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t1909_MIs, NULL, t1909_FIs, NULL, &t1910_TI, NULL, NULL, &t1909_TI, NULL, t1909_VT, &EmptyCustomAttributesCache, &t1909_TI, &t1909_0_0_0, &t1909_1_0_0, NULL, &t1909_GC, NULL, NULL, NULL, t1909_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1909), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1910_TI;

#include "t1911.h"
extern TypeInfo t1910_TI;
extern TypeInfo t1911_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern TypeInfo t97_TI;
extern TypeInfo t53_TI;
#include "t1911MD.h"
extern Il2CppType t1911_0_0_0;
extern MethodInfo m2910_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3073_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m18244_MI;
extern MethodInfo m2911_MI;
extern MethodInfo m10339_MI;
extern MethodInfo m3069_MI;
extern MethodInfo m3067_MI;
struct t572;
#define m18244(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
extern MethodInfo m18244_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t1911_0_0_1;
FieldInfo t1910_f0_FieldInfo = 
{
	"Delegate", &t1911_0_0_1, &t1910_TI, offsetof(t1910, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1910_FIs[] =
{
	&t1910_f0_FieldInfo,
	NULL
};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t1910_m10334_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t1910_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10334_MI = 
{
	".ctor", (methodPointerType)&m8010_gshared, &t1910_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t1910_m10334_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1911_0_0_0;
static ParameterInfo t1910_m10335_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t1911_0_0_0},
};
extern TypeInfo t1910_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10335_MI = 
{
	".ctor", (methodPointerType)&m8011_gshared, &t1910_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1910_m10335_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t1910_m10336_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t1910_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10336_MI = 
{
	"Invoke", (methodPointerType)&m8012_gshared, &t1910_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1910_m10336_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t1910_m10337_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t1910_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10337_MI = 
{
	"Find", (methodPointerType)&m8013_gshared, &t1910_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t1910_m10337_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1910_MIs[] =
{
	&m10334_MI,
	&m10335_MI,
	&m10336_MI,
	&m10337_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m10336_MI;
extern MethodInfo m10337_MI;
static MethodInfo* t1910_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m10336_MI,
	&m10337_MI,
};
extern Il2CppType t1911_0_0_0;
extern TypeInfo t1911_TI;
extern MethodInfo m18244_MI;
extern TypeInfo t97_TI;
extern MethodInfo m10339_MI;
static void* t1910_RGCTXData[5] = 
{
	(void*)&t1911_0_0_0,
	&t1911_TI,
	&m18244_MI,
	&t97_TI,
	&m10339_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1910_0_0_0;
extern Il2CppType t1910_1_0_0;
extern TypeInfo t572_TI;
struct t1910;
extern TypeInfo t1910_TI;
extern Il2CppGenericClass t1910_GC;
TypeInfo t1910_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t1910_MIs, NULL, t1910_FIs, NULL, &t572_TI, NULL, NULL, &t1910_TI, NULL, t1910_VT, &EmptyCustomAttributesCache, &t1910_TI, &t1910_0_0_0, &t1910_1_0_0, NULL, &t1910_GC, NULL, NULL, NULL, t1910_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1910), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1911_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseInputModule>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t1911_m10338_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t1911_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m10338_MI = 
{
	".ctor", (methodPointerType)&m8014_gshared, &t1911_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t1911_m10338_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t97_0_0_0;
static ParameterInfo t1911_m10339_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t97_0_0_0},
};
extern TypeInfo t1911_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10339_MI = 
{
	"Invoke", (methodPointerType)&m8015_gshared, &t1911_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1911_m10339_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t97_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t1911_m10340_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t97_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1911_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10340_MI = 
{
	"BeginInvoke", (methodPointerType)&m8016_gshared, &t1911_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7, t1911_m10340_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t1911_m10341_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t1911_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10341_MI = 
{
	"EndInvoke", (methodPointerType)&m8017_gshared, &t1911_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1911_m10341_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1911_MIs[] =
{
	&m10338_MI,
	&m10339_MI,
	&m10340_MI,
	&m10341_MI,
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
extern MethodInfo m10339_MI;
extern MethodInfo m10340_MI;
extern MethodInfo m10341_MI;
static MethodInfo* t1911_VT[] =
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
	&m10339_MI,
	&m10340_MI,
	&m10341_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t1911_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1911_0_0_0;
extern Il2CppType t1911_1_0_0;
extern TypeInfo t245_TI;
struct t1911;
extern TypeInfo t1911_TI;
extern Il2CppGenericClass t1911_GC;
TypeInfo t1911_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t1911_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t1911_TI, NULL, t1911_VT, &EmptyCustomAttributesCache, &t1911_TI, &t1911_0_0_0, &t1911_1_0_0, t1911_IOs, &t1911_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1911), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3460_TI;

#include "t166.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.PointerInputModule>
extern MethodInfo m24566_MI;
static PropertyInfo t3460____Current_PropertyInfo = 
{
	&t3460_TI, "Current", &m24566_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3460_PIs[] =
{
	&t3460____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3460_TI;
extern Il2CppType t166_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24566_MI = 
{
	"get_Current", NULL, &t3460_TI, &t166_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3460_MIs[] =
{
	&m24566_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3460_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3460_0_0_0;
extern Il2CppType t3460_1_0_0;
struct t3460;
extern TypeInfo t3460_TI;
extern Il2CppGenericClass t3460_GC;
TypeInfo t3460_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3460_MIs, t3460_PIs, NULL, NULL, NULL, NULL, NULL, &t3460_TI, t3460_ITIs, NULL, &EmptyCustomAttributesCache, &t3460_TI, &t3460_0_0_0, &t3460_1_0_0, NULL, &t3460_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1912.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1912_TI;
#include "t1912MD.h"

extern TypeInfo t1912_TI;
extern TypeInfo t166_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m10346_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18250_MI;
struct t52;
#define m18250(__this, p0, method) (t166 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m18250_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerInputModule>
extern Il2CppType t52_0_0_1;
FieldInfo t1912_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t1912_TI, offsetof(t1912, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t1912_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t1912_TI, offsetof(t1912, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t1912_FIs[] =
{
	&t1912_f0_FieldInfo,
	&t1912_f1_FieldInfo,
	NULL
};
extern MethodInfo m10343_MI;
static PropertyInfo t1912____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1912_TI, "System.Collections.IEnumerator.Current", &m10343_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10346_MI;
static PropertyInfo t1912____Current_PropertyInfo = 
{
	&t1912_TI, "Current", &m10346_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1912_PIs[] =
{
	&t1912____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1912____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t1912_m10342_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t1912_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10342_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t1912_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1912_m10342_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1912_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10343_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t1912_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1912_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10344_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t1912_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1912_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10345_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t1912_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1912_TI;
extern Il2CppType t166_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10346_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t1912_TI, &t166_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1912_MIs[] =
{
	&m10342_MI,
	&m10343_MI,
	&m10344_MI,
	&m10345_MI,
	&m10346_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m10343_MI;
extern MethodInfo m10345_MI;
extern MethodInfo m10344_MI;
extern MethodInfo m10346_MI;
static MethodInfo* t1912_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m10343_MI,
	&m10345_MI,
	&m10344_MI,
	&m10346_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3460_TI;
static TypeInfo* t1912_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3460_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3460_TI;
static Il2CppInterfaceOffsetPair t1912_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3460_TI, 7},
};
extern MethodInfo m10346_MI;
extern TypeInfo t166_TI;
extern MethodInfo m18250_MI;
static void* t1912_RGCTXData[3] = 
{
	&m10346_MI,
	&t166_TI,
	&m18250_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1912_0_0_0;
extern Il2CppType t1912_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t1912_TI;
extern Il2CppGenericClass t1912_GC;
extern TypeInfo t52_TI;
TypeInfo t1912_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1912_MIs, t1912_PIs, t1912_FIs, NULL, &t159_TI, NULL, &t52_TI, &t1912_TI, t1912_ITIs, t1912_VT, &EmptyCustomAttributesCache, &t1912_TI, &t1912_0_0_0, &t1912_1_0_0, t1912_IOs, &t1912_GC, NULL, NULL, NULL, t1912_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1912)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4084_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule>
extern MethodInfo m24567_MI;
static PropertyInfo t4084____Count_PropertyInfo = 
{
	&t4084_TI, "Count", &m24567_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24568_MI;
static PropertyInfo t4084____IsReadOnly_PropertyInfo = 
{
	&t4084_TI, "IsReadOnly", &m24568_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4084_PIs[] =
{
	&t4084____Count_PropertyInfo,
	&t4084____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4084_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24567_MI = 
{
	"get_Count", NULL, &t4084_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4084_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m24568_MI = 
{
	"get_IsReadOnly", NULL, &t4084_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t166_0_0_0;
static ParameterInfo t4084_m24569_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t166_0_0_0},
};
extern TypeInfo t4084_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24569_MI = 
{
	"Add", NULL, &t4084_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4084_m24569_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4084_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m24570_MI = 
{
	"Clear", NULL, &t4084_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t166_0_0_0;
static ParameterInfo t4084_m24571_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t166_0_0_0},
};
extern TypeInfo t4084_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24571_MI = 
{
	"Contains", NULL, &t4084_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4084_m24571_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3296_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4084_m24572_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3296_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4084_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24572_MI = 
{
	"CopyTo", NULL, &t4084_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4084_m24572_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t166_0_0_0;
static ParameterInfo t4084_m24573_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t166_0_0_0},
};
extern TypeInfo t4084_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24573_MI = 
{
	"Remove", NULL, &t4084_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4084_m24573_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4084_MIs[] =
{
	&m24567_MI,
	&m24568_MI,
	&m24569_MI,
	&m24570_MI,
	&m24571_MI,
	&m24572_MI,
	&m24573_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4086_TI;
static TypeInfo* t4084_ITIs[] = 
{
	&t618_TI,
	&t4086_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4084_0_0_0;
extern Il2CppType t4084_1_0_0;
struct t4084;
extern TypeInfo t4084_TI;
extern Il2CppGenericClass t4084_GC;
TypeInfo t4084_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4084_MIs, t4084_PIs, NULL, NULL, NULL, NULL, NULL, &t4084_TI, t4084_ITIs, NULL, &EmptyCustomAttributesCache, &t4084_TI, &t4084_0_0_0, &t4084_1_0_0, NULL, &t4084_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4086_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.PointerInputModule>
extern TypeInfo t4086_TI;
extern Il2CppType t3460_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24574_MI = 
{
	"GetEnumerator", NULL, &t4086_TI, &t3460_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4086_MIs[] =
{
	&m24574_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4086_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4086_0_0_0;
extern Il2CppType t4086_1_0_0;
struct t4086;
extern TypeInfo t4086_TI;
extern Il2CppGenericClass t4086_GC;
TypeInfo t4086_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4086_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4086_TI, t4086_ITIs, NULL, &EmptyCustomAttributesCache, &t4086_TI, &t4086_0_0_0, &t4086_1_0_0, NULL, &t4086_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4085_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerInputModule>
extern MethodInfo m24575_MI;
extern MethodInfo m24576_MI;
static PropertyInfo t4085____Item_PropertyInfo = 
{
	&t4085_TI, "Item", &m24575_MI, &m24576_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4085_PIs[] =
{
	&t4085____Item_PropertyInfo,
	NULL
};
extern Il2CppType t166_0_0_0;
static ParameterInfo t4085_m24577_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t166_0_0_0},
};
extern TypeInfo t4085_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24577_MI = 
{
	"IndexOf", NULL, &t4085_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4085_m24577_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t166_0_0_0;
static ParameterInfo t4085_m24578_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t166_0_0_0},
};
extern TypeInfo t4085_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24578_MI = 
{
	"Insert", NULL, &t4085_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4085_m24578_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4085_m24579_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4085_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24579_MI = 
{
	"RemoveAt", NULL, &t4085_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4085_m24579_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4085_m24575_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4085_TI;
extern Il2CppType t166_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24575_MI = 
{
	"get_Item", NULL, &t4085_TI, &t166_0_0_0, RuntimeInvoker_t7_t60, t4085_m24575_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t166_0_0_0;
static ParameterInfo t4085_m24576_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t166_0_0_0},
};
extern TypeInfo t4085_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24576_MI = 
{
	"set_Item", NULL, &t4085_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4085_m24576_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4085_MIs[] =
{
	&m24577_MI,
	&m24578_MI,
	&m24579_MI,
	&m24575_MI,
	&m24576_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4084_TI;
extern TypeInfo t4086_TI;
static TypeInfo* t4085_ITIs[] = 
{
	&t618_TI,
	&t4084_TI,
	&t4086_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4085_0_0_0;
extern Il2CppType t4085_1_0_0;
struct t4085;
extern TypeInfo t4085_TI;
extern Il2CppGenericClass t4085_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4085_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4085_MIs, t4085_PIs, NULL, NULL, NULL, NULL, NULL, &t4085_TI, t4085_ITIs, NULL, &t1426__CustomAttributeCache, &t4085_TI, &t4085_0_0_0, &t4085_1_0_0, NULL, &t4085_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1913.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1913_TI;
#include "t1913MD.h"

#include "t1914.h"
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t1913_TI;
extern TypeInfo t166_TI;
extern TypeInfo t1914_TI;
extern TypeInfo t53_TI;
#include "t1914MD.h"
extern MethodInfo m10349_MI;
extern MethodInfo m10351_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.EventSystems.PointerInputModule>
extern Il2CppType t350_0_0_33;
FieldInfo t1913_f1_FieldInfo = 
{
	"m_Arg1", &t350_0_0_33, &t1913_TI, offsetof(t1913, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1913_FIs[] =
{
	&t1913_f1_FieldInfo,
	NULL
};
extern Il2CppType t72_0_0_0;
extern Il2CppType t573_0_0_0;
extern Il2CppType t166_0_0_0;
static ParameterInfo t1913_m10347_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t72_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t166_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10347_MI = 
{
	".ctor", (methodPointerType)&m8007_gshared, &t1913_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7_t7, t1913_m10347_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t1913_m10348_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t1913_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10348_MI = 
{
	"Invoke", (methodPointerType)&m8009_gshared, &t1913_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1913_m10348_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1913_MIs[] =
{
	&m10347_MI,
	&m10348_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m10348_MI;
extern MethodInfo m10352_MI;
static MethodInfo* t1913_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m10348_MI,
	&m10352_MI,
};
extern Il2CppType t1915_0_0_0;
extern TypeInfo t1915_TI;
extern MethodInfo m18260_MI;
extern TypeInfo t166_TI;
extern MethodInfo m10354_MI;
extern MethodInfo m10349_MI;
extern TypeInfo t166_TI;
extern MethodInfo m10351_MI;
static void* t1913_RGCTXData[8] = 
{
	(void*)&t1915_0_0_0,
	&t1915_TI,
	&m18260_MI,
	&t166_TI,
	&m10354_MI,
	&m10349_MI,
	&t166_TI,
	&m10351_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1913_0_0_0;
extern Il2CppType t1913_1_0_0;
extern TypeInfo t1914_TI;
struct t1913;
extern TypeInfo t1913_TI;
extern Il2CppGenericClass t1913_GC;
TypeInfo t1913_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t1913_MIs, NULL, t1913_FIs, NULL, &t1914_TI, NULL, NULL, &t1913_TI, NULL, t1913_VT, &EmptyCustomAttributesCache, &t1913_TI, &t1913_0_0_0, &t1913_1_0_0, NULL, &t1913_GC, NULL, NULL, NULL, t1913_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1913), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1914_TI;

#include "t1915.h"
extern TypeInfo t1914_TI;
extern TypeInfo t1915_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern TypeInfo t166_TI;
extern TypeInfo t53_TI;
#include "t1915MD.h"
extern Il2CppType t1915_0_0_0;
extern MethodInfo m2910_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3073_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m18260_MI;
extern MethodInfo m2911_MI;
extern MethodInfo m10354_MI;
extern MethodInfo m3069_MI;
extern MethodInfo m3067_MI;
struct t572;
#define m18260(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
extern MethodInfo m18260_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.PointerInputModule>
extern Il2CppType t1915_0_0_1;
FieldInfo t1914_f0_FieldInfo = 
{
	"Delegate", &t1915_0_0_1, &t1914_TI, offsetof(t1914, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1914_FIs[] =
{
	&t1914_f0_FieldInfo,
	NULL
};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t1914_m10349_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t1914_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10349_MI = 
{
	".ctor", (methodPointerType)&m8010_gshared, &t1914_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t1914_m10349_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1915_0_0_0;
static ParameterInfo t1914_m10350_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t1915_0_0_0},
};
extern TypeInfo t1914_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10350_MI = 
{
	".ctor", (methodPointerType)&m8011_gshared, &t1914_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1914_m10350_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t1914_m10351_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t1914_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10351_MI = 
{
	"Invoke", (methodPointerType)&m8012_gshared, &t1914_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1914_m10351_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t1914_m10352_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t1914_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10352_MI = 
{
	"Find", (methodPointerType)&m8013_gshared, &t1914_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t1914_m10352_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1914_MIs[] =
{
	&m10349_MI,
	&m10350_MI,
	&m10351_MI,
	&m10352_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m10351_MI;
extern MethodInfo m10352_MI;
static MethodInfo* t1914_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m10351_MI,
	&m10352_MI,
};
extern Il2CppType t1915_0_0_0;
extern TypeInfo t1915_TI;
extern MethodInfo m18260_MI;
extern TypeInfo t166_TI;
extern MethodInfo m10354_MI;
static void* t1914_RGCTXData[5] = 
{
	(void*)&t1915_0_0_0,
	&t1915_TI,
	&m18260_MI,
	&t166_TI,
	&m10354_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1914_0_0_0;
extern Il2CppType t1914_1_0_0;
extern TypeInfo t572_TI;
struct t1914;
extern TypeInfo t1914_TI;
extern Il2CppGenericClass t1914_GC;
TypeInfo t1914_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t1914_MIs, NULL, t1914_FIs, NULL, &t572_TI, NULL, NULL, &t1914_TI, NULL, t1914_VT, &EmptyCustomAttributesCache, &t1914_TI, &t1914_0_0_0, &t1914_1_0_0, NULL, &t1914_GC, NULL, NULL, NULL, t1914_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1914), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1915_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.PointerInputModule>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t1915_m10353_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t1915_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m10353_MI = 
{
	".ctor", (methodPointerType)&m8014_gshared, &t1915_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t1915_m10353_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t166_0_0_0;
static ParameterInfo t1915_m10354_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t166_0_0_0},
};
extern TypeInfo t1915_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10354_MI = 
{
	"Invoke", (methodPointerType)&m8015_gshared, &t1915_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1915_m10354_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t166_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t1915_m10355_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t166_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t1915_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10355_MI = 
{
	"BeginInvoke", (methodPointerType)&m8016_gshared, &t1915_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7, t1915_m10355_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t1915_m10356_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t1915_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10356_MI = 
{
	"EndInvoke", (methodPointerType)&m8017_gshared, &t1915_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1915_m10356_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1915_MIs[] =
{
	&m10353_MI,
	&m10354_MI,
	&m10355_MI,
	&m10356_MI,
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
extern MethodInfo m10354_MI;
extern MethodInfo m10355_MI;
extern MethodInfo m10356_MI;
static MethodInfo* t1915_VT[] =
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
	&m10354_MI,
	&m10355_MI,
	&m10356_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t1915_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t1915_0_0_0;
extern Il2CppType t1915_1_0_0;
extern TypeInfo t245_TI;
struct t1915;
extern TypeInfo t1915_TI;
extern Il2CppGenericClass t1915_GC;
TypeInfo t1915_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t1915_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t1915_TI, NULL, t1915_VT, &EmptyCustomAttributesCache, &t1915_TI, &t1915_0_0_0, &t1915_1_0_0, t1915_IOs, &t1915_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1915), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t167.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t167_TI;
#include "t167MD.h"

#include "t101.h"
#include "t852.h"
#include "t353.h"
#include "t732.h"
#include "t733.h"
#include "t354.h"
#include "t854.h"
#include "t1918.h"
#include "t1932.h"
#include "t355.h"
#include "t1933.h"
#include "t1934.h"
#include "t1937.h"
extern TypeInfo t167_TI;
extern TypeInfo t53_TI;
extern TypeInfo t60_TI;
extern TypeInfo t101_TI;
extern TypeInfo t87_TI;
extern TypeInfo t1917_TI;
extern TypeInfo t852_TI;
extern TypeInfo t55_TI;
extern TypeInfo t353_TI;
extern TypeInfo t1919_TI;
extern TypeInfo t354_TI;
extern TypeInfo t3020_TI;
extern TypeInfo t854_TI;
extern TypeInfo t1918_TI;
extern TypeInfo t1932_TI;
extern TypeInfo t355_TI;
extern TypeInfo t1933_TI;
extern TypeInfo t88_TI;
extern TypeInfo t1934_TI;
extern TypeInfo t731_TI;
extern TypeInfo t1476_TI;
extern TypeInfo t1916_TI;
extern TypeInfo t348_TI;
extern TypeInfo t881_TI;
extern TypeInfo t1937_TI;
extern TypeInfo t5316_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
#include "t353MD.h"
#include "t354MD.h"
#include "t1918MD.h"
#include "t1932MD.h"
#include "t355MD.h"
#include "t1933MD.h"
#include "t1934MD.h"
#include "t881MD.h"
#include "t1937MD.h"
#include "t732MD.h"
#include "t34MD.h"
#include "t854MD.h"
extern Il2CppType t1917_0_0_0;
extern Il2CppType t1919_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t101_0_0_0;
extern MethodInfo m10385_MI;
extern MethodInfo m10386_MI;
extern MethodInfo m10373_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m24580_MI;
extern MethodInfo m24581_MI;
extern MethodInfo m10380_MI;
extern MethodInfo m10432_MI;
extern MethodInfo m116_MI;
extern MethodInfo m10374_MI;
extern MethodInfo m1560_MI;
extern MethodInfo m1559_MI;
extern MethodInfo m1538_MI;
extern MethodInfo m10387_MI;
extern MethodInfo m10379_MI;
extern MethodInfo m1539_MI;
extern MethodInfo m10376_MI;
extern MethodInfo m10388_MI;
extern MethodInfo m10461_MI;
extern MethodInfo m18363_MI;
extern MethodInfo m10377_MI;
extern MethodInfo m10470_MI;
extern MethodInfo m18365_MI;
extern MethodInfo m10448_MI;
extern MethodInfo m10474_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m10483_MI;
extern MethodInfo m10375_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m10372_MI;
extern MethodInfo m10389_MI;
extern MethodInfo m18366_MI;
extern MethodInfo m4529_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m3874_MI;
extern MethodInfo m10494_MI;
extern MethodInfo m24582_MI;
extern MethodInfo m5859_MI;
extern MethodInfo m5865_MI;
extern MethodInfo m5868_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m5855_MI;
extern MethodInfo m3964_MI;
extern MethodInfo m1876_MI;
extern MethodInfo m6583_MI;
extern MethodInfo m3933_MI;
extern MethodInfo m1537_MI;
extern MethodInfo m24583_MI;
extern MethodInfo m4471_MI;
struct t167;
 void m18363 (t167 * __this, t3020* p0, int32_t p1, t1918 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18363_MI;
struct t167;
 void m18365 (t167 * __this, t52 * p0, int32_t p1, t1932 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18365_MI;
struct t167;
 void m18366 (t167 * __this, t1919* p0, int32_t p1, t1932 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18366_MI;


extern MethodInfo m1536_MI;
 void m1536 (t167 * __this, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		m10374(__this, ((int32_t)10), (t7*)NULL, &m10374_MI);
		return;
	}
}
extern MethodInfo m10357_MI;
 void m10357 (t167 * __this, t7* p0, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		m10374(__this, ((int32_t)10), p0, &m10374_MI);
		return;
	}
}
extern MethodInfo m10358_MI;
 void m10358 (t167 * __this, int32_t p0, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		m10374(__this, p0, (t7*)NULL, &m10374_MI);
		return;
	}
}
extern MethodInfo m10359_MI;
 void m10359 (t167 * __this, t732 * p0, t733  p1, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		__this->f13 = p0;
		return;
	}
}
extern MethodInfo m10360_MI;
 void m10360 (t167 * __this, t7 * p0, t7 * p1, MethodInfo* method){
	{
		int32_t L_0 = m10385(__this, p0, &m10385_MI);
		t101 * L_1 = m10386(__this, p1, &m10386_MI);
		VirtActionInvoker2< int32_t, t101 * >::Invoke(&m10373_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10361_MI;
 bool m10361 (t167 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m10362_MI;
 t7 * m10362 (t167 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m10363_MI;
 bool m10363 (t167 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m10364_MI;
 void m10364 (t167 * __this, t354  p0, MethodInfo* method){
	{
		int32_t L_0 = m1560((&p0), &m1560_MI);
		t101 * L_1 = m1559((&p0), &m1559_MI);
		VirtActionInvoker2< int32_t, t101 * >::Invoke(&m1538_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10365_MI;
 bool m10365 (t167 * __this, t354  p0, MethodInfo* method){
	{
		bool L_0 = m10387(__this, p0, &m10387_MI);
		return L_0;
	}
}
extern MethodInfo m10366_MI;
 void m10366 (t167 * __this, t1919* p0, int32_t p1, MethodInfo* method){
	{
		m10379(__this, p0, p1, &m10379_MI);
		return;
	}
}
extern MethodInfo m10367_MI;
 bool m10367 (t167 * __this, t354  p0, MethodInfo* method){
	{
		bool L_0 = m10387(__this, p0, &m10387_MI);
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
		int32_t L_1 = m1560((&p0), &m1560_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(&m1539_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m10368_MI;
 void m10368 (t167 * __this, t52 * p0, int32_t p1, MethodInfo* method){
	t1919* V_0 = {0};
	t3020* V_1 = {0};
	int32_t G_B5_0 = 0;
	t3020* G_B5_1 = {0};
	t167 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t3020* G_B4_1 = {0};
	t167 * G_B4_2 = {0};
	{
		V_0 = ((t1919*)IsInst(p0, InitializedTypeInfo(&t1919_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		m10379(__this, V_0, p1, &m10379_MI);
		return;
	}

IL_0013:
	{
		m10376(__this, p0, p1, &m10376_MI);
		V_1 = ((t3020*)IsInst(p0, InitializedTypeInfo(&t3020_TI)));
		if (!V_1)
		{
			goto IL_004b;
		}
	}
	{
		G_B4_0 = p1;
		G_B4_1 = V_1;
		G_B4_2 = ((t167 *)(__this));
		if ((((t167_SFs*)InitializedTypeInfo(&t167_TI)->static_fields)->f15))
		{
			G_B5_0 = p1;
			G_B5_1 = V_1;
			G_B5_2 = ((t167 *)(__this));
			goto IL_0040;
		}
	}
	{
		t114 L_0 = { &m10388_MI };
		t1918 * L_1 = (t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1918_TI));
		m10461(L_1, NULL, L_0, &m10461_MI);
		((t167_SFs*)InitializedTypeInfo(&t167_TI)->static_fields)->f15 = L_1;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t167 *)(G_B4_2));
	}

IL_0040:
	{
		m18363(G_B5_2, G_B5_1, G_B5_0, (((t167_SFs*)InitializedTypeInfo(&t167_TI)->static_fields)->f15), &m18363_MI);
		return;
	}

IL_004b:
	{
		t114 L_2 = { &m10377_MI };
		t1932 * L_3 = (t1932 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1932_TI));
		m10470(L_3, NULL, L_2, &m10470_MI);
		m18365(__this, p0, p1, L_3, &m18365_MI);
		return;
	}
}
extern MethodInfo m10369_MI;
 t7 * m10369 (t167 * __this, MethodInfo* method){
	{
		t355  L_0 = {0};
		m10448(&L_0, __this, &m10448_MI);
		t355  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t355_TI), &L_1);
		return (t7 *)L_2;
	}
}
extern MethodInfo m10370_MI;
 t7* m10370 (t167 * __this, MethodInfo* method){
	{
		t355  L_0 = {0};
		m10448(&L_0, __this, &m10448_MI);
		t355  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t355_TI), &L_1);
		return (t7*)L_2;
	}
}
extern MethodInfo m10371_MI;
 t7 * m10371 (t167 * __this, MethodInfo* method){
	{
		t1933 * L_0 = (t1933 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1933_TI));
		m10474(L_0, __this, &m10474_MI);
		return L_0;
	}
}
extern MethodInfo m10372_MI;
 int32_t m10372 (t167 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m10373_MI;
 void m10373 (t167 * __this, int32_t p0, t101 * p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = p0;
		t7 * L_1 = Box(InitializedTypeInfo(&t60_TI), &L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		t87 * L_2 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_2, (t34*) &_stringLiteral539, &m3066_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0013:
	{
		t7* L_3 = (__this->f12);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m24580_MI, L_3, p0);
		V_0 = ((int32_t)(L_4|((int32_t)-2147483648)));
		t731* L_5 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_5)->max_length)))));
		t731* L_6 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_6, V_1))-1));
		V_3 = (-1);
		if ((((int32_t)V_2) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		t1476* L_7 = (__this->f5);
		int32_t L_8 = (((t852 *)(t852 *)SZArrayLdElema(L_7, V_2))->f0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_0078;
		}
	}
	{
		t7* L_9 = (__this->f12);
		t731* L_10 = (__this->f6);
		bool L_11 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m24581_MI, L_9, (*(int32_t*)(int32_t*)SZArrayLdElema(L_10, V_2)), p0);
		if (!L_11)
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
		t1476* L_12 = (__this->f5);
		int32_t L_13 = (((t852 *)(t852 *)SZArrayLdElema(L_12, V_2))->f1);
		V_2 = L_13;
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
		int32_t L_14 = (__this->f10);
		int32_t L_15 = ((int32_t)(L_14+1));
		V_4 = L_15;
		__this->f10 = L_15;
		int32_t L_16 = (__this->f11);
		if ((((int32_t)V_4) <= ((int32_t)L_16)))
		{
			goto IL_00c9;
		}
	}
	{
		m10380(__this, &m10380_MI);
		t731* L_17 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_17)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_18 = (__this->f9);
		V_2 = L_18;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_19 = (__this->f8);
		int32_t L_20 = L_19;
		V_4 = L_20;
		__this->f8 = ((int32_t)(L_20+1));
		V_2 = V_4;
		goto IL_0101;
	}

IL_00ea:
	{
		t1476* L_21 = (__this->f5);
		int32_t L_22 = (((t852 *)(t852 *)SZArrayLdElema(L_21, V_2))->f1);
		__this->f9 = L_22;
	}

IL_0101:
	{
		t1476* L_23 = (__this->f5);
		t731* L_24 = (__this->f4);
		((t852 *)(t852 *)SZArrayLdElema(L_23, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_24, V_1))-1));
		t731* L_25 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_25, V_1)) = (int32_t)((int32_t)(V_2+1));
		t1476* L_26 = (__this->f5);
		((t852 *)(t852 *)SZArrayLdElema(L_26, V_2))->f0 = V_0;
		t731* L_27 = (__this->f6);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_27, V_2)) = (int32_t)p0;
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
		t1476* L_28 = (__this->f5);
		t1476* L_29 = (__this->f5);
		int32_t L_30 = (((t852 *)(t852 *)SZArrayLdElema(L_29, V_2))->f1);
		((t852 *)(t852 *)SZArrayLdElema(L_28, V_3))->f1 = L_30;
		t1476* L_31 = (__this->f5);
		t731* L_32 = (__this->f4);
		((t852 *)(t852 *)SZArrayLdElema(L_31, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_32, V_1))-1));
		t731* L_33 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_33, V_1)) = (int32_t)((int32_t)(V_2+1));
	}

IL_0194:
	{
		t1916* L_34 = (__this->f7);
		*((t101 **)(t101 **)SZArrayLdElema(L_34, V_2)) = (t101 *)p1;
		int32_t L_35 = (__this->f14);
		__this->f14 = ((int32_t)(L_35+1));
		return;
	}
}
extern MethodInfo m10374_MI;
 void m10374 (t167 * __this, int32_t p0, t7* p1, MethodInfo* method){
	t7* V_0 = {0};
	t167 * G_B4_0 = {0};
	t167 * G_B3_0 = {0};
	t7* G_B5_0 = {0};
	t167 * G_B5_1 = {0};
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
		G_B3_0 = ((t167 *)(__this));
		if (!p1)
		{
			G_B4_0 = ((t167 *)(__this));
			goto IL_0018;
		}
	}
	{
		V_0 = p1;
		G_B5_0 = V_0;
		G_B5_1 = ((t167 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1934_TI));
		t1934 * L_1 = m10483(NULL, &m10483_MI);
		G_B5_0 = ((t7*)(L_1));
		G_B5_1 = ((t167 *)(G_B4_0));
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
		m10375(__this, p0, &m10375_MI);
		__this->f14 = 0;
		return;
	}
}
extern MethodInfo m10375_MI;
 void m10375 (t167 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f4 = ((t731*)SZArrayNew(InitializedTypeInfo(&t731_TI), p0));
		__this->f5 = ((t1476*)SZArrayNew(InitializedTypeInfo(&t1476_TI), p0));
		__this->f9 = (-1);
		__this->f6 = ((t731*)SZArrayNew(InitializedTypeInfo(&t731_TI), p0));
		__this->f7 = ((t1916*)SZArrayNew(InitializedTypeInfo(&t1916_TI), p0));
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
extern MethodInfo m10376_MI;
 void m10376 (t167 * __this, t52 * p0, int32_t p1, MethodInfo* method){
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
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m10372_MI, __this);
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
extern MethodInfo m10377_MI;
 t354  m10377 (t7 * __this, int32_t p0, t101 * p1, MethodInfo* method){
	{
		t354  L_0 = {0};
		m10389(&L_0, p0, p1, &m10389_MI);
		return L_0;
	}
}
extern MethodInfo m10378_MI;
 t101 * m10378 (t7 * __this, int32_t p0, t101 * p1, MethodInfo* method){
	{
		return p1;
	}
}
extern MethodInfo m10379_MI;
 void m10379 (t167 * __this, t1919* p0, int32_t p1, MethodInfo* method){
	{
		m10376(__this, (t52 *)(t52 *)p0, p1, &m10376_MI);
		t114 L_0 = { &m10377_MI };
		t1932 * L_1 = (t1932 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1932_TI));
		m10470(L_1, NULL, L_0, &m10470_MI);
		m18366(__this, p0, p1, L_1, &m18366_MI);
		return;
	}
}
extern MethodInfo m10380_MI;
 void m10380 (t167 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t731* V_1 = {0};
	t1476* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t731* V_7 = {0};
	t1916* V_8 = {0};
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
		t731* L_4 = (__this->f6);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m24580_MI, L_3, (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, V_4)));
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
		V_7 = ((t731*)SZArrayNew(InitializedTypeInfo(&t731_TI), V_0));
		V_8 = ((t1916*)SZArrayNew(InitializedTypeInfo(&t1916_TI), V_0));
		t731* L_10 = (__this->f6);
		int32_t L_11 = (__this->f8);
		m3878(NULL, (t52 *)(t52 *)L_10, 0, (t52 *)(t52 *)V_7, 0, L_11, &m3878_MI);
		t1916* L_12 = (__this->f7);
		int32_t L_13 = (__this->f8);
		m3878(NULL, (t52 *)(t52 *)L_12, 0, (t52 *)(t52 *)V_8, 0, L_13, &m3878_MI);
		__this->f6 = V_7;
		__this->f7 = V_8;
		__this->f11 = (((int32_t)((float)((((float)V_0))*(0.9f)))));
		return;
	}
}
extern MethodInfo m1538_MI;
 void m1538 (t167 * __this, int32_t p0, t101 * p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = p0;
		t7 * L_1 = Box(InitializedTypeInfo(&t60_TI), &L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		t87 * L_2 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_2, (t34*) &_stringLiteral539, &m3066_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0013:
	{
		t7* L_3 = (__this->f12);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m24580_MI, L_3, p0);
		V_0 = ((int32_t)(L_4|((int32_t)-2147483648)));
		t731* L_5 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_5)->max_length)))));
		t731* L_6 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_6, V_1))-1));
		goto IL_008f;
	}

IL_0044:
	{
		t1476* L_7 = (__this->f5);
		int32_t L_8 = (((t852 *)(t852 *)SZArrayLdElema(L_7, V_2))->f0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		t7* L_9 = (__this->f12);
		t731* L_10 = (__this->f6);
		bool L_11 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m24581_MI, L_9, (*(int32_t*)(int32_t*)SZArrayLdElema(L_10, V_2)), p0);
		if (!L_11)
		{
			goto IL_007d;
		}
	}
	{
		t348 * L_12 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m2046(L_12, (t34*) &_stringLiteral544, &m2046_MI);
		il2cpp_codegen_raise_exception (L_12);
	}

IL_007d:
	{
		t1476* L_13 = (__this->f5);
		int32_t L_14 = (((t852 *)(t852 *)SZArrayLdElema(L_13, V_2))->f1);
		V_2 = L_14;
	}

IL_008f:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_15 = (__this->f10);
		int32_t L_16 = ((int32_t)(L_15+1));
		V_3 = L_16;
		__this->f10 = L_16;
		int32_t L_17 = (__this->f11);
		if ((((int32_t)V_3) <= ((int32_t)L_17)))
		{
			goto IL_00c3;
		}
	}
	{
		m10380(__this, &m10380_MI);
		t731* L_18 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_18)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_19 = (__this->f9);
		V_2 = L_19;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_20 = (__this->f8);
		int32_t L_21 = L_20;
		V_3 = L_21;
		__this->f8 = ((int32_t)(L_21+1));
		V_2 = V_3;
		goto IL_00f9;
	}

IL_00e2:
	{
		t1476* L_22 = (__this->f5);
		int32_t L_23 = (((t852 *)(t852 *)SZArrayLdElema(L_22, V_2))->f1);
		__this->f9 = L_23;
	}

IL_00f9:
	{
		t1476* L_24 = (__this->f5);
		((t852 *)(t852 *)SZArrayLdElema(L_24, V_2))->f0 = V_0;
		t1476* L_25 = (__this->f5);
		t731* L_26 = (__this->f4);
		((t852 *)(t852 *)SZArrayLdElema(L_25, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_26, V_1))-1));
		t731* L_27 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_27, V_1)) = (int32_t)((int32_t)(V_2+1));
		t731* L_28 = (__this->f6);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_28, V_2)) = (int32_t)p0;
		t1916* L_29 = (__this->f7);
		*((t101 **)(t101 **)SZArrayLdElema(L_29, V_2)) = (t101 *)p1;
		int32_t L_30 = (__this->f14);
		__this->f14 = ((int32_t)(L_30+1));
		return;
	}
}
extern MethodInfo m1554_MI;
 void m1554 (t167 * __this, MethodInfo* method){
	{
		__this->f10 = 0;
		t731* L_0 = (__this->f4);
		t731* L_1 = (__this->f4);
		m3874(NULL, (t52 *)(t52 *)L_0, 0, (((int32_t)(((t52 *)L_1)->max_length))), &m3874_MI);
		t731* L_2 = (__this->f6);
		t731* L_3 = (__this->f6);
		m3874(NULL, (t52 *)(t52 *)L_2, 0, (((int32_t)(((t52 *)L_3)->max_length))), &m3874_MI);
		t1916* L_4 = (__this->f7);
		t1916* L_5 = (__this->f7);
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
extern MethodInfo m10381_MI;
 bool m10381 (t167 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		t7 * L_1 = Box(InitializedTypeInfo(&t60_TI), &L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		t87 * L_2 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_2, (t34*) &_stringLiteral539, &m3066_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0013:
	{
		t7* L_3 = (__this->f12);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m24580_MI, L_3, p0);
		V_0 = ((int32_t)(L_4|((int32_t)-2147483648)));
		t731* L_5 = (__this->f4);
		t731* L_6 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_6)->max_length)))))))-1));
		goto IL_0084;
	}

IL_0042:
	{
		t1476* L_7 = (__this->f5);
		int32_t L_8 = (((t852 *)(t852 *)SZArrayLdElema(L_7, V_1))->f0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_0072;
		}
	}
	{
		t7* L_9 = (__this->f12);
		t731* L_10 = (__this->f6);
		bool L_11 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m24581_MI, L_9, (*(int32_t*)(int32_t*)SZArrayLdElema(L_10, V_1)), p0);
		if (!L_11)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		t1476* L_12 = (__this->f5);
		int32_t L_13 = (((t852 *)(t852 *)SZArrayLdElema(L_12, V_1))->f1);
		V_1 = L_13;
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
extern MethodInfo m10382_MI;
 bool m10382 (t167 * __this, t101 * p0, MethodInfo* method){
	t7* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1937_TI));
		t1937 * L_0 = m10494(NULL, &m10494_MI);
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
		t1916* L_2 = (__this->f7);
		bool L_3 = (bool)InterfaceFuncInvoker2< bool, t101 *, t101 * >::Invoke(&m24582_MI, V_0, (*(t101 **)(t101 **)SZArrayLdElema(L_2, V_2)), p0);
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
extern MethodInfo m10383_MI;
 void m10383 (t167 * __this, t732 * p0, t733  p1, MethodInfo* method){
	t1919* V_0 = {0};
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
		V_0 = (t1919*)NULL;
		int32_t L_3 = (__this->f10);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_4 = (__this->f10);
		V_0 = ((t1919*)SZArrayNew(InitializedTypeInfo(&t1919_TI), L_4));
		m10379(__this, V_0, 0, &m10379_MI);
	}

IL_004f:
	{
		t731* L_5 = (__this->f4);
		m5859(p0, (t34*) &_stringLiteral547, (((int32_t)(((t52 *)L_5)->max_length))), &m5859_MI);
		m5865(p0, (t34*) &_stringLiteral548, (t7 *)(t7 *)V_0, &m5865_MI);
		return;
	}
}
extern MethodInfo m10384_MI;
 void m10384 (t167 * __this, t7 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t1919* V_1 = {0};
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
		t70 * L_4 = m1675(NULL, LoadTypeToken(&t1917_0_0_0), &m1675_MI);
		t7 * L_5 = m5855(L_3, (t34*) &_stringLiteral546, L_4, &m5855_MI);
		__this->f12 = ((t7*)Castclass(L_5, InitializedTypeInfo(&t1917_TI)));
		t732 * L_6 = (__this->f13);
		int32_t L_7 = m5868(L_6, (t34*) &_stringLiteral547, &m5868_MI);
		V_0 = L_7;
		t732 * L_8 = (__this->f13);
		t70 * L_9 = m1675(NULL, LoadTypeToken(&t1919_0_0_0), &m1675_MI);
		t7 * L_10 = m5855(L_8, (t34*) &_stringLiteral548, L_9, &m5855_MI);
		V_1 = ((t1919*)Castclass(L_10, InitializedTypeInfo(&t1919_TI)));
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
		m10375(__this, V_0, &m10375_MI);
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
		int32_t L_11 = m1560(((t354 *)(t354 *)SZArrayLdElema(V_1, V_2)), &m1560_MI);
		t101 * L_12 = m1559(((t354 *)(t354 *)SZArrayLdElema(V_1, V_2)), &m1559_MI);
		VirtActionInvoker2< int32_t, t101 * >::Invoke(&m1538_MI, __this, L_11, L_12);
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
extern MethodInfo m1539_MI;
 bool m1539 (t167 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t101 * V_5 = {0};
	{
		int32_t L_0 = p0;
		t7 * L_1 = Box(InitializedTypeInfo(&t60_TI), &L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		t87 * L_2 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_2, (t34*) &_stringLiteral539, &m3066_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0013:
	{
		t7* L_3 = (__this->f12);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m24580_MI, L_3, p0);
		V_0 = ((int32_t)(L_4|((int32_t)-2147483648)));
		t731* L_5 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_5)->max_length)))));
		t731* L_6 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_6, V_1))-1));
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
		t1476* L_7 = (__this->f5);
		int32_t L_8 = (((t852 *)(t852 *)SZArrayLdElema(L_7, V_2))->f0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_007a;
		}
	}
	{
		t7* L_9 = (__this->f12);
		t731* L_10 = (__this->f6);
		bool L_11 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m24581_MI, L_9, (*(int32_t*)(int32_t*)SZArrayLdElema(L_10, V_2)), p0);
		if (!L_11)
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
		t1476* L_12 = (__this->f5);
		int32_t L_13 = (((t852 *)(t852 *)SZArrayLdElema(L_12, V_2))->f1);
		V_2 = L_13;
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
		int32_t L_14 = (__this->f10);
		__this->f10 = ((int32_t)(L_14-1));
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_00c7;
		}
	}
	{
		t731* L_15 = (__this->f4);
		t1476* L_16 = (__this->f5);
		int32_t L_17 = (((t852 *)(t852 *)SZArrayLdElema(L_16, V_2))->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_15, V_1)) = (int32_t)((int32_t)(L_17+1));
		goto IL_00e9;
	}

IL_00c7:
	{
		t1476* L_18 = (__this->f5);
		t1476* L_19 = (__this->f5);
		int32_t L_20 = (((t852 *)(t852 *)SZArrayLdElema(L_19, V_2))->f1);
		((t852 *)(t852 *)SZArrayLdElema(L_18, V_3))->f1 = L_20;
	}

IL_00e9:
	{
		t1476* L_21 = (__this->f5);
		int32_t L_22 = (__this->f9);
		((t852 *)(t852 *)SZArrayLdElema(L_21, V_2))->f1 = L_22;
		__this->f9 = V_2;
		t1476* L_23 = (__this->f5);
		((t852 *)(t852 *)SZArrayLdElema(L_23, V_2))->f0 = 0;
		t731* L_24 = (__this->f6);
		Initobj (&t60_TI, (&V_4));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_2)) = (int32_t)V_4;
		t1916* L_25 = (__this->f7);
		Initobj (&t101_TI, (&V_5));
		*((t101 **)(t101 **)SZArrayLdElema(L_25, V_2)) = (t101 *)V_5;
		int32_t L_26 = (__this->f14);
		__this->f14 = ((int32_t)(L_26+1));
		return 1;
	}
}
extern MethodInfo m1537_MI;
 bool m1537 (t167 * __this, int32_t p0, t101 ** p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t101 * V_2 = {0};
	{
		int32_t L_0 = p0;
		t7 * L_1 = Box(InitializedTypeInfo(&t60_TI), &L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		t87 * L_2 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_2, (t34*) &_stringLiteral539, &m3066_MI);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0013:
	{
		t7* L_3 = (__this->f12);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&m24580_MI, L_3, p0);
		V_0 = ((int32_t)(L_4|((int32_t)-2147483648)));
		t731* L_5 = (__this->f4);
		t731* L_6 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_6)->max_length)))))))-1));
		goto IL_0096;
	}

IL_0042:
	{
		t1476* L_7 = (__this->f5);
		int32_t L_8 = (((t852 *)(t852 *)SZArrayLdElema(L_7, V_1))->f0);
		if ((((uint32_t)L_8) != ((uint32_t)V_0)))
		{
			goto IL_0084;
		}
	}
	{
		t7* L_9 = (__this->f12);
		t731* L_10 = (__this->f6);
		bool L_11 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m24581_MI, L_9, (*(int32_t*)(int32_t*)SZArrayLdElema(L_10, V_1)), p0);
		if (!L_11)
		{
			goto IL_0084;
		}
	}
	{
		t1916* L_12 = (__this->f7);
		*p1 = (*(t101 **)(t101 **)SZArrayLdElema(L_12, V_1));
		return 1;
	}

IL_0084:
	{
		t1476* L_13 = (__this->f5);
		int32_t L_14 = (((t852 *)(t852 *)SZArrayLdElema(L_13, V_1))->f1);
		V_1 = L_14;
	}

IL_0096:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		Initobj (&t101_TI, (&V_2));
		*p1 = V_2;
		return 0;
	}
}
extern MethodInfo m1550_MI;
 t353 * m1550 (t167 * __this, MethodInfo* method){
	{
		t353 * L_0 = (t353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t353_TI));
		m10432(L_0, __this, &m10432_MI);
		return L_0;
	}
}
extern MethodInfo m10385_MI;
 int32_t m10385 (t167 * __this, t7 * p0, MethodInfo* method){
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
		if (((t7 *)IsInst(p0, InitializedTypeInfo(&t60_TI))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
		t70 * L_1 = m1675(NULL, LoadTypeToken(&t60_0_0_0), &m1675_MI);
		t34* L_2 = (t34*)VirtFuncInvoker0< t34* >::Invoke(&m3964_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		t34* L_3 = m1876(NULL, (t34*) &_stringLiteral549, L_2, &m1876_MI);
		t348 * L_4 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m6583(L_4, L_3, (t34*) &_stringLiteral539, &m6583_MI);
		il2cpp_codegen_raise_exception (L_4);
	}

IL_003a:
	{
		return ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t60_TI)))));
	}
}
extern MethodInfo m10386_MI;
 t101 * m10386 (t167 * __this, t7 * p0, MethodInfo* method){
	t101 * V_0 = {0};
	{
		if (p0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
		t70 * L_0 = m1675(NULL, LoadTypeToken(&t101_0_0_0), &m1675_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3933_MI, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (&t101_TI, (&V_0));
		return V_0;
	}

IL_001e:
	{
		if (((t101 *)IsInst(p0, InitializedTypeInfo(&t101_TI))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
		t70 * L_2 = m1675(NULL, LoadTypeToken(&t101_0_0_0), &m1675_MI);
		t34* L_3 = (t34*)VirtFuncInvoker0< t34* >::Invoke(&m3964_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		t34* L_4 = m1876(NULL, (t34*) &_stringLiteral549, L_3, &m1876_MI);
		t348 * L_5 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m6583(L_5, L_4, (t34*) &_stringLiteral245, &m6583_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_004a:
	{
		return ((t101 *)Castclass(p0, InitializedTypeInfo(&t101_TI)));
	}
}
extern MethodInfo m10387_MI;
 bool m10387 (t167 * __this, t354  p0, MethodInfo* method){
	t101 * V_0 = {0};
	{
		int32_t L_0 = m1560((&p0), &m1560_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, int32_t, t101 ** >::Invoke(&m1537_MI, __this, L_0, (&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1937_TI));
		t1937 * L_2 = m10494(NULL, &m10494_MI);
		t101 * L_3 = m1559((&p0), &m1559_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, t101 *, t101 * >::Invoke(&m24583_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m1557_MI;
 t355  m1557 (t167 * __this, MethodInfo* method){
	{
		t355  L_0 = {0};
		m10448(&L_0, __this, &m10448_MI);
		return L_0;
	}
}
extern MethodInfo m10388_MI;
 t854  m10388 (t7 * __this, int32_t p0, t101 * p1, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t7 * L_1 = Box(InitializedTypeInfo(&t60_TI), &L_0);
		t101 * L_2 = p1;
		t854  L_3 = {0};
		m4471(&L_3, L_1, ((t101 *)L_2), &m4471_MI);
		return L_3;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t60_0_0_32849;
FieldInfo t167_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t60_0_0_32849, &t167_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_32849;
FieldInfo t167_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t54_0_0_32849, &t167_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_32849;
FieldInfo t167_f2_FieldInfo = 
{
	"NO_SLOT", &t60_0_0_32849, &t167_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_32849;
FieldInfo t167_f3_FieldInfo = 
{
	"HASH_FLAG", &t60_0_0_32849, &t167_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t731_0_0_1;
FieldInfo t167_f4_FieldInfo = 
{
	"table", &t731_0_0_1, &t167_TI, offsetof(t167, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1476_0_0_1;
FieldInfo t167_f5_FieldInfo = 
{
	"linkSlots", &t1476_0_0_1, &t167_TI, offsetof(t167, f5), &EmptyCustomAttributesCache};
extern Il2CppType t731_0_0_1;
FieldInfo t167_f6_FieldInfo = 
{
	"keySlots", &t731_0_0_1, &t167_TI, offsetof(t167, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1916_0_0_1;
FieldInfo t167_f7_FieldInfo = 
{
	"valueSlots", &t1916_0_0_1, &t167_TI, offsetof(t167, f7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t167_f8_FieldInfo = 
{
	"touchedSlots", &t60_0_0_1, &t167_TI, offsetof(t167, f8), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t167_f9_FieldInfo = 
{
	"emptySlot", &t60_0_0_1, &t167_TI, offsetof(t167, f9), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t167_f10_FieldInfo = 
{
	"count", &t60_0_0_1, &t167_TI, offsetof(t167, f10), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t167_f11_FieldInfo = 
{
	"threshold", &t60_0_0_1, &t167_TI, offsetof(t167, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1917_0_0_1;
FieldInfo t167_f12_FieldInfo = 
{
	"hcp", &t1917_0_0_1, &t167_TI, offsetof(t167, f12), &EmptyCustomAttributesCache};
extern Il2CppType t732_0_0_1;
FieldInfo t167_f13_FieldInfo = 
{
	"serialization_info", &t732_0_0_1, &t167_TI, offsetof(t167, f13), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t167_f14_FieldInfo = 
{
	"generation", &t60_0_0_1, &t167_TI, offsetof(t167, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1918_0_0_17;
extern CustomAttributesCache t859__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t167_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t1918_0_0_17, &t167_TI, offsetof(t167_SFs, f15), &t859__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t167_FIs[] =
{
	&t167_f0_FieldInfo,
	&t167_f1_FieldInfo,
	&t167_f2_FieldInfo,
	&t167_f3_FieldInfo,
	&t167_f4_FieldInfo,
	&t167_f5_FieldInfo,
	&t167_f6_FieldInfo,
	&t167_f7_FieldInfo,
	&t167_f8_FieldInfo,
	&t167_f9_FieldInfo,
	&t167_f10_FieldInfo,
	&t167_f11_FieldInfo,
	&t167_f12_FieldInfo,
	&t167_f13_FieldInfo,
	&t167_f14_FieldInfo,
	&t167_f15_FieldInfo,
	NULL
};
static const int32_t t167_f0_DefaultValueData = 10;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t167_f0_DefaultValue = 
{
	&t167_f0_FieldInfo, { (char*)&t167_f0_DefaultValueData, &t60_0_0_0 }};
static const float t167_f1_DefaultValueData = 0.9f;
extern Il2CppType t54_0_0_0;
static Il2CppFieldDefaultValueEntry t167_f1_DefaultValue = 
{
	&t167_f1_FieldInfo, { (char*)&t167_f1_DefaultValueData, &t54_0_0_0 }};
static const int32_t t167_f2_DefaultValueData = -1;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t167_f2_DefaultValue = 
{
	&t167_f2_FieldInfo, { (char*)&t167_f2_DefaultValueData, &t60_0_0_0 }};
static const int32_t t167_f3_DefaultValueData = -2147483648;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t167_f3_DefaultValue = 
{
	&t167_f3_FieldInfo, { (char*)&t167_f3_DefaultValueData, &t60_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t167_FDVs[] = 
{
	&t167_f0_DefaultValue,
	&t167_f1_DefaultValue,
	&t167_f2_DefaultValue,
	&t167_f3_DefaultValue,
	NULL
};
extern MethodInfo m10360_MI;
static PropertyInfo t167____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t167_TI, "System.Collections.IDictionary.Item", NULL, &m10360_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10361_MI;
static PropertyInfo t167____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t167_TI, "System.Collections.ICollection.IsSynchronized", &m10361_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10362_MI;
static PropertyInfo t167____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t167_TI, "System.Collections.ICollection.SyncRoot", &m10362_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10363_MI;
static PropertyInfo t167____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t167_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m10363_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10372_MI;
static PropertyInfo t167____Count_PropertyInfo = 
{
	&t167_TI, "Count", &m10372_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10373_MI;
static PropertyInfo t167____Item_PropertyInfo = 
{
	&t167_TI, "Item", NULL, &m10373_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1550_MI;
static PropertyInfo t167____Values_PropertyInfo = 
{
	&t167_TI, "Values", &m1550_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t167_PIs[] =
{
	&t167____System_Collections_IDictionary_Item_PropertyInfo,
	&t167____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t167____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t167____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t167____Count_PropertyInfo,
	&t167____Item_PropertyInfo,
	&t167____Values_PropertyInfo,
	NULL
};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m1536_MI = 
{
	".ctor", (methodPointerType)&m1536, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1917_0_0_0;
static ParameterInfo t167_m10357_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t1917_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10357_MI = 
{
	".ctor", (methodPointerType)&m10357, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t167_m10357_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t167_m10358_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10358_MI = 
{
	".ctor", (methodPointerType)&m10358, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t167_m10358_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t732_0_0_0;
extern Il2CppType t733_0_0_0;
static ParameterInfo t167_m10359_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t732_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t733_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t733 (MethodInfo* method, void* obj, void** args);
MethodInfo m10359_MI = 
{
	".ctor", (methodPointerType)&m10359, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t733, t167_m10359_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t167_m10360_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10360_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m10360, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t167_m10360_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t167_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10361_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10361, &t167_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t167_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10362_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10362, &t167_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t167_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10363_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m10363, &t167_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t354_0_0_0;
static ParameterInfo t167_m10364_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t354_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t354 (MethodInfo* method, void* obj, void** args);
MethodInfo m10364_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m10364, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53_t354, t167_m10364_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t354_0_0_0;
static ParameterInfo t167_m10365_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t354_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t354 (MethodInfo* method, void* obj, void** args);
MethodInfo m10365_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m10365, &t167_TI, &t55_0_0_0, RuntimeInvoker_t55_t354, t167_m10365_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1919_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t167_m10366_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1919_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10366_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m10366, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t167_m10366_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t354_0_0_0;
static ParameterInfo t167_m10367_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t354_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t354 (MethodInfo* method, void* obj, void** args);
MethodInfo m10367_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m10367, &t167_TI, &t55_0_0_0, RuntimeInvoker_t55_t354, t167_m10367_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t167_m10368_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10368_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10368, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t167_m10368_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t167_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10369_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10369, &t167_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t167_TI;
extern Il2CppType t1920_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10370_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m10370, &t167_TI, &t1920_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t167_TI;
extern Il2CppType t860_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10371_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m10371, &t167_TI, &t860_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t167_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10372_MI = 
{
	"get_Count", (methodPointerType)&m10372, &t167_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t101_0_0_0;
static ParameterInfo t167_m10373_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t101_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10373_MI = 
{
	"set_Item", (methodPointerType)&m10373, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t167_m10373_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1917_0_0_0;
static ParameterInfo t167_m10374_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t1917_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10374_MI = 
{
	"Init", (methodPointerType)&m10374, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t167_m10374_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t167_m10375_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10375_MI = 
{
	"InitArrays", (methodPointerType)&m10375, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t167_m10375_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t167_m10376_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10376_MI = 
{
	"CopyToCheck", (methodPointerType)&m10376, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t167_m10376_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern Il2CppGenericContainer m24584_IGC;
extern TypeInfo m24584_gp_TRet_0_TI;
Il2CppGenericParamFull m24584_gp_TRet_0_TI_GenericParamFull = { { &m24584_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m24584_gp_TElem_1_TI;
Il2CppGenericParamFull m24584_gp_TElem_1_TI_GenericParamFull = { { &m24584_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m24584_IGPA[2] = 
{
	&m24584_gp_TRet_0_TI_GenericParamFull,
	&m24584_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m24584_MI;
Il2CppGenericContainer m24584_IGC = { { NULL, NULL }, NULL, &m24584_MI, 2, 1, m24584_IGPA };
MethodInfo m24584_MI = 
{
	"Do_CopyTo", NULL, &t167_TI, &t53_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t101_0_0_0;
static ParameterInfo t167_m10377_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t101_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t354_0_0_0;
extern void* RuntimeInvoker_t354_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10377_MI = 
{
	"make_pair", (methodPointerType)&m10377, &t167_TI, &t354_0_0_0, RuntimeInvoker_t354_t60_t7, t167_m10377_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t101_0_0_0;
static ParameterInfo t167_m10378_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t101_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t101_0_0_0;
extern void* RuntimeInvoker_t7_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10378_MI = 
{
	"pick_value", (methodPointerType)&m10378, &t167_TI, &t101_0_0_0, RuntimeInvoker_t7_t60_t7, t167_m10378_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1919_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t167_m10379_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1919_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10379_MI = 
{
	"CopyTo", (methodPointerType)&m10379, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t167_m10379_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern Il2CppGenericContainer m24585_IGC;
extern TypeInfo m24585_gp_TRet_0_TI;
Il2CppGenericParamFull m24585_gp_TRet_0_TI_GenericParamFull = { { &m24585_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m24585_IGPA[1] = 
{
	&m24585_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m24585_MI;
Il2CppGenericContainer m24585_IGC = { { NULL, NULL }, NULL, &m24585_MI, 1, 1, m24585_IGPA };
MethodInfo m24585_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t167_TI, &t53_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10380_MI = 
{
	"Resize", (methodPointerType)&m10380, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t101_0_0_0;
static ParameterInfo t167_m1538_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t101_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m1538_MI = 
{
	"Add", (methodPointerType)&m1538, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t167_m1538_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 23, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m1554_MI = 
{
	"Clear", (methodPointerType)&m1554, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t167_m10381_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10381_MI = 
{
	"ContainsKey", (methodPointerType)&m10381, &t167_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t167_m10381_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t101_0_0_0;
static ParameterInfo t167_m10382_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t101_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10382_MI = 
{
	"ContainsValue", (methodPointerType)&m10382, &t167_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t167_m10382_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t732_0_0_0;
extern Il2CppType t733_0_0_0;
static ParameterInfo t167_m10383_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t732_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t733_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t733 (MethodInfo* method, void* obj, void** args);
MethodInfo m10383_MI = 
{
	"GetObjectData", (methodPointerType)&m10383, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t733, t167_m10383_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t167_m10384_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10384_MI = 
{
	"OnDeserialization", (methodPointerType)&m10384, &t167_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t167_m10384_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t167_m1539_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m1539_MI = 
{
	"Remove", (methodPointerType)&m1539, &t167_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t167_m1539_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t101_1_0_0;
static ParameterInfo t167_m1537_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t101_1_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60_t356 (MethodInfo* method, void* obj, void** args);
MethodInfo m1537_MI = 
{
	"TryGetValue", (methodPointerType)&m1537, &t167_TI, &t55_0_0_0, RuntimeInvoker_t55_t60_t356, t167_m1537_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t167_TI;
extern Il2CppType t353_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m1550_MI = 
{
	"get_Values", (methodPointerType)&m1550, &t167_TI, &t353_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t167_m10385_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10385_MI = 
{
	"ToTKey", (methodPointerType)&m10385, &t167_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t167_m10385_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t167_m10386_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t101_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10386_MI = 
{
	"ToTValue", (methodPointerType)&m10386, &t167_TI, &t101_0_0_0, RuntimeInvoker_t7_t7, t167_m10386_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t354_0_0_0;
static ParameterInfo t167_m10387_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t354_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t354 (MethodInfo* method, void* obj, void** args);
MethodInfo m10387_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m10387, &t167_TI, &t55_0_0_0, RuntimeInvoker_t55_t354, t167_m10387_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t167_TI;
extern Il2CppType t355_0_0_0;
extern void* RuntimeInvoker_t355 (MethodInfo* method, void* obj, void** args);
MethodInfo m1557_MI = 
{
	"GetEnumerator", (methodPointerType)&m1557, &t167_TI, &t355_0_0_0, RuntimeInvoker_t355, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t101_0_0_0;
static ParameterInfo t167_m10388_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t101_0_0_0},
};
extern TypeInfo t167_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854_t60_t7 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t859__CustomAttributeCache_m7679;
MethodInfo m10388_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m10388, &t167_TI, &t854_0_0_0, RuntimeInvoker_t854_t60_t7, t167_m10388_ParameterInfos, &t859__CustomAttributeCache_m7679, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t167_MIs[] =
{
	&m1536_MI,
	&m10357_MI,
	&m10358_MI,
	&m10359_MI,
	&m10360_MI,
	&m10361_MI,
	&m10362_MI,
	&m10363_MI,
	&m10364_MI,
	&m10365_MI,
	&m10366_MI,
	&m10367_MI,
	&m10368_MI,
	&m10369_MI,
	&m10370_MI,
	&m10371_MI,
	&m10372_MI,
	&m10373_MI,
	&m10374_MI,
	&m10375_MI,
	&m10376_MI,
	&m24584_MI,
	&m10377_MI,
	&m10378_MI,
	&m10379_MI,
	&m24585_MI,
	&m10380_MI,
	&m1538_MI,
	&m1554_MI,
	&m10381_MI,
	&m10382_MI,
	&m10383_MI,
	&m10384_MI,
	&m1539_MI,
	&m1537_MI,
	&m1550_MI,
	&m10385_MI,
	&m10386_MI,
	&m10387_MI,
	&m1557_MI,
	&m10388_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m10369_MI;
extern MethodInfo m10383_MI;
extern MethodInfo m10372_MI;
extern MethodInfo m10361_MI;
extern MethodInfo m10362_MI;
extern MethodInfo m10368_MI;
extern MethodInfo m10372_MI;
extern MethodInfo m10363_MI;
extern MethodInfo m10364_MI;
extern MethodInfo m1554_MI;
extern MethodInfo m10365_MI;
extern MethodInfo m10366_MI;
extern MethodInfo m10367_MI;
extern MethodInfo m10370_MI;
extern MethodInfo m1539_MI;
extern MethodInfo m10360_MI;
extern MethodInfo m10371_MI;
extern MethodInfo m10384_MI;
extern MethodInfo m10373_MI;
extern MethodInfo m1538_MI;
extern MethodInfo m10381_MI;
extern MethodInfo m10383_MI;
extern MethodInfo m10384_MI;
extern MethodInfo m1537_MI;
static MethodInfo* t167_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m10369_MI,
	&m10383_MI,
	&m10372_MI,
	&m10361_MI,
	&m10362_MI,
	&m10368_MI,
	&m10372_MI,
	&m10363_MI,
	&m10364_MI,
	&m1554_MI,
	&m10365_MI,
	&m10366_MI,
	&m10367_MI,
	&m10370_MI,
	&m1539_MI,
	&m10360_MI,
	&m10371_MI,
	&m10384_MI,
	&m10373_MI,
	&m1538_MI,
	&m10381_MI,
	&m10383_MI,
	&m10384_MI,
	&m1537_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t396_TI;
extern TypeInfo t669_TI;
extern TypeInfo t4099_TI;
extern TypeInfo t4101_TI;
extern TypeInfo t5317_TI;
extern TypeInfo t756_TI;
extern TypeInfo t1512_TI;
static TypeInfo* t167_ITIs[] = 
{
	&t618_TI,
	&t396_TI,
	&t669_TI,
	&t4099_TI,
	&t4101_TI,
	&t5317_TI,
	&t756_TI,
	&t1512_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t396_TI;
extern TypeInfo t669_TI;
extern TypeInfo t4099_TI;
extern TypeInfo t4101_TI;
extern TypeInfo t5317_TI;
extern TypeInfo t756_TI;
extern TypeInfo t1512_TI;
static Il2CppInterfaceOffsetPair t167_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t396_TI, 5},
	{ &t669_TI, 6},
	{ &t4099_TI, 10},
	{ &t4101_TI, 17},
	{ &t5317_TI, 18},
	{ &t756_TI, 19},
	{ &t1512_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t167_0_0_0;
extern Il2CppType t167_1_0_0;
extern TypeInfo t7_TI;
struct t167;
extern TypeInfo t167_TI;
extern Il2CppGenericClass t167_GC;
extern CustomAttributesCache t859__CustomAttributeCache;
extern CustomAttributesCache t859__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t859__CustomAttributeCache_m7679;
TypeInfo t167_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t167_MIs, t167_PIs, t167_FIs, NULL, &t7_TI, NULL, NULL, &t167_TI, t167_ITIs, t167_VT, &t859__CustomAttributeCache, &t167_TI, &t167_0_0_0, &t167_1_0_0, t167_IOs, &t167_GC, NULL, t167_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t167), 0, -1, sizeof(t167_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 41, 7, 16, 0, 0, 28, 8, 8};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4099_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
extern MethodInfo m24586_MI;
static PropertyInfo t4099____Count_PropertyInfo = 
{
	&t4099_TI, "Count", &m24586_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24587_MI;
static PropertyInfo t4099____IsReadOnly_PropertyInfo = 
{
	&t4099_TI, "IsReadOnly", &m24587_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4099_PIs[] =
{
	&t4099____Count_PropertyInfo,
	&t4099____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4099_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24586_MI = 
{
	"get_Count", NULL, &t4099_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4099_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m24587_MI = 
{
	"get_IsReadOnly", NULL, &t4099_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t354_0_0_0;
static ParameterInfo t4099_m24588_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t354_0_0_0},
};
extern TypeInfo t4099_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t354 (MethodInfo* method, void* obj, void** args);
MethodInfo m24588_MI = 
{
	"Add", NULL, &t4099_TI, &t53_0_0_0, RuntimeInvoker_t53_t354, t4099_m24588_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4099_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m24589_MI = 
{
	"Clear", NULL, &t4099_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t354_0_0_0;
static ParameterInfo t4099_m24590_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t354_0_0_0},
};
extern TypeInfo t4099_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t354 (MethodInfo* method, void* obj, void** args);
MethodInfo m24590_MI = 
{
	"Contains", NULL, &t4099_TI, &t55_0_0_0, RuntimeInvoker_t55_t354, t4099_m24590_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1919_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4099_m24591_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1919_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4099_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24591_MI = 
{
	"CopyTo", NULL, &t4099_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4099_m24591_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t354_0_0_0;
static ParameterInfo t4099_m24592_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t354_0_0_0},
};
extern TypeInfo t4099_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t354 (MethodInfo* method, void* obj, void** args);
MethodInfo m24592_MI = 
{
	"Remove", NULL, &t4099_TI, &t55_0_0_0, RuntimeInvoker_t55_t354, t4099_m24592_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4099_MIs[] =
{
	&m24586_MI,
	&m24587_MI,
	&m24588_MI,
	&m24589_MI,
	&m24590_MI,
	&m24591_MI,
	&m24592_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4101_TI;
static TypeInfo* t4099_ITIs[] = 
{
	&t618_TI,
	&t4101_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4099_0_0_0;
extern Il2CppType t4099_1_0_0;
struct t4099;
extern TypeInfo t4099_TI;
extern Il2CppGenericClass t4099_GC;
TypeInfo t4099_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4099_MIs, t4099_PIs, NULL, NULL, NULL, NULL, NULL, &t4099_TI, t4099_ITIs, NULL, &EmptyCustomAttributesCache, &t4099_TI, &t4099_0_0_0, &t4099_1_0_0, NULL, &t4099_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4101_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
extern TypeInfo t4101_TI;
extern Il2CppType t1920_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24593_MI = 
{
	"GetEnumerator", NULL, &t4101_TI, &t1920_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4101_MIs[] =
{
	&m24593_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4101_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4101_0_0_0;
extern Il2CppType t4101_1_0_0;
struct t4101;
extern TypeInfo t4101_TI;
extern Il2CppGenericClass t4101_GC;
TypeInfo t4101_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4101_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4101_TI, t4101_ITIs, NULL, &EmptyCustomAttributesCache, &t4101_TI, &t4101_0_0_0, &t4101_1_0_0, NULL, &t4101_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1920_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
extern MethodInfo m24594_MI;
static PropertyInfo t1920____Current_PropertyInfo = 
{
	&t1920_TI, "Current", &m24594_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1920_PIs[] =
{
	&t1920____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1920_TI;
extern Il2CppType t354_0_0_0;
extern void* RuntimeInvoker_t354 (MethodInfo* method, void* obj, void** args);
MethodInfo m24594_MI = 
{
	"get_Current", NULL, &t1920_TI, &t354_0_0_0, RuntimeInvoker_t354, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1920_MIs[] =
{
	&m24594_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t1920_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1920_0_0_0;
extern Il2CppType t1920_1_0_0;
struct t1920;
extern TypeInfo t1920_TI;
extern Il2CppGenericClass t1920_GC;
TypeInfo t1920_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1920_MIs, t1920_PIs, NULL, NULL, NULL, NULL, NULL, &t1920_TI, t1920_ITIs, NULL, &EmptyCustomAttributesCache, &t1920_TI, &t1920_0_0_0, &t1920_1_0_0, NULL, &t1920_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t354_TI;

extern TypeInfo t354_TI;
extern TypeInfo t463_TI;
extern TypeInfo t34_TI;
extern TypeInfo t60_TI;
extern TypeInfo t7_TI;
extern TypeInfo t101_TI;
extern MethodInfo m10390_MI;
extern MethodInfo m10391_MI;
extern MethodInfo m1560_MI;
extern MethodInfo m123_MI;
extern MethodInfo m1559_MI;
extern MethodInfo m3540_MI;


extern MethodInfo m10389_MI;
 void m10389 (t354 * __this, int32_t p0, t101 * p1, MethodInfo* method){
	{
		m10390(__this, p0, &m10390_MI);
		m10391(__this, p1, &m10391_MI);
		return;
	}
}
extern MethodInfo m1560_MI;
 int32_t m1560 (t354 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m10390_MI;
 void m10390 (t354 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m1559_MI;
 t101 * m1559 (t354 * __this, MethodInfo* method){
	{
		t101 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m10391_MI;
 void m10391 (t354 * __this, t101 * p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m1587_MI;
 t34* m1587 (t354 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t101 * V_1 = {0};
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
		int32_t L_2 = m1560(__this, &m1560_MI);
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
		int32_t L_5 = m1560(__this, &m1560_MI);
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
		t101 * L_9 = m1559(__this, &m1559_MI);
		t101 * L_10 = L_9;
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!((t101 *)L_10))
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		t101 * L_11 = m1559(__this, &m1559_MI);
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
// Metadata Definition System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t60_0_0_1;
FieldInfo t354_f0_FieldInfo = 
{
	"key", &t60_0_0_1, &t354_TI, offsetof(t354, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t101_0_0_1;
FieldInfo t354_f1_FieldInfo = 
{
	"value", &t101_0_0_1, &t354_TI, offsetof(t354, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t354_FIs[] =
{
	&t354_f0_FieldInfo,
	&t354_f1_FieldInfo,
	NULL
};
extern MethodInfo m1560_MI;
extern MethodInfo m10390_MI;
static PropertyInfo t354____Key_PropertyInfo = 
{
	&t354_TI, "Key", &m1560_MI, &m10390_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1559_MI;
extern MethodInfo m10391_MI;
static PropertyInfo t354____Value_PropertyInfo = 
{
	&t354_TI, "Value", &m1559_MI, &m10391_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t354_PIs[] =
{
	&t354____Key_PropertyInfo,
	&t354____Value_PropertyInfo,
	NULL
};
extern Il2CppType t60_0_0_0;
extern Il2CppType t101_0_0_0;
static ParameterInfo t354_m10389_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t101_0_0_0},
};
extern TypeInfo t354_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10389_MI = 
{
	".ctor", (methodPointerType)&m10389, &t354_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t354_m10389_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t354_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m1560_MI = 
{
	"get_Key", (methodPointerType)&m1560, &t354_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t354_m10390_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t354_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m10390_MI = 
{
	"set_Key", (methodPointerType)&m10390, &t354_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t354_m10390_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t354_TI;
extern Il2CppType t101_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m1559_MI = 
{
	"get_Value", (methodPointerType)&m1559, &t354_TI, &t101_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t101_0_0_0;
static ParameterInfo t354_m10391_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t101_0_0_0},
};
extern TypeInfo t354_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10391_MI = 
{
	"set_Value", (methodPointerType)&m10391, &t354_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t354_m10391_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t354_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m1587_MI = 
{
	"ToString", (methodPointerType)&m1587, &t354_TI, &t34_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t354_MIs[] =
{
	&m10389_MI,
	&m1560_MI,
	&m10390_MI,
	&m1559_MI,
	&m10391_MI,
	&m1587_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1587_MI;
static MethodInfo* t354_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1587_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t354_0_0_0;
extern Il2CppType t354_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t354_TI;
extern Il2CppGenericClass t354_GC;
extern CustomAttributesCache t864__CustomAttributeCache;
TypeInfo t354_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t354_MIs, t354_PIs, t354_FIs, NULL, &t159_TI, NULL, NULL, &t354_TI, NULL, t354_VT, &t864__CustomAttributeCache, &t354_TI, &t354_0_0_0, &t354_1_0_0, NULL, &t354_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t354)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3461_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.String>
extern MethodInfo m24595_MI;
static PropertyInfo t3461____Current_PropertyInfo = 
{
	&t3461_TI, "Current", &m24595_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3461_PIs[] =
{
	&t3461____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3461_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24595_MI = 
{
	"get_Current", NULL, &t3461_TI, &t34_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3461_MIs[] =
{
	&m24595_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3461_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3461_0_0_0;
extern Il2CppType t3461_1_0_0;
struct t3461;
extern TypeInfo t3461_TI;
extern Il2CppGenericClass t3461_GC;
TypeInfo t3461_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3461_MIs, t3461_PIs, NULL, NULL, NULL, NULL, NULL, &t3461_TI, t3461_ITIs, NULL, &EmptyCustomAttributesCache, &t3461_TI, &t3461_0_0_0, &t3461_1_0_0, NULL, &t3461_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1921.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1921_TI;
#include "t1921MD.h"

extern TypeInfo t1921_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m10396_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18262_MI;
struct t52;
#define m18262(__this, p0, method) (t34*)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m18262_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.String>
extern Il2CppType t52_0_0_1;
FieldInfo t1921_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t1921_TI, offsetof(t1921, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t1921_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t1921_TI, offsetof(t1921, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t1921_FIs[] =
{
	&t1921_f0_FieldInfo,
	&t1921_f1_FieldInfo,
	NULL
};
extern MethodInfo m10393_MI;
static PropertyInfo t1921____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1921_TI, "System.Collections.IEnumerator.Current", &m10393_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10396_MI;
static PropertyInfo t1921____Current_PropertyInfo = 
{
	&t1921_TI, "Current", &m10396_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1921_PIs[] =
{
	&t1921____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1921____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t1921_m10392_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t1921_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10392_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t1921_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1921_m10392_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1921_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10393_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t1921_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1921_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10394_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t1921_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1921_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10395_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t1921_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1921_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10396_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t1921_TI, &t34_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1921_MIs[] =
{
	&m10392_MI,
	&m10393_MI,
	&m10394_MI,
	&m10395_MI,
	&m10396_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m10393_MI;
extern MethodInfo m10395_MI;
extern MethodInfo m10394_MI;
extern MethodInfo m10396_MI;
static MethodInfo* t1921_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m10393_MI,
	&m10395_MI,
	&m10394_MI,
	&m10396_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3461_TI;
static TypeInfo* t1921_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3461_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3461_TI;
static Il2CppInterfaceOffsetPair t1921_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3461_TI, 7},
};
extern MethodInfo m10396_MI;
extern TypeInfo t34_TI;
extern MethodInfo m18262_MI;
static void* t1921_RGCTXData[3] = 
{
	&m10396_MI,
	&t34_TI,
	&m18262_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1921_0_0_0;
extern Il2CppType t1921_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t1921_TI;
extern Il2CppGenericClass t1921_GC;
extern TypeInfo t52_TI;
TypeInfo t1921_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1921_MIs, t1921_PIs, t1921_FIs, NULL, &t159_TI, NULL, &t52_TI, &t1921_TI, t1921_ITIs, t1921_VT, &EmptyCustomAttributesCache, &t1921_TI, &t1921_0_0_0, &t1921_1_0_0, t1921_IOs, &t1921_GC, NULL, NULL, NULL, t1921_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1921)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4087_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.String>
extern MethodInfo m24596_MI;
static PropertyInfo t4087____Count_PropertyInfo = 
{
	&t4087_TI, "Count", &m24596_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24597_MI;
static PropertyInfo t4087____IsReadOnly_PropertyInfo = 
{
	&t4087_TI, "IsReadOnly", &m24597_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4087_PIs[] =
{
	&t4087____Count_PropertyInfo,
	&t4087____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4087_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24596_MI = 
{
	"get_Count", NULL, &t4087_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4087_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m24597_MI = 
{
	"get_IsReadOnly", NULL, &t4087_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t4087_m24598_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t4087_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24598_MI = 
{
	"Add", NULL, &t4087_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4087_m24598_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4087_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m24599_MI = 
{
	"Clear", NULL, &t4087_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t4087_m24600_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t4087_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24600_MI = 
{
	"Contains", NULL, &t4087_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4087_m24600_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t463_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4087_m24601_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t463_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4087_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24601_MI = 
{
	"CopyTo", NULL, &t4087_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4087_m24601_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
static ParameterInfo t4087_m24602_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t4087_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24602_MI = 
{
	"Remove", NULL, &t4087_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4087_m24602_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4087_MIs[] =
{
	&m24596_MI,
	&m24597_MI,
	&m24598_MI,
	&m24599_MI,
	&m24600_MI,
	&m24601_MI,
	&m24602_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4089_TI;
static TypeInfo* t4087_ITIs[] = 
{
	&t618_TI,
	&t4089_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4087_0_0_0;
extern Il2CppType t4087_1_0_0;
struct t4087;
extern TypeInfo t4087_TI;
extern Il2CppGenericClass t4087_GC;
TypeInfo t4087_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4087_MIs, t4087_PIs, NULL, NULL, NULL, NULL, NULL, &t4087_TI, t4087_ITIs, NULL, &EmptyCustomAttributesCache, &t4087_TI, &t4087_0_0_0, &t4087_1_0_0, NULL, &t4087_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4089_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.String>
extern TypeInfo t4089_TI;
extern Il2CppType t3461_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24603_MI = 
{
	"GetEnumerator", NULL, &t4089_TI, &t3461_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4089_MIs[] =
{
	&m24603_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4089_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4089_0_0_0;
extern Il2CppType t4089_1_0_0;
struct t4089;
extern TypeInfo t4089_TI;
extern Il2CppGenericClass t4089_GC;
TypeInfo t4089_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4089_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4089_TI, t4089_ITIs, NULL, &EmptyCustomAttributesCache, &t4089_TI, &t4089_0_0_0, &t4089_1_0_0, NULL, &t4089_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4088_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.String>
extern MethodInfo m24604_MI;
extern MethodInfo m24605_MI;
static PropertyInfo t4088____Item_PropertyInfo = 
{
	&t4088_TI, "Item", &m24604_MI, &m24605_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4088_PIs[] =
{
	&t4088____Item_PropertyInfo,
	NULL
};
extern Il2CppType t34_0_0_0;
static ParameterInfo t4088_m24606_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t4088_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24606_MI = 
{
	"IndexOf", NULL, &t4088_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4088_m24606_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t34_0_0_0;
static ParameterInfo t4088_m24607_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t4088_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24607_MI = 
{
	"Insert", NULL, &t4088_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4088_m24607_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4088_m24608_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4088_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24608_MI = 
{
	"RemoveAt", NULL, &t4088_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4088_m24608_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4088_m24604_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4088_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24604_MI = 
{
	"get_Item", NULL, &t4088_TI, &t34_0_0_0, RuntimeInvoker_t7_t60, t4088_m24604_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t34_0_0_0;
static ParameterInfo t4088_m24605_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t4088_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24605_MI = 
{
	"set_Item", NULL, &t4088_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4088_m24605_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4088_MIs[] =
{
	&m24606_MI,
	&m24607_MI,
	&m24608_MI,
	&m24604_MI,
	&m24605_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4087_TI;
extern TypeInfo t4089_TI;
static TypeInfo* t4088_ITIs[] = 
{
	&t618_TI,
	&t4087_TI,
	&t4089_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4088_0_0_0;
extern Il2CppType t4088_1_0_0;
struct t4088;
extern TypeInfo t4088_TI;
extern Il2CppGenericClass t4088_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4088_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4088_MIs, t4088_PIs, NULL, NULL, NULL, NULL, NULL, &t4088_TI, t4088_ITIs, NULL, &t1426__CustomAttributeCache, &t4088_TI, &t4088_0_0_0, &t4088_1_0_0, NULL, &t4088_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4090_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.ICloneable>
extern MethodInfo m24609_MI;
static PropertyInfo t4090____Count_PropertyInfo = 
{
	&t4090_TI, "Count", &m24609_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24610_MI;
static PropertyInfo t4090____IsReadOnly_PropertyInfo = 
{
	&t4090_TI, "IsReadOnly", &m24610_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4090_PIs[] =
{
	&t4090____Count_PropertyInfo,
	&t4090____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4090_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24609_MI = 
{
	"get_Count", NULL, &t4090_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4090_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m24610_MI = 
{
	"get_IsReadOnly", NULL, &t4090_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t395_0_0_0;
static ParameterInfo t4090_m24611_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t395_0_0_0},
};
extern TypeInfo t4090_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24611_MI = 
{
	"Add", NULL, &t4090_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4090_m24611_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4090_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m24612_MI = 
{
	"Clear", NULL, &t4090_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t395_0_0_0;
static ParameterInfo t4090_m24613_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t395_0_0_0},
};
extern TypeInfo t4090_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24613_MI = 
{
	"Contains", NULL, &t4090_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4090_m24613_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3017_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4090_m24614_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3017_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4090_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24614_MI = 
{
	"CopyTo", NULL, &t4090_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4090_m24614_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t395_0_0_0;
static ParameterInfo t4090_m24615_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t395_0_0_0},
};
extern TypeInfo t4090_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24615_MI = 
{
	"Remove", NULL, &t4090_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4090_m24615_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4090_MIs[] =
{
	&m24609_MI,
	&m24610_MI,
	&m24611_MI,
	&m24612_MI,
	&m24613_MI,
	&m24614_MI,
	&m24615_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4092_TI;
static TypeInfo* t4090_ITIs[] = 
{
	&t618_TI,
	&t4092_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4090_0_0_0;
extern Il2CppType t4090_1_0_0;
struct t4090;
extern TypeInfo t4090_TI;
extern Il2CppGenericClass t4090_GC;
TypeInfo t4090_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4090_MIs, t4090_PIs, NULL, NULL, NULL, NULL, NULL, &t4090_TI, t4090_ITIs, NULL, &EmptyCustomAttributesCache, &t4090_TI, &t4090_0_0_0, &t4090_1_0_0, NULL, &t4090_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4092_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ICloneable>
extern TypeInfo t4092_TI;
extern Il2CppType t3462_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24616_MI = 
{
	"GetEnumerator", NULL, &t4092_TI, &t3462_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4092_MIs[] =
{
	&m24616_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4092_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4092_0_0_0;
extern Il2CppType t4092_1_0_0;
struct t4092;
extern TypeInfo t4092_TI;
extern Il2CppGenericClass t4092_GC;
TypeInfo t4092_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4092_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4092_TI, t4092_ITIs, NULL, &EmptyCustomAttributesCache, &t4092_TI, &t4092_0_0_0, &t4092_1_0_0, NULL, &t4092_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3462_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ICloneable>
extern MethodInfo m24617_MI;
static PropertyInfo t3462____Current_PropertyInfo = 
{
	&t3462_TI, "Current", &m24617_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3462_PIs[] =
{
	&t3462____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3462_TI;
extern Il2CppType t395_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24617_MI = 
{
	"get_Current", NULL, &t3462_TI, &t395_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3462_MIs[] =
{
	&m24617_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3462_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3462_0_0_0;
extern Il2CppType t3462_1_0_0;
struct t3462;
extern TypeInfo t3462_TI;
extern Il2CppGenericClass t3462_GC;
TypeInfo t3462_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3462_MIs, t3462_PIs, NULL, NULL, NULL, NULL, NULL, &t3462_TI, t3462_ITIs, NULL, &EmptyCustomAttributesCache, &t3462_TI, &t3462_0_0_0, &t3462_1_0_0, NULL, &t3462_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1922.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1922_TI;
#include "t1922MD.h"

extern TypeInfo t1922_TI;
extern TypeInfo t395_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m10401_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18273_MI;
struct t52;
#define m18273(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m18273_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.ICloneable>
extern Il2CppType t52_0_0_1;
FieldInfo t1922_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t1922_TI, offsetof(t1922, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t1922_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t1922_TI, offsetof(t1922, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t1922_FIs[] =
{
	&t1922_f0_FieldInfo,
	&t1922_f1_FieldInfo,
	NULL
};
extern MethodInfo m10398_MI;
static PropertyInfo t1922____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1922_TI, "System.Collections.IEnumerator.Current", &m10398_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10401_MI;
static PropertyInfo t1922____Current_PropertyInfo = 
{
	&t1922_TI, "Current", &m10401_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1922_PIs[] =
{
	&t1922____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1922____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t1922_m10397_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t1922_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10397_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t1922_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1922_m10397_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1922_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10398_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t1922_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1922_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10399_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t1922_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1922_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10400_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t1922_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1922_TI;
extern Il2CppType t395_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10401_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t1922_TI, &t395_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1922_MIs[] =
{
	&m10397_MI,
	&m10398_MI,
	&m10399_MI,
	&m10400_MI,
	&m10401_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m10398_MI;
extern MethodInfo m10400_MI;
extern MethodInfo m10399_MI;
extern MethodInfo m10401_MI;
static MethodInfo* t1922_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m10398_MI,
	&m10400_MI,
	&m10399_MI,
	&m10401_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3462_TI;
static TypeInfo* t1922_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3462_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3462_TI;
static Il2CppInterfaceOffsetPair t1922_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3462_TI, 7},
};
extern MethodInfo m10401_MI;
extern TypeInfo t395_TI;
extern MethodInfo m18273_MI;
static void* t1922_RGCTXData[3] = 
{
	&m10401_MI,
	&t395_TI,
	&m18273_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1922_0_0_0;
extern Il2CppType t1922_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t1922_TI;
extern Il2CppGenericClass t1922_GC;
extern TypeInfo t52_TI;
TypeInfo t1922_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1922_MIs, t1922_PIs, t1922_FIs, NULL, &t159_TI, NULL, &t52_TI, &t1922_TI, t1922_ITIs, t1922_VT, &EmptyCustomAttributesCache, &t1922_TI, &t1922_0_0_0, &t1922_1_0_0, t1922_IOs, &t1922_GC, NULL, NULL, NULL, t1922_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1922)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4091_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.ICloneable>
extern MethodInfo m24618_MI;
extern MethodInfo m24619_MI;
static PropertyInfo t4091____Item_PropertyInfo = 
{
	&t4091_TI, "Item", &m24618_MI, &m24619_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4091_PIs[] =
{
	&t4091____Item_PropertyInfo,
	NULL
};
extern Il2CppType t395_0_0_0;
static ParameterInfo t4091_m24620_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t395_0_0_0},
};
extern TypeInfo t4091_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24620_MI = 
{
	"IndexOf", NULL, &t4091_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4091_m24620_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t395_0_0_0;
static ParameterInfo t4091_m24621_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t395_0_0_0},
};
extern TypeInfo t4091_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24621_MI = 
{
	"Insert", NULL, &t4091_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4091_m24621_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4091_m24622_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4091_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24622_MI = 
{
	"RemoveAt", NULL, &t4091_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4091_m24622_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4091_m24618_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4091_TI;
extern Il2CppType t395_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24618_MI = 
{
	"get_Item", NULL, &t4091_TI, &t395_0_0_0, RuntimeInvoker_t7_t60, t4091_m24618_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t395_0_0_0;
static ParameterInfo t4091_m24619_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t395_0_0_0},
};
extern TypeInfo t4091_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24619_MI = 
{
	"set_Item", NULL, &t4091_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4091_m24619_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4091_MIs[] =
{
	&m24620_MI,
	&m24621_MI,
	&m24622_MI,
	&m24618_MI,
	&m24619_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4090_TI;
extern TypeInfo t4092_TI;
static TypeInfo* t4091_ITIs[] = 
{
	&t618_TI,
	&t4090_TI,
	&t4092_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4091_0_0_0;
extern Il2CppType t4091_1_0_0;
struct t4091;
extern TypeInfo t4091_TI;
extern Il2CppGenericClass t4091_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4091_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4091_MIs, t4091_PIs, NULL, NULL, NULL, NULL, NULL, &t4091_TI, t4091_ITIs, NULL, &t1426__CustomAttributeCache, &t4091_TI, &t4091_0_0_0, &t4091_1_0_0, NULL, &t4091_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4093_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.String>>
extern MethodInfo m24623_MI;
static PropertyInfo t4093____Count_PropertyInfo = 
{
	&t4093_TI, "Count", &m24623_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24624_MI;
static PropertyInfo t4093____IsReadOnly_PropertyInfo = 
{
	&t4093_TI, "IsReadOnly", &m24624_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4093_PIs[] =
{
	&t4093____Count_PropertyInfo,
	&t4093____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4093_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24623_MI = 
{
	"get_Count", NULL, &t4093_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4093_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m24624_MI = 
{
	"get_IsReadOnly", NULL, &t4093_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1390_0_0_0;
static ParameterInfo t4093_m24625_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1390_0_0_0},
};
extern TypeInfo t4093_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24625_MI = 
{
	"Add", NULL, &t4093_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4093_m24625_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4093_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m24626_MI = 
{
	"Clear", NULL, &t4093_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1390_0_0_0;
static ParameterInfo t4093_m24627_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1390_0_0_0},
};
extern TypeInfo t4093_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24627_MI = 
{
	"Contains", NULL, &t4093_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4093_m24627_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3018_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4093_m24628_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3018_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4093_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24628_MI = 
{
	"CopyTo", NULL, &t4093_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4093_m24628_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1390_0_0_0;
static ParameterInfo t4093_m24629_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1390_0_0_0},
};
extern TypeInfo t4093_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24629_MI = 
{
	"Remove", NULL, &t4093_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4093_m24629_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4093_MIs[] =
{
	&m24623_MI,
	&m24624_MI,
	&m24625_MI,
	&m24626_MI,
	&m24627_MI,
	&m24628_MI,
	&m24629_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4095_TI;
static TypeInfo* t4093_ITIs[] = 
{
	&t618_TI,
	&t4095_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4093_0_0_0;
extern Il2CppType t4093_1_0_0;
struct t4093;
extern TypeInfo t4093_TI;
extern Il2CppGenericClass t4093_GC;
TypeInfo t4093_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4093_MIs, t4093_PIs, NULL, NULL, NULL, NULL, NULL, &t4093_TI, t4093_ITIs, NULL, &EmptyCustomAttributesCache, &t4093_TI, &t4093_0_0_0, &t4093_1_0_0, NULL, &t4093_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4095_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.String>>
extern TypeInfo t4095_TI;
extern Il2CppType t3463_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24630_MI = 
{
	"GetEnumerator", NULL, &t4095_TI, &t3463_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4095_MIs[] =
{
	&m24630_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4095_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4095_0_0_0;
extern Il2CppType t4095_1_0_0;
struct t4095;
extern TypeInfo t4095_TI;
extern Il2CppGenericClass t4095_GC;
TypeInfo t4095_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4095_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4095_TI, t4095_ITIs, NULL, &EmptyCustomAttributesCache, &t4095_TI, &t4095_0_0_0, &t4095_1_0_0, NULL, &t4095_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3463_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.String>>
extern MethodInfo m24631_MI;
static PropertyInfo t3463____Current_PropertyInfo = 
{
	&t3463_TI, "Current", &m24631_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3463_PIs[] =
{
	&t3463____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3463_TI;
extern Il2CppType t1390_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24631_MI = 
{
	"get_Current", NULL, &t3463_TI, &t1390_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3463_MIs[] =
{
	&m24631_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3463_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3463_0_0_0;
extern Il2CppType t3463_1_0_0;
struct t3463;
extern TypeInfo t3463_TI;
extern Il2CppGenericClass t3463_GC;
TypeInfo t3463_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3463_MIs, t3463_PIs, NULL, NULL, NULL, NULL, NULL, &t3463_TI, t3463_ITIs, NULL, &EmptyCustomAttributesCache, &t3463_TI, &t3463_0_0_0, &t3463_1_0_0, NULL, &t3463_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1390_TI;



// Metadata Definition System.IComparable`1<System.String>
extern Il2CppType t34_0_0_0;
static ParameterInfo t1390_m24632_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t1390_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24632_MI = 
{
	"CompareTo", NULL, &t1390_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t1390_m24632_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1390_MIs[] =
{
	&m24632_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1390_0_0_0;
extern Il2CppType t1390_1_0_0;
struct t1390;
extern TypeInfo t1390_TI;
extern Il2CppGenericClass t1390_GC;
TypeInfo t1390_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1390_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1390_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1390_TI, &t1390_0_0_0, &t1390_1_0_0, NULL, &t1390_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1923.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1923_TI;
#include "t1923MD.h"

extern TypeInfo t1923_TI;
extern TypeInfo t1390_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m10406_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18284_MI;
struct t52;
#define m18284(__this, p0, method) (t7*)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m18284_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.String>>
extern Il2CppType t52_0_0_1;
FieldInfo t1923_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t1923_TI, offsetof(t1923, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t1923_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t1923_TI, offsetof(t1923, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t1923_FIs[] =
{
	&t1923_f0_FieldInfo,
	&t1923_f1_FieldInfo,
	NULL
};
extern MethodInfo m10403_MI;
static PropertyInfo t1923____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1923_TI, "System.Collections.IEnumerator.Current", &m10403_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10406_MI;
static PropertyInfo t1923____Current_PropertyInfo = 
{
	&t1923_TI, "Current", &m10406_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1923_PIs[] =
{
	&t1923____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1923____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t1923_m10402_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t1923_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10402_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t1923_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1923_m10402_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1923_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10403_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t1923_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1923_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10404_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t1923_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1923_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10405_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t1923_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1923_TI;
extern Il2CppType t1390_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10406_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t1923_TI, &t1390_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1923_MIs[] =
{
	&m10402_MI,
	&m10403_MI,
	&m10404_MI,
	&m10405_MI,
	&m10406_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m10403_MI;
extern MethodInfo m10405_MI;
extern MethodInfo m10404_MI;
extern MethodInfo m10406_MI;
static MethodInfo* t1923_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m10403_MI,
	&m10405_MI,
	&m10404_MI,
	&m10406_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3463_TI;
static TypeInfo* t1923_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3463_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3463_TI;
static Il2CppInterfaceOffsetPair t1923_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3463_TI, 7},
};
extern MethodInfo m10406_MI;
extern TypeInfo t1390_TI;
extern MethodInfo m18284_MI;
static void* t1923_RGCTXData[3] = 
{
	&m10406_MI,
	&t1390_TI,
	&m18284_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1923_0_0_0;
extern Il2CppType t1923_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t1923_TI;
extern Il2CppGenericClass t1923_GC;
extern TypeInfo t52_TI;
TypeInfo t1923_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1923_MIs, t1923_PIs, t1923_FIs, NULL, &t159_TI, NULL, &t52_TI, &t1923_TI, t1923_ITIs, t1923_VT, &EmptyCustomAttributesCache, &t1923_TI, &t1923_0_0_0, &t1923_1_0_0, t1923_IOs, &t1923_GC, NULL, NULL, NULL, t1923_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1923)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4094_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.String>>
extern MethodInfo m24633_MI;
extern MethodInfo m24634_MI;
static PropertyInfo t4094____Item_PropertyInfo = 
{
	&t4094_TI, "Item", &m24633_MI, &m24634_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4094_PIs[] =
{
	&t4094____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1390_0_0_0;
static ParameterInfo t4094_m24635_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1390_0_0_0},
};
extern TypeInfo t4094_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24635_MI = 
{
	"IndexOf", NULL, &t4094_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4094_m24635_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1390_0_0_0;
static ParameterInfo t4094_m24636_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1390_0_0_0},
};
extern TypeInfo t4094_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24636_MI = 
{
	"Insert", NULL, &t4094_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4094_m24636_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4094_m24637_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4094_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24637_MI = 
{
	"RemoveAt", NULL, &t4094_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4094_m24637_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4094_m24633_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4094_TI;
extern Il2CppType t1390_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24633_MI = 
{
	"get_Item", NULL, &t4094_TI, &t1390_0_0_0, RuntimeInvoker_t7_t60, t4094_m24633_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1390_0_0_0;
static ParameterInfo t4094_m24634_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1390_0_0_0},
};
extern TypeInfo t4094_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24634_MI = 
{
	"set_Item", NULL, &t4094_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4094_m24634_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4094_MIs[] =
{
	&m24635_MI,
	&m24636_MI,
	&m24637_MI,
	&m24633_MI,
	&m24634_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4093_TI;
extern TypeInfo t4095_TI;
static TypeInfo* t4094_ITIs[] = 
{
	&t618_TI,
	&t4093_TI,
	&t4095_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4094_0_0_0;
extern Il2CppType t4094_1_0_0;
struct t4094;
extern TypeInfo t4094_TI;
extern Il2CppGenericClass t4094_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4094_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4094_MIs, t4094_PIs, NULL, NULL, NULL, NULL, NULL, &t4094_TI, t4094_ITIs, NULL, &t1426__CustomAttributeCache, &t4094_TI, &t4094_0_0_0, &t4094_1_0_0, NULL, &t4094_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4096_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.String>>
extern MethodInfo m24638_MI;
static PropertyInfo t4096____Count_PropertyInfo = 
{
	&t4096_TI, "Count", &m24638_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24639_MI;
static PropertyInfo t4096____IsReadOnly_PropertyInfo = 
{
	&t4096_TI, "IsReadOnly", &m24639_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4096_PIs[] =
{
	&t4096____Count_PropertyInfo,
	&t4096____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4096_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24638_MI = 
{
	"get_Count", NULL, &t4096_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4096_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m24639_MI = 
{
	"get_IsReadOnly", NULL, &t4096_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1391_0_0_0;
static ParameterInfo t4096_m24640_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1391_0_0_0},
};
extern TypeInfo t4096_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24640_MI = 
{
	"Add", NULL, &t4096_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4096_m24640_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4096_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m24641_MI = 
{
	"Clear", NULL, &t4096_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1391_0_0_0;
static ParameterInfo t4096_m24642_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1391_0_0_0},
};
extern TypeInfo t4096_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24642_MI = 
{
	"Contains", NULL, &t4096_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4096_m24642_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3019_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4096_m24643_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3019_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4096_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24643_MI = 
{
	"CopyTo", NULL, &t4096_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4096_m24643_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1391_0_0_0;
static ParameterInfo t4096_m24644_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1391_0_0_0},
};
extern TypeInfo t4096_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24644_MI = 
{
	"Remove", NULL, &t4096_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4096_m24644_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4096_MIs[] =
{
	&m24638_MI,
	&m24639_MI,
	&m24640_MI,
	&m24641_MI,
	&m24642_MI,
	&m24643_MI,
	&m24644_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4098_TI;
static TypeInfo* t4096_ITIs[] = 
{
	&t618_TI,
	&t4098_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4096_0_0_0;
extern Il2CppType t4096_1_0_0;
struct t4096;
extern TypeInfo t4096_TI;
extern Il2CppGenericClass t4096_GC;
TypeInfo t4096_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4096_MIs, t4096_PIs, NULL, NULL, NULL, NULL, NULL, &t4096_TI, t4096_ITIs, NULL, &EmptyCustomAttributesCache, &t4096_TI, &t4096_0_0_0, &t4096_1_0_0, NULL, &t4096_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4098_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.String>>
extern TypeInfo t4098_TI;
extern Il2CppType t3464_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24645_MI = 
{
	"GetEnumerator", NULL, &t4098_TI, &t3464_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4098_MIs[] =
{
	&m24645_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4098_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4098_0_0_0;
extern Il2CppType t4098_1_0_0;
struct t4098;
extern TypeInfo t4098_TI;
extern Il2CppGenericClass t4098_GC;
TypeInfo t4098_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4098_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4098_TI, t4098_ITIs, NULL, &EmptyCustomAttributesCache, &t4098_TI, &t4098_0_0_0, &t4098_1_0_0, NULL, &t4098_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3464_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.String>>
extern MethodInfo m24646_MI;
static PropertyInfo t3464____Current_PropertyInfo = 
{
	&t3464_TI, "Current", &m24646_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3464_PIs[] =
{
	&t3464____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3464_TI;
extern Il2CppType t1391_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24646_MI = 
{
	"get_Current", NULL, &t3464_TI, &t1391_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3464_MIs[] =
{
	&m24646_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3464_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3464_0_0_0;
extern Il2CppType t3464_1_0_0;
struct t3464;
extern TypeInfo t3464_TI;
extern Il2CppGenericClass t3464_GC;
TypeInfo t3464_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3464_MIs, t3464_PIs, NULL, NULL, NULL, NULL, NULL, &t3464_TI, t3464_ITIs, NULL, &EmptyCustomAttributesCache, &t3464_TI, &t3464_0_0_0, &t3464_1_0_0, NULL, &t3464_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1391_TI;



// Metadata Definition System.IEquatable`1<System.String>
extern Il2CppType t34_0_0_0;
static ParameterInfo t1391_m24647_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern TypeInfo t1391_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24647_MI = 
{
	"Equals", NULL, &t1391_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t1391_m24647_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1391_MIs[] =
{
	&m24647_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1391_0_0_0;
extern Il2CppType t1391_1_0_0;
struct t1391;
extern TypeInfo t1391_TI;
extern Il2CppGenericClass t1391_GC;
TypeInfo t1391_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1391_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1391_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1391_TI, &t1391_0_0_0, &t1391_1_0_0, NULL, &t1391_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t1924.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1924_TI;
#include "t1924MD.h"

extern TypeInfo t1924_TI;
extern TypeInfo t1391_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m10411_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18295_MI;
struct t52;
#define m18295(__this, p0, method) (t7*)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m18295_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.String>>
extern Il2CppType t52_0_0_1;
FieldInfo t1924_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t1924_TI, offsetof(t1924, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t1924_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t1924_TI, offsetof(t1924, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t1924_FIs[] =
{
	&t1924_f0_FieldInfo,
	&t1924_f1_FieldInfo,
	NULL
};
extern MethodInfo m10408_MI;
static PropertyInfo t1924____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1924_TI, "System.Collections.IEnumerator.Current", &m10408_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10411_MI;
static PropertyInfo t1924____Current_PropertyInfo = 
{
	&t1924_TI, "Current", &m10411_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1924_PIs[] =
{
	&t1924____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1924____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t1924_m10407_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t1924_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10407_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t1924_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1924_m10407_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1924_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10408_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t1924_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1924_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10409_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t1924_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1924_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10410_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t1924_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1924_TI;
extern Il2CppType t1391_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10411_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t1924_TI, &t1391_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1924_MIs[] =
{
	&m10407_MI,
	&m10408_MI,
	&m10409_MI,
	&m10410_MI,
	&m10411_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m10408_MI;
extern MethodInfo m10410_MI;
extern MethodInfo m10409_MI;
extern MethodInfo m10411_MI;
static MethodInfo* t1924_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m10408_MI,
	&m10410_MI,
	&m10409_MI,
	&m10411_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3464_TI;
static TypeInfo* t1924_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3464_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3464_TI;
static Il2CppInterfaceOffsetPair t1924_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3464_TI, 7},
};
extern MethodInfo m10411_MI;
extern TypeInfo t1391_TI;
extern MethodInfo m18295_MI;
static void* t1924_RGCTXData[3] = 
{
	&m10411_MI,
	&t1391_TI,
	&m18295_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1924_0_0_0;
extern Il2CppType t1924_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t1924_TI;
extern Il2CppGenericClass t1924_GC;
extern TypeInfo t52_TI;
TypeInfo t1924_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1924_MIs, t1924_PIs, t1924_FIs, NULL, &t159_TI, NULL, &t52_TI, &t1924_TI, t1924_ITIs, t1924_VT, &EmptyCustomAttributesCache, &t1924_TI, &t1924_0_0_0, &t1924_1_0_0, t1924_IOs, &t1924_GC, NULL, NULL, NULL, t1924_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1924)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4097_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.String>>
extern MethodInfo m24648_MI;
extern MethodInfo m24649_MI;
static PropertyInfo t4097____Item_PropertyInfo = 
{
	&t4097_TI, "Item", &m24648_MI, &m24649_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4097_PIs[] =
{
	&t4097____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1391_0_0_0;
static ParameterInfo t4097_m24650_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1391_0_0_0},
};
extern TypeInfo t4097_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24650_MI = 
{
	"IndexOf", NULL, &t4097_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4097_m24650_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1391_0_0_0;
static ParameterInfo t4097_m24651_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1391_0_0_0},
};
extern TypeInfo t4097_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24651_MI = 
{
	"Insert", NULL, &t4097_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4097_m24651_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4097_m24652_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4097_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24652_MI = 
{
	"RemoveAt", NULL, &t4097_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4097_m24652_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4097_m24648_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4097_TI;
extern Il2CppType t1391_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24648_MI = 
{
	"get_Item", NULL, &t4097_TI, &t1391_0_0_0, RuntimeInvoker_t7_t60, t4097_m24648_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1391_0_0_0;
static ParameterInfo t4097_m24649_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1391_0_0_0},
};
extern TypeInfo t4097_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m24649_MI = 
{
	"set_Item", NULL, &t4097_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4097_m24649_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4097_MIs[] =
{
	&m24650_MI,
	&m24651_MI,
	&m24652_MI,
	&m24648_MI,
	&m24649_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4096_TI;
extern TypeInfo t4098_TI;
static TypeInfo* t4097_ITIs[] = 
{
	&t618_TI,
	&t4096_TI,
	&t4098_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4097_0_0_0;
extern Il2CppType t4097_1_0_0;
struct t4097;
extern TypeInfo t4097_TI;
extern Il2CppGenericClass t4097_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4097_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4097_MIs, t4097_PIs, NULL, NULL, NULL, NULL, NULL, &t4097_TI, t4097_ITIs, NULL, &t1426__CustomAttributeCache, &t4097_TI, &t4097_0_0_0, &t4097_1_0_0, NULL, &t4097_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t1925.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1925_TI;
#include "t1925MD.h"

extern TypeInfo t1925_TI;
extern TypeInfo t354_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m10416_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18306_MI;
struct t52;
 t354  m18306 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18306_MI;


extern MethodInfo m10412_MI;
 void m10412 (t1925 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10413_MI;
 t7 * m10413 (t1925 * __this, MethodInfo* method){
	{
		t354  L_0 = m10416(__this, &m10416_MI);
		t354  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t354_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10414_MI;
 void m10414 (t1925 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10415_MI;
 bool m10415 (t1925 * __this, MethodInfo* method){
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
extern MethodInfo m10416_MI;
 t354  m10416 (t1925 * __this, MethodInfo* method){
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
		t354  L_8 = m18306(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18306_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
extern Il2CppType t52_0_0_1;
FieldInfo t1925_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t1925_TI, offsetof(t1925, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t1925_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t1925_TI, offsetof(t1925, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t1925_FIs[] =
{
	&t1925_f0_FieldInfo,
	&t1925_f1_FieldInfo,
	NULL
};
extern MethodInfo m10413_MI;
static PropertyInfo t1925____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1925_TI, "System.Collections.IEnumerator.Current", &m10413_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10416_MI;
static PropertyInfo t1925____Current_PropertyInfo = 
{
	&t1925_TI, "Current", &m10416_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1925_PIs[] =
{
	&t1925____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1925____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t1925_m10412_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t1925_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10412_MI = 
{
	".ctor", (methodPointerType)&m10412, &t1925_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1925_m10412_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1925_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10413_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10413, &t1925_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1925_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10414_MI = 
{
	"Dispose", (methodPointerType)&m10414, &t1925_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1925_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10415_MI = 
{
	"MoveNext", (methodPointerType)&m10415, &t1925_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1925_TI;
extern Il2CppType t354_0_0_0;
extern void* RuntimeInvoker_t354 (MethodInfo* method, void* obj, void** args);
MethodInfo m10416_MI = 
{
	"get_Current", (methodPointerType)&m10416, &t1925_TI, &t354_0_0_0, RuntimeInvoker_t354, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1925_MIs[] =
{
	&m10412_MI,
	&m10413_MI,
	&m10414_MI,
	&m10415_MI,
	&m10416_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m10413_MI;
extern MethodInfo m10415_MI;
extern MethodInfo m10414_MI;
extern MethodInfo m10416_MI;
static MethodInfo* t1925_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m10413_MI,
	&m10415_MI,
	&m10414_MI,
	&m10416_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t1920_TI;
static TypeInfo* t1925_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t1920_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t1920_TI;
static Il2CppInterfaceOffsetPair t1925_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t1920_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1925_0_0_0;
extern Il2CppType t1925_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t1925_TI;
extern Il2CppGenericClass t1925_GC;
extern TypeInfo t52_TI;
TypeInfo t1925_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1925_MIs, t1925_PIs, t1925_FIs, NULL, &t159_TI, NULL, &t52_TI, &t1925_TI, t1925_ITIs, t1925_VT, &EmptyCustomAttributesCache, &t1925_TI, &t1925_0_0_0, &t1925_1_0_0, t1925_IOs, &t1925_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1925)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4100_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
extern MethodInfo m24653_MI;
extern MethodInfo m24654_MI;
static PropertyInfo t4100____Item_PropertyInfo = 
{
	&t4100_TI, "Item", &m24653_MI, &m24654_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4100_PIs[] =
{
	&t4100____Item_PropertyInfo,
	NULL
};
extern Il2CppType t354_0_0_0;
static ParameterInfo t4100_m24655_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t354_0_0_0},
};
extern TypeInfo t4100_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t354 (MethodInfo* method, void* obj, void** args);
MethodInfo m24655_MI = 
{
	"IndexOf", NULL, &t4100_TI, &t60_0_0_0, RuntimeInvoker_t60_t354, t4100_m24655_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t354_0_0_0;
static ParameterInfo t4100_m24656_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t354_0_0_0},
};
extern TypeInfo t4100_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t354 (MethodInfo* method, void* obj, void** args);
MethodInfo m24656_MI = 
{
	"Insert", NULL, &t4100_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t354, t4100_m24656_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4100_m24657_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4100_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24657_MI = 
{
	"RemoveAt", NULL, &t4100_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4100_m24657_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4100_m24653_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4100_TI;
extern Il2CppType t354_0_0_0;
extern void* RuntimeInvoker_t354_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24653_MI = 
{
	"get_Item", NULL, &t4100_TI, &t354_0_0_0, RuntimeInvoker_t354_t60, t4100_m24653_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t354_0_0_0;
static ParameterInfo t4100_m24654_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t354_0_0_0},
};
extern TypeInfo t4100_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t354 (MethodInfo* method, void* obj, void** args);
MethodInfo m24654_MI = 
{
	"set_Item", NULL, &t4100_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t354, t4100_m24654_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4100_MIs[] =
{
	&m24655_MI,
	&m24656_MI,
	&m24657_MI,
	&m24653_MI,
	&m24654_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4099_TI;
extern TypeInfo t4101_TI;
static TypeInfo* t4100_ITIs[] = 
{
	&t618_TI,
	&t4099_TI,
	&t4101_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4100_0_0_0;
extern Il2CppType t4100_1_0_0;
struct t4100;
extern TypeInfo t4100_TI;
extern Il2CppGenericClass t4100_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4100_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4100_MIs, t4100_PIs, NULL, NULL, NULL, NULL, NULL, &t4100_TI, t4100_ITIs, NULL, &t1426__CustomAttributeCache, &t4100_TI, &t4100_0_0_0, &t4100_1_0_0, NULL, &t4100_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5317_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
extern Il2CppType t60_0_0_0;
static ParameterInfo t5317_m24658_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5317_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24658_MI = 
{
	"Remove", NULL, &t5317_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5317_m24658_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5317_MIs[] =
{
	&m24658_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4099_TI;
extern TypeInfo t4101_TI;
static TypeInfo* t5317_ITIs[] = 
{
	&t618_TI,
	&t4099_TI,
	&t4101_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5317_0_0_0;
extern Il2CppType t5317_1_0_0;
struct t5317;
extern TypeInfo t5317_TI;
extern Il2CppGenericClass t5317_GC;
extern CustomAttributesCache t1486__CustomAttributeCache;
TypeInfo t5317_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5317_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5317_TI, t5317_ITIs, NULL, &t1486__CustomAttributeCache, &t5317_TI, &t5317_0_0_0, &t5317_1_0_0, NULL, &t5317_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1917_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Int32>
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t1917_m24581_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24581_MI = 
{
	"Equals", NULL, &t1917_TI, &t55_0_0_0, RuntimeInvoker_t55_t60_t60, t1917_m24581_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t1917_m24580_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t1917_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m24580_MI = 
{
	"GetHashCode", NULL, &t1917_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t1917_m24580_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1917_MIs[] =
{
	&m24581_MI,
	&m24580_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1917_0_0_0;
extern Il2CppType t1917_1_0_0;
struct t1917;
extern TypeInfo t1917_TI;
extern Il2CppGenericClass t1917_GC;
TypeInfo t1917_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t1917_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1917_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1917_TI, &t1917_0_0_0, &t1917_1_0_0, NULL, &t1917_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3465_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.Link>
extern MethodInfo m24659_MI;
static PropertyInfo t3465____Current_PropertyInfo = 
{
	&t3465_TI, "Current", &m24659_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3465_PIs[] =
{
	&t3465____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3465_TI;
extern Il2CppType t852_0_0_0;
extern void* RuntimeInvoker_t852 (MethodInfo* method, void* obj, void** args);
MethodInfo m24659_MI = 
{
	"get_Current", NULL, &t3465_TI, &t852_0_0_0, RuntimeInvoker_t852, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3465_MIs[] =
{
	&m24659_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3465_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3465_0_0_0;
extern Il2CppType t3465_1_0_0;
struct t3465;
extern TypeInfo t3465_TI;
extern Il2CppGenericClass t3465_GC;
TypeInfo t3465_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3465_MIs, t3465_PIs, NULL, NULL, NULL, NULL, NULL, &t3465_TI, t3465_ITIs, NULL, &EmptyCustomAttributesCache, &t3465_TI, &t3465_0_0_0, &t3465_1_0_0, NULL, &t3465_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1926.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1926_TI;
#include "t1926MD.h"

extern TypeInfo t1926_TI;
extern TypeInfo t852_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m10421_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18317_MI;
struct t52;
 t852  m18317 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18317_MI;


extern MethodInfo m10417_MI;
 void m10417 (t1926 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10418_MI;
 t7 * m10418 (t1926 * __this, MethodInfo* method){
	{
		t852  L_0 = m10421(__this, &m10421_MI);
		t852  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t852_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10419_MI;
 void m10419 (t1926 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10420_MI;
 bool m10420 (t1926 * __this, MethodInfo* method){
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
extern MethodInfo m10421_MI;
 t852  m10421 (t1926 * __this, MethodInfo* method){
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
		t852  L_8 = m18317(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18317_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.Link>
extern Il2CppType t52_0_0_1;
FieldInfo t1926_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t1926_TI, offsetof(t1926, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t1926_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t1926_TI, offsetof(t1926, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t1926_FIs[] =
{
	&t1926_f0_FieldInfo,
	&t1926_f1_FieldInfo,
	NULL
};
extern MethodInfo m10418_MI;
static PropertyInfo t1926____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1926_TI, "System.Collections.IEnumerator.Current", &m10418_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10421_MI;
static PropertyInfo t1926____Current_PropertyInfo = 
{
	&t1926_TI, "Current", &m10421_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1926_PIs[] =
{
	&t1926____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1926____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t1926_m10417_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t1926_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10417_MI = 
{
	".ctor", (methodPointerType)&m10417, &t1926_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t1926_m10417_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1926_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m10418_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10418, &t1926_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1926_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m10419_MI = 
{
	"Dispose", (methodPointerType)&m10419, &t1926_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1926_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m10420_MI = 
{
	"MoveNext", (methodPointerType)&m10420, &t1926_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1926_TI;
extern Il2CppType t852_0_0_0;
extern void* RuntimeInvoker_t852 (MethodInfo* method, void* obj, void** args);
MethodInfo m10421_MI = 
{
	"get_Current", (methodPointerType)&m10421, &t1926_TI, &t852_0_0_0, RuntimeInvoker_t852, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1926_MIs[] =
{
	&m10417_MI,
	&m10418_MI,
	&m10419_MI,
	&m10420_MI,
	&m10421_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m10418_MI;
extern MethodInfo m10420_MI;
extern MethodInfo m10419_MI;
extern MethodInfo m10421_MI;
static MethodInfo* t1926_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m10418_MI,
	&m10420_MI,
	&m10419_MI,
	&m10421_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3465_TI;
static TypeInfo* t1926_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3465_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3465_TI;
static Il2CppInterfaceOffsetPair t1926_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3465_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1926_0_0_0;
extern Il2CppType t1926_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t1926_TI;
extern Il2CppGenericClass t1926_GC;
extern TypeInfo t52_TI;
TypeInfo t1926_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1926_MIs, t1926_PIs, t1926_FIs, NULL, &t159_TI, NULL, &t52_TI, &t1926_TI, t1926_ITIs, t1926_VT, &EmptyCustomAttributesCache, &t1926_TI, &t1926_0_0_0, &t1926_1_0_0, t1926_IOs, &t1926_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1926)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
