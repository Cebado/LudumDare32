#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t446_TI;
#include "t446.h"
#include "t446MD.h"
extern MethodInfo m2157_MI;
extern TypeInfo t447_TI;
#include "t447.h"
#include "t447MD.h"
extern MethodInfo m2158_MI;
extern TypeInfo t448_TI;
#include "t448.h"
#include "t448MD.h"
extern MethodInfo m2159_MI;
extern TypeInfo t449_TI;
#include "t449.h"
#include "t449MD.h"
extern MethodInfo m2160_MI;
extern TypeInfo t450_TI;
#include "t450.h"
#include "t450MD.h"
extern MethodInfo m2161_MI;
extern TypeInfo t451_TI;
#include "t451.h"
#include "t451MD.h"
extern MethodInfo m2162_MI;
extern TypeInfo t92_TI;
#include "t92.h"
#include "t92MD.h"
extern MethodInfo m236_MI;
extern TypeInfo t452_TI;
#include "t452.h"
#include "t452MD.h"
extern MethodInfo m2163_MI;
extern TypeInfo t453_TI;
#include "t453.h"
#include "t453MD.h"
extern MethodInfo m2164_MI;
extern TypeInfo t454_TI;
#include "t454.h"
#include "t454MD.h"
extern MethodInfo m2165_MI;
extern TypeInfo t455_TI;
#include "t455.h"
#include "t455MD.h"
extern MethodInfo m2166_MI;
void g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t446 * tmp;
		tmp = (t446 *)il2cpp_codegen_object_new (&t446_TI);
		m2157(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m2157_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t447 * tmp;
		tmp = (t447 *)il2cpp_codegen_object_new (&t447_TI);
		m2158(tmp, il2cpp_codegen_string_new_wrapper(""), &m2158_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t448 * tmp;
		tmp = (t448 *)il2cpp_codegen_object_new (&t448_TI);
		m2159(tmp, il2cpp_codegen_string_new_wrapper(""), &m2159_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t449 * tmp;
		tmp = (t449 *)il2cpp_codegen_object_new (&t449_TI);
		m2160(tmp, il2cpp_codegen_string_new_wrapper("Microsoft"), &m2160_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t450 * tmp;
		tmp = (t450 *)il2cpp_codegen_object_new (&t450_TI);
		m2161(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m2161_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t451 * tmp;
		tmp = (t451 *)il2cpp_codegen_object_new (&t451_TI);
		m2162(tmp, il2cpp_codegen_string_new_wrapper("Copyright © Microsoft 2013"), &m2162_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t92 * tmp;
		tmp = (t92 *)il2cpp_codegen_object_new (&t92_TI);
		m236(tmp, &m236_MI);
		extern MethodInfo m237_MI;
		m237(tmp, true, &m237_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t452 * tmp;
		tmp = (t452 *)il2cpp_codegen_object_new (&t452_TI);
		m2163(tmp, il2cpp_codegen_string_new_wrapper("1.0.0.0"), &m2163_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t453 * tmp;
		tmp = (t453 *)il2cpp_codegen_object_new (&t453_TI);
		m2164(tmp, il2cpp_codegen_string_new_wrapper("d4f464c7-9b15-460d-b4bc-2cacd1c1df73"), &m2164_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t454 * tmp;
		tmp = (t454 *)il2cpp_codegen_object_new (&t454_TI);
		m2165(tmp, false, &m2165_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t455 * tmp;
		tmp = (t455 *)il2cpp_codegen_object_new (&t455_TI);
		m2166(tmp, il2cpp_codegen_string_new_wrapper(""), &m2166_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_UI_Assembly__CustomAttributeCache = {
11,
NULL,
&g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator
};
