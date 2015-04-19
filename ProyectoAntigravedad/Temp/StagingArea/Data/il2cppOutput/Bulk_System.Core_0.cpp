#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t682.h"
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
extern TypeInfo t682_TI;
#include "t682MD.h"


#include "t52.h"

// Metadata Definition <Module>
static MethodInfo* t682_MIs[] =
{
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t682_0_0_0;
extern Il2CppType t682_1_0_0;
struct t682;
extern TypeInfo t682_TI;
TypeInfo t682_TI = 
{
	&g_System_Core_dll_Image, NULL, "<Module>", "", t682_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t682_TI, NULL, NULL, &EmptyCustomAttributesCache, &t682_TI, &t682_0_0_0, &t682_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t682), 0, -1, 0, 0, -1, 0, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t681.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t681_TI;
#include "t681MD.h"

#include "t53.h"
#include "t507MD.h"
extern MethodInfo m2999_MI;


extern MethodInfo m3158_MI;
 void m3158 (t681 * __this, MethodInfo* method){
	{
		m2999(__this, &m2999_MI);
		return;
	}
}
// Metadata Definition System.Runtime.CompilerServices.ExtensionAttribute
extern TypeInfo t681_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m3158_MI = 
{
	".ctor", (methodPointerType)&m3158, &t681_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1, NULL, (methodPointerType)NULL};
static MethodInfo* t681_MIs[] =
{
	&m3158_MI,
	NULL
};
extern MethodInfo m3000_MI;
extern MethodInfo m113_MI;
extern MethodInfo m3001_MI;
extern MethodInfo m123_MI;
static MethodInfo* t681_VT[] =
{
	&m3000_MI,
	&m113_MI,
	&m3001_MI,
	&m123_MI,
};
extern TypeInfo t619_TI;
static Il2CppInterfaceOffsetPair t681_IOs[] = 
{
	{ &t619_TI, 4},
};
extern TypeInfo t634_TI;
#include "t634.h"
#include "t634MD.h"
extern MethodInfo m3031_MI;
void t681_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t634 * tmp;
		tmp = (t634 *)il2cpp_codegen_object_new (&t634_TI);
		m3031(tmp, 69, &m3031_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t681__CustomAttributeCache = {
1,
NULL,
&t681_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t681_0_0_0;
extern Il2CppType t681_1_0_0;
extern TypeInfo t507_TI;
struct t681;
extern TypeInfo t681_TI;
extern CustomAttributesCache t681__CustomAttributeCache;
TypeInfo t681_TI = 
{
	&g_System_Core_dll_Image, NULL, "ExtensionAttribute", "System.Runtime.CompilerServices", t681_MIs, NULL, NULL, NULL, &t507_TI, NULL, NULL, &t681_TI, NULL, t681_VT, &t681__CustomAttributeCache, &t681_TI, &t681_0_0_0, &t681_1_0_0, t681_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t681), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t683.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t683_TI;
#include "t683MD.h"

#include "t7.h"
#include "t34.h"
#include "t87.h"
extern TypeInfo t87_TI;
#include "t87MD.h"
extern MethodInfo m3066_MI;


extern MethodInfo m3159_MI;
 void m3159 (t7 * __this, t7 * p0, t7 * p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_0011;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral195, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0011:
	{
		if (p1)
		{
			goto IL_0022;
		}
	}
	{
		t87 * L_1 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_1, (t34*) &_stringLiteral196, &m3066_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0022:
	{
		return;
	}
}
// Metadata Definition System.Linq.Check
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t683_m3159_ParameterInfos[] = 
{
	{"source", 0, 134217729, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"predicate", 1, 134217730, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t683_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m3159_MI = 
{
	"SourceAndPredicate", (methodPointerType)&m3159, &t683_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t683_m3159_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2, NULL, (methodPointerType)NULL};
static MethodInfo* t683_MIs[] =
{
	&m3159_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
static MethodInfo* t683_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t683_0_0_0;
extern Il2CppType t683_1_0_0;
extern TypeInfo t7_TI;
struct t683;
extern TypeInfo t683_TI;
TypeInfo t683_TI = 
{
	&g_System_Core_dll_Image, NULL, "Check", "System.Linq", t683_MIs, NULL, NULL, NULL, &t7_TI, NULL, NULL, &t683_TI, NULL, t683_VT, &EmptyCustomAttributesCache, &t683_TI, &t683_0_0_0, &t683_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t683), 0, -1, 0, 0, -1, 1048960, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t684.h"
extern Il2CppGenericContainer t684_IGC;
extern TypeInfo t684_gp_TSource_0_TI;
Il2CppGenericParamFull t684_gp_TSource_0_TI_GenericParamFull = { { &t684_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* t684_IGPA[1] = 
{
	&t684_gp_TSource_0_TI_GenericParamFull,
};
extern TypeInfo t684_TI;
Il2CppGenericContainer t684_IGC = { { NULL, NULL }, NULL, &t684_TI, 1, 0, t684_IGPA };
extern TypeInfo t684_TI;
extern Il2CppType t53_0_0_0;
MethodInfo m3160_MI = 
{
	".ctor", NULL, &t684_TI, &t53_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 5, NULL, (methodPointerType)NULL};
extern TypeInfo t684_TI;
extern Il2CppType t684_gp_0_0_0_0;
extern CustomAttributesCache t684__CustomAttributeCache_m3161;
MethodInfo m3161_MI = 
{
	"System.Collections.Generic.IEnumerator<TSource>.get_Current", NULL, &t684_TI, &t684_gp_0_0_0_0, NULL, NULL, &t684__CustomAttributeCache_m3161, 2529, 0, 9, 0, false, false, 6, NULL, (methodPointerType)NULL};
extern TypeInfo t684_TI;
extern Il2CppType t7_0_0_0;
extern CustomAttributesCache t684__CustomAttributeCache_m3162;
MethodInfo m3162_MI = 
{
	"System.Collections.IEnumerator.get_Current", NULL, &t684_TI, &t7_0_0_0, NULL, NULL, &t684__CustomAttributeCache_m3162, 2529, 0, 4, 0, false, false, 7, NULL, (methodPointerType)NULL};
extern TypeInfo t684_TI;
extern Il2CppType t12_0_0_0;
extern CustomAttributesCache t684__CustomAttributeCache_m3163;
MethodInfo m3163_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", NULL, &t684_TI, &t12_0_0_0, NULL, NULL, &t684__CustomAttributeCache_m3163, 481, 0, 7, 0, false, false, 8, NULL, (methodPointerType)NULL};
extern TypeInfo t684_TI;
extern Il2CppType t687_0_0_0;
extern CustomAttributesCache t684__CustomAttributeCache_m3164;
MethodInfo m3164_MI = 
{
	"System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", NULL, &t684_TI, &t687_0_0_0, NULL, NULL, &t684__CustomAttributeCache_m3164, 481, 0, 8, 0, false, false, 9, NULL, (methodPointerType)NULL};
extern TypeInfo t684_TI;
extern Il2CppType t55_0_0_0;
MethodInfo m3165_MI = 
{
	"MoveNext", NULL, &t684_TI, &t55_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 10, NULL, (methodPointerType)NULL};
extern TypeInfo t684_TI;
extern Il2CppType t53_0_0_0;
extern CustomAttributesCache t684__CustomAttributeCache_m3166;
MethodInfo m3166_MI = 
{
	"Dispose", NULL, &t684_TI, &t53_0_0_0, NULL, NULL, &t684__CustomAttributeCache_m3166, 486, 0, 6, 0, false, false, 11, NULL, (methodPointerType)NULL};
static MethodInfo* t684_MIs[] =
{
	&m3160_MI,
	&m3161_MI,
	&m3162_MI,
	&m3163_MI,
	&m3164_MI,
	&m3165_MI,
	&m3166_MI,
	NULL
};
extern MethodInfo m3161_MI;
static PropertyInfo t684____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo = 
{
	&t684_TI, "System.Collections.Generic.IEnumerator<TSource>.Current", &m3161_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3162_MI;
static PropertyInfo t684____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t684_TI, "System.Collections.IEnumerator.Current", &m3162_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t684_PIs[] =
{
	&t684____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo,
	&t684____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType t688_0_0_3;
FieldInfo t684_f0_FieldInfo = 
{
	"source", &t688_0_0_3, &t684_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t687_0_0_3;
FieldInfo t684_f1_FieldInfo = 
{
	"<$s_92>__0", &t687_0_0_3, &t684_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t684_gp_0_0_0_3;
FieldInfo t684_f2_FieldInfo = 
{
	"<element>__1", &t684_gp_0_0_0_3, &t684_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t689_0_0_3;
FieldInfo t684_f3_FieldInfo = 
{
	"predicate", &t689_0_0_3, &t684_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_3;
FieldInfo t684_f4_FieldInfo = 
{
	"$PC", &t60_0_0_3, &t684_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t684_gp_0_0_0_3;
FieldInfo t684_f5_FieldInfo = 
{
	"$current", &t684_gp_0_0_0_3, &t684_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t688_0_0_3;
FieldInfo t684_f6_FieldInfo = 
{
	"<$>source", &t688_0_0_3, &t684_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t689_0_0_3;
FieldInfo t684_f7_FieldInfo = 
{
	"<$>predicate", &t689_0_0_3, &t684_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t684_FIs[] =
{
	&t684_f0_FieldInfo,
	&t684_f1_FieldInfo,
	&t684_f2_FieldInfo,
	&t684_f3_FieldInfo,
	&t684_f4_FieldInfo,
	&t684_f5_FieldInfo,
	&t684_f6_FieldInfo,
	&t684_f7_FieldInfo,
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t684_0_0_0;
extern Il2CppType t684_1_0_0;
struct t684;
extern TypeInfo t684_TI;
extern TypeInfo t424_TI;
TypeInfo t684_TI = 
{
	&g_System_Core_dll_Image, NULL, "<CreateWhereIterator>c__Iterator1D`1", "", t684_MIs, t684_PIs, t684_FIs, NULL, NULL, NULL, &t424_TI, &t684_TI, NULL, NULL, NULL, NULL, &t684_0_0_0, &t684_1_0_0, NULL, NULL, &t684_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 8, 0, 0, 0, 0, 0};
extern TypeInfo t66_TI;
#include "t66.h"
#include "t66MD.h"
extern MethodInfo m124_MI;
void t684_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t66 * tmp;
		tmp = (t66 *)il2cpp_codegen_object_new (&t66_TI);
		m124(tmp, &m124_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t67_TI;
#include "t67.h"
#include "t67MD.h"
extern MethodInfo m125_MI;
void t684_CustomAttributesCacheGenerator_m3161(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t67 * tmp;
		tmp = (t67 *)il2cpp_codegen_object_new (&t67_TI);
		m125(tmp, &m125_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t67_TI;
extern MethodInfo m125_MI;
void t684_CustomAttributesCacheGenerator_m3162(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t67 * tmp;
		tmp = (t67 *)il2cpp_codegen_object_new (&t67_TI);
		m125(tmp, &m125_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t67_TI;
extern MethodInfo m125_MI;
void t684_CustomAttributesCacheGenerator_m3163(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t67 * tmp;
		tmp = (t67 *)il2cpp_codegen_object_new (&t67_TI);
		m125(tmp, &m125_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t67_TI;
extern MethodInfo m125_MI;
void t684_CustomAttributesCacheGenerator_m3164(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t67 * tmp;
		tmp = (t67 *)il2cpp_codegen_object_new (&t67_TI);
		m125(tmp, &m125_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t67_TI;
extern MethodInfo m125_MI;
void t684_CustomAttributesCacheGenerator_m3166(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t67 * tmp;
		tmp = (t67 *)il2cpp_codegen_object_new (&t67_TI);
		m125(tmp, &m125_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t684__CustomAttributeCache = {
1,
NULL,
&t684_CustomAttributesCacheGenerator
};
CustomAttributesCache t684__CustomAttributeCache_m3161 = {
1,
NULL,
&t684_CustomAttributesCacheGenerator_m3161
};
CustomAttributesCache t684__CustomAttributeCache_m3162 = {
1,
NULL,
&t684_CustomAttributesCacheGenerator_m3162
};
CustomAttributesCache t684__CustomAttributeCache_m3163 = {
1,
NULL,
&t684_CustomAttributesCacheGenerator_m3163
};
CustomAttributesCache t684__CustomAttributeCache_m3164 = {
1,
NULL,
&t684_CustomAttributesCacheGenerator_m3164
};
CustomAttributesCache t684__CustomAttributeCache_m3166 = {
1,
NULL,
&t684_CustomAttributesCacheGenerator_m3166
};
#include "t424.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t424_TI;
#include "t424MD.h"



// Metadata Definition System.Linq.Enumerable
extern TypeInfo t424_TI;
extern Il2CppType t690_0_0_0;
extern Il2CppGenericContainer m3167_IGC;
extern TypeInfo m3167_gp_TSource_0_TI;
Il2CppGenericParamFull m3167_gp_TSource_0_TI_GenericParamFull = { { &m3167_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* m3167_IGPA[1] = 
{
	&m3167_gp_TSource_0_TI_GenericParamFull,
};
extern MethodInfo m3167_MI;
Il2CppGenericContainer m3167_IGC = { { NULL, NULL }, NULL, &m3167_MI, 1, 1, m3167_IGPA };
extern CustomAttributesCache t424__CustomAttributeCache_m3167;
MethodInfo m3167_MI = 
{
	"Where", NULL, &t424_TI, &t690_0_0_0, NULL, NULL, &t424__CustomAttributeCache_m3167, 150, 0, 255, 0, true, false, 3, NULL, (methodPointerType)NULL};
extern TypeInfo t424_TI;
extern Il2CppType t692_0_0_0;
extern Il2CppGenericContainer m3168_IGC;
extern TypeInfo m3168_gp_TSource_0_TI;
Il2CppGenericParamFull m3168_gp_TSource_0_TI_GenericParamFull = { { &m3168_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* m3168_IGPA[1] = 
{
	&m3168_gp_TSource_0_TI_GenericParamFull,
};
extern MethodInfo m3168_MI;
Il2CppGenericContainer m3168_IGC = { { NULL, NULL }, NULL, &m3168_MI, 1, 1, m3168_IGPA };
extern CustomAttributesCache t424__CustomAttributeCache_m3168;
MethodInfo m3168_MI = 
{
	"CreateWhereIterator", NULL, &t424_TI, &t692_0_0_0, NULL, NULL, &t424__CustomAttributeCache_m3168, 145, 0, 255, 0, true, false, 4, NULL, (methodPointerType)NULL};
static MethodInfo* t424_MIs[] =
{
	&m3167_MI,
	&m3168_MI,
	NULL
};
extern TypeInfo t684_TI;
static TypeInfo* t424_TI__nestedTypes[2] =
{
	&t684_TI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
static MethodInfo* t424_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
};
extern TypeInfo t681_TI;
extern MethodInfo m3158_MI;
void t424_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t681 * tmp;
		tmp = (t681 *)il2cpp_codegen_object_new (&t681_TI);
		m3158(tmp, &m3158_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t681_TI;
extern MethodInfo m3158_MI;
void t424_CustomAttributesCacheGenerator_m3167(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t681 * tmp;
		tmp = (t681 *)il2cpp_codegen_object_new (&t681_TI);
		m3158(tmp, &m3158_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t67_TI;
extern MethodInfo m125_MI;
void t424_CustomAttributesCacheGenerator_m3168(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t67 * tmp;
		tmp = (t67 *)il2cpp_codegen_object_new (&t67_TI);
		m125(tmp, &m125_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t424__CustomAttributeCache = {
1,
NULL,
&t424_CustomAttributesCacheGenerator
};
CustomAttributesCache t424__CustomAttributeCache_m3167 = {
1,
NULL,
&t424_CustomAttributesCacheGenerator_m3167
};
CustomAttributesCache t424__CustomAttributeCache_m3168 = {
1,
NULL,
&t424_CustomAttributesCacheGenerator_m3168
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t424_0_0_0;
extern Il2CppType t424_1_0_0;
extern TypeInfo t7_TI;
struct t424;
extern TypeInfo t424_TI;
extern CustomAttributesCache t424__CustomAttributeCache;
extern CustomAttributesCache t424__CustomAttributeCache_m3167;
extern CustomAttributesCache t424__CustomAttributeCache_m3168;
TypeInfo t424_TI = 
{
	&g_System_Core_dll_Image, NULL, "Enumerable", "System.Linq", t424_MIs, NULL, NULL, NULL, &t7_TI, t424_TI__nestedTypes, NULL, &t424_TI, NULL, t424_VT, &t424__CustomAttributeCache, &t424_TI, &t424_0_0_0, &t424_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t424), 0, -1, 0, 0, -1, 1048961, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 1, 4, 0, 0};
#include "t685.h"
extern Il2CppGenericContainer t685_IGC;
extern TypeInfo t685_gp_T_0_TI;
Il2CppGenericParamFull t685_gp_T_0_TI_GenericParamFull = { { &t685_IGC, 0}, {NULL, "T", 0, 0, NULL} };
extern TypeInfo t685_gp_TResult_1_TI;
Il2CppGenericParamFull t685_gp_TResult_1_TI_GenericParamFull = { { &t685_IGC, 1}, {NULL, "TResult", 0, 0, NULL} };
static Il2CppGenericParamFull* t685_IGPA[2] = 
{
	&t685_gp_T_0_TI_GenericParamFull,
	&t685_gp_TResult_1_TI_GenericParamFull,
};
extern TypeInfo t685_TI;
Il2CppGenericContainer t685_IGC = { { NULL, NULL }, NULL, &t685_TI, 2, 0, t685_IGPA };
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t685_m3169_ParameterInfos[] = 
{
	{"object", 0, 134217735, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217736, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t685_TI;
extern Il2CppType t53_0_0_0;
MethodInfo m3169_MI = 
{
	".ctor", NULL, &t685_TI, &t53_0_0_0, NULL, t685_m3169_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 12, NULL, (methodPointerType)NULL};
extern Il2CppType t685_gp_0_0_0_0;
static ParameterInfo t685_m3170_ParameterInfos[] = 
{
	{"arg1", 0, 134217737, &EmptyCustomAttributesCache, &t685_gp_0_0_0_0},
};
extern TypeInfo t685_TI;
extern Il2CppType t685_gp_1_0_0_0;
MethodInfo m3170_MI = 
{
	"Invoke", NULL, &t685_TI, &t685_gp_1_0_0_0, NULL, t685_m3170_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 13, NULL, (methodPointerType)NULL};
extern Il2CppType t685_gp_0_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t685_m3171_ParameterInfos[] = 
{
	{"arg1", 0, 134217738, &EmptyCustomAttributesCache, &t685_gp_0_0_0_0},
	{"callback", 1, 134217739, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217740, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t685_TI;
extern Il2CppType t112_0_0_0;
MethodInfo m3171_MI = 
{
	"BeginInvoke", NULL, &t685_TI, &t112_0_0_0, NULL, t685_m3171_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 14, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t685_m3172_ParameterInfos[] = 
{
	{"result", 0, 134217741, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t685_TI;
extern Il2CppType t685_gp_1_0_0_0;
MethodInfo m3172_MI = 
{
	"EndInvoke", NULL, &t685_TI, &t685_gp_1_0_0_0, NULL, t685_m3172_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 15, NULL, (methodPointerType)NULL};
static MethodInfo* t685_MIs[] =
{
	&m3169_MI,
	&m3170_MI,
	&m3171_MI,
	&m3172_MI,
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t685_0_0_0;
extern Il2CppType t685_1_0_0;
struct t685;
extern TypeInfo t685_TI;
TypeInfo t685_TI = 
{
	&g_System_Core_dll_Image, NULL, "Func`2", "System", t685_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t685_TI, NULL, NULL, NULL, NULL, &t685_0_0_0, &t685_1_0_0, NULL, NULL, &t685_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
