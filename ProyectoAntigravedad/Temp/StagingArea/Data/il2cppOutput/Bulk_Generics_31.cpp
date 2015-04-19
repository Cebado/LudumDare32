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
extern TypeInfo t3810_TI;

#include "t1010.h"

#include "t52.h"

// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo m29667_MI;
static PropertyInfo t3810____Current_PropertyInfo = 
{
	&t3810_TI, "Current", &m29667_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3810_PIs[] =
{
	&t3810____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3810_TI;
extern Il2CppType t1010_0_0_0;
extern void* RuntimeInvoker_t1010 (MethodInfo* method, void* obj, void** args);
MethodInfo m29667_MI = 
{
	"get_Current", NULL, &t3810_TI, &t1010_0_0_0, RuntimeInvoker_t1010, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3810_MIs[] =
{
	&m29667_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3810_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3810_0_0_0;
extern Il2CppType t3810_1_0_0;
struct t3810;
extern TypeInfo t3810_TI;
extern Il2CppGenericClass t3810_GC;
TypeInfo t3810_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3810_MIs, t3810_PIs, NULL, NULL, NULL, NULL, NULL, &t3810_TI, t3810_ITIs, NULL, &EmptyCustomAttributesCache, &t3810_TI, &t3810_0_0_0, &t3810_1_0_0, NULL, &t3810_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2885.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2885_TI;
#include "t2885MD.h"

#include "t7.h"
#include "t60.h"
#include "t34.h"
#include "t1295.h"
#include "t53.h"
#include "t55.h"
extern TypeInfo t2885_TI;
extern TypeInfo t1010_TI;
extern TypeInfo t1295_TI;
#include "t1295MD.h"
#include "t52MD.h"
extern MethodInfo m16586_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22585_MI;
struct t52;
#include "t88.h"
 int32_t m22585 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22585_MI;


extern MethodInfo m16582_MI;
 void m16582 (t2885 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16583_MI;
 t7 * m16583 (t2885 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16586(__this, &m16586_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1010_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16584_MI;
 void m16584 (t2885 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16585_MI;
 bool m16585 (t2885 * __this, MethodInfo* method){
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
extern MethodInfo m16586_MI;
 int32_t m16586 (t2885 * __this, MethodInfo* method){
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
		int32_t L_8 = m22585(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22585_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
extern Il2CppType t52_0_0_1;
FieldInfo t2885_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2885_TI, offsetof(t2885, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2885_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2885_TI, offsetof(t2885, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2885_FIs[] =
{
	&t2885_f0_FieldInfo,
	&t2885_f1_FieldInfo,
	NULL
};
extern MethodInfo m16583_MI;
static PropertyInfo t2885____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2885_TI, "System.Collections.IEnumerator.Current", &m16583_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16586_MI;
static PropertyInfo t2885____Current_PropertyInfo = 
{
	&t2885_TI, "Current", &m16586_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2885_PIs[] =
{
	&t2885____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2885____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2885_m16582_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2885_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16582_MI = 
{
	".ctor", (methodPointerType)&m16582, &t2885_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2885_m16582_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2885_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16583_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16583, &t2885_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2885_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16584_MI = 
{
	"Dispose", (methodPointerType)&m16584, &t2885_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2885_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16585_MI = 
{
	"MoveNext", (methodPointerType)&m16585, &t2885_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2885_TI;
extern Il2CppType t1010_0_0_0;
extern void* RuntimeInvoker_t1010 (MethodInfo* method, void* obj, void** args);
MethodInfo m16586_MI = 
{
	"get_Current", (methodPointerType)&m16586, &t2885_TI, &t1010_0_0_0, RuntimeInvoker_t1010, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2885_MIs[] =
{
	&m16582_MI,
	&m16583_MI,
	&m16584_MI,
	&m16585_MI,
	&m16586_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16583_MI;
extern MethodInfo m16585_MI;
extern MethodInfo m16584_MI;
extern MethodInfo m16586_MI;
static MethodInfo* t2885_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16583_MI,
	&m16585_MI,
	&m16584_MI,
	&m16586_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3810_TI;
static TypeInfo* t2885_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3810_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3810_TI;
static Il2CppInterfaceOffsetPair t2885_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3810_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2885_0_0_0;
extern Il2CppType t2885_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2885_TI;
extern Il2CppGenericClass t2885_GC;
extern TypeInfo t52_TI;
TypeInfo t2885_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2885_MIs, t2885_PIs, t2885_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2885_TI, t2885_ITIs, t2885_VT, &EmptyCustomAttributesCache, &t2885_TI, &t2885_0_0_0, &t2885_1_0_0, t2885_IOs, &t2885_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2885)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5086_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo m29668_MI;
static PropertyInfo t5086____Count_PropertyInfo = 
{
	&t5086_TI, "Count", &m29668_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29669_MI;
static PropertyInfo t5086____IsReadOnly_PropertyInfo = 
{
	&t5086_TI, "IsReadOnly", &m29669_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5086_PIs[] =
{
	&t5086____Count_PropertyInfo,
	&t5086____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5086_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29668_MI = 
{
	"get_Count", NULL, &t5086_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5086_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29669_MI = 
{
	"get_IsReadOnly", NULL, &t5086_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1010_0_0_0;
static ParameterInfo t5086_m29670_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1010_0_0_0},
};
extern TypeInfo t5086_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29670_MI = 
{
	"Add", NULL, &t5086_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5086_m29670_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5086_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29671_MI = 
{
	"Clear", NULL, &t5086_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1010_0_0_0;
static ParameterInfo t5086_m29672_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1010_0_0_0},
};
extern TypeInfo t5086_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29672_MI = 
{
	"Contains", NULL, &t5086_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5086_m29672_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3136_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5086_m29673_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3136_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5086_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29673_MI = 
{
	"CopyTo", NULL, &t5086_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5086_m29673_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1010_0_0_0;
static ParameterInfo t5086_m29674_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1010_0_0_0},
};
extern TypeInfo t5086_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29674_MI = 
{
	"Remove", NULL, &t5086_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5086_m29674_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5086_MIs[] =
{
	&m29668_MI,
	&m29669_MI,
	&m29670_MI,
	&m29671_MI,
	&m29672_MI,
	&m29673_MI,
	&m29674_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5088_TI;
static TypeInfo* t5086_ITIs[] = 
{
	&t618_TI,
	&t5088_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5086_0_0_0;
extern Il2CppType t5086_1_0_0;
struct t5086;
extern TypeInfo t5086_TI;
extern Il2CppGenericClass t5086_GC;
TypeInfo t5086_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5086_MIs, t5086_PIs, NULL, NULL, NULL, NULL, NULL, &t5086_TI, t5086_ITIs, NULL, &EmptyCustomAttributesCache, &t5086_TI, &t5086_0_0_0, &t5086_1_0_0, NULL, &t5086_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5088_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Cer>
extern TypeInfo t5088_TI;
extern Il2CppType t3810_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29675_MI = 
{
	"GetEnumerator", NULL, &t5088_TI, &t3810_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5088_MIs[] =
{
	&m29675_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5088_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5088_0_0_0;
extern Il2CppType t5088_1_0_0;
struct t5088;
extern TypeInfo t5088_TI;
extern Il2CppGenericClass t5088_GC;
TypeInfo t5088_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5088_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5088_TI, t5088_ITIs, NULL, &EmptyCustomAttributesCache, &t5088_TI, &t5088_0_0_0, &t5088_1_0_0, NULL, &t5088_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5087_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo m29676_MI;
extern MethodInfo m29677_MI;
static PropertyInfo t5087____Item_PropertyInfo = 
{
	&t5087_TI, "Item", &m29676_MI, &m29677_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5087_PIs[] =
{
	&t5087____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1010_0_0_0;
static ParameterInfo t5087_m29678_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1010_0_0_0},
};
extern TypeInfo t5087_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29678_MI = 
{
	"IndexOf", NULL, &t5087_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5087_m29678_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1010_0_0_0;
static ParameterInfo t5087_m29679_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1010_0_0_0},
};
extern TypeInfo t5087_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29679_MI = 
{
	"Insert", NULL, &t5087_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5087_m29679_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5087_m29680_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5087_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29680_MI = 
{
	"RemoveAt", NULL, &t5087_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5087_m29680_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5087_m29676_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5087_TI;
extern Il2CppType t1010_0_0_0;
extern void* RuntimeInvoker_t1010_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29676_MI = 
{
	"get_Item", NULL, &t5087_TI, &t1010_0_0_0, RuntimeInvoker_t1010_t60, t5087_m29676_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1010_0_0_0;
static ParameterInfo t5087_m29677_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1010_0_0_0},
};
extern TypeInfo t5087_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29677_MI = 
{
	"set_Item", NULL, &t5087_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5087_m29677_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5087_MIs[] =
{
	&m29678_MI,
	&m29679_MI,
	&m29680_MI,
	&m29676_MI,
	&m29677_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5086_TI;
extern TypeInfo t5088_TI;
static TypeInfo* t5087_ITIs[] = 
{
	&t618_TI,
	&t5086_TI,
	&t5088_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5087_0_0_0;
extern Il2CppType t5087_1_0_0;
struct t5087;
extern TypeInfo t5087_TI;
extern Il2CppGenericClass t5087_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5087_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5087_MIs, t5087_PIs, NULL, NULL, NULL, NULL, NULL, &t5087_TI, t5087_ITIs, NULL, &t1426__CustomAttributeCache, &t5087_TI, &t5087_0_0_0, &t5087_1_0_0, NULL, &t5087_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3811_TI;

#include "t1011.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo m29681_MI;
static PropertyInfo t3811____Current_PropertyInfo = 
{
	&t3811_TI, "Current", &m29681_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3811_PIs[] =
{
	&t3811____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3811_TI;
extern Il2CppType t1011_0_0_0;
extern void* RuntimeInvoker_t1011 (MethodInfo* method, void* obj, void** args);
MethodInfo m29681_MI = 
{
	"get_Current", NULL, &t3811_TI, &t1011_0_0_0, RuntimeInvoker_t1011, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3811_MIs[] =
{
	&m29681_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3811_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3811_0_0_0;
extern Il2CppType t3811_1_0_0;
struct t3811;
extern TypeInfo t3811_TI;
extern Il2CppGenericClass t3811_GC;
TypeInfo t3811_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3811_MIs, t3811_PIs, NULL, NULL, NULL, NULL, NULL, &t3811_TI, t3811_ITIs, NULL, &EmptyCustomAttributesCache, &t3811_TI, &t3811_0_0_0, &t3811_1_0_0, NULL, &t3811_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2886.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2886_TI;
#include "t2886MD.h"

extern TypeInfo t2886_TI;
extern TypeInfo t1011_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16591_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22596_MI;
struct t52;
 int32_t m22596 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22596_MI;


extern MethodInfo m16587_MI;
 void m16587 (t2886 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16588_MI;
 t7 * m16588 (t2886 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16591(__this, &m16591_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1011_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16589_MI;
 void m16589 (t2886 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16590_MI;
 bool m16590 (t2886 * __this, MethodInfo* method){
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
extern MethodInfo m16591_MI;
 int32_t m16591 (t2886 * __this, MethodInfo* method){
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
		int32_t L_8 = m22596(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22596_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
extern Il2CppType t52_0_0_1;
FieldInfo t2886_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2886_TI, offsetof(t2886, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2886_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2886_TI, offsetof(t2886, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2886_FIs[] =
{
	&t2886_f0_FieldInfo,
	&t2886_f1_FieldInfo,
	NULL
};
extern MethodInfo m16588_MI;
static PropertyInfo t2886____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2886_TI, "System.Collections.IEnumerator.Current", &m16588_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16591_MI;
static PropertyInfo t2886____Current_PropertyInfo = 
{
	&t2886_TI, "Current", &m16591_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2886_PIs[] =
{
	&t2886____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2886____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2886_m16587_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2886_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16587_MI = 
{
	".ctor", (methodPointerType)&m16587, &t2886_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2886_m16587_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2886_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16588_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16588, &t2886_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2886_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16589_MI = 
{
	"Dispose", (methodPointerType)&m16589, &t2886_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2886_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16590_MI = 
{
	"MoveNext", (methodPointerType)&m16590, &t2886_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2886_TI;
extern Il2CppType t1011_0_0_0;
extern void* RuntimeInvoker_t1011 (MethodInfo* method, void* obj, void** args);
MethodInfo m16591_MI = 
{
	"get_Current", (methodPointerType)&m16591, &t2886_TI, &t1011_0_0_0, RuntimeInvoker_t1011, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2886_MIs[] =
{
	&m16587_MI,
	&m16588_MI,
	&m16589_MI,
	&m16590_MI,
	&m16591_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16588_MI;
extern MethodInfo m16590_MI;
extern MethodInfo m16589_MI;
extern MethodInfo m16591_MI;
static MethodInfo* t2886_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16588_MI,
	&m16590_MI,
	&m16589_MI,
	&m16591_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3811_TI;
static TypeInfo* t2886_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3811_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3811_TI;
static Il2CppInterfaceOffsetPair t2886_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3811_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2886_0_0_0;
extern Il2CppType t2886_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2886_TI;
extern Il2CppGenericClass t2886_GC;
extern TypeInfo t52_TI;
TypeInfo t2886_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2886_MIs, t2886_PIs, t2886_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2886_TI, t2886_ITIs, t2886_VT, &EmptyCustomAttributesCache, &t2886_TI, &t2886_0_0_0, &t2886_1_0_0, t2886_IOs, &t2886_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2886)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5089_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo m29682_MI;
static PropertyInfo t5089____Count_PropertyInfo = 
{
	&t5089_TI, "Count", &m29682_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29683_MI;
static PropertyInfo t5089____IsReadOnly_PropertyInfo = 
{
	&t5089_TI, "IsReadOnly", &m29683_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5089_PIs[] =
{
	&t5089____Count_PropertyInfo,
	&t5089____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5089_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29682_MI = 
{
	"get_Count", NULL, &t5089_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5089_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29683_MI = 
{
	"get_IsReadOnly", NULL, &t5089_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1011_0_0_0;
static ParameterInfo t5089_m29684_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1011_0_0_0},
};
extern TypeInfo t5089_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29684_MI = 
{
	"Add", NULL, &t5089_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5089_m29684_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5089_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29685_MI = 
{
	"Clear", NULL, &t5089_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1011_0_0_0;
static ParameterInfo t5089_m29686_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1011_0_0_0},
};
extern TypeInfo t5089_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29686_MI = 
{
	"Contains", NULL, &t5089_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5089_m29686_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3137_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5089_m29687_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3137_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5089_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29687_MI = 
{
	"CopyTo", NULL, &t5089_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5089_m29687_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1011_0_0_0;
static ParameterInfo t5089_m29688_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1011_0_0_0},
};
extern TypeInfo t5089_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29688_MI = 
{
	"Remove", NULL, &t5089_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5089_m29688_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5089_MIs[] =
{
	&m29682_MI,
	&m29683_MI,
	&m29684_MI,
	&m29685_MI,
	&m29686_MI,
	&m29687_MI,
	&m29688_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5091_TI;
static TypeInfo* t5089_ITIs[] = 
{
	&t618_TI,
	&t5091_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5089_0_0_0;
extern Il2CppType t5089_1_0_0;
struct t5089;
extern TypeInfo t5089_TI;
extern Il2CppGenericClass t5089_GC;
TypeInfo t5089_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5089_MIs, t5089_PIs, NULL, NULL, NULL, NULL, NULL, &t5089_TI, t5089_ITIs, NULL, &EmptyCustomAttributesCache, &t5089_TI, &t5089_0_0_0, &t5089_1_0_0, NULL, &t5089_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5091_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Consistency>
extern TypeInfo t5091_TI;
extern Il2CppType t3811_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29689_MI = 
{
	"GetEnumerator", NULL, &t5091_TI, &t3811_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5091_MIs[] =
{
	&m29689_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5091_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5091_0_0_0;
extern Il2CppType t5091_1_0_0;
struct t5091;
extern TypeInfo t5091_TI;
extern Il2CppGenericClass t5091_GC;
TypeInfo t5091_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5091_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5091_TI, t5091_ITIs, NULL, &EmptyCustomAttributesCache, &t5091_TI, &t5091_0_0_0, &t5091_1_0_0, NULL, &t5091_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5090_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo m29690_MI;
extern MethodInfo m29691_MI;
static PropertyInfo t5090____Item_PropertyInfo = 
{
	&t5090_TI, "Item", &m29690_MI, &m29691_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5090_PIs[] =
{
	&t5090____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1011_0_0_0;
static ParameterInfo t5090_m29692_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1011_0_0_0},
};
extern TypeInfo t5090_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29692_MI = 
{
	"IndexOf", NULL, &t5090_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5090_m29692_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1011_0_0_0;
static ParameterInfo t5090_m29693_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1011_0_0_0},
};
extern TypeInfo t5090_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29693_MI = 
{
	"Insert", NULL, &t5090_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5090_m29693_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5090_m29694_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5090_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29694_MI = 
{
	"RemoveAt", NULL, &t5090_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5090_m29694_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5090_m29690_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5090_TI;
extern Il2CppType t1011_0_0_0;
extern void* RuntimeInvoker_t1011_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29690_MI = 
{
	"get_Item", NULL, &t5090_TI, &t1011_0_0_0, RuntimeInvoker_t1011_t60, t5090_m29690_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1011_0_0_0;
static ParameterInfo t5090_m29691_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1011_0_0_0},
};
extern TypeInfo t5090_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29691_MI = 
{
	"set_Item", NULL, &t5090_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5090_m29691_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5090_MIs[] =
{
	&m29692_MI,
	&m29693_MI,
	&m29694_MI,
	&m29690_MI,
	&m29691_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5089_TI;
extern TypeInfo t5091_TI;
static TypeInfo* t5090_ITIs[] = 
{
	&t618_TI,
	&t5089_TI,
	&t5091_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5090_0_0_0;
extern Il2CppType t5090_1_0_0;
struct t5090;
extern TypeInfo t5090_TI;
extern Il2CppGenericClass t5090_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5090_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5090_MIs, t5090_PIs, NULL, NULL, NULL, NULL, NULL, &t5090_TI, t5090_ITIs, NULL, &t1426__CustomAttributeCache, &t5090_TI, &t5090_0_0_0, &t5090_1_0_0, NULL, &t5090_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3812_TI;

#include "t1013.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo m29695_MI;
static PropertyInfo t3812____Current_PropertyInfo = 
{
	&t3812_TI, "Current", &m29695_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3812_PIs[] =
{
	&t3812____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3812_TI;
extern Il2CppType t1013_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29695_MI = 
{
	"get_Current", NULL, &t3812_TI, &t1013_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3812_MIs[] =
{
	&m29695_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3812_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3812_0_0_0;
extern Il2CppType t3812_1_0_0;
struct t3812;
extern TypeInfo t3812_TI;
extern Il2CppGenericClass t3812_GC;
TypeInfo t3812_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3812_MIs, t3812_PIs, NULL, NULL, NULL, NULL, NULL, &t3812_TI, t3812_ITIs, NULL, &EmptyCustomAttributesCache, &t3812_TI, &t3812_0_0_0, &t3812_1_0_0, NULL, &t3812_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2887.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2887_TI;
#include "t2887MD.h"

extern TypeInfo t2887_TI;
extern TypeInfo t1013_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16596_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22607_MI;
struct t52;
struct t52;
 t7 * m17147_gshared (t52 * __this, int32_t p0, MethodInfo* method);
#define m17147(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
#define m22607(__this, p0, method) (t1013 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22607_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2887_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2887_TI, offsetof(t2887, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2887_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2887_TI, offsetof(t2887, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2887_FIs[] =
{
	&t2887_f0_FieldInfo,
	&t2887_f1_FieldInfo,
	NULL
};
extern MethodInfo m16593_MI;
static PropertyInfo t2887____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2887_TI, "System.Collections.IEnumerator.Current", &m16593_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16596_MI;
static PropertyInfo t2887____Current_PropertyInfo = 
{
	&t2887_TI, "Current", &m16596_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2887_PIs[] =
{
	&t2887____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2887____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2887_m16592_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2887_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16592_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2887_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2887_m16592_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2887_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16593_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2887_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2887_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16594_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2887_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2887_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16595_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2887_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2887_TI;
extern Il2CppType t1013_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16596_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2887_TI, &t1013_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2887_MIs[] =
{
	&m16592_MI,
	&m16593_MI,
	&m16594_MI,
	&m16595_MI,
	&m16596_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16593_MI;
extern MethodInfo m16595_MI;
extern MethodInfo m16594_MI;
extern MethodInfo m16596_MI;
static MethodInfo* t2887_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16593_MI,
	&m16595_MI,
	&m16594_MI,
	&m16596_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3812_TI;
static TypeInfo* t2887_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3812_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3812_TI;
static Il2CppInterfaceOffsetPair t2887_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3812_TI, 7},
};
extern MethodInfo m16596_MI;
extern TypeInfo t1013_TI;
extern MethodInfo m22607_MI;
static void* t2887_RGCTXData[3] = 
{
	&m16596_MI,
	&t1013_TI,
	&m22607_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2887_0_0_0;
extern Il2CppType t2887_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2887_TI;
extern Il2CppGenericClass t2887_GC;
extern TypeInfo t52_TI;
TypeInfo t2887_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2887_MIs, t2887_PIs, t2887_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2887_TI, t2887_ITIs, t2887_VT, &EmptyCustomAttributesCache, &t2887_TI, &t2887_0_0_0, &t2887_1_0_0, t2887_IOs, &t2887_GC, NULL, NULL, NULL, t2887_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2887)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5092_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo m29696_MI;
static PropertyInfo t5092____Count_PropertyInfo = 
{
	&t5092_TI, "Count", &m29696_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29697_MI;
static PropertyInfo t5092____IsReadOnly_PropertyInfo = 
{
	&t5092_TI, "IsReadOnly", &m29697_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5092_PIs[] =
{
	&t5092____Count_PropertyInfo,
	&t5092____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5092_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29696_MI = 
{
	"get_Count", NULL, &t5092_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5092_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29697_MI = 
{
	"get_IsReadOnly", NULL, &t5092_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1013_0_0_0;
static ParameterInfo t5092_m29698_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1013_0_0_0},
};
extern TypeInfo t5092_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29698_MI = 
{
	"Add", NULL, &t5092_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5092_m29698_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5092_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29699_MI = 
{
	"Clear", NULL, &t5092_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1013_0_0_0;
static ParameterInfo t5092_m29700_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1013_0_0_0},
};
extern TypeInfo t5092_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29700_MI = 
{
	"Contains", NULL, &t5092_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5092_m29700_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3138_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5092_m29701_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3138_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5092_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29701_MI = 
{
	"CopyTo", NULL, &t5092_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5092_m29701_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1013_0_0_0;
static ParameterInfo t5092_m29702_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1013_0_0_0},
};
extern TypeInfo t5092_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29702_MI = 
{
	"Remove", NULL, &t5092_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5092_m29702_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5092_MIs[] =
{
	&m29696_MI,
	&m29697_MI,
	&m29698_MI,
	&m29699_MI,
	&m29700_MI,
	&m29701_MI,
	&m29702_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5094_TI;
static TypeInfo* t5092_ITIs[] = 
{
	&t618_TI,
	&t5094_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5092_0_0_0;
extern Il2CppType t5092_1_0_0;
struct t5092;
extern TypeInfo t5092_TI;
extern Il2CppGenericClass t5092_GC;
TypeInfo t5092_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5092_MIs, t5092_PIs, NULL, NULL, NULL, NULL, NULL, &t5092_TI, t5092_ITIs, NULL, &EmptyCustomAttributesCache, &t5092_TI, &t5092_0_0_0, &t5092_1_0_0, NULL, &t5092_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5094_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern TypeInfo t5094_TI;
extern Il2CppType t3812_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29703_MI = 
{
	"GetEnumerator", NULL, &t5094_TI, &t3812_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5094_MIs[] =
{
	&m29703_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5094_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5094_0_0_0;
extern Il2CppType t5094_1_0_0;
struct t5094;
extern TypeInfo t5094_TI;
extern Il2CppGenericClass t5094_GC;
TypeInfo t5094_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5094_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5094_TI, t5094_ITIs, NULL, &EmptyCustomAttributesCache, &t5094_TI, &t5094_0_0_0, &t5094_1_0_0, NULL, &t5094_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5093_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo m29704_MI;
extern MethodInfo m29705_MI;
static PropertyInfo t5093____Item_PropertyInfo = 
{
	&t5093_TI, "Item", &m29704_MI, &m29705_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5093_PIs[] =
{
	&t5093____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1013_0_0_0;
static ParameterInfo t5093_m29706_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1013_0_0_0},
};
extern TypeInfo t5093_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29706_MI = 
{
	"IndexOf", NULL, &t5093_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5093_m29706_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1013_0_0_0;
static ParameterInfo t5093_m29707_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1013_0_0_0},
};
extern TypeInfo t5093_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29707_MI = 
{
	"Insert", NULL, &t5093_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5093_m29707_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5093_m29708_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5093_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29708_MI = 
{
	"RemoveAt", NULL, &t5093_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5093_m29708_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5093_m29704_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5093_TI;
extern Il2CppType t1013_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29704_MI = 
{
	"get_Item", NULL, &t5093_TI, &t1013_0_0_0, RuntimeInvoker_t7_t60, t5093_m29704_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1013_0_0_0;
static ParameterInfo t5093_m29705_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1013_0_0_0},
};
extern TypeInfo t5093_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29705_MI = 
{
	"set_Item", NULL, &t5093_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5093_m29705_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5093_MIs[] =
{
	&m29706_MI,
	&m29707_MI,
	&m29708_MI,
	&m29704_MI,
	&m29705_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5092_TI;
extern TypeInfo t5094_TI;
static TypeInfo* t5093_ITIs[] = 
{
	&t618_TI,
	&t5092_TI,
	&t5094_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5093_0_0_0;
extern Il2CppType t5093_1_0_0;
struct t5093;
extern TypeInfo t5093_TI;
extern Il2CppGenericClass t5093_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5093_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5093_MIs, t5093_PIs, NULL, NULL, NULL, NULL, NULL, &t5093_TI, t5093_ITIs, NULL, &t1426__CustomAttributeCache, &t5093_TI, &t5093_0_0_0, &t5093_1_0_0, NULL, &t5093_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3813_TI;

#include "t760.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo m29709_MI;
static PropertyInfo t3813____Current_PropertyInfo = 
{
	&t3813_TI, "Current", &m29709_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3813_PIs[] =
{
	&t3813____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3813_TI;
extern Il2CppType t760_0_0_0;
extern void* RuntimeInvoker_t760 (MethodInfo* method, void* obj, void** args);
MethodInfo m29709_MI = 
{
	"get_Current", NULL, &t3813_TI, &t760_0_0_0, RuntimeInvoker_t760, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3813_MIs[] =
{
	&m29709_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3813_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3813_0_0_0;
extern Il2CppType t3813_1_0_0;
struct t3813;
extern TypeInfo t3813_TI;
extern Il2CppGenericClass t3813_GC;
TypeInfo t3813_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3813_MIs, t3813_PIs, NULL, NULL, NULL, NULL, NULL, &t3813_TI, t3813_ITIs, NULL, &EmptyCustomAttributesCache, &t3813_TI, &t3813_0_0_0, &t3813_1_0_0, NULL, &t3813_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2888.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2888_TI;
#include "t2888MD.h"

extern TypeInfo t2888_TI;
extern TypeInfo t760_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16601_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22618_MI;
struct t52;
 int32_t m22618 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22618_MI;


extern MethodInfo m16597_MI;
 void m16597 (t2888 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16598_MI;
 t7 * m16598 (t2888 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16601(__this, &m16601_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t760_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16599_MI;
 void m16599 (t2888 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16600_MI;
 bool m16600 (t2888 * __this, MethodInfo* method){
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
extern MethodInfo m16601_MI;
 int32_t m16601 (t2888 * __this, MethodInfo* method){
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
		int32_t L_8 = m22618(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22618_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>
extern Il2CppType t52_0_0_1;
FieldInfo t2888_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2888_TI, offsetof(t2888, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2888_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2888_TI, offsetof(t2888, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2888_FIs[] =
{
	&t2888_f0_FieldInfo,
	&t2888_f1_FieldInfo,
	NULL
};
extern MethodInfo m16598_MI;
static PropertyInfo t2888____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2888_TI, "System.Collections.IEnumerator.Current", &m16598_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16601_MI;
static PropertyInfo t2888____Current_PropertyInfo = 
{
	&t2888_TI, "Current", &m16601_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2888_PIs[] =
{
	&t2888____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2888____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2888_m16597_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2888_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16597_MI = 
{
	".ctor", (methodPointerType)&m16597, &t2888_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2888_m16597_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2888_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16598_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16598, &t2888_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2888_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16599_MI = 
{
	"Dispose", (methodPointerType)&m16599, &t2888_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2888_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16600_MI = 
{
	"MoveNext", (methodPointerType)&m16600, &t2888_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2888_TI;
extern Il2CppType t760_0_0_0;
extern void* RuntimeInvoker_t760 (MethodInfo* method, void* obj, void** args);
MethodInfo m16601_MI = 
{
	"get_Current", (methodPointerType)&m16601, &t2888_TI, &t760_0_0_0, RuntimeInvoker_t760, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2888_MIs[] =
{
	&m16597_MI,
	&m16598_MI,
	&m16599_MI,
	&m16600_MI,
	&m16601_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16598_MI;
extern MethodInfo m16600_MI;
extern MethodInfo m16599_MI;
extern MethodInfo m16601_MI;
static MethodInfo* t2888_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16598_MI,
	&m16600_MI,
	&m16599_MI,
	&m16601_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3813_TI;
static TypeInfo* t2888_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3813_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3813_TI;
static Il2CppInterfaceOffsetPair t2888_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3813_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2888_0_0_0;
extern Il2CppType t2888_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2888_TI;
extern Il2CppGenericClass t2888_GC;
extern TypeInfo t52_TI;
TypeInfo t2888_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2888_MIs, t2888_PIs, t2888_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2888_TI, t2888_ITIs, t2888_VT, &EmptyCustomAttributesCache, &t2888_TI, &t2888_0_0_0, &t2888_1_0_0, t2888_IOs, &t2888_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2888)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5095_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo m29710_MI;
static PropertyInfo t5095____Count_PropertyInfo = 
{
	&t5095_TI, "Count", &m29710_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29711_MI;
static PropertyInfo t5095____IsReadOnly_PropertyInfo = 
{
	&t5095_TI, "IsReadOnly", &m29711_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5095_PIs[] =
{
	&t5095____Count_PropertyInfo,
	&t5095____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5095_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29710_MI = 
{
	"get_Count", NULL, &t5095_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5095_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29711_MI = 
{
	"get_IsReadOnly", NULL, &t5095_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t760_0_0_0;
static ParameterInfo t5095_m29712_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t760_0_0_0},
};
extern TypeInfo t5095_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29712_MI = 
{
	"Add", NULL, &t5095_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5095_m29712_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5095_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29713_MI = 
{
	"Clear", NULL, &t5095_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t760_0_0_0;
static ParameterInfo t5095_m29714_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t760_0_0_0},
};
extern TypeInfo t5095_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29714_MI = 
{
	"Contains", NULL, &t5095_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5095_m29714_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3139_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5095_m29715_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3139_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5095_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29715_MI = 
{
	"CopyTo", NULL, &t5095_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5095_m29715_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t760_0_0_0;
static ParameterInfo t5095_m29716_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t760_0_0_0},
};
extern TypeInfo t5095_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29716_MI = 
{
	"Remove", NULL, &t5095_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5095_m29716_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5095_MIs[] =
{
	&m29710_MI,
	&m29711_MI,
	&m29712_MI,
	&m29713_MI,
	&m29714_MI,
	&m29715_MI,
	&m29716_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5097_TI;
static TypeInfo* t5095_ITIs[] = 
{
	&t618_TI,
	&t5097_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5095_0_0_0;
extern Il2CppType t5095_1_0_0;
struct t5095;
extern TypeInfo t5095_TI;
extern Il2CppGenericClass t5095_GC;
TypeInfo t5095_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5095_MIs, t5095_PIs, NULL, NULL, NULL, NULL, NULL, &t5095_TI, t5095_ITIs, NULL, &EmptyCustomAttributesCache, &t5095_TI, &t5095_0_0_0, &t5095_1_0_0, NULL, &t5095_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5097_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CallingConvention>
extern TypeInfo t5097_TI;
extern Il2CppType t3813_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29717_MI = 
{
	"GetEnumerator", NULL, &t5097_TI, &t3813_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5097_MIs[] =
{
	&m29717_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5097_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5097_0_0_0;
extern Il2CppType t5097_1_0_0;
struct t5097;
extern TypeInfo t5097_TI;
extern Il2CppGenericClass t5097_GC;
TypeInfo t5097_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5097_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5097_TI, t5097_ITIs, NULL, &EmptyCustomAttributesCache, &t5097_TI, &t5097_0_0_0, &t5097_1_0_0, NULL, &t5097_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5096_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo m29718_MI;
extern MethodInfo m29719_MI;
static PropertyInfo t5096____Item_PropertyInfo = 
{
	&t5096_TI, "Item", &m29718_MI, &m29719_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5096_PIs[] =
{
	&t5096____Item_PropertyInfo,
	NULL
};
extern Il2CppType t760_0_0_0;
static ParameterInfo t5096_m29720_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t760_0_0_0},
};
extern TypeInfo t5096_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29720_MI = 
{
	"IndexOf", NULL, &t5096_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5096_m29720_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t760_0_0_0;
static ParameterInfo t5096_m29721_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t760_0_0_0},
};
extern TypeInfo t5096_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29721_MI = 
{
	"Insert", NULL, &t5096_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5096_m29721_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5096_m29722_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5096_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29722_MI = 
{
	"RemoveAt", NULL, &t5096_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5096_m29722_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5096_m29718_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5096_TI;
extern Il2CppType t760_0_0_0;
extern void* RuntimeInvoker_t760_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29718_MI = 
{
	"get_Item", NULL, &t5096_TI, &t760_0_0_0, RuntimeInvoker_t760_t60, t5096_m29718_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t760_0_0_0;
static ParameterInfo t5096_m29719_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t760_0_0_0},
};
extern TypeInfo t5096_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29719_MI = 
{
	"set_Item", NULL, &t5096_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5096_m29719_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5096_MIs[] =
{
	&m29720_MI,
	&m29721_MI,
	&m29722_MI,
	&m29718_MI,
	&m29719_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5095_TI;
extern TypeInfo t5097_TI;
static TypeInfo* t5096_ITIs[] = 
{
	&t618_TI,
	&t5095_TI,
	&t5097_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5096_0_0_0;
extern Il2CppType t5096_1_0_0;
struct t5096;
extern TypeInfo t5096_TI;
extern Il2CppGenericClass t5096_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5096_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5096_MIs, t5096_PIs, NULL, NULL, NULL, NULL, NULL, &t5096_TI, t5096_ITIs, NULL, &t1426__CustomAttributeCache, &t5096_TI, &t5096_0_0_0, &t5096_1_0_0, NULL, &t5096_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3814_TI;

#include "t761.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo m29723_MI;
static PropertyInfo t3814____Current_PropertyInfo = 
{
	&t3814_TI, "Current", &m29723_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3814_PIs[] =
{
	&t3814____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3814_TI;
extern Il2CppType t761_0_0_0;
extern void* RuntimeInvoker_t761 (MethodInfo* method, void* obj, void** args);
MethodInfo m29723_MI = 
{
	"get_Current", NULL, &t3814_TI, &t761_0_0_0, RuntimeInvoker_t761, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3814_MIs[] =
{
	&m29723_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3814_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3814_0_0_0;
extern Il2CppType t3814_1_0_0;
struct t3814;
extern TypeInfo t3814_TI;
extern Il2CppGenericClass t3814_GC;
TypeInfo t3814_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3814_MIs, t3814_PIs, NULL, NULL, NULL, NULL, NULL, &t3814_TI, t3814_ITIs, NULL, &EmptyCustomAttributesCache, &t3814_TI, &t3814_0_0_0, &t3814_1_0_0, NULL, &t3814_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2889.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2889_TI;
#include "t2889MD.h"

extern TypeInfo t2889_TI;
extern TypeInfo t761_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16606_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22629_MI;
struct t52;
 int32_t m22629 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22629_MI;


extern MethodInfo m16602_MI;
 void m16602 (t2889 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16603_MI;
 t7 * m16603 (t2889 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16606(__this, &m16606_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t761_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16604_MI;
 void m16604 (t2889 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16605_MI;
 bool m16605 (t2889 * __this, MethodInfo* method){
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
extern MethodInfo m16606_MI;
 int32_t m16606 (t2889 * __this, MethodInfo* method){
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
		int32_t L_8 = m22629(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22629_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>
extern Il2CppType t52_0_0_1;
FieldInfo t2889_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2889_TI, offsetof(t2889, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2889_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2889_TI, offsetof(t2889, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2889_FIs[] =
{
	&t2889_f0_FieldInfo,
	&t2889_f1_FieldInfo,
	NULL
};
extern MethodInfo m16603_MI;
static PropertyInfo t2889____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2889_TI, "System.Collections.IEnumerator.Current", &m16603_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16606_MI;
static PropertyInfo t2889____Current_PropertyInfo = 
{
	&t2889_TI, "Current", &m16606_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2889_PIs[] =
{
	&t2889____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2889____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2889_m16602_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2889_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16602_MI = 
{
	".ctor", (methodPointerType)&m16602, &t2889_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2889_m16602_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2889_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16603_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16603, &t2889_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2889_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16604_MI = 
{
	"Dispose", (methodPointerType)&m16604, &t2889_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2889_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16605_MI = 
{
	"MoveNext", (methodPointerType)&m16605, &t2889_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2889_TI;
extern Il2CppType t761_0_0_0;
extern void* RuntimeInvoker_t761 (MethodInfo* method, void* obj, void** args);
MethodInfo m16606_MI = 
{
	"get_Current", (methodPointerType)&m16606, &t2889_TI, &t761_0_0_0, RuntimeInvoker_t761, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2889_MIs[] =
{
	&m16602_MI,
	&m16603_MI,
	&m16604_MI,
	&m16605_MI,
	&m16606_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16603_MI;
extern MethodInfo m16605_MI;
extern MethodInfo m16604_MI;
extern MethodInfo m16606_MI;
static MethodInfo* t2889_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16603_MI,
	&m16605_MI,
	&m16604_MI,
	&m16606_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3814_TI;
static TypeInfo* t2889_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3814_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3814_TI;
static Il2CppInterfaceOffsetPair t2889_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3814_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2889_0_0_0;
extern Il2CppType t2889_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2889_TI;
extern Il2CppGenericClass t2889_GC;
extern TypeInfo t52_TI;
TypeInfo t2889_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2889_MIs, t2889_PIs, t2889_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2889_TI, t2889_ITIs, t2889_VT, &EmptyCustomAttributesCache, &t2889_TI, &t2889_0_0_0, &t2889_1_0_0, t2889_IOs, &t2889_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2889)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5098_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo m29724_MI;
static PropertyInfo t5098____Count_PropertyInfo = 
{
	&t5098_TI, "Count", &m29724_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29725_MI;
static PropertyInfo t5098____IsReadOnly_PropertyInfo = 
{
	&t5098_TI, "IsReadOnly", &m29725_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5098_PIs[] =
{
	&t5098____Count_PropertyInfo,
	&t5098____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5098_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29724_MI = 
{
	"get_Count", NULL, &t5098_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5098_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29725_MI = 
{
	"get_IsReadOnly", NULL, &t5098_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t761_0_0_0;
static ParameterInfo t5098_m29726_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t761_0_0_0},
};
extern TypeInfo t5098_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29726_MI = 
{
	"Add", NULL, &t5098_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5098_m29726_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5098_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29727_MI = 
{
	"Clear", NULL, &t5098_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t761_0_0_0;
static ParameterInfo t5098_m29728_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t761_0_0_0},
};
extern TypeInfo t5098_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29728_MI = 
{
	"Contains", NULL, &t5098_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5098_m29728_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3140_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5098_m29729_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3140_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5098_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29729_MI = 
{
	"CopyTo", NULL, &t5098_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5098_m29729_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t761_0_0_0;
static ParameterInfo t5098_m29730_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t761_0_0_0},
};
extern TypeInfo t5098_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29730_MI = 
{
	"Remove", NULL, &t5098_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5098_m29730_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5098_MIs[] =
{
	&m29724_MI,
	&m29725_MI,
	&m29726_MI,
	&m29727_MI,
	&m29728_MI,
	&m29729_MI,
	&m29730_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5100_TI;
static TypeInfo* t5098_ITIs[] = 
{
	&t618_TI,
	&t5100_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5098_0_0_0;
extern Il2CppType t5098_1_0_0;
struct t5098;
extern TypeInfo t5098_TI;
extern Il2CppGenericClass t5098_GC;
TypeInfo t5098_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5098_MIs, t5098_PIs, NULL, NULL, NULL, NULL, NULL, &t5098_TI, t5098_ITIs, NULL, &EmptyCustomAttributesCache, &t5098_TI, &t5098_0_0_0, &t5098_1_0_0, NULL, &t5098_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5100_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CharSet>
extern TypeInfo t5100_TI;
extern Il2CppType t3814_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29731_MI = 
{
	"GetEnumerator", NULL, &t5100_TI, &t3814_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5100_MIs[] =
{
	&m29731_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5100_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5100_0_0_0;
extern Il2CppType t5100_1_0_0;
struct t5100;
extern TypeInfo t5100_TI;
extern Il2CppGenericClass t5100_GC;
TypeInfo t5100_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5100_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5100_TI, t5100_ITIs, NULL, &EmptyCustomAttributesCache, &t5100_TI, &t5100_0_0_0, &t5100_1_0_0, NULL, &t5100_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5099_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo m29732_MI;
extern MethodInfo m29733_MI;
static PropertyInfo t5099____Item_PropertyInfo = 
{
	&t5099_TI, "Item", &m29732_MI, &m29733_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5099_PIs[] =
{
	&t5099____Item_PropertyInfo,
	NULL
};
extern Il2CppType t761_0_0_0;
static ParameterInfo t5099_m29734_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t761_0_0_0},
};
extern TypeInfo t5099_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29734_MI = 
{
	"IndexOf", NULL, &t5099_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5099_m29734_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t761_0_0_0;
static ParameterInfo t5099_m29735_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t761_0_0_0},
};
extern TypeInfo t5099_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29735_MI = 
{
	"Insert", NULL, &t5099_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5099_m29735_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5099_m29736_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5099_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29736_MI = 
{
	"RemoveAt", NULL, &t5099_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5099_m29736_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5099_m29732_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5099_TI;
extern Il2CppType t761_0_0_0;
extern void* RuntimeInvoker_t761_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29732_MI = 
{
	"get_Item", NULL, &t5099_TI, &t761_0_0_0, RuntimeInvoker_t761_t60, t5099_m29732_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t761_0_0_0;
static ParameterInfo t5099_m29733_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t761_0_0_0},
};
extern TypeInfo t5099_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29733_MI = 
{
	"set_Item", NULL, &t5099_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5099_m29733_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5099_MIs[] =
{
	&m29734_MI,
	&m29735_MI,
	&m29736_MI,
	&m29732_MI,
	&m29733_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5098_TI;
extern TypeInfo t5100_TI;
static TypeInfo* t5099_ITIs[] = 
{
	&t618_TI,
	&t5098_TI,
	&t5100_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5099_0_0_0;
extern Il2CppType t5099_1_0_0;
struct t5099;
extern TypeInfo t5099_TI;
extern Il2CppGenericClass t5099_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5099_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5099_MIs, t5099_PIs, NULL, NULL, NULL, NULL, NULL, &t5099_TI, t5099_ITIs, NULL, &t1426__CustomAttributeCache, &t5099_TI, &t5099_0_0_0, &t5099_1_0_0, NULL, &t5099_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3815_TI;

#include "t1015.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo m29737_MI;
static PropertyInfo t3815____Current_PropertyInfo = 
{
	&t3815_TI, "Current", &m29737_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3815_PIs[] =
{
	&t3815____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3815_TI;
extern Il2CppType t1015_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29737_MI = 
{
	"get_Current", NULL, &t3815_TI, &t1015_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3815_MIs[] =
{
	&m29737_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3815_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3815_0_0_0;
extern Il2CppType t3815_1_0_0;
struct t3815;
extern TypeInfo t3815_TI;
extern Il2CppGenericClass t3815_GC;
TypeInfo t3815_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3815_MIs, t3815_PIs, NULL, NULL, NULL, NULL, NULL, &t3815_TI, t3815_ITIs, NULL, &EmptyCustomAttributesCache, &t3815_TI, &t3815_0_0_0, &t3815_1_0_0, NULL, &t3815_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2890.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2890_TI;
#include "t2890MD.h"

extern TypeInfo t2890_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16611_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22640_MI;
struct t52;
#define m22640(__this, p0, method) (t1015 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22640_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2890_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2890_TI, offsetof(t2890, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2890_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2890_TI, offsetof(t2890, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2890_FIs[] =
{
	&t2890_f0_FieldInfo,
	&t2890_f1_FieldInfo,
	NULL
};
extern MethodInfo m16608_MI;
static PropertyInfo t2890____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2890_TI, "System.Collections.IEnumerator.Current", &m16608_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16611_MI;
static PropertyInfo t2890____Current_PropertyInfo = 
{
	&t2890_TI, "Current", &m16611_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2890_PIs[] =
{
	&t2890____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2890____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2890_m16607_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2890_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16607_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2890_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2890_m16607_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2890_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16608_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2890_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2890_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16609_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2890_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2890_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16610_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2890_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2890_TI;
extern Il2CppType t1015_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16611_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2890_TI, &t1015_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2890_MIs[] =
{
	&m16607_MI,
	&m16608_MI,
	&m16609_MI,
	&m16610_MI,
	&m16611_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16608_MI;
extern MethodInfo m16610_MI;
extern MethodInfo m16609_MI;
extern MethodInfo m16611_MI;
static MethodInfo* t2890_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16608_MI,
	&m16610_MI,
	&m16609_MI,
	&m16611_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3815_TI;
static TypeInfo* t2890_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3815_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3815_TI;
static Il2CppInterfaceOffsetPair t2890_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3815_TI, 7},
};
extern MethodInfo m16611_MI;
extern TypeInfo t1015_TI;
extern MethodInfo m22640_MI;
static void* t2890_RGCTXData[3] = 
{
	&m16611_MI,
	&t1015_TI,
	&m22640_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2890_0_0_0;
extern Il2CppType t2890_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2890_TI;
extern Il2CppGenericClass t2890_GC;
extern TypeInfo t52_TI;
TypeInfo t2890_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2890_MIs, t2890_PIs, t2890_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2890_TI, t2890_ITIs, t2890_VT, &EmptyCustomAttributesCache, &t2890_TI, &t2890_0_0_0, &t2890_1_0_0, t2890_IOs, &t2890_GC, NULL, NULL, NULL, t2890_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2890)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5101_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo m29738_MI;
static PropertyInfo t5101____Count_PropertyInfo = 
{
	&t5101_TI, "Count", &m29738_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29739_MI;
static PropertyInfo t5101____IsReadOnly_PropertyInfo = 
{
	&t5101_TI, "IsReadOnly", &m29739_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5101_PIs[] =
{
	&t5101____Count_PropertyInfo,
	&t5101____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5101_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29738_MI = 
{
	"get_Count", NULL, &t5101_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5101_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29739_MI = 
{
	"get_IsReadOnly", NULL, &t5101_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1015_0_0_0;
static ParameterInfo t5101_m29740_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1015_0_0_0},
};
extern TypeInfo t5101_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29740_MI = 
{
	"Add", NULL, &t5101_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5101_m29740_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5101_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29741_MI = 
{
	"Clear", NULL, &t5101_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1015_0_0_0;
static ParameterInfo t5101_m29742_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1015_0_0_0},
};
extern TypeInfo t5101_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29742_MI = 
{
	"Contains", NULL, &t5101_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5101_m29742_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3141_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5101_m29743_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3141_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5101_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29743_MI = 
{
	"CopyTo", NULL, &t5101_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5101_m29743_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1015_0_0_0;
static ParameterInfo t5101_m29744_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1015_0_0_0},
};
extern TypeInfo t5101_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29744_MI = 
{
	"Remove", NULL, &t5101_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5101_m29744_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5101_MIs[] =
{
	&m29738_MI,
	&m29739_MI,
	&m29740_MI,
	&m29741_MI,
	&m29742_MI,
	&m29743_MI,
	&m29744_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5103_TI;
static TypeInfo* t5101_ITIs[] = 
{
	&t618_TI,
	&t5103_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5101_0_0_0;
extern Il2CppType t5101_1_0_0;
struct t5101;
extern TypeInfo t5101_TI;
extern Il2CppGenericClass t5101_GC;
TypeInfo t5101_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5101_MIs, t5101_PIs, NULL, NULL, NULL, NULL, NULL, &t5101_TI, t5101_ITIs, NULL, &EmptyCustomAttributesCache, &t5101_TI, &t5101_0_0_0, &t5101_1_0_0, NULL, &t5101_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5103_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern TypeInfo t5103_TI;
extern Il2CppType t3815_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29745_MI = 
{
	"GetEnumerator", NULL, &t5103_TI, &t3815_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5103_MIs[] =
{
	&m29745_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5103_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5103_0_0_0;
extern Il2CppType t5103_1_0_0;
struct t5103;
extern TypeInfo t5103_TI;
extern Il2CppGenericClass t5103_GC;
TypeInfo t5103_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5103_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5103_TI, t5103_ITIs, NULL, &EmptyCustomAttributesCache, &t5103_TI, &t5103_0_0_0, &t5103_1_0_0, NULL, &t5103_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5102_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo m29746_MI;
extern MethodInfo m29747_MI;
static PropertyInfo t5102____Item_PropertyInfo = 
{
	&t5102_TI, "Item", &m29746_MI, &m29747_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5102_PIs[] =
{
	&t5102____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1015_0_0_0;
static ParameterInfo t5102_m29748_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1015_0_0_0},
};
extern TypeInfo t5102_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29748_MI = 
{
	"IndexOf", NULL, &t5102_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5102_m29748_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1015_0_0_0;
static ParameterInfo t5102_m29749_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1015_0_0_0},
};
extern TypeInfo t5102_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29749_MI = 
{
	"Insert", NULL, &t5102_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5102_m29749_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5102_m29750_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5102_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29750_MI = 
{
	"RemoveAt", NULL, &t5102_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5102_m29750_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5102_m29746_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5102_TI;
extern Il2CppType t1015_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29746_MI = 
{
	"get_Item", NULL, &t5102_TI, &t1015_0_0_0, RuntimeInvoker_t7_t60, t5102_m29746_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1015_0_0_0;
static ParameterInfo t5102_m29747_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1015_0_0_0},
};
extern TypeInfo t5102_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29747_MI = 
{
	"set_Item", NULL, &t5102_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5102_m29747_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5102_MIs[] =
{
	&m29748_MI,
	&m29749_MI,
	&m29750_MI,
	&m29746_MI,
	&m29747_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5101_TI;
extern TypeInfo t5103_TI;
static TypeInfo* t5102_ITIs[] = 
{
	&t618_TI,
	&t5101_TI,
	&t5103_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5102_0_0_0;
extern Il2CppType t5102_1_0_0;
struct t5102;
extern TypeInfo t5102_TI;
extern Il2CppGenericClass t5102_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5102_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5102_MIs, t5102_PIs, NULL, NULL, NULL, NULL, NULL, &t5102_TI, t5102_ITIs, NULL, &t1426__CustomAttributeCache, &t5102_TI, &t5102_0_0_0, &t5102_1_0_0, NULL, &t5102_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3816_TI;

#include "t1016.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo m29751_MI;
static PropertyInfo t3816____Current_PropertyInfo = 
{
	&t3816_TI, "Current", &m29751_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3816_PIs[] =
{
	&t3816____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3816_TI;
extern Il2CppType t1016_0_0_0;
extern void* RuntimeInvoker_t1016 (MethodInfo* method, void* obj, void** args);
MethodInfo m29751_MI = 
{
	"get_Current", NULL, &t3816_TI, &t1016_0_0_0, RuntimeInvoker_t1016, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3816_MIs[] =
{
	&m29751_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3816_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3816_0_0_0;
extern Il2CppType t3816_1_0_0;
struct t3816;
extern TypeInfo t3816_TI;
extern Il2CppGenericClass t3816_GC;
TypeInfo t3816_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3816_MIs, t3816_PIs, NULL, NULL, NULL, NULL, NULL, &t3816_TI, t3816_ITIs, NULL, &EmptyCustomAttributesCache, &t3816_TI, &t3816_0_0_0, &t3816_1_0_0, NULL, &t3816_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2891.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2891_TI;
#include "t2891MD.h"

extern TypeInfo t2891_TI;
extern TypeInfo t1016_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16616_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22651_MI;
struct t52;
 int32_t m22651 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22651_MI;


extern MethodInfo m16612_MI;
 void m16612 (t2891 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16613_MI;
 t7 * m16613 (t2891 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16616(__this, &m16616_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1016_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16614_MI;
 void m16614 (t2891 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16615_MI;
 bool m16615 (t2891 * __this, MethodInfo* method){
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
extern MethodInfo m16616_MI;
 int32_t m16616 (t2891 * __this, MethodInfo* method){
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
		int32_t L_8 = m22651(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22651_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
extern Il2CppType t52_0_0_1;
FieldInfo t2891_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2891_TI, offsetof(t2891, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2891_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2891_TI, offsetof(t2891, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2891_FIs[] =
{
	&t2891_f0_FieldInfo,
	&t2891_f1_FieldInfo,
	NULL
};
extern MethodInfo m16613_MI;
static PropertyInfo t2891____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2891_TI, "System.Collections.IEnumerator.Current", &m16613_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16616_MI;
static PropertyInfo t2891____Current_PropertyInfo = 
{
	&t2891_TI, "Current", &m16616_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2891_PIs[] =
{
	&t2891____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2891____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2891_m16612_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2891_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16612_MI = 
{
	".ctor", (methodPointerType)&m16612, &t2891_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2891_m16612_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2891_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16613_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16613, &t2891_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2891_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16614_MI = 
{
	"Dispose", (methodPointerType)&m16614, &t2891_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2891_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16615_MI = 
{
	"MoveNext", (methodPointerType)&m16615, &t2891_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2891_TI;
extern Il2CppType t1016_0_0_0;
extern void* RuntimeInvoker_t1016 (MethodInfo* method, void* obj, void** args);
MethodInfo m16616_MI = 
{
	"get_Current", (methodPointerType)&m16616, &t2891_TI, &t1016_0_0_0, RuntimeInvoker_t1016, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2891_MIs[] =
{
	&m16612_MI,
	&m16613_MI,
	&m16614_MI,
	&m16615_MI,
	&m16616_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16613_MI;
extern MethodInfo m16615_MI;
extern MethodInfo m16614_MI;
extern MethodInfo m16616_MI;
static MethodInfo* t2891_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16613_MI,
	&m16615_MI,
	&m16614_MI,
	&m16616_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3816_TI;
static TypeInfo* t2891_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3816_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3816_TI;
static Il2CppInterfaceOffsetPair t2891_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3816_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2891_0_0_0;
extern Il2CppType t2891_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2891_TI;
extern Il2CppGenericClass t2891_GC;
extern TypeInfo t52_TI;
TypeInfo t2891_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2891_MIs, t2891_PIs, t2891_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2891_TI, t2891_ITIs, t2891_VT, &EmptyCustomAttributesCache, &t2891_TI, &t2891_0_0_0, &t2891_1_0_0, t2891_IOs, &t2891_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2891)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5104_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo m29752_MI;
static PropertyInfo t5104____Count_PropertyInfo = 
{
	&t5104_TI, "Count", &m29752_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29753_MI;
static PropertyInfo t5104____IsReadOnly_PropertyInfo = 
{
	&t5104_TI, "IsReadOnly", &m29753_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5104_PIs[] =
{
	&t5104____Count_PropertyInfo,
	&t5104____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5104_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29752_MI = 
{
	"get_Count", NULL, &t5104_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5104_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29753_MI = 
{
	"get_IsReadOnly", NULL, &t5104_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1016_0_0_0;
static ParameterInfo t5104_m29754_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1016_0_0_0},
};
extern TypeInfo t5104_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29754_MI = 
{
	"Add", NULL, &t5104_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5104_m29754_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5104_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29755_MI = 
{
	"Clear", NULL, &t5104_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1016_0_0_0;
static ParameterInfo t5104_m29756_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1016_0_0_0},
};
extern TypeInfo t5104_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29756_MI = 
{
	"Contains", NULL, &t5104_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5104_m29756_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3142_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5104_m29757_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3142_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5104_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29757_MI = 
{
	"CopyTo", NULL, &t5104_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5104_m29757_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1016_0_0_0;
static ParameterInfo t5104_m29758_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1016_0_0_0},
};
extern TypeInfo t5104_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29758_MI = 
{
	"Remove", NULL, &t5104_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5104_m29758_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5104_MIs[] =
{
	&m29752_MI,
	&m29753_MI,
	&m29754_MI,
	&m29755_MI,
	&m29756_MI,
	&m29757_MI,
	&m29758_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5106_TI;
static TypeInfo* t5104_ITIs[] = 
{
	&t618_TI,
	&t5106_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5104_0_0_0;
extern Il2CppType t5104_1_0_0;
struct t5104;
extern TypeInfo t5104_TI;
extern Il2CppGenericClass t5104_GC;
TypeInfo t5104_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5104_MIs, t5104_PIs, NULL, NULL, NULL, NULL, NULL, &t5104_TI, t5104_ITIs, NULL, &EmptyCustomAttributesCache, &t5104_TI, &t5104_0_0_0, &t5104_1_0_0, NULL, &t5104_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5106_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceType>
extern TypeInfo t5106_TI;
extern Il2CppType t3816_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29759_MI = 
{
	"GetEnumerator", NULL, &t5106_TI, &t3816_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5106_MIs[] =
{
	&m29759_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5106_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5106_0_0_0;
extern Il2CppType t5106_1_0_0;
struct t5106;
extern TypeInfo t5106_TI;
extern Il2CppGenericClass t5106_GC;
TypeInfo t5106_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5106_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5106_TI, t5106_ITIs, NULL, &EmptyCustomAttributesCache, &t5106_TI, &t5106_0_0_0, &t5106_1_0_0, NULL, &t5106_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5105_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo m29760_MI;
extern MethodInfo m29761_MI;
static PropertyInfo t5105____Item_PropertyInfo = 
{
	&t5105_TI, "Item", &m29760_MI, &m29761_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5105_PIs[] =
{
	&t5105____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1016_0_0_0;
static ParameterInfo t5105_m29762_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1016_0_0_0},
};
extern TypeInfo t5105_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29762_MI = 
{
	"IndexOf", NULL, &t5105_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5105_m29762_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1016_0_0_0;
static ParameterInfo t5105_m29763_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1016_0_0_0},
};
extern TypeInfo t5105_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29763_MI = 
{
	"Insert", NULL, &t5105_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5105_m29763_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5105_m29764_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5105_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29764_MI = 
{
	"RemoveAt", NULL, &t5105_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5105_m29764_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5105_m29760_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5105_TI;
extern Il2CppType t1016_0_0_0;
extern void* RuntimeInvoker_t1016_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29760_MI = 
{
	"get_Item", NULL, &t5105_TI, &t1016_0_0_0, RuntimeInvoker_t1016_t60, t5105_m29760_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1016_0_0_0;
static ParameterInfo t5105_m29761_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1016_0_0_0},
};
extern TypeInfo t5105_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29761_MI = 
{
	"set_Item", NULL, &t5105_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5105_m29761_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5105_MIs[] =
{
	&m29762_MI,
	&m29763_MI,
	&m29764_MI,
	&m29760_MI,
	&m29761_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5104_TI;
extern TypeInfo t5106_TI;
static TypeInfo* t5105_ITIs[] = 
{
	&t618_TI,
	&t5104_TI,
	&t5106_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5105_0_0_0;
extern Il2CppType t5105_1_0_0;
struct t5105;
extern TypeInfo t5105_TI;
extern Il2CppGenericClass t5105_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5105_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5105_MIs, t5105_PIs, NULL, NULL, NULL, NULL, NULL, &t5105_TI, t5105_ITIs, NULL, &t1426__CustomAttributeCache, &t5105_TI, &t5105_0_0_0, &t5105_1_0_0, NULL, &t5105_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3817_TI;

#include "t1017.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo m29765_MI;
static PropertyInfo t3817____Current_PropertyInfo = 
{
	&t3817_TI, "Current", &m29765_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3817_PIs[] =
{
	&t3817____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3817_TI;
extern Il2CppType t1017_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29765_MI = 
{
	"get_Current", NULL, &t3817_TI, &t1017_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3817_MIs[] =
{
	&m29765_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3817_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3817_0_0_0;
extern Il2CppType t3817_1_0_0;
struct t3817;
extern TypeInfo t3817_TI;
extern Il2CppGenericClass t3817_GC;
TypeInfo t3817_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3817_MIs, t3817_PIs, NULL, NULL, NULL, NULL, NULL, &t3817_TI, t3817_ITIs, NULL, &EmptyCustomAttributesCache, &t3817_TI, &t3817_0_0_0, &t3817_1_0_0, NULL, &t3817_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2892.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2892_TI;
#include "t2892MD.h"

extern TypeInfo t2892_TI;
extern TypeInfo t1017_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16621_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22662_MI;
struct t52;
#define m22662(__this, p0, method) (t1017 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22662_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2892_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2892_TI, offsetof(t2892, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2892_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2892_TI, offsetof(t2892, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2892_FIs[] =
{
	&t2892_f0_FieldInfo,
	&t2892_f1_FieldInfo,
	NULL
};
extern MethodInfo m16618_MI;
static PropertyInfo t2892____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2892_TI, "System.Collections.IEnumerator.Current", &m16618_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16621_MI;
static PropertyInfo t2892____Current_PropertyInfo = 
{
	&t2892_TI, "Current", &m16621_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2892_PIs[] =
{
	&t2892____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2892____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2892_m16617_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2892_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16617_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2892_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2892_m16617_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2892_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16618_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2892_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2892_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16619_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2892_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2892_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16620_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2892_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2892_TI;
extern Il2CppType t1017_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16621_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2892_TI, &t1017_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2892_MIs[] =
{
	&m16617_MI,
	&m16618_MI,
	&m16619_MI,
	&m16620_MI,
	&m16621_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16618_MI;
extern MethodInfo m16620_MI;
extern MethodInfo m16619_MI;
extern MethodInfo m16621_MI;
static MethodInfo* t2892_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16618_MI,
	&m16620_MI,
	&m16619_MI,
	&m16621_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3817_TI;
static TypeInfo* t2892_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3817_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3817_TI;
static Il2CppInterfaceOffsetPair t2892_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3817_TI, 7},
};
extern MethodInfo m16621_MI;
extern TypeInfo t1017_TI;
extern MethodInfo m22662_MI;
static void* t2892_RGCTXData[3] = 
{
	&m16621_MI,
	&t1017_TI,
	&m22662_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2892_0_0_0;
extern Il2CppType t2892_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2892_TI;
extern Il2CppGenericClass t2892_GC;
extern TypeInfo t52_TI;
TypeInfo t2892_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2892_MIs, t2892_PIs, t2892_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2892_TI, t2892_ITIs, t2892_VT, &EmptyCustomAttributesCache, &t2892_TI, &t2892_0_0_0, &t2892_1_0_0, t2892_IOs, &t2892_GC, NULL, NULL, NULL, t2892_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2892)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5107_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo m29766_MI;
static PropertyInfo t5107____Count_PropertyInfo = 
{
	&t5107_TI, "Count", &m29766_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29767_MI;
static PropertyInfo t5107____IsReadOnly_PropertyInfo = 
{
	&t5107_TI, "IsReadOnly", &m29767_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5107_PIs[] =
{
	&t5107____Count_PropertyInfo,
	&t5107____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5107_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29766_MI = 
{
	"get_Count", NULL, &t5107_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5107_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29767_MI = 
{
	"get_IsReadOnly", NULL, &t5107_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1017_0_0_0;
static ParameterInfo t5107_m29768_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1017_0_0_0},
};
extern TypeInfo t5107_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29768_MI = 
{
	"Add", NULL, &t5107_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5107_m29768_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5107_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29769_MI = 
{
	"Clear", NULL, &t5107_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1017_0_0_0;
static ParameterInfo t5107_m29770_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1017_0_0_0},
};
extern TypeInfo t5107_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29770_MI = 
{
	"Contains", NULL, &t5107_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5107_m29770_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3143_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5107_m29771_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3143_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5107_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29771_MI = 
{
	"CopyTo", NULL, &t5107_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5107_m29771_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1017_0_0_0;
static ParameterInfo t5107_m29772_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1017_0_0_0},
};
extern TypeInfo t5107_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29772_MI = 
{
	"Remove", NULL, &t5107_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5107_m29772_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5107_MIs[] =
{
	&m29766_MI,
	&m29767_MI,
	&m29768_MI,
	&m29769_MI,
	&m29770_MI,
	&m29771_MI,
	&m29772_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5109_TI;
static TypeInfo* t5107_ITIs[] = 
{
	&t618_TI,
	&t5109_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5107_0_0_0;
extern Il2CppType t5107_1_0_0;
struct t5107;
extern TypeInfo t5107_TI;
extern Il2CppGenericClass t5107_GC;
TypeInfo t5107_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5107_MIs, t5107_PIs, NULL, NULL, NULL, NULL, NULL, &t5107_TI, t5107_ITIs, NULL, &EmptyCustomAttributesCache, &t5107_TI, &t5107_0_0_0, &t5107_1_0_0, NULL, &t5107_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5109_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern TypeInfo t5109_TI;
extern Il2CppType t3817_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29773_MI = 
{
	"GetEnumerator", NULL, &t5109_TI, &t3817_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5109_MIs[] =
{
	&m29773_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5109_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5109_0_0_0;
extern Il2CppType t5109_1_0_0;
struct t5109;
extern TypeInfo t5109_TI;
extern Il2CppGenericClass t5109_GC;
TypeInfo t5109_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5109_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5109_TI, t5109_ITIs, NULL, &EmptyCustomAttributesCache, &t5109_TI, &t5109_0_0_0, &t5109_1_0_0, NULL, &t5109_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5108_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo m29774_MI;
extern MethodInfo m29775_MI;
static PropertyInfo t5108____Item_PropertyInfo = 
{
	&t5108_TI, "Item", &m29774_MI, &m29775_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5108_PIs[] =
{
	&t5108____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1017_0_0_0;
static ParameterInfo t5108_m29776_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1017_0_0_0},
};
extern TypeInfo t5108_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29776_MI = 
{
	"IndexOf", NULL, &t5108_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5108_m29776_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1017_0_0_0;
static ParameterInfo t5108_m29777_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1017_0_0_0},
};
extern TypeInfo t5108_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29777_MI = 
{
	"Insert", NULL, &t5108_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5108_m29777_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5108_m29778_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5108_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29778_MI = 
{
	"RemoveAt", NULL, &t5108_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5108_m29778_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5108_m29774_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5108_TI;
extern Il2CppType t1017_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29774_MI = 
{
	"get_Item", NULL, &t5108_TI, &t1017_0_0_0, RuntimeInvoker_t7_t60, t5108_m29774_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1017_0_0_0;
static ParameterInfo t5108_m29775_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1017_0_0_0},
};
extern TypeInfo t5108_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29775_MI = 
{
	"set_Item", NULL, &t5108_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5108_m29775_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5108_MIs[] =
{
	&m29776_MI,
	&m29777_MI,
	&m29778_MI,
	&m29774_MI,
	&m29775_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5107_TI;
extern TypeInfo t5109_TI;
static TypeInfo* t5108_ITIs[] = 
{
	&t618_TI,
	&t5107_TI,
	&t5109_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5108_0_0_0;
extern Il2CppType t5108_1_0_0;
struct t5108;
extern TypeInfo t5108_TI;
extern Il2CppGenericClass t5108_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5108_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5108_MIs, t5108_PIs, NULL, NULL, NULL, NULL, NULL, &t5108_TI, t5108_ITIs, NULL, &t1426__CustomAttributeCache, &t5108_TI, &t5108_0_0_0, &t5108_1_0_0, NULL, &t5108_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3818_TI;

#include "t1018.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo m29779_MI;
static PropertyInfo t3818____Current_PropertyInfo = 
{
	&t3818_TI, "Current", &m29779_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3818_PIs[] =
{
	&t3818____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3818_TI;
extern Il2CppType t1018_0_0_0;
extern void* RuntimeInvoker_t1018 (MethodInfo* method, void* obj, void** args);
MethodInfo m29779_MI = 
{
	"get_Current", NULL, &t3818_TI, &t1018_0_0_0, RuntimeInvoker_t1018, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3818_MIs[] =
{
	&m29779_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3818_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3818_0_0_0;
extern Il2CppType t3818_1_0_0;
struct t3818;
extern TypeInfo t3818_TI;
extern Il2CppGenericClass t3818_GC;
TypeInfo t3818_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3818_MIs, t3818_PIs, NULL, NULL, NULL, NULL, NULL, &t3818_TI, t3818_ITIs, NULL, &EmptyCustomAttributesCache, &t3818_TI, &t3818_0_0_0, &t3818_1_0_0, NULL, &t3818_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2893.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2893_TI;
#include "t2893MD.h"

extern TypeInfo t2893_TI;
extern TypeInfo t1018_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16626_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22673_MI;
struct t52;
 int32_t m22673 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22673_MI;


extern MethodInfo m16622_MI;
 void m16622 (t2893 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16623_MI;
 t7 * m16623 (t2893 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16626(__this, &m16626_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1018_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16624_MI;
 void m16624 (t2893 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16625_MI;
 bool m16625 (t2893 * __this, MethodInfo* method){
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
extern MethodInfo m16626_MI;
 int32_t m16626 (t2893 * __this, MethodInfo* method){
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
		int32_t L_8 = m22673(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22673_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
extern Il2CppType t52_0_0_1;
FieldInfo t2893_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2893_TI, offsetof(t2893, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2893_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2893_TI, offsetof(t2893, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2893_FIs[] =
{
	&t2893_f0_FieldInfo,
	&t2893_f1_FieldInfo,
	NULL
};
extern MethodInfo m16623_MI;
static PropertyInfo t2893____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2893_TI, "System.Collections.IEnumerator.Current", &m16623_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16626_MI;
static PropertyInfo t2893____Current_PropertyInfo = 
{
	&t2893_TI, "Current", &m16626_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2893_PIs[] =
{
	&t2893____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2893____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2893_m16622_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2893_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16622_MI = 
{
	".ctor", (methodPointerType)&m16622, &t2893_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2893_m16622_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2893_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16623_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16623, &t2893_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2893_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16624_MI = 
{
	"Dispose", (methodPointerType)&m16624, &t2893_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2893_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16625_MI = 
{
	"MoveNext", (methodPointerType)&m16625, &t2893_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2893_TI;
extern Il2CppType t1018_0_0_0;
extern void* RuntimeInvoker_t1018 (MethodInfo* method, void* obj, void** args);
MethodInfo m16626_MI = 
{
	"get_Current", (methodPointerType)&m16626, &t2893_TI, &t1018_0_0_0, RuntimeInvoker_t1018, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2893_MIs[] =
{
	&m16622_MI,
	&m16623_MI,
	&m16624_MI,
	&m16625_MI,
	&m16626_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16623_MI;
extern MethodInfo m16625_MI;
extern MethodInfo m16624_MI;
extern MethodInfo m16626_MI;
static MethodInfo* t2893_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16623_MI,
	&m16625_MI,
	&m16624_MI,
	&m16626_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3818_TI;
static TypeInfo* t2893_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3818_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3818_TI;
static Il2CppInterfaceOffsetPair t2893_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3818_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2893_0_0_0;
extern Il2CppType t2893_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2893_TI;
extern Il2CppGenericClass t2893_GC;
extern TypeInfo t52_TI;
TypeInfo t2893_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2893_MIs, t2893_PIs, t2893_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2893_TI, t2893_ITIs, t2893_VT, &EmptyCustomAttributesCache, &t2893_TI, &t2893_0_0_0, &t2893_1_0_0, t2893_IOs, &t2893_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2893)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5110_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo m29780_MI;
static PropertyInfo t5110____Count_PropertyInfo = 
{
	&t5110_TI, "Count", &m29780_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29781_MI;
static PropertyInfo t5110____IsReadOnly_PropertyInfo = 
{
	&t5110_TI, "IsReadOnly", &m29781_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5110_PIs[] =
{
	&t5110____Count_PropertyInfo,
	&t5110____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5110_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29780_MI = 
{
	"get_Count", NULL, &t5110_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5110_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29781_MI = 
{
	"get_IsReadOnly", NULL, &t5110_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1018_0_0_0;
static ParameterInfo t5110_m29782_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1018_0_0_0},
};
extern TypeInfo t5110_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29782_MI = 
{
	"Add", NULL, &t5110_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5110_m29782_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5110_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29783_MI = 
{
	"Clear", NULL, &t5110_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1018_0_0_0;
static ParameterInfo t5110_m29784_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1018_0_0_0},
};
extern TypeInfo t5110_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29784_MI = 
{
	"Contains", NULL, &t5110_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5110_m29784_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3144_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5110_m29785_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3144_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5110_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29785_MI = 
{
	"CopyTo", NULL, &t5110_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5110_m29785_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1018_0_0_0;
static ParameterInfo t5110_m29786_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1018_0_0_0},
};
extern TypeInfo t5110_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29786_MI = 
{
	"Remove", NULL, &t5110_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5110_m29786_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5110_MIs[] =
{
	&m29780_MI,
	&m29781_MI,
	&m29782_MI,
	&m29783_MI,
	&m29784_MI,
	&m29785_MI,
	&m29786_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5112_TI;
static TypeInfo* t5110_ITIs[] = 
{
	&t618_TI,
	&t5112_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5110_0_0_0;
extern Il2CppType t5110_1_0_0;
struct t5110;
extern TypeInfo t5110_TI;
extern Il2CppGenericClass t5110_GC;
TypeInfo t5110_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5110_MIs, t5110_PIs, NULL, NULL, NULL, NULL, NULL, &t5110_TI, t5110_ITIs, NULL, &EmptyCustomAttributesCache, &t5110_TI, &t5110_0_0_0, &t5110_1_0_0, NULL, &t5110_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5112_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComInterfaceType>
extern TypeInfo t5112_TI;
extern Il2CppType t3818_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29787_MI = 
{
	"GetEnumerator", NULL, &t5112_TI, &t3818_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5112_MIs[] =
{
	&m29787_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5112_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5112_0_0_0;
extern Il2CppType t5112_1_0_0;
struct t5112;
extern TypeInfo t5112_TI;
extern Il2CppGenericClass t5112_GC;
TypeInfo t5112_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5112_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5112_TI, t5112_ITIs, NULL, &EmptyCustomAttributesCache, &t5112_TI, &t5112_0_0_0, &t5112_1_0_0, NULL, &t5112_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5111_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo m29788_MI;
extern MethodInfo m29789_MI;
static PropertyInfo t5111____Item_PropertyInfo = 
{
	&t5111_TI, "Item", &m29788_MI, &m29789_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5111_PIs[] =
{
	&t5111____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1018_0_0_0;
static ParameterInfo t5111_m29790_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1018_0_0_0},
};
extern TypeInfo t5111_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29790_MI = 
{
	"IndexOf", NULL, &t5111_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5111_m29790_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1018_0_0_0;
static ParameterInfo t5111_m29791_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1018_0_0_0},
};
extern TypeInfo t5111_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29791_MI = 
{
	"Insert", NULL, &t5111_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5111_m29791_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5111_m29792_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5111_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29792_MI = 
{
	"RemoveAt", NULL, &t5111_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5111_m29792_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5111_m29788_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5111_TI;
extern Il2CppType t1018_0_0_0;
extern void* RuntimeInvoker_t1018_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29788_MI = 
{
	"get_Item", NULL, &t5111_TI, &t1018_0_0_0, RuntimeInvoker_t1018_t60, t5111_m29788_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1018_0_0_0;
static ParameterInfo t5111_m29789_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1018_0_0_0},
};
extern TypeInfo t5111_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29789_MI = 
{
	"set_Item", NULL, &t5111_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5111_m29789_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5111_MIs[] =
{
	&m29790_MI,
	&m29791_MI,
	&m29792_MI,
	&m29788_MI,
	&m29789_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5110_TI;
extern TypeInfo t5112_TI;
static TypeInfo* t5111_ITIs[] = 
{
	&t618_TI,
	&t5110_TI,
	&t5112_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5111_0_0_0;
extern Il2CppType t5111_1_0_0;
struct t5111;
extern TypeInfo t5111_TI;
extern Il2CppGenericClass t5111_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5111_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5111_MIs, t5111_PIs, NULL, NULL, NULL, NULL, NULL, &t5111_TI, t5111_ITIs, NULL, &t1426__CustomAttributeCache, &t5111_TI, &t5111_0_0_0, &t5111_1_0_0, NULL, &t5111_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3819_TI;

#include "t1019.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>
extern MethodInfo m29793_MI;
static PropertyInfo t3819____Current_PropertyInfo = 
{
	&t3819_TI, "Current", &m29793_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3819_PIs[] =
{
	&t3819____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3819_TI;
extern Il2CppType t1019_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29793_MI = 
{
	"get_Current", NULL, &t3819_TI, &t1019_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3819_MIs[] =
{
	&m29793_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3819_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3819_0_0_0;
extern Il2CppType t3819_1_0_0;
struct t3819;
extern TypeInfo t3819_TI;
extern Il2CppGenericClass t3819_GC;
TypeInfo t3819_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3819_MIs, t3819_PIs, NULL, NULL, NULL, NULL, NULL, &t3819_TI, t3819_ITIs, NULL, &EmptyCustomAttributesCache, &t3819_TI, &t3819_0_0_0, &t3819_1_0_0, NULL, &t3819_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2894.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2894_TI;
#include "t2894MD.h"

extern TypeInfo t2894_TI;
extern TypeInfo t1019_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16631_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22684_MI;
struct t52;
#define m22684(__this, p0, method) (t1019 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22684_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2894_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2894_TI, offsetof(t2894, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2894_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2894_TI, offsetof(t2894, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2894_FIs[] =
{
	&t2894_f0_FieldInfo,
	&t2894_f1_FieldInfo,
	NULL
};
extern MethodInfo m16628_MI;
static PropertyInfo t2894____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2894_TI, "System.Collections.IEnumerator.Current", &m16628_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16631_MI;
static PropertyInfo t2894____Current_PropertyInfo = 
{
	&t2894_TI, "Current", &m16631_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2894_PIs[] =
{
	&t2894____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2894____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2894_m16627_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2894_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16627_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2894_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2894_m16627_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2894_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16628_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2894_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2894_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16629_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2894_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2894_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16630_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2894_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2894_TI;
extern Il2CppType t1019_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16631_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2894_TI, &t1019_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2894_MIs[] =
{
	&m16627_MI,
	&m16628_MI,
	&m16629_MI,
	&m16630_MI,
	&m16631_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16628_MI;
extern MethodInfo m16630_MI;
extern MethodInfo m16629_MI;
extern MethodInfo m16631_MI;
static MethodInfo* t2894_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16628_MI,
	&m16630_MI,
	&m16629_MI,
	&m16631_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3819_TI;
static TypeInfo* t2894_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3819_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3819_TI;
static Il2CppInterfaceOffsetPair t2894_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3819_TI, 7},
};
extern MethodInfo m16631_MI;
extern TypeInfo t1019_TI;
extern MethodInfo m22684_MI;
static void* t2894_RGCTXData[3] = 
{
	&m16631_MI,
	&t1019_TI,
	&m22684_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2894_0_0_0;
extern Il2CppType t2894_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2894_TI;
extern Il2CppGenericClass t2894_GC;
extern TypeInfo t52_TI;
TypeInfo t2894_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2894_MIs, t2894_PIs, t2894_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2894_TI, t2894_ITIs, t2894_VT, &EmptyCustomAttributesCache, &t2894_TI, &t2894_0_0_0, &t2894_1_0_0, t2894_IOs, &t2894_GC, NULL, NULL, NULL, t2894_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2894)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5113_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>
extern MethodInfo m29794_MI;
static PropertyInfo t5113____Count_PropertyInfo = 
{
	&t5113_TI, "Count", &m29794_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29795_MI;
static PropertyInfo t5113____IsReadOnly_PropertyInfo = 
{
	&t5113_TI, "IsReadOnly", &m29795_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5113_PIs[] =
{
	&t5113____Count_PropertyInfo,
	&t5113____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5113_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29794_MI = 
{
	"get_Count", NULL, &t5113_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5113_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29795_MI = 
{
	"get_IsReadOnly", NULL, &t5113_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1019_0_0_0;
static ParameterInfo t5113_m29796_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1019_0_0_0},
};
extern TypeInfo t5113_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29796_MI = 
{
	"Add", NULL, &t5113_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5113_m29796_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5113_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29797_MI = 
{
	"Clear", NULL, &t5113_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1019_0_0_0;
static ParameterInfo t5113_m29798_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1019_0_0_0},
};
extern TypeInfo t5113_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29798_MI = 
{
	"Contains", NULL, &t5113_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5113_m29798_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3145_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5113_m29799_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3145_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5113_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29799_MI = 
{
	"CopyTo", NULL, &t5113_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5113_m29799_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1019_0_0_0;
static ParameterInfo t5113_m29800_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1019_0_0_0},
};
extern TypeInfo t5113_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29800_MI = 
{
	"Remove", NULL, &t5113_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5113_m29800_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5113_MIs[] =
{
	&m29794_MI,
	&m29795_MI,
	&m29796_MI,
	&m29797_MI,
	&m29798_MI,
	&m29799_MI,
	&m29800_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5115_TI;
static TypeInfo* t5113_ITIs[] = 
{
	&t618_TI,
	&t5115_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5113_0_0_0;
extern Il2CppType t5113_1_0_0;
struct t5113;
extern TypeInfo t5113_TI;
extern Il2CppGenericClass t5113_GC;
TypeInfo t5113_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5113_MIs, t5113_PIs, NULL, NULL, NULL, NULL, NULL, &t5113_TI, t5113_ITIs, NULL, &EmptyCustomAttributesCache, &t5113_TI, &t5113_0_0_0, &t5113_1_0_0, NULL, &t5113_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5115_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DispIdAttribute>
extern TypeInfo t5115_TI;
extern Il2CppType t3819_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29801_MI = 
{
	"GetEnumerator", NULL, &t5115_TI, &t3819_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5115_MIs[] =
{
	&m29801_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5115_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5115_0_0_0;
extern Il2CppType t5115_1_0_0;
struct t5115;
extern TypeInfo t5115_TI;
extern Il2CppGenericClass t5115_GC;
TypeInfo t5115_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5115_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5115_TI, t5115_ITIs, NULL, &EmptyCustomAttributesCache, &t5115_TI, &t5115_0_0_0, &t5115_1_0_0, NULL, &t5115_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5114_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>
extern MethodInfo m29802_MI;
extern MethodInfo m29803_MI;
static PropertyInfo t5114____Item_PropertyInfo = 
{
	&t5114_TI, "Item", &m29802_MI, &m29803_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5114_PIs[] =
{
	&t5114____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1019_0_0_0;
static ParameterInfo t5114_m29804_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1019_0_0_0},
};
extern TypeInfo t5114_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29804_MI = 
{
	"IndexOf", NULL, &t5114_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5114_m29804_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1019_0_0_0;
static ParameterInfo t5114_m29805_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1019_0_0_0},
};
extern TypeInfo t5114_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29805_MI = 
{
	"Insert", NULL, &t5114_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5114_m29805_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5114_m29806_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5114_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29806_MI = 
{
	"RemoveAt", NULL, &t5114_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5114_m29806_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5114_m29802_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5114_TI;
extern Il2CppType t1019_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29802_MI = 
{
	"get_Item", NULL, &t5114_TI, &t1019_0_0_0, RuntimeInvoker_t7_t60, t5114_m29802_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1019_0_0_0;
static ParameterInfo t5114_m29803_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1019_0_0_0},
};
extern TypeInfo t5114_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29803_MI = 
{
	"set_Item", NULL, &t5114_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5114_m29803_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5114_MIs[] =
{
	&m29804_MI,
	&m29805_MI,
	&m29806_MI,
	&m29802_MI,
	&m29803_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5113_TI;
extern TypeInfo t5115_TI;
static TypeInfo* t5114_ITIs[] = 
{
	&t618_TI,
	&t5113_TI,
	&t5115_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5114_0_0_0;
extern Il2CppType t5114_1_0_0;
struct t5114;
extern TypeInfo t5114_TI;
extern Il2CppGenericClass t5114_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5114_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5114_MIs, t5114_PIs, NULL, NULL, NULL, NULL, NULL, &t5114_TI, t5114_ITIs, NULL, &t1426__CustomAttributeCache, &t5114_TI, &t5114_0_0_0, &t5114_1_0_0, NULL, &t5114_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3820_TI;

#include "t1021.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GCHandleType>
extern MethodInfo m29807_MI;
static PropertyInfo t3820____Current_PropertyInfo = 
{
	&t3820_TI, "Current", &m29807_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3820_PIs[] =
{
	&t3820____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3820_TI;
extern Il2CppType t1021_0_0_0;
extern void* RuntimeInvoker_t1021 (MethodInfo* method, void* obj, void** args);
MethodInfo m29807_MI = 
{
	"get_Current", NULL, &t3820_TI, &t1021_0_0_0, RuntimeInvoker_t1021, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3820_MIs[] =
{
	&m29807_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3820_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3820_0_0_0;
extern Il2CppType t3820_1_0_0;
struct t3820;
extern TypeInfo t3820_TI;
extern Il2CppGenericClass t3820_GC;
TypeInfo t3820_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3820_MIs, t3820_PIs, NULL, NULL, NULL, NULL, NULL, &t3820_TI, t3820_ITIs, NULL, &EmptyCustomAttributesCache, &t3820_TI, &t3820_0_0_0, &t3820_1_0_0, NULL, &t3820_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2895.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2895_TI;
#include "t2895MD.h"

extern TypeInfo t2895_TI;
extern TypeInfo t1021_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16636_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22695_MI;
struct t52;
 int32_t m22695 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22695_MI;


extern MethodInfo m16632_MI;
 void m16632 (t2895 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16633_MI;
 t7 * m16633 (t2895 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16636(__this, &m16636_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1021_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16634_MI;
 void m16634 (t2895 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16635_MI;
 bool m16635 (t2895 * __this, MethodInfo* method){
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
extern MethodInfo m16636_MI;
 int32_t m16636 (t2895 * __this, MethodInfo* method){
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
		int32_t L_8 = m22695(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22695_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>
extern Il2CppType t52_0_0_1;
FieldInfo t2895_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2895_TI, offsetof(t2895, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2895_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2895_TI, offsetof(t2895, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2895_FIs[] =
{
	&t2895_f0_FieldInfo,
	&t2895_f1_FieldInfo,
	NULL
};
extern MethodInfo m16633_MI;
static PropertyInfo t2895____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2895_TI, "System.Collections.IEnumerator.Current", &m16633_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16636_MI;
static PropertyInfo t2895____Current_PropertyInfo = 
{
	&t2895_TI, "Current", &m16636_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2895_PIs[] =
{
	&t2895____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2895____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2895_m16632_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2895_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16632_MI = 
{
	".ctor", (methodPointerType)&m16632, &t2895_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2895_m16632_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2895_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16633_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16633, &t2895_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2895_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16634_MI = 
{
	"Dispose", (methodPointerType)&m16634, &t2895_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2895_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16635_MI = 
{
	"MoveNext", (methodPointerType)&m16635, &t2895_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2895_TI;
extern Il2CppType t1021_0_0_0;
extern void* RuntimeInvoker_t1021 (MethodInfo* method, void* obj, void** args);
MethodInfo m16636_MI = 
{
	"get_Current", (methodPointerType)&m16636, &t2895_TI, &t1021_0_0_0, RuntimeInvoker_t1021, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2895_MIs[] =
{
	&m16632_MI,
	&m16633_MI,
	&m16634_MI,
	&m16635_MI,
	&m16636_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16633_MI;
extern MethodInfo m16635_MI;
extern MethodInfo m16634_MI;
extern MethodInfo m16636_MI;
static MethodInfo* t2895_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16633_MI,
	&m16635_MI,
	&m16634_MI,
	&m16636_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3820_TI;
static TypeInfo* t2895_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3820_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3820_TI;
static Il2CppInterfaceOffsetPair t2895_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3820_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2895_0_0_0;
extern Il2CppType t2895_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2895_TI;
extern Il2CppGenericClass t2895_GC;
extern TypeInfo t52_TI;
TypeInfo t2895_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2895_MIs, t2895_PIs, t2895_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2895_TI, t2895_ITIs, t2895_VT, &EmptyCustomAttributesCache, &t2895_TI, &t2895_0_0_0, &t2895_1_0_0, t2895_IOs, &t2895_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2895)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5116_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>
extern MethodInfo m29808_MI;
static PropertyInfo t5116____Count_PropertyInfo = 
{
	&t5116_TI, "Count", &m29808_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29809_MI;
static PropertyInfo t5116____IsReadOnly_PropertyInfo = 
{
	&t5116_TI, "IsReadOnly", &m29809_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5116_PIs[] =
{
	&t5116____Count_PropertyInfo,
	&t5116____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5116_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29808_MI = 
{
	"get_Count", NULL, &t5116_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5116_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29809_MI = 
{
	"get_IsReadOnly", NULL, &t5116_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1021_0_0_0;
static ParameterInfo t5116_m29810_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1021_0_0_0},
};
extern TypeInfo t5116_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29810_MI = 
{
	"Add", NULL, &t5116_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5116_m29810_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5116_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29811_MI = 
{
	"Clear", NULL, &t5116_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1021_0_0_0;
static ParameterInfo t5116_m29812_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1021_0_0_0},
};
extern TypeInfo t5116_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29812_MI = 
{
	"Contains", NULL, &t5116_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5116_m29812_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3146_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5116_m29813_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3146_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5116_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29813_MI = 
{
	"CopyTo", NULL, &t5116_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5116_m29813_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1021_0_0_0;
static ParameterInfo t5116_m29814_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1021_0_0_0},
};
extern TypeInfo t5116_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29814_MI = 
{
	"Remove", NULL, &t5116_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5116_m29814_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5116_MIs[] =
{
	&m29808_MI,
	&m29809_MI,
	&m29810_MI,
	&m29811_MI,
	&m29812_MI,
	&m29813_MI,
	&m29814_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5118_TI;
static TypeInfo* t5116_ITIs[] = 
{
	&t618_TI,
	&t5118_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5116_0_0_0;
extern Il2CppType t5116_1_0_0;
struct t5116;
extern TypeInfo t5116_TI;
extern Il2CppGenericClass t5116_GC;
TypeInfo t5116_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5116_MIs, t5116_PIs, NULL, NULL, NULL, NULL, NULL, &t5116_TI, t5116_ITIs, NULL, &EmptyCustomAttributesCache, &t5116_TI, &t5116_0_0_0, &t5116_1_0_0, NULL, &t5116_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5118_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GCHandleType>
extern TypeInfo t5118_TI;
extern Il2CppType t3820_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29815_MI = 
{
	"GetEnumerator", NULL, &t5118_TI, &t3820_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5118_MIs[] =
{
	&m29815_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5118_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5118_0_0_0;
extern Il2CppType t5118_1_0_0;
struct t5118;
extern TypeInfo t5118_TI;
extern Il2CppGenericClass t5118_GC;
TypeInfo t5118_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5118_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5118_TI, t5118_ITIs, NULL, &EmptyCustomAttributesCache, &t5118_TI, &t5118_0_0_0, &t5118_1_0_0, NULL, &t5118_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5117_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>
extern MethodInfo m29816_MI;
extern MethodInfo m29817_MI;
static PropertyInfo t5117____Item_PropertyInfo = 
{
	&t5117_TI, "Item", &m29816_MI, &m29817_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5117_PIs[] =
{
	&t5117____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1021_0_0_0;
static ParameterInfo t5117_m29818_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1021_0_0_0},
};
extern TypeInfo t5117_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29818_MI = 
{
	"IndexOf", NULL, &t5117_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5117_m29818_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1021_0_0_0;
static ParameterInfo t5117_m29819_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1021_0_0_0},
};
extern TypeInfo t5117_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29819_MI = 
{
	"Insert", NULL, &t5117_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5117_m29819_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5117_m29820_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5117_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29820_MI = 
{
	"RemoveAt", NULL, &t5117_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5117_m29820_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5117_m29816_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5117_TI;
extern Il2CppType t1021_0_0_0;
extern void* RuntimeInvoker_t1021_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29816_MI = 
{
	"get_Item", NULL, &t5117_TI, &t1021_0_0_0, RuntimeInvoker_t1021_t60, t5117_m29816_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1021_0_0_0;
static ParameterInfo t5117_m29817_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1021_0_0_0},
};
extern TypeInfo t5117_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29817_MI = 
{
	"set_Item", NULL, &t5117_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5117_m29817_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5117_MIs[] =
{
	&m29818_MI,
	&m29819_MI,
	&m29820_MI,
	&m29816_MI,
	&m29817_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5116_TI;
extern TypeInfo t5118_TI;
static TypeInfo* t5117_ITIs[] = 
{
	&t618_TI,
	&t5116_TI,
	&t5118_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5117_0_0_0;
extern Il2CppType t5117_1_0_0;
struct t5117;
extern TypeInfo t5117_TI;
extern Il2CppGenericClass t5117_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5117_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5117_MIs, t5117_PIs, NULL, NULL, NULL, NULL, NULL, &t5117_TI, t5117_ITIs, NULL, &t1426__CustomAttributeCache, &t5117_TI, &t5117_0_0_0, &t5117_1_0_0, NULL, &t5117_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3821_TI;

#include "t1022.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern MethodInfo m29821_MI;
static PropertyInfo t3821____Current_PropertyInfo = 
{
	&t3821_TI, "Current", &m29821_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3821_PIs[] =
{
	&t3821____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3821_TI;
extern Il2CppType t1022_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29821_MI = 
{
	"get_Current", NULL, &t3821_TI, &t1022_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3821_MIs[] =
{
	&m29821_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3821_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3821_0_0_0;
extern Il2CppType t3821_1_0_0;
struct t3821;
extern TypeInfo t3821_TI;
extern Il2CppGenericClass t3821_GC;
TypeInfo t3821_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3821_MIs, t3821_PIs, NULL, NULL, NULL, NULL, NULL, &t3821_TI, t3821_ITIs, NULL, &EmptyCustomAttributesCache, &t3821_TI, &t3821_0_0_0, &t3821_1_0_0, NULL, &t3821_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2896.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2896_TI;
#include "t2896MD.h"

extern TypeInfo t2896_TI;
extern TypeInfo t1022_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16641_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22706_MI;
struct t52;
#define m22706(__this, p0, method) (t1022 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22706_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2896_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2896_TI, offsetof(t2896, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2896_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2896_TI, offsetof(t2896, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2896_FIs[] =
{
	&t2896_f0_FieldInfo,
	&t2896_f1_FieldInfo,
	NULL
};
extern MethodInfo m16638_MI;
static PropertyInfo t2896____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2896_TI, "System.Collections.IEnumerator.Current", &m16638_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16641_MI;
static PropertyInfo t2896____Current_PropertyInfo = 
{
	&t2896_TI, "Current", &m16641_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2896_PIs[] =
{
	&t2896____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2896____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2896_m16637_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2896_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16637_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2896_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2896_m16637_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2896_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16638_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2896_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2896_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16639_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2896_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2896_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16640_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2896_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2896_TI;
extern Il2CppType t1022_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16641_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2896_TI, &t1022_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2896_MIs[] =
{
	&m16637_MI,
	&m16638_MI,
	&m16639_MI,
	&m16640_MI,
	&m16641_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16638_MI;
extern MethodInfo m16640_MI;
extern MethodInfo m16639_MI;
extern MethodInfo m16641_MI;
static MethodInfo* t2896_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16638_MI,
	&m16640_MI,
	&m16639_MI,
	&m16641_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3821_TI;
static TypeInfo* t2896_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3821_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3821_TI;
static Il2CppInterfaceOffsetPair t2896_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3821_TI, 7},
};
extern MethodInfo m16641_MI;
extern TypeInfo t1022_TI;
extern MethodInfo m22706_MI;
static void* t2896_RGCTXData[3] = 
{
	&m16641_MI,
	&t1022_TI,
	&m22706_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2896_0_0_0;
extern Il2CppType t2896_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2896_TI;
extern Il2CppGenericClass t2896_GC;
extern TypeInfo t52_TI;
TypeInfo t2896_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2896_MIs, t2896_PIs, t2896_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2896_TI, t2896_ITIs, t2896_VT, &EmptyCustomAttributesCache, &t2896_TI, &t2896_0_0_0, &t2896_1_0_0, t2896_IOs, &t2896_GC, NULL, NULL, NULL, t2896_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2896)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5119_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern MethodInfo m29822_MI;
static PropertyInfo t5119____Count_PropertyInfo = 
{
	&t5119_TI, "Count", &m29822_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29823_MI;
static PropertyInfo t5119____IsReadOnly_PropertyInfo = 
{
	&t5119_TI, "IsReadOnly", &m29823_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5119_PIs[] =
{
	&t5119____Count_PropertyInfo,
	&t5119____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5119_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29822_MI = 
{
	"get_Count", NULL, &t5119_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5119_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29823_MI = 
{
	"get_IsReadOnly", NULL, &t5119_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1022_0_0_0;
static ParameterInfo t5119_m29824_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1022_0_0_0},
};
extern TypeInfo t5119_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29824_MI = 
{
	"Add", NULL, &t5119_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5119_m29824_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5119_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29825_MI = 
{
	"Clear", NULL, &t5119_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1022_0_0_0;
static ParameterInfo t5119_m29826_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1022_0_0_0},
};
extern TypeInfo t5119_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29826_MI = 
{
	"Contains", NULL, &t5119_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5119_m29826_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3147_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5119_m29827_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3147_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5119_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29827_MI = 
{
	"CopyTo", NULL, &t5119_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5119_m29827_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1022_0_0_0;
static ParameterInfo t5119_m29828_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1022_0_0_0},
};
extern TypeInfo t5119_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29828_MI = 
{
	"Remove", NULL, &t5119_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5119_m29828_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5119_MIs[] =
{
	&m29822_MI,
	&m29823_MI,
	&m29824_MI,
	&m29825_MI,
	&m29826_MI,
	&m29827_MI,
	&m29828_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5121_TI;
static TypeInfo* t5119_ITIs[] = 
{
	&t618_TI,
	&t5121_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5119_0_0_0;
extern Il2CppType t5119_1_0_0;
struct t5119;
extern TypeInfo t5119_TI;
extern Il2CppGenericClass t5119_GC;
TypeInfo t5119_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5119_MIs, t5119_PIs, NULL, NULL, NULL, NULL, NULL, &t5119_TI, t5119_ITIs, NULL, &EmptyCustomAttributesCache, &t5119_TI, &t5119_0_0_0, &t5119_1_0_0, NULL, &t5119_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5121_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern TypeInfo t5121_TI;
extern Il2CppType t3821_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29829_MI = 
{
	"GetEnumerator", NULL, &t5121_TI, &t3821_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5121_MIs[] =
{
	&m29829_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5121_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5121_0_0_0;
extern Il2CppType t5121_1_0_0;
struct t5121;
extern TypeInfo t5121_TI;
extern Il2CppGenericClass t5121_GC;
TypeInfo t5121_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5121_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5121_TI, t5121_ITIs, NULL, &EmptyCustomAttributesCache, &t5121_TI, &t5121_0_0_0, &t5121_1_0_0, NULL, &t5121_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5120_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern MethodInfo m29830_MI;
extern MethodInfo m29831_MI;
static PropertyInfo t5120____Item_PropertyInfo = 
{
	&t5120_TI, "Item", &m29830_MI, &m29831_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5120_PIs[] =
{
	&t5120____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1022_0_0_0;
static ParameterInfo t5120_m29832_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1022_0_0_0},
};
extern TypeInfo t5120_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29832_MI = 
{
	"IndexOf", NULL, &t5120_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5120_m29832_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1022_0_0_0;
static ParameterInfo t5120_m29833_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1022_0_0_0},
};
extern TypeInfo t5120_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29833_MI = 
{
	"Insert", NULL, &t5120_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5120_m29833_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5120_m29834_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5120_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29834_MI = 
{
	"RemoveAt", NULL, &t5120_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5120_m29834_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5120_m29830_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5120_TI;
extern Il2CppType t1022_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29830_MI = 
{
	"get_Item", NULL, &t5120_TI, &t1022_0_0_0, RuntimeInvoker_t7_t60, t5120_m29830_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1022_0_0_0;
static ParameterInfo t5120_m29831_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1022_0_0_0},
};
extern TypeInfo t5120_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29831_MI = 
{
	"set_Item", NULL, &t5120_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5120_m29831_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5120_MIs[] =
{
	&m29832_MI,
	&m29833_MI,
	&m29834_MI,
	&m29830_MI,
	&m29831_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5119_TI;
extern TypeInfo t5121_TI;
static TypeInfo* t5120_ITIs[] = 
{
	&t618_TI,
	&t5119_TI,
	&t5121_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5120_0_0_0;
extern Il2CppType t5120_1_0_0;
struct t5120;
extern TypeInfo t5120_TI;
extern Il2CppGenericClass t5120_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5120_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5120_MIs, t5120_PIs, NULL, NULL, NULL, NULL, NULL, &t5120_TI, t5120_ITIs, NULL, &t1426__CustomAttributeCache, &t5120_TI, &t5120_0_0_0, &t5120_1_0_0, NULL, &t5120_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3822_TI;

#include "t1024.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern MethodInfo m29835_MI;
static PropertyInfo t3822____Current_PropertyInfo = 
{
	&t3822_TI, "Current", &m29835_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3822_PIs[] =
{
	&t3822____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3822_TI;
extern Il2CppType t1024_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29835_MI = 
{
	"get_Current", NULL, &t3822_TI, &t1024_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3822_MIs[] =
{
	&m29835_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3822_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3822_0_0_0;
extern Il2CppType t3822_1_0_0;
struct t3822;
extern TypeInfo t3822_TI;
extern Il2CppGenericClass t3822_GC;
TypeInfo t3822_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3822_MIs, t3822_PIs, NULL, NULL, NULL, NULL, NULL, &t3822_TI, t3822_ITIs, NULL, &EmptyCustomAttributesCache, &t3822_TI, &t3822_0_0_0, &t3822_1_0_0, NULL, &t3822_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2897.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2897_TI;
#include "t2897MD.h"

extern TypeInfo t2897_TI;
extern TypeInfo t1024_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16646_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22717_MI;
struct t52;
#define m22717(__this, p0, method) (t1024 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22717_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2897_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2897_TI, offsetof(t2897, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2897_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2897_TI, offsetof(t2897, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2897_FIs[] =
{
	&t2897_f0_FieldInfo,
	&t2897_f1_FieldInfo,
	NULL
};
extern MethodInfo m16643_MI;
static PropertyInfo t2897____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2897_TI, "System.Collections.IEnumerator.Current", &m16643_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16646_MI;
static PropertyInfo t2897____Current_PropertyInfo = 
{
	&t2897_TI, "Current", &m16646_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2897_PIs[] =
{
	&t2897____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2897____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2897_m16642_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2897_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16642_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2897_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2897_m16642_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2897_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16643_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2897_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2897_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16644_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2897_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2897_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16645_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2897_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2897_TI;
extern Il2CppType t1024_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16646_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2897_TI, &t1024_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2897_MIs[] =
{
	&m16642_MI,
	&m16643_MI,
	&m16644_MI,
	&m16645_MI,
	&m16646_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16643_MI;
extern MethodInfo m16645_MI;
extern MethodInfo m16644_MI;
extern MethodInfo m16646_MI;
static MethodInfo* t2897_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16643_MI,
	&m16645_MI,
	&m16644_MI,
	&m16646_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3822_TI;
static TypeInfo* t2897_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3822_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3822_TI;
static Il2CppInterfaceOffsetPair t2897_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3822_TI, 7},
};
extern MethodInfo m16646_MI;
extern TypeInfo t1024_TI;
extern MethodInfo m22717_MI;
static void* t2897_RGCTXData[3] = 
{
	&m16646_MI,
	&t1024_TI,
	&m22717_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2897_0_0_0;
extern Il2CppType t2897_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2897_TI;
extern Il2CppGenericClass t2897_GC;
extern TypeInfo t52_TI;
TypeInfo t2897_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2897_MIs, t2897_PIs, t2897_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2897_TI, t2897_ITIs, t2897_VT, &EmptyCustomAttributesCache, &t2897_TI, &t2897_0_0_0, &t2897_1_0_0, t2897_IOs, &t2897_GC, NULL, NULL, NULL, t2897_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2897)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5122_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern MethodInfo m29836_MI;
static PropertyInfo t5122____Count_PropertyInfo = 
{
	&t5122_TI, "Count", &m29836_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29837_MI;
static PropertyInfo t5122____IsReadOnly_PropertyInfo = 
{
	&t5122_TI, "IsReadOnly", &m29837_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5122_PIs[] =
{
	&t5122____Count_PropertyInfo,
	&t5122____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5122_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29836_MI = 
{
	"get_Count", NULL, &t5122_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5122_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29837_MI = 
{
	"get_IsReadOnly", NULL, &t5122_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1024_0_0_0;
static ParameterInfo t5122_m29838_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1024_0_0_0},
};
extern TypeInfo t5122_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29838_MI = 
{
	"Add", NULL, &t5122_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5122_m29838_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5122_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29839_MI = 
{
	"Clear", NULL, &t5122_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1024_0_0_0;
static ParameterInfo t5122_m29840_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1024_0_0_0},
};
extern TypeInfo t5122_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29840_MI = 
{
	"Contains", NULL, &t5122_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5122_m29840_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3148_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5122_m29841_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3148_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5122_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29841_MI = 
{
	"CopyTo", NULL, &t5122_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5122_m29841_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1024_0_0_0;
static ParameterInfo t5122_m29842_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1024_0_0_0},
};
extern TypeInfo t5122_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29842_MI = 
{
	"Remove", NULL, &t5122_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5122_m29842_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5122_MIs[] =
{
	&m29836_MI,
	&m29837_MI,
	&m29838_MI,
	&m29839_MI,
	&m29840_MI,
	&m29841_MI,
	&m29842_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5124_TI;
static TypeInfo* t5122_ITIs[] = 
{
	&t618_TI,
	&t5124_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5122_0_0_0;
extern Il2CppType t5122_1_0_0;
struct t5122;
extern TypeInfo t5122_TI;
extern Il2CppGenericClass t5122_GC;
TypeInfo t5122_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5122_MIs, t5122_PIs, NULL, NULL, NULL, NULL, NULL, &t5122_TI, t5122_ITIs, NULL, &EmptyCustomAttributesCache, &t5122_TI, &t5122_0_0_0, &t5122_1_0_0, NULL, &t5122_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5124_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern TypeInfo t5124_TI;
extern Il2CppType t3822_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29843_MI = 
{
	"GetEnumerator", NULL, &t5124_TI, &t3822_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5124_MIs[] =
{
	&m29843_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5124_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5124_0_0_0;
extern Il2CppType t5124_1_0_0;
struct t5124;
extern TypeInfo t5124_TI;
extern Il2CppGenericClass t5124_GC;
TypeInfo t5124_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5124_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5124_TI, t5124_ITIs, NULL, &EmptyCustomAttributesCache, &t5124_TI, &t5124_0_0_0, &t5124_1_0_0, NULL, &t5124_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5123_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern MethodInfo m29844_MI;
extern MethodInfo m29845_MI;
static PropertyInfo t5123____Item_PropertyInfo = 
{
	&t5123_TI, "Item", &m29844_MI, &m29845_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5123_PIs[] =
{
	&t5123____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1024_0_0_0;
static ParameterInfo t5123_m29846_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1024_0_0_0},
};
extern TypeInfo t5123_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29846_MI = 
{
	"IndexOf", NULL, &t5123_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5123_m29846_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1024_0_0_0;
static ParameterInfo t5123_m29847_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1024_0_0_0},
};
extern TypeInfo t5123_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29847_MI = 
{
	"Insert", NULL, &t5123_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5123_m29847_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5123_m29848_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5123_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29848_MI = 
{
	"RemoveAt", NULL, &t5123_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5123_m29848_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5123_m29844_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5123_TI;
extern Il2CppType t1024_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29844_MI = 
{
	"get_Item", NULL, &t5123_TI, &t1024_0_0_0, RuntimeInvoker_t7_t60, t5123_m29844_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1024_0_0_0;
static ParameterInfo t5123_m29845_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1024_0_0_0},
};
extern TypeInfo t5123_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29845_MI = 
{
	"set_Item", NULL, &t5123_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5123_m29845_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5123_MIs[] =
{
	&m29846_MI,
	&m29847_MI,
	&m29848_MI,
	&m29844_MI,
	&m29845_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5122_TI;
extern TypeInfo t5124_TI;
static TypeInfo* t5123_ITIs[] = 
{
	&t618_TI,
	&t5122_TI,
	&t5124_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5123_0_0_0;
extern Il2CppType t5123_1_0_0;
struct t5123;
extern TypeInfo t5123_TI;
extern Il2CppGenericClass t5123_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5123_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5123_MIs, t5123_PIs, NULL, NULL, NULL, NULL, NULL, &t5123_TI, t5123_ITIs, NULL, &t1426__CustomAttributeCache, &t5123_TI, &t5123_0_0_0, &t5123_1_0_0, NULL, &t5123_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3823_TI;

#include "t1025.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern MethodInfo m29849_MI;
static PropertyInfo t3823____Current_PropertyInfo = 
{
	&t3823_TI, "Current", &m29849_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3823_PIs[] =
{
	&t3823____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3823_TI;
extern Il2CppType t1025_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29849_MI = 
{
	"get_Current", NULL, &t3823_TI, &t1025_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3823_MIs[] =
{
	&m29849_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3823_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3823_0_0_0;
extern Il2CppType t3823_1_0_0;
struct t3823;
extern TypeInfo t3823_TI;
extern Il2CppGenericClass t3823_GC;
TypeInfo t3823_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3823_MIs, t3823_PIs, NULL, NULL, NULL, NULL, NULL, &t3823_TI, t3823_ITIs, NULL, &EmptyCustomAttributesCache, &t3823_TI, &t3823_0_0_0, &t3823_1_0_0, NULL, &t3823_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2898.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2898_TI;
#include "t2898MD.h"

extern TypeInfo t2898_TI;
extern TypeInfo t1025_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16651_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22728_MI;
struct t52;
#define m22728(__this, p0, method) (t1025 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22728_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2898_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2898_TI, offsetof(t2898, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2898_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2898_TI, offsetof(t2898, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2898_FIs[] =
{
	&t2898_f0_FieldInfo,
	&t2898_f1_FieldInfo,
	NULL
};
extern MethodInfo m16648_MI;
static PropertyInfo t2898____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2898_TI, "System.Collections.IEnumerator.Current", &m16648_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16651_MI;
static PropertyInfo t2898____Current_PropertyInfo = 
{
	&t2898_TI, "Current", &m16651_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2898_PIs[] =
{
	&t2898____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2898____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2898_m16647_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16647_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2898_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2898_m16647_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2898_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16648_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2898_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2898_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16649_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2898_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2898_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16650_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2898_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2898_TI;
extern Il2CppType t1025_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16651_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2898_TI, &t1025_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2898_MIs[] =
{
	&m16647_MI,
	&m16648_MI,
	&m16649_MI,
	&m16650_MI,
	&m16651_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16648_MI;
extern MethodInfo m16650_MI;
extern MethodInfo m16649_MI;
extern MethodInfo m16651_MI;
static MethodInfo* t2898_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16648_MI,
	&m16650_MI,
	&m16649_MI,
	&m16651_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3823_TI;
static TypeInfo* t2898_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3823_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3823_TI;
static Il2CppInterfaceOffsetPair t2898_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3823_TI, 7},
};
extern MethodInfo m16651_MI;
extern TypeInfo t1025_TI;
extern MethodInfo m22728_MI;
static void* t2898_RGCTXData[3] = 
{
	&m16651_MI,
	&t1025_TI,
	&m22728_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2898_0_0_0;
extern Il2CppType t2898_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2898_TI;
extern Il2CppGenericClass t2898_GC;
extern TypeInfo t52_TI;
TypeInfo t2898_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2898_MIs, t2898_PIs, t2898_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2898_TI, t2898_ITIs, t2898_VT, &EmptyCustomAttributesCache, &t2898_TI, &t2898_0_0_0, &t2898_1_0_0, t2898_IOs, &t2898_GC, NULL, NULL, NULL, t2898_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2898)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5125_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern MethodInfo m29850_MI;
static PropertyInfo t5125____Count_PropertyInfo = 
{
	&t5125_TI, "Count", &m29850_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29851_MI;
static PropertyInfo t5125____IsReadOnly_PropertyInfo = 
{
	&t5125_TI, "IsReadOnly", &m29851_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5125_PIs[] =
{
	&t5125____Count_PropertyInfo,
	&t5125____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5125_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29850_MI = 
{
	"get_Count", NULL, &t5125_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5125_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29851_MI = 
{
	"get_IsReadOnly", NULL, &t5125_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1025_0_0_0;
static ParameterInfo t5125_m29852_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1025_0_0_0},
};
extern TypeInfo t5125_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29852_MI = 
{
	"Add", NULL, &t5125_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5125_m29852_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5125_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29853_MI = 
{
	"Clear", NULL, &t5125_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1025_0_0_0;
static ParameterInfo t5125_m29854_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1025_0_0_0},
};
extern TypeInfo t5125_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29854_MI = 
{
	"Contains", NULL, &t5125_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5125_m29854_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3149_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5125_m29855_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3149_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5125_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29855_MI = 
{
	"CopyTo", NULL, &t5125_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5125_m29855_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1025_0_0_0;
static ParameterInfo t5125_m29856_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1025_0_0_0},
};
extern TypeInfo t5125_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29856_MI = 
{
	"Remove", NULL, &t5125_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5125_m29856_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5125_MIs[] =
{
	&m29850_MI,
	&m29851_MI,
	&m29852_MI,
	&m29853_MI,
	&m29854_MI,
	&m29855_MI,
	&m29856_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5127_TI;
static TypeInfo* t5125_ITIs[] = 
{
	&t618_TI,
	&t5127_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5125_0_0_0;
extern Il2CppType t5125_1_0_0;
struct t5125;
extern TypeInfo t5125_TI;
extern Il2CppGenericClass t5125_GC;
TypeInfo t5125_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5125_MIs, t5125_PIs, NULL, NULL, NULL, NULL, NULL, &t5125_TI, t5125_ITIs, NULL, &EmptyCustomAttributesCache, &t5125_TI, &t5125_0_0_0, &t5125_1_0_0, NULL, &t5125_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5127_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern TypeInfo t5127_TI;
extern Il2CppType t3823_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29857_MI = 
{
	"GetEnumerator", NULL, &t5127_TI, &t3823_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5127_MIs[] =
{
	&m29857_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5127_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5127_0_0_0;
extern Il2CppType t5127_1_0_0;
struct t5127;
extern TypeInfo t5127_TI;
extern Il2CppGenericClass t5127_GC;
TypeInfo t5127_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5127_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5127_TI, t5127_ITIs, NULL, &EmptyCustomAttributesCache, &t5127_TI, &t5127_0_0_0, &t5127_1_0_0, NULL, &t5127_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5126_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern MethodInfo m29858_MI;
extern MethodInfo m29859_MI;
static PropertyInfo t5126____Item_PropertyInfo = 
{
	&t5126_TI, "Item", &m29858_MI, &m29859_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5126_PIs[] =
{
	&t5126____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1025_0_0_0;
static ParameterInfo t5126_m29860_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1025_0_0_0},
};
extern TypeInfo t5126_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29860_MI = 
{
	"IndexOf", NULL, &t5126_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5126_m29860_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1025_0_0_0;
static ParameterInfo t5126_m29861_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1025_0_0_0},
};
extern TypeInfo t5126_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29861_MI = 
{
	"Insert", NULL, &t5126_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5126_m29861_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5126_m29862_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5126_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29862_MI = 
{
	"RemoveAt", NULL, &t5126_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5126_m29862_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5126_m29858_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5126_TI;
extern Il2CppType t1025_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29858_MI = 
{
	"get_Item", NULL, &t5126_TI, &t1025_0_0_0, RuntimeInvoker_t7_t60, t5126_m29858_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1025_0_0_0;
static ParameterInfo t5126_m29859_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1025_0_0_0},
};
extern TypeInfo t5126_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29859_MI = 
{
	"set_Item", NULL, &t5126_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5126_m29859_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5126_MIs[] =
{
	&m29860_MI,
	&m29861_MI,
	&m29862_MI,
	&m29858_MI,
	&m29859_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5125_TI;
extern TypeInfo t5127_TI;
static TypeInfo* t5126_ITIs[] = 
{
	&t618_TI,
	&t5125_TI,
	&t5127_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5126_0_0_0;
extern Il2CppType t5126_1_0_0;
struct t5126;
extern TypeInfo t5126_TI;
extern Il2CppGenericClass t5126_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5126_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5126_MIs, t5126_PIs, NULL, NULL, NULL, NULL, NULL, &t5126_TI, t5126_ITIs, NULL, &t1426__CustomAttributeCache, &t5126_TI, &t5126_0_0_0, &t5126_1_0_0, NULL, &t5126_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3824_TI;

#include "t1026.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern MethodInfo m29863_MI;
static PropertyInfo t3824____Current_PropertyInfo = 
{
	&t3824_TI, "Current", &m29863_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3824_PIs[] =
{
	&t3824____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3824_TI;
extern Il2CppType t1026_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29863_MI = 
{
	"get_Current", NULL, &t3824_TI, &t1026_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3824_MIs[] =
{
	&m29863_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3824_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3824_0_0_0;
extern Il2CppType t3824_1_0_0;
struct t3824;
extern TypeInfo t3824_TI;
extern Il2CppGenericClass t3824_GC;
TypeInfo t3824_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3824_MIs, t3824_PIs, NULL, NULL, NULL, NULL, NULL, &t3824_TI, t3824_ITIs, NULL, &EmptyCustomAttributesCache, &t3824_TI, &t3824_0_0_0, &t3824_1_0_0, NULL, &t3824_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2899.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2899_TI;
#include "t2899MD.h"

extern TypeInfo t2899_TI;
extern TypeInfo t1026_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16656_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22739_MI;
struct t52;
#define m22739(__this, p0, method) (t1026 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22739_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2899_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2899_TI, offsetof(t2899, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2899_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2899_TI, offsetof(t2899, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2899_FIs[] =
{
	&t2899_f0_FieldInfo,
	&t2899_f1_FieldInfo,
	NULL
};
extern MethodInfo m16653_MI;
static PropertyInfo t2899____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2899_TI, "System.Collections.IEnumerator.Current", &m16653_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16656_MI;
static PropertyInfo t2899____Current_PropertyInfo = 
{
	&t2899_TI, "Current", &m16656_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2899_PIs[] =
{
	&t2899____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2899____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2899_m16652_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2899_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16652_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2899_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2899_m16652_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2899_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16653_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2899_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2899_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16654_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2899_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2899_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16655_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2899_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2899_TI;
extern Il2CppType t1026_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16656_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2899_TI, &t1026_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2899_MIs[] =
{
	&m16652_MI,
	&m16653_MI,
	&m16654_MI,
	&m16655_MI,
	&m16656_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16653_MI;
extern MethodInfo m16655_MI;
extern MethodInfo m16654_MI;
extern MethodInfo m16656_MI;
static MethodInfo* t2899_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16653_MI,
	&m16655_MI,
	&m16654_MI,
	&m16656_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3824_TI;
static TypeInfo* t2899_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3824_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3824_TI;
static Il2CppInterfaceOffsetPair t2899_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3824_TI, 7},
};
extern MethodInfo m16656_MI;
extern TypeInfo t1026_TI;
extern MethodInfo m22739_MI;
static void* t2899_RGCTXData[3] = 
{
	&m16656_MI,
	&t1026_TI,
	&m22739_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2899_0_0_0;
extern Il2CppType t2899_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2899_TI;
extern Il2CppGenericClass t2899_GC;
extern TypeInfo t52_TI;
TypeInfo t2899_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2899_MIs, t2899_PIs, t2899_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2899_TI, t2899_ITIs, t2899_VT, &EmptyCustomAttributesCache, &t2899_TI, &t2899_0_0_0, &t2899_1_0_0, t2899_IOs, &t2899_GC, NULL, NULL, NULL, t2899_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2899)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5128_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern MethodInfo m29864_MI;
static PropertyInfo t5128____Count_PropertyInfo = 
{
	&t5128_TI, "Count", &m29864_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29865_MI;
static PropertyInfo t5128____IsReadOnly_PropertyInfo = 
{
	&t5128_TI, "IsReadOnly", &m29865_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5128_PIs[] =
{
	&t5128____Count_PropertyInfo,
	&t5128____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5128_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29864_MI = 
{
	"get_Count", NULL, &t5128_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5128_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29865_MI = 
{
	"get_IsReadOnly", NULL, &t5128_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1026_0_0_0;
static ParameterInfo t5128_m29866_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1026_0_0_0},
};
extern TypeInfo t5128_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29866_MI = 
{
	"Add", NULL, &t5128_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5128_m29866_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5128_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29867_MI = 
{
	"Clear", NULL, &t5128_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1026_0_0_0;
static ParameterInfo t5128_m29868_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1026_0_0_0},
};
extern TypeInfo t5128_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29868_MI = 
{
	"Contains", NULL, &t5128_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5128_m29868_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3150_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5128_m29869_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3150_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5128_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29869_MI = 
{
	"CopyTo", NULL, &t5128_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5128_m29869_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1026_0_0_0;
static ParameterInfo t5128_m29870_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1026_0_0_0},
};
extern TypeInfo t5128_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29870_MI = 
{
	"Remove", NULL, &t5128_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5128_m29870_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5128_MIs[] =
{
	&m29864_MI,
	&m29865_MI,
	&m29866_MI,
	&m29867_MI,
	&m29868_MI,
	&m29869_MI,
	&m29870_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5130_TI;
static TypeInfo* t5128_ITIs[] = 
{
	&t618_TI,
	&t5130_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5128_0_0_0;
extern Il2CppType t5128_1_0_0;
struct t5128;
extern TypeInfo t5128_TI;
extern Il2CppGenericClass t5128_GC;
TypeInfo t5128_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5128_MIs, t5128_PIs, NULL, NULL, NULL, NULL, NULL, &t5128_TI, t5128_ITIs, NULL, &EmptyCustomAttributesCache, &t5128_TI, &t5128_0_0_0, &t5128_1_0_0, NULL, &t5128_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5130_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern TypeInfo t5130_TI;
extern Il2CppType t3824_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29871_MI = 
{
	"GetEnumerator", NULL, &t5130_TI, &t3824_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5130_MIs[] =
{
	&m29871_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5130_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5130_0_0_0;
extern Il2CppType t5130_1_0_0;
struct t5130;
extern TypeInfo t5130_TI;
extern Il2CppGenericClass t5130_GC;
TypeInfo t5130_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5130_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5130_TI, t5130_ITIs, NULL, &EmptyCustomAttributesCache, &t5130_TI, &t5130_0_0_0, &t5130_1_0_0, NULL, &t5130_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5129_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern MethodInfo m29872_MI;
extern MethodInfo m29873_MI;
static PropertyInfo t5129____Item_PropertyInfo = 
{
	&t5129_TI, "Item", &m29872_MI, &m29873_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5129_PIs[] =
{
	&t5129____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1026_0_0_0;
static ParameterInfo t5129_m29874_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1026_0_0_0},
};
extern TypeInfo t5129_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29874_MI = 
{
	"IndexOf", NULL, &t5129_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5129_m29874_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1026_0_0_0;
static ParameterInfo t5129_m29875_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1026_0_0_0},
};
extern TypeInfo t5129_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29875_MI = 
{
	"Insert", NULL, &t5129_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5129_m29875_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5129_m29876_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5129_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29876_MI = 
{
	"RemoveAt", NULL, &t5129_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5129_m29876_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5129_m29872_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5129_TI;
extern Il2CppType t1026_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29872_MI = 
{
	"get_Item", NULL, &t5129_TI, &t1026_0_0_0, RuntimeInvoker_t7_t60, t5129_m29872_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1026_0_0_0;
static ParameterInfo t5129_m29873_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1026_0_0_0},
};
extern TypeInfo t5129_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29873_MI = 
{
	"set_Item", NULL, &t5129_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5129_m29873_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5129_MIs[] =
{
	&m29874_MI,
	&m29875_MI,
	&m29876_MI,
	&m29872_MI,
	&m29873_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5128_TI;
extern TypeInfo t5130_TI;
static TypeInfo* t5129_ITIs[] = 
{
	&t618_TI,
	&t5128_TI,
	&t5130_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5129_0_0_0;
extern Il2CppType t5129_1_0_0;
struct t5129;
extern TypeInfo t5129_TI;
extern Il2CppGenericClass t5129_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5129_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5129_MIs, t5129_PIs, NULL, NULL, NULL, NULL, NULL, &t5129_TI, t5129_ITIs, NULL, &t1426__CustomAttributeCache, &t5129_TI, &t5129_0_0_0, &t5129_1_0_0, NULL, &t5129_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3825_TI;

#include "t763.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.UnmanagedType>
extern MethodInfo m29877_MI;
static PropertyInfo t3825____Current_PropertyInfo = 
{
	&t3825_TI, "Current", &m29877_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3825_PIs[] =
{
	&t3825____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3825_TI;
extern Il2CppType t763_0_0_0;
extern void* RuntimeInvoker_t763 (MethodInfo* method, void* obj, void** args);
MethodInfo m29877_MI = 
{
	"get_Current", NULL, &t3825_TI, &t763_0_0_0, RuntimeInvoker_t763, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3825_MIs[] =
{
	&m29877_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3825_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3825_0_0_0;
extern Il2CppType t3825_1_0_0;
struct t3825;
extern TypeInfo t3825_TI;
extern Il2CppGenericClass t3825_GC;
TypeInfo t3825_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3825_MIs, t3825_PIs, NULL, NULL, NULL, NULL, NULL, &t3825_TI, t3825_ITIs, NULL, &EmptyCustomAttributesCache, &t3825_TI, &t3825_0_0_0, &t3825_1_0_0, NULL, &t3825_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2900.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2900_TI;
#include "t2900MD.h"

extern TypeInfo t2900_TI;
extern TypeInfo t763_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16661_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22750_MI;
struct t52;
 int32_t m22750 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22750_MI;


extern MethodInfo m16657_MI;
 void m16657 (t2900 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16658_MI;
 t7 * m16658 (t2900 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16661(__this, &m16661_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t763_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16659_MI;
 void m16659 (t2900 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16660_MI;
 bool m16660 (t2900 * __this, MethodInfo* method){
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
extern MethodInfo m16661_MI;
 int32_t m16661 (t2900 * __this, MethodInfo* method){
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
		int32_t L_8 = m22750(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22750_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>
extern Il2CppType t52_0_0_1;
FieldInfo t2900_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2900_TI, offsetof(t2900, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2900_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2900_TI, offsetof(t2900, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2900_FIs[] =
{
	&t2900_f0_FieldInfo,
	&t2900_f1_FieldInfo,
	NULL
};
extern MethodInfo m16658_MI;
static PropertyInfo t2900____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2900_TI, "System.Collections.IEnumerator.Current", &m16658_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16661_MI;
static PropertyInfo t2900____Current_PropertyInfo = 
{
	&t2900_TI, "Current", &m16661_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2900_PIs[] =
{
	&t2900____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2900____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2900_m16657_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2900_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16657_MI = 
{
	".ctor", (methodPointerType)&m16657, &t2900_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2900_m16657_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2900_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16658_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16658, &t2900_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2900_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16659_MI = 
{
	"Dispose", (methodPointerType)&m16659, &t2900_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2900_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16660_MI = 
{
	"MoveNext", (methodPointerType)&m16660, &t2900_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2900_TI;
extern Il2CppType t763_0_0_0;
extern void* RuntimeInvoker_t763 (MethodInfo* method, void* obj, void** args);
MethodInfo m16661_MI = 
{
	"get_Current", (methodPointerType)&m16661, &t2900_TI, &t763_0_0_0, RuntimeInvoker_t763, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2900_MIs[] =
{
	&m16657_MI,
	&m16658_MI,
	&m16659_MI,
	&m16660_MI,
	&m16661_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16658_MI;
extern MethodInfo m16660_MI;
extern MethodInfo m16659_MI;
extern MethodInfo m16661_MI;
static MethodInfo* t2900_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16658_MI,
	&m16660_MI,
	&m16659_MI,
	&m16661_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3825_TI;
static TypeInfo* t2900_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3825_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3825_TI;
static Il2CppInterfaceOffsetPair t2900_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3825_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2900_0_0_0;
extern Il2CppType t2900_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2900_TI;
extern Il2CppGenericClass t2900_GC;
extern TypeInfo t52_TI;
TypeInfo t2900_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2900_MIs, t2900_PIs, t2900_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2900_TI, t2900_ITIs, t2900_VT, &EmptyCustomAttributesCache, &t2900_TI, &t2900_0_0_0, &t2900_1_0_0, t2900_IOs, &t2900_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2900)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5131_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>
extern MethodInfo m29878_MI;
static PropertyInfo t5131____Count_PropertyInfo = 
{
	&t5131_TI, "Count", &m29878_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29879_MI;
static PropertyInfo t5131____IsReadOnly_PropertyInfo = 
{
	&t5131_TI, "IsReadOnly", &m29879_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5131_PIs[] =
{
	&t5131____Count_PropertyInfo,
	&t5131____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5131_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29878_MI = 
{
	"get_Count", NULL, &t5131_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5131_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29879_MI = 
{
	"get_IsReadOnly", NULL, &t5131_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t763_0_0_0;
static ParameterInfo t5131_m29880_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t763_0_0_0},
};
extern TypeInfo t5131_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29880_MI = 
{
	"Add", NULL, &t5131_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5131_m29880_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5131_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29881_MI = 
{
	"Clear", NULL, &t5131_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t763_0_0_0;
static ParameterInfo t5131_m29882_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t763_0_0_0},
};
extern TypeInfo t5131_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29882_MI = 
{
	"Contains", NULL, &t5131_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5131_m29882_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3151_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5131_m29883_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3151_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5131_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29883_MI = 
{
	"CopyTo", NULL, &t5131_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5131_m29883_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t763_0_0_0;
static ParameterInfo t5131_m29884_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t763_0_0_0},
};
extern TypeInfo t5131_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29884_MI = 
{
	"Remove", NULL, &t5131_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5131_m29884_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5131_MIs[] =
{
	&m29878_MI,
	&m29879_MI,
	&m29880_MI,
	&m29881_MI,
	&m29882_MI,
	&m29883_MI,
	&m29884_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5133_TI;
static TypeInfo* t5131_ITIs[] = 
{
	&t618_TI,
	&t5133_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5131_0_0_0;
extern Il2CppType t5131_1_0_0;
struct t5131;
extern TypeInfo t5131_TI;
extern Il2CppGenericClass t5131_GC;
TypeInfo t5131_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5131_MIs, t5131_PIs, NULL, NULL, NULL, NULL, NULL, &t5131_TI, t5131_ITIs, NULL, &EmptyCustomAttributesCache, &t5131_TI, &t5131_0_0_0, &t5131_1_0_0, NULL, &t5131_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5133_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.UnmanagedType>
extern TypeInfo t5133_TI;
extern Il2CppType t3825_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29885_MI = 
{
	"GetEnumerator", NULL, &t5133_TI, &t3825_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5133_MIs[] =
{
	&m29885_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5133_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5133_0_0_0;
extern Il2CppType t5133_1_0_0;
struct t5133;
extern TypeInfo t5133_TI;
extern Il2CppGenericClass t5133_GC;
TypeInfo t5133_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5133_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5133_TI, t5133_ITIs, NULL, &EmptyCustomAttributesCache, &t5133_TI, &t5133_0_0_0, &t5133_1_0_0, NULL, &t5133_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5132_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>
extern MethodInfo m29886_MI;
extern MethodInfo m29887_MI;
static PropertyInfo t5132____Item_PropertyInfo = 
{
	&t5132_TI, "Item", &m29886_MI, &m29887_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5132_PIs[] =
{
	&t5132____Item_PropertyInfo,
	NULL
};
extern Il2CppType t763_0_0_0;
static ParameterInfo t5132_m29888_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t763_0_0_0},
};
extern TypeInfo t5132_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29888_MI = 
{
	"IndexOf", NULL, &t5132_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5132_m29888_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t763_0_0_0;
static ParameterInfo t5132_m29889_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t763_0_0_0},
};
extern TypeInfo t5132_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29889_MI = 
{
	"Insert", NULL, &t5132_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5132_m29889_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5132_m29890_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5132_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29890_MI = 
{
	"RemoveAt", NULL, &t5132_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5132_m29890_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5132_m29886_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5132_TI;
extern Il2CppType t763_0_0_0;
extern void* RuntimeInvoker_t763_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29886_MI = 
{
	"get_Item", NULL, &t5132_TI, &t763_0_0_0, RuntimeInvoker_t763_t60, t5132_m29886_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t763_0_0_0;
static ParameterInfo t5132_m29887_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t763_0_0_0},
};
extern TypeInfo t5132_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29887_MI = 
{
	"set_Item", NULL, &t5132_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5132_m29887_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5132_MIs[] =
{
	&m29888_MI,
	&m29889_MI,
	&m29890_MI,
	&m29886_MI,
	&m29887_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5131_TI;
extern TypeInfo t5133_TI;
static TypeInfo* t5132_ITIs[] = 
{
	&t618_TI,
	&t5131_TI,
	&t5133_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5132_0_0_0;
extern Il2CppType t5132_1_0_0;
struct t5132;
extern TypeInfo t5132_TI;
extern Il2CppGenericClass t5132_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5132_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5132_MIs, t5132_PIs, NULL, NULL, NULL, NULL, NULL, &t5132_TI, t5132_ITIs, NULL, &t1426__CustomAttributeCache, &t5132_TI, &t5132_0_0_0, &t5132_1_0_0, NULL, &t5132_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3826_TI;

#include "t1034.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern MethodInfo m29891_MI;
static PropertyInfo t3826____Current_PropertyInfo = 
{
	&t3826_TI, "Current", &m29891_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3826_PIs[] =
{
	&t3826____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3826_TI;
extern Il2CppType t1034_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29891_MI = 
{
	"get_Current", NULL, &t3826_TI, &t1034_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3826_MIs[] =
{
	&m29891_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3826_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3826_0_0_0;
extern Il2CppType t3826_1_0_0;
struct t3826;
extern TypeInfo t3826_TI;
extern Il2CppGenericClass t3826_GC;
TypeInfo t3826_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3826_MIs, t3826_PIs, NULL, NULL, NULL, NULL, NULL, &t3826_TI, t3826_ITIs, NULL, &EmptyCustomAttributesCache, &t3826_TI, &t3826_0_0_0, &t3826_1_0_0, NULL, &t3826_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2901.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2901_TI;
#include "t2901MD.h"

extern TypeInfo t2901_TI;
extern TypeInfo t1034_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16666_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22761_MI;
struct t52;
#define m22761(__this, p0, method) (t1034 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22761_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2901_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2901_TI, offsetof(t2901, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2901_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2901_TI, offsetof(t2901, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2901_FIs[] =
{
	&t2901_f0_FieldInfo,
	&t2901_f1_FieldInfo,
	NULL
};
extern MethodInfo m16663_MI;
static PropertyInfo t2901____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2901_TI, "System.Collections.IEnumerator.Current", &m16663_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16666_MI;
static PropertyInfo t2901____Current_PropertyInfo = 
{
	&t2901_TI, "Current", &m16666_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2901_PIs[] =
{
	&t2901____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2901____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2901_m16662_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2901_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16662_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2901_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2901_m16662_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2901_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16663_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2901_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2901_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16664_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2901_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2901_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16665_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2901_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2901_TI;
extern Il2CppType t1034_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16666_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2901_TI, &t1034_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2901_MIs[] =
{
	&m16662_MI,
	&m16663_MI,
	&m16664_MI,
	&m16665_MI,
	&m16666_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16663_MI;
extern MethodInfo m16665_MI;
extern MethodInfo m16664_MI;
extern MethodInfo m16666_MI;
static MethodInfo* t2901_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16663_MI,
	&m16665_MI,
	&m16664_MI,
	&m16666_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3826_TI;
static TypeInfo* t2901_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3826_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3826_TI;
static Il2CppInterfaceOffsetPair t2901_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3826_TI, 7},
};
extern MethodInfo m16666_MI;
extern TypeInfo t1034_TI;
extern MethodInfo m22761_MI;
static void* t2901_RGCTXData[3] = 
{
	&m16666_MI,
	&t1034_TI,
	&m22761_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2901_0_0_0;
extern Il2CppType t2901_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2901_TI;
extern Il2CppGenericClass t2901_GC;
extern TypeInfo t52_TI;
TypeInfo t2901_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2901_MIs, t2901_PIs, t2901_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2901_TI, t2901_ITIs, t2901_VT, &EmptyCustomAttributesCache, &t2901_TI, &t2901_0_0_0, &t2901_1_0_0, t2901_IOs, &t2901_GC, NULL, NULL, NULL, t2901_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2901)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5134_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern MethodInfo m29892_MI;
static PropertyInfo t5134____Count_PropertyInfo = 
{
	&t5134_TI, "Count", &m29892_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29893_MI;
static PropertyInfo t5134____IsReadOnly_PropertyInfo = 
{
	&t5134_TI, "IsReadOnly", &m29893_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5134_PIs[] =
{
	&t5134____Count_PropertyInfo,
	&t5134____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5134_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29892_MI = 
{
	"get_Count", NULL, &t5134_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5134_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29893_MI = 
{
	"get_IsReadOnly", NULL, &t5134_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1034_0_0_0;
static ParameterInfo t5134_m29894_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1034_0_0_0},
};
extern TypeInfo t5134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29894_MI = 
{
	"Add", NULL, &t5134_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5134_m29894_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29895_MI = 
{
	"Clear", NULL, &t5134_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1034_0_0_0;
static ParameterInfo t5134_m29896_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1034_0_0_0},
};
extern TypeInfo t5134_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29896_MI = 
{
	"Contains", NULL, &t5134_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5134_m29896_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3152_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5134_m29897_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3152_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5134_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29897_MI = 
{
	"CopyTo", NULL, &t5134_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5134_m29897_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1034_0_0_0;
static ParameterInfo t5134_m29898_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1034_0_0_0},
};
extern TypeInfo t5134_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29898_MI = 
{
	"Remove", NULL, &t5134_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5134_m29898_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5134_MIs[] =
{
	&m29892_MI,
	&m29893_MI,
	&m29894_MI,
	&m29895_MI,
	&m29896_MI,
	&m29897_MI,
	&m29898_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5136_TI;
static TypeInfo* t5134_ITIs[] = 
{
	&t618_TI,
	&t5136_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5134_0_0_0;
extern Il2CppType t5134_1_0_0;
struct t5134;
extern TypeInfo t5134_TI;
extern Il2CppGenericClass t5134_GC;
TypeInfo t5134_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5134_MIs, t5134_PIs, NULL, NULL, NULL, NULL, NULL, &t5134_TI, t5134_ITIs, NULL, &EmptyCustomAttributesCache, &t5134_TI, &t5134_0_0_0, &t5134_1_0_0, NULL, &t5134_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5136_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern TypeInfo t5136_TI;
extern Il2CppType t3826_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29899_MI = 
{
	"GetEnumerator", NULL, &t5136_TI, &t3826_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5136_MIs[] =
{
	&m29899_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5136_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5136_0_0_0;
extern Il2CppType t5136_1_0_0;
struct t5136;
extern TypeInfo t5136_TI;
extern Il2CppGenericClass t5136_GC;
TypeInfo t5136_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5136_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5136_TI, t5136_ITIs, NULL, &EmptyCustomAttributesCache, &t5136_TI, &t5136_0_0_0, &t5136_1_0_0, NULL, &t5136_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5135_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern MethodInfo m29900_MI;
extern MethodInfo m29901_MI;
static PropertyInfo t5135____Item_PropertyInfo = 
{
	&t5135_TI, "Item", &m29900_MI, &m29901_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5135_PIs[] =
{
	&t5135____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1034_0_0_0;
static ParameterInfo t5135_m29902_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1034_0_0_0},
};
extern TypeInfo t5135_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29902_MI = 
{
	"IndexOf", NULL, &t5135_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5135_m29902_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1034_0_0_0;
static ParameterInfo t5135_m29903_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1034_0_0_0},
};
extern TypeInfo t5135_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29903_MI = 
{
	"Insert", NULL, &t5135_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5135_m29903_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5135_m29904_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5135_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29904_MI = 
{
	"RemoveAt", NULL, &t5135_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5135_m29904_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5135_m29900_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5135_TI;
extern Il2CppType t1034_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29900_MI = 
{
	"get_Item", NULL, &t5135_TI, &t1034_0_0_0, RuntimeInvoker_t7_t60, t5135_m29900_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1034_0_0_0;
static ParameterInfo t5135_m29901_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1034_0_0_0},
};
extern TypeInfo t5135_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29901_MI = 
{
	"set_Item", NULL, &t5135_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5135_m29901_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5135_MIs[] =
{
	&m29902_MI,
	&m29903_MI,
	&m29904_MI,
	&m29900_MI,
	&m29901_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5134_TI;
extern TypeInfo t5136_TI;
static TypeInfo* t5135_ITIs[] = 
{
	&t618_TI,
	&t5134_TI,
	&t5136_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5135_0_0_0;
extern Il2CppType t5135_1_0_0;
struct t5135;
extern TypeInfo t5135_TI;
extern Il2CppGenericClass t5135_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5135_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5135_MIs, t5135_PIs, NULL, NULL, NULL, NULL, NULL, &t5135_TI, t5135_ITIs, NULL, &t1426__CustomAttributeCache, &t5135_TI, &t5135_0_0_0, &t5135_1_0_0, NULL, &t5135_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5137_TI;

#include "t1035.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern MethodInfo m29905_MI;
static PropertyInfo t5137____Count_PropertyInfo = 
{
	&t5137_TI, "Count", &m29905_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29906_MI;
static PropertyInfo t5137____IsReadOnly_PropertyInfo = 
{
	&t5137_TI, "IsReadOnly", &m29906_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5137_PIs[] =
{
	&t5137____Count_PropertyInfo,
	&t5137____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5137_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29905_MI = 
{
	"get_Count", NULL, &t5137_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5137_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29906_MI = 
{
	"get_IsReadOnly", NULL, &t5137_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1035_0_0_0;
static ParameterInfo t5137_m29907_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1035_0_0_0},
};
extern TypeInfo t5137_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29907_MI = 
{
	"Add", NULL, &t5137_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5137_m29907_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5137_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29908_MI = 
{
	"Clear", NULL, &t5137_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1035_0_0_0;
static ParameterInfo t5137_m29909_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1035_0_0_0},
};
extern TypeInfo t5137_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29909_MI = 
{
	"Contains", NULL, &t5137_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5137_m29909_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3153_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5137_m29910_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3153_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5137_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29910_MI = 
{
	"CopyTo", NULL, &t5137_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5137_m29910_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1035_0_0_0;
static ParameterInfo t5137_m29911_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1035_0_0_0},
};
extern TypeInfo t5137_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29911_MI = 
{
	"Remove", NULL, &t5137_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5137_m29911_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5137_MIs[] =
{
	&m29905_MI,
	&m29906_MI,
	&m29907_MI,
	&m29908_MI,
	&m29909_MI,
	&m29910_MI,
	&m29911_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5139_TI;
static TypeInfo* t5137_ITIs[] = 
{
	&t618_TI,
	&t5139_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5137_0_0_0;
extern Il2CppType t5137_1_0_0;
struct t5137;
extern TypeInfo t5137_TI;
extern Il2CppGenericClass t5137_GC;
TypeInfo t5137_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5137_MIs, t5137_PIs, NULL, NULL, NULL, NULL, NULL, &t5137_TI, t5137_ITIs, NULL, &EmptyCustomAttributesCache, &t5137_TI, &t5137_0_0_0, &t5137_1_0_0, NULL, &t5137_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5139_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern TypeInfo t5139_TI;
extern Il2CppType t3827_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29912_MI = 
{
	"GetEnumerator", NULL, &t5139_TI, &t3827_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5139_MIs[] =
{
	&m29912_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5139_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5139_0_0_0;
extern Il2CppType t5139_1_0_0;
struct t5139;
extern TypeInfo t5139_TI;
extern Il2CppGenericClass t5139_GC;
TypeInfo t5139_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5139_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5139_TI, t5139_ITIs, NULL, &EmptyCustomAttributesCache, &t5139_TI, &t5139_0_0_0, &t5139_1_0_0, NULL, &t5139_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3827_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern MethodInfo m29913_MI;
static PropertyInfo t3827____Current_PropertyInfo = 
{
	&t3827_TI, "Current", &m29913_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3827_PIs[] =
{
	&t3827____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3827_TI;
extern Il2CppType t1035_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29913_MI = 
{
	"get_Current", NULL, &t3827_TI, &t1035_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3827_MIs[] =
{
	&m29913_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3827_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3827_0_0_0;
extern Il2CppType t3827_1_0_0;
struct t3827;
extern TypeInfo t3827_TI;
extern Il2CppGenericClass t3827_GC;
TypeInfo t3827_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3827_MIs, t3827_PIs, NULL, NULL, NULL, NULL, NULL, &t3827_TI, t3827_ITIs, NULL, &EmptyCustomAttributesCache, &t3827_TI, &t3827_0_0_0, &t3827_1_0_0, NULL, &t3827_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2902.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2902_TI;
#include "t2902MD.h"

extern TypeInfo t2902_TI;
extern TypeInfo t1035_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16671_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22772_MI;
struct t52;
#define m22772(__this, p0, method) (t1035 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22772_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2902_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2902_TI, offsetof(t2902, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2902_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2902_TI, offsetof(t2902, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2902_FIs[] =
{
	&t2902_f0_FieldInfo,
	&t2902_f1_FieldInfo,
	NULL
};
extern MethodInfo m16668_MI;
static PropertyInfo t2902____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2902_TI, "System.Collections.IEnumerator.Current", &m16668_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16671_MI;
static PropertyInfo t2902____Current_PropertyInfo = 
{
	&t2902_TI, "Current", &m16671_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2902_PIs[] =
{
	&t2902____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2902____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2902_m16667_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2902_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16667_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2902_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2902_m16667_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2902_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16668_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2902_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2902_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16669_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2902_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2902_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16670_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2902_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2902_TI;
extern Il2CppType t1035_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16671_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2902_TI, &t1035_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2902_MIs[] =
{
	&m16667_MI,
	&m16668_MI,
	&m16669_MI,
	&m16670_MI,
	&m16671_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16668_MI;
extern MethodInfo m16670_MI;
extern MethodInfo m16669_MI;
extern MethodInfo m16671_MI;
static MethodInfo* t2902_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16668_MI,
	&m16670_MI,
	&m16669_MI,
	&m16671_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3827_TI;
static TypeInfo* t2902_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3827_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3827_TI;
static Il2CppInterfaceOffsetPair t2902_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3827_TI, 7},
};
extern MethodInfo m16671_MI;
extern TypeInfo t1035_TI;
extern MethodInfo m22772_MI;
static void* t2902_RGCTXData[3] = 
{
	&m16671_MI,
	&t1035_TI,
	&m22772_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2902_0_0_0;
extern Il2CppType t2902_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2902_TI;
extern Il2CppGenericClass t2902_GC;
extern TypeInfo t52_TI;
TypeInfo t2902_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2902_MIs, t2902_PIs, t2902_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2902_TI, t2902_ITIs, t2902_VT, &EmptyCustomAttributesCache, &t2902_TI, &t2902_0_0_0, &t2902_1_0_0, t2902_IOs, &t2902_GC, NULL, NULL, NULL, t2902_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2902)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5138_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern MethodInfo m29914_MI;
extern MethodInfo m29915_MI;
static PropertyInfo t5138____Item_PropertyInfo = 
{
	&t5138_TI, "Item", &m29914_MI, &m29915_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5138_PIs[] =
{
	&t5138____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1035_0_0_0;
static ParameterInfo t5138_m29916_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1035_0_0_0},
};
extern TypeInfo t5138_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29916_MI = 
{
	"IndexOf", NULL, &t5138_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5138_m29916_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1035_0_0_0;
static ParameterInfo t5138_m29917_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1035_0_0_0},
};
extern TypeInfo t5138_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29917_MI = 
{
	"Insert", NULL, &t5138_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5138_m29917_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5138_m29918_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5138_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29918_MI = 
{
	"RemoveAt", NULL, &t5138_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5138_m29918_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5138_m29914_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5138_TI;
extern Il2CppType t1035_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29914_MI = 
{
	"get_Item", NULL, &t5138_TI, &t1035_0_0_0, RuntimeInvoker_t7_t60, t5138_m29914_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1035_0_0_0;
static ParameterInfo t5138_m29915_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1035_0_0_0},
};
extern TypeInfo t5138_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29915_MI = 
{
	"set_Item", NULL, &t5138_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5138_m29915_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5138_MIs[] =
{
	&m29916_MI,
	&m29917_MI,
	&m29918_MI,
	&m29914_MI,
	&m29915_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5137_TI;
extern TypeInfo t5139_TI;
static TypeInfo* t5138_ITIs[] = 
{
	&t618_TI,
	&t5137_TI,
	&t5139_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5138_0_0_0;
extern Il2CppType t5138_1_0_0;
struct t5138;
extern TypeInfo t5138_TI;
extern Il2CppGenericClass t5138_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5138_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5138_MIs, t5138_PIs, NULL, NULL, NULL, NULL, NULL, &t5138_TI, t5138_ITIs, NULL, &t1426__CustomAttributeCache, &t5138_TI, &t5138_0_0_0, &t5138_1_0_0, NULL, &t5138_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5140_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern MethodInfo m29919_MI;
static PropertyInfo t5140____Count_PropertyInfo = 
{
	&t5140_TI, "Count", &m29919_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29920_MI;
static PropertyInfo t5140____IsReadOnly_PropertyInfo = 
{
	&t5140_TI, "IsReadOnly", &m29920_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5140_PIs[] =
{
	&t5140____Count_PropertyInfo,
	&t5140____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5140_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29919_MI = 
{
	"get_Count", NULL, &t5140_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5140_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29920_MI = 
{
	"get_IsReadOnly", NULL, &t5140_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1543_0_0_0;
static ParameterInfo t5140_m29921_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1543_0_0_0},
};
extern TypeInfo t5140_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29921_MI = 
{
	"Add", NULL, &t5140_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5140_m29921_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5140_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29922_MI = 
{
	"Clear", NULL, &t5140_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1543_0_0_0;
static ParameterInfo t5140_m29923_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1543_0_0_0},
};
extern TypeInfo t5140_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29923_MI = 
{
	"Contains", NULL, &t5140_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5140_m29923_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1085_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5140_m29924_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1085_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5140_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29924_MI = 
{
	"CopyTo", NULL, &t5140_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5140_m29924_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1543_0_0_0;
static ParameterInfo t5140_m29925_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1543_0_0_0},
};
extern TypeInfo t5140_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29925_MI = 
{
	"Remove", NULL, &t5140_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5140_m29925_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5140_MIs[] =
{
	&m29919_MI,
	&m29920_MI,
	&m29921_MI,
	&m29922_MI,
	&m29923_MI,
	&m29924_MI,
	&m29925_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5142_TI;
static TypeInfo* t5140_ITIs[] = 
{
	&t618_TI,
	&t5142_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5140_0_0_0;
extern Il2CppType t5140_1_0_0;
struct t5140;
extern TypeInfo t5140_TI;
extern Il2CppGenericClass t5140_GC;
TypeInfo t5140_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5140_MIs, t5140_PIs, NULL, NULL, NULL, NULL, NULL, &t5140_TI, t5140_ITIs, NULL, &EmptyCustomAttributesCache, &t5140_TI, &t5140_0_0_0, &t5140_1_0_0, NULL, &t5140_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5142_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern TypeInfo t5142_TI;
extern Il2CppType t3828_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29926_MI = 
{
	"GetEnumerator", NULL, &t5142_TI, &t3828_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5142_MIs[] =
{
	&m29926_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5142_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5142_0_0_0;
extern Il2CppType t5142_1_0_0;
struct t5142;
extern TypeInfo t5142_TI;
extern Il2CppGenericClass t5142_GC;
TypeInfo t5142_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5142_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5142_TI, t5142_ITIs, NULL, &EmptyCustomAttributesCache, &t5142_TI, &t5142_0_0_0, &t5142_1_0_0, NULL, &t5142_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3828_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern MethodInfo m29927_MI;
static PropertyInfo t3828____Current_PropertyInfo = 
{
	&t3828_TI, "Current", &m29927_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3828_PIs[] =
{
	&t3828____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3828_TI;
extern Il2CppType t1543_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29927_MI = 
{
	"get_Current", NULL, &t3828_TI, &t1543_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3828_MIs[] =
{
	&m29927_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3828_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3828_0_0_0;
extern Il2CppType t3828_1_0_0;
struct t3828;
extern TypeInfo t3828_TI;
extern Il2CppGenericClass t3828_GC;
TypeInfo t3828_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3828_MIs, t3828_PIs, NULL, NULL, NULL, NULL, NULL, &t3828_TI, t3828_ITIs, NULL, &EmptyCustomAttributesCache, &t3828_TI, &t3828_0_0_0, &t3828_1_0_0, NULL, &t3828_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2903.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2903_TI;
#include "t2903MD.h"

extern TypeInfo t2903_TI;
extern TypeInfo t1543_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16676_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22783_MI;
struct t52;
#define m22783(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22783_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2903_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2903_TI, offsetof(t2903, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2903_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2903_TI, offsetof(t2903, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2903_FIs[] =
{
	&t2903_f0_FieldInfo,
	&t2903_f1_FieldInfo,
	NULL
};
extern MethodInfo m16673_MI;
static PropertyInfo t2903____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2903_TI, "System.Collections.IEnumerator.Current", &m16673_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16676_MI;
static PropertyInfo t2903____Current_PropertyInfo = 
{
	&t2903_TI, "Current", &m16676_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2903_PIs[] =
{
	&t2903____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2903____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2903_m16672_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2903_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16672_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2903_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2903_m16672_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2903_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16673_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2903_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2903_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16674_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2903_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2903_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16675_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2903_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2903_TI;
extern Il2CppType t1543_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16676_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2903_TI, &t1543_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2903_MIs[] =
{
	&m16672_MI,
	&m16673_MI,
	&m16674_MI,
	&m16675_MI,
	&m16676_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16673_MI;
extern MethodInfo m16675_MI;
extern MethodInfo m16674_MI;
extern MethodInfo m16676_MI;
static MethodInfo* t2903_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16673_MI,
	&m16675_MI,
	&m16674_MI,
	&m16676_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3828_TI;
static TypeInfo* t2903_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3828_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3828_TI;
static Il2CppInterfaceOffsetPair t2903_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3828_TI, 7},
};
extern MethodInfo m16676_MI;
extern TypeInfo t1543_TI;
extern MethodInfo m22783_MI;
static void* t2903_RGCTXData[3] = 
{
	&m16676_MI,
	&t1543_TI,
	&m22783_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2903_0_0_0;
extern Il2CppType t2903_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2903_TI;
extern Il2CppGenericClass t2903_GC;
extern TypeInfo t52_TI;
TypeInfo t2903_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2903_MIs, t2903_PIs, t2903_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2903_TI, t2903_ITIs, t2903_VT, &EmptyCustomAttributesCache, &t2903_TI, &t2903_0_0_0, &t2903_1_0_0, t2903_IOs, &t2903_GC, NULL, NULL, NULL, t2903_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2903)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5141_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern MethodInfo m29928_MI;
extern MethodInfo m29929_MI;
static PropertyInfo t5141____Item_PropertyInfo = 
{
	&t5141_TI, "Item", &m29928_MI, &m29929_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5141_PIs[] =
{
	&t5141____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1543_0_0_0;
static ParameterInfo t5141_m29930_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1543_0_0_0},
};
extern TypeInfo t5141_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29930_MI = 
{
	"IndexOf", NULL, &t5141_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5141_m29930_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1543_0_0_0;
static ParameterInfo t5141_m29931_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1543_0_0_0},
};
extern TypeInfo t5141_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29931_MI = 
{
	"Insert", NULL, &t5141_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5141_m29931_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5141_m29932_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5141_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29932_MI = 
{
	"RemoveAt", NULL, &t5141_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5141_m29932_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5141_m29928_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5141_TI;
extern Il2CppType t1543_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29928_MI = 
{
	"get_Item", NULL, &t5141_TI, &t1543_0_0_0, RuntimeInvoker_t7_t60, t5141_m29928_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1543_0_0_0;
static ParameterInfo t5141_m29929_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1543_0_0_0},
};
extern TypeInfo t5141_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29929_MI = 
{
	"set_Item", NULL, &t5141_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5141_m29929_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5141_MIs[] =
{
	&m29930_MI,
	&m29931_MI,
	&m29932_MI,
	&m29928_MI,
	&m29929_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5140_TI;
extern TypeInfo t5142_TI;
static TypeInfo* t5141_ITIs[] = 
{
	&t618_TI,
	&t5140_TI,
	&t5142_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5141_0_0_0;
extern Il2CppType t5141_1_0_0;
struct t5141;
extern TypeInfo t5141_TI;
extern Il2CppGenericClass t5141_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5141_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5141_MIs, t5141_PIs, NULL, NULL, NULL, NULL, NULL, &t5141_TI, t5141_ITIs, NULL, &t1426__CustomAttributeCache, &t5141_TI, &t5141_0_0_0, &t5141_1_0_0, NULL, &t5141_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5143_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern MethodInfo m29933_MI;
static PropertyInfo t5143____Count_PropertyInfo = 
{
	&t5143_TI, "Count", &m29933_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29934_MI;
static PropertyInfo t5143____IsReadOnly_PropertyInfo = 
{
	&t5143_TI, "IsReadOnly", &m29934_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5143_PIs[] =
{
	&t5143____Count_PropertyInfo,
	&t5143____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5143_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29933_MI = 
{
	"get_Count", NULL, &t5143_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5143_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29934_MI = 
{
	"get_IsReadOnly", NULL, &t5143_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1046_0_0_0;
static ParameterInfo t5143_m29935_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1046_0_0_0},
};
extern TypeInfo t5143_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29935_MI = 
{
	"Add", NULL, &t5143_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5143_m29935_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5143_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29936_MI = 
{
	"Clear", NULL, &t5143_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1046_0_0_0;
static ParameterInfo t5143_m29937_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1046_0_0_0},
};
extern TypeInfo t5143_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29937_MI = 
{
	"Contains", NULL, &t5143_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5143_m29937_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3154_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5143_m29938_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3154_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5143_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29938_MI = 
{
	"CopyTo", NULL, &t5143_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5143_m29938_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1046_0_0_0;
static ParameterInfo t5143_m29939_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1046_0_0_0},
};
extern TypeInfo t5143_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29939_MI = 
{
	"Remove", NULL, &t5143_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5143_m29939_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5143_MIs[] =
{
	&m29933_MI,
	&m29934_MI,
	&m29935_MI,
	&m29936_MI,
	&m29937_MI,
	&m29938_MI,
	&m29939_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5145_TI;
static TypeInfo* t5143_ITIs[] = 
{
	&t618_TI,
	&t5145_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5143_0_0_0;
extern Il2CppType t5143_1_0_0;
struct t5143;
extern TypeInfo t5143_TI;
extern Il2CppGenericClass t5143_GC;
TypeInfo t5143_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5143_MIs, t5143_PIs, NULL, NULL, NULL, NULL, NULL, &t5143_TI, t5143_ITIs, NULL, &EmptyCustomAttributesCache, &t5143_TI, &t5143_0_0_0, &t5143_1_0_0, NULL, &t5143_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5145_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern TypeInfo t5145_TI;
extern Il2CppType t3829_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29940_MI = 
{
	"GetEnumerator", NULL, &t5145_TI, &t3829_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5145_MIs[] =
{
	&m29940_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5145_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5145_0_0_0;
extern Il2CppType t5145_1_0_0;
struct t5145;
extern TypeInfo t5145_TI;
extern Il2CppGenericClass t5145_GC;
TypeInfo t5145_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5145_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5145_TI, t5145_ITIs, NULL, &EmptyCustomAttributesCache, &t5145_TI, &t5145_0_0_0, &t5145_1_0_0, NULL, &t5145_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3829_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern MethodInfo m29941_MI;
static PropertyInfo t3829____Current_PropertyInfo = 
{
	&t3829_TI, "Current", &m29941_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3829_PIs[] =
{
	&t3829____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3829_TI;
extern Il2CppType t1046_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29941_MI = 
{
	"get_Current", NULL, &t3829_TI, &t1046_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3829_MIs[] =
{
	&m29941_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3829_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3829_0_0_0;
extern Il2CppType t3829_1_0_0;
struct t3829;
extern TypeInfo t3829_TI;
extern Il2CppGenericClass t3829_GC;
TypeInfo t3829_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3829_MIs, t3829_PIs, NULL, NULL, NULL, NULL, NULL, &t3829_TI, t3829_ITIs, NULL, &EmptyCustomAttributesCache, &t3829_TI, &t3829_0_0_0, &t3829_1_0_0, NULL, &t3829_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2904.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2904_TI;
#include "t2904MD.h"

extern TypeInfo t2904_TI;
extern TypeInfo t1046_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16681_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22794_MI;
struct t52;
#define m22794(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22794_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern Il2CppType t52_0_0_1;
FieldInfo t2904_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2904_TI, offsetof(t2904, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2904_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2904_TI, offsetof(t2904, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2904_FIs[] =
{
	&t2904_f0_FieldInfo,
	&t2904_f1_FieldInfo,
	NULL
};
extern MethodInfo m16678_MI;
static PropertyInfo t2904____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2904_TI, "System.Collections.IEnumerator.Current", &m16678_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16681_MI;
static PropertyInfo t2904____Current_PropertyInfo = 
{
	&t2904_TI, "Current", &m16681_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2904_PIs[] =
{
	&t2904____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2904____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2904_m16677_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2904_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16677_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2904_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2904_m16677_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2904_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16678_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2904_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2904_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16679_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2904_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2904_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16680_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2904_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2904_TI;
extern Il2CppType t1046_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16681_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2904_TI, &t1046_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2904_MIs[] =
{
	&m16677_MI,
	&m16678_MI,
	&m16679_MI,
	&m16680_MI,
	&m16681_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16678_MI;
extern MethodInfo m16680_MI;
extern MethodInfo m16679_MI;
extern MethodInfo m16681_MI;
static MethodInfo* t2904_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16678_MI,
	&m16680_MI,
	&m16679_MI,
	&m16681_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3829_TI;
static TypeInfo* t2904_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3829_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3829_TI;
static Il2CppInterfaceOffsetPair t2904_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3829_TI, 7},
};
extern MethodInfo m16681_MI;
extern TypeInfo t1046_TI;
extern MethodInfo m22794_MI;
static void* t2904_RGCTXData[3] = 
{
	&m16681_MI,
	&t1046_TI,
	&m22794_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2904_0_0_0;
extern Il2CppType t2904_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2904_TI;
extern Il2CppGenericClass t2904_GC;
extern TypeInfo t52_TI;
TypeInfo t2904_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2904_MIs, t2904_PIs, t2904_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2904_TI, t2904_ITIs, t2904_VT, &EmptyCustomAttributesCache, &t2904_TI, &t2904_0_0_0, &t2904_1_0_0, t2904_IOs, &t2904_GC, NULL, NULL, NULL, t2904_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2904)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5144_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern MethodInfo m29942_MI;
extern MethodInfo m29943_MI;
static PropertyInfo t5144____Item_PropertyInfo = 
{
	&t5144_TI, "Item", &m29942_MI, &m29943_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5144_PIs[] =
{
	&t5144____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1046_0_0_0;
static ParameterInfo t5144_m29944_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1046_0_0_0},
};
extern TypeInfo t5144_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29944_MI = 
{
	"IndexOf", NULL, &t5144_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5144_m29944_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1046_0_0_0;
static ParameterInfo t5144_m29945_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1046_0_0_0},
};
extern TypeInfo t5144_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29945_MI = 
{
	"Insert", NULL, &t5144_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5144_m29945_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5144_m29946_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5144_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29946_MI = 
{
	"RemoveAt", NULL, &t5144_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5144_m29946_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5144_m29942_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5144_TI;
extern Il2CppType t1046_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29942_MI = 
{
	"get_Item", NULL, &t5144_TI, &t1046_0_0_0, RuntimeInvoker_t7_t60, t5144_m29942_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1046_0_0_0;
static ParameterInfo t5144_m29943_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1046_0_0_0},
};
extern TypeInfo t5144_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29943_MI = 
{
	"set_Item", NULL, &t5144_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5144_m29943_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5144_MIs[] =
{
	&m29944_MI,
	&m29945_MI,
	&m29946_MI,
	&m29942_MI,
	&m29943_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5143_TI;
extern TypeInfo t5145_TI;
static TypeInfo* t5144_ITIs[] = 
{
	&t618_TI,
	&t5143_TI,
	&t5145_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5144_0_0_0;
extern Il2CppType t5144_1_0_0;
struct t5144;
extern TypeInfo t5144_TI;
extern Il2CppGenericClass t5144_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5144_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5144_MIs, t5144_PIs, NULL, NULL, NULL, NULL, NULL, &t5144_TI, t5144_ITIs, NULL, &t1426__CustomAttributeCache, &t5144_TI, &t5144_0_0_0, &t5144_1_0_0, NULL, &t5144_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
