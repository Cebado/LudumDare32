#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t680_TI;
#include "t680.h"
#include "t680MD.h"
extern MethodInfo m3157_MI;
extern TypeInfo t680_TI;
extern MethodInfo m3157_MI;
extern TypeInfo t680_TI;
extern MethodInfo m3157_MI;
extern TypeInfo t680_TI;
extern MethodInfo m3157_MI;
extern TypeInfo t680_TI;
extern MethodInfo m3157_MI;
extern TypeInfo t680_TI;
extern MethodInfo m3157_MI;
extern TypeInfo t680_TI;
extern MethodInfo m3157_MI;
extern TypeInfo t92_TI;
#include "t92.h"
#include "t92MD.h"
extern MethodInfo m236_MI;
extern TypeInfo t680_TI;
extern MethodInfo m3157_MI;
extern TypeInfo t681_TI;
#include "t681.h"
#include "t681MD.h"
extern MethodInfo m3158_MI;
extern TypeInfo t680_TI;
extern MethodInfo m3157_MI;
extern TypeInfo t680_TI;
extern MethodInfo m3157_MI;
extern TypeInfo t680_TI;
extern MethodInfo m3157_MI;
extern TypeInfo t680_TI;
extern MethodInfo m3157_MI;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t680 * tmp;
		tmp = (t680 *)il2cpp_codegen_object_new (&t680_TI);
		m3157(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), &m3157_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t680 * tmp;
		tmp = (t680 *)il2cpp_codegen_object_new (&t680_TI);
		m3157(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), &m3157_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t680 * tmp;
		tmp = (t680 *)il2cpp_codegen_object_new (&t680_TI);
		m3157(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), &m3157_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t680 * tmp;
		tmp = (t680 *)il2cpp_codegen_object_new (&t680_TI);
		m3157(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), &m3157_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t680 * tmp;
		tmp = (t680 *)il2cpp_codegen_object_new (&t680_TI);
		m3157(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), &m3157_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t680 * tmp;
		tmp = (t680 *)il2cpp_codegen_object_new (&t680_TI);
		m3157(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), &m3157_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t680 * tmp;
		tmp = (t680 *)il2cpp_codegen_object_new (&t680_TI);
		m3157(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), &m3157_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t92 * tmp;
		tmp = (t92 *)il2cpp_codegen_object_new (&t92_TI);
		m236(tmp, &m236_MI);
		extern MethodInfo m237_MI;
		m237(tmp, true, &m237_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t680 * tmp;
		tmp = (t680 *)il2cpp_codegen_object_new (&t680_TI);
		m3157(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), &m3157_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t681 * tmp;
		tmp = (t681 *)il2cpp_codegen_object_new (&t681_TI);
		m3158(tmp, &m3158_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t680 * tmp;
		tmp = (t680 *)il2cpp_codegen_object_new (&t680_TI);
		m3157(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), &m3157_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t680 * tmp;
		tmp = (t680 *)il2cpp_codegen_object_new (&t680_TI);
		m3157(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), &m3157_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		t680 * tmp;
		tmp = (t680 *)il2cpp_codegen_object_new (&t680_TI);
		m3157(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), &m3157_MI);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		t680 * tmp;
		tmp = (t680 *)il2cpp_codegen_object_new (&t680_TI);
		m3157(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), &m3157_MI);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_Assembly__CustomAttributeCache = {
14,
NULL,
&g_UnityEngine_Assembly_CustomAttributesCacheGenerator
};
