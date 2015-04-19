#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2485.h"
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
extern TypeInfo t2485_TI;
#include "t2485MD.h"

#include "t7.h"
#include "t53.h"
#include "t2483.h"
#include "t854.h"
#include "t34.h"
#include "t60.h"
#include "t502.h"
#include "t55.h"
#include "mscorlib_ArrayTypes.h"
#include "t852.h"
#include "t1312.h"
#include "t1295.h"
extern TypeInfo t2485_TI;
extern TypeInfo t2483_TI;
extern TypeInfo t34_TI;
extern TypeInfo t60_TI;
extern TypeInfo t854_TI;
extern TypeInfo t502_TI;
extern TypeInfo t852_TI;
extern TypeInfo t1312_TI;
extern TypeInfo t1295_TI;
#include "t2483MD.h"
#include "t854MD.h"
#include "t1312MD.h"
#include "t1295MD.h"
extern MethodInfo m14241_MI;
extern MethodInfo m14203_MI;
extern MethodInfo m14205_MI;
extern MethodInfo m4471_MI;
extern MethodInfo m14238_MI;
extern MethodInfo m14240_MI;
extern MethodInfo m14202_MI;
extern MethodInfo m7227_MI;
extern MethodInfo m7023_MI;

#include "t52.h"

extern MethodInfo m14232_MI;
 void m14232 (t2485 * __this, t502 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m14233_MI;
 t7 * m14233 (t2485 * __this, MethodInfo* method){
	{
		m14241(__this, &m14241_MI);
		t2483  L_0 = (__this->f3);
		t2483  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2483_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14234_MI;
 t854  m14234 (t2485 * __this, MethodInfo* method){
	{
		m14241(__this, &m14241_MI);
		t2483 * L_0 = &(__this->f3);
		t34* L_1 = m14203(L_0, &m14203_MI);
		t34* L_2 = L_1;
		t2483 * L_3 = &(__this->f3);
		int32_t L_4 = m14205(L_3, &m14205_MI);
		int32_t L_5 = L_4;
		t7 * L_6 = Box(InitializedTypeInfo(&t60_TI), &L_5);
		t854  L_7 = {0};
		m4471(&L_7, ((t34*)L_2), L_6, &m4471_MI);
		return L_7;
	}
}
extern MethodInfo m14235_MI;
 t7 * m14235 (t2485 * __this, MethodInfo* method){
	{
		t34* L_0 = m14238(__this, &m14238_MI);
		t34* L_1 = L_0;
		return ((t34*)L_1);
	}
}
extern MethodInfo m14236_MI;
 bool m14236 (t2485 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m14240(__this, &m14240_MI);
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
		t502 * L_3 = (__this->f0);
		t1476* L_4 = (L_3->f5);
		int32_t L_5 = (((t852 *)(t852 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)(L_5&((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t502 * L_6 = (__this->f0);
		t463* L_7 = (L_6->f6);
		t502 * L_8 = (__this->f0);
		t731* L_9 = (L_8->f7);
		t2483  L_10 = {0};
		m14202(&L_10, (*(t34**)(t34**)SZArrayLdElema(L_7, V_0)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, V_0)), &m14202_MI);
		__this->f3 = L_10;
		return 1;
	}

IL_0072:
	{
		int32_t L_11 = (__this->f1);
		t502 * L_12 = (__this->f0);
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
extern MethodInfo m14237_MI;
 t2483  m14237 (t2485 * __this, MethodInfo* method){
	{
		t2483  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m14238_MI;
 t34* m14238 (t2485 * __this, MethodInfo* method){
	{
		m14241(__this, &m14241_MI);
		t2483 * L_0 = &(__this->f3);
		t34* L_1 = m14203(L_0, &m14203_MI);
		return L_1;
	}
}
extern MethodInfo m14239_MI;
 int32_t m14239 (t2485 * __this, MethodInfo* method){
	{
		m14241(__this, &m14241_MI);
		t2483 * L_0 = &(__this->f3);
		int32_t L_1 = m14205(L_0, &m14205_MI);
		return L_1;
	}
}
extern MethodInfo m14240_MI;
 void m14240 (t2485 * __this, MethodInfo* method){
	{
		t502 * L_0 = (__this->f0);
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
		t502 * L_2 = (__this->f0);
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
extern MethodInfo m14241_MI;
 void m14241 (t2485 * __this, MethodInfo* method){
	{
		m14240(__this, &m14240_MI);
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
extern MethodInfo m14242_MI;
 void m14242 (t2485 * __this, MethodInfo* method){
	{
		__this->f0 = (t502 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
extern Il2CppType t502_0_0_1;
FieldInfo t2485_f0_FieldInfo = 
{
	"dictionary", &t502_0_0_1, &t2485_TI, offsetof(t2485, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2485_f1_FieldInfo = 
{
	"next", &t60_0_0_1, &t2485_TI, offsetof(t2485, f1) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2485_f2_FieldInfo = 
{
	"stamp", &t60_0_0_1, &t2485_TI, offsetof(t2485, f2) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t2483_0_0_3;
FieldInfo t2485_f3_FieldInfo = 
{
	"current", &t2483_0_0_3, &t2485_TI, offsetof(t2485, f3) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2485_FIs[] =
{
	&t2485_f0_FieldInfo,
	&t2485_f1_FieldInfo,
	&t2485_f2_FieldInfo,
	&t2485_f3_FieldInfo,
	NULL
};
extern MethodInfo m14233_MI;
static PropertyInfo t2485____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2485_TI, "System.Collections.IEnumerator.Current", &m14233_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14234_MI;
static PropertyInfo t2485____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t2485_TI, "System.Collections.IDictionaryEnumerator.Entry", &m14234_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14235_MI;
static PropertyInfo t2485____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t2485_TI, "System.Collections.IDictionaryEnumerator.Key", &m14235_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14237_MI;
static PropertyInfo t2485____Current_PropertyInfo = 
{
	&t2485_TI, "Current", &m14237_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14238_MI;
static PropertyInfo t2485____CurrentKey_PropertyInfo = 
{
	&t2485_TI, "CurrentKey", &m14238_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14239_MI;
static PropertyInfo t2485____CurrentValue_PropertyInfo = 
{
	&t2485_TI, "CurrentValue", &m14239_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2485_PIs[] =
{
	&t2485____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2485____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t2485____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t2485____Current_PropertyInfo,
	&t2485____CurrentKey_PropertyInfo,
	&t2485____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t502_0_0_0;
static ParameterInfo t2485_m14232_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t502_0_0_0},
};
extern TypeInfo t2485_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14232_MI = 
{
	".ctor", (methodPointerType)&m14232, &t2485_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2485_m14232_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2485_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14233_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14233, &t2485_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2485_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854 (MethodInfo* method, void* obj, void** args);
MethodInfo m14234_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m14234, &t2485_TI, &t854_0_0_0, RuntimeInvoker_t854, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2485_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14235_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m14235, &t2485_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2485_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14236_MI = 
{
	"MoveNext", (methodPointerType)&m14236, &t2485_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2485_TI;
extern Il2CppType t2483_0_0_0;
extern void* RuntimeInvoker_t2483 (MethodInfo* method, void* obj, void** args);
MethodInfo m14237_MI = 
{
	"get_Current", (methodPointerType)&m14237, &t2485_TI, &t2483_0_0_0, RuntimeInvoker_t2483, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2485_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14238_MI = 
{
	"get_CurrentKey", (methodPointerType)&m14238, &t2485_TI, &t34_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2485_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14239_MI = 
{
	"get_CurrentValue", (methodPointerType)&m14239, &t2485_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2485_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14240_MI = 
{
	"VerifyState", (methodPointerType)&m14240, &t2485_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2485_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14241_MI = 
{
	"VerifyCurrent", (methodPointerType)&m14241, &t2485_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2485_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14242_MI = 
{
	"Dispose", (methodPointerType)&m14242, &t2485_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2485_MIs[] =
{
	&m14232_MI,
	&m14233_MI,
	&m14234_MI,
	&m14235_MI,
	&m14236_MI,
	&m14237_MI,
	&m14238_MI,
	&m14239_MI,
	&m14240_MI,
	&m14241_MI,
	&m14242_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14233_MI;
extern MethodInfo m14236_MI;
extern MethodInfo m14242_MI;
extern MethodInfo m14237_MI;
extern MethodInfo m14234_MI;
extern MethodInfo m14235_MI;
static MethodInfo* t2485_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14233_MI,
	&m14236_MI,
	&m14242_MI,
	&m14237_MI,
	&m14234_MI,
	&m14235_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2484_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2485_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2484_TI,
	&t860_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2484_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2485_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2484_TI, 7},
	{ &t860_TI, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2485_0_0_0;
extern Il2CppType t2485_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2485_TI;
extern Il2CppGenericClass t2485_GC;
extern TypeInfo t859_TI;
TypeInfo t2485_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2485_MIs, t2485_PIs, t2485_FIs, NULL, &t159_TI, NULL, &t859_TI, &t2485_TI, t2485_ITIs, t2485_VT, &EmptyCustomAttributesCache, &t2485_TI, &t2485_0_0_0, &t2485_1_0_0, t2485_IOs, &t2485_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2485)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#include "t2488.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2488_TI;
#include "t2488MD.h"

#include "t114.h"
#include "t113.h"


extern MethodInfo m14243_MI;
 void m14243 (t2488 * __this, t7 * p0, t114 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14244_MI;
 int32_t m14244 (t2488 * __this, t34* p0, int32_t p1, MethodInfo* method){
	typedef  int32_t (*FunctionPointerType) (t7 * __this, t34* p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m14244((t2488 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m14245_MI;
 t7 * m14245 (t2488 * __this, t34* p0, int32_t p1, t113 * p2, t7 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t60_TI), &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m14246_MI;
 int32_t m14246 (t2488 * __this, t7 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2488_m14243_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2488_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m14243_MI = 
{
	".ctor", (methodPointerType)&m14243, &t2488_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2488_m14243_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2488_m14244_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2488_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14244_MI = 
{
	"Invoke", (methodPointerType)&m14244, &t2488_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t60, t2488_m14244_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2488_m14245_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2488_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14245_MI = 
{
	"BeginInvoke", (methodPointerType)&m14245, &t2488_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t60_t7_t7, t2488_m14245_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2488_m14246_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2488_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14246_MI = 
{
	"EndInvoke", (methodPointerType)&m14246, &t2488_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2488_m14246_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2488_MIs[] =
{
	&m14243_MI,
	&m14244_MI,
	&m14245_MI,
	&m14246_MI,
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
extern MethodInfo m14244_MI;
extern MethodInfo m14245_MI;
extern MethodInfo m14246_MI;
static MethodInfo* t2488_VT[] =
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
	&m14244_MI,
	&m14245_MI,
	&m14246_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2488_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2488_0_0_0;
extern Il2CppType t2488_1_0_0;
extern TypeInfo t245_TI;
struct t2488;
extern TypeInfo t2488_TI;
extern Il2CppGenericClass t2488_GC;
extern TypeInfo t859_TI;
TypeInfo t2488_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2488_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t859_TI, &t2488_TI, NULL, t2488_VT, &EmptyCustomAttributesCache, &t2488_TI, &t2488_0_0_0, &t2488_1_0_0, t2488_IOs, &t2488_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2488), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2480.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2480_TI;
#include "t2480MD.h"



extern MethodInfo m14247_MI;
 void m14247 (t2480 * __this, t7 * p0, t114 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14248_MI;
 t854  m14248 (t2480 * __this, t34* p0, int32_t p1, MethodInfo* method){
	typedef  t854  (*FunctionPointerType) (t7 * __this, t34* p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m14248((t2480 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m14249_MI;
 t7 * m14249 (t2480 * __this, t34* p0, int32_t p1, t113 * p2, t7 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t60_TI), &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m14250_MI;
 t854  m14250 (t2480 * __this, t7 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t854 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2480_m14247_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2480_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m14247_MI = 
{
	".ctor", (methodPointerType)&m14247, &t2480_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2480_m14247_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2480_m14248_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2480_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14248_MI = 
{
	"Invoke", (methodPointerType)&m14248, &t2480_TI, &t854_0_0_0, RuntimeInvoker_t854_t7_t60, t2480_m14248_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2480_m14249_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2480_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14249_MI = 
{
	"BeginInvoke", (methodPointerType)&m14249, &t2480_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t60_t7_t7, t2480_m14249_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2480_m14250_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2480_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14250_MI = 
{
	"EndInvoke", (methodPointerType)&m14250, &t2480_TI, &t854_0_0_0, RuntimeInvoker_t854_t7, t2480_m14250_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2480_MIs[] =
{
	&m14247_MI,
	&m14248_MI,
	&m14249_MI,
	&m14250_MI,
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
extern MethodInfo m14248_MI;
extern MethodInfo m14249_MI;
extern MethodInfo m14250_MI;
static MethodInfo* t2480_VT[] =
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
	&m14248_MI,
	&m14249_MI,
	&m14250_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2480_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2480_0_0_0;
extern Il2CppType t2480_1_0_0;
extern TypeInfo t245_TI;
struct t2480;
extern TypeInfo t2480_TI;
extern Il2CppGenericClass t2480_GC;
extern TypeInfo t859_TI;
TypeInfo t2480_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2480_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t859_TI, &t2480_TI, NULL, t2480_VT, &EmptyCustomAttributesCache, &t2480_TI, &t2480_0_0_0, &t2480_1_0_0, t2480_IOs, &t2480_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2480), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2489.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2489_TI;
#include "t2489MD.h"



extern MethodInfo m14251_MI;
 void m14251 (t2489 * __this, t7 * p0, t114 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m14252_MI;
 t2483  m14252 (t2489 * __this, t34* p0, int32_t p1, MethodInfo* method){
	typedef  t2483  (*FunctionPointerType) (t7 * __this, t34* p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m14252((t2489 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m14253_MI;
 t7 * m14253 (t2489 * __this, t34* p0, int32_t p1, t113 * p2, t7 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t60_TI), &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m14254_MI;
 t2483  m14254 (t2489 * __this, t7 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2483 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2489_m14251_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2489_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m14251_MI = 
{
	".ctor", (methodPointerType)&m14251, &t2489_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2489_m14251_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2489_m14252_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2489_TI;
extern Il2CppType t2483_0_0_0;
extern void* RuntimeInvoker_t2483_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m14252_MI = 
{
	"Invoke", (methodPointerType)&m14252, &t2489_TI, &t2483_0_0_0, RuntimeInvoker_t2483_t7_t60, t2489_m14252_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t34_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2489_m14253_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2489_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14253_MI = 
{
	"BeginInvoke", (methodPointerType)&m14253, &t2489_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t60_t7_t7, t2489_m14253_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2489_m14254_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2489_TI;
extern Il2CppType t2483_0_0_0;
extern void* RuntimeInvoker_t2483_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14254_MI = 
{
	"EndInvoke", (methodPointerType)&m14254, &t2489_TI, &t2483_0_0_0, RuntimeInvoker_t2483_t7, t2489_m14254_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2489_MIs[] =
{
	&m14251_MI,
	&m14252_MI,
	&m14253_MI,
	&m14254_MI,
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
extern MethodInfo m14252_MI;
extern MethodInfo m14253_MI;
extern MethodInfo m14254_MI;
static MethodInfo* t2489_VT[] =
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
	&m14252_MI,
	&m14253_MI,
	&m14254_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2489_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2489_0_0_0;
extern Il2CppType t2489_1_0_0;
extern TypeInfo t245_TI;
struct t2489;
extern TypeInfo t2489_TI;
extern Il2CppGenericClass t2489_GC;
extern TypeInfo t859_TI;
TypeInfo t2489_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2489_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t859_TI, &t2489_TI, NULL, t2489_VT, &EmptyCustomAttributesCache, &t2489_TI, &t2489_0_0_0, &t2489_1_0_0, t2489_IOs, &t2489_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2489), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2490.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2490_TI;
#include "t2490MD.h"

extern TypeInfo t2490_TI;
extern TypeInfo t2485_TI;
extern TypeInfo t860_TI;
extern TypeInfo t854_TI;
extern TypeInfo t2483_TI;
extern TypeInfo t34_TI;
extern TypeInfo t55_TI;
#include "t7MD.h"
#include "t502MD.h"
extern MethodInfo m7825_MI;
extern MethodInfo m14237_MI;
extern MethodInfo m14203_MI;
extern MethodInfo m14257_MI;
extern MethodInfo m116_MI;
extern MethodInfo m14200_MI;
extern MethodInfo m14236_MI;


extern MethodInfo m14255_MI;
 void m14255 (t2490 * __this, t502 * p0, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		t2485  L_0 = m14200(p0, &m14200_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m14256_MI;
 bool m14256 (t2490 * __this, MethodInfo* method){
	{
		t2485 * L_0 = &(__this->f0);
		bool L_1 = m14236(L_0, &m14236_MI);
		return L_1;
	}
}
extern MethodInfo m14257_MI;
 t854  m14257 (t2490 * __this, MethodInfo* method){
	{
		t2485  L_0 = (__this->f0);
		t2485  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2485_TI), &L_1);
		t854  L_3 = (t854 )InterfaceFuncInvoker0< t854  >::Invoke(&m7825_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m14258_MI;
 t7 * m14258 (t2490 * __this, MethodInfo* method){
	t2483  V_0 = {0};
	{
		t2485 * L_0 = &(__this->f0);
		t2483  L_1 = m14237(L_0, &m14237_MI);
		V_0 = L_1;
		t34* L_2 = m14203((&V_0), &m14203_MI);
		t34* L_3 = L_2;
		return ((t34*)L_3);
	}
}
extern MethodInfo m14259_MI;
 t7 * m14259 (t2490 * __this, MethodInfo* method){
	{
		t854  L_0 = (t854 )VirtFuncInvoker0< t854  >::Invoke(&m14257_MI, __this);
		t854  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t854_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>
extern Il2CppType t2485_0_0_1;
FieldInfo t2490_f0_FieldInfo = 
{
	"host_enumerator", &t2485_0_0_1, &t2490_TI, offsetof(t2490, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2490_FIs[] =
{
	&t2490_f0_FieldInfo,
	NULL
};
extern MethodInfo m14257_MI;
static PropertyInfo t2490____Entry_PropertyInfo = 
{
	&t2490_TI, "Entry", &m14257_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14258_MI;
static PropertyInfo t2490____Key_PropertyInfo = 
{
	&t2490_TI, "Key", &m14258_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14259_MI;
static PropertyInfo t2490____Current_PropertyInfo = 
{
	&t2490_TI, "Current", &m14259_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2490_PIs[] =
{
	&t2490____Entry_PropertyInfo,
	&t2490____Key_PropertyInfo,
	&t2490____Current_PropertyInfo,
	NULL
};
extern Il2CppType t502_0_0_0;
static ParameterInfo t2490_m14255_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t502_0_0_0},
};
extern TypeInfo t2490_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14255_MI = 
{
	".ctor", (methodPointerType)&m14255, &t2490_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2490_m14255_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2490_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14256_MI = 
{
	"MoveNext", (methodPointerType)&m14256, &t2490_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2490_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854 (MethodInfo* method, void* obj, void** args);
MethodInfo m14257_MI = 
{
	"get_Entry", (methodPointerType)&m14257, &t2490_TI, &t854_0_0_0, RuntimeInvoker_t854, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2490_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14258_MI = 
{
	"get_Key", (methodPointerType)&m14258, &t2490_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2490_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14259_MI = 
{
	"get_Current", (methodPointerType)&m14259, &t2490_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2490_MIs[] =
{
	&m14255_MI,
	&m14256_MI,
	&m14257_MI,
	&m14258_MI,
	&m14259_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14259_MI;
extern MethodInfo m14256_MI;
extern MethodInfo m14257_MI;
extern MethodInfo m14258_MI;
static MethodInfo* t2490_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14259_MI,
	&m14256_MI,
	&m14257_MI,
	&m14258_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2490_ITIs[] = 
{
	&t12_TI,
	&t860_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2490_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2490_0_0_0;
extern Il2CppType t2490_1_0_0;
extern TypeInfo t7_TI;
struct t2490;
extern TypeInfo t2490_TI;
extern Il2CppGenericClass t2490_GC;
extern TypeInfo t859_TI;
TypeInfo t2490_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t2490_MIs, t2490_PIs, t2490_FIs, NULL, &t7_TI, NULL, &t859_TI, &t2490_TI, t2490_ITIs, t2490_VT, &EmptyCustomAttributesCache, &t2490_TI, &t2490_0_0_0, &t2490_1_0_0, t2490_IOs, &t2490_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2490), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3586_TI;

#include "t81.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.KeyCode>
extern MethodInfo m26566_MI;
static PropertyInfo t3586____Current_PropertyInfo = 
{
	&t3586_TI, "Current", &m26566_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3586_PIs[] =
{
	&t3586____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3586_TI;
extern Il2CppType t81_0_0_0;
extern void* RuntimeInvoker_t81 (MethodInfo* method, void* obj, void** args);
MethodInfo m26566_MI = 
{
	"get_Current", NULL, &t3586_TI, &t81_0_0_0, RuntimeInvoker_t81, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3586_MIs[] =
{
	&m26566_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3586_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3586_0_0_0;
extern Il2CppType t3586_1_0_0;
struct t3586;
extern TypeInfo t3586_TI;
extern Il2CppGenericClass t3586_GC;
TypeInfo t3586_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3586_MIs, t3586_PIs, NULL, NULL, NULL, NULL, NULL, &t3586_TI, t3586_ITIs, NULL, &EmptyCustomAttributesCache, &t3586_TI, &t3586_0_0_0, &t3586_1_0_0, NULL, &t3586_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2491.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2491_TI;
#include "t2491MD.h"

extern TypeInfo t2491_TI;
extern TypeInfo t81_TI;
extern TypeInfo t1295_TI;
#include "t52MD.h"
extern MethodInfo m14264_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20073_MI;
struct t52;
#include "t88.h"
 int32_t m20073 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20073_MI;


extern MethodInfo m14260_MI;
 void m14260 (t2491 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14261_MI;
 t7 * m14261 (t2491 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14264(__this, &m14264_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t81_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14262_MI;
 void m14262 (t2491 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14263_MI;
 bool m14263 (t2491 * __this, MethodInfo* method){
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
extern MethodInfo m14264_MI;
 int32_t m14264 (t2491 * __this, MethodInfo* method){
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
		int32_t L_8 = m20073(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20073_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.KeyCode>
extern Il2CppType t52_0_0_1;
FieldInfo t2491_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2491_TI, offsetof(t2491, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2491_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2491_TI, offsetof(t2491, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2491_FIs[] =
{
	&t2491_f0_FieldInfo,
	&t2491_f1_FieldInfo,
	NULL
};
extern MethodInfo m14261_MI;
static PropertyInfo t2491____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2491_TI, "System.Collections.IEnumerator.Current", &m14261_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14264_MI;
static PropertyInfo t2491____Current_PropertyInfo = 
{
	&t2491_TI, "Current", &m14264_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2491_PIs[] =
{
	&t2491____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2491____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2491_m14260_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2491_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14260_MI = 
{
	".ctor", (methodPointerType)&m14260, &t2491_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2491_m14260_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2491_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14261_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14261, &t2491_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2491_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14262_MI = 
{
	"Dispose", (methodPointerType)&m14262, &t2491_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2491_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14263_MI = 
{
	"MoveNext", (methodPointerType)&m14263, &t2491_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2491_TI;
extern Il2CppType t81_0_0_0;
extern void* RuntimeInvoker_t81 (MethodInfo* method, void* obj, void** args);
MethodInfo m14264_MI = 
{
	"get_Current", (methodPointerType)&m14264, &t2491_TI, &t81_0_0_0, RuntimeInvoker_t81, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2491_MIs[] =
{
	&m14260_MI,
	&m14261_MI,
	&m14262_MI,
	&m14263_MI,
	&m14264_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14261_MI;
extern MethodInfo m14263_MI;
extern MethodInfo m14262_MI;
extern MethodInfo m14264_MI;
static MethodInfo* t2491_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14261_MI,
	&m14263_MI,
	&m14262_MI,
	&m14264_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3586_TI;
static TypeInfo* t2491_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3586_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3586_TI;
static Il2CppInterfaceOffsetPair t2491_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3586_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2491_0_0_0;
extern Il2CppType t2491_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2491_TI;
extern Il2CppGenericClass t2491_GC;
extern TypeInfo t52_TI;
TypeInfo t2491_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2491_MIs, t2491_PIs, t2491_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2491_TI, t2491_ITIs, t2491_VT, &EmptyCustomAttributesCache, &t2491_TI, &t2491_0_0_0, &t2491_1_0_0, t2491_IOs, &t2491_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2491)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4444_TI;

#include "UnityEngine_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.KeyCode>
extern MethodInfo m26567_MI;
static PropertyInfo t4444____Count_PropertyInfo = 
{
	&t4444_TI, "Count", &m26567_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26568_MI;
static PropertyInfo t4444____IsReadOnly_PropertyInfo = 
{
	&t4444_TI, "IsReadOnly", &m26568_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4444_PIs[] =
{
	&t4444____Count_PropertyInfo,
	&t4444____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4444_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26567_MI = 
{
	"get_Count", NULL, &t4444_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4444_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26568_MI = 
{
	"get_IsReadOnly", NULL, &t4444_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t81_0_0_0;
static ParameterInfo t4444_m26569_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t81_0_0_0},
};
extern TypeInfo t4444_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26569_MI = 
{
	"Add", NULL, &t4444_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4444_m26569_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4444_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26570_MI = 
{
	"Clear", NULL, &t4444_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t81_0_0_0;
static ParameterInfo t4444_m26571_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t81_0_0_0},
};
extern TypeInfo t4444_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26571_MI = 
{
	"Contains", NULL, &t4444_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4444_m26571_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3218_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4444_m26572_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3218_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4444_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26572_MI = 
{
	"CopyTo", NULL, &t4444_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4444_m26572_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t81_0_0_0;
static ParameterInfo t4444_m26573_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t81_0_0_0},
};
extern TypeInfo t4444_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26573_MI = 
{
	"Remove", NULL, &t4444_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4444_m26573_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4444_MIs[] =
{
	&m26567_MI,
	&m26568_MI,
	&m26569_MI,
	&m26570_MI,
	&m26571_MI,
	&m26572_MI,
	&m26573_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4446_TI;
static TypeInfo* t4444_ITIs[] = 
{
	&t618_TI,
	&t4446_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4444_0_0_0;
extern Il2CppType t4444_1_0_0;
struct t4444;
extern TypeInfo t4444_TI;
extern Il2CppGenericClass t4444_GC;
TypeInfo t4444_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4444_MIs, t4444_PIs, NULL, NULL, NULL, NULL, NULL, &t4444_TI, t4444_ITIs, NULL, &EmptyCustomAttributesCache, &t4444_TI, &t4444_0_0_0, &t4444_1_0_0, NULL, &t4444_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4446_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.KeyCode>
extern TypeInfo t4446_TI;
extern Il2CppType t3586_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26574_MI = 
{
	"GetEnumerator", NULL, &t4446_TI, &t3586_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4446_MIs[] =
{
	&m26574_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4446_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4446_0_0_0;
extern Il2CppType t4446_1_0_0;
struct t4446;
extern TypeInfo t4446_TI;
extern Il2CppGenericClass t4446_GC;
TypeInfo t4446_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4446_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4446_TI, t4446_ITIs, NULL, &EmptyCustomAttributesCache, &t4446_TI, &t4446_0_0_0, &t4446_1_0_0, NULL, &t4446_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4445_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.KeyCode>
extern MethodInfo m26575_MI;
extern MethodInfo m26576_MI;
static PropertyInfo t4445____Item_PropertyInfo = 
{
	&t4445_TI, "Item", &m26575_MI, &m26576_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4445_PIs[] =
{
	&t4445____Item_PropertyInfo,
	NULL
};
extern Il2CppType t81_0_0_0;
static ParameterInfo t4445_m26577_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t81_0_0_0},
};
extern TypeInfo t4445_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26577_MI = 
{
	"IndexOf", NULL, &t4445_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4445_m26577_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t81_0_0_0;
static ParameterInfo t4445_m26578_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t81_0_0_0},
};
extern TypeInfo t4445_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26578_MI = 
{
	"Insert", NULL, &t4445_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4445_m26578_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4445_m26579_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4445_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26579_MI = 
{
	"RemoveAt", NULL, &t4445_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4445_m26579_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4445_m26575_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4445_TI;
extern Il2CppType t81_0_0_0;
extern void* RuntimeInvoker_t81_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26575_MI = 
{
	"get_Item", NULL, &t4445_TI, &t81_0_0_0, RuntimeInvoker_t81_t60, t4445_m26575_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t81_0_0_0;
static ParameterInfo t4445_m26576_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t81_0_0_0},
};
extern TypeInfo t4445_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26576_MI = 
{
	"set_Item", NULL, &t4445_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4445_m26576_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4445_MIs[] =
{
	&m26577_MI,
	&m26578_MI,
	&m26579_MI,
	&m26575_MI,
	&m26576_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4444_TI;
extern TypeInfo t4446_TI;
static TypeInfo* t4445_ITIs[] = 
{
	&t618_TI,
	&t4444_TI,
	&t4446_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4445_0_0_0;
extern Il2CppType t4445_1_0_0;
struct t4445;
extern TypeInfo t4445_TI;
extern Il2CppGenericClass t4445_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4445_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4445_MIs, t4445_PIs, NULL, NULL, NULL, NULL, NULL, &t4445_TI, t4445_ITIs, NULL, &t1426__CustomAttributeCache, &t4445_TI, &t4445_0_0_0, &t4445_1_0_0, NULL, &t4445_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3587_TI;

#include "t404.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventType>
extern MethodInfo m26580_MI;
static PropertyInfo t3587____Current_PropertyInfo = 
{
	&t3587_TI, "Current", &m26580_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3587_PIs[] =
{
	&t3587____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3587_TI;
extern Il2CppType t404_0_0_0;
extern void* RuntimeInvoker_t404 (MethodInfo* method, void* obj, void** args);
MethodInfo m26580_MI = 
{
	"get_Current", NULL, &t3587_TI, &t404_0_0_0, RuntimeInvoker_t404, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3587_MIs[] =
{
	&m26580_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3587_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3587_0_0_0;
extern Il2CppType t3587_1_0_0;
struct t3587;
extern TypeInfo t3587_TI;
extern Il2CppGenericClass t3587_GC;
TypeInfo t3587_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3587_MIs, t3587_PIs, NULL, NULL, NULL, NULL, NULL, &t3587_TI, t3587_ITIs, NULL, &EmptyCustomAttributesCache, &t3587_TI, &t3587_0_0_0, &t3587_1_0_0, NULL, &t3587_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2492.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2492_TI;
#include "t2492MD.h"

extern TypeInfo t2492_TI;
extern TypeInfo t404_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14269_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20084_MI;
struct t52;
 int32_t m20084 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20084_MI;


extern MethodInfo m14265_MI;
 void m14265 (t2492 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14266_MI;
 t7 * m14266 (t2492 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14269(__this, &m14269_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t404_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14267_MI;
 void m14267 (t2492 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14268_MI;
 bool m14268 (t2492 * __this, MethodInfo* method){
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
extern MethodInfo m14269_MI;
 int32_t m14269 (t2492 * __this, MethodInfo* method){
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
		int32_t L_8 = m20084(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20084_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventType>
extern Il2CppType t52_0_0_1;
FieldInfo t2492_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2492_TI, offsetof(t2492, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2492_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2492_TI, offsetof(t2492, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2492_FIs[] =
{
	&t2492_f0_FieldInfo,
	&t2492_f1_FieldInfo,
	NULL
};
extern MethodInfo m14266_MI;
static PropertyInfo t2492____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2492_TI, "System.Collections.IEnumerator.Current", &m14266_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14269_MI;
static PropertyInfo t2492____Current_PropertyInfo = 
{
	&t2492_TI, "Current", &m14269_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2492_PIs[] =
{
	&t2492____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2492____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2492_m14265_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14265_MI = 
{
	".ctor", (methodPointerType)&m14265, &t2492_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2492_m14265_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2492_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14266_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14266, &t2492_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2492_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14267_MI = 
{
	"Dispose", (methodPointerType)&m14267, &t2492_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2492_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14268_MI = 
{
	"MoveNext", (methodPointerType)&m14268, &t2492_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2492_TI;
extern Il2CppType t404_0_0_0;
extern void* RuntimeInvoker_t404 (MethodInfo* method, void* obj, void** args);
MethodInfo m14269_MI = 
{
	"get_Current", (methodPointerType)&m14269, &t2492_TI, &t404_0_0_0, RuntimeInvoker_t404, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2492_MIs[] =
{
	&m14265_MI,
	&m14266_MI,
	&m14267_MI,
	&m14268_MI,
	&m14269_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14266_MI;
extern MethodInfo m14268_MI;
extern MethodInfo m14267_MI;
extern MethodInfo m14269_MI;
static MethodInfo* t2492_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14266_MI,
	&m14268_MI,
	&m14267_MI,
	&m14269_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3587_TI;
static TypeInfo* t2492_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3587_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3587_TI;
static Il2CppInterfaceOffsetPair t2492_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3587_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2492_0_0_0;
extern Il2CppType t2492_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2492_TI;
extern Il2CppGenericClass t2492_GC;
extern TypeInfo t52_TI;
TypeInfo t2492_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2492_MIs, t2492_PIs, t2492_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2492_TI, t2492_ITIs, t2492_VT, &EmptyCustomAttributesCache, &t2492_TI, &t2492_0_0_0, &t2492_1_0_0, t2492_IOs, &t2492_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2492)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4447_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventType>
extern MethodInfo m26581_MI;
static PropertyInfo t4447____Count_PropertyInfo = 
{
	&t4447_TI, "Count", &m26581_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26582_MI;
static PropertyInfo t4447____IsReadOnly_PropertyInfo = 
{
	&t4447_TI, "IsReadOnly", &m26582_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4447_PIs[] =
{
	&t4447____Count_PropertyInfo,
	&t4447____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4447_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26581_MI = 
{
	"get_Count", NULL, &t4447_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4447_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26582_MI = 
{
	"get_IsReadOnly", NULL, &t4447_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t404_0_0_0;
static ParameterInfo t4447_m26583_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t404_0_0_0},
};
extern TypeInfo t4447_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26583_MI = 
{
	"Add", NULL, &t4447_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4447_m26583_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4447_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26584_MI = 
{
	"Clear", NULL, &t4447_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t404_0_0_0;
static ParameterInfo t4447_m26585_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t404_0_0_0},
};
extern TypeInfo t4447_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26585_MI = 
{
	"Contains", NULL, &t4447_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4447_m26585_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3219_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4447_m26586_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3219_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4447_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26586_MI = 
{
	"CopyTo", NULL, &t4447_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4447_m26586_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t404_0_0_0;
static ParameterInfo t4447_m26587_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t404_0_0_0},
};
extern TypeInfo t4447_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26587_MI = 
{
	"Remove", NULL, &t4447_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4447_m26587_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4447_MIs[] =
{
	&m26581_MI,
	&m26582_MI,
	&m26583_MI,
	&m26584_MI,
	&m26585_MI,
	&m26586_MI,
	&m26587_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4449_TI;
static TypeInfo* t4447_ITIs[] = 
{
	&t618_TI,
	&t4449_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4447_0_0_0;
extern Il2CppType t4447_1_0_0;
struct t4447;
extern TypeInfo t4447_TI;
extern Il2CppGenericClass t4447_GC;
TypeInfo t4447_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4447_MIs, t4447_PIs, NULL, NULL, NULL, NULL, NULL, &t4447_TI, t4447_ITIs, NULL, &EmptyCustomAttributesCache, &t4447_TI, &t4447_0_0_0, &t4447_1_0_0, NULL, &t4447_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4449_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventType>
extern TypeInfo t4449_TI;
extern Il2CppType t3587_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26588_MI = 
{
	"GetEnumerator", NULL, &t4449_TI, &t3587_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4449_MIs[] =
{
	&m26588_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4449_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4449_0_0_0;
extern Il2CppType t4449_1_0_0;
struct t4449;
extern TypeInfo t4449_TI;
extern Il2CppGenericClass t4449_GC;
TypeInfo t4449_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4449_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4449_TI, t4449_ITIs, NULL, &EmptyCustomAttributesCache, &t4449_TI, &t4449_0_0_0, &t4449_1_0_0, NULL, &t4449_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4448_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventType>
extern MethodInfo m26589_MI;
extern MethodInfo m26590_MI;
static PropertyInfo t4448____Item_PropertyInfo = 
{
	&t4448_TI, "Item", &m26589_MI, &m26590_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4448_PIs[] =
{
	&t4448____Item_PropertyInfo,
	NULL
};
extern Il2CppType t404_0_0_0;
static ParameterInfo t4448_m26591_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t404_0_0_0},
};
extern TypeInfo t4448_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26591_MI = 
{
	"IndexOf", NULL, &t4448_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4448_m26591_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t404_0_0_0;
static ParameterInfo t4448_m26592_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t404_0_0_0},
};
extern TypeInfo t4448_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26592_MI = 
{
	"Insert", NULL, &t4448_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4448_m26592_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4448_m26593_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4448_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26593_MI = 
{
	"RemoveAt", NULL, &t4448_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4448_m26593_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4448_m26589_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4448_TI;
extern Il2CppType t404_0_0_0;
extern void* RuntimeInvoker_t404_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26589_MI = 
{
	"get_Item", NULL, &t4448_TI, &t404_0_0_0, RuntimeInvoker_t404_t60, t4448_m26589_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t404_0_0_0;
static ParameterInfo t4448_m26590_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t404_0_0_0},
};
extern TypeInfo t4448_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26590_MI = 
{
	"set_Item", NULL, &t4448_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4448_m26590_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4448_MIs[] =
{
	&m26591_MI,
	&m26592_MI,
	&m26593_MI,
	&m26589_MI,
	&m26590_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4447_TI;
extern TypeInfo t4449_TI;
static TypeInfo* t4448_ITIs[] = 
{
	&t618_TI,
	&t4447_TI,
	&t4449_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4448_0_0_0;
extern Il2CppType t4448_1_0_0;
struct t4448;
extern TypeInfo t4448_TI;
extern Il2CppGenericClass t4448_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4448_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4448_MIs, t4448_PIs, NULL, NULL, NULL, NULL, NULL, &t4448_TI, t4448_ITIs, NULL, &t1426__CustomAttributeCache, &t4448_TI, &t4448_0_0_0, &t4448_1_0_0, NULL, &t4448_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3588_TI;

#include "t403.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.EventModifiers>
extern MethodInfo m26594_MI;
static PropertyInfo t3588____Current_PropertyInfo = 
{
	&t3588_TI, "Current", &m26594_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3588_PIs[] =
{
	&t3588____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3588_TI;
extern Il2CppType t403_0_0_0;
extern void* RuntimeInvoker_t403 (MethodInfo* method, void* obj, void** args);
MethodInfo m26594_MI = 
{
	"get_Current", NULL, &t3588_TI, &t403_0_0_0, RuntimeInvoker_t403, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3588_MIs[] =
{
	&m26594_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3588_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3588_0_0_0;
extern Il2CppType t3588_1_0_0;
struct t3588;
extern TypeInfo t3588_TI;
extern Il2CppGenericClass t3588_GC;
TypeInfo t3588_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3588_MIs, t3588_PIs, NULL, NULL, NULL, NULL, NULL, &t3588_TI, t3588_ITIs, NULL, &EmptyCustomAttributesCache, &t3588_TI, &t3588_0_0_0, &t3588_1_0_0, NULL, &t3588_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2493.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2493_TI;
#include "t2493MD.h"

extern TypeInfo t2493_TI;
extern TypeInfo t403_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14274_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20095_MI;
struct t52;
 int32_t m20095 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20095_MI;


extern MethodInfo m14270_MI;
 void m14270 (t2493 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14271_MI;
 t7 * m14271 (t2493 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14274(__this, &m14274_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t403_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14272_MI;
 void m14272 (t2493 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14273_MI;
 bool m14273 (t2493 * __this, MethodInfo* method){
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
extern MethodInfo m14274_MI;
 int32_t m14274 (t2493 * __this, MethodInfo* method){
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
		int32_t L_8 = m20095(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20095_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.EventModifiers>
extern Il2CppType t52_0_0_1;
FieldInfo t2493_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2493_TI, offsetof(t2493, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2493_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2493_TI, offsetof(t2493, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2493_FIs[] =
{
	&t2493_f0_FieldInfo,
	&t2493_f1_FieldInfo,
	NULL
};
extern MethodInfo m14271_MI;
static PropertyInfo t2493____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2493_TI, "System.Collections.IEnumerator.Current", &m14271_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14274_MI;
static PropertyInfo t2493____Current_PropertyInfo = 
{
	&t2493_TI, "Current", &m14274_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2493_PIs[] =
{
	&t2493____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2493____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2493_m14270_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2493_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14270_MI = 
{
	".ctor", (methodPointerType)&m14270, &t2493_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2493_m14270_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2493_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14271_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14271, &t2493_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2493_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14272_MI = 
{
	"Dispose", (methodPointerType)&m14272, &t2493_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2493_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14273_MI = 
{
	"MoveNext", (methodPointerType)&m14273, &t2493_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2493_TI;
extern Il2CppType t403_0_0_0;
extern void* RuntimeInvoker_t403 (MethodInfo* method, void* obj, void** args);
MethodInfo m14274_MI = 
{
	"get_Current", (methodPointerType)&m14274, &t2493_TI, &t403_0_0_0, RuntimeInvoker_t403, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2493_MIs[] =
{
	&m14270_MI,
	&m14271_MI,
	&m14272_MI,
	&m14273_MI,
	&m14274_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14271_MI;
extern MethodInfo m14273_MI;
extern MethodInfo m14272_MI;
extern MethodInfo m14274_MI;
static MethodInfo* t2493_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14271_MI,
	&m14273_MI,
	&m14272_MI,
	&m14274_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3588_TI;
static TypeInfo* t2493_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3588_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3588_TI;
static Il2CppInterfaceOffsetPair t2493_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3588_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2493_0_0_0;
extern Il2CppType t2493_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2493_TI;
extern Il2CppGenericClass t2493_GC;
extern TypeInfo t52_TI;
TypeInfo t2493_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2493_MIs, t2493_PIs, t2493_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2493_TI, t2493_ITIs, t2493_VT, &EmptyCustomAttributesCache, &t2493_TI, &t2493_0_0_0, &t2493_1_0_0, t2493_IOs, &t2493_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2493)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4450_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.EventModifiers>
extern MethodInfo m26595_MI;
static PropertyInfo t4450____Count_PropertyInfo = 
{
	&t4450_TI, "Count", &m26595_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26596_MI;
static PropertyInfo t4450____IsReadOnly_PropertyInfo = 
{
	&t4450_TI, "IsReadOnly", &m26596_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4450_PIs[] =
{
	&t4450____Count_PropertyInfo,
	&t4450____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4450_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26595_MI = 
{
	"get_Count", NULL, &t4450_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4450_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26596_MI = 
{
	"get_IsReadOnly", NULL, &t4450_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t403_0_0_0;
static ParameterInfo t4450_m26597_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t403_0_0_0},
};
extern TypeInfo t4450_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26597_MI = 
{
	"Add", NULL, &t4450_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4450_m26597_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4450_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26598_MI = 
{
	"Clear", NULL, &t4450_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t403_0_0_0;
static ParameterInfo t4450_m26599_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t403_0_0_0},
};
extern TypeInfo t4450_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26599_MI = 
{
	"Contains", NULL, &t4450_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4450_m26599_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3220_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4450_m26600_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3220_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4450_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26600_MI = 
{
	"CopyTo", NULL, &t4450_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4450_m26600_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t403_0_0_0;
static ParameterInfo t4450_m26601_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t403_0_0_0},
};
extern TypeInfo t4450_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26601_MI = 
{
	"Remove", NULL, &t4450_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4450_m26601_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4450_MIs[] =
{
	&m26595_MI,
	&m26596_MI,
	&m26597_MI,
	&m26598_MI,
	&m26599_MI,
	&m26600_MI,
	&m26601_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4452_TI;
static TypeInfo* t4450_ITIs[] = 
{
	&t618_TI,
	&t4452_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4450_0_0_0;
extern Il2CppType t4450_1_0_0;
struct t4450;
extern TypeInfo t4450_TI;
extern Il2CppGenericClass t4450_GC;
TypeInfo t4450_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4450_MIs, t4450_PIs, NULL, NULL, NULL, NULL, NULL, &t4450_TI, t4450_ITIs, NULL, &EmptyCustomAttributesCache, &t4450_TI, &t4450_0_0_0, &t4450_1_0_0, NULL, &t4450_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4452_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.EventModifiers>
extern TypeInfo t4452_TI;
extern Il2CppType t3588_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26602_MI = 
{
	"GetEnumerator", NULL, &t4452_TI, &t3588_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4452_MIs[] =
{
	&m26602_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4452_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4452_0_0_0;
extern Il2CppType t4452_1_0_0;
struct t4452;
extern TypeInfo t4452_TI;
extern Il2CppGenericClass t4452_GC;
TypeInfo t4452_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4452_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4452_TI, t4452_ITIs, NULL, &EmptyCustomAttributesCache, &t4452_TI, &t4452_0_0_0, &t4452_1_0_0, NULL, &t4452_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4451_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.EventModifiers>
extern MethodInfo m26603_MI;
extern MethodInfo m26604_MI;
static PropertyInfo t4451____Item_PropertyInfo = 
{
	&t4451_TI, "Item", &m26603_MI, &m26604_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4451_PIs[] =
{
	&t4451____Item_PropertyInfo,
	NULL
};
extern Il2CppType t403_0_0_0;
static ParameterInfo t4451_m26605_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t403_0_0_0},
};
extern TypeInfo t4451_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26605_MI = 
{
	"IndexOf", NULL, &t4451_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4451_m26605_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t403_0_0_0;
static ParameterInfo t4451_m26606_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t403_0_0_0},
};
extern TypeInfo t4451_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26606_MI = 
{
	"Insert", NULL, &t4451_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4451_m26606_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4451_m26607_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4451_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26607_MI = 
{
	"RemoveAt", NULL, &t4451_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4451_m26607_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4451_m26603_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4451_TI;
extern Il2CppType t403_0_0_0;
extern void* RuntimeInvoker_t403_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26603_MI = 
{
	"get_Item", NULL, &t4451_TI, &t403_0_0_0, RuntimeInvoker_t403_t60, t4451_m26603_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t403_0_0_0;
static ParameterInfo t4451_m26604_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t403_0_0_0},
};
extern TypeInfo t4451_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26604_MI = 
{
	"set_Item", NULL, &t4451_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4451_m26604_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4451_MIs[] =
{
	&m26605_MI,
	&m26606_MI,
	&m26607_MI,
	&m26603_MI,
	&m26604_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4450_TI;
extern TypeInfo t4452_TI;
static TypeInfo* t4451_ITIs[] = 
{
	&t618_TI,
	&t4450_TI,
	&t4452_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4451_0_0_0;
extern Il2CppType t4451_1_0_0;
struct t4451;
extern TypeInfo t4451_TI;
extern Il2CppGenericClass t4451_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4451_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4451_MIs, t4451_PIs, NULL, NULL, NULL, NULL, NULL, &t4451_TI, t4451_ITIs, NULL, &t1426__CustomAttributeCache, &t4451_TI, &t4451_0_0_0, &t4451_1_0_0, NULL, &t4451_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3589_TI;

#include "t413.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.DrivenTransformProperties>
extern MethodInfo m26608_MI;
static PropertyInfo t3589____Current_PropertyInfo = 
{
	&t3589_TI, "Current", &m26608_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3589_PIs[] =
{
	&t3589____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3589_TI;
extern Il2CppType t413_0_0_0;
extern void* RuntimeInvoker_t413 (MethodInfo* method, void* obj, void** args);
MethodInfo m26608_MI = 
{
	"get_Current", NULL, &t3589_TI, &t413_0_0_0, RuntimeInvoker_t413, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3589_MIs[] =
{
	&m26608_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3589_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3589_0_0_0;
extern Il2CppType t3589_1_0_0;
struct t3589;
extern TypeInfo t3589_TI;
extern Il2CppGenericClass t3589_GC;
TypeInfo t3589_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3589_MIs, t3589_PIs, NULL, NULL, NULL, NULL, NULL, &t3589_TI, t3589_ITIs, NULL, &EmptyCustomAttributesCache, &t3589_TI, &t3589_0_0_0, &t3589_1_0_0, NULL, &t3589_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2494.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2494_TI;
#include "t2494MD.h"

extern TypeInfo t2494_TI;
extern TypeInfo t413_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14279_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20106_MI;
struct t52;
 int32_t m20106 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20106_MI;


extern MethodInfo m14275_MI;
 void m14275 (t2494 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14276_MI;
 t7 * m14276 (t2494 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14279(__this, &m14279_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t413_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14277_MI;
 void m14277 (t2494 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14278_MI;
 bool m14278 (t2494 * __this, MethodInfo* method){
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
extern MethodInfo m14279_MI;
 int32_t m14279 (t2494 * __this, MethodInfo* method){
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
		int32_t L_8 = m20106(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20106_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.DrivenTransformProperties>
extern Il2CppType t52_0_0_1;
FieldInfo t2494_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2494_TI, offsetof(t2494, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2494_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2494_TI, offsetof(t2494, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2494_FIs[] =
{
	&t2494_f0_FieldInfo,
	&t2494_f1_FieldInfo,
	NULL
};
extern MethodInfo m14276_MI;
static PropertyInfo t2494____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2494_TI, "System.Collections.IEnumerator.Current", &m14276_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14279_MI;
static PropertyInfo t2494____Current_PropertyInfo = 
{
	&t2494_TI, "Current", &m14279_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2494_PIs[] =
{
	&t2494____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2494____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2494_m14275_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2494_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14275_MI = 
{
	".ctor", (methodPointerType)&m14275, &t2494_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2494_m14275_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2494_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14276_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14276, &t2494_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2494_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14277_MI = 
{
	"Dispose", (methodPointerType)&m14277, &t2494_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2494_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14278_MI = 
{
	"MoveNext", (methodPointerType)&m14278, &t2494_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2494_TI;
extern Il2CppType t413_0_0_0;
extern void* RuntimeInvoker_t413 (MethodInfo* method, void* obj, void** args);
MethodInfo m14279_MI = 
{
	"get_Current", (methodPointerType)&m14279, &t2494_TI, &t413_0_0_0, RuntimeInvoker_t413, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2494_MIs[] =
{
	&m14275_MI,
	&m14276_MI,
	&m14277_MI,
	&m14278_MI,
	&m14279_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14276_MI;
extern MethodInfo m14278_MI;
extern MethodInfo m14277_MI;
extern MethodInfo m14279_MI;
static MethodInfo* t2494_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14276_MI,
	&m14278_MI,
	&m14277_MI,
	&m14279_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3589_TI;
static TypeInfo* t2494_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3589_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3589_TI;
static Il2CppInterfaceOffsetPair t2494_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3589_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2494_0_0_0;
extern Il2CppType t2494_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2494_TI;
extern Il2CppGenericClass t2494_GC;
extern TypeInfo t52_TI;
TypeInfo t2494_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2494_MIs, t2494_PIs, t2494_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2494_TI, t2494_ITIs, t2494_VT, &EmptyCustomAttributesCache, &t2494_TI, &t2494_0_0_0, &t2494_1_0_0, t2494_IOs, &t2494_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2494)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4453_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.DrivenTransformProperties>
extern MethodInfo m26609_MI;
static PropertyInfo t4453____Count_PropertyInfo = 
{
	&t4453_TI, "Count", &m26609_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26610_MI;
static PropertyInfo t4453____IsReadOnly_PropertyInfo = 
{
	&t4453_TI, "IsReadOnly", &m26610_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4453_PIs[] =
{
	&t4453____Count_PropertyInfo,
	&t4453____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4453_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26609_MI = 
{
	"get_Count", NULL, &t4453_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4453_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26610_MI = 
{
	"get_IsReadOnly", NULL, &t4453_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t413_0_0_0;
static ParameterInfo t4453_m26611_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t413_0_0_0},
};
extern TypeInfo t4453_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26611_MI = 
{
	"Add", NULL, &t4453_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4453_m26611_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4453_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26612_MI = 
{
	"Clear", NULL, &t4453_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t413_0_0_0;
static ParameterInfo t4453_m26613_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t413_0_0_0},
};
extern TypeInfo t4453_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26613_MI = 
{
	"Contains", NULL, &t4453_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4453_m26613_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3221_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4453_m26614_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3221_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4453_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26614_MI = 
{
	"CopyTo", NULL, &t4453_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4453_m26614_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t413_0_0_0;
static ParameterInfo t4453_m26615_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t413_0_0_0},
};
extern TypeInfo t4453_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26615_MI = 
{
	"Remove", NULL, &t4453_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4453_m26615_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4453_MIs[] =
{
	&m26609_MI,
	&m26610_MI,
	&m26611_MI,
	&m26612_MI,
	&m26613_MI,
	&m26614_MI,
	&m26615_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4455_TI;
static TypeInfo* t4453_ITIs[] = 
{
	&t618_TI,
	&t4455_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4453_0_0_0;
extern Il2CppType t4453_1_0_0;
struct t4453;
extern TypeInfo t4453_TI;
extern Il2CppGenericClass t4453_GC;
TypeInfo t4453_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4453_MIs, t4453_PIs, NULL, NULL, NULL, NULL, NULL, &t4453_TI, t4453_ITIs, NULL, &EmptyCustomAttributesCache, &t4453_TI, &t4453_0_0_0, &t4453_1_0_0, NULL, &t4453_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4455_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.DrivenTransformProperties>
extern TypeInfo t4455_TI;
extern Il2CppType t3589_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26616_MI = 
{
	"GetEnumerator", NULL, &t4455_TI, &t3589_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4455_MIs[] =
{
	&m26616_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4455_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4455_0_0_0;
extern Il2CppType t4455_1_0_0;
struct t4455;
extern TypeInfo t4455_TI;
extern Il2CppGenericClass t4455_GC;
TypeInfo t4455_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4455_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4455_TI, t4455_ITIs, NULL, &EmptyCustomAttributesCache, &t4455_TI, &t4455_0_0_0, &t4455_1_0_0, NULL, &t4455_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4454_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.DrivenTransformProperties>
extern MethodInfo m26617_MI;
extern MethodInfo m26618_MI;
static PropertyInfo t4454____Item_PropertyInfo = 
{
	&t4454_TI, "Item", &m26617_MI, &m26618_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4454_PIs[] =
{
	&t4454____Item_PropertyInfo,
	NULL
};
extern Il2CppType t413_0_0_0;
static ParameterInfo t4454_m26619_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t413_0_0_0},
};
extern TypeInfo t4454_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26619_MI = 
{
	"IndexOf", NULL, &t4454_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4454_m26619_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t413_0_0_0;
static ParameterInfo t4454_m26620_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t413_0_0_0},
};
extern TypeInfo t4454_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26620_MI = 
{
	"Insert", NULL, &t4454_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4454_m26620_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4454_m26621_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4454_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26621_MI = 
{
	"RemoveAt", NULL, &t4454_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4454_m26621_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4454_m26617_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4454_TI;
extern Il2CppType t413_0_0_0;
extern void* RuntimeInvoker_t413_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26617_MI = 
{
	"get_Item", NULL, &t4454_TI, &t413_0_0_0, RuntimeInvoker_t413_t60, t4454_m26617_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t413_0_0_0;
static ParameterInfo t4454_m26618_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t413_0_0_0},
};
extern TypeInfo t4454_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26618_MI = 
{
	"set_Item", NULL, &t4454_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4454_m26618_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4454_MIs[] =
{
	&m26619_MI,
	&m26620_MI,
	&m26621_MI,
	&m26617_MI,
	&m26618_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4453_TI;
extern TypeInfo t4455_TI;
static TypeInfo* t4454_ITIs[] = 
{
	&t618_TI,
	&t4453_TI,
	&t4455_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4454_0_0_0;
extern Il2CppType t4454_1_0_0;
struct t4454;
extern TypeInfo t4454_TI;
extern Il2CppGenericClass t4454_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4454_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4454_MIs, t4454_PIs, NULL, NULL, NULL, NULL, NULL, &t4454_TI, t4454_ITIs, NULL, &t1426__CustomAttributeCache, &t4454_TI, &t4454_0_0_0, &t4454_1_0_0, NULL, &t4454_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2495.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2495_TI;
#include "t2495MD.h"

#include "t72.h"
#include "t573.h"
#include "t210.h"
#include "t2496.h"
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t2495_TI;
extern TypeInfo t210_TI;
extern TypeInfo t2496_TI;
extern TypeInfo t53_TI;
#include "t2496MD.h"
extern MethodInfo m14282_MI;
extern MethodInfo m14284_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.RectTransform>
extern Il2CppType t350_0_0_33;
FieldInfo t2495_f1_FieldInfo = 
{
	"m_Arg1", &t350_0_0_33, &t2495_TI, offsetof(t2495, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2495_FIs[] =
{
	&t2495_f1_FieldInfo,
	NULL
};
extern Il2CppType t72_0_0_0;
extern Il2CppType t573_0_0_0;
extern Il2CppType t210_0_0_0;
static ParameterInfo t2495_m14280_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t72_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t210_0_0_0},
};
extern TypeInfo t2495_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14280_MI = 
{
	".ctor", (methodPointerType)&m8007_gshared, &t2495_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7_t7, t2495_m14280_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2495_m14281_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2495_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14281_MI = 
{
	"Invoke", (methodPointerType)&m8009_gshared, &t2495_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2495_m14281_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2495_MIs[] =
{
	&m14280_MI,
	&m14281_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14281_MI;
extern MethodInfo m14285_MI;
static MethodInfo* t2495_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14281_MI,
	&m14285_MI,
};
extern Il2CppType t2497_0_0_0;
extern TypeInfo t2497_TI;
extern MethodInfo m20116_MI;
extern TypeInfo t210_TI;
extern MethodInfo m14287_MI;
extern MethodInfo m14282_MI;
extern TypeInfo t210_TI;
extern MethodInfo m14284_MI;
static void* t2495_RGCTXData[8] = 
{
	(void*)&t2497_0_0_0,
	&t2497_TI,
	&m20116_MI,
	&t210_TI,
	&m14287_MI,
	&m14282_MI,
	&t210_TI,
	&m14284_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2495_0_0_0;
extern Il2CppType t2495_1_0_0;
extern TypeInfo t2496_TI;
struct t2495;
extern TypeInfo t2495_TI;
extern Il2CppGenericClass t2495_GC;
TypeInfo t2495_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2495_MIs, NULL, t2495_FIs, NULL, &t2496_TI, NULL, NULL, &t2495_TI, NULL, t2495_VT, &EmptyCustomAttributesCache, &t2495_TI, &t2495_0_0_0, &t2495_1_0_0, NULL, &t2495_GC, NULL, NULL, NULL, t2495_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2495), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2496_TI;

#include "t2497.h"
#include "t70.h"
#include "t71.h"
#include "t374.h"
#include "t348.h"
extern TypeInfo t2496_TI;
extern TypeInfo t2497_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern TypeInfo t210_TI;
extern TypeInfo t53_TI;
#include "t572MD.h"
#include "t70MD.h"
#include "t374MD.h"
#include "t348MD.h"
#include "t2497MD.h"
extern Il2CppType t2497_0_0_0;
extern MethodInfo m2910_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3073_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m20116_MI;
extern MethodInfo m2911_MI;
extern MethodInfo m14287_MI;
extern MethodInfo m3069_MI;
extern MethodInfo m3067_MI;
struct t572;
#include "t572.h"
struct t572;
 void m17212_gshared (t7 * __this, t7 * p0, MethodInfo* method);
#define m17212(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
#define m20116(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
extern MethodInfo m20116_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.RectTransform>
extern Il2CppType t2497_0_0_1;
FieldInfo t2496_f0_FieldInfo = 
{
	"Delegate", &t2497_0_0_1, &t2496_TI, offsetof(t2496, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2496_FIs[] =
{
	&t2496_f0_FieldInfo,
	NULL
};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2496_m14282_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2496_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14282_MI = 
{
	".ctor", (methodPointerType)&m8010_gshared, &t2496_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t2496_m14282_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2497_0_0_0;
static ParameterInfo t2496_m14283_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2497_0_0_0},
};
extern TypeInfo t2496_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14283_MI = 
{
	".ctor", (methodPointerType)&m8011_gshared, &t2496_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2496_m14283_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2496_m14284_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2496_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14284_MI = 
{
	"Invoke", (methodPointerType)&m8012_gshared, &t2496_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2496_m14284_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2496_m14285_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2496_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14285_MI = 
{
	"Find", (methodPointerType)&m8013_gshared, &t2496_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2496_m14285_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2496_MIs[] =
{
	&m14282_MI,
	&m14283_MI,
	&m14284_MI,
	&m14285_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14284_MI;
extern MethodInfo m14285_MI;
static MethodInfo* t2496_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14284_MI,
	&m14285_MI,
};
extern Il2CppType t2497_0_0_0;
extern TypeInfo t2497_TI;
extern MethodInfo m20116_MI;
extern TypeInfo t210_TI;
extern MethodInfo m14287_MI;
static void* t2496_RGCTXData[5] = 
{
	(void*)&t2497_0_0_0,
	&t2497_TI,
	&m20116_MI,
	&t210_TI,
	&m14287_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2496_0_0_0;
extern Il2CppType t2496_1_0_0;
extern TypeInfo t572_TI;
struct t2496;
extern TypeInfo t2496_TI;
extern Il2CppGenericClass t2496_GC;
TypeInfo t2496_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2496_MIs, NULL, t2496_FIs, NULL, &t572_TI, NULL, NULL, &t2496_TI, NULL, t2496_VT, &EmptyCustomAttributesCache, &t2496_TI, &t2496_0_0_0, &t2496_1_0_0, NULL, &t2496_GC, NULL, NULL, NULL, t2496_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2496), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2497_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.RectTransform>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2497_m14286_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2497_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m14286_MI = 
{
	".ctor", (methodPointerType)&m8014_gshared, &t2497_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2497_m14286_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t210_0_0_0;
static ParameterInfo t2497_m14287_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t210_0_0_0},
};
extern TypeInfo t2497_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14287_MI = 
{
	"Invoke", (methodPointerType)&m8015_gshared, &t2497_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2497_m14287_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t210_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2497_m14288_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t210_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2497_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14288_MI = 
{
	"BeginInvoke", (methodPointerType)&m8016_gshared, &t2497_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7, t2497_m14288_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2497_m14289_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2497_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14289_MI = 
{
	"EndInvoke", (methodPointerType)&m8017_gshared, &t2497_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2497_m14289_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2497_MIs[] =
{
	&m14286_MI,
	&m14287_MI,
	&m14288_MI,
	&m14289_MI,
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
extern MethodInfo m14287_MI;
extern MethodInfo m14288_MI;
extern MethodInfo m14289_MI;
static MethodInfo* t2497_VT[] =
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
	&m14287_MI,
	&m14288_MI,
	&m14289_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2497_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2497_0_0_0;
extern Il2CppType t2497_1_0_0;
extern TypeInfo t245_TI;
struct t2497;
extern TypeInfo t2497_TI;
extern Il2CppGenericClass t2497_GC;
TypeInfo t2497_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2497_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t2497_TI, NULL, t2497_VT, &EmptyCustomAttributesCache, &t2497_TI, &t2497_0_0_0, &t2497_1_0_0, t2497_IOs, &t2497_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2497), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3590_TI;

#include "t431.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.RectTransform/Edge>
extern MethodInfo m26622_MI;
static PropertyInfo t3590____Current_PropertyInfo = 
{
	&t3590_TI, "Current", &m26622_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3590_PIs[] =
{
	&t3590____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3590_TI;
extern Il2CppType t431_0_0_0;
extern void* RuntimeInvoker_t431 (MethodInfo* method, void* obj, void** args);
MethodInfo m26622_MI = 
{
	"get_Current", NULL, &t3590_TI, &t431_0_0_0, RuntimeInvoker_t431, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3590_MIs[] =
{
	&m26622_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3590_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3590_0_0_0;
extern Il2CppType t3590_1_0_0;
struct t3590;
extern TypeInfo t3590_TI;
extern Il2CppGenericClass t3590_GC;
TypeInfo t3590_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3590_MIs, t3590_PIs, NULL, NULL, NULL, NULL, NULL, &t3590_TI, t3590_ITIs, NULL, &EmptyCustomAttributesCache, &t3590_TI, &t3590_0_0_0, &t3590_1_0_0, NULL, &t3590_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2498.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2498_TI;
#include "t2498MD.h"

extern TypeInfo t2498_TI;
extern TypeInfo t431_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14294_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20118_MI;
struct t52;
 int32_t m20118 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20118_MI;


extern MethodInfo m14290_MI;
 void m14290 (t2498 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14291_MI;
 t7 * m14291 (t2498 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14294(__this, &m14294_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t431_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14292_MI;
 void m14292 (t2498 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14293_MI;
 bool m14293 (t2498 * __this, MethodInfo* method){
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
extern MethodInfo m14294_MI;
 int32_t m14294 (t2498 * __this, MethodInfo* method){
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
		int32_t L_8 = m20118(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20118_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.RectTransform/Edge>
extern Il2CppType t52_0_0_1;
FieldInfo t2498_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2498_TI, offsetof(t2498, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2498_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2498_TI, offsetof(t2498, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2498_FIs[] =
{
	&t2498_f0_FieldInfo,
	&t2498_f1_FieldInfo,
	NULL
};
extern MethodInfo m14291_MI;
static PropertyInfo t2498____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2498_TI, "System.Collections.IEnumerator.Current", &m14291_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14294_MI;
static PropertyInfo t2498____Current_PropertyInfo = 
{
	&t2498_TI, "Current", &m14294_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2498_PIs[] =
{
	&t2498____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2498____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2498_m14290_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2498_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14290_MI = 
{
	".ctor", (methodPointerType)&m14290, &t2498_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2498_m14290_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2498_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14291_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14291, &t2498_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2498_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14292_MI = 
{
	"Dispose", (methodPointerType)&m14292, &t2498_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2498_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14293_MI = 
{
	"MoveNext", (methodPointerType)&m14293, &t2498_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2498_TI;
extern Il2CppType t431_0_0_0;
extern void* RuntimeInvoker_t431 (MethodInfo* method, void* obj, void** args);
MethodInfo m14294_MI = 
{
	"get_Current", (methodPointerType)&m14294, &t2498_TI, &t431_0_0_0, RuntimeInvoker_t431, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2498_MIs[] =
{
	&m14290_MI,
	&m14291_MI,
	&m14292_MI,
	&m14293_MI,
	&m14294_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14291_MI;
extern MethodInfo m14293_MI;
extern MethodInfo m14292_MI;
extern MethodInfo m14294_MI;
static MethodInfo* t2498_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14291_MI,
	&m14293_MI,
	&m14292_MI,
	&m14294_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3590_TI;
static TypeInfo* t2498_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3590_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3590_TI;
static Il2CppInterfaceOffsetPair t2498_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3590_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2498_0_0_0;
extern Il2CppType t2498_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2498_TI;
extern Il2CppGenericClass t2498_GC;
extern TypeInfo t52_TI;
TypeInfo t2498_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2498_MIs, t2498_PIs, t2498_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2498_TI, t2498_ITIs, t2498_VT, &EmptyCustomAttributesCache, &t2498_TI, &t2498_0_0_0, &t2498_1_0_0, t2498_IOs, &t2498_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2498)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4456_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.RectTransform/Edge>
extern MethodInfo m26623_MI;
static PropertyInfo t4456____Count_PropertyInfo = 
{
	&t4456_TI, "Count", &m26623_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26624_MI;
static PropertyInfo t4456____IsReadOnly_PropertyInfo = 
{
	&t4456_TI, "IsReadOnly", &m26624_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4456_PIs[] =
{
	&t4456____Count_PropertyInfo,
	&t4456____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4456_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26623_MI = 
{
	"get_Count", NULL, &t4456_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4456_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26624_MI = 
{
	"get_IsReadOnly", NULL, &t4456_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t431_0_0_0;
static ParameterInfo t4456_m26625_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t431_0_0_0},
};
extern TypeInfo t4456_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26625_MI = 
{
	"Add", NULL, &t4456_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4456_m26625_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4456_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26626_MI = 
{
	"Clear", NULL, &t4456_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t431_0_0_0;
static ParameterInfo t4456_m26627_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t431_0_0_0},
};
extern TypeInfo t4456_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26627_MI = 
{
	"Contains", NULL, &t4456_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4456_m26627_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3222_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4456_m26628_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3222_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4456_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26628_MI = 
{
	"CopyTo", NULL, &t4456_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4456_m26628_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t431_0_0_0;
static ParameterInfo t4456_m26629_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t431_0_0_0},
};
extern TypeInfo t4456_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26629_MI = 
{
	"Remove", NULL, &t4456_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4456_m26629_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4456_MIs[] =
{
	&m26623_MI,
	&m26624_MI,
	&m26625_MI,
	&m26626_MI,
	&m26627_MI,
	&m26628_MI,
	&m26629_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4458_TI;
static TypeInfo* t4456_ITIs[] = 
{
	&t618_TI,
	&t4458_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4456_0_0_0;
extern Il2CppType t4456_1_0_0;
struct t4456;
extern TypeInfo t4456_TI;
extern Il2CppGenericClass t4456_GC;
TypeInfo t4456_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4456_MIs, t4456_PIs, NULL, NULL, NULL, NULL, NULL, &t4456_TI, t4456_ITIs, NULL, &EmptyCustomAttributesCache, &t4456_TI, &t4456_0_0_0, &t4456_1_0_0, NULL, &t4456_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4458_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.RectTransform/Edge>
extern TypeInfo t4458_TI;
extern Il2CppType t3590_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26630_MI = 
{
	"GetEnumerator", NULL, &t4458_TI, &t3590_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4458_MIs[] =
{
	&m26630_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4458_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4458_0_0_0;
extern Il2CppType t4458_1_0_0;
struct t4458;
extern TypeInfo t4458_TI;
extern Il2CppGenericClass t4458_GC;
TypeInfo t4458_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4458_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4458_TI, t4458_ITIs, NULL, &EmptyCustomAttributesCache, &t4458_TI, &t4458_0_0_0, &t4458_1_0_0, NULL, &t4458_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4457_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.RectTransform/Edge>
extern MethodInfo m26631_MI;
extern MethodInfo m26632_MI;
static PropertyInfo t4457____Item_PropertyInfo = 
{
	&t4457_TI, "Item", &m26631_MI, &m26632_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4457_PIs[] =
{
	&t4457____Item_PropertyInfo,
	NULL
};
extern Il2CppType t431_0_0_0;
static ParameterInfo t4457_m26633_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t431_0_0_0},
};
extern TypeInfo t4457_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26633_MI = 
{
	"IndexOf", NULL, &t4457_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4457_m26633_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t431_0_0_0;
static ParameterInfo t4457_m26634_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t431_0_0_0},
};
extern TypeInfo t4457_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26634_MI = 
{
	"Insert", NULL, &t4457_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4457_m26634_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4457_m26635_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4457_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26635_MI = 
{
	"RemoveAt", NULL, &t4457_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4457_m26635_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4457_m26631_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4457_TI;
extern Il2CppType t431_0_0_0;
extern void* RuntimeInvoker_t431_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26631_MI = 
{
	"get_Item", NULL, &t4457_TI, &t431_0_0_0, RuntimeInvoker_t431_t60, t4457_m26631_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t431_0_0_0;
static ParameterInfo t4457_m26632_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t431_0_0_0},
};
extern TypeInfo t4457_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26632_MI = 
{
	"set_Item", NULL, &t4457_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4457_m26632_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4457_MIs[] =
{
	&m26633_MI,
	&m26634_MI,
	&m26635_MI,
	&m26631_MI,
	&m26632_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4456_TI;
extern TypeInfo t4458_TI;
static TypeInfo* t4457_ITIs[] = 
{
	&t618_TI,
	&t4456_TI,
	&t4458_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4457_0_0_0;
extern Il2CppType t4457_1_0_0;
struct t4457;
extern TypeInfo t4457_TI;
extern Il2CppGenericClass t4457_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4457_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4457_MIs, t4457_PIs, NULL, NULL, NULL, NULL, NULL, &t4457_TI, t4457_ITIs, NULL, &t1426__CustomAttributeCache, &t4457_TI, &t4457_0_0_0, &t4457_1_0_0, NULL, &t4457_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3591_TI;

#include "t426.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.RectTransform/Axis>
extern MethodInfo m26636_MI;
static PropertyInfo t3591____Current_PropertyInfo = 
{
	&t3591_TI, "Current", &m26636_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3591_PIs[] =
{
	&t3591____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3591_TI;
extern Il2CppType t426_0_0_0;
extern void* RuntimeInvoker_t426 (MethodInfo* method, void* obj, void** args);
MethodInfo m26636_MI = 
{
	"get_Current", NULL, &t3591_TI, &t426_0_0_0, RuntimeInvoker_t426, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3591_MIs[] =
{
	&m26636_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3591_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3591_0_0_0;
extern Il2CppType t3591_1_0_0;
struct t3591;
extern TypeInfo t3591_TI;
extern Il2CppGenericClass t3591_GC;
TypeInfo t3591_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3591_MIs, t3591_PIs, NULL, NULL, NULL, NULL, NULL, &t3591_TI, t3591_ITIs, NULL, &EmptyCustomAttributesCache, &t3591_TI, &t3591_0_0_0, &t3591_1_0_0, NULL, &t3591_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2499.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2499_TI;
#include "t2499MD.h"

extern TypeInfo t2499_TI;
extern TypeInfo t426_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14299_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20129_MI;
struct t52;
 int32_t m20129 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20129_MI;


extern MethodInfo m14295_MI;
 void m14295 (t2499 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14296_MI;
 t7 * m14296 (t2499 * __this, MethodInfo* method){
	{
		int32_t L_0 = m14299(__this, &m14299_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t426_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m14297_MI;
 void m14297 (t2499 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m14298_MI;
 bool m14298 (t2499 * __this, MethodInfo* method){
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
extern MethodInfo m14299_MI;
 int32_t m14299 (t2499 * __this, MethodInfo* method){
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
		int32_t L_8 = m20129(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20129_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.RectTransform/Axis>
extern Il2CppType t52_0_0_1;
FieldInfo t2499_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2499_TI, offsetof(t2499, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2499_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2499_TI, offsetof(t2499, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2499_FIs[] =
{
	&t2499_f0_FieldInfo,
	&t2499_f1_FieldInfo,
	NULL
};
extern MethodInfo m14296_MI;
static PropertyInfo t2499____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2499_TI, "System.Collections.IEnumerator.Current", &m14296_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14299_MI;
static PropertyInfo t2499____Current_PropertyInfo = 
{
	&t2499_TI, "Current", &m14299_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2499_PIs[] =
{
	&t2499____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2499____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2499_m14295_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2499_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14295_MI = 
{
	".ctor", (methodPointerType)&m14295, &t2499_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2499_m14295_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2499_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14296_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m14296, &t2499_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2499_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14297_MI = 
{
	"Dispose", (methodPointerType)&m14297, &t2499_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2499_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14298_MI = 
{
	"MoveNext", (methodPointerType)&m14298, &t2499_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2499_TI;
extern Il2CppType t426_0_0_0;
extern void* RuntimeInvoker_t426 (MethodInfo* method, void* obj, void** args);
MethodInfo m14299_MI = 
{
	"get_Current", (methodPointerType)&m14299, &t2499_TI, &t426_0_0_0, RuntimeInvoker_t426, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2499_MIs[] =
{
	&m14295_MI,
	&m14296_MI,
	&m14297_MI,
	&m14298_MI,
	&m14299_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14296_MI;
extern MethodInfo m14298_MI;
extern MethodInfo m14297_MI;
extern MethodInfo m14299_MI;
static MethodInfo* t2499_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14296_MI,
	&m14298_MI,
	&m14297_MI,
	&m14299_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3591_TI;
static TypeInfo* t2499_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3591_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3591_TI;
static Il2CppInterfaceOffsetPair t2499_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3591_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2499_0_0_0;
extern Il2CppType t2499_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2499_TI;
extern Il2CppGenericClass t2499_GC;
extern TypeInfo t52_TI;
TypeInfo t2499_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2499_MIs, t2499_PIs, t2499_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2499_TI, t2499_ITIs, t2499_VT, &EmptyCustomAttributesCache, &t2499_TI, &t2499_0_0_0, &t2499_1_0_0, t2499_IOs, &t2499_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2499)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4459_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.RectTransform/Axis>
extern MethodInfo m26637_MI;
static PropertyInfo t4459____Count_PropertyInfo = 
{
	&t4459_TI, "Count", &m26637_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26638_MI;
static PropertyInfo t4459____IsReadOnly_PropertyInfo = 
{
	&t4459_TI, "IsReadOnly", &m26638_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4459_PIs[] =
{
	&t4459____Count_PropertyInfo,
	&t4459____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4459_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26637_MI = 
{
	"get_Count", NULL, &t4459_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4459_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26638_MI = 
{
	"get_IsReadOnly", NULL, &t4459_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t426_0_0_0;
static ParameterInfo t4459_m26639_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t426_0_0_0},
};
extern TypeInfo t4459_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26639_MI = 
{
	"Add", NULL, &t4459_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4459_m26639_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4459_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26640_MI = 
{
	"Clear", NULL, &t4459_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t426_0_0_0;
static ParameterInfo t4459_m26641_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t426_0_0_0},
};
extern TypeInfo t4459_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26641_MI = 
{
	"Contains", NULL, &t4459_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4459_m26641_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3223_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4459_m26642_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3223_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4459_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26642_MI = 
{
	"CopyTo", NULL, &t4459_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4459_m26642_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t426_0_0_0;
static ParameterInfo t4459_m26643_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t426_0_0_0},
};
extern TypeInfo t4459_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26643_MI = 
{
	"Remove", NULL, &t4459_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4459_m26643_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4459_MIs[] =
{
	&m26637_MI,
	&m26638_MI,
	&m26639_MI,
	&m26640_MI,
	&m26641_MI,
	&m26642_MI,
	&m26643_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4461_TI;
static TypeInfo* t4459_ITIs[] = 
{
	&t618_TI,
	&t4461_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4459_0_0_0;
extern Il2CppType t4459_1_0_0;
struct t4459;
extern TypeInfo t4459_TI;
extern Il2CppGenericClass t4459_GC;
TypeInfo t4459_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4459_MIs, t4459_PIs, NULL, NULL, NULL, NULL, NULL, &t4459_TI, t4459_ITIs, NULL, &EmptyCustomAttributesCache, &t4459_TI, &t4459_0_0_0, &t4459_1_0_0, NULL, &t4459_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4461_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.RectTransform/Axis>
extern TypeInfo t4461_TI;
extern Il2CppType t3591_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26644_MI = 
{
	"GetEnumerator", NULL, &t4461_TI, &t3591_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4461_MIs[] =
{
	&m26644_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4461_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4461_0_0_0;
extern Il2CppType t4461_1_0_0;
struct t4461;
extern TypeInfo t4461_TI;
extern Il2CppGenericClass t4461_GC;
TypeInfo t4461_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4461_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4461_TI, t4461_ITIs, NULL, &EmptyCustomAttributesCache, &t4461_TI, &t4461_0_0_0, &t4461_1_0_0, NULL, &t4461_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4460_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.RectTransform/Axis>
extern MethodInfo m26645_MI;
extern MethodInfo m26646_MI;
static PropertyInfo t4460____Item_PropertyInfo = 
{
	&t4460_TI, "Item", &m26645_MI, &m26646_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4460_PIs[] =
{
	&t4460____Item_PropertyInfo,
	NULL
};
extern Il2CppType t426_0_0_0;
static ParameterInfo t4460_m26647_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t426_0_0_0},
};
extern TypeInfo t4460_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26647_MI = 
{
	"IndexOf", NULL, &t4460_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4460_m26647_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t426_0_0_0;
static ParameterInfo t4460_m26648_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t426_0_0_0},
};
extern TypeInfo t4460_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26648_MI = 
{
	"Insert", NULL, &t4460_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4460_m26648_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4460_m26649_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4460_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26649_MI = 
{
	"RemoveAt", NULL, &t4460_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4460_m26649_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4460_m26645_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4460_TI;
extern Il2CppType t426_0_0_0;
extern void* RuntimeInvoker_t426_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26645_MI = 
{
	"get_Item", NULL, &t4460_TI, &t426_0_0_0, RuntimeInvoker_t426_t60, t4460_m26645_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t426_0_0_0;
static ParameterInfo t4460_m26646_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t426_0_0_0},
};
extern TypeInfo t4460_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26646_MI = 
{
	"set_Item", NULL, &t4460_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4460_m26646_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4460_MIs[] =
{
	&m26647_MI,
	&m26648_MI,
	&m26649_MI,
	&m26645_MI,
	&m26646_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4459_TI;
extern TypeInfo t4461_TI;
static TypeInfo* t4460_ITIs[] = 
{
	&t618_TI,
	&t4459_TI,
	&t4461_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4460_0_0_0;
extern Il2CppType t4460_1_0_0;
struct t4460;
extern TypeInfo t4460_TI;
extern Il2CppGenericClass t4460_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4460_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4460_MIs, t4460_PIs, NULL, NULL, NULL, NULL, NULL, &t4460_TI, t4460_ITIs, NULL, &t1426__CustomAttributeCache, &t4460_TI, &t4460_0_0_0, &t4460_1_0_0, NULL, &t4460_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3592_TI;

#include "t506.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.SerializePrivateVariables>
extern MethodInfo m26650_MI;
static PropertyInfo t3592____Current_PropertyInfo = 
{
	&t3592_TI, "Current", &m26650_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3592_PIs[] =
{
	&t3592____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3592_TI;
extern Il2CppType t506_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26650_MI = 
{
	"get_Current", NULL, &t3592_TI, &t506_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3592_MIs[] =
{
	&m26650_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3592_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3592_0_0_0;
extern Il2CppType t3592_1_0_0;
struct t3592;
extern TypeInfo t3592_TI;
extern Il2CppGenericClass t3592_GC;
TypeInfo t3592_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3592_MIs, t3592_PIs, NULL, NULL, NULL, NULL, NULL, &t3592_TI, t3592_ITIs, NULL, &EmptyCustomAttributesCache, &t3592_TI, &t3592_0_0_0, &t3592_1_0_0, NULL, &t3592_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2500.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2500_TI;
#include "t2500MD.h"

extern TypeInfo t2500_TI;
extern TypeInfo t506_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14304_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20140_MI;
struct t52;
struct t52;
 t7 * m17147_gshared (t52 * __this, int32_t p0, MethodInfo* method);
#define m17147(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
#define m20140(__this, p0, method) (t506 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m20140_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.SerializePrivateVariables>
extern Il2CppType t52_0_0_1;
FieldInfo t2500_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2500_TI, offsetof(t2500, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2500_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2500_TI, offsetof(t2500, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2500_FIs[] =
{
	&t2500_f0_FieldInfo,
	&t2500_f1_FieldInfo,
	NULL
};
extern MethodInfo m14301_MI;
static PropertyInfo t2500____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2500_TI, "System.Collections.IEnumerator.Current", &m14301_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14304_MI;
static PropertyInfo t2500____Current_PropertyInfo = 
{
	&t2500_TI, "Current", &m14304_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2500_PIs[] =
{
	&t2500____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2500____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2500_m14300_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14300_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2500_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2500_m14300_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2500_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14301_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2500_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2500_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14302_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2500_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2500_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14303_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2500_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2500_TI;
extern Il2CppType t506_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14304_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2500_TI, &t506_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2500_MIs[] =
{
	&m14300_MI,
	&m14301_MI,
	&m14302_MI,
	&m14303_MI,
	&m14304_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14301_MI;
extern MethodInfo m14303_MI;
extern MethodInfo m14302_MI;
extern MethodInfo m14304_MI;
static MethodInfo* t2500_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14301_MI,
	&m14303_MI,
	&m14302_MI,
	&m14304_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3592_TI;
static TypeInfo* t2500_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3592_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3592_TI;
static Il2CppInterfaceOffsetPair t2500_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3592_TI, 7},
};
extern MethodInfo m14304_MI;
extern TypeInfo t506_TI;
extern MethodInfo m20140_MI;
static void* t2500_RGCTXData[3] = 
{
	&m14304_MI,
	&t506_TI,
	&m20140_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2500_0_0_0;
extern Il2CppType t2500_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2500_TI;
extern Il2CppGenericClass t2500_GC;
extern TypeInfo t52_TI;
TypeInfo t2500_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2500_MIs, t2500_PIs, t2500_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2500_TI, t2500_ITIs, t2500_VT, &EmptyCustomAttributesCache, &t2500_TI, &t2500_0_0_0, &t2500_1_0_0, t2500_IOs, &t2500_GC, NULL, NULL, NULL, t2500_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2500)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4462_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.SerializePrivateVariables>
extern MethodInfo m26651_MI;
static PropertyInfo t4462____Count_PropertyInfo = 
{
	&t4462_TI, "Count", &m26651_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26652_MI;
static PropertyInfo t4462____IsReadOnly_PropertyInfo = 
{
	&t4462_TI, "IsReadOnly", &m26652_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4462_PIs[] =
{
	&t4462____Count_PropertyInfo,
	&t4462____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4462_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26651_MI = 
{
	"get_Count", NULL, &t4462_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4462_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26652_MI = 
{
	"get_IsReadOnly", NULL, &t4462_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t506_0_0_0;
static ParameterInfo t4462_m26653_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t506_0_0_0},
};
extern TypeInfo t4462_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26653_MI = 
{
	"Add", NULL, &t4462_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4462_m26653_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4462_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26654_MI = 
{
	"Clear", NULL, &t4462_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t506_0_0_0;
static ParameterInfo t4462_m26655_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t506_0_0_0},
};
extern TypeInfo t4462_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26655_MI = 
{
	"Contains", NULL, &t4462_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4462_m26655_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3224_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4462_m26656_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3224_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4462_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26656_MI = 
{
	"CopyTo", NULL, &t4462_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4462_m26656_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t506_0_0_0;
static ParameterInfo t4462_m26657_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t506_0_0_0},
};
extern TypeInfo t4462_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26657_MI = 
{
	"Remove", NULL, &t4462_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4462_m26657_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4462_MIs[] =
{
	&m26651_MI,
	&m26652_MI,
	&m26653_MI,
	&m26654_MI,
	&m26655_MI,
	&m26656_MI,
	&m26657_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4464_TI;
static TypeInfo* t4462_ITIs[] = 
{
	&t618_TI,
	&t4464_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4462_0_0_0;
extern Il2CppType t4462_1_0_0;
struct t4462;
extern TypeInfo t4462_TI;
extern Il2CppGenericClass t4462_GC;
TypeInfo t4462_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4462_MIs, t4462_PIs, NULL, NULL, NULL, NULL, NULL, &t4462_TI, t4462_ITIs, NULL, &EmptyCustomAttributesCache, &t4462_TI, &t4462_0_0_0, &t4462_1_0_0, NULL, &t4462_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4464_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.SerializePrivateVariables>
extern TypeInfo t4464_TI;
extern Il2CppType t3592_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26658_MI = 
{
	"GetEnumerator", NULL, &t4464_TI, &t3592_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4464_MIs[] =
{
	&m26658_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4464_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4464_0_0_0;
extern Il2CppType t4464_1_0_0;
struct t4464;
extern TypeInfo t4464_TI;
extern Il2CppGenericClass t4464_GC;
TypeInfo t4464_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4464_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4464_TI, t4464_ITIs, NULL, &EmptyCustomAttributesCache, &t4464_TI, &t4464_0_0_0, &t4464_1_0_0, NULL, &t4464_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4463_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.SerializePrivateVariables>
extern MethodInfo m26659_MI;
extern MethodInfo m26660_MI;
static PropertyInfo t4463____Item_PropertyInfo = 
{
	&t4463_TI, "Item", &m26659_MI, &m26660_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4463_PIs[] =
{
	&t4463____Item_PropertyInfo,
	NULL
};
extern Il2CppType t506_0_0_0;
static ParameterInfo t4463_m26661_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t506_0_0_0},
};
extern TypeInfo t4463_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26661_MI = 
{
	"IndexOf", NULL, &t4463_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4463_m26661_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t506_0_0_0;
static ParameterInfo t4463_m26662_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t506_0_0_0},
};
extern TypeInfo t4463_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26662_MI = 
{
	"Insert", NULL, &t4463_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4463_m26662_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4463_m26663_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4463_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26663_MI = 
{
	"RemoveAt", NULL, &t4463_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4463_m26663_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4463_m26659_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4463_TI;
extern Il2CppType t506_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26659_MI = 
{
	"get_Item", NULL, &t4463_TI, &t506_0_0_0, RuntimeInvoker_t7_t60, t4463_m26659_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t506_0_0_0;
static ParameterInfo t4463_m26660_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t506_0_0_0},
};
extern TypeInfo t4463_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26660_MI = 
{
	"set_Item", NULL, &t4463_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4463_m26660_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4463_MIs[] =
{
	&m26661_MI,
	&m26662_MI,
	&m26663_MI,
	&m26659_MI,
	&m26660_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4462_TI;
extern TypeInfo t4464_TI;
static TypeInfo* t4463_ITIs[] = 
{
	&t618_TI,
	&t4462_TI,
	&t4464_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4463_0_0_0;
extern Il2CppType t4463_1_0_0;
struct t4463;
extern TypeInfo t4463_TI;
extern Il2CppGenericClass t4463_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4463_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4463_MIs, t4463_PIs, NULL, NULL, NULL, NULL, NULL, &t4463_TI, t4463_ITIs, NULL, &t1426__CustomAttributeCache, &t4463_TI, &t4463_0_0_0, &t4463_1_0_0, NULL, &t4463_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4465_TI;

#include "t507.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Attribute>
extern MethodInfo m26664_MI;
static PropertyInfo t4465____Count_PropertyInfo = 
{
	&t4465_TI, "Count", &m26664_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26665_MI;
static PropertyInfo t4465____IsReadOnly_PropertyInfo = 
{
	&t4465_TI, "IsReadOnly", &m26665_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4465_PIs[] =
{
	&t4465____Count_PropertyInfo,
	&t4465____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4465_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26664_MI = 
{
	"get_Count", NULL, &t4465_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4465_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26665_MI = 
{
	"get_IsReadOnly", NULL, &t4465_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t507_0_0_0;
static ParameterInfo t4465_m26666_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t507_0_0_0},
};
extern TypeInfo t4465_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26666_MI = 
{
	"Add", NULL, &t4465_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4465_m26666_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4465_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26667_MI = 
{
	"Clear", NULL, &t4465_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t507_0_0_0;
static ParameterInfo t4465_m26668_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t507_0_0_0},
};
extern TypeInfo t4465_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26668_MI = 
{
	"Contains", NULL, &t4465_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4465_m26668_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3021_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4465_m26669_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3021_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4465_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26669_MI = 
{
	"CopyTo", NULL, &t4465_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4465_m26669_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t507_0_0_0;
static ParameterInfo t4465_m26670_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t507_0_0_0},
};
extern TypeInfo t4465_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26670_MI = 
{
	"Remove", NULL, &t4465_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4465_m26670_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4465_MIs[] =
{
	&m26664_MI,
	&m26665_MI,
	&m26666_MI,
	&m26667_MI,
	&m26668_MI,
	&m26669_MI,
	&m26670_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4467_TI;
static TypeInfo* t4465_ITIs[] = 
{
	&t618_TI,
	&t4467_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4465_0_0_0;
extern Il2CppType t4465_1_0_0;
struct t4465;
extern TypeInfo t4465_TI;
extern Il2CppGenericClass t4465_GC;
TypeInfo t4465_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4465_MIs, t4465_PIs, NULL, NULL, NULL, NULL, NULL, &t4465_TI, t4465_ITIs, NULL, &EmptyCustomAttributesCache, &t4465_TI, &t4465_0_0_0, &t4465_1_0_0, NULL, &t4465_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4467_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Attribute>
extern TypeInfo t4467_TI;
extern Il2CppType t3593_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26671_MI = 
{
	"GetEnumerator", NULL, &t4467_TI, &t3593_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4467_MIs[] =
{
	&m26671_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4467_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4467_0_0_0;
extern Il2CppType t4467_1_0_0;
struct t4467;
extern TypeInfo t4467_TI;
extern Il2CppGenericClass t4467_GC;
TypeInfo t4467_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4467_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4467_TI, t4467_ITIs, NULL, &EmptyCustomAttributesCache, &t4467_TI, &t4467_0_0_0, &t4467_1_0_0, NULL, &t4467_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3593_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Attribute>
extern MethodInfo m26672_MI;
static PropertyInfo t3593____Current_PropertyInfo = 
{
	&t3593_TI, "Current", &m26672_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3593_PIs[] =
{
	&t3593____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3593_TI;
extern Il2CppType t507_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26672_MI = 
{
	"get_Current", NULL, &t3593_TI, &t507_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3593_MIs[] =
{
	&m26672_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3593_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3593_0_0_0;
extern Il2CppType t3593_1_0_0;
struct t3593;
extern TypeInfo t3593_TI;
extern Il2CppGenericClass t3593_GC;
TypeInfo t3593_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3593_MIs, t3593_PIs, NULL, NULL, NULL, NULL, NULL, &t3593_TI, t3593_ITIs, NULL, &EmptyCustomAttributesCache, &t3593_TI, &t3593_0_0_0, &t3593_1_0_0, NULL, &t3593_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2501.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2501_TI;
#include "t2501MD.h"

extern TypeInfo t2501_TI;
extern TypeInfo t507_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14309_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20151_MI;
struct t52;
#define m20151(__this, p0, method) (t507 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m20151_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Attribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2501_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2501_TI, offsetof(t2501, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2501_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2501_TI, offsetof(t2501, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2501_FIs[] =
{
	&t2501_f0_FieldInfo,
	&t2501_f1_FieldInfo,
	NULL
};
extern MethodInfo m14306_MI;
static PropertyInfo t2501____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2501_TI, "System.Collections.IEnumerator.Current", &m14306_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14309_MI;
static PropertyInfo t2501____Current_PropertyInfo = 
{
	&t2501_TI, "Current", &m14309_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2501_PIs[] =
{
	&t2501____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2501____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2501_m14305_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2501_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14305_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2501_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2501_m14305_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2501_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14306_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2501_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2501_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14307_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2501_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2501_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14308_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2501_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2501_TI;
extern Il2CppType t507_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14309_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2501_TI, &t507_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2501_MIs[] =
{
	&m14305_MI,
	&m14306_MI,
	&m14307_MI,
	&m14308_MI,
	&m14309_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14306_MI;
extern MethodInfo m14308_MI;
extern MethodInfo m14307_MI;
extern MethodInfo m14309_MI;
static MethodInfo* t2501_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14306_MI,
	&m14308_MI,
	&m14307_MI,
	&m14309_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3593_TI;
static TypeInfo* t2501_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3593_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3593_TI;
static Il2CppInterfaceOffsetPair t2501_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3593_TI, 7},
};
extern MethodInfo m14309_MI;
extern TypeInfo t507_TI;
extern MethodInfo m20151_MI;
static void* t2501_RGCTXData[3] = 
{
	&m14309_MI,
	&t507_TI,
	&m20151_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2501_0_0_0;
extern Il2CppType t2501_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2501_TI;
extern Il2CppGenericClass t2501_GC;
extern TypeInfo t52_TI;
TypeInfo t2501_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2501_MIs, t2501_PIs, t2501_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2501_TI, t2501_ITIs, t2501_VT, &EmptyCustomAttributesCache, &t2501_TI, &t2501_0_0_0, &t2501_1_0_0, t2501_IOs, &t2501_GC, NULL, NULL, NULL, t2501_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2501)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4466_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Attribute>
extern MethodInfo m26673_MI;
extern MethodInfo m26674_MI;
static PropertyInfo t4466____Item_PropertyInfo = 
{
	&t4466_TI, "Item", &m26673_MI, &m26674_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4466_PIs[] =
{
	&t4466____Item_PropertyInfo,
	NULL
};
extern Il2CppType t507_0_0_0;
static ParameterInfo t4466_m26675_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t507_0_0_0},
};
extern TypeInfo t4466_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26675_MI = 
{
	"IndexOf", NULL, &t4466_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4466_m26675_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t507_0_0_0;
static ParameterInfo t4466_m26676_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t507_0_0_0},
};
extern TypeInfo t4466_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26676_MI = 
{
	"Insert", NULL, &t4466_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4466_m26676_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4466_m26677_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4466_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26677_MI = 
{
	"RemoveAt", NULL, &t4466_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4466_m26677_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4466_m26673_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4466_TI;
extern Il2CppType t507_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26673_MI = 
{
	"get_Item", NULL, &t4466_TI, &t507_0_0_0, RuntimeInvoker_t7_t60, t4466_m26673_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t507_0_0_0;
static ParameterInfo t4466_m26674_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t507_0_0_0},
};
extern TypeInfo t4466_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26674_MI = 
{
	"set_Item", NULL, &t4466_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4466_m26674_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4466_MIs[] =
{
	&m26675_MI,
	&m26676_MI,
	&m26677_MI,
	&m26673_MI,
	&m26674_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4465_TI;
extern TypeInfo t4467_TI;
static TypeInfo* t4466_ITIs[] = 
{
	&t618_TI,
	&t4465_TI,
	&t4467_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4466_0_0_0;
extern Il2CppType t4466_1_0_0;
struct t4466;
extern TypeInfo t4466_TI;
extern Il2CppGenericClass t4466_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4466_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4466_MIs, t4466_PIs, NULL, NULL, NULL, NULL, NULL, &t4466_TI, t4466_ITIs, NULL, &t1426__CustomAttributeCache, &t4466_TI, &t4466_0_0_0, &t4466_1_0_0, NULL, &t4466_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4468_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Attribute>
extern MethodInfo m26678_MI;
static PropertyInfo t4468____Count_PropertyInfo = 
{
	&t4468_TI, "Count", &m26678_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26679_MI;
static PropertyInfo t4468____IsReadOnly_PropertyInfo = 
{
	&t4468_TI, "IsReadOnly", &m26679_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4468_PIs[] =
{
	&t4468____Count_PropertyInfo,
	&t4468____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4468_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26678_MI = 
{
	"get_Count", NULL, &t4468_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4468_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26679_MI = 
{
	"get_IsReadOnly", NULL, &t4468_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t619_0_0_0;
static ParameterInfo t4468_m26680_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t619_0_0_0},
};
extern TypeInfo t4468_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26680_MI = 
{
	"Add", NULL, &t4468_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4468_m26680_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4468_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26681_MI = 
{
	"Clear", NULL, &t4468_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t619_0_0_0;
static ParameterInfo t4468_m26682_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t619_0_0_0},
};
extern TypeInfo t4468_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26682_MI = 
{
	"Contains", NULL, &t4468_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4468_m26682_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3022_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4468_m26683_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3022_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4468_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26683_MI = 
{
	"CopyTo", NULL, &t4468_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4468_m26683_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t619_0_0_0;
static ParameterInfo t4468_m26684_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t619_0_0_0},
};
extern TypeInfo t4468_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26684_MI = 
{
	"Remove", NULL, &t4468_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4468_m26684_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4468_MIs[] =
{
	&m26678_MI,
	&m26679_MI,
	&m26680_MI,
	&m26681_MI,
	&m26682_MI,
	&m26683_MI,
	&m26684_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4470_TI;
static TypeInfo* t4468_ITIs[] = 
{
	&t618_TI,
	&t4470_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4468_0_0_0;
extern Il2CppType t4468_1_0_0;
struct t4468;
extern TypeInfo t4468_TI;
extern Il2CppGenericClass t4468_GC;
TypeInfo t4468_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4468_MIs, t4468_PIs, NULL, NULL, NULL, NULL, NULL, &t4468_TI, t4468_ITIs, NULL, &EmptyCustomAttributesCache, &t4468_TI, &t4468_0_0_0, &t4468_1_0_0, NULL, &t4468_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4470_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._Attribute>
extern TypeInfo t4470_TI;
extern Il2CppType t3594_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26685_MI = 
{
	"GetEnumerator", NULL, &t4470_TI, &t3594_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4470_MIs[] =
{
	&m26685_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4470_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4470_0_0_0;
extern Il2CppType t4470_1_0_0;
struct t4470;
extern TypeInfo t4470_TI;
extern Il2CppGenericClass t4470_GC;
TypeInfo t4470_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4470_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4470_TI, t4470_ITIs, NULL, &EmptyCustomAttributesCache, &t4470_TI, &t4470_0_0_0, &t4470_1_0_0, NULL, &t4470_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3594_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._Attribute>
extern MethodInfo m26686_MI;
static PropertyInfo t3594____Current_PropertyInfo = 
{
	&t3594_TI, "Current", &m26686_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3594_PIs[] =
{
	&t3594____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3594_TI;
extern Il2CppType t619_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26686_MI = 
{
	"get_Current", NULL, &t3594_TI, &t619_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3594_MIs[] =
{
	&m26686_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3594_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3594_0_0_0;
extern Il2CppType t3594_1_0_0;
struct t3594;
extern TypeInfo t3594_TI;
extern Il2CppGenericClass t3594_GC;
TypeInfo t3594_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3594_MIs, t3594_PIs, NULL, NULL, NULL, NULL, NULL, &t3594_TI, t3594_ITIs, NULL, &EmptyCustomAttributesCache, &t3594_TI, &t3594_0_0_0, &t3594_1_0_0, NULL, &t3594_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2502.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2502_TI;
#include "t2502MD.h"

extern TypeInfo t2502_TI;
extern TypeInfo t619_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14314_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20162_MI;
struct t52;
#define m20162(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m20162_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Attribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2502_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2502_TI, offsetof(t2502, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2502_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2502_TI, offsetof(t2502, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2502_FIs[] =
{
	&t2502_f0_FieldInfo,
	&t2502_f1_FieldInfo,
	NULL
};
extern MethodInfo m14311_MI;
static PropertyInfo t2502____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2502_TI, "System.Collections.IEnumerator.Current", &m14311_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14314_MI;
static PropertyInfo t2502____Current_PropertyInfo = 
{
	&t2502_TI, "Current", &m14314_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2502_PIs[] =
{
	&t2502____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2502____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2502_m14310_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14310_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2502_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2502_m14310_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2502_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14311_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2502_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2502_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14312_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2502_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2502_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14313_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2502_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2502_TI;
extern Il2CppType t619_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14314_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2502_TI, &t619_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2502_MIs[] =
{
	&m14310_MI,
	&m14311_MI,
	&m14312_MI,
	&m14313_MI,
	&m14314_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14311_MI;
extern MethodInfo m14313_MI;
extern MethodInfo m14312_MI;
extern MethodInfo m14314_MI;
static MethodInfo* t2502_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14311_MI,
	&m14313_MI,
	&m14312_MI,
	&m14314_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3594_TI;
static TypeInfo* t2502_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3594_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3594_TI;
static Il2CppInterfaceOffsetPair t2502_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3594_TI, 7},
};
extern MethodInfo m14314_MI;
extern TypeInfo t619_TI;
extern MethodInfo m20162_MI;
static void* t2502_RGCTXData[3] = 
{
	&m14314_MI,
	&t619_TI,
	&m20162_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2502_0_0_0;
extern Il2CppType t2502_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2502_TI;
extern Il2CppGenericClass t2502_GC;
extern TypeInfo t52_TI;
TypeInfo t2502_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2502_MIs, t2502_PIs, t2502_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2502_TI, t2502_ITIs, t2502_VT, &EmptyCustomAttributesCache, &t2502_TI, &t2502_0_0_0, &t2502_1_0_0, t2502_IOs, &t2502_GC, NULL, NULL, NULL, t2502_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2502)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4469_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._Attribute>
extern MethodInfo m26687_MI;
extern MethodInfo m26688_MI;
static PropertyInfo t4469____Item_PropertyInfo = 
{
	&t4469_TI, "Item", &m26687_MI, &m26688_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4469_PIs[] =
{
	&t4469____Item_PropertyInfo,
	NULL
};
extern Il2CppType t619_0_0_0;
static ParameterInfo t4469_m26689_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t619_0_0_0},
};
extern TypeInfo t4469_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26689_MI = 
{
	"IndexOf", NULL, &t4469_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4469_m26689_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t619_0_0_0;
static ParameterInfo t4469_m26690_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t619_0_0_0},
};
extern TypeInfo t4469_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26690_MI = 
{
	"Insert", NULL, &t4469_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4469_m26690_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4469_m26691_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4469_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26691_MI = 
{
	"RemoveAt", NULL, &t4469_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4469_m26691_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4469_m26687_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4469_TI;
extern Il2CppType t619_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26687_MI = 
{
	"get_Item", NULL, &t4469_TI, &t619_0_0_0, RuntimeInvoker_t7_t60, t4469_m26687_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t619_0_0_0;
static ParameterInfo t4469_m26688_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t619_0_0_0},
};
extern TypeInfo t4469_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26688_MI = 
{
	"set_Item", NULL, &t4469_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4469_m26688_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4469_MIs[] =
{
	&m26689_MI,
	&m26690_MI,
	&m26691_MI,
	&m26687_MI,
	&m26688_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4468_TI;
extern TypeInfo t4470_TI;
static TypeInfo* t4469_ITIs[] = 
{
	&t618_TI,
	&t4468_TI,
	&t4470_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4469_0_0_0;
extern Il2CppType t4469_1_0_0;
struct t4469;
extern TypeInfo t4469_TI;
extern Il2CppGenericClass t4469_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4469_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4469_MIs, t4469_PIs, NULL, NULL, NULL, NULL, NULL, &t4469_TI, t4469_ITIs, NULL, &t1426__CustomAttributeCache, &t4469_TI, &t4469_0_0_0, &t4469_1_0_0, NULL, &t4469_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3595_TI;

#include "t91.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.SerializeField>
extern MethodInfo m26692_MI;
static PropertyInfo t3595____Current_PropertyInfo = 
{
	&t3595_TI, "Current", &m26692_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3595_PIs[] =
{
	&t3595____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3595_TI;
extern Il2CppType t91_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26692_MI = 
{
	"get_Current", NULL, &t3595_TI, &t91_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3595_MIs[] =
{
	&m26692_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3595_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3595_0_0_0;
extern Il2CppType t3595_1_0_0;
struct t3595;
extern TypeInfo t3595_TI;
extern Il2CppGenericClass t3595_GC;
TypeInfo t3595_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3595_MIs, t3595_PIs, NULL, NULL, NULL, NULL, NULL, &t3595_TI, t3595_ITIs, NULL, &EmptyCustomAttributesCache, &t3595_TI, &t3595_0_0_0, &t3595_1_0_0, NULL, &t3595_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2503.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2503_TI;
#include "t2503MD.h"

extern TypeInfo t2503_TI;
extern TypeInfo t91_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14319_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20173_MI;
struct t52;
#define m20173(__this, p0, method) (t91 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m20173_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.SerializeField>
extern Il2CppType t52_0_0_1;
FieldInfo t2503_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2503_TI, offsetof(t2503, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2503_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2503_TI, offsetof(t2503, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2503_FIs[] =
{
	&t2503_f0_FieldInfo,
	&t2503_f1_FieldInfo,
	NULL
};
extern MethodInfo m14316_MI;
static PropertyInfo t2503____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2503_TI, "System.Collections.IEnumerator.Current", &m14316_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14319_MI;
static PropertyInfo t2503____Current_PropertyInfo = 
{
	&t2503_TI, "Current", &m14319_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2503_PIs[] =
{
	&t2503____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2503____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2503_m14315_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2503_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14315_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2503_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2503_m14315_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2503_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14316_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2503_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2503_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14317_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2503_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2503_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14318_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2503_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2503_TI;
extern Il2CppType t91_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14319_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2503_TI, &t91_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2503_MIs[] =
{
	&m14315_MI,
	&m14316_MI,
	&m14317_MI,
	&m14318_MI,
	&m14319_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14316_MI;
extern MethodInfo m14318_MI;
extern MethodInfo m14317_MI;
extern MethodInfo m14319_MI;
static MethodInfo* t2503_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14316_MI,
	&m14318_MI,
	&m14317_MI,
	&m14319_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3595_TI;
static TypeInfo* t2503_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3595_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3595_TI;
static Il2CppInterfaceOffsetPair t2503_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3595_TI, 7},
};
extern MethodInfo m14319_MI;
extern TypeInfo t91_TI;
extern MethodInfo m20173_MI;
static void* t2503_RGCTXData[3] = 
{
	&m14319_MI,
	&t91_TI,
	&m20173_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2503_0_0_0;
extern Il2CppType t2503_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2503_TI;
extern Il2CppGenericClass t2503_GC;
extern TypeInfo t52_TI;
TypeInfo t2503_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2503_MIs, t2503_PIs, t2503_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2503_TI, t2503_ITIs, t2503_VT, &EmptyCustomAttributesCache, &t2503_TI, &t2503_0_0_0, &t2503_1_0_0, t2503_IOs, &t2503_GC, NULL, NULL, NULL, t2503_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2503)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4471_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.SerializeField>
extern MethodInfo m26693_MI;
static PropertyInfo t4471____Count_PropertyInfo = 
{
	&t4471_TI, "Count", &m26693_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26694_MI;
static PropertyInfo t4471____IsReadOnly_PropertyInfo = 
{
	&t4471_TI, "IsReadOnly", &m26694_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4471_PIs[] =
{
	&t4471____Count_PropertyInfo,
	&t4471____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4471_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26693_MI = 
{
	"get_Count", NULL, &t4471_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4471_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26694_MI = 
{
	"get_IsReadOnly", NULL, &t4471_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t91_0_0_0;
static ParameterInfo t4471_m26695_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
};
extern TypeInfo t4471_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26695_MI = 
{
	"Add", NULL, &t4471_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4471_m26695_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4471_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26696_MI = 
{
	"Clear", NULL, &t4471_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t91_0_0_0;
static ParameterInfo t4471_m26697_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
};
extern TypeInfo t4471_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26697_MI = 
{
	"Contains", NULL, &t4471_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4471_m26697_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3225_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4471_m26698_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3225_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4471_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26698_MI = 
{
	"CopyTo", NULL, &t4471_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4471_m26698_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t91_0_0_0;
static ParameterInfo t4471_m26699_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
};
extern TypeInfo t4471_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26699_MI = 
{
	"Remove", NULL, &t4471_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4471_m26699_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4471_MIs[] =
{
	&m26693_MI,
	&m26694_MI,
	&m26695_MI,
	&m26696_MI,
	&m26697_MI,
	&m26698_MI,
	&m26699_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4473_TI;
static TypeInfo* t4471_ITIs[] = 
{
	&t618_TI,
	&t4473_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4471_0_0_0;
extern Il2CppType t4471_1_0_0;
struct t4471;
extern TypeInfo t4471_TI;
extern Il2CppGenericClass t4471_GC;
TypeInfo t4471_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4471_MIs, t4471_PIs, NULL, NULL, NULL, NULL, NULL, &t4471_TI, t4471_ITIs, NULL, &EmptyCustomAttributesCache, &t4471_TI, &t4471_0_0_0, &t4471_1_0_0, NULL, &t4471_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4473_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.SerializeField>
extern TypeInfo t4473_TI;
extern Il2CppType t3595_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26700_MI = 
{
	"GetEnumerator", NULL, &t4473_TI, &t3595_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4473_MIs[] =
{
	&m26700_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4473_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4473_0_0_0;
extern Il2CppType t4473_1_0_0;
struct t4473;
extern TypeInfo t4473_TI;
extern Il2CppGenericClass t4473_GC;
TypeInfo t4473_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4473_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4473_TI, t4473_ITIs, NULL, &EmptyCustomAttributesCache, &t4473_TI, &t4473_0_0_0, &t4473_1_0_0, NULL, &t4473_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4472_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.SerializeField>
extern MethodInfo m26701_MI;
extern MethodInfo m26702_MI;
static PropertyInfo t4472____Item_PropertyInfo = 
{
	&t4472_TI, "Item", &m26701_MI, &m26702_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4472_PIs[] =
{
	&t4472____Item_PropertyInfo,
	NULL
};
extern Il2CppType t91_0_0_0;
static ParameterInfo t4472_m26703_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
};
extern TypeInfo t4472_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26703_MI = 
{
	"IndexOf", NULL, &t4472_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4472_m26703_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t91_0_0_0;
static ParameterInfo t4472_m26704_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
};
extern TypeInfo t4472_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26704_MI = 
{
	"Insert", NULL, &t4472_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4472_m26704_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4472_m26705_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4472_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26705_MI = 
{
	"RemoveAt", NULL, &t4472_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4472_m26705_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4472_m26701_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4472_TI;
extern Il2CppType t91_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26701_MI = 
{
	"get_Item", NULL, &t4472_TI, &t91_0_0_0, RuntimeInvoker_t7_t60, t4472_m26701_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t91_0_0_0;
static ParameterInfo t4472_m26702_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
};
extern TypeInfo t4472_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26702_MI = 
{
	"set_Item", NULL, &t4472_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4472_m26702_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4472_MIs[] =
{
	&m26703_MI,
	&m26704_MI,
	&m26705_MI,
	&m26701_MI,
	&m26702_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4471_TI;
extern TypeInfo t4473_TI;
static TypeInfo* t4472_ITIs[] = 
{
	&t618_TI,
	&t4471_TI,
	&t4473_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4472_0_0_0;
extern Il2CppType t4472_1_0_0;
struct t4472;
extern TypeInfo t4472_TI;
extern Il2CppGenericClass t4472_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4472_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4472_MIs, t4472_PIs, NULL, NULL, NULL, NULL, NULL, &t4472_TI, t4472_ITIs, NULL, &t1426__CustomAttributeCache, &t4472_TI, &t4472_0_0_0, &t4472_1_0_0, NULL, &t4472_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3596_TI;

#include "t508.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Shader>
extern MethodInfo m26706_MI;
static PropertyInfo t3596____Current_PropertyInfo = 
{
	&t3596_TI, "Current", &m26706_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3596_PIs[] =
{
	&t3596____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3596_TI;
extern Il2CppType t508_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26706_MI = 
{
	"get_Current", NULL, &t3596_TI, &t508_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3596_MIs[] =
{
	&m26706_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3596_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3596_0_0_0;
extern Il2CppType t3596_1_0_0;
struct t3596;
extern TypeInfo t3596_TI;
extern Il2CppGenericClass t3596_GC;
TypeInfo t3596_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3596_MIs, t3596_PIs, NULL, NULL, NULL, NULL, NULL, &t3596_TI, t3596_ITIs, NULL, &EmptyCustomAttributesCache, &t3596_TI, &t3596_0_0_0, &t3596_1_0_0, NULL, &t3596_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2504.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2504_TI;
#include "t2504MD.h"

extern TypeInfo t2504_TI;
extern TypeInfo t508_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14324_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20184_MI;
struct t52;
#define m20184(__this, p0, method) (t508 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m20184_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Shader>
extern Il2CppType t52_0_0_1;
FieldInfo t2504_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2504_TI, offsetof(t2504, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2504_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2504_TI, offsetof(t2504, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2504_FIs[] =
{
	&t2504_f0_FieldInfo,
	&t2504_f1_FieldInfo,
	NULL
};
extern MethodInfo m14321_MI;
static PropertyInfo t2504____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2504_TI, "System.Collections.IEnumerator.Current", &m14321_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14324_MI;
static PropertyInfo t2504____Current_PropertyInfo = 
{
	&t2504_TI, "Current", &m14324_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2504_PIs[] =
{
	&t2504____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2504____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2504_m14320_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2504_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14320_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2504_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2504_m14320_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2504_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14321_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2504_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2504_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14322_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2504_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2504_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14323_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2504_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2504_TI;
extern Il2CppType t508_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14324_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2504_TI, &t508_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2504_MIs[] =
{
	&m14320_MI,
	&m14321_MI,
	&m14322_MI,
	&m14323_MI,
	&m14324_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14321_MI;
extern MethodInfo m14323_MI;
extern MethodInfo m14322_MI;
extern MethodInfo m14324_MI;
static MethodInfo* t2504_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14321_MI,
	&m14323_MI,
	&m14322_MI,
	&m14324_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3596_TI;
static TypeInfo* t2504_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3596_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3596_TI;
static Il2CppInterfaceOffsetPair t2504_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3596_TI, 7},
};
extern MethodInfo m14324_MI;
extern TypeInfo t508_TI;
extern MethodInfo m20184_MI;
static void* t2504_RGCTXData[3] = 
{
	&m14324_MI,
	&t508_TI,
	&m20184_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2504_0_0_0;
extern Il2CppType t2504_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2504_TI;
extern Il2CppGenericClass t2504_GC;
extern TypeInfo t52_TI;
TypeInfo t2504_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2504_MIs, t2504_PIs, t2504_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2504_TI, t2504_ITIs, t2504_VT, &EmptyCustomAttributesCache, &t2504_TI, &t2504_0_0_0, &t2504_1_0_0, t2504_IOs, &t2504_GC, NULL, NULL, NULL, t2504_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2504)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4474_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Shader>
extern MethodInfo m26707_MI;
static PropertyInfo t4474____Count_PropertyInfo = 
{
	&t4474_TI, "Count", &m26707_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26708_MI;
static PropertyInfo t4474____IsReadOnly_PropertyInfo = 
{
	&t4474_TI, "IsReadOnly", &m26708_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4474_PIs[] =
{
	&t4474____Count_PropertyInfo,
	&t4474____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4474_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26707_MI = 
{
	"get_Count", NULL, &t4474_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4474_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26708_MI = 
{
	"get_IsReadOnly", NULL, &t4474_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t508_0_0_0;
static ParameterInfo t4474_m26709_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
};
extern TypeInfo t4474_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26709_MI = 
{
	"Add", NULL, &t4474_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4474_m26709_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4474_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26710_MI = 
{
	"Clear", NULL, &t4474_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t508_0_0_0;
static ParameterInfo t4474_m26711_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
};
extern TypeInfo t4474_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26711_MI = 
{
	"Contains", NULL, &t4474_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4474_m26711_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3226_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4474_m26712_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3226_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4474_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26712_MI = 
{
	"CopyTo", NULL, &t4474_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4474_m26712_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t508_0_0_0;
static ParameterInfo t4474_m26713_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
};
extern TypeInfo t4474_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26713_MI = 
{
	"Remove", NULL, &t4474_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4474_m26713_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4474_MIs[] =
{
	&m26707_MI,
	&m26708_MI,
	&m26709_MI,
	&m26710_MI,
	&m26711_MI,
	&m26712_MI,
	&m26713_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4476_TI;
static TypeInfo* t4474_ITIs[] = 
{
	&t618_TI,
	&t4476_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4474_0_0_0;
extern Il2CppType t4474_1_0_0;
struct t4474;
extern TypeInfo t4474_TI;
extern Il2CppGenericClass t4474_GC;
TypeInfo t4474_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4474_MIs, t4474_PIs, NULL, NULL, NULL, NULL, NULL, &t4474_TI, t4474_ITIs, NULL, &EmptyCustomAttributesCache, &t4474_TI, &t4474_0_0_0, &t4474_1_0_0, NULL, &t4474_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4476_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Shader>
extern TypeInfo t4476_TI;
extern Il2CppType t3596_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26714_MI = 
{
	"GetEnumerator", NULL, &t4476_TI, &t3596_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4476_MIs[] =
{
	&m26714_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4476_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4476_0_0_0;
extern Il2CppType t4476_1_0_0;
struct t4476;
extern TypeInfo t4476_TI;
extern Il2CppGenericClass t4476_GC;
TypeInfo t4476_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4476_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4476_TI, t4476_ITIs, NULL, &EmptyCustomAttributesCache, &t4476_TI, &t4476_0_0_0, &t4476_1_0_0, NULL, &t4476_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4475_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Shader>
extern MethodInfo m26715_MI;
extern MethodInfo m26716_MI;
static PropertyInfo t4475____Item_PropertyInfo = 
{
	&t4475_TI, "Item", &m26715_MI, &m26716_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4475_PIs[] =
{
	&t4475____Item_PropertyInfo,
	NULL
};
extern Il2CppType t508_0_0_0;
static ParameterInfo t4475_m26717_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
};
extern TypeInfo t4475_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26717_MI = 
{
	"IndexOf", NULL, &t4475_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4475_m26717_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t508_0_0_0;
static ParameterInfo t4475_m26718_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
};
extern TypeInfo t4475_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26718_MI = 
{
	"Insert", NULL, &t4475_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4475_m26718_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4475_m26719_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4475_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26719_MI = 
{
	"RemoveAt", NULL, &t4475_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4475_m26719_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4475_m26715_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4475_TI;
extern Il2CppType t508_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26715_MI = 
{
	"get_Item", NULL, &t4475_TI, &t508_0_0_0, RuntimeInvoker_t7_t60, t4475_m26715_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t508_0_0_0;
static ParameterInfo t4475_m26716_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
};
extern TypeInfo t4475_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26716_MI = 
{
	"set_Item", NULL, &t4475_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4475_m26716_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4475_MIs[] =
{
	&m26717_MI,
	&m26718_MI,
	&m26719_MI,
	&m26715_MI,
	&m26716_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4474_TI;
extern TypeInfo t4476_TI;
static TypeInfo* t4475_ITIs[] = 
{
	&t618_TI,
	&t4474_TI,
	&t4476_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4475_0_0_0;
extern Il2CppType t4475_1_0_0;
struct t4475;
extern TypeInfo t4475_TI;
extern Il2CppGenericClass t4475_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4475_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4475_MIs, t4475_PIs, NULL, NULL, NULL, NULL, NULL, &t4475_TI, t4475_ITIs, NULL, &t1426__CustomAttributeCache, &t4475_TI, &t4475_0_0_0, &t4475_1_0_0, NULL, &t4475_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2505.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2505_TI;
#include "t2505MD.h"

#include "t2506.h"
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t2505_TI;
extern TypeInfo t508_TI;
extern TypeInfo t2506_TI;
extern TypeInfo t53_TI;
#include "t2506MD.h"
extern MethodInfo m14327_MI;
extern MethodInfo m14329_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Shader>
extern Il2CppType t350_0_0_33;
FieldInfo t2505_f1_FieldInfo = 
{
	"m_Arg1", &t350_0_0_33, &t2505_TI, offsetof(t2505, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2505_FIs[] =
{
	&t2505_f1_FieldInfo,
	NULL
};
extern Il2CppType t72_0_0_0;
extern Il2CppType t573_0_0_0;
extern Il2CppType t508_0_0_0;
static ParameterInfo t2505_m14325_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t72_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
};
extern TypeInfo t2505_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14325_MI = 
{
	".ctor", (methodPointerType)&m8007_gshared, &t2505_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7_t7, t2505_m14325_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2505_m14326_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2505_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14326_MI = 
{
	"Invoke", (methodPointerType)&m8009_gshared, &t2505_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2505_m14326_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2505_MIs[] =
{
	&m14325_MI,
	&m14326_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14326_MI;
extern MethodInfo m14330_MI;
static MethodInfo* t2505_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14326_MI,
	&m14330_MI,
};
extern Il2CppType t2507_0_0_0;
extern TypeInfo t2507_TI;
extern MethodInfo m20194_MI;
extern TypeInfo t508_TI;
extern MethodInfo m14332_MI;
extern MethodInfo m14327_MI;
extern TypeInfo t508_TI;
extern MethodInfo m14329_MI;
static void* t2505_RGCTXData[8] = 
{
	(void*)&t2507_0_0_0,
	&t2507_TI,
	&m20194_MI,
	&t508_TI,
	&m14332_MI,
	&m14327_MI,
	&t508_TI,
	&m14329_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2505_0_0_0;
extern Il2CppType t2505_1_0_0;
extern TypeInfo t2506_TI;
struct t2505;
extern TypeInfo t2505_TI;
extern Il2CppGenericClass t2505_GC;
TypeInfo t2505_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2505_MIs, NULL, t2505_FIs, NULL, &t2506_TI, NULL, NULL, &t2505_TI, NULL, t2505_VT, &EmptyCustomAttributesCache, &t2505_TI, &t2505_0_0_0, &t2505_1_0_0, NULL, &t2505_GC, NULL, NULL, NULL, t2505_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2505), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2506_TI;

#include "t2507.h"
extern TypeInfo t2506_TI;
extern TypeInfo t2507_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern TypeInfo t508_TI;
extern TypeInfo t53_TI;
#include "t2507MD.h"
extern Il2CppType t2507_0_0_0;
extern MethodInfo m2910_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3073_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m20194_MI;
extern MethodInfo m2911_MI;
extern MethodInfo m14332_MI;
extern MethodInfo m3069_MI;
extern MethodInfo m3067_MI;
struct t572;
#define m20194(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
extern MethodInfo m20194_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Shader>
extern Il2CppType t2507_0_0_1;
FieldInfo t2506_f0_FieldInfo = 
{
	"Delegate", &t2507_0_0_1, &t2506_TI, offsetof(t2506, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2506_FIs[] =
{
	&t2506_f0_FieldInfo,
	NULL
};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2506_m14327_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2506_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14327_MI = 
{
	".ctor", (methodPointerType)&m8010_gshared, &t2506_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t2506_m14327_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2507_0_0_0;
static ParameterInfo t2506_m14328_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2507_0_0_0},
};
extern TypeInfo t2506_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14328_MI = 
{
	".ctor", (methodPointerType)&m8011_gshared, &t2506_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2506_m14328_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2506_m14329_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2506_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14329_MI = 
{
	"Invoke", (methodPointerType)&m8012_gshared, &t2506_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2506_m14329_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2506_m14330_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2506_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14330_MI = 
{
	"Find", (methodPointerType)&m8013_gshared, &t2506_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2506_m14330_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2506_MIs[] =
{
	&m14327_MI,
	&m14328_MI,
	&m14329_MI,
	&m14330_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14329_MI;
extern MethodInfo m14330_MI;
static MethodInfo* t2506_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14329_MI,
	&m14330_MI,
};
extern Il2CppType t2507_0_0_0;
extern TypeInfo t2507_TI;
extern MethodInfo m20194_MI;
extern TypeInfo t508_TI;
extern MethodInfo m14332_MI;
static void* t2506_RGCTXData[5] = 
{
	(void*)&t2507_0_0_0,
	&t2507_TI,
	&m20194_MI,
	&t508_TI,
	&m14332_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2506_0_0_0;
extern Il2CppType t2506_1_0_0;
extern TypeInfo t572_TI;
struct t2506;
extern TypeInfo t2506_TI;
extern Il2CppGenericClass t2506_GC;
TypeInfo t2506_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2506_MIs, NULL, t2506_FIs, NULL, &t572_TI, NULL, NULL, &t2506_TI, NULL, t2506_VT, &EmptyCustomAttributesCache, &t2506_TI, &t2506_0_0_0, &t2506_1_0_0, NULL, &t2506_GC, NULL, NULL, NULL, t2506_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2506), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2507_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Shader>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2507_m14331_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2507_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m14331_MI = 
{
	".ctor", (methodPointerType)&m8014_gshared, &t2507_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2507_m14331_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t508_0_0_0;
static ParameterInfo t2507_m14332_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
};
extern TypeInfo t2507_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14332_MI = 
{
	"Invoke", (methodPointerType)&m8015_gshared, &t2507_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2507_m14332_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t508_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2507_m14333_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t508_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2507_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14333_MI = 
{
	"BeginInvoke", (methodPointerType)&m8016_gshared, &t2507_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7, t2507_m14333_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2507_m14334_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2507_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14334_MI = 
{
	"EndInvoke", (methodPointerType)&m8017_gshared, &t2507_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2507_m14334_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2507_MIs[] =
{
	&m14331_MI,
	&m14332_MI,
	&m14333_MI,
	&m14334_MI,
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
extern MethodInfo m14332_MI;
extern MethodInfo m14333_MI;
extern MethodInfo m14334_MI;
static MethodInfo* t2507_VT[] =
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
	&m14332_MI,
	&m14333_MI,
	&m14334_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2507_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2507_0_0_0;
extern Il2CppType t2507_1_0_0;
extern TypeInfo t245_TI;
struct t2507;
extern TypeInfo t2507_TI;
extern Il2CppGenericClass t2507_GC;
TypeInfo t2507_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2507_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t2507_TI, NULL, t2507_VT, &EmptyCustomAttributesCache, &t2507_TI, &t2507_0_0_0, &t2507_1_0_0, t2507_IOs, &t2507_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2507), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3597_TI;

#include "t208.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Material>
extern MethodInfo m26720_MI;
static PropertyInfo t3597____Current_PropertyInfo = 
{
	&t3597_TI, "Current", &m26720_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3597_PIs[] =
{
	&t3597____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3597_TI;
extern Il2CppType t208_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26720_MI = 
{
	"get_Current", NULL, &t3597_TI, &t208_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3597_MIs[] =
{
	&m26720_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3597_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3597_0_0_0;
extern Il2CppType t3597_1_0_0;
struct t3597;
extern TypeInfo t3597_TI;
extern Il2CppGenericClass t3597_GC;
TypeInfo t3597_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3597_MIs, t3597_PIs, NULL, NULL, NULL, NULL, NULL, &t3597_TI, t3597_ITIs, NULL, &EmptyCustomAttributesCache, &t3597_TI, &t3597_0_0_0, &t3597_1_0_0, NULL, &t3597_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2508.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2508_TI;
#include "t2508MD.h"

extern TypeInfo t2508_TI;
extern TypeInfo t208_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14339_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20196_MI;
struct t52;
#define m20196(__this, p0, method) (t208 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m20196_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Material>
extern Il2CppType t52_0_0_1;
FieldInfo t2508_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2508_TI, offsetof(t2508, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2508_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2508_TI, offsetof(t2508, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2508_FIs[] =
{
	&t2508_f0_FieldInfo,
	&t2508_f1_FieldInfo,
	NULL
};
extern MethodInfo m14336_MI;
static PropertyInfo t2508____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2508_TI, "System.Collections.IEnumerator.Current", &m14336_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14339_MI;
static PropertyInfo t2508____Current_PropertyInfo = 
{
	&t2508_TI, "Current", &m14339_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2508_PIs[] =
{
	&t2508____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2508____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2508_m14335_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2508_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14335_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2508_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2508_m14335_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2508_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14336_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2508_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2508_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14337_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2508_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2508_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14338_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2508_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2508_TI;
extern Il2CppType t208_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14339_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2508_TI, &t208_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2508_MIs[] =
{
	&m14335_MI,
	&m14336_MI,
	&m14337_MI,
	&m14338_MI,
	&m14339_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14336_MI;
extern MethodInfo m14338_MI;
extern MethodInfo m14337_MI;
extern MethodInfo m14339_MI;
static MethodInfo* t2508_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14336_MI,
	&m14338_MI,
	&m14337_MI,
	&m14339_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3597_TI;
static TypeInfo* t2508_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3597_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3597_TI;
static Il2CppInterfaceOffsetPair t2508_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3597_TI, 7},
};
extern MethodInfo m14339_MI;
extern TypeInfo t208_TI;
extern MethodInfo m20196_MI;
static void* t2508_RGCTXData[3] = 
{
	&m14339_MI,
	&t208_TI,
	&m20196_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2508_0_0_0;
extern Il2CppType t2508_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2508_TI;
extern Il2CppGenericClass t2508_GC;
extern TypeInfo t52_TI;
TypeInfo t2508_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2508_MIs, t2508_PIs, t2508_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2508_TI, t2508_ITIs, t2508_VT, &EmptyCustomAttributesCache, &t2508_TI, &t2508_0_0_0, &t2508_1_0_0, t2508_IOs, &t2508_GC, NULL, NULL, NULL, t2508_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2508)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4477_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Material>
extern MethodInfo m26721_MI;
static PropertyInfo t4477____Count_PropertyInfo = 
{
	&t4477_TI, "Count", &m26721_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26722_MI;
static PropertyInfo t4477____IsReadOnly_PropertyInfo = 
{
	&t4477_TI, "IsReadOnly", &m26722_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4477_PIs[] =
{
	&t4477____Count_PropertyInfo,
	&t4477____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4477_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26721_MI = 
{
	"get_Count", NULL, &t4477_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4477_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26722_MI = 
{
	"get_IsReadOnly", NULL, &t4477_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t208_0_0_0;
static ParameterInfo t4477_m26723_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t208_0_0_0},
};
extern TypeInfo t4477_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26723_MI = 
{
	"Add", NULL, &t4477_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4477_m26723_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4477_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26724_MI = 
{
	"Clear", NULL, &t4477_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t208_0_0_0;
static ParameterInfo t4477_m26725_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t208_0_0_0},
};
extern TypeInfo t4477_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26725_MI = 
{
	"Contains", NULL, &t4477_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4477_m26725_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3227_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4477_m26726_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3227_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4477_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26726_MI = 
{
	"CopyTo", NULL, &t4477_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4477_m26726_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t208_0_0_0;
static ParameterInfo t4477_m26727_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t208_0_0_0},
};
extern TypeInfo t4477_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26727_MI = 
{
	"Remove", NULL, &t4477_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4477_m26727_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4477_MIs[] =
{
	&m26721_MI,
	&m26722_MI,
	&m26723_MI,
	&m26724_MI,
	&m26725_MI,
	&m26726_MI,
	&m26727_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4479_TI;
static TypeInfo* t4477_ITIs[] = 
{
	&t618_TI,
	&t4479_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4477_0_0_0;
extern Il2CppType t4477_1_0_0;
struct t4477;
extern TypeInfo t4477_TI;
extern Il2CppGenericClass t4477_GC;
TypeInfo t4477_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4477_MIs, t4477_PIs, NULL, NULL, NULL, NULL, NULL, &t4477_TI, t4477_ITIs, NULL, &EmptyCustomAttributesCache, &t4477_TI, &t4477_0_0_0, &t4477_1_0_0, NULL, &t4477_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4479_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Material>
extern TypeInfo t4479_TI;
extern Il2CppType t3597_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26728_MI = 
{
	"GetEnumerator", NULL, &t4479_TI, &t3597_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4479_MIs[] =
{
	&m26728_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4479_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4479_0_0_0;
extern Il2CppType t4479_1_0_0;
struct t4479;
extern TypeInfo t4479_TI;
extern Il2CppGenericClass t4479_GC;
TypeInfo t4479_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4479_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4479_TI, t4479_ITIs, NULL, &EmptyCustomAttributesCache, &t4479_TI, &t4479_0_0_0, &t4479_1_0_0, NULL, &t4479_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4478_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Material>
extern MethodInfo m26729_MI;
extern MethodInfo m26730_MI;
static PropertyInfo t4478____Item_PropertyInfo = 
{
	&t4478_TI, "Item", &m26729_MI, &m26730_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4478_PIs[] =
{
	&t4478____Item_PropertyInfo,
	NULL
};
extern Il2CppType t208_0_0_0;
static ParameterInfo t4478_m26731_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t208_0_0_0},
};
extern TypeInfo t4478_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26731_MI = 
{
	"IndexOf", NULL, &t4478_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4478_m26731_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t208_0_0_0;
static ParameterInfo t4478_m26732_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t208_0_0_0},
};
extern TypeInfo t4478_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26732_MI = 
{
	"Insert", NULL, &t4478_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4478_m26732_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4478_m26733_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4478_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26733_MI = 
{
	"RemoveAt", NULL, &t4478_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4478_m26733_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4478_m26729_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4478_TI;
extern Il2CppType t208_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26729_MI = 
{
	"get_Item", NULL, &t4478_TI, &t208_0_0_0, RuntimeInvoker_t7_t60, t4478_m26729_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t208_0_0_0;
static ParameterInfo t4478_m26730_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t208_0_0_0},
};
extern TypeInfo t4478_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26730_MI = 
{
	"set_Item", NULL, &t4478_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4478_m26730_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4478_MIs[] =
{
	&m26731_MI,
	&m26732_MI,
	&m26733_MI,
	&m26729_MI,
	&m26730_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4477_TI;
extern TypeInfo t4479_TI;
static TypeInfo* t4478_ITIs[] = 
{
	&t618_TI,
	&t4477_TI,
	&t4479_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4478_0_0_0;
extern Il2CppType t4478_1_0_0;
struct t4478;
extern TypeInfo t4478_TI;
extern Il2CppGenericClass t4478_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4478_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4478_MIs, t4478_PIs, NULL, NULL, NULL, NULL, NULL, &t4478_TI, t4478_ITIs, NULL, &t1426__CustomAttributeCache, &t4478_TI, &t4478_0_0_0, &t4478_1_0_0, NULL, &t4478_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2509.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2509_TI;
#include "t2509MD.h"

#include "t2510.h"
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t2509_TI;
extern TypeInfo t208_TI;
extern TypeInfo t2510_TI;
extern TypeInfo t53_TI;
#include "t2510MD.h"
extern MethodInfo m14342_MI;
extern MethodInfo m14344_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Material>
extern Il2CppType t350_0_0_33;
FieldInfo t2509_f1_FieldInfo = 
{
	"m_Arg1", &t350_0_0_33, &t2509_TI, offsetof(t2509, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2509_FIs[] =
{
	&t2509_f1_FieldInfo,
	NULL
};
extern Il2CppType t72_0_0_0;
extern Il2CppType t573_0_0_0;
extern Il2CppType t208_0_0_0;
static ParameterInfo t2509_m14340_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t72_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t208_0_0_0},
};
extern TypeInfo t2509_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14340_MI = 
{
	".ctor", (methodPointerType)&m8007_gshared, &t2509_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7_t7, t2509_m14340_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2509_m14341_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2509_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14341_MI = 
{
	"Invoke", (methodPointerType)&m8009_gshared, &t2509_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2509_m14341_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2509_MIs[] =
{
	&m14340_MI,
	&m14341_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14341_MI;
extern MethodInfo m14345_MI;
static MethodInfo* t2509_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14341_MI,
	&m14345_MI,
};
extern Il2CppType t2511_0_0_0;
extern TypeInfo t2511_TI;
extern MethodInfo m20206_MI;
extern TypeInfo t208_TI;
extern MethodInfo m14347_MI;
extern MethodInfo m14342_MI;
extern TypeInfo t208_TI;
extern MethodInfo m14344_MI;
static void* t2509_RGCTXData[8] = 
{
	(void*)&t2511_0_0_0,
	&t2511_TI,
	&m20206_MI,
	&t208_TI,
	&m14347_MI,
	&m14342_MI,
	&t208_TI,
	&m14344_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2509_0_0_0;
extern Il2CppType t2509_1_0_0;
extern TypeInfo t2510_TI;
struct t2509;
extern TypeInfo t2509_TI;
extern Il2CppGenericClass t2509_GC;
TypeInfo t2509_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2509_MIs, NULL, t2509_FIs, NULL, &t2510_TI, NULL, NULL, &t2509_TI, NULL, t2509_VT, &EmptyCustomAttributesCache, &t2509_TI, &t2509_0_0_0, &t2509_1_0_0, NULL, &t2509_GC, NULL, NULL, NULL, t2509_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2509), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2510_TI;

#include "t2511.h"
extern TypeInfo t2510_TI;
extern TypeInfo t2511_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern TypeInfo t208_TI;
extern TypeInfo t53_TI;
#include "t2511MD.h"
extern Il2CppType t2511_0_0_0;
extern MethodInfo m2910_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3073_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m20206_MI;
extern MethodInfo m2911_MI;
extern MethodInfo m14347_MI;
extern MethodInfo m3069_MI;
extern MethodInfo m3067_MI;
struct t572;
#define m20206(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
extern MethodInfo m20206_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Material>
extern Il2CppType t2511_0_0_1;
FieldInfo t2510_f0_FieldInfo = 
{
	"Delegate", &t2511_0_0_1, &t2510_TI, offsetof(t2510, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2510_FIs[] =
{
	&t2510_f0_FieldInfo,
	NULL
};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2510_m14342_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2510_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14342_MI = 
{
	".ctor", (methodPointerType)&m8010_gshared, &t2510_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t2510_m14342_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2511_0_0_0;
static ParameterInfo t2510_m14343_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2511_0_0_0},
};
extern TypeInfo t2510_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14343_MI = 
{
	".ctor", (methodPointerType)&m8011_gshared, &t2510_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2510_m14343_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2510_m14344_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2510_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14344_MI = 
{
	"Invoke", (methodPointerType)&m8012_gshared, &t2510_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2510_m14344_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2510_m14345_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2510_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14345_MI = 
{
	"Find", (methodPointerType)&m8013_gshared, &t2510_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2510_m14345_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2510_MIs[] =
{
	&m14342_MI,
	&m14343_MI,
	&m14344_MI,
	&m14345_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14344_MI;
extern MethodInfo m14345_MI;
static MethodInfo* t2510_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14344_MI,
	&m14345_MI,
};
extern Il2CppType t2511_0_0_0;
extern TypeInfo t2511_TI;
extern MethodInfo m20206_MI;
extern TypeInfo t208_TI;
extern MethodInfo m14347_MI;
static void* t2510_RGCTXData[5] = 
{
	(void*)&t2511_0_0_0,
	&t2511_TI,
	&m20206_MI,
	&t208_TI,
	&m14347_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2510_0_0_0;
extern Il2CppType t2510_1_0_0;
extern TypeInfo t572_TI;
struct t2510;
extern TypeInfo t2510_TI;
extern Il2CppGenericClass t2510_GC;
TypeInfo t2510_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2510_MIs, NULL, t2510_FIs, NULL, &t572_TI, NULL, NULL, &t2510_TI, NULL, t2510_VT, &EmptyCustomAttributesCache, &t2510_TI, &t2510_0_0_0, &t2510_1_0_0, NULL, &t2510_GC, NULL, NULL, NULL, t2510_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2510), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2511_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Material>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2511_m14346_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2511_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m14346_MI = 
{
	".ctor", (methodPointerType)&m8014_gshared, &t2511_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2511_m14346_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t208_0_0_0;
static ParameterInfo t2511_m14347_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t208_0_0_0},
};
extern TypeInfo t2511_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14347_MI = 
{
	"Invoke", (methodPointerType)&m8015_gshared, &t2511_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2511_m14347_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t208_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2511_m14348_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t208_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2511_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14348_MI = 
{
	"BeginInvoke", (methodPointerType)&m8016_gshared, &t2511_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7, t2511_m14348_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2511_m14349_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2511_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14349_MI = 
{
	"EndInvoke", (methodPointerType)&m8017_gshared, &t2511_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2511_m14349_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2511_MIs[] =
{
	&m14346_MI,
	&m14347_MI,
	&m14348_MI,
	&m14349_MI,
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
extern MethodInfo m14347_MI;
extern MethodInfo m14348_MI;
extern MethodInfo m14349_MI;
static MethodInfo* t2511_VT[] =
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
	&m14347_MI,
	&m14348_MI,
	&m14349_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2511_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2511_0_0_0;
extern Il2CppType t2511_1_0_0;
extern TypeInfo t245_TI;
struct t2511;
extern TypeInfo t2511_TI;
extern Il2CppGenericClass t2511_GC;
TypeInfo t2511_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2511_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t2511_TI, NULL, t2511_VT, &EmptyCustomAttributesCache, &t2511_TI, &t2511_0_0_0, &t2511_1_0_0, t2511_IOs, &t2511_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2511), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2512.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2512_TI;
#include "t2512MD.h"

#include "t11.h"
#include "t2513.h"
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t2512_TI;
extern TypeInfo t11_TI;
extern TypeInfo t2513_TI;
extern TypeInfo t53_TI;
#include "t2513MD.h"
extern MethodInfo m14352_MI;
extern MethodInfo m14354_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Sprite>
extern Il2CppType t350_0_0_33;
FieldInfo t2512_f1_FieldInfo = 
{
	"m_Arg1", &t350_0_0_33, &t2512_TI, offsetof(t2512, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2512_FIs[] =
{
	&t2512_f1_FieldInfo,
	NULL
};
extern Il2CppType t72_0_0_0;
extern Il2CppType t573_0_0_0;
extern Il2CppType t11_0_0_0;
static ParameterInfo t2512_m14350_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t72_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern TypeInfo t2512_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14350_MI = 
{
	".ctor", (methodPointerType)&m8007_gshared, &t2512_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7_t7, t2512_m14350_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2512_m14351_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2512_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14351_MI = 
{
	"Invoke", (methodPointerType)&m8009_gshared, &t2512_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2512_m14351_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2512_MIs[] =
{
	&m14350_MI,
	&m14351_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14351_MI;
extern MethodInfo m14355_MI;
static MethodInfo* t2512_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14351_MI,
	&m14355_MI,
};
extern Il2CppType t2514_0_0_0;
extern TypeInfo t2514_TI;
extern MethodInfo m20207_MI;
extern TypeInfo t11_TI;
extern MethodInfo m14357_MI;
extern MethodInfo m14352_MI;
extern TypeInfo t11_TI;
extern MethodInfo m14354_MI;
static void* t2512_RGCTXData[8] = 
{
	(void*)&t2514_0_0_0,
	&t2514_TI,
	&m20207_MI,
	&t11_TI,
	&m14357_MI,
	&m14352_MI,
	&t11_TI,
	&m14354_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2512_0_0_0;
extern Il2CppType t2512_1_0_0;
extern TypeInfo t2513_TI;
struct t2512;
extern TypeInfo t2512_TI;
extern Il2CppGenericClass t2512_GC;
TypeInfo t2512_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2512_MIs, NULL, t2512_FIs, NULL, &t2513_TI, NULL, NULL, &t2512_TI, NULL, t2512_VT, &EmptyCustomAttributesCache, &t2512_TI, &t2512_0_0_0, &t2512_1_0_0, NULL, &t2512_GC, NULL, NULL, NULL, t2512_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2512), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2513_TI;

#include "t2514.h"
extern TypeInfo t2513_TI;
extern TypeInfo t2514_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern TypeInfo t11_TI;
extern TypeInfo t53_TI;
#include "t2514MD.h"
extern Il2CppType t2514_0_0_0;
extern MethodInfo m2910_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3073_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m20207_MI;
extern MethodInfo m2911_MI;
extern MethodInfo m14357_MI;
extern MethodInfo m3069_MI;
extern MethodInfo m3067_MI;
struct t572;
#define m20207(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
extern MethodInfo m20207_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Sprite>
extern Il2CppType t2514_0_0_1;
FieldInfo t2513_f0_FieldInfo = 
{
	"Delegate", &t2514_0_0_1, &t2513_TI, offsetof(t2513, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2513_FIs[] =
{
	&t2513_f0_FieldInfo,
	NULL
};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2513_m14352_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2513_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14352_MI = 
{
	".ctor", (methodPointerType)&m8010_gshared, &t2513_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t2513_m14352_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2514_0_0_0;
static ParameterInfo t2513_m14353_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2514_0_0_0},
};
extern TypeInfo t2513_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14353_MI = 
{
	".ctor", (methodPointerType)&m8011_gshared, &t2513_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2513_m14353_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2513_m14354_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2513_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14354_MI = 
{
	"Invoke", (methodPointerType)&m8012_gshared, &t2513_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2513_m14354_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2513_m14355_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2513_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14355_MI = 
{
	"Find", (methodPointerType)&m8013_gshared, &t2513_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2513_m14355_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2513_MIs[] =
{
	&m14352_MI,
	&m14353_MI,
	&m14354_MI,
	&m14355_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14354_MI;
extern MethodInfo m14355_MI;
static MethodInfo* t2513_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14354_MI,
	&m14355_MI,
};
extern Il2CppType t2514_0_0_0;
extern TypeInfo t2514_TI;
extern MethodInfo m20207_MI;
extern TypeInfo t11_TI;
extern MethodInfo m14357_MI;
static void* t2513_RGCTXData[5] = 
{
	(void*)&t2514_0_0_0,
	&t2514_TI,
	&m20207_MI,
	&t11_TI,
	&m14357_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2513_0_0_0;
extern Il2CppType t2513_1_0_0;
extern TypeInfo t572_TI;
struct t2513;
extern TypeInfo t2513_TI;
extern Il2CppGenericClass t2513_GC;
TypeInfo t2513_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2513_MIs, NULL, t2513_FIs, NULL, &t572_TI, NULL, NULL, &t2513_TI, NULL, t2513_VT, &EmptyCustomAttributesCache, &t2513_TI, &t2513_0_0_0, &t2513_1_0_0, NULL, &t2513_GC, NULL, NULL, NULL, t2513_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2513), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2514_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Sprite>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2514_m14356_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2514_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m14356_MI = 
{
	".ctor", (methodPointerType)&m8014_gshared, &t2514_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2514_m14356_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t2514_m14357_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern TypeInfo t2514_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14357_MI = 
{
	"Invoke", (methodPointerType)&m8015_gshared, &t2514_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2514_m14357_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2514_m14358_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2514_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14358_MI = 
{
	"BeginInvoke", (methodPointerType)&m8016_gshared, &t2514_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7, t2514_m14358_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2514_m14359_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2514_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14359_MI = 
{
	"EndInvoke", (methodPointerType)&m8017_gshared, &t2514_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2514_m14359_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2514_MIs[] =
{
	&m14356_MI,
	&m14357_MI,
	&m14358_MI,
	&m14359_MI,
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
extern MethodInfo m14357_MI;
extern MethodInfo m14358_MI;
extern MethodInfo m14359_MI;
static MethodInfo* t2514_VT[] =
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
	&m14357_MI,
	&m14358_MI,
	&m14359_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2514_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2514_0_0_0;
extern Il2CppType t2514_1_0_0;
extern TypeInfo t245_TI;
struct t2514;
extern TypeInfo t2514_TI;
extern Il2CppGenericClass t2514_GC;
TypeInfo t2514_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2514_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t2514_TI, NULL, t2514_VT, &EmptyCustomAttributesCache, &t2514_TI, &t2514_0_0_0, &t2514_1_0_0, t2514_IOs, &t2514_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2514), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3598_TI;

#include "t9.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.SpriteRenderer>
extern MethodInfo m26734_MI;
static PropertyInfo t3598____Current_PropertyInfo = 
{
	&t3598_TI, "Current", &m26734_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3598_PIs[] =
{
	&t3598____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3598_TI;
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26734_MI = 
{
	"get_Current", NULL, &t3598_TI, &t9_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3598_MIs[] =
{
	&m26734_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3598_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3598_0_0_0;
extern Il2CppType t3598_1_0_0;
struct t3598;
extern TypeInfo t3598_TI;
extern Il2CppGenericClass t3598_GC;
TypeInfo t3598_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3598_MIs, t3598_PIs, NULL, NULL, NULL, NULL, NULL, &t3598_TI, t3598_ITIs, NULL, &EmptyCustomAttributesCache, &t3598_TI, &t3598_0_0_0, &t3598_1_0_0, NULL, &t3598_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2515.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2515_TI;
#include "t2515MD.h"

extern TypeInfo t2515_TI;
extern TypeInfo t9_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14364_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20209_MI;
struct t52;
#define m20209(__this, p0, method) (t9 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m20209_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.SpriteRenderer>
extern Il2CppType t52_0_0_1;
FieldInfo t2515_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2515_TI, offsetof(t2515, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2515_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2515_TI, offsetof(t2515, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2515_FIs[] =
{
	&t2515_f0_FieldInfo,
	&t2515_f1_FieldInfo,
	NULL
};
extern MethodInfo m14361_MI;
static PropertyInfo t2515____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2515_TI, "System.Collections.IEnumerator.Current", &m14361_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14364_MI;
static PropertyInfo t2515____Current_PropertyInfo = 
{
	&t2515_TI, "Current", &m14364_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2515_PIs[] =
{
	&t2515____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2515____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2515_m14360_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2515_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14360_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2515_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2515_m14360_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2515_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14361_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2515_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2515_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14362_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2515_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2515_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14363_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2515_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2515_TI;
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14364_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2515_TI, &t9_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2515_MIs[] =
{
	&m14360_MI,
	&m14361_MI,
	&m14362_MI,
	&m14363_MI,
	&m14364_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14361_MI;
extern MethodInfo m14363_MI;
extern MethodInfo m14362_MI;
extern MethodInfo m14364_MI;
static MethodInfo* t2515_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14361_MI,
	&m14363_MI,
	&m14362_MI,
	&m14364_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3598_TI;
static TypeInfo* t2515_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3598_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3598_TI;
static Il2CppInterfaceOffsetPair t2515_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3598_TI, 7},
};
extern MethodInfo m14364_MI;
extern TypeInfo t9_TI;
extern MethodInfo m20209_MI;
static void* t2515_RGCTXData[3] = 
{
	&m14364_MI,
	&t9_TI,
	&m20209_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2515_0_0_0;
extern Il2CppType t2515_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2515_TI;
extern Il2CppGenericClass t2515_GC;
extern TypeInfo t52_TI;
TypeInfo t2515_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2515_MIs, t2515_PIs, t2515_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2515_TI, t2515_ITIs, t2515_VT, &EmptyCustomAttributesCache, &t2515_TI, &t2515_0_0_0, &t2515_1_0_0, t2515_IOs, &t2515_GC, NULL, NULL, NULL, t2515_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2515)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4480_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.SpriteRenderer>
extern MethodInfo m26735_MI;
static PropertyInfo t4480____Count_PropertyInfo = 
{
	&t4480_TI, "Count", &m26735_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26736_MI;
static PropertyInfo t4480____IsReadOnly_PropertyInfo = 
{
	&t4480_TI, "IsReadOnly", &m26736_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4480_PIs[] =
{
	&t4480____Count_PropertyInfo,
	&t4480____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4480_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26735_MI = 
{
	"get_Count", NULL, &t4480_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4480_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26736_MI = 
{
	"get_IsReadOnly", NULL, &t4480_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t4480_m26737_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern TypeInfo t4480_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26737_MI = 
{
	"Add", NULL, &t4480_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4480_m26737_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4480_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26738_MI = 
{
	"Clear", NULL, &t4480_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t4480_m26739_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern TypeInfo t4480_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26739_MI = 
{
	"Contains", NULL, &t4480_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4480_m26739_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3228_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4480_m26740_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3228_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4480_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26740_MI = 
{
	"CopyTo", NULL, &t4480_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4480_m26740_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t4480_m26741_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern TypeInfo t4480_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26741_MI = 
{
	"Remove", NULL, &t4480_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4480_m26741_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4480_MIs[] =
{
	&m26735_MI,
	&m26736_MI,
	&m26737_MI,
	&m26738_MI,
	&m26739_MI,
	&m26740_MI,
	&m26741_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4482_TI;
static TypeInfo* t4480_ITIs[] = 
{
	&t618_TI,
	&t4482_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4480_0_0_0;
extern Il2CppType t4480_1_0_0;
struct t4480;
extern TypeInfo t4480_TI;
extern Il2CppGenericClass t4480_GC;
TypeInfo t4480_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4480_MIs, t4480_PIs, NULL, NULL, NULL, NULL, NULL, &t4480_TI, t4480_ITIs, NULL, &EmptyCustomAttributesCache, &t4480_TI, &t4480_0_0_0, &t4480_1_0_0, NULL, &t4480_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4482_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.SpriteRenderer>
extern TypeInfo t4482_TI;
extern Il2CppType t3598_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26742_MI = 
{
	"GetEnumerator", NULL, &t4482_TI, &t3598_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4482_MIs[] =
{
	&m26742_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4482_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4482_0_0_0;
extern Il2CppType t4482_1_0_0;
struct t4482;
extern TypeInfo t4482_TI;
extern Il2CppGenericClass t4482_GC;
TypeInfo t4482_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4482_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4482_TI, t4482_ITIs, NULL, &EmptyCustomAttributesCache, &t4482_TI, &t4482_0_0_0, &t4482_1_0_0, NULL, &t4482_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4481_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.SpriteRenderer>
extern MethodInfo m26743_MI;
extern MethodInfo m26744_MI;
static PropertyInfo t4481____Item_PropertyInfo = 
{
	&t4481_TI, "Item", &m26743_MI, &m26744_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4481_PIs[] =
{
	&t4481____Item_PropertyInfo,
	NULL
};
extern Il2CppType t9_0_0_0;
static ParameterInfo t4481_m26745_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern TypeInfo t4481_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26745_MI = 
{
	"IndexOf", NULL, &t4481_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4481_m26745_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t4481_m26746_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern TypeInfo t4481_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26746_MI = 
{
	"Insert", NULL, &t4481_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4481_m26746_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4481_m26747_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4481_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26747_MI = 
{
	"RemoveAt", NULL, &t4481_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4481_m26747_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4481_m26743_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4481_TI;
extern Il2CppType t9_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26743_MI = 
{
	"get_Item", NULL, &t4481_TI, &t9_0_0_0, RuntimeInvoker_t7_t60, t4481_m26743_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t4481_m26744_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern TypeInfo t4481_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26744_MI = 
{
	"set_Item", NULL, &t4481_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4481_m26744_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4481_MIs[] =
{
	&m26745_MI,
	&m26746_MI,
	&m26747_MI,
	&m26743_MI,
	&m26744_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4480_TI;
extern TypeInfo t4482_TI;
static TypeInfo* t4481_ITIs[] = 
{
	&t618_TI,
	&t4480_TI,
	&t4482_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4481_0_0_0;
extern Il2CppType t4481_1_0_0;
struct t4481;
extern TypeInfo t4481_TI;
extern Il2CppGenericClass t4481_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4481_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4481_MIs, t4481_PIs, NULL, NULL, NULL, NULL, NULL, &t4481_TI, t4481_ITIs, NULL, &t1426__CustomAttributeCache, &t4481_TI, &t4481_0_0_0, &t4481_1_0_0, NULL, &t4481_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2516.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2516_TI;
#include "t2516MD.h"

#include "t2517.h"
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t2516_TI;
extern TypeInfo t9_TI;
extern TypeInfo t2517_TI;
extern TypeInfo t53_TI;
#include "t2517MD.h"
extern MethodInfo m14367_MI;
extern MethodInfo m14369_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.SpriteRenderer>
extern Il2CppType t350_0_0_33;
FieldInfo t2516_f1_FieldInfo = 
{
	"m_Arg1", &t350_0_0_33, &t2516_TI, offsetof(t2516, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2516_FIs[] =
{
	&t2516_f1_FieldInfo,
	NULL
};
extern Il2CppType t72_0_0_0;
extern Il2CppType t573_0_0_0;
extern Il2CppType t9_0_0_0;
static ParameterInfo t2516_m14365_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t72_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern TypeInfo t2516_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14365_MI = 
{
	".ctor", (methodPointerType)&m8007_gshared, &t2516_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7_t7, t2516_m14365_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2516_m14366_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2516_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14366_MI = 
{
	"Invoke", (methodPointerType)&m8009_gshared, &t2516_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2516_m14366_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2516_MIs[] =
{
	&m14365_MI,
	&m14366_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14366_MI;
extern MethodInfo m14370_MI;
static MethodInfo* t2516_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14366_MI,
	&m14370_MI,
};
extern Il2CppType t2518_0_0_0;
extern TypeInfo t2518_TI;
extern MethodInfo m20219_MI;
extern TypeInfo t9_TI;
extern MethodInfo m14372_MI;
extern MethodInfo m14367_MI;
extern TypeInfo t9_TI;
extern MethodInfo m14369_MI;
static void* t2516_RGCTXData[8] = 
{
	(void*)&t2518_0_0_0,
	&t2518_TI,
	&m20219_MI,
	&t9_TI,
	&m14372_MI,
	&m14367_MI,
	&t9_TI,
	&m14369_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2516_0_0_0;
extern Il2CppType t2516_1_0_0;
extern TypeInfo t2517_TI;
struct t2516;
extern TypeInfo t2516_TI;
extern Il2CppGenericClass t2516_GC;
TypeInfo t2516_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2516_MIs, NULL, t2516_FIs, NULL, &t2517_TI, NULL, NULL, &t2516_TI, NULL, t2516_VT, &EmptyCustomAttributesCache, &t2516_TI, &t2516_0_0_0, &t2516_1_0_0, NULL, &t2516_GC, NULL, NULL, NULL, t2516_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2516), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2517_TI;

#include "t2518.h"
extern TypeInfo t2517_TI;
extern TypeInfo t2518_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern TypeInfo t9_TI;
extern TypeInfo t53_TI;
#include "t2518MD.h"
extern Il2CppType t2518_0_0_0;
extern MethodInfo m2910_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3073_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m20219_MI;
extern MethodInfo m2911_MI;
extern MethodInfo m14372_MI;
extern MethodInfo m3069_MI;
extern MethodInfo m3067_MI;
struct t572;
#define m20219(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
extern MethodInfo m20219_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.SpriteRenderer>
extern Il2CppType t2518_0_0_1;
FieldInfo t2517_f0_FieldInfo = 
{
	"Delegate", &t2518_0_0_1, &t2517_TI, offsetof(t2517, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2517_FIs[] =
{
	&t2517_f0_FieldInfo,
	NULL
};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2517_m14367_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2517_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14367_MI = 
{
	".ctor", (methodPointerType)&m8010_gshared, &t2517_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t2517_m14367_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2518_0_0_0;
static ParameterInfo t2517_m14368_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2518_0_0_0},
};
extern TypeInfo t2517_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14368_MI = 
{
	".ctor", (methodPointerType)&m8011_gshared, &t2517_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2517_m14368_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2517_m14369_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2517_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14369_MI = 
{
	"Invoke", (methodPointerType)&m8012_gshared, &t2517_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2517_m14369_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2517_m14370_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2517_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14370_MI = 
{
	"Find", (methodPointerType)&m8013_gshared, &t2517_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2517_m14370_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2517_MIs[] =
{
	&m14367_MI,
	&m14368_MI,
	&m14369_MI,
	&m14370_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14369_MI;
extern MethodInfo m14370_MI;
static MethodInfo* t2517_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14369_MI,
	&m14370_MI,
};
extern Il2CppType t2518_0_0_0;
extern TypeInfo t2518_TI;
extern MethodInfo m20219_MI;
extern TypeInfo t9_TI;
extern MethodInfo m14372_MI;
static void* t2517_RGCTXData[5] = 
{
	(void*)&t2518_0_0_0,
	&t2518_TI,
	&m20219_MI,
	&t9_TI,
	&m14372_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2517_0_0_0;
extern Il2CppType t2517_1_0_0;
extern TypeInfo t572_TI;
struct t2517;
extern TypeInfo t2517_TI;
extern Il2CppGenericClass t2517_GC;
TypeInfo t2517_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2517_MIs, NULL, t2517_FIs, NULL, &t572_TI, NULL, NULL, &t2517_TI, NULL, t2517_VT, &EmptyCustomAttributesCache, &t2517_TI, &t2517_0_0_0, &t2517_1_0_0, NULL, &t2517_GC, NULL, NULL, NULL, t2517_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2517), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2518_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.SpriteRenderer>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2518_m14371_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2518_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m14371_MI = 
{
	".ctor", (methodPointerType)&m8014_gshared, &t2518_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2518_m14371_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2518_m14372_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern TypeInfo t2518_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14372_MI = 
{
	"Invoke", (methodPointerType)&m8015_gshared, &t2518_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2518_m14372_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t9_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2518_m14373_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t9_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2518_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14373_MI = 
{
	"BeginInvoke", (methodPointerType)&m8016_gshared, &t2518_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7, t2518_m14373_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2518_m14374_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2518_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14374_MI = 
{
	"EndInvoke", (methodPointerType)&m8017_gshared, &t2518_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2518_m14374_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2518_MIs[] =
{
	&m14371_MI,
	&m14372_MI,
	&m14373_MI,
	&m14374_MI,
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
extern MethodInfo m14372_MI;
extern MethodInfo m14373_MI;
extern MethodInfo m14374_MI;
static MethodInfo* t2518_VT[] =
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
	&m14372_MI,
	&m14373_MI,
	&m14374_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2518_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2518_0_0_0;
extern Il2CppType t2518_1_0_0;
extern TypeInfo t245_TI;
struct t2518;
extern TypeInfo t2518_TI;
extern Il2CppGenericClass t2518_GC;
TypeInfo t2518_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2518_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t2518_TI, NULL, t2518_VT, &EmptyCustomAttributesCache, &t2518_TI, &t2518_0_0_0, &t2518_1_0_0, t2518_IOs, &t2518_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2518), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2519.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2519_TI;
#include "t2519MD.h"

#include "t82.h"
#include "t2520.h"
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t2519_TI;
extern TypeInfo t82_TI;
extern TypeInfo t2520_TI;
extern TypeInfo t53_TI;
#include "t2520MD.h"
extern MethodInfo m14377_MI;
extern MethodInfo m14379_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Behaviour>
extern Il2CppType t350_0_0_33;
FieldInfo t2519_f1_FieldInfo = 
{
	"m_Arg1", &t350_0_0_33, &t2519_TI, offsetof(t2519, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2519_FIs[] =
{
	&t2519_f1_FieldInfo,
	NULL
};
extern Il2CppType t72_0_0_0;
extern Il2CppType t573_0_0_0;
extern Il2CppType t82_0_0_0;
static ParameterInfo t2519_m14375_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t72_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t82_0_0_0},
};
extern TypeInfo t2519_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14375_MI = 
{
	".ctor", (methodPointerType)&m8007_gshared, &t2519_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7_t7, t2519_m14375_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2519_m14376_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2519_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14376_MI = 
{
	"Invoke", (methodPointerType)&m8009_gshared, &t2519_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2519_m14376_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2519_MIs[] =
{
	&m14375_MI,
	&m14376_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14376_MI;
extern MethodInfo m14380_MI;
static MethodInfo* t2519_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14376_MI,
	&m14380_MI,
};
extern Il2CppType t2521_0_0_0;
extern TypeInfo t2521_TI;
extern MethodInfo m20220_MI;
extern TypeInfo t82_TI;
extern MethodInfo m14382_MI;
extern MethodInfo m14377_MI;
extern TypeInfo t82_TI;
extern MethodInfo m14379_MI;
static void* t2519_RGCTXData[8] = 
{
	(void*)&t2521_0_0_0,
	&t2521_TI,
	&m20220_MI,
	&t82_TI,
	&m14382_MI,
	&m14377_MI,
	&t82_TI,
	&m14379_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2519_0_0_0;
extern Il2CppType t2519_1_0_0;
extern TypeInfo t2520_TI;
struct t2519;
extern TypeInfo t2519_TI;
extern Il2CppGenericClass t2519_GC;
TypeInfo t2519_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2519_MIs, NULL, t2519_FIs, NULL, &t2520_TI, NULL, NULL, &t2519_TI, NULL, t2519_VT, &EmptyCustomAttributesCache, &t2519_TI, &t2519_0_0_0, &t2519_1_0_0, NULL, &t2519_GC, NULL, NULL, NULL, t2519_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2519), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2520_TI;

#include "t2521.h"
extern TypeInfo t2520_TI;
extern TypeInfo t2521_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern TypeInfo t82_TI;
extern TypeInfo t53_TI;
#include "t2521MD.h"
extern Il2CppType t2521_0_0_0;
extern MethodInfo m2910_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3073_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m20220_MI;
extern MethodInfo m2911_MI;
extern MethodInfo m14382_MI;
extern MethodInfo m3069_MI;
extern MethodInfo m3067_MI;
struct t572;
#define m20220(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
extern MethodInfo m20220_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Behaviour>
extern Il2CppType t2521_0_0_1;
FieldInfo t2520_f0_FieldInfo = 
{
	"Delegate", &t2521_0_0_1, &t2520_TI, offsetof(t2520, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2520_FIs[] =
{
	&t2520_f0_FieldInfo,
	NULL
};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2520_m14377_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2520_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14377_MI = 
{
	".ctor", (methodPointerType)&m8010_gshared, &t2520_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t2520_m14377_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2521_0_0_0;
static ParameterInfo t2520_m14378_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2521_0_0_0},
};
extern TypeInfo t2520_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14378_MI = 
{
	".ctor", (methodPointerType)&m8011_gshared, &t2520_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2520_m14378_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2520_m14379_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2520_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14379_MI = 
{
	"Invoke", (methodPointerType)&m8012_gshared, &t2520_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2520_m14379_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2520_m14380_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2520_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14380_MI = 
{
	"Find", (methodPointerType)&m8013_gshared, &t2520_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2520_m14380_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2520_MIs[] =
{
	&m14377_MI,
	&m14378_MI,
	&m14379_MI,
	&m14380_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14379_MI;
extern MethodInfo m14380_MI;
static MethodInfo* t2520_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14379_MI,
	&m14380_MI,
};
extern Il2CppType t2521_0_0_0;
extern TypeInfo t2521_TI;
extern MethodInfo m20220_MI;
extern TypeInfo t82_TI;
extern MethodInfo m14382_MI;
static void* t2520_RGCTXData[5] = 
{
	(void*)&t2521_0_0_0,
	&t2521_TI,
	&m20220_MI,
	&t82_TI,
	&m14382_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2520_0_0_0;
extern Il2CppType t2520_1_0_0;
extern TypeInfo t572_TI;
struct t2520;
extern TypeInfo t2520_TI;
extern Il2CppGenericClass t2520_GC;
TypeInfo t2520_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2520_MIs, NULL, t2520_FIs, NULL, &t572_TI, NULL, NULL, &t2520_TI, NULL, t2520_VT, &EmptyCustomAttributesCache, &t2520_TI, &t2520_0_0_0, &t2520_1_0_0, NULL, &t2520_GC, NULL, NULL, NULL, t2520_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2520), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2521_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Behaviour>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2521_m14381_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2521_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m14381_MI = 
{
	".ctor", (methodPointerType)&m8014_gshared, &t2521_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2521_m14381_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t82_0_0_0;
static ParameterInfo t2521_m14382_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t82_0_0_0},
};
extern TypeInfo t2521_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14382_MI = 
{
	"Invoke", (methodPointerType)&m8015_gshared, &t2521_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2521_m14382_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t82_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2521_m14383_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t82_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2521_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14383_MI = 
{
	"BeginInvoke", (methodPointerType)&m8016_gshared, &t2521_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7, t2521_m14383_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2521_m14384_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2521_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14384_MI = 
{
	"EndInvoke", (methodPointerType)&m8017_gshared, &t2521_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2521_m14384_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2521_MIs[] =
{
	&m14381_MI,
	&m14382_MI,
	&m14383_MI,
	&m14384_MI,
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
extern MethodInfo m14382_MI;
extern MethodInfo m14383_MI;
extern MethodInfo m14384_MI;
static MethodInfo* t2521_VT[] =
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
	&m14382_MI,
	&m14383_MI,
	&m14384_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2521_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2521_0_0_0;
extern Il2CppType t2521_1_0_0;
extern TypeInfo t245_TI;
struct t2521;
extern TypeInfo t2521_TI;
extern Il2CppGenericClass t2521_GC;
TypeInfo t2521_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2521_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t2521_TI, NULL, t2521_VT, &EmptyCustomAttributesCache, &t2521_TI, &t2521_0_0_0, &t2521_1_0_0, t2521_IOs, &t2521_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2521), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3599_TI;

#include "t68.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Camera>
extern MethodInfo m26748_MI;
static PropertyInfo t3599____Current_PropertyInfo = 
{
	&t3599_TI, "Current", &m26748_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3599_PIs[] =
{
	&t3599____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3599_TI;
extern Il2CppType t68_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26748_MI = 
{
	"get_Current", NULL, &t3599_TI, &t68_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3599_MIs[] =
{
	&m26748_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3599_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3599_0_0_0;
extern Il2CppType t3599_1_0_0;
struct t3599;
extern TypeInfo t3599_TI;
extern Il2CppGenericClass t3599_GC;
TypeInfo t3599_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3599_MIs, t3599_PIs, NULL, NULL, NULL, NULL, NULL, &t3599_TI, t3599_ITIs, NULL, &EmptyCustomAttributesCache, &t3599_TI, &t3599_0_0_0, &t3599_1_0_0, NULL, &t3599_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2522.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2522_TI;
#include "t2522MD.h"

extern TypeInfo t2522_TI;
extern TypeInfo t68_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14389_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20222_MI;
struct t52;
#define m20222(__this, p0, method) (t68 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m20222_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Camera>
extern Il2CppType t52_0_0_1;
FieldInfo t2522_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2522_TI, offsetof(t2522, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2522_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2522_TI, offsetof(t2522, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2522_FIs[] =
{
	&t2522_f0_FieldInfo,
	&t2522_f1_FieldInfo,
	NULL
};
extern MethodInfo m14386_MI;
static PropertyInfo t2522____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2522_TI, "System.Collections.IEnumerator.Current", &m14386_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14389_MI;
static PropertyInfo t2522____Current_PropertyInfo = 
{
	&t2522_TI, "Current", &m14389_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2522_PIs[] =
{
	&t2522____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2522____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2522_m14385_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2522_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14385_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2522_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2522_m14385_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2522_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14386_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2522_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2522_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14387_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2522_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2522_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14388_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2522_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2522_TI;
extern Il2CppType t68_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14389_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2522_TI, &t68_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2522_MIs[] =
{
	&m14385_MI,
	&m14386_MI,
	&m14387_MI,
	&m14388_MI,
	&m14389_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14386_MI;
extern MethodInfo m14388_MI;
extern MethodInfo m14387_MI;
extern MethodInfo m14389_MI;
static MethodInfo* t2522_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14386_MI,
	&m14388_MI,
	&m14387_MI,
	&m14389_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3599_TI;
static TypeInfo* t2522_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3599_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3599_TI;
static Il2CppInterfaceOffsetPair t2522_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3599_TI, 7},
};
extern MethodInfo m14389_MI;
extern TypeInfo t68_TI;
extern MethodInfo m20222_MI;
static void* t2522_RGCTXData[3] = 
{
	&m14389_MI,
	&t68_TI,
	&m20222_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2522_0_0_0;
extern Il2CppType t2522_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2522_TI;
extern Il2CppGenericClass t2522_GC;
extern TypeInfo t52_TI;
TypeInfo t2522_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2522_MIs, t2522_PIs, t2522_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2522_TI, t2522_ITIs, t2522_VT, &EmptyCustomAttributesCache, &t2522_TI, &t2522_0_0_0, &t2522_1_0_0, t2522_IOs, &t2522_GC, NULL, NULL, NULL, t2522_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2522)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4483_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Camera>
extern MethodInfo m26749_MI;
static PropertyInfo t4483____Count_PropertyInfo = 
{
	&t4483_TI, "Count", &m26749_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26750_MI;
static PropertyInfo t4483____IsReadOnly_PropertyInfo = 
{
	&t4483_TI, "IsReadOnly", &m26750_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4483_PIs[] =
{
	&t4483____Count_PropertyInfo,
	&t4483____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4483_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26749_MI = 
{
	"get_Count", NULL, &t4483_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4483_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26750_MI = 
{
	"get_IsReadOnly", NULL, &t4483_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t68_0_0_0;
static ParameterInfo t4483_m26751_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t68_0_0_0},
};
extern TypeInfo t4483_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26751_MI = 
{
	"Add", NULL, &t4483_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4483_m26751_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4483_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26752_MI = 
{
	"Clear", NULL, &t4483_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t68_0_0_0;
static ParameterInfo t4483_m26753_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t68_0_0_0},
};
extern TypeInfo t4483_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26753_MI = 
{
	"Contains", NULL, &t4483_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4483_m26753_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t514_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4483_m26754_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t514_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4483_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26754_MI = 
{
	"CopyTo", NULL, &t4483_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4483_m26754_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t68_0_0_0;
static ParameterInfo t4483_m26755_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t68_0_0_0},
};
extern TypeInfo t4483_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26755_MI = 
{
	"Remove", NULL, &t4483_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4483_m26755_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4483_MIs[] =
{
	&m26749_MI,
	&m26750_MI,
	&m26751_MI,
	&m26752_MI,
	&m26753_MI,
	&m26754_MI,
	&m26755_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4485_TI;
static TypeInfo* t4483_ITIs[] = 
{
	&t618_TI,
	&t4485_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4483_0_0_0;
extern Il2CppType t4483_1_0_0;
struct t4483;
extern TypeInfo t4483_TI;
extern Il2CppGenericClass t4483_GC;
TypeInfo t4483_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4483_MIs, t4483_PIs, NULL, NULL, NULL, NULL, NULL, &t4483_TI, t4483_ITIs, NULL, &EmptyCustomAttributesCache, &t4483_TI, &t4483_0_0_0, &t4483_1_0_0, NULL, &t4483_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4485_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>
extern TypeInfo t4485_TI;
extern Il2CppType t3599_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26756_MI = 
{
	"GetEnumerator", NULL, &t4485_TI, &t3599_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4485_MIs[] =
{
	&m26756_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4485_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4485_0_0_0;
extern Il2CppType t4485_1_0_0;
struct t4485;
extern TypeInfo t4485_TI;
extern Il2CppGenericClass t4485_GC;
TypeInfo t4485_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4485_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4485_TI, t4485_ITIs, NULL, &EmptyCustomAttributesCache, &t4485_TI, &t4485_0_0_0, &t4485_1_0_0, NULL, &t4485_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4484_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Camera>
extern MethodInfo m26757_MI;
extern MethodInfo m26758_MI;
static PropertyInfo t4484____Item_PropertyInfo = 
{
	&t4484_TI, "Item", &m26757_MI, &m26758_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4484_PIs[] =
{
	&t4484____Item_PropertyInfo,
	NULL
};
extern Il2CppType t68_0_0_0;
static ParameterInfo t4484_m26759_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t68_0_0_0},
};
extern TypeInfo t4484_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26759_MI = 
{
	"IndexOf", NULL, &t4484_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4484_m26759_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t68_0_0_0;
static ParameterInfo t4484_m26760_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t68_0_0_0},
};
extern TypeInfo t4484_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26760_MI = 
{
	"Insert", NULL, &t4484_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4484_m26760_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4484_m26761_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4484_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26761_MI = 
{
	"RemoveAt", NULL, &t4484_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4484_m26761_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4484_m26757_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4484_TI;
extern Il2CppType t68_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26757_MI = 
{
	"get_Item", NULL, &t4484_TI, &t68_0_0_0, RuntimeInvoker_t7_t60, t4484_m26757_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t68_0_0_0;
static ParameterInfo t4484_m26758_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t68_0_0_0},
};
extern TypeInfo t4484_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26758_MI = 
{
	"set_Item", NULL, &t4484_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4484_m26758_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4484_MIs[] =
{
	&m26759_MI,
	&m26760_MI,
	&m26761_MI,
	&m26757_MI,
	&m26758_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4483_TI;
extern TypeInfo t4485_TI;
static TypeInfo* t4484_ITIs[] = 
{
	&t618_TI,
	&t4483_TI,
	&t4485_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4484_0_0_0;
extern Il2CppType t4484_1_0_0;
struct t4484;
extern TypeInfo t4484_TI;
extern Il2CppGenericClass t4484_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4484_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4484_MIs, t4484_PIs, NULL, NULL, NULL, NULL, NULL, &t4484_TI, t4484_ITIs, NULL, &t1426__CustomAttributeCache, &t4484_TI, &t4484_0_0_0, &t4484_1_0_0, NULL, &t4484_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2523.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2523_TI;
#include "t2523MD.h"

#include "t2524.h"
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t2523_TI;
extern TypeInfo t68_TI;
extern TypeInfo t2524_TI;
extern TypeInfo t53_TI;
#include "t2524MD.h"
extern MethodInfo m14392_MI;
extern MethodInfo m14394_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Camera>
extern Il2CppType t350_0_0_33;
FieldInfo t2523_f1_FieldInfo = 
{
	"m_Arg1", &t350_0_0_33, &t2523_TI, offsetof(t2523, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2523_FIs[] =
{
	&t2523_f1_FieldInfo,
	NULL
};
extern Il2CppType t72_0_0_0;
extern Il2CppType t573_0_0_0;
extern Il2CppType t68_0_0_0;
static ParameterInfo t2523_m14390_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t72_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t68_0_0_0},
};
extern TypeInfo t2523_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14390_MI = 
{
	".ctor", (methodPointerType)&m8007_gshared, &t2523_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7_t7, t2523_m14390_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2523_m14391_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2523_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14391_MI = 
{
	"Invoke", (methodPointerType)&m8009_gshared, &t2523_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2523_m14391_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2523_MIs[] =
{
	&m14390_MI,
	&m14391_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14391_MI;
extern MethodInfo m14395_MI;
static MethodInfo* t2523_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14391_MI,
	&m14395_MI,
};
extern Il2CppType t2525_0_0_0;
extern TypeInfo t2525_TI;
extern MethodInfo m20232_MI;
extern TypeInfo t68_TI;
extern MethodInfo m14397_MI;
extern MethodInfo m14392_MI;
extern TypeInfo t68_TI;
extern MethodInfo m14394_MI;
static void* t2523_RGCTXData[8] = 
{
	(void*)&t2525_0_0_0,
	&t2525_TI,
	&m20232_MI,
	&t68_TI,
	&m14397_MI,
	&m14392_MI,
	&t68_TI,
	&m14394_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2523_0_0_0;
extern Il2CppType t2523_1_0_0;
extern TypeInfo t2524_TI;
struct t2523;
extern TypeInfo t2523_TI;
extern Il2CppGenericClass t2523_GC;
TypeInfo t2523_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2523_MIs, NULL, t2523_FIs, NULL, &t2524_TI, NULL, NULL, &t2523_TI, NULL, t2523_VT, &EmptyCustomAttributesCache, &t2523_TI, &t2523_0_0_0, &t2523_1_0_0, NULL, &t2523_GC, NULL, NULL, NULL, t2523_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2523), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2524_TI;

#include "t2525.h"
extern TypeInfo t2524_TI;
extern TypeInfo t2525_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern TypeInfo t68_TI;
extern TypeInfo t53_TI;
#include "t2525MD.h"
extern Il2CppType t2525_0_0_0;
extern MethodInfo m2910_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3073_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m20232_MI;
extern MethodInfo m2911_MI;
extern MethodInfo m14397_MI;
extern MethodInfo m3069_MI;
extern MethodInfo m3067_MI;
struct t572;
#define m20232(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
extern MethodInfo m20232_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Camera>
extern Il2CppType t2525_0_0_1;
FieldInfo t2524_f0_FieldInfo = 
{
	"Delegate", &t2525_0_0_1, &t2524_TI, offsetof(t2524, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2524_FIs[] =
{
	&t2524_f0_FieldInfo,
	NULL
};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2524_m14392_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2524_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14392_MI = 
{
	".ctor", (methodPointerType)&m8010_gshared, &t2524_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t2524_m14392_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2525_0_0_0;
static ParameterInfo t2524_m14393_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2525_0_0_0},
};
extern TypeInfo t2524_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14393_MI = 
{
	".ctor", (methodPointerType)&m8011_gshared, &t2524_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2524_m14393_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2524_m14394_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2524_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14394_MI = 
{
	"Invoke", (methodPointerType)&m8012_gshared, &t2524_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2524_m14394_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2524_m14395_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2524_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14395_MI = 
{
	"Find", (methodPointerType)&m8013_gshared, &t2524_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2524_m14395_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2524_MIs[] =
{
	&m14392_MI,
	&m14393_MI,
	&m14394_MI,
	&m14395_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m14394_MI;
extern MethodInfo m14395_MI;
static MethodInfo* t2524_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m14394_MI,
	&m14395_MI,
};
extern Il2CppType t2525_0_0_0;
extern TypeInfo t2525_TI;
extern MethodInfo m20232_MI;
extern TypeInfo t68_TI;
extern MethodInfo m14397_MI;
static void* t2524_RGCTXData[5] = 
{
	(void*)&t2525_0_0_0,
	&t2525_TI,
	&m20232_MI,
	&t68_TI,
	&m14397_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2524_0_0_0;
extern Il2CppType t2524_1_0_0;
extern TypeInfo t572_TI;
struct t2524;
extern TypeInfo t2524_TI;
extern Il2CppGenericClass t2524_GC;
TypeInfo t2524_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2524_MIs, NULL, t2524_FIs, NULL, &t572_TI, NULL, NULL, &t2524_TI, NULL, t2524_VT, &EmptyCustomAttributesCache, &t2524_TI, &t2524_0_0_0, &t2524_1_0_0, NULL, &t2524_GC, NULL, NULL, NULL, t2524_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2524), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2525_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Camera>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2525_m14396_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2525_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m14396_MI = 
{
	".ctor", (methodPointerType)&m8014_gshared, &t2525_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2525_m14396_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t68_0_0_0;
static ParameterInfo t2525_m14397_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t68_0_0_0},
};
extern TypeInfo t2525_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14397_MI = 
{
	"Invoke", (methodPointerType)&m8015_gshared, &t2525_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2525_m14397_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t68_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2525_m14398_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t68_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2525_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14398_MI = 
{
	"BeginInvoke", (methodPointerType)&m8016_gshared, &t2525_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7, t2525_m14398_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2525_m14399_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2525_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14399_MI = 
{
	"EndInvoke", (methodPointerType)&m8017_gshared, &t2525_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2525_m14399_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2525_MIs[] =
{
	&m14396_MI,
	&m14397_MI,
	&m14398_MI,
	&m14399_MI,
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
extern MethodInfo m14397_MI;
extern MethodInfo m14398_MI;
extern MethodInfo m14399_MI;
static MethodInfo* t2525_VT[] =
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
	&m14397_MI,
	&m14398_MI,
	&m14399_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2525_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2525_0_0_0;
extern Il2CppType t2525_1_0_0;
extern TypeInfo t245_TI;
struct t2525;
extern TypeInfo t2525_TI;
extern Il2CppGenericClass t2525_GC;
TypeInfo t2525_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2525_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t2525_TI, NULL, t2525_VT, &EmptyCustomAttributesCache, &t2525_TI, &t2525_0_0_0, &t2525_1_0_0, t2525_IOs, &t2525_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2525), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3600_TI;

#include "t517.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Display>
extern MethodInfo m26762_MI;
static PropertyInfo t3600____Current_PropertyInfo = 
{
	&t3600_TI, "Current", &m26762_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3600_PIs[] =
{
	&t3600____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3600_TI;
extern Il2CppType t517_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26762_MI = 
{
	"get_Current", NULL, &t3600_TI, &t517_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3600_MIs[] =
{
	&m26762_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3600_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3600_0_0_0;
extern Il2CppType t3600_1_0_0;
struct t3600;
extern TypeInfo t3600_TI;
extern Il2CppGenericClass t3600_GC;
TypeInfo t3600_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3600_MIs, t3600_PIs, NULL, NULL, NULL, NULL, NULL, &t3600_TI, t3600_ITIs, NULL, &EmptyCustomAttributesCache, &t3600_TI, &t3600_0_0_0, &t3600_1_0_0, NULL, &t3600_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2526.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2526_TI;
#include "t2526MD.h"

extern TypeInfo t2526_TI;
extern TypeInfo t517_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m14404_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m20234_MI;
struct t52;
#define m20234(__this, p0, method) (t517 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m20234_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Display>
extern Il2CppType t52_0_0_1;
FieldInfo t2526_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2526_TI, offsetof(t2526, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2526_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2526_TI, offsetof(t2526, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2526_FIs[] =
{
	&t2526_f0_FieldInfo,
	&t2526_f1_FieldInfo,
	NULL
};
extern MethodInfo m14401_MI;
static PropertyInfo t2526____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2526_TI, "System.Collections.IEnumerator.Current", &m14401_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m14404_MI;
static PropertyInfo t2526____Current_PropertyInfo = 
{
	&t2526_TI, "Current", &m14404_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2526_PIs[] =
{
	&t2526____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2526____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2526_m14400_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2526_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14400_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2526_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2526_m14400_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2526_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14401_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2526_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2526_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m14402_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2526_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2526_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m14403_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2526_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2526_TI;
extern Il2CppType t517_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m14404_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2526_TI, &t517_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2526_MIs[] =
{
	&m14400_MI,
	&m14401_MI,
	&m14402_MI,
	&m14403_MI,
	&m14404_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m14401_MI;
extern MethodInfo m14403_MI;
extern MethodInfo m14402_MI;
extern MethodInfo m14404_MI;
static MethodInfo* t2526_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m14401_MI,
	&m14403_MI,
	&m14402_MI,
	&m14404_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3600_TI;
static TypeInfo* t2526_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3600_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3600_TI;
static Il2CppInterfaceOffsetPair t2526_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3600_TI, 7},
};
extern MethodInfo m14404_MI;
extern TypeInfo t517_TI;
extern MethodInfo m20234_MI;
static void* t2526_RGCTXData[3] = 
{
	&m14404_MI,
	&t517_TI,
	&m20234_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2526_0_0_0;
extern Il2CppType t2526_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2526_TI;
extern Il2CppGenericClass t2526_GC;
extern TypeInfo t52_TI;
TypeInfo t2526_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2526_MIs, t2526_PIs, t2526_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2526_TI, t2526_ITIs, t2526_VT, &EmptyCustomAttributesCache, &t2526_TI, &t2526_0_0_0, &t2526_1_0_0, t2526_IOs, &t2526_GC, NULL, NULL, NULL, t2526_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2526)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4486_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Display>
extern MethodInfo m26763_MI;
static PropertyInfo t4486____Count_PropertyInfo = 
{
	&t4486_TI, "Count", &m26763_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m26764_MI;
static PropertyInfo t4486____IsReadOnly_PropertyInfo = 
{
	&t4486_TI, "IsReadOnly", &m26764_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4486_PIs[] =
{
	&t4486____Count_PropertyInfo,
	&t4486____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4486_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26763_MI = 
{
	"get_Count", NULL, &t4486_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4486_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m26764_MI = 
{
	"get_IsReadOnly", NULL, &t4486_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t517_0_0_0;
static ParameterInfo t4486_m26765_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t517_0_0_0},
};
extern TypeInfo t4486_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26765_MI = 
{
	"Add", NULL, &t4486_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4486_m26765_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4486_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26766_MI = 
{
	"Clear", NULL, &t4486_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t517_0_0_0;
static ParameterInfo t4486_m26767_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t517_0_0_0},
};
extern TypeInfo t4486_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26767_MI = 
{
	"Contains", NULL, &t4486_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4486_m26767_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t518_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4486_m26768_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t518_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4486_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m26768_MI = 
{
	"CopyTo", NULL, &t4486_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4486_m26768_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t517_0_0_0;
static ParameterInfo t4486_m26769_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t517_0_0_0},
};
extern TypeInfo t4486_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26769_MI = 
{
	"Remove", NULL, &t4486_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4486_m26769_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4486_MIs[] =
{
	&m26763_MI,
	&m26764_MI,
	&m26765_MI,
	&m26766_MI,
	&m26767_MI,
	&m26768_MI,
	&m26769_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4488_TI;
static TypeInfo* t4486_ITIs[] = 
{
	&t618_TI,
	&t4488_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4486_0_0_0;
extern Il2CppType t4486_1_0_0;
struct t4486;
extern TypeInfo t4486_TI;
extern Il2CppGenericClass t4486_GC;
TypeInfo t4486_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4486_MIs, t4486_PIs, NULL, NULL, NULL, NULL, NULL, &t4486_TI, t4486_ITIs, NULL, &EmptyCustomAttributesCache, &t4486_TI, &t4486_0_0_0, &t4486_1_0_0, NULL, &t4486_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4488_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Display>
extern TypeInfo t4488_TI;
extern Il2CppType t3600_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m26770_MI = 
{
	"GetEnumerator", NULL, &t4488_TI, &t3600_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4488_MIs[] =
{
	&m26770_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4488_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4488_0_0_0;
extern Il2CppType t4488_1_0_0;
struct t4488;
extern TypeInfo t4488_TI;
extern Il2CppGenericClass t4488_GC;
TypeInfo t4488_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4488_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4488_TI, t4488_ITIs, NULL, &EmptyCustomAttributesCache, &t4488_TI, &t4488_0_0_0, &t4488_1_0_0, NULL, &t4488_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
