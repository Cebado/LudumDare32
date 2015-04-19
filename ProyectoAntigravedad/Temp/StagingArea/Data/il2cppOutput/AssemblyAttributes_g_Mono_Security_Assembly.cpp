#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t454_TI;
#include "t454.h"
#include "t454MD.h"
extern MethodInfo m2165_MI;
extern TypeInfo t92_TI;
#include "t92.h"
#include "t92MD.h"
extern MethodInfo m236_MI;
extern TypeInfo t680_TI;
#include "t680.h"
#include "t680MD.h"
extern MethodInfo m3157_MI;
extern TypeInfo t702_TI;
#include "t702.h"
#include "t702MD.h"
extern MethodInfo m3179_MI;
extern TypeInfo t703_TI;
#include "t703.h"
#include "t703MD.h"
extern MethodInfo m3180_MI;
extern TypeInfo t451_TI;
#include "t451.h"
#include "t451MD.h"
extern MethodInfo m2162_MI;
extern TypeInfo t449_TI;
#include "t449.h"
#include "t449MD.h"
extern MethodInfo m2160_MI;
extern TypeInfo t699_TI;
#include "t699.h"
#include "t699MD.h"
extern MethodInfo m3176_MI;
extern TypeInfo t446_TI;
#include "t446.h"
#include "t446MD.h"
extern MethodInfo m2157_MI;
extern TypeInfo t450_TI;
#include "t450.h"
#include "t450MD.h"
extern MethodInfo m2161_MI;
extern TypeInfo t447_TI;
#include "t447.h"
#include "t447MD.h"
extern MethodInfo m2158_MI;
extern TypeInfo t698_TI;
#include "t698.h"
#include "t698MD.h"
extern MethodInfo m3175_MI;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t454 * tmp;
		tmp = (t454 *)il2cpp_codegen_object_new (&t454_TI);
		m2165(tmp, false, &m2165_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t92 * tmp;
		tmp = (t92 *)il2cpp_codegen_object_new (&t92_TI);
		m236(tmp, &m236_MI);
		extern MethodInfo m237_MI;
		m237(tmp, true, &m237_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t680 * tmp;
		tmp = (t680 *)il2cpp_codegen_object_new (&t680_TI);
		m3157(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), &m3157_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t702 * tmp;
		tmp = (t702 *)il2cpp_codegen_object_new (&t702_TI);
		m3179(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), &m3179_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t703 * tmp;
		tmp = (t703 *)il2cpp_codegen_object_new (&t703_TI);
		m3180(tmp, true, &m3180_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t451 * tmp;
		tmp = (t451 *)il2cpp_codegen_object_new (&t451_TI);
		m2162(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), &m2162_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t449 * tmp;
		tmp = (t449 *)il2cpp_codegen_object_new (&t449_TI);
		m2160(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), &m2160_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t699 * tmp;
		tmp = (t699 *)il2cpp_codegen_object_new (&t699_TI);
		m3176(tmp, true, &m3176_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t446 * tmp;
		tmp = (t446 *)il2cpp_codegen_object_new (&t446_TI);
		m2157(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m2157_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t450 * tmp;
		tmp = (t450 *)il2cpp_codegen_object_new (&t450_TI);
		m2161(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), &m2161_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t447 * tmp;
		tmp = (t447 *)il2cpp_codegen_object_new (&t447_TI);
		m2158(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m2158_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t698 * tmp;
		tmp = (t698 *)il2cpp_codegen_object_new (&t698_TI);
		m3175(tmp, il2cpp_codegen_string_new_wrapper("en-US"), &m3175_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_Mono_Security_Assembly__CustomAttributeCache = {
12,
NULL,
&g_Mono_Security_Assembly_CustomAttributesCacheGenerator
};
