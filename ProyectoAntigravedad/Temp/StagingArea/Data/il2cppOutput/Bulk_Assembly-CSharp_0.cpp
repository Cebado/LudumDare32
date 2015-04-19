#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t0.h"
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
extern TypeInfo t0_TI;
#include "t0MD.h"


#include "t52.h"

// Metadata Definition <Module>
static MethodInfo* t0_MIs[] =
{
	NULL
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t0_0_0_0;
extern Il2CppType t0_1_0_0;
struct t0;
extern TypeInfo t0_TI;
TypeInfo t0_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<Module>", "", t0_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t0_TI, NULL, NULL, &EmptyCustomAttributesCache, &t0_TI, &t0_0_0_0, &t0_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t0), 0, -1, 0, 0, -1, 0, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1_TI;
#include "t1MD.h"

#include "t53.h"
#include "t54.h"
#include "t55.h"
#include "t5.h"
#include "t2.h"
#include "t4.h"
extern TypeInfo t1_TI;
extern TypeInfo t5_TI;
extern TypeInfo t56_TI;
extern TypeInfo t4_TI;
#include "t3MD.h"
#include "t57MD.h"
#include "t2MD.h"
#include "t56MD.h"
#include "t58MD.h"
#include "t5MD.h"
extern MethodInfo m103_MI;
extern MethodInfo m104_MI;
extern MethodInfo m105_MI;
extern MethodInfo m106_MI;
extern MethodInfo m4_MI;
extern MethodInfo m1_MI;
extern MethodInfo m107_MI;
extern MethodInfo m108_MI;
extern MethodInfo m2_MI;
extern MethodInfo m109_MI;
extern MethodInfo m110_MI;
extern MethodInfo m111_MI;


extern MethodInfo m0_MI;
 void m0 (t1 * __this, MethodInfo* method){
	{
		__this->f2 = (1.0f);
		__this->f3 = (1.0f);
		__this->f4 = (8.0f);
		__this->f5 = (8.0f);
		__this->f9 = 1;
		__this->f10 = (4.0f);
		__this->f11 = 1;
		m103(__this, &m103_MI);
		return;
	}
}
extern MethodInfo m1_MI;
 bool m1 (t1 * __this, MethodInfo* method){
	t5  V_0 = {0};
	{
		t2 * L_0 = m104(__this, &m104_MI);
		t5  L_1 = m105(L_0, &m105_MI);
		V_0 = L_1;
		float L_2 = ((&V_0)->f1);
		t5 * L_3 = &(__this->f12);
		float L_4 = (L_3->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t56_TI));
		float L_5 = fabsf(((float)(L_2-L_4)));
		float L_6 = (__this->f2);
		return ((((float)L_5) > ((float)L_6))? 1 : 0);
	}
}
extern MethodInfo m2_MI;
 bool m2 (t1 * __this, MethodInfo* method){
	t5  V_0 = {0};
	t5  V_1 = {0};
	{
		t2 * L_0 = m104(__this, &m104_MI);
		t5  L_1 = m105(L_0, &m105_MI);
		V_0 = L_1;
		float L_2 = ((&V_0)->f2);
		t2 * L_3 = (__this->f8);
		t5  L_4 = m105(L_3, &m105_MI);
		V_1 = L_4;
		float L_5 = ((&V_1)->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t56_TI));
		float L_6 = fabsf(((float)(L_2-L_5)));
		float L_7 = (__this->f3);
		return ((((float)L_6) > ((float)L_7))? 1 : 0);
	}
}
extern MethodInfo m3_MI;
 void m3 (t1 * __this, MethodInfo* method){
	{
		t2 * L_0 = (__this->f8);
		t5  L_1 = m105(L_0, &m105_MI);
		__this->f12 = L_1;
		bool L_2 = (__this->f11);
		if (!L_2)
		{
			goto IL_0062;
		}
	}
	{
		bool L_3 = (__this->f9);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		t5 * L_4 = &(__this->f12);
		t5 * L_5 = L_4;
		float L_6 = (L_5->f1);
		float L_7 = (__this->f10);
		L_5->f1 = ((float)(L_6+L_7));
		goto IL_005c;
	}

IL_0044:
	{
		t5 * L_8 = &(__this->f12);
		t5 * L_9 = L_8;
		float L_10 = (L_9->f1);
		float L_11 = (__this->f10);
		L_9->f1 = ((float)(L_10-L_11));
	}

IL_005c:
	{
		m4(__this, &m4_MI);
	}

IL_0062:
	{
		return;
	}
}
extern MethodInfo m4_MI;
 void m4 (t1 * __this, MethodInfo* method){
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	t5  V_2 = {0};
	t5  V_3 = {0};
	t5  V_4 = {0};
	t5  V_5 = {0};
	t5  V_6 = {0};
	t5  V_7 = {0};
	{
		t2 * L_0 = m104(__this, &m104_MI);
		t5  L_1 = m105(L_0, &m105_MI);
		V_2 = L_1;
		float L_2 = ((&V_2)->f1);
		V_0 = L_2;
		t2 * L_3 = m104(__this, &m104_MI);
		t5  L_4 = m105(L_3, &m105_MI);
		V_3 = L_4;
		float L_5 = ((&V_3)->f2);
		V_1 = L_5;
		bool L_6 = m1(__this, &m1_MI);
		if (!L_6)
		{
			goto IL_0064;
		}
	}
	{
		t2 * L_7 = m104(__this, &m104_MI);
		t5  L_8 = m105(L_7, &m105_MI);
		V_4 = L_8;
		float L_9 = ((&V_4)->f1);
		t5 * L_10 = &(__this->f12);
		float L_11 = (L_10->f1);
		float L_12 = (__this->f4);
		float L_13 = m107(NULL, &m107_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t56_TI));
		float L_14 = m108(NULL, L_9, L_11, ((float)(L_12*L_13)), &m108_MI);
		V_0 = L_14;
	}

IL_0064:
	{
		bool L_15 = m2(__this, &m2_MI);
		if (!L_15)
		{
			goto IL_00a9;
		}
	}
	{
		t2 * L_16 = m104(__this, &m104_MI);
		t5  L_17 = m105(L_16, &m105_MI);
		V_5 = L_17;
		float L_18 = ((&V_5)->f2);
		t2 * L_19 = (__this->f8);
		t5  L_20 = m105(L_19, &m105_MI);
		V_6 = L_20;
		float L_21 = ((&V_6)->f2);
		float L_22 = (__this->f5);
		float L_23 = m107(NULL, &m107_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t56_TI));
		float L_24 = m108(NULL, L_18, L_21, ((float)(L_22*L_23)), &m108_MI);
		V_1 = L_24;
	}

IL_00a9:
	{
		t4 * L_25 = &(__this->f7);
		float L_26 = (L_25->f1);
		t4 * L_27 = &(__this->f6);
		float L_28 = (L_27->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t56_TI));
		float L_29 = m109(NULL, V_0, L_26, L_28, &m109_MI);
		V_0 = L_29;
		t4 * L_30 = &(__this->f7);
		float L_31 = (L_30->f2);
		t4 * L_32 = &(__this->f6);
		float L_33 = (L_32->f2);
		float L_34 = m109(NULL, V_1, L_31, L_33, &m109_MI);
		V_1 = L_34;
		t2 * L_35 = m104(__this, &m104_MI);
		t2 * L_36 = m104(__this, &m104_MI);
		t5  L_37 = m105(L_36, &m105_MI);
		V_7 = L_37;
		float L_38 = ((&V_7)->f3);
		t5  L_39 = {0};
		m110(&L_39, V_0, V_1, L_38, &m110_MI);
		m111(L_35, L_39, &m111_MI);
		return;
	}
}
// Metadata Definition CameraScript
extern Il2CppType t54_0_0_6;
FieldInfo t1_f2_FieldInfo = 
{
	"xMargin", &t54_0_0_6, &t1_TI, offsetof(t1, f2), &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_6;
FieldInfo t1_f3_FieldInfo = 
{
	"yMargin", &t54_0_0_6, &t1_TI, offsetof(t1, f3), &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_6;
FieldInfo t1_f4_FieldInfo = 
{
	"xSmooth", &t54_0_0_6, &t1_TI, offsetof(t1, f4), &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_6;
FieldInfo t1_f5_FieldInfo = 
{
	"ySmooth", &t54_0_0_6, &t1_TI, offsetof(t1, f5), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_6;
FieldInfo t1_f6_FieldInfo = 
{
	"maxXAndY", &t4_0_0_6, &t1_TI, offsetof(t1, f6), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_6;
FieldInfo t1_f7_FieldInfo = 
{
	"minXAndY", &t4_0_0_6, &t1_TI, offsetof(t1, f7), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t1_f8_FieldInfo = 
{
	"player", &t2_0_0_6, &t1_TI, offsetof(t1, f8), &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_6;
FieldInfo t1_f9_FieldInfo = 
{
	"lookRight", &t55_0_0_6, &t1_TI, offsetof(t1, f9), &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_6;
FieldInfo t1_f10_FieldInfo = 
{
	"extraX", &t54_0_0_6, &t1_TI, offsetof(t1, f10), &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_6;
FieldInfo t1_f11_FieldInfo = 
{
	"alive", &t55_0_0_6, &t1_TI, offsetof(t1, f11), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t1_f12_FieldInfo = 
{
	"position", &t5_0_0_1, &t1_TI, offsetof(t1, f12), &EmptyCustomAttributesCache};
static FieldInfo* t1_FIs[] =
{
	&t1_f2_FieldInfo,
	&t1_f3_FieldInfo,
	&t1_f4_FieldInfo,
	&t1_f5_FieldInfo,
	&t1_f6_FieldInfo,
	&t1_f7_FieldInfo,
	&t1_f8_FieldInfo,
	&t1_f9_FieldInfo,
	&t1_f10_FieldInfo,
	&t1_f11_FieldInfo,
	&t1_f12_FieldInfo,
	NULL
};
extern TypeInfo t1_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m0_MI = 
{
	".ctor", (methodPointerType)&m0, &t1_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1, NULL, (methodPointerType)NULL};
extern TypeInfo t1_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m1_MI = 
{
	"CheckXMargin", (methodPointerType)&m1, &t1_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2, NULL, (methodPointerType)NULL};
extern TypeInfo t1_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m2_MI = 
{
	"CheckYMargin", (methodPointerType)&m2, &t1_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3, NULL, (methodPointerType)NULL};
extern TypeInfo t1_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m3_MI = 
{
	"FixedUpdate", (methodPointerType)&m3, &t1_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 4, NULL, (methodPointerType)NULL};
extern TypeInfo t1_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m4_MI = 
{
	"TrackPlayer", (methodPointerType)&m4, &t1_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 5, NULL, (methodPointerType)NULL};
static MethodInfo* t1_MIs[] =
{
	&m0_MI,
	&m1_MI,
	&m2_MI,
	&m3_MI,
	&m4_MI,
	NULL
};
extern MethodInfo m112_MI;
extern MethodInfo m113_MI;
extern MethodInfo m114_MI;
extern MethodInfo m115_MI;
static MethodInfo* t1_VT[] =
{
	&m112_MI,
	&m113_MI,
	&m114_MI,
	&m115_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t1_0_0_0;
extern Il2CppType t1_1_0_0;
extern TypeInfo t3_TI;
struct t1;
extern TypeInfo t1_TI;
TypeInfo t1_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "CameraScript", "", t1_MIs, NULL, t1_FIs, NULL, &t3_TI, NULL, NULL, &t1_TI, NULL, t1_VT, &EmptyCustomAttributesCache, &t1_TI, &t1_0_0_0, &t1_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 5, 0, 11, 0, 0, 4, 0, 0};
#include "t6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6_TI;
#include "t6MD.h"

#include "t7.h"
#include "t59.h"
#include "t60.h"
#include "t8.h"
#include "t9.h"
#include "UnityEngine_ArrayTypes.h"
#include "t11.h"
#include "t61.h"
#include "t62.h"
extern TypeInfo t6_TI;
extern TypeInfo t8_TI;
extern TypeInfo t61_TI;
extern TypeInfo t62_TI;
#include "t7MD.h"
#include "t9MD.h"
#include "t61MD.h"
#include "t63MD.h"
#include "t62MD.h"
extern MethodInfo m116_MI;
extern MethodInfo m117_MI;
extern MethodInfo m118_MI;
extern MethodInfo m119_MI;
extern MethodInfo m120_MI;


extern MethodInfo m5_MI;
 void m5 (t6 * __this, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		return;
	}
}
extern MethodInfo m6_MI;
 t7 * m6 (t6 * __this, MethodInfo* method){
	{
		t7 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m7_MI;
 t7 * m7 (t6 * __this, MethodInfo* method){
	{
		t7 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8_MI;
 bool m8 (t6 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_00a9;
	}

IL_0021:
	{
		__this->f0 = 0;
		goto IL_0079;
	}

IL_002d:
	{
		t8 * L_1 = (__this->f3);
		t9 * L_2 = (L_1->f3);
		t8 * L_3 = (__this->f3);
		t10* L_4 = (L_3->f4);
		int32_t L_5 = (__this->f0);
		m117(L_2, (*(t11 **)(t11 **)SZArrayLdElema(L_4, L_5)), &m117_MI);
		t61 * L_6 = (t61 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t61_TI));
		m118(L_6, (0.07f), &m118_MI);
		__this->f2 = L_6;
		__this->f1 = 1;
		goto IL_00ab;
	}

IL_006b:
	{
		int32_t L_7 = (__this->f0);
		__this->f0 = ((int32_t)(L_7+1));
	}

IL_0079:
	{
		int32_t L_8 = (__this->f0);
		t8 * L_9 = (__this->f3);
		t10* L_10 = (L_9->f4);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((t52 *)L_10)->max_length))))))
		{
			goto IL_002d;
		}
	}
	{
		t8 * L_11 = (__this->f3);
		t9 * L_12 = (L_11->f3);
		m119(L_12, 0, &m119_MI);
		__this->f1 = (-1);
	}

IL_00a9:
	{
		return 0;
	}

IL_00ab:
	{
		return 1;
	}
	// Dead block : IL_00ad: ldloc.1
}
extern MethodInfo m9_MI;
 void m9 (t6 * __this, MethodInfo* method){
	{
		__this->f1 = (-1);
		return;
	}
}
extern MethodInfo m10_MI;
 void m10 (t6 * __this, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m120(L_0, &m120_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition ClickEffect/<DoClickEffect>c__Iterator0
extern Il2CppType t60_0_0_3;
FieldInfo t6_f0_FieldInfo = 
{
	"<i>__0", &t60_0_0_3, &t6_TI, offsetof(t6, f0), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_3;
FieldInfo t6_f1_FieldInfo = 
{
	"$PC", &t60_0_0_3, &t6_TI, offsetof(t6, f1), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_3;
FieldInfo t6_f2_FieldInfo = 
{
	"$current", &t7_0_0_3, &t6_TI, offsetof(t6, f2), &EmptyCustomAttributesCache};
extern Il2CppType t8_0_0_3;
FieldInfo t6_f3_FieldInfo = 
{
	"<>f__this", &t8_0_0_3, &t6_TI, offsetof(t6, f3), &EmptyCustomAttributesCache};
static FieldInfo* t6_FIs[] =
{
	&t6_f0_FieldInfo,
	&t6_f1_FieldInfo,
	&t6_f2_FieldInfo,
	&t6_f3_FieldInfo,
	NULL
};
extern MethodInfo m6_MI;
static PropertyInfo t6____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&t6_TI, "System.Collections.Generic.IEnumerator<object>.Current", &m6_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m7_MI;
static PropertyInfo t6____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t6_TI, "System.Collections.IEnumerator.Current", &m7_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6_PIs[] =
{
	&t6____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&t6____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern TypeInfo t6_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m5_MI = 
{
	".ctor", (methodPointerType)&m5, &t6_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 10, NULL, (methodPointerType)NULL};
extern TypeInfo t6_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m6;
MethodInfo m6_MI = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current", (methodPointerType)&m6, &t6_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &t6__CustomAttributeCache_m6, 2529, 0, 4, 0, false, false, 11, NULL, (methodPointerType)NULL};
extern TypeInfo t6_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m7;
MethodInfo m7_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7, &t6_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &t6__CustomAttributeCache_m7, 2529, 0, 5, 0, false, false, 12, NULL, (methodPointerType)NULL};
extern TypeInfo t6_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m8_MI = 
{
	"MoveNext", (methodPointerType)&m8, &t6_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 13, NULL, (methodPointerType)NULL};
extern TypeInfo t6_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m9;
MethodInfo m9_MI = 
{
	"Dispose", (methodPointerType)&m9, &t6_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &t6__CustomAttributeCache_m9, 486, 0, 7, 0, false, false, 14, NULL, (methodPointerType)NULL};
extern TypeInfo t6_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m10;
MethodInfo m10_MI = 
{
	"Reset", (methodPointerType)&m10, &t6_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &t6__CustomAttributeCache_m10, 486, 0, 8, 0, false, false, 15, NULL, (methodPointerType)NULL};
static MethodInfo* t6_MIs[] =
{
	&m5_MI,
	&m6_MI,
	&m7_MI,
	&m8_MI,
	&m9_MI,
	&m10_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m6_MI;
extern MethodInfo m7_MI;
extern MethodInfo m8_MI;
extern MethodInfo m9_MI;
extern MethodInfo m10_MI;
static MethodInfo* t6_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m6_MI,
	&m7_MI,
	&m8_MI,
	&m9_MI,
	&m10_MI,
};
extern TypeInfo t64_TI;
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t6_ITIs[] = 
{
	&t64_TI,
	&t12_TI,
	&t65_TI,
};
extern TypeInfo t64_TI;
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static Il2CppInterfaceOffsetPair t6_IOs[] = 
{
	{ &t64_TI, 4},
	{ &t12_TI, 5},
	{ &t65_TI, 7},
};
extern TypeInfo t66_TI;
#include "t66.h"
#include "t66MD.h"
extern MethodInfo m124_MI;
void t6_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void t6_CustomAttributesCacheGenerator_m6(CustomAttributesCache* cache)
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
void t6_CustomAttributesCacheGenerator_m7(CustomAttributesCache* cache)
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
void t6_CustomAttributesCacheGenerator_m9(CustomAttributesCache* cache)
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
void t6_CustomAttributesCacheGenerator_m10(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t67 * tmp;
		tmp = (t67 *)il2cpp_codegen_object_new (&t67_TI);
		m125(tmp, &m125_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t6__CustomAttributeCache = {
1,
NULL,
&t6_CustomAttributesCacheGenerator
};
CustomAttributesCache t6__CustomAttributeCache_m6 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m6
};
CustomAttributesCache t6__CustomAttributeCache_m7 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m7
};
CustomAttributesCache t6__CustomAttributeCache_m9 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m9
};
CustomAttributesCache t6__CustomAttributeCache_m10 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m10
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t6_0_0_0;
extern Il2CppType t6_1_0_0;
extern TypeInfo t7_TI;
struct t6;
extern TypeInfo t6_TI;
extern TypeInfo t8_TI;
extern CustomAttributesCache t6__CustomAttributeCache;
extern CustomAttributesCache t6__CustomAttributeCache_m6;
extern CustomAttributesCache t6__CustomAttributeCache_m7;
extern CustomAttributesCache t6__CustomAttributeCache_m9;
extern CustomAttributesCache t6__CustomAttributeCache_m10;
TypeInfo t6_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<DoClickEffect>c__Iterator0", "", t6_MIs, t6_PIs, t6_FIs, NULL, &t7_TI, NULL, &t8_TI, &t6_TI, t6_ITIs, t6_VT, &t6__CustomAttributeCache, &t6_TI, &t6_0_0_0, &t6_1_0_0, t6_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t6), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 9, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t8_TI;
#include "t8MD.h"

#include "t68.h"
#include "t69.h"
extern TypeInfo t8_TI;
extern TypeInfo t5_TI;
extern TypeInfo t6_TI;
#include "t68MD.h"
extern MethodInfo m103_MI;
extern MethodInfo m126_MI;
extern MethodInfo m127_MI;
extern MethodInfo m128_MI;
extern MethodInfo m129_MI;
extern MethodInfo m104_MI;
extern MethodInfo m111_MI;
extern MethodInfo m119_MI;
extern MethodInfo m14_MI;
extern MethodInfo m130_MI;
extern MethodInfo m5_MI;
struct t57;
#include "t57.h"
#include "t70.h"
#include "t71.h"
struct t57;
 t7 * m131_gshared (t57 * __this, MethodInfo* method);
#define m131(__this, method) (t7 *)m131_gshared((t57 *)__this, method)
#define m126(__this, method) (t9 *)m131_gshared((t57 *)__this, method)
extern MethodInfo m126_MI;


extern MethodInfo m11_MI;
 void m11 (t8 * __this, MethodInfo* method){
	{
		m103(__this, &m103_MI);
		return;
	}
}
extern MethodInfo m12_MI;
 void m12 (t8 * __this, MethodInfo* method){
	{
		((t8_SFs*)InitializedTypeInfo(&t8_TI)->static_fields)->f2 = __this;
		t9 * L_0 = m126(__this, &m126_MI);
		__this->f3 = L_0;
		return;
	}
}
extern MethodInfo m13_MI;
 void m13 (t8 * __this, t5  p0, MethodInfo* method){
	{
		m127(__this, &m127_MI);
		t68 * L_0 = m128(NULL, &m128_MI);
		t5  L_1 = m129(L_0, p0, &m129_MI);
		p0 = L_1;
		(&p0)->f3 = (-1.0f);
		t2 * L_2 = m104(__this, &m104_MI);
		m111(L_2, p0, &m111_MI);
		t9 * L_3 = (__this->f3);
		m119(L_3, 1, &m119_MI);
		t7 * L_4 = m14(__this, &m14_MI);
		m130(__this, L_4, &m130_MI);
		return;
	}
}
extern MethodInfo m14_MI;
 t7 * m14 (t8 * __this, MethodInfo* method){
	t6 * V_0 = {0};
	{
		t6 * L_0 = (t6 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t6_TI));
		m5(L_0, &m5_MI);
		V_0 = L_0;
		V_0->f3 = __this;
		return V_0;
	}
}
// Metadata Definition ClickEffect
extern Il2CppType t8_0_0_22;
FieldInfo t8_f2_FieldInfo = 
{
	"instance", &t8_0_0_22, &t8_TI, offsetof(t8_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t8_f3_FieldInfo = 
{
	"sr", &t9_0_0_1, &t8_TI, offsetof(t8, f3), &EmptyCustomAttributesCache};
extern Il2CppType t10_0_0_6;
FieldInfo t8_f4_FieldInfo = 
{
	"sprites", &t10_0_0_6, &t8_TI, offsetof(t8, f4), &EmptyCustomAttributesCache};
static FieldInfo* t8_FIs[] =
{
	&t8_f2_FieldInfo,
	&t8_f3_FieldInfo,
	&t8_f4_FieldInfo,
	NULL
};
extern TypeInfo t8_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11_MI = 
{
	".ctor", (methodPointerType)&m11, &t8_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 6, NULL, (methodPointerType)NULL};
extern TypeInfo t8_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12_MI = 
{
	"Awake", (methodPointerType)&m12, &t8_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 7, NULL, (methodPointerType)NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t8_m13_ParameterInfos[] = 
{
	{"position", 0, 134217729, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern TypeInfo t8_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m13_MI = 
{
	"Click", (methodPointerType)&m13, &t8_TI, &t53_0_0_0, RuntimeInvoker_t53_t5, t8_m13_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 8, NULL, (methodPointerType)NULL};
extern TypeInfo t8_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t8__CustomAttributeCache_m14;
MethodInfo m14_MI = 
{
	"DoClickEffect", (methodPointerType)&m14, &t8_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &t8__CustomAttributeCache_m14, 129, 0, 255, 0, false, false, 9, NULL, (methodPointerType)NULL};
static MethodInfo* t8_MIs[] =
{
	&m11_MI,
	&m12_MI,
	&m13_MI,
	&m14_MI,
	NULL
};
extern TypeInfo t6_TI;
static TypeInfo* t8_TI__nestedTypes[2] =
{
	&t6_TI,
	NULL
};
extern MethodInfo m112_MI;
extern MethodInfo m113_MI;
extern MethodInfo m114_MI;
extern MethodInfo m115_MI;
static MethodInfo* t8_VT[] =
{
	&m112_MI,
	&m113_MI,
	&m114_MI,
	&m115_MI,
};
extern TypeInfo t67_TI;
extern MethodInfo m125_MI;
void t8_CustomAttributesCacheGenerator_m14(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t67 * tmp;
		tmp = (t67 *)il2cpp_codegen_object_new (&t67_TI);
		m125(tmp, &m125_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t8__CustomAttributeCache_m14 = {
1,
NULL,
&t8_CustomAttributesCacheGenerator_m14
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t8_0_0_0;
extern Il2CppType t8_1_0_0;
extern TypeInfo t3_TI;
struct t8;
extern TypeInfo t8_TI;
extern CustomAttributesCache t8__CustomAttributeCache_m14;
TypeInfo t8_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "ClickEffect", "", t8_MIs, NULL, t8_FIs, NULL, &t3_TI, t8_TI__nestedTypes, NULL, &t8_TI, NULL, t8_VT, &EmptyCustomAttributesCache, &t8_TI, &t8_0_0_0, &t8_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t8), 0, -1, sizeof(t8_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 3, 0, 1, 4, 0, 0};
#include "t13.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t13_TI;
#include "t13MD.h"

#include "t72.h"
#include "t26.h"
extern TypeInfo t13_TI;
#include "t72MD.h"
extern MethodInfo m103_MI;
extern MethodInfo m132_MI;
extern MethodInfo m133_MI;
extern MethodInfo m134_MI;
extern MethodInfo m135_MI;


extern MethodInfo m15_MI;
 void m15 (t13 * __this, MethodInfo* method){
	{
		m103(__this, &m103_MI);
		return;
	}
}
extern MethodInfo m16_MI;
 void m16 (t13 * __this, MethodInfo* method){
	{
		bool L_0 = m132(NULL, (((t13_SFs*)InitializedTypeInfo(&t13_TI)->static_fields)->f2), &m132_MI);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		t26 * L_1 = m133(__this, &m133_MI);
		m134(NULL, L_1, &m134_MI);
		goto IL_0030;
	}

IL_001f:
	{
		t26 * L_2 = m133(__this, &m133_MI);
		m135(NULL, L_2, &m135_MI);
		((t13_SFs*)InitializedTypeInfo(&t13_TI)->static_fields)->f2 = __this;
	}

IL_0030:
	{
		return;
	}
}
// Metadata Definition DontDestroyScript
extern Il2CppType t13_0_0_22;
FieldInfo t13_f2_FieldInfo = 
{
	"instance", &t13_0_0_22, &t13_TI, offsetof(t13_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t13_FIs[] =
{
	&t13_f2_FieldInfo,
	NULL
};
extern TypeInfo t13_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m15_MI = 
{
	".ctor", (methodPointerType)&m15, &t13_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 16, NULL, (methodPointerType)NULL};
extern TypeInfo t13_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16_MI = 
{
	"Awake", (methodPointerType)&m16, &t13_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 17, NULL, (methodPointerType)NULL};
static MethodInfo* t13_MIs[] =
{
	&m15_MI,
	&m16_MI,
	NULL
};
extern MethodInfo m112_MI;
extern MethodInfo m113_MI;
extern MethodInfo m114_MI;
extern MethodInfo m115_MI;
static MethodInfo* t13_VT[] =
{
	&m112_MI,
	&m113_MI,
	&m114_MI,
	&m115_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_1_0_0;
extern TypeInfo t3_TI;
struct t13;
extern TypeInfo t13_TI;
TypeInfo t13_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "DontDestroyScript", "", t13_MIs, NULL, t13_FIs, NULL, &t3_TI, NULL, NULL, &t13_TI, NULL, t13_VT, &EmptyCustomAttributesCache, &t13_TI, &t13_0_0_0, &t13_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t13), 0, -1, sizeof(t13_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 4, 0, 0};
#include "t14.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t14_TI;
#include "t14MD.h"

#include "t15.h"
extern TypeInfo t14_TI;
extern TypeInfo t8_TI;
extern TypeInfo t73_TI;
#include "t15MD.h"
#include "t73MD.h"
extern MethodInfo m103_MI;
extern MethodInfo m104_MI;
extern MethodInfo m136_MI;
extern MethodInfo m137_MI;
extern MethodInfo m138_MI;
extern MethodInfo m139_MI;
extern MethodInfo m13_MI;
struct t57;
#define m136(__this, method) (t15 *)m131_gshared((t57 *)__this, method)
extern MethodInfo m136_MI;


extern MethodInfo m17_MI;
 void m17 (t14 * __this, MethodInfo* method){
	{
		m103(__this, &m103_MI);
		return;
	}
}
extern MethodInfo m18_MI;
 void m18 (t14 * __this, MethodInfo* method){
	{
		t2 * L_0 = m104(__this, &m104_MI);
		t15 * L_1 = m136(L_0, &m136_MI);
		__this->f2 = L_1;
		return;
	}
}
extern MethodInfo m19_MI;
 void m19 (t14 * __this, MethodInfo* method){
	{
		t15 * L_0 = (__this->f2);
		t15 * L_1 = L_0;
		float L_2 = m137(L_1, &m137_MI);
		m138(L_1, ((float)(L_2*(-1.0f))), &m138_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		t5  L_3 = m139(NULL, &m139_MI);
		m13((((t8_SFs*)InitializedTypeInfo(&t8_TI)->static_fields)->f2), L_3, &m13_MI);
		return;
	}
}
// Metadata Definition GravityObjects
extern Il2CppType t15_0_0_1;
FieldInfo t14_f2_FieldInfo = 
{
	"rigidBody", &t15_0_0_1, &t14_TI, offsetof(t14, f2), &EmptyCustomAttributesCache};
static FieldInfo* t14_FIs[] =
{
	&t14_f2_FieldInfo,
	NULL
};
extern TypeInfo t14_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m17_MI = 
{
	".ctor", (methodPointerType)&m17, &t14_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 18, NULL, (methodPointerType)NULL};
extern TypeInfo t14_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m18_MI = 
{
	"Awake", (methodPointerType)&m18, &t14_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 19, NULL, (methodPointerType)NULL};
extern TypeInfo t14_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m19_MI = 
{
	"OnMouseDown", (methodPointerType)&m19, &t14_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 20, NULL, (methodPointerType)NULL};
static MethodInfo* t14_MIs[] =
{
	&m17_MI,
	&m18_MI,
	&m19_MI,
	NULL
};
extern MethodInfo m112_MI;
extern MethodInfo m113_MI;
extern MethodInfo m114_MI;
extern MethodInfo m115_MI;
static MethodInfo* t14_VT[] =
{
	&m112_MI,
	&m113_MI,
	&m114_MI,
	&m115_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_1_0_0;
extern TypeInfo t3_TI;
struct t14;
extern TypeInfo t14_TI;
TypeInfo t14_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "GravityObjects", "", t14_MIs, NULL, t14_FIs, NULL, &t3_TI, NULL, NULL, &t14_TI, NULL, t14_VT, &EmptyCustomAttributesCache, &t14_TI, &t14_0_0_0, &t14_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t14), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 4, 0, 0};
#include "t16.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t16_TI;
#include "t16MD.h"

#include "t17.h"
extern TypeInfo t16_TI;
extern TypeInfo t17_TI;
extern TypeInfo t61_TI;
extern TypeInfo t62_TI;
#include "t74MD.h"
#include "t17MD.h"
extern MethodInfo m116_MI;
extern MethodInfo m140_MI;
extern MethodInfo m117_MI;
extern MethodInfo m141_MI;
extern MethodInfo m118_MI;
extern MethodInfo m27_MI;
extern MethodInfo m120_MI;


extern MethodInfo m20_MI;
 void m20 (t16 * __this, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		return;
	}
}
extern MethodInfo m21_MI;
 t7 * m21 (t16 * __this, MethodInfo* method){
	{
		t7 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m22_MI;
 t7 * m22 (t16 * __this, MethodInfo* method){
	{
		t7 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m23_MI;
 bool m23 (t16 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f0);
		V_0 = L_0;
		__this->f0 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_0087;
		}
	}
	{
		goto IL_009e;
	}

IL_0021:
	{
		goto IL_0087;
	}

IL_0026:
	{
		t17 * L_1 = (__this->f2);
		t9 * L_2 = (L_1->f3);
		t17 * L_3 = (__this->f2);
		t10* L_4 = (L_3->f2);
		t17 * L_5 = (__this->f2);
		t10* L_6 = (L_5->f2);
		int32_t L_7 = m140(NULL, 0, (((int32_t)(((t52 *)L_6)->max_length))), &m140_MI);
		m117(L_2, (*(t11 **)(t11 **)SZArrayLdElema(L_4, L_7)), &m117_MI);
		t17 * L_8 = (__this->f2);
		float L_9 = (L_8->f4);
		t17 * L_10 = (__this->f2);
		float L_11 = (L_10->f5);
		float L_12 = m141(NULL, L_9, L_11, &m141_MI);
		t61 * L_13 = (t61 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t61_TI));
		m118(L_13, L_12, &m118_MI);
		__this->f1 = L_13;
		__this->f0 = 1;
		goto IL_00a0;
	}

IL_0087:
	{
		t17 * L_14 = (__this->f2);
		bool L_15 = m27(L_14, &m27_MI);
		if (L_15)
		{
			goto IL_0026;
		}
	}
	{
		__this->f0 = (-1);
	}

IL_009e:
	{
		return 0;
	}

IL_00a0:
	{
		return 1;
	}
	// Dead block : IL_00a2: ldloc.1
}
extern MethodInfo m24_MI;
 void m24 (t16 * __this, MethodInfo* method){
	{
		__this->f0 = (-1);
		return;
	}
}
extern MethodInfo m25_MI;
 void m25 (t16 * __this, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m120(L_0, &m120_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition LinesScript/<ChangeSprite>c__Iterator1
extern Il2CppType t60_0_0_3;
FieldInfo t16_f0_FieldInfo = 
{
	"$PC", &t60_0_0_3, &t16_TI, offsetof(t16, f0), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_3;
FieldInfo t16_f1_FieldInfo = 
{
	"$current", &t7_0_0_3, &t16_TI, offsetof(t16, f1), &EmptyCustomAttributesCache};
extern Il2CppType t17_0_0_3;
FieldInfo t16_f2_FieldInfo = 
{
	"<>f__this", &t17_0_0_3, &t16_TI, offsetof(t16, f2), &EmptyCustomAttributesCache};
static FieldInfo* t16_FIs[] =
{
	&t16_f0_FieldInfo,
	&t16_f1_FieldInfo,
	&t16_f2_FieldInfo,
	NULL
};
extern MethodInfo m21_MI;
static PropertyInfo t16____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&t16_TI, "System.Collections.Generic.IEnumerator<object>.Current", &m21_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m22_MI;
static PropertyInfo t16____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t16_TI, "System.Collections.IEnumerator.Current", &m22_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t16_PIs[] =
{
	&t16____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&t16____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern TypeInfo t16_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m20_MI = 
{
	".ctor", (methodPointerType)&m20, &t16_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 26, NULL, (methodPointerType)NULL};
extern TypeInfo t16_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t16__CustomAttributeCache_m21;
MethodInfo m21_MI = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current", (methodPointerType)&m21, &t16_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &t16__CustomAttributeCache_m21, 2529, 0, 4, 0, false, false, 27, NULL, (methodPointerType)NULL};
extern TypeInfo t16_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t16__CustomAttributeCache_m22;
MethodInfo m22_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m22, &t16_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &t16__CustomAttributeCache_m22, 2529, 0, 5, 0, false, false, 28, NULL, (methodPointerType)NULL};
extern TypeInfo t16_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m23_MI = 
{
	"MoveNext", (methodPointerType)&m23, &t16_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 29, NULL, (methodPointerType)NULL};
extern TypeInfo t16_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t16__CustomAttributeCache_m24;
MethodInfo m24_MI = 
{
	"Dispose", (methodPointerType)&m24, &t16_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &t16__CustomAttributeCache_m24, 486, 0, 7, 0, false, false, 30, NULL, (methodPointerType)NULL};
extern TypeInfo t16_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t16__CustomAttributeCache_m25;
MethodInfo m25_MI = 
{
	"Reset", (methodPointerType)&m25, &t16_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &t16__CustomAttributeCache_m25, 486, 0, 8, 0, false, false, 31, NULL, (methodPointerType)NULL};
static MethodInfo* t16_MIs[] =
{
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m23_MI,
	&m24_MI,
	&m25_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m21_MI;
extern MethodInfo m22_MI;
extern MethodInfo m23_MI;
extern MethodInfo m24_MI;
extern MethodInfo m25_MI;
static MethodInfo* t16_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m21_MI,
	&m22_MI,
	&m23_MI,
	&m24_MI,
	&m25_MI,
};
extern TypeInfo t64_TI;
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t16_ITIs[] = 
{
	&t64_TI,
	&t12_TI,
	&t65_TI,
};
extern TypeInfo t64_TI;
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static Il2CppInterfaceOffsetPair t16_IOs[] = 
{
	{ &t64_TI, 4},
	{ &t12_TI, 5},
	{ &t65_TI, 7},
};
extern TypeInfo t66_TI;
extern MethodInfo m124_MI;
void t16_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern MethodInfo m125_MI;
void t16_CustomAttributesCacheGenerator_m21(CustomAttributesCache* cache)
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
void t16_CustomAttributesCacheGenerator_m22(CustomAttributesCache* cache)
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
void t16_CustomAttributesCacheGenerator_m24(CustomAttributesCache* cache)
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
void t16_CustomAttributesCacheGenerator_m25(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t67 * tmp;
		tmp = (t67 *)il2cpp_codegen_object_new (&t67_TI);
		m125(tmp, &m125_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t16__CustomAttributeCache = {
1,
NULL,
&t16_CustomAttributesCacheGenerator
};
CustomAttributesCache t16__CustomAttributeCache_m21 = {
1,
NULL,
&t16_CustomAttributesCacheGenerator_m21
};
CustomAttributesCache t16__CustomAttributeCache_m22 = {
1,
NULL,
&t16_CustomAttributesCacheGenerator_m22
};
CustomAttributesCache t16__CustomAttributeCache_m24 = {
1,
NULL,
&t16_CustomAttributesCacheGenerator_m24
};
CustomAttributesCache t16__CustomAttributeCache_m25 = {
1,
NULL,
&t16_CustomAttributesCacheGenerator_m25
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_1_0_0;
extern TypeInfo t7_TI;
struct t16;
extern TypeInfo t16_TI;
extern TypeInfo t17_TI;
extern CustomAttributesCache t16__CustomAttributeCache;
extern CustomAttributesCache t16__CustomAttributeCache_m21;
extern CustomAttributesCache t16__CustomAttributeCache_m22;
extern CustomAttributesCache t16__CustomAttributeCache_m24;
extern CustomAttributesCache t16__CustomAttributeCache_m25;
TypeInfo t16_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<ChangeSprite>c__Iterator1", "", t16_MIs, t16_PIs, t16_FIs, NULL, &t7_TI, NULL, &t17_TI, &t16_TI, t16_ITIs, t16_VT, &t16__CustomAttributeCache, &t16_TI, &t16_0_0_0, &t16_1_0_0, t16_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t16), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 2, 3, 0, 0, 9, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t17_TI;

extern TypeInfo t17_TI;
extern TypeInfo t16_TI;
extern MethodInfo m103_MI;
extern MethodInfo m28_MI;
extern MethodInfo m126_MI;
extern MethodInfo m30_MI;
extern MethodInfo m130_MI;
extern MethodInfo m20_MI;
extern MethodInfo m126_MI;


extern MethodInfo m26_MI;
 void m26 (t17 * __this, MethodInfo* method){
	{
		__this->f4 = (0.15f);
		__this->f5 = (0.4f);
		m103(__this, &m103_MI);
		return;
	}
}
extern MethodInfo m27_MI;
 bool m27 (t17 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m28_MI;
 void m28 (t17 * __this, bool p0, MethodInfo* method){
	{
		__this->f6 = p0;
		return;
	}
}
extern MethodInfo m29_MI;
 void m29 (t17 * __this, MethodInfo* method){
	{
		m28(__this, 1, &m28_MI);
		t9 * L_0 = m126(__this, &m126_MI);
		__this->f3 = L_0;
		t7 * L_1 = m30(__this, &m30_MI);
		m130(__this, L_1, &m130_MI);
		return;
	}
}
extern MethodInfo m30_MI;
 t7 * m30 (t17 * __this, MethodInfo* method){
	t16 * V_0 = {0};
	{
		t16 * L_0 = (t16 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t16_TI));
		m20(L_0, &m20_MI);
		V_0 = L_0;
		V_0->f2 = __this;
		return V_0;
	}
}
// Metadata Definition LinesScript
extern Il2CppType t10_0_0_6;
FieldInfo t17_f2_FieldInfo = 
{
	"sprites", &t10_0_0_6, &t17_TI, offsetof(t17, f2), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t17_f3_FieldInfo = 
{
	"sp", &t9_0_0_1, &t17_TI, offsetof(t17, f3), &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_6;
FieldInfo t17_f4_FieldInfo = 
{
	"min", &t54_0_0_6, &t17_TI, offsetof(t17, f4), &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_6;
FieldInfo t17_f5_FieldInfo = 
{
	"max", &t54_0_0_6, &t17_TI, offsetof(t17, f5), &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_1;
extern CustomAttributesCache t17__CustomAttributeCache_U3CchangeU3Ek__BackingField;
FieldInfo t17_f6_FieldInfo = 
{
	"<change>k__BackingField", &t55_0_0_1, &t17_TI, offsetof(t17, f6), &t17__CustomAttributeCache_U3CchangeU3Ek__BackingField};
static FieldInfo* t17_FIs[] =
{
	&t17_f2_FieldInfo,
	&t17_f3_FieldInfo,
	&t17_f4_FieldInfo,
	&t17_f5_FieldInfo,
	&t17_f6_FieldInfo,
	NULL
};
extern MethodInfo m27_MI;
extern MethodInfo m28_MI;
static PropertyInfo t17____change_PropertyInfo = 
{
	&t17_TI, "change", &m27_MI, &m28_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t17_PIs[] =
{
	&t17____change_PropertyInfo,
	NULL
};
extern TypeInfo t17_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m26_MI = 
{
	".ctor", (methodPointerType)&m26, &t17_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 21, NULL, (methodPointerType)NULL};
extern TypeInfo t17_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t17__CustomAttributeCache_m27;
MethodInfo m27_MI = 
{
	"get_change", (methodPointerType)&m27, &t17_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &t17__CustomAttributeCache_m27, 2182, 0, 255, 0, false, false, 22, NULL, (methodPointerType)NULL};
extern Il2CppType t55_0_0_0;
static ParameterInfo t17_m28_ParameterInfos[] = 
{
	{"value", 0, 134217730, &EmptyCustomAttributesCache, &t55_0_0_0},
};
extern TypeInfo t17_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t75 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t17__CustomAttributeCache_m28;
MethodInfo m28_MI = 
{
	"set_change", (methodPointerType)&m28, &t17_TI, &t53_0_0_0, RuntimeInvoker_t53_t75, t17_m28_ParameterInfos, &t17__CustomAttributeCache_m28, 2182, 0, 255, 1, false, false, 23, NULL, (methodPointerType)NULL};
extern TypeInfo t17_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29_MI = 
{
	"Awake", (methodPointerType)&m29, &t17_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 24, NULL, (methodPointerType)NULL};
extern TypeInfo t17_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t17__CustomAttributeCache_m30;
MethodInfo m30_MI = 
{
	"ChangeSprite", (methodPointerType)&m30, &t17_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &t17__CustomAttributeCache_m30, 129, 0, 255, 0, false, false, 25, NULL, (methodPointerType)NULL};
static MethodInfo* t17_MIs[] =
{
	&m26_MI,
	&m27_MI,
	&m28_MI,
	&m29_MI,
	&m30_MI,
	NULL
};
extern TypeInfo t16_TI;
static TypeInfo* t17_TI__nestedTypes[2] =
{
	&t16_TI,
	NULL
};
extern MethodInfo m112_MI;
extern MethodInfo m113_MI;
extern MethodInfo m114_MI;
extern MethodInfo m115_MI;
static MethodInfo* t17_VT[] =
{
	&m112_MI,
	&m113_MI,
	&m114_MI,
	&m115_MI,
};
extern TypeInfo t66_TI;
extern MethodInfo m124_MI;
void t17_CustomAttributesCacheGenerator_U3CchangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t66 * tmp;
		tmp = (t66 *)il2cpp_codegen_object_new (&t66_TI);
		m124(tmp, &m124_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t66_TI;
extern MethodInfo m124_MI;
void t17_CustomAttributesCacheGenerator_m27(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t66 * tmp;
		tmp = (t66 *)il2cpp_codegen_object_new (&t66_TI);
		m124(tmp, &m124_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t66_TI;
extern MethodInfo m124_MI;
void t17_CustomAttributesCacheGenerator_m28(CustomAttributesCache* cache)
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
extern MethodInfo m125_MI;
void t17_CustomAttributesCacheGenerator_m30(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t67 * tmp;
		tmp = (t67 *)il2cpp_codegen_object_new (&t67_TI);
		m125(tmp, &m125_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t17__CustomAttributeCache_U3CchangeU3Ek__BackingField = {
1,
NULL,
&t17_CustomAttributesCacheGenerator_U3CchangeU3Ek__BackingField
};
CustomAttributesCache t17__CustomAttributeCache_m27 = {
1,
NULL,
&t17_CustomAttributesCacheGenerator_m27
};
CustomAttributesCache t17__CustomAttributeCache_m28 = {
1,
NULL,
&t17_CustomAttributesCacheGenerator_m28
};
CustomAttributesCache t17__CustomAttributeCache_m30 = {
1,
NULL,
&t17_CustomAttributesCacheGenerator_m30
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t17_0_0_0;
extern Il2CppType t17_1_0_0;
extern TypeInfo t3_TI;
struct t17;
extern TypeInfo t17_TI;
extern CustomAttributesCache t17__CustomAttributeCache_U3CchangeU3Ek__BackingField;
extern CustomAttributesCache t17__CustomAttributeCache_m27;
extern CustomAttributesCache t17__CustomAttributeCache_m28;
extern CustomAttributesCache t17__CustomAttributeCache_m30;
TypeInfo t17_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "LinesScript", "", t17_MIs, t17_PIs, t17_FIs, NULL, &t3_TI, t17_TI__nestedTypes, NULL, &t17_TI, NULL, t17_VT, &EmptyCustomAttributesCache, &t17_TI, &t17_0_0_0, &t17_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t17), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 5, 1, 5, 0, 1, 4, 0, 0};
#include "t18.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t18_TI;
#include "t18MD.h"

#include "t20.h"
#include "t34.h"
#include "t19.h"
extern TypeInfo t34_TI;
extern TypeInfo t4_TI;
extern TypeInfo t18_TI;
#include "t34MD.h"
#include "t19MD.h"
extern MethodInfo m103_MI;
extern MethodInfo m142_MI;
extern MethodInfo m143_MI;
extern MethodInfo m136_MI;
extern MethodInfo m144_MI;
extern MethodInfo m46_MI;
extern MethodInfo m136_MI;


extern MethodInfo m31_MI;
 void m31 (t18 * __this, MethodInfo* method){
	{
		m103(__this, &m103_MI);
		return;
	}
}
extern MethodInfo m32_MI;
 void m32 (t18 * __this, t20 * p0, MethodInfo* method){
	t4  V_0 = {0};
	{
		t34* L_0 = m142(p0, &m142_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		bool L_1 = m143(NULL, L_0, (t34*) &_stringLiteral1, &m143_MI);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		t15 * L_2 = m136(p0, &m136_MI);
		t4  L_3 = m144(L_2, &m144_MI);
		V_0 = L_3;
		float L_4 = ((&V_0)->f2);
		if ((((float)L_4) >= ((float)(0.0f))))
		{
			goto IL_003d;
		}
	}
	{
		t19 * L_5 = (__this->f2);
		m46(L_5, &m46_MI);
	}

IL_003d:
	{
		return;
	}
}
// Metadata Definition HitHeadTriggerScript
extern Il2CppType t19_0_0_6;
FieldInfo t18_f2_FieldInfo = 
{
	"player", &t19_0_0_6, &t18_TI, offsetof(t18, f2), &EmptyCustomAttributesCache};
static FieldInfo* t18_FIs[] =
{
	&t18_f2_FieldInfo,
	NULL
};
extern TypeInfo t18_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m31_MI = 
{
	".ctor", (methodPointerType)&m31, &t18_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 32, NULL, (methodPointerType)NULL};
extern Il2CppType t20_0_0_0;
static ParameterInfo t18_m32_ParameterInfos[] = 
{
	{"coll", 0, 134217731, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t18_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m32_MI = 
{
	"OnTriggerEnter2D", (methodPointerType)&m32, &t18_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t18_m32_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 33, NULL, (methodPointerType)NULL};
static MethodInfo* t18_MIs[] =
{
	&m31_MI,
	&m32_MI,
	NULL
};
extern MethodInfo m112_MI;
extern MethodInfo m113_MI;
extern MethodInfo m114_MI;
extern MethodInfo m115_MI;
static MethodInfo* t18_VT[] =
{
	&m112_MI,
	&m113_MI,
	&m114_MI,
	&m115_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t18_0_0_0;
extern Il2CppType t18_1_0_0;
extern TypeInfo t3_TI;
struct t18;
extern TypeInfo t18_TI;
TypeInfo t18_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "HitHeadTriggerScript", "", t18_MIs, NULL, t18_FIs, NULL, &t3_TI, NULL, NULL, &t18_TI, NULL, t18_VT, &EmptyCustomAttributesCache, &t18_TI, &t18_0_0_0, &t18_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t18), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 4, 0, 0};
#include "t21.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t21_TI;
#include "t21MD.h"

extern TypeInfo t21_TI;
extern MethodInfo m103_MI;
extern MethodInfo m44_MI;


extern MethodInfo m33_MI;
 void m33 (t21 * __this, MethodInfo* method){
	{
		m103(__this, &m103_MI);
		return;
	}
}
extern MethodInfo m34_MI;
 void m34 (t21 * __this, t20 * p0, MethodInfo* method){
	{
		t19 * L_0 = (__this->f2);
		m44(L_0, 1, &m44_MI);
		return;
	}
}
// Metadata Definition JumpTriggerScript
extern Il2CppType t19_0_0_6;
FieldInfo t21_f2_FieldInfo = 
{
	"player", &t19_0_0_6, &t21_TI, offsetof(t21, f2), &EmptyCustomAttributesCache};
static FieldInfo* t21_FIs[] =
{
	&t21_f2_FieldInfo,
	NULL
};
extern TypeInfo t21_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m33_MI = 
{
	".ctor", (methodPointerType)&m33, &t21_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 34, NULL, (methodPointerType)NULL};
extern Il2CppType t20_0_0_0;
static ParameterInfo t21_m34_ParameterInfos[] = 
{
	{"coll", 0, 134217732, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t21_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m34_MI = 
{
	"OnTriggerEnter2D", (methodPointerType)&m34, &t21_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t21_m34_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 35, NULL, (methodPointerType)NULL};
static MethodInfo* t21_MIs[] =
{
	&m33_MI,
	&m34_MI,
	NULL
};
extern MethodInfo m112_MI;
extern MethodInfo m113_MI;
extern MethodInfo m114_MI;
extern MethodInfo m115_MI;
static MethodInfo* t21_VT[] =
{
	&m112_MI,
	&m113_MI,
	&m114_MI,
	&m115_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t21_0_0_0;
extern Il2CppType t21_1_0_0;
extern TypeInfo t3_TI;
struct t21;
extern TypeInfo t21_TI;
TypeInfo t21_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "JumpTriggerScript", "", t21_MIs, NULL, t21_FIs, NULL, &t3_TI, NULL, NULL, &t21_TI, NULL, t21_VT, &EmptyCustomAttributesCache, &t21_TI, &t21_0_0_0, &t21_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t21), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 4, 0, 0};
#include "t22.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t22_TI;
#include "t22MD.h"



// Metadata Definition PlayerControls/PLAYER_STATE
extern Il2CppType t60_0_0_1542;
FieldInfo t22_f1_FieldInfo = 
{
	"value__", &t60_0_0_1542, &t22_TI, offsetof(t22, f1) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t22_0_0_32854;
FieldInfo t22_f2_FieldInfo = 
{
	"IDLE", &t22_0_0_32854, &t22_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t22_0_0_32854;
FieldInfo t22_f3_FieldInfo = 
{
	"RUNNING", &t22_0_0_32854, &t22_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t22_0_0_32854;
FieldInfo t22_f4_FieldInfo = 
{
	"JUMPING", &t22_0_0_32854, &t22_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t22_0_0_32854;
FieldInfo t22_f5_FieldInfo = 
{
	"PUSHING", &t22_0_0_32854, &t22_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t22_FIs[] =
{
	&t22_f1_FieldInfo,
	&t22_f2_FieldInfo,
	&t22_f3_FieldInfo,
	&t22_f4_FieldInfo,
	&t22_f5_FieldInfo,
	NULL
};
static const int32_t t22_f2_DefaultValueData = 0;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t22_f2_DefaultValue = 
{
	&t22_f2_FieldInfo, { (char*)&t22_f2_DefaultValueData, &t60_0_0_0 }};
static const int32_t t22_f3_DefaultValueData = 1;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t22_f3_DefaultValue = 
{
	&t22_f3_FieldInfo, { (char*)&t22_f3_DefaultValueData, &t60_0_0_0 }};
static const int32_t t22_f4_DefaultValueData = 2;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t22_f4_DefaultValue = 
{
	&t22_f4_FieldInfo, { (char*)&t22_f4_DefaultValueData, &t60_0_0_0 }};
static const int32_t t22_f5_DefaultValueData = 3;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t22_f5_DefaultValue = 
{
	&t22_f5_FieldInfo, { (char*)&t22_f5_DefaultValueData, &t60_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t22_FDVs[] = 
{
	&t22_f2_DefaultValue,
	&t22_f3_DefaultValue,
	&t22_f4_DefaultValue,
	&t22_f5_DefaultValue,
	NULL
};
static MethodInfo* t22_MIs[] =
{
	NULL
};
extern MethodInfo m145_MI;
extern MethodInfo m113_MI;
extern MethodInfo m146_MI;
extern MethodInfo m147_MI;
extern MethodInfo m148_MI;
extern MethodInfo m149_MI;
extern MethodInfo m150_MI;
extern MethodInfo m151_MI;
extern MethodInfo m152_MI;
extern MethodInfo m153_MI;
extern MethodInfo m154_MI;
extern MethodInfo m155_MI;
extern MethodInfo m156_MI;
extern MethodInfo m157_MI;
extern MethodInfo m158_MI;
extern MethodInfo m159_MI;
extern MethodInfo m160_MI;
extern MethodInfo m161_MI;
extern MethodInfo m162_MI;
extern MethodInfo m163_MI;
extern MethodInfo m164_MI;
extern MethodInfo m165_MI;
extern MethodInfo m166_MI;
static MethodInfo* t22_VT[] =
{
	&m145_MI,
	&m113_MI,
	&m146_MI,
	&m147_MI,
	&m148_MI,
	&m149_MI,
	&m150_MI,
	&m151_MI,
	&m152_MI,
	&m153_MI,
	&m154_MI,
	&m155_MI,
	&m156_MI,
	&m157_MI,
	&m158_MI,
	&m159_MI,
	&m160_MI,
	&m161_MI,
	&m162_MI,
	&m163_MI,
	&m164_MI,
	&m165_MI,
	&m166_MI,
};
extern TypeInfo t76_TI;
extern TypeInfo t77_TI;
extern TypeInfo t78_TI;
static Il2CppInterfaceOffsetPair t22_IOs[] = 
{
	{ &t76_TI, 4},
	{ &t77_TI, 5},
	{ &t78_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t22_0_0_0;
extern Il2CppType t22_1_0_0;
extern TypeInfo t23_TI;
extern TypeInfo t60_TI;
extern TypeInfo t60_TI;
extern TypeInfo t19_TI;
TypeInfo t22_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "PLAYER_STATE", "", t22_MIs, NULL, t22_FIs, NULL, &t23_TI, NULL, &t19_TI, &t60_TI, NULL, t22_VT, &EmptyCustomAttributesCache, &t60_TI, &t22_0_0_0, &t22_1_0_0, t22_IOs, NULL, NULL, t22_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t22)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 258, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t24.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t24_TI;
#include "t24MD.h"

extern TypeInfo t24_TI;
extern TypeInfo t61_TI;
extern TypeInfo t62_TI;
#include "t79MD.h"
extern MethodInfo m116_MI;
extern MethodInfo m118_MI;
extern MethodInfo m167_MI;
extern MethodInfo m120_MI;


extern MethodInfo m35_MI;
 void m35 (t24 * __this, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		return;
	}
}
extern MethodInfo m36_MI;
 t7 * m36 (t24 * __this, MethodInfo* method){
	{
		t7 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m37_MI;
 t7 * m37 (t24 * __this, MethodInfo* method){
	{
		t7 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m38_MI;
 bool m38 (t24 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f0);
		V_0 = L_0;
		__this->f0 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_004e;
	}

IL_0021:
	{
		t61 * L_1 = (t61 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t61_TI));
		m118(L_1, (2.0f), &m118_MI);
		__this->f1 = L_1;
		__this->f0 = 1;
		goto IL_0050;
	}

IL_003d:
	{
		m167(NULL, (t34*) &_stringLiteral5, &m167_MI);
		__this->f0 = (-1);
	}

IL_004e:
	{
		return 0;
	}

IL_0050:
	{
		return 1;
	}
	// Dead block : IL_0052: ldloc.1
}
extern MethodInfo m39_MI;
 void m39 (t24 * __this, MethodInfo* method){
	{
		__this->f0 = (-1);
		return;
	}
}
extern MethodInfo m40_MI;
 void m40 (t24 * __this, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m120(L_0, &m120_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition PlayerControls/<Restart>c__Iterator2
extern Il2CppType t60_0_0_3;
FieldInfo t24_f0_FieldInfo = 
{
	"$PC", &t60_0_0_3, &t24_TI, offsetof(t24, f0), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_3;
FieldInfo t24_f1_FieldInfo = 
{
	"$current", &t7_0_0_3, &t24_TI, offsetof(t24, f1), &EmptyCustomAttributesCache};
static FieldInfo* t24_FIs[] =
{
	&t24_f0_FieldInfo,
	&t24_f1_FieldInfo,
	NULL
};
extern MethodInfo m36_MI;
static PropertyInfo t24____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&t24_TI, "System.Collections.Generic.IEnumerator<object>.Current", &m36_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m37_MI;
static PropertyInfo t24____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t24_TI, "System.Collections.IEnumerator.Current", &m37_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t24_PIs[] =
{
	&t24____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&t24____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern TypeInfo t24_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m35_MI = 
{
	".ctor", (methodPointerType)&m35, &t24_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 46, NULL, (methodPointerType)NULL};
extern TypeInfo t24_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t24__CustomAttributeCache_m36;
MethodInfo m36_MI = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current", (methodPointerType)&m36, &t24_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &t24__CustomAttributeCache_m36, 2529, 0, 4, 0, false, false, 47, NULL, (methodPointerType)NULL};
extern TypeInfo t24_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t24__CustomAttributeCache_m37;
MethodInfo m37_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m37, &t24_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &t24__CustomAttributeCache_m37, 2529, 0, 5, 0, false, false, 48, NULL, (methodPointerType)NULL};
extern TypeInfo t24_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m38_MI = 
{
	"MoveNext", (methodPointerType)&m38, &t24_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 49, NULL, (methodPointerType)NULL};
extern TypeInfo t24_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t24__CustomAttributeCache_m39;
MethodInfo m39_MI = 
{
	"Dispose", (methodPointerType)&m39, &t24_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &t24__CustomAttributeCache_m39, 486, 0, 7, 0, false, false, 50, NULL, (methodPointerType)NULL};
extern TypeInfo t24_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t24__CustomAttributeCache_m40;
MethodInfo m40_MI = 
{
	"Reset", (methodPointerType)&m40, &t24_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &t24__CustomAttributeCache_m40, 486, 0, 8, 0, false, false, 51, NULL, (methodPointerType)NULL};
static MethodInfo* t24_MIs[] =
{
	&m35_MI,
	&m36_MI,
	&m37_MI,
	&m38_MI,
	&m39_MI,
	&m40_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m36_MI;
extern MethodInfo m37_MI;
extern MethodInfo m38_MI;
extern MethodInfo m39_MI;
extern MethodInfo m40_MI;
static MethodInfo* t24_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m36_MI,
	&m37_MI,
	&m38_MI,
	&m39_MI,
	&m40_MI,
};
extern TypeInfo t64_TI;
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t24_ITIs[] = 
{
	&t64_TI,
	&t12_TI,
	&t65_TI,
};
extern TypeInfo t64_TI;
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static Il2CppInterfaceOffsetPair t24_IOs[] = 
{
	{ &t64_TI, 4},
	{ &t12_TI, 5},
	{ &t65_TI, 7},
};
extern TypeInfo t66_TI;
extern MethodInfo m124_MI;
void t24_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern MethodInfo m125_MI;
void t24_CustomAttributesCacheGenerator_m36(CustomAttributesCache* cache)
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
void t24_CustomAttributesCacheGenerator_m37(CustomAttributesCache* cache)
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
void t24_CustomAttributesCacheGenerator_m39(CustomAttributesCache* cache)
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
void t24_CustomAttributesCacheGenerator_m40(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t67 * tmp;
		tmp = (t67 *)il2cpp_codegen_object_new (&t67_TI);
		m125(tmp, &m125_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t24__CustomAttributeCache = {
1,
NULL,
&t24_CustomAttributesCacheGenerator
};
CustomAttributesCache t24__CustomAttributeCache_m36 = {
1,
NULL,
&t24_CustomAttributesCacheGenerator_m36
};
CustomAttributesCache t24__CustomAttributeCache_m37 = {
1,
NULL,
&t24_CustomAttributesCacheGenerator_m37
};
CustomAttributesCache t24__CustomAttributeCache_m39 = {
1,
NULL,
&t24_CustomAttributesCacheGenerator_m39
};
CustomAttributesCache t24__CustomAttributeCache_m40 = {
1,
NULL,
&t24_CustomAttributesCacheGenerator_m40
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t24_0_0_0;
extern Il2CppType t24_1_0_0;
extern TypeInfo t7_TI;
struct t24;
extern TypeInfo t24_TI;
extern TypeInfo t19_TI;
extern CustomAttributesCache t24__CustomAttributeCache;
extern CustomAttributesCache t24__CustomAttributeCache_m36;
extern CustomAttributesCache t24__CustomAttributeCache_m37;
extern CustomAttributesCache t24__CustomAttributeCache_m39;
extern CustomAttributesCache t24__CustomAttributeCache_m40;
TypeInfo t24_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<Restart>c__Iterator2", "", t24_MIs, t24_PIs, t24_FIs, NULL, &t7_TI, NULL, &t19_TI, &t24_TI, t24_ITIs, t24_VT, &t24__CustomAttributeCache, &t24_TI, &t24_0_0_0, &t24_1_0_0, t24_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t24), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 9, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t19_TI;

#include "t25.h"
#include "t28.h"
#include "t80.h"
#include "t27.h"
#include "t81.h"
extern TypeInfo t19_TI;
extern TypeInfo t1_TI;
extern TypeInfo t24_TI;
extern TypeInfo t73_TI;
extern TypeInfo t5_TI;
extern TypeInfo t34_TI;
#include "t26MD.h"
#include "t82MD.h"
#include "t4MD.h"
#include "t28MD.h"
#include "t25MD.h"
extern MethodInfo m103_MI;
extern MethodInfo m128_MI;
extern MethodInfo m168_MI;
extern MethodInfo m104_MI;
extern MethodInfo m136_MI;
extern MethodInfo m169_MI;
extern MethodInfo m170_MI;
extern MethodInfo m171_MI;
extern MethodInfo m48_MI;
extern MethodInfo m172_MI;
extern MethodInfo m173_MI;
extern MethodInfo m174_MI;
extern MethodInfo m175_MI;
extern MethodInfo m138_MI;
extern MethodInfo m176_MI;
extern MethodInfo m177_MI;
extern MethodInfo m178_MI;
extern MethodInfo m47_MI;
extern MethodInfo m130_MI;
extern MethodInfo m179_MI;
extern MethodInfo m180_MI;
extern MethodInfo m35_MI;
extern MethodInfo m181_MI;
extern MethodInfo m182_MI;
extern MethodInfo m183_MI;
extern MethodInfo m184_MI;
extern MethodInfo m185_MI;
extern MethodInfo m186_MI;
extern MethodInfo m144_MI;
extern MethodInfo m187_MI;
extern MethodInfo m188_MI;
extern MethodInfo m167_MI;
extern MethodInfo m142_MI;
extern MethodInfo m143_MI;
extern MethodInfo m46_MI;
extern MethodInfo m133_MI;
extern MethodInfo m189_MI;
extern MethodInfo m119_MI;
struct t57;
#define m168(__this, method) (t1 *)m131_gshared((t57 *)__this, method)
extern MethodInfo m168_MI;
extern MethodInfo m136_MI;
struct t57;
#define m170(__this, method) (t25 *)m131_gshared((t57 *)__this, method)
extern MethodInfo m170_MI;
struct t57;
#define m171(__this, method) (t28 *)m131_gshared((t57 *)__this, method)
extern MethodInfo m171_MI;
struct t57;
#define m172(__this, method) (t80 *)m131_gshared((t57 *)__this, method)
extern MethodInfo m172_MI;


extern MethodInfo m41_MI;
 void m41 (t19 * __this, MethodInfo* method){
	{
		__this->f2 = 1;
		__this->f3 = (5.0f);
		__this->f4 = (2.0f);
		__this->f5 = (500.0f);
		__this->f10 = 1;
		m103(__this, &m103_MI);
		return;
	}
}
extern MethodInfo m42_MI;
 void m42 (t19 * __this, MethodInfo* method){
	{
		t68 * L_0 = m128(NULL, &m128_MI);
		t1 * L_1 = m168(L_0, &m168_MI);
		__this->f6 = L_1;
		t2 * L_2 = m104(__this, &m104_MI);
		t15 * L_3 = m136(L_2, &m136_MI);
		__this->f7 = L_3;
		t26 * L_4 = (__this->f13);
		t2 * L_5 = m169(L_4, &m169_MI);
		t25 * L_6 = m170(L_5, &m170_MI);
		__this->f12 = L_6;
		t28 * L_7 = m171(__this, &m171_MI);
		__this->f23 = L_7;
		return;
	}
}
extern MethodInfo m43_MI;
 void m43 (t19 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		m48(__this, &m48_MI);
	}

IL_0011:
	{
		return;
	}
}
extern MethodInfo m44_MI;
 void m44 (t19 * __this, bool p0, MethodInfo* method){
	{
		__this->f9 = p0;
		return;
	}
}
extern MethodInfo m45_MI;
 void m45 (t19 * __this, bool p0, MethodInfo* method){
	{
		__this->f8 = p0;
		return;
	}
}
extern MethodInfo m46_MI;
 void m46 (t19 * __this, MethodInfo* method){
	{
		__this->f2 = 0;
		t80 * L_0 = m172(__this, &m172_MI);
		m173(L_0, 0, &m173_MI);
		t15 * L_1 = (__this->f7);
		t4  L_2 = m174(NULL, &m174_MI);
		m175(L_1, L_2, &m175_MI);
		t15 * L_3 = (__this->f7);
		m138(L_3, (3.0f), &m138_MI);
		t15 * L_4 = (__this->f7);
		t4  L_5 = m176(NULL, &m176_MI);
		float L_6 = (__this->f5);
		t4  L_7 = m177(NULL, L_5, L_6, &m177_MI);
		t4  L_8 = m177(NULL, L_7, (2.0f), &m177_MI);
		m178(L_4, L_8, &m178_MI);
		t1 * L_9 = (__this->f6);
		L_9->f11 = 0;
		t7 * L_10 = m47(__this, &m47_MI);
		m130(__this, L_10, &m130_MI);
		t28 * L_11 = (__this->f23);
		t27 * L_12 = (__this->f21);
		m179(L_11, L_12, &m179_MI);
		t28 * L_13 = (__this->f23);
		m180(L_13, &m180_MI);
		return;
	}
}
extern MethodInfo m47_MI;
 t7 * m47 (t19 * __this, MethodInfo* method){
	t24 * V_0 = {0};
	{
		t24 * L_0 = (t24 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t24_TI));
		m35(L_0, &m35_MI);
		V_0 = L_0;
		return V_0;
	}
}
extern MethodInfo m48_MI;
 void m48 (t19 * __this, MethodInfo* method){
	t5  V_0 = {0};
	t5  V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		bool L_0 = m181(NULL, ((int32_t)100), &m181_MI);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		bool L_1 = m181(NULL, ((int32_t)275), &m181_MI);
		if (!L_1)
		{
			goto IL_00ef;
		}
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		bool L_2 = m181(NULL, ((int32_t)97), &m181_MI);
		if (L_2)
		{
			goto IL_00ef;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		bool L_3 = m181(NULL, ((int32_t)276), &m181_MI);
		if (L_3)
		{
			goto IL_00ef;
		}
	}
	{
		bool L_4 = (__this->f8);
		if (!L_4)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_5 = (__this->f14);
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		bool L_6 = (__this->f11);
		if (!L_6)
		{
			goto IL_0074;
		}
	}
	{
		t25 * L_7 = (__this->f12);
		m182(L_7, (t34*) &_stringLiteral2, &m182_MI);
		__this->f14 = 3;
		goto IL_00a2;
	}

IL_0074:
	{
		int32_t L_8 = (__this->f14);
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_00a2;
		}
	}
	{
		bool L_9 = (__this->f8);
		if (L_9)
		{
			goto IL_00a2;
		}
	}
	{
		t25 * L_10 = (__this->f12);
		m182(L_10, (t34*) &_stringLiteral3, &m182_MI);
		__this->f14 = 1;
	}

IL_00a2:
	{
		t2 * L_11 = m104(__this, &m104_MI);
		t5  L_12 = m183(NULL, &m183_MI);
		m184(L_11, L_12, &m184_MI);
		t15 * L_13 = (__this->f7);
		t4  L_14 = m185(NULL, &m185_MI);
		float L_15 = (__this->f4);
		t4  L_16 = m177(NULL, L_14, L_15, &m177_MI);
		float L_17 = m186(NULL, &m186_MI);
		t4  L_18 = m177(NULL, L_16, L_17, &m177_MI);
		m178(L_13, L_18, &m178_MI);
		t1 * L_19 = (__this->f6);
		L_19->f9 = 1;
		__this->f11 = 1;
		goto IL_01d6;
	}

IL_00ef:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		bool L_20 = m181(NULL, ((int32_t)97), &m181_MI);
		if (L_20)
		{
			goto IL_010a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		bool L_21 = m181(NULL, ((int32_t)276), &m181_MI);
		if (!L_21)
		{
			goto IL_01d6;
		}
	}

IL_010a:
	{
		bool L_22 = (__this->f8);
		if (!L_22)
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_23 = (__this->f14);
		if ((((int32_t)L_23) == ((int32_t)3)))
		{
			goto IL_0148;
		}
	}
	{
		bool L_24 = (__this->f11);
		if (L_24)
		{
			goto IL_0148;
		}
	}
	{
		t25 * L_25 = (__this->f12);
		m182(L_25, (t34*) &_stringLiteral2, &m182_MI);
		__this->f14 = 3;
		goto IL_0176;
	}

IL_0148:
	{
		int32_t L_26 = (__this->f14);
		if ((((int32_t)L_26) == ((int32_t)1)))
		{
			goto IL_0176;
		}
	}
	{
		bool L_27 = (__this->f8);
		if (L_27)
		{
			goto IL_0176;
		}
	}
	{
		t25 * L_28 = (__this->f12);
		m182(L_28, (t34*) &_stringLiteral3, &m182_MI);
		__this->f14 = 1;
	}

IL_0176:
	{
		t5  L_29 = m183(NULL, &m183_MI);
		V_0 = L_29;
		(&V_0)->f1 = (-1.0f);
		t2 * L_30 = m104(__this, &m104_MI);
		m184(L_30, V_0, &m184_MI);
		t15 * L_31 = (__this->f7);
		t4  L_32 = m185(NULL, &m185_MI);
		t4  L_33 = m177(NULL, L_32, (-1.0f), &m177_MI);
		float L_34 = (__this->f4);
		t4  L_35 = m177(NULL, L_33, L_34, &m177_MI);
		float L_36 = m186(NULL, &m186_MI);
		t4  L_37 = m177(NULL, L_35, L_36, &m177_MI);
		m178(L_31, L_37, &m178_MI);
		t1 * L_38 = (__this->f6);
		L_38->f9 = 0;
		__this->f11 = 0;
	}

IL_01d6:
	{
		bool L_39 = (__this->f9);
		if (!L_39)
		{
			goto IL_0253;
		}
	}
	{
		bool L_40 = (__this->f10);
		if (!L_40)
		{
			goto IL_0253;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		bool L_41 = m181(NULL, ((int32_t)119), &m181_MI);
		if (L_41)
		{
			goto IL_0207;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		bool L_42 = m181(NULL, ((int32_t)273), &m181_MI);
		if (!L_42)
		{
			goto IL_0253;
		}
	}

IL_0207:
	{
		__this->f9 = 0;
		__this->f10 = 0;
		t15 * L_43 = (__this->f7);
		t4  L_44 = m176(NULL, &m176_MI);
		float L_45 = (__this->f5);
		t4  L_46 = m177(NULL, L_44, L_45, &m177_MI);
		m178(L_43, L_46, &m178_MI);
		__this->f14 = 2;
		t28 * L_47 = (__this->f23);
		t27 * L_48 = (__this->f19);
		m179(L_47, L_48, &m179_MI);
		t28 * L_49 = (__this->f23);
		m180(L_49, &m180_MI);
	}

IL_0253:
	{
		t15 * L_50 = (__this->f7);
		t4  L_51 = m144(L_50, &m144_MI);
		t5  L_52 = m187(NULL, L_51, &m187_MI);
		V_1 = L_52;
		float L_53 = ((&V_1)->f1);
		float L_54 = (__this->f3);
		if ((((float)L_53) < ((float)L_54)))
		{
			goto IL_0283;
		}
	}
	{
		float L_55 = (__this->f3);
		(&V_1)->f1 = L_55;
	}

IL_0283:
	{
		float L_56 = ((&V_1)->f1);
		float L_57 = (__this->f3);
		if ((((float)L_56) > ((float)((-L_57)))))
		{
			goto IL_02a4;
		}
	}
	{
		float L_58 = (__this->f3);
		(&V_1)->f1 = ((-L_58));
	}

IL_02a4:
	{
		t15 * L_59 = (__this->f7);
		t4  L_60 = m188(NULL, V_1, &m188_MI);
		m175(L_59, L_60, &m175_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		bool L_61 = m181(NULL, ((int32_t)119), &m181_MI);
		if (L_61)
		{
			goto IL_02d7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		bool L_62 = m181(NULL, ((int32_t)273), &m181_MI);
		if (L_62)
		{
			goto IL_02d7;
		}
	}
	{
		__this->f10 = 1;
	}

IL_02d7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		bool L_63 = m181(NULL, ((int32_t)119), &m181_MI);
		if (L_63)
		{
			goto IL_034a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		bool L_64 = m181(NULL, ((int32_t)273), &m181_MI);
		if (L_64)
		{
			goto IL_034a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		bool L_65 = m181(NULL, ((int32_t)97), &m181_MI);
		if (L_65)
		{
			goto IL_034a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		bool L_66 = m181(NULL, ((int32_t)276), &m181_MI);
		if (L_66)
		{
			goto IL_034a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		bool L_67 = m181(NULL, ((int32_t)100), &m181_MI);
		if (L_67)
		{
			goto IL_034a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		bool L_68 = m181(NULL, ((int32_t)275), &m181_MI);
		if (L_68)
		{
			goto IL_034a;
		}
	}
	{
		int32_t L_69 = (__this->f14);
		if (!L_69)
		{
			goto IL_034a;
		}
	}
	{
		t25 * L_70 = (__this->f12);
		m182(L_70, (t34*) &_stringLiteral4, &m182_MI);
		__this->f14 = 0;
	}

IL_034a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t73_TI));
		bool L_71 = m181(NULL, ((int32_t)114), &m181_MI);
		if (!L_71)
		{
			goto IL_0360;
		}
	}
	{
		m167(NULL, (t34*) &_stringLiteral5, &m167_MI);
	}

IL_0360:
	{
		return;
	}
}
extern MethodInfo m49_MI;
 void m49 (t19 * __this, t20 * p0, MethodInfo* method){
	{
		bool L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		t34* L_1 = m142(p0, &m142_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		bool L_2 = m143(NULL, L_1, (t34*) &_stringLiteral6, &m143_MI);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		m46(__this, &m46_MI);
	}

IL_0026:
	{
		bool L_3 = (__this->f2);
		if (!L_3)
		{
			goto IL_00c4;
		}
	}
	{
		t34* L_4 = m142(p0, &m142_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		bool L_5 = m143(NULL, L_4, (t34*) &_stringLiteral7, &m143_MI);
		if (!L_5)
		{
			goto IL_00c4;
		}
	}
	{
		t26 * L_6 = m133(p0, &m133_MI);
		m189(L_6, 0, &m189_MI);
		int32_t L_7 = (__this->f18);
		__this->f18 = ((int32_t)(L_7+1));
		t28 * L_8 = (__this->f23);
		t27 * L_9 = (__this->f22);
		m179(L_8, L_9, &m179_MI);
		t28 * L_10 = (__this->f23);
		m180(L_10, &m180_MI);
		int32_t L_11 = (__this->f18);
		if ((((uint32_t)L_11) != ((uint32_t)1)))
		{
			goto IL_00a0;
		}
	}
	{
		t9 * L_12 = (__this->f15);
		m119(L_12, 0, &m119_MI);
		t9 * L_13 = (__this->f16);
		m119(L_13, 1, &m119_MI);
	}

IL_00a0:
	{
		int32_t L_14 = (__this->f18);
		if ((((uint32_t)L_14) != ((uint32_t)2)))
		{
			goto IL_00c4;
		}
	}
	{
		t9 * L_15 = (__this->f16);
		m119(L_15, 0, &m119_MI);
		t9 * L_16 = (__this->f17);
		m119(L_16, 1, &m119_MI);
	}

IL_00c4:
	{
		bool L_17 = (__this->f2);
		if (!L_17)
		{
			goto IL_00ee;
		}
	}
	{
		t34* L_18 = m142(p0, &m142_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		bool L_19 = m143(NULL, L_18, (t34*) &_stringLiteral8, &m143_MI);
		if (!L_19)
		{
			goto IL_00ee;
		}
	}
	{
		m167(NULL, (t34*) &_stringLiteral9, &m167_MI);
	}

IL_00ee:
	{
		return;
	}
}
extern MethodInfo m50_MI;
 void m50 (t19 * __this, t20 * p0, MethodInfo* method){
	{
		bool L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		t34* L_1 = m142(p0, &m142_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		bool L_2 = m143(NULL, L_1, (t34*) &_stringLiteral6, &m143_MI);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		m46(__this, &m46_MI);
		goto IL_0047;
	}

IL_002b:
	{
		t28 * L_3 = (__this->f23);
		t27 * L_4 = (__this->f20);
		m179(L_3, L_4, &m179_MI);
		t28 * L_5 = (__this->f23);
		m180(L_5, &m180_MI);
	}

IL_0047:
	{
		return;
	}
}
// Metadata Definition PlayerControls
extern Il2CppType t55_0_0_1;
FieldInfo t19_f2_FieldInfo = 
{
	"alive", &t55_0_0_1, &t19_TI, offsetof(t19, f2), &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_6;
FieldInfo t19_f3_FieldInfo = 
{
	"horizontalSpeed", &t54_0_0_6, &t19_TI, offsetof(t19, f3), &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_6;
FieldInfo t19_f4_FieldInfo = 
{
	"moveForce", &t54_0_0_6, &t19_TI, offsetof(t19, f4), &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_6;
FieldInfo t19_f5_FieldInfo = 
{
	"jumpForce", &t54_0_0_6, &t19_TI, offsetof(t19, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1_0_0_1;
FieldInfo t19_f6_FieldInfo = 
{
	"cameraS", &t1_0_0_1, &t19_TI, offsetof(t19, f6), &EmptyCustomAttributesCache};
extern Il2CppType t15_0_0_1;
FieldInfo t19_f7_FieldInfo = 
{
	"rigidBody", &t15_0_0_1, &t19_TI, offsetof(t19, f7), &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_6;
FieldInfo t19_f8_FieldInfo = 
{
	"push", &t55_0_0_6, &t19_TI, offsetof(t19, f8), &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_6;
FieldInfo t19_f9_FieldInfo = 
{
	"canJump", &t55_0_0_6, &t19_TI, offsetof(t19, f9), &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_6;
FieldInfo t19_f10_FieldInfo = 
{
	"jumpButtonReleased", &t55_0_0_6, &t19_TI, offsetof(t19, f10), &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_1;
FieldInfo t19_f11_FieldInfo = 
{
	"directionRight", &t55_0_0_1, &t19_TI, offsetof(t19, f11), &EmptyCustomAttributesCache};
extern Il2CppType t25_0_0_1;
FieldInfo t19_f12_FieldInfo = 
{
	"anim", &t25_0_0_1, &t19_TI, offsetof(t19, f12), &EmptyCustomAttributesCache};
extern Il2CppType t26_0_0_6;
FieldInfo t19_f13_FieldInfo = 
{
	"view", &t26_0_0_6, &t19_TI, offsetof(t19, f13), &EmptyCustomAttributesCache};
extern Il2CppType t22_0_0_6;
FieldInfo t19_f14_FieldInfo = 
{
	"playerState", &t22_0_0_6, &t19_TI, offsetof(t19, f14), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_6;
FieldInfo t19_f15_FieldInfo = 
{
	"cero", &t9_0_0_6, &t19_TI, offsetof(t19, f15), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_6;
FieldInfo t19_f16_FieldInfo = 
{
	"uno", &t9_0_0_6, &t19_TI, offsetof(t19, f16), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_6;
FieldInfo t19_f17_FieldInfo = 
{
	"dos", &t9_0_0_6, &t19_TI, offsetof(t19, f17), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t19_f18_FieldInfo = 
{
	"diamantes", &t60_0_0_1, &t19_TI, offsetof(t19, f18), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_6;
FieldInfo t19_f19_FieldInfo = 
{
	"clipJump", &t27_0_0_6, &t19_TI, offsetof(t19, f19), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_6;
FieldInfo t19_f20_FieldInfo = 
{
	"clipHit", &t27_0_0_6, &t19_TI, offsetof(t19, f20), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_6;
FieldInfo t19_f21_FieldInfo = 
{
	"clipDie", &t27_0_0_6, &t19_TI, offsetof(t19, f21), &EmptyCustomAttributesCache};
extern Il2CppType t27_0_0_6;
FieldInfo t19_f22_FieldInfo = 
{
	"clipCoin", &t27_0_0_6, &t19_TI, offsetof(t19, f22), &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_1;
FieldInfo t19_f23_FieldInfo = 
{
	"audioS", &t28_0_0_1, &t19_TI, offsetof(t19, f23), &EmptyCustomAttributesCache};
static FieldInfo* t19_FIs[] =
{
	&t19_f2_FieldInfo,
	&t19_f3_FieldInfo,
	&t19_f4_FieldInfo,
	&t19_f5_FieldInfo,
	&t19_f6_FieldInfo,
	&t19_f7_FieldInfo,
	&t19_f8_FieldInfo,
	&t19_f9_FieldInfo,
	&t19_f10_FieldInfo,
	&t19_f11_FieldInfo,
	&t19_f12_FieldInfo,
	&t19_f13_FieldInfo,
	&t19_f14_FieldInfo,
	&t19_f15_FieldInfo,
	&t19_f16_FieldInfo,
	&t19_f17_FieldInfo,
	&t19_f18_FieldInfo,
	&t19_f19_FieldInfo,
	&t19_f20_FieldInfo,
	&t19_f21_FieldInfo,
	&t19_f22_FieldInfo,
	&t19_f23_FieldInfo,
	NULL
};
extern TypeInfo t19_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m41_MI = 
{
	".ctor", (methodPointerType)&m41, &t19_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 36, NULL, (methodPointerType)NULL};
extern TypeInfo t19_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m42_MI = 
{
	"Awake", (methodPointerType)&m42, &t19_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 37, NULL, (methodPointerType)NULL};
extern TypeInfo t19_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m43_MI = 
{
	"FixedUpdate", (methodPointerType)&m43, &t19_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 38, NULL, (methodPointerType)NULL};
extern Il2CppType t55_0_0_0;
static ParameterInfo t19_m44_ParameterInfos[] = 
{
	{"_jump", 0, 134217733, &EmptyCustomAttributesCache, &t55_0_0_0},
};
extern TypeInfo t19_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t75 (MethodInfo* method, void* obj, void** args);
MethodInfo m44_MI = 
{
	"setJump", (methodPointerType)&m44, &t19_TI, &t53_0_0_0, RuntimeInvoker_t53_t75, t19_m44_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 39, NULL, (methodPointerType)NULL};
extern Il2CppType t55_0_0_0;
static ParameterInfo t19_m45_ParameterInfos[] = 
{
	{"_push", 0, 134217734, &EmptyCustomAttributesCache, &t55_0_0_0},
};
extern TypeInfo t19_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t75 (MethodInfo* method, void* obj, void** args);
MethodInfo m45_MI = 
{
	"setPush", (methodPointerType)&m45, &t19_TI, &t53_0_0_0, RuntimeInvoker_t53_t75, t19_m45_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 40, NULL, (methodPointerType)NULL};
extern TypeInfo t19_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m46_MI = 
{
	"PlayerDie", (methodPointerType)&m46, &t19_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 41, NULL, (methodPointerType)NULL};
extern TypeInfo t19_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t19__CustomAttributeCache_m47;
MethodInfo m47_MI = 
{
	"Restart", (methodPointerType)&m47, &t19_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &t19__CustomAttributeCache_m47, 129, 0, 255, 0, false, false, 42, NULL, (methodPointerType)NULL};
extern TypeInfo t19_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m48_MI = 
{
	"checkControls", (methodPointerType)&m48, &t19_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 43, NULL, (methodPointerType)NULL};
extern Il2CppType t20_0_0_0;
static ParameterInfo t19_m49_ParameterInfos[] = 
{
	{"coll", 0, 134217735, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t19_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m49_MI = 
{
	"OnTriggerEnter2D", (methodPointerType)&m49, &t19_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t19_m49_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 44, NULL, (methodPointerType)NULL};
extern Il2CppType t20_0_0_0;
static ParameterInfo t19_m50_ParameterInfos[] = 
{
	{"coll", 0, 134217736, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t19_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m50_MI = 
{
	"OnColliderEnter2D", (methodPointerType)&m50, &t19_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t19_m50_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 45, NULL, (methodPointerType)NULL};
static MethodInfo* t19_MIs[] =
{
	&m41_MI,
	&m42_MI,
	&m43_MI,
	&m44_MI,
	&m45_MI,
	&m46_MI,
	&m47_MI,
	&m48_MI,
	&m49_MI,
	&m50_MI,
	NULL
};
extern TypeInfo t22_TI;
extern TypeInfo t24_TI;
static TypeInfo* t19_TI__nestedTypes[3] =
{
	&t22_TI,
	&t24_TI,
	NULL
};
extern MethodInfo m112_MI;
extern MethodInfo m113_MI;
extern MethodInfo m114_MI;
extern MethodInfo m115_MI;
static MethodInfo* t19_VT[] =
{
	&m112_MI,
	&m113_MI,
	&m114_MI,
	&m115_MI,
};
extern TypeInfo t67_TI;
extern MethodInfo m125_MI;
void t19_CustomAttributesCacheGenerator_m47(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t67 * tmp;
		tmp = (t67 *)il2cpp_codegen_object_new (&t67_TI);
		m125(tmp, &m125_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t19__CustomAttributeCache_m47 = {
1,
NULL,
&t19_CustomAttributesCacheGenerator_m47
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t19_0_0_0;
extern Il2CppType t19_1_0_0;
extern TypeInfo t3_TI;
struct t19;
extern TypeInfo t19_TI;
extern CustomAttributesCache t19__CustomAttributeCache_m47;
TypeInfo t19_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "PlayerControls", "", t19_MIs, NULL, t19_FIs, NULL, &t3_TI, t19_TI__nestedTypes, NULL, &t19_TI, NULL, t19_VT, &EmptyCustomAttributesCache, &t19_TI, &t19_0_0_0, &t19_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t19), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 10, 0, 22, 0, 2, 4, 0, 0};
#include "t29.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t29_TI;
#include "t29MD.h"

extern TypeInfo t29_TI;
extern MethodInfo m103_MI;
extern MethodInfo m45_MI;


extern MethodInfo m51_MI;
 void m51 (t29 * __this, MethodInfo* method){
	{
		m103(__this, &m103_MI);
		return;
	}
}
extern MethodInfo m52_MI;
 void m52 (t29 * __this, t20 * p0, MethodInfo* method){
	{
		t19 * L_0 = (__this->f2);
		m45(L_0, 1, &m45_MI);
		return;
	}
}
extern MethodInfo m53_MI;
 void m53 (t29 * __this, t20 * p0, MethodInfo* method){
	{
		t19 * L_0 = (__this->f2);
		m45(L_0, 0, &m45_MI);
		return;
	}
}
// Metadata Definition PushTriggerScript
extern Il2CppType t19_0_0_6;
FieldInfo t29_f2_FieldInfo = 
{
	"player", &t19_0_0_6, &t29_TI, offsetof(t29, f2), &EmptyCustomAttributesCache};
static FieldInfo* t29_FIs[] =
{
	&t29_f2_FieldInfo,
	NULL
};
extern TypeInfo t29_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m51_MI = 
{
	".ctor", (methodPointerType)&m51, &t29_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 52, NULL, (methodPointerType)NULL};
extern Il2CppType t20_0_0_0;
static ParameterInfo t29_m52_ParameterInfos[] = 
{
	{"coll", 0, 134217737, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t29_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m52_MI = 
{
	"OnTriggerEnter2D", (methodPointerType)&m52, &t29_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t29_m52_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 53, NULL, (methodPointerType)NULL};
extern Il2CppType t20_0_0_0;
static ParameterInfo t29_m53_ParameterInfos[] = 
{
	{"coll", 0, 134217738, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t29_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m53_MI = 
{
	"OnTriggerExit2D", (methodPointerType)&m53, &t29_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t29_m53_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 54, NULL, (methodPointerType)NULL};
static MethodInfo* t29_MIs[] =
{
	&m51_MI,
	&m52_MI,
	&m53_MI,
	NULL
};
extern MethodInfo m112_MI;
extern MethodInfo m113_MI;
extern MethodInfo m114_MI;
extern MethodInfo m115_MI;
static MethodInfo* t29_VT[] =
{
	&m112_MI,
	&m113_MI,
	&m114_MI,
	&m115_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t29_0_0_0;
extern Il2CppType t29_1_0_0;
extern TypeInfo t3_TI;
struct t29;
extern TypeInfo t29_TI;
TypeInfo t29_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "PushTriggerScript", "", t29_MIs, NULL, t29_FIs, NULL, &t3_TI, NULL, NULL, &t29_TI, NULL, t29_VT, &EmptyCustomAttributesCache, &t29_TI, &t29_0_0_0, &t29_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t29), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 4, 0, 0};
#include "t30.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t30_TI;
#include "t30MD.h"

extern TypeInfo t30_TI;
extern MethodInfo m103_MI;
extern MethodInfo m167_MI;
extern MethodInfo m133_MI;
extern MethodInfo m189_MI;
extern MethodInfo m190_MI;


extern MethodInfo m54_MI;
 void m54 (t30 * __this, MethodInfo* method){
	{
		m103(__this, &m103_MI);
		return;
	}
}
extern MethodInfo m55_MI;
 void m55 (t30 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		m167(NULL, (t34*) &_stringLiteral5, &m167_MI);
		goto IL_0040;
	}

IL_001a:
	{
		bool L_1 = (__this->f3);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		m167(NULL, (t34*) &_stringLiteral10, &m167_MI);
		goto IL_0040;
	}

IL_0034:
	{
		t26 * L_2 = m133(__this, &m133_MI);
		m189(L_2, 0, &m189_MI);
	}

IL_0040:
	{
		t26 * L_3 = (__this->f4);
		bool L_4 = m190(NULL, L_3, (t72 *)NULL, &m190_MI);
		if (!L_4)
		{
			goto IL_005d;
		}
	}
	{
		t26 * L_5 = (__this->f4);
		m189(L_5, 1, &m189_MI);
	}

IL_005d:
	{
		return;
	}
}
// Metadata Definition introScript
extern Il2CppType t55_0_0_6;
FieldInfo t30_f2_FieldInfo = 
{
	"startGame", &t55_0_0_6, &t30_TI, offsetof(t30, f2), &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_6;
FieldInfo t30_f3_FieldInfo = 
{
	"goToBeggining", &t55_0_0_6, &t30_TI, offsetof(t30, f3), &EmptyCustomAttributesCache};
extern Il2CppType t26_0_0_6;
FieldInfo t30_f4_FieldInfo = 
{
	"next", &t26_0_0_6, &t30_TI, offsetof(t30, f4), &EmptyCustomAttributesCache};
static FieldInfo* t30_FIs[] =
{
	&t30_f2_FieldInfo,
	&t30_f3_FieldInfo,
	&t30_f4_FieldInfo,
	NULL
};
extern TypeInfo t30_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m54_MI = 
{
	".ctor", (methodPointerType)&m54, &t30_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 55, NULL, (methodPointerType)NULL};
extern TypeInfo t30_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m55_MI = 
{
	"OnMouseDown", (methodPointerType)&m55, &t30_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 56, NULL, (methodPointerType)NULL};
static MethodInfo* t30_MIs[] =
{
	&m54_MI,
	&m55_MI,
	NULL
};
extern MethodInfo m112_MI;
extern MethodInfo m113_MI;
extern MethodInfo m114_MI;
extern MethodInfo m115_MI;
static MethodInfo* t30_VT[] =
{
	&m112_MI,
	&m113_MI,
	&m114_MI,
	&m115_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t30_0_0_0;
extern Il2CppType t30_1_0_0;
extern TypeInfo t3_TI;
struct t30;
extern TypeInfo t30_TI;
TypeInfo t30_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "introScript", "", t30_MIs, NULL, t30_FIs, NULL, &t3_TI, NULL, NULL, &t30_TI, NULL, t30_VT, &EmptyCustomAttributesCache, &t30_TI, &t30_0_0_0, &t30_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t30), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 3, 0, 0, 4, 0, 0};
#include "t31.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t31_TI;
#include "t31MD.h"

#include "t32.h"
extern TypeInfo t31_TI;
extern TypeInfo t32_TI;
extern TypeInfo t60_TI;
extern TypeInfo t11_TI;
#include "t32MD.h"
extern MethodInfo m191_MI;
extern MethodInfo m103_MI;
extern MethodInfo m126_MI;
extern MethodInfo m107_MI;
extern MethodInfo m192_MI;
extern MethodInfo m193_MI;
extern MethodInfo m117_MI;
extern MethodInfo m126_MI;


extern MethodInfo m56_MI;
 void m56 (t31 * __this, MethodInfo* method){
	{
		__this->f2 = (0.25f);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t32_TI));
		t32 * L_0 = (t32 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t32_TI));
		m191(L_0, &m191_MI);
		__this->f5 = L_0;
		m103(__this, &m103_MI);
		return;
	}
}
extern MethodInfo m57_MI;
 void m57 (t31 * __this, MethodInfo* method){
	{
		t9 * L_0 = m126(__this, &m126_MI);
		__this->f6 = L_0;
		return;
	}
}
extern MethodInfo m58_MI;
 void m58 (t31 * __this, MethodInfo* method){
	{
		float L_0 = (__this->f4);
		float L_1 = m107(NULL, &m107_MI);
		__this->f4 = ((float)(L_0-L_1));
		float L_2 = (__this->f4);
		if ((((float)L_2) > ((float)(0.0f))))
		{
			goto IL_0086;
		}
	}
	{
		float L_3 = (__this->f2);
		__this->f4 = L_3;
		int32_t L_4 = (__this->f3);
		t32 * L_5 = (__this->f5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m192_MI, L_5);
		__this->f3 = ((int32_t)(((int32_t)(L_4+1))%L_6));
		t32 * L_7 = (__this->f5);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m192_MI, L_7);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_007a;
		}
	}
	{
		t9 * L_9 = (__this->f6);
		t32 * L_10 = (__this->f5);
		int32_t L_11 = (__this->f3);
		t11 * L_12 = (t11 *)VirtFuncInvoker1< t11 *, int32_t >::Invoke(&m193_MI, L_10, L_11);
		m117(L_9, L_12, &m117_MI);
		goto IL_0086;
	}

IL_007a:
	{
		t9 * L_13 = (__this->f6);
		m117(L_13, (t11 *)NULL, &m117_MI);
	}

IL_0086:
	{
		return;
	}
}
// Metadata Definition SpriteSwitcher
extern Il2CppType t54_0_0_6;
FieldInfo t31_f2_FieldInfo = 
{
	"Interval", &t54_0_0_6, &t31_TI, offsetof(t31, f2), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_6;
FieldInfo t31_f3_FieldInfo = 
{
	"Index", &t60_0_0_6, &t31_TI, offsetof(t31, f3), &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_6;
FieldInfo t31_f4_FieldInfo = 
{
	"Timer", &t54_0_0_6, &t31_TI, offsetof(t31, f4), &EmptyCustomAttributesCache};
extern Il2CppType t32_0_0_6;
FieldInfo t31_f5_FieldInfo = 
{
	"SpriteFrames", &t32_0_0_6, &t31_TI, offsetof(t31, f5), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t31_f6_FieldInfo = 
{
	"spriteRenderer", &t9_0_0_1, &t31_TI, offsetof(t31, f6), &EmptyCustomAttributesCache};
static FieldInfo* t31_FIs[] =
{
	&t31_f2_FieldInfo,
	&t31_f3_FieldInfo,
	&t31_f4_FieldInfo,
	&t31_f5_FieldInfo,
	&t31_f6_FieldInfo,
	NULL
};
extern TypeInfo t31_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m56_MI = 
{
	".ctor", (methodPointerType)&m56, &t31_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 57, NULL, (methodPointerType)NULL};
extern TypeInfo t31_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m57_MI = 
{
	"Awake", (methodPointerType)&m57, &t31_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 452, 0, 4, 0, false, false, 58, NULL, (methodPointerType)NULL};
extern TypeInfo t31_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m58_MI = 
{
	"Update", (methodPointerType)&m58, &t31_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 452, 0, 5, 0, false, false, 59, NULL, (methodPointerType)NULL};
static MethodInfo* t31_MIs[] =
{
	&m56_MI,
	&m57_MI,
	&m58_MI,
	NULL
};
extern MethodInfo m112_MI;
extern MethodInfo m113_MI;
extern MethodInfo m114_MI;
extern MethodInfo m115_MI;
extern MethodInfo m57_MI;
extern MethodInfo m58_MI;
static MethodInfo* t31_VT[] =
{
	&m112_MI,
	&m113_MI,
	&m114_MI,
	&m115_MI,
	&m57_MI,
	&m58_MI,
};
extern TypeInfo t83_TI;
#include "t83.h"
#include "t83MD.h"
extern MethodInfo m194_MI;
extern TypeInfo t9_TI;
void t31_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t83 * tmp;
		tmp = (t83 *)il2cpp_codegen_object_new (&t83_TI);
		m194(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t9_TI)), &m194_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t31__CustomAttributeCache = {
1,
NULL,
&t31_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t31_0_0_0;
extern Il2CppType t31_1_0_0;
extern TypeInfo t3_TI;
struct t31;
extern TypeInfo t31_TI;
extern CustomAttributesCache t31__CustomAttributeCache;
TypeInfo t31_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "SpriteSwitcher", "", t31_MIs, NULL, t31_FIs, NULL, &t3_TI, NULL, NULL, &t31_TI, NULL, t31_VT, &t31__CustomAttributeCache, &t31_TI, &t31_0_0_0, &t31_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t31), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 5, 0, 0, 6, 0, 0};
#include "t33.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t33_TI;
#include "t33MD.h"

#include "t36.h"
extern TypeInfo t33_TI;
extern TypeInfo t36_TI;
extern TypeInfo t32_TI;
#include "t36MD.h"
#include "t37MD.h"
extern MethodInfo m195_MI;
extern MethodInfo m191_MI;
extern MethodInfo m196_MI;


extern MethodInfo m59_MI;
 void m59 (t33 * __this, MethodInfo* method){
	{
		__this->f2 = 1;
		__this->f5 = 1;
		__this->f6 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_0 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m195(L_0, &m195_MI);
		__this->f12 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t32_TI));
		t32 * L_1 = (t32 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t32_TI));
		m191(L_1, &m191_MI);
		__this->f13 = L_1;
		m196(__this, &m196_MI);
		return;
	}
}
// Metadata Definition SpAtlas
extern Il2CppType t55_0_0_6;
FieldInfo t33_f2_FieldInfo = 
{
	"Dirty", &t55_0_0_6, &t33_TI, offsetof(t33, f2), &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_6;
FieldInfo t33_f3_FieldInfo = 
{
	"AutoUpdate", &t55_0_0_6, &t33_TI, offsetof(t33, f3), &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_6;
FieldInfo t33_f4_FieldInfo = 
{
	"ForceSquare", &t55_0_0_6, &t33_TI, offsetof(t33, f4), &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_6;
FieldInfo t33_f5_FieldInfo = 
{
	"DefaultTrim", &t55_0_0_6, &t33_TI, offsetof(t33, f5), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_6;
FieldInfo t33_f6_FieldInfo = 
{
	"DefaultPadSize", &t60_0_0_6, &t33_TI, offsetof(t33, f6), &EmptyCustomAttributesCache};
extern Il2CppType t34_0_0_6;
FieldInfo t33_f7_FieldInfo = 
{
	"Identifier", &t34_0_0_6, &t33_TI, offsetof(t33, f7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_6;
FieldInfo t33_f8_FieldInfo = 
{
	"Width", &t60_0_0_6, &t33_TI, offsetof(t33, f8), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_6;
FieldInfo t33_f9_FieldInfo = 
{
	"Height", &t60_0_0_6, &t33_TI, offsetof(t33, f9), &EmptyCustomAttributesCache};
extern Il2CppType t38_0_0_6;
FieldInfo t33_f10_FieldInfo = 
{
	"DefaultPadStyle", &t38_0_0_6, &t33_TI, offsetof(t33, f10), &EmptyCustomAttributesCache};
extern Il2CppType t35_0_0_6;
FieldInfo t33_f11_FieldInfo = 
{
	"Texture", &t35_0_0_6, &t33_TI, offsetof(t33, f11), &EmptyCustomAttributesCache};
extern Il2CppType t36_0_0_6;
FieldInfo t33_f12_FieldInfo = 
{
	"Sources", &t36_0_0_6, &t33_TI, offsetof(t33, f12), &EmptyCustomAttributesCache};
extern Il2CppType t32_0_0_6;
FieldInfo t33_f13_FieldInfo = 
{
	"Sprites", &t32_0_0_6, &t33_TI, offsetof(t33, f13), &EmptyCustomAttributesCache};
static FieldInfo* t33_FIs[] =
{
	&t33_f2_FieldInfo,
	&t33_f3_FieldInfo,
	&t33_f4_FieldInfo,
	&t33_f5_FieldInfo,
	&t33_f6_FieldInfo,
	&t33_f7_FieldInfo,
	&t33_f8_FieldInfo,
	&t33_f9_FieldInfo,
	&t33_f10_FieldInfo,
	&t33_f11_FieldInfo,
	&t33_f12_FieldInfo,
	&t33_f13_FieldInfo,
	NULL
};
extern TypeInfo t33_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m59_MI = 
{
	".ctor", (methodPointerType)&m59, &t33_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 60, NULL, (methodPointerType)NULL};
static MethodInfo* t33_MIs[] =
{
	&m59_MI,
	NULL
};
extern MethodInfo m112_MI;
extern MethodInfo m113_MI;
extern MethodInfo m114_MI;
extern MethodInfo m115_MI;
static MethodInfo* t33_VT[] =
{
	&m112_MI,
	&m113_MI,
	&m114_MI,
	&m115_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t33_0_0_0;
extern Il2CppType t33_1_0_0;
extern TypeInfo t37_TI;
struct t33;
extern TypeInfo t33_TI;
TypeInfo t33_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "SpAtlas", "", t33_MIs, NULL, t33_FIs, NULL, &t37_TI, NULL, NULL, &t33_TI, NULL, t33_VT, &EmptyCustomAttributesCache, &t33_TI, &t33_0_0_0, &t33_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t33), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 12, 0, 0, 4, 0, 0};
#include "t39.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t39_TI;
#include "t39MD.h"



// Metadata Definition SpFlag
extern Il2CppType t60_0_0_1542;
FieldInfo t39_f1_FieldInfo = 
{
	"value__", &t60_0_0_1542, &t39_TI, offsetof(t39, f1) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t39_0_0_32854;
FieldInfo t39_f2_FieldInfo = 
{
	"None", &t39_0_0_32854, &t39_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t39_0_0_32854;
FieldInfo t39_f3_FieldInfo = 
{
	"JustCreated", &t39_0_0_32854, &t39_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t39_0_0_32854;
FieldInfo t39_f4_FieldInfo = 
{
	"MarkedForDestruction", &t39_0_0_32854, &t39_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t39_FIs[] =
{
	&t39_f1_FieldInfo,
	&t39_f2_FieldInfo,
	&t39_f3_FieldInfo,
	&t39_f4_FieldInfo,
	NULL
};
static const int32_t t39_f2_DefaultValueData = 0;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t39_f2_DefaultValue = 
{
	&t39_f2_FieldInfo, { (char*)&t39_f2_DefaultValueData, &t60_0_0_0 }};
static const int32_t t39_f3_DefaultValueData = 1;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t39_f3_DefaultValue = 
{
	&t39_f3_FieldInfo, { (char*)&t39_f3_DefaultValueData, &t60_0_0_0 }};
static const int32_t t39_f4_DefaultValueData = 2;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t39_f4_DefaultValue = 
{
	&t39_f4_FieldInfo, { (char*)&t39_f4_DefaultValueData, &t60_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t39_FDVs[] = 
{
	&t39_f2_DefaultValue,
	&t39_f3_DefaultValue,
	&t39_f4_DefaultValue,
	NULL
};
static MethodInfo* t39_MIs[] =
{
	NULL
};
extern MethodInfo m145_MI;
extern MethodInfo m113_MI;
extern MethodInfo m146_MI;
extern MethodInfo m147_MI;
extern MethodInfo m148_MI;
extern MethodInfo m149_MI;
extern MethodInfo m150_MI;
extern MethodInfo m151_MI;
extern MethodInfo m152_MI;
extern MethodInfo m153_MI;
extern MethodInfo m154_MI;
extern MethodInfo m155_MI;
extern MethodInfo m156_MI;
extern MethodInfo m157_MI;
extern MethodInfo m158_MI;
extern MethodInfo m159_MI;
extern MethodInfo m160_MI;
extern MethodInfo m161_MI;
extern MethodInfo m162_MI;
extern MethodInfo m163_MI;
extern MethodInfo m164_MI;
extern MethodInfo m165_MI;
extern MethodInfo m166_MI;
static MethodInfo* t39_VT[] =
{
	&m145_MI,
	&m113_MI,
	&m146_MI,
	&m147_MI,
	&m148_MI,
	&m149_MI,
	&m150_MI,
	&m151_MI,
	&m152_MI,
	&m153_MI,
	&m154_MI,
	&m155_MI,
	&m156_MI,
	&m157_MI,
	&m158_MI,
	&m159_MI,
	&m160_MI,
	&m161_MI,
	&m162_MI,
	&m163_MI,
	&m164_MI,
	&m165_MI,
	&m166_MI,
};
extern TypeInfo t76_TI;
extern TypeInfo t77_TI;
extern TypeInfo t78_TI;
static Il2CppInterfaceOffsetPair t39_IOs[] = 
{
	{ &t76_TI, 4},
	{ &t77_TI, 5},
	{ &t78_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t39_0_0_0;
extern Il2CppType t39_1_0_0;
extern TypeInfo t23_TI;
extern TypeInfo t60_TI;
extern TypeInfo t60_TI;
TypeInfo t39_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "SpFlag", "", t39_MIs, NULL, t39_FIs, NULL, &t23_TI, NULL, NULL, &t60_TI, NULL, t39_VT, &EmptyCustomAttributesCache, &t60_TI, &t39_0_0_0, &t39_1_0_0, t39_IOs, NULL, NULL, t39_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t39)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t40.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t40_TI;
#include "t40MD.h"



extern MethodInfo m60_MI;
 float m60 (t7 * __this, float p0, float p1, MethodInfo* method){
	float G_B3_0 = 0.0f;
	{
		if ((((float)p1) == ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((float)(p0/p1));
		goto IL_0018;
	}

IL_0013:
	{
		G_B3_0 = (0.0f);
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// Metadata Definition SpHelper
extern Il2CppType t54_0_0_0;
extern Il2CppType t54_0_0_0;
static ParameterInfo t40_m60_ParameterInfos[] = 
{
	{"a", 0, 134217739, &EmptyCustomAttributesCache, &t54_0_0_0},
	{"b", 1, 134217740, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern TypeInfo t40_TI;
extern Il2CppType t54_0_0_0;
extern void* RuntimeInvoker_t54_t54_t54 (MethodInfo* method, void* obj, void** args);
MethodInfo m60_MI = 
{
	"Divide", (methodPointerType)&m60, &t40_TI, &t54_0_0_0, RuntimeInvoker_t54_t54_t54, t40_m60_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 61, NULL, (methodPointerType)NULL};
static MethodInfo* t40_MIs[] =
{
	&m60_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
static MethodInfo* t40_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t40_0_0_0;
extern Il2CppType t40_1_0_0;
extern TypeInfo t7_TI;
struct t40;
extern TypeInfo t40_TI;
TypeInfo t40_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "SpHelper", "", t40_MIs, NULL, NULL, NULL, &t7_TI, NULL, NULL, &t40_TI, NULL, t40_VT, &EmptyCustomAttributesCache, &t40_TI, &t40_0_0_0, &t40_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t40), 0, -1, 0, 0, -1, 1048961, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t41.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t41_TI;
#include "t41MD.h"

#include "t42.h"
#include "t43.h"
#include "t44.h"
#include "t84.h"
#include "t85.h"
extern TypeInfo t41_TI;
extern TypeInfo t42_TI;
extern TypeInfo t53_TI;
extern TypeInfo t84_TI;
extern TypeInfo t44_TI;
extern TypeInfo t55_TI;
extern TypeInfo t65_TI;
extern TypeInfo t85_TI;
extern TypeInfo t60_TI;
#include "t42MD.h"
#include "t43MD.h"
#include "t84MD.h"
#include "t85MD.h"
#include "t44MD.h"
extern MethodInfo m197_MI;
extern MethodInfo m116_MI;
extern MethodInfo m62_MI;
extern MethodInfo m198_MI;
extern MethodInfo m199_MI;
extern MethodInfo m200_MI;
extern MethodInfo m67_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m203_MI;
extern MethodInfo m204_MI;
extern MethodInfo m205_MI;
extern MethodInfo m68_MI;
extern MethodInfo m206_MI;
extern MethodInfo m207_MI;
extern MethodInfo m64_MI;
extern MethodInfo m65_MI;
extern MethodInfo m95_MI;
extern MethodInfo m96_MI;
extern MethodInfo m208_MI;
extern MethodInfo m209_MI;
extern MethodInfo m210_MI;


extern MethodInfo m61_MI;
 void m61 (t41 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t42_TI));
		t42 * L_0 = (t42 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t42_TI));
		m197(L_0, &m197_MI);
		__this->f4 = L_0;
		m116(__this, &m116_MI);
		__this->f0 = p0;
		__this->f1 = p1;
		t42 * L_1 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t41_TI));
		t41 * L_2 = (t41 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t41_TI));
		m62(L_2, 0, 0, p0, p1, &m62_MI);
		VirtActionInvoker1< t41 * >::Invoke(&m198_MI, L_1, L_2);
		return;
	}
}
extern MethodInfo m62_MI;
 void m62 (t41 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t42_TI));
		t42 * L_0 = (t42 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t42_TI));
		m197(L_0, &m197_MI);
		__this->f4 = L_0;
		m116(__this, &m116_MI);
		__this->f0 = p2;
		__this->f1 = p3;
		__this->f2 = p0;
		__this->f3 = p1;
		return;
	}
}
extern MethodInfo m63_MI;
 void m63 (t7 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t42_TI));
		t42 * L_0 = (t42 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t42_TI));
		m197(L_0, &m197_MI);
		((t41_SFs*)InitializedTypeInfo(&t41_TI)->static_fields)->f5 = L_0;
		t42 * L_1 = (t42 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t42_TI));
		m197(L_1, &m197_MI);
		((t41_SFs*)InitializedTypeInfo(&t41_TI)->static_fields)->f6 = L_1;
		return;
	}
}
extern MethodInfo m64_MI;
 int32_t m64 (t41 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		int32_t L_1 = (__this->f0);
		return ((int32_t)(L_0+L_1));
	}
}
extern MethodInfo m65_MI;
 int32_t m65 (t41 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f3);
		int32_t L_1 = (__this->f1);
		return ((int32_t)(L_0+L_1));
	}
}
extern MethodInfo m66_MI;
 bool m66 (t41 * __this, t43 * p0, MethodInfo* method){
	t44 * V_0 = {0};
	t84  V_1 = {0};
	bool V_2 = false;
	int32_t leaveInstructions[1] = {0};
	t86 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t86 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t84  L_0 = m199(p0, &m199_MI);
		V_1 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0027;
		}

IL_000c:
		{
			t44 * L_1 = m200((&V_1), &m200_MI);
			V_0 = L_1;
			bool L_2 = m67(__this, V_0, &m67_MI);
			if (L_2)
			{
				goto IL_0027;
			}
		}

IL_0020:
		{
			V_2 = 0;
			// IL_0022: leave IL_0046
			leaveInstructions[0] = 0x46; // 1
			THROW_SENTINEL(IL_0046);
			// finally target depth: 1
		}

IL_0027:
		{
			bool L_3 = m201((&V_1), &m201_MI);
			if (L_3)
			{
				goto IL_000c;
			}
		}

IL_0033:
		{
			// IL_0033: leave IL_0044
			leaveInstructions[0] = 0x44; // 1
			THROW_SENTINEL(IL_0044);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0038;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t86 *)e.ex;
		goto IL_0038;
	}

IL_0038:
	{ // begin finally (depth: 1)
		t84  L_4 = V_1;
		t7 * L_5 = Box(InitializedTypeInfo(&t84_TI), &L_4);
		InterfaceActionInvoker0::Invoke(&m202_MI, L_5);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x46:
				goto IL_0046;
			case 0x44:
				goto IL_0044;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				t86 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception (_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0044:
	{
		return 1;
	}

IL_0046:
	{
		return V_2;
	}
}
extern MethodInfo m67_MI;
 bool m67 (t41 * __this, t44 * p0, MethodInfo* method){
	t41 * V_0 = {0};
	t85  V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t leaveInstructions[1] = {0};
	t86 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t86 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t42 * L_0 = (__this->f4);
		t85  L_1 = m203(L_0, &m203_MI);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d9;
		}

IL_0011:
		{
			t41 * L_2 = m204((&V_1), &m204_MI);
			V_0 = L_2;
			int32_t L_3 = (V_0->f0);
			int32_t L_4 = (p0->f7);
			V_2 = ((int32_t)(L_3-L_4));
			int32_t L_5 = (V_0->f1);
			int32_t L_6 = (p0->f8);
			V_3 = ((int32_t)(L_5-L_6));
			if ((((int32_t)V_2) < ((int32_t)0)))
			{
				goto IL_00d9;
			}
		}

IL_003c:
		{
			if ((((int32_t)V_3) < ((int32_t)0)))
			{
				goto IL_00d9;
			}
		}

IL_0043:
		{
			int32_t L_7 = (V_0->f2);
			p0->f5 = L_7;
			int32_t L_8 = (V_0->f3);
			p0->f6 = L_8;
			t42 * L_9 = (__this->f4);
			VirtFuncInvoker1< bool, t41 * >::Invoke(&m205_MI, L_9, V_0);
			if ((((int32_t)V_2) <= ((int32_t)0)))
			{
				goto IL_0099;
			}
		}

IL_006f:
		{
			t42 * L_10 = (__this->f4);
			int32_t L_11 = (V_0->f2);
			int32_t L_12 = (p0->f7);
			int32_t L_13 = (V_0->f3);
			int32_t L_14 = (V_0->f1);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t41_TI));
			t41 * L_15 = (t41 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t41_TI));
			m62(L_15, ((int32_t)(L_11+L_12)), L_13, V_2, L_14, &m62_MI);
			VirtActionInvoker1< t41 * >::Invoke(&m198_MI, L_10, L_15);
		}

IL_0099:
		{
			if ((((int32_t)V_3) <= ((int32_t)0)))
			{
				goto IL_00ca;
			}
		}

IL_00a0:
		{
			t42 * L_16 = (__this->f4);
			int32_t L_17 = (V_0->f2);
			int32_t L_18 = (V_0->f3);
			int32_t L_19 = (p0->f8);
			int32_t L_20 = (V_0->f0);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t41_TI));
			t41 * L_21 = (t41 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t41_TI));
			m62(L_21, L_17, ((int32_t)(L_18+L_19)), L_20, V_3, &m62_MI);
			VirtActionInvoker1< t41 * >::Invoke(&m198_MI, L_16, L_21);
		}

IL_00ca:
		{
			m68(__this, p0, &m68_MI);
			V_4 = 1;
			// IL_00d4: leave IL_00f8
			leaveInstructions[0] = 0xF8; // 1
			THROW_SENTINEL(IL_00f8);
			// finally target depth: 1
		}

IL_00d9:
		{
			bool L_22 = m206((&V_1), &m206_MI);
			if (L_22)
			{
				goto IL_0011;
			}
		}

IL_00e5:
		{
			// IL_00e5: leave IL_00f6
			leaveInstructions[0] = 0xF6; // 1
			THROW_SENTINEL(IL_00f6);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_00ea;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t86 *)e.ex;
		goto IL_00ea;
	}

IL_00ea:
	{ // begin finally (depth: 1)
		t85  L_23 = V_1;
		t7 * L_24 = Box(InitializedTypeInfo(&t85_TI), &L_23);
		InterfaceActionInvoker0::Invoke(&m202_MI, L_24);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0xF8:
				goto IL_00f8;
			case 0xF6:
				goto IL_00f6;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				t86 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception (_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_00f6:
	{
		return 0;
	}

IL_00f8:
	{
		return V_4;
	}
}
extern MethodInfo m68_MI;
 void m68 (t41 * __this, t44 * p0, MethodInfo* method){
	t41 * V_0 = {0};
	t85  V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t41 * V_7 = {0};
	t41 * V_8 = {0};
	t85  V_9 = {0};
	int32_t leaveInstructions[1] = {0};
	t86 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t86 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t41_TI));
		VirtActionInvoker0::Invoke(&m207_MI, (((t41_SFs*)InitializedTypeInfo(&t41_TI)->static_fields)->f5));
		VirtActionInvoker0::Invoke(&m207_MI, (((t41_SFs*)InitializedTypeInfo(&t41_TI)->static_fields)->f6));
		t42 * L_0 = (__this->f4);
		t85  L_1 = m203(L_0, &m203_MI);
		V_1 = L_1;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0169;
		}

IL_0025:
		{
			t41 * L_2 = m204((&V_1), &m204_MI);
			V_0 = L_2;
			int32_t L_3 = (p0->f5);
			int32_t L_4 = m64(V_0, &m64_MI);
			if ((((int32_t)L_3) >= ((int32_t)L_4)))
			{
				goto IL_0071;
			}
		}

IL_003e:
		{
			int32_t L_5 = (p0->f6);
			int32_t L_6 = m65(V_0, &m65_MI);
			if ((((int32_t)L_5) >= ((int32_t)L_6)))
			{
				goto IL_0071;
			}
		}

IL_004f:
		{
			int32_t L_7 = m95(p0, &m95_MI);
			int32_t L_8 = (V_0->f2);
			if ((((int32_t)L_7) < ((int32_t)L_8)))
			{
				goto IL_0071;
			}
		}

IL_0060:
		{
			int32_t L_9 = m96(p0, &m96_MI);
			int32_t L_10 = (V_0->f3);
			if ((((int32_t)L_9) >= ((int32_t)L_10)))
			{
				goto IL_0081;
			}
		}

IL_0071:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t41_TI));
			VirtActionInvoker1< t41 * >::Invoke(&m198_MI, (((t41_SFs*)InitializedTypeInfo(&t41_TI)->static_fields)->f5), V_0);
			goto IL_0169;
		}

IL_0081:
		{
			int32_t L_11 = (p0->f5);
			int32_t L_12 = (V_0->f2);
			V_2 = ((int32_t)(L_11-L_12));
			int32_t L_13 = (p0->f6);
			int32_t L_14 = (V_0->f3);
			V_3 = ((int32_t)(L_13-L_14));
			int32_t L_15 = m64(V_0, &m64_MI);
			int32_t L_16 = m95(p0, &m95_MI);
			V_4 = ((int32_t)(L_15-L_16));
			int32_t L_17 = m65(V_0, &m65_MI);
			int32_t L_18 = m96(p0, &m96_MI);
			V_5 = ((int32_t)(L_17-L_18));
			if ((((int32_t)V_2) <= ((int32_t)0)))
			{
				goto IL_00e4;
			}
		}

IL_00c2:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t41_TI));
			int32_t L_19 = (V_0->f2);
			int32_t L_20 = (V_0->f3);
			int32_t L_21 = (V_0->f1);
			t41 * L_22 = (t41 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t41_TI));
			m62(L_22, L_19, L_20, V_2, L_21, &m62_MI);
			VirtActionInvoker1< t41 * >::Invoke(&m198_MI, (((t41_SFs*)InitializedTypeInfo(&t41_TI)->static_fields)->f6), L_22);
		}

IL_00e4:
		{
			if ((((int32_t)V_3) <= ((int32_t)0)))
			{
				goto IL_010d;
			}
		}

IL_00eb:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t41_TI));
			int32_t L_23 = (V_0->f2);
			int32_t L_24 = (V_0->f3);
			int32_t L_25 = (V_0->f0);
			t41 * L_26 = (t41 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t41_TI));
			m62(L_26, L_23, L_24, L_25, V_3, &m62_MI);
			VirtActionInvoker1< t41 * >::Invoke(&m198_MI, (((t41_SFs*)InitializedTypeInfo(&t41_TI)->static_fields)->f6), L_26);
		}

IL_010d:
		{
			if ((((int32_t)V_4) <= ((int32_t)0)))
			{
				goto IL_013b;
			}
		}

IL_0115:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t41_TI));
			int32_t L_27 = m64(V_0, &m64_MI);
			int32_t L_28 = (V_0->f3);
			int32_t L_29 = (V_0->f1);
			t41 * L_30 = (t41 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t41_TI));
			m62(L_30, ((int32_t)(L_27-V_4)), L_28, V_4, L_29, &m62_MI);
			VirtActionInvoker1< t41 * >::Invoke(&m198_MI, (((t41_SFs*)InitializedTypeInfo(&t41_TI)->static_fields)->f6), L_30);
		}

IL_013b:
		{
			if ((((int32_t)V_5) <= ((int32_t)0)))
			{
				goto IL_0169;
			}
		}

IL_0143:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t41_TI));
			int32_t L_31 = (V_0->f2);
			int32_t L_32 = m65(V_0, &m65_MI);
			int32_t L_33 = (V_0->f0);
			t41 * L_34 = (t41 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t41_TI));
			m62(L_34, L_31, ((int32_t)(L_32-V_5)), L_33, V_5, &m62_MI);
			VirtActionInvoker1< t41 * >::Invoke(&m198_MI, (((t41_SFs*)InitializedTypeInfo(&t41_TI)->static_fields)->f6), L_34);
		}

IL_0169:
		{
			bool L_35 = m206((&V_1), &m206_MI);
			if (L_35)
			{
				goto IL_0025;
			}
		}

IL_0175:
		{
			// IL_0175: leave IL_0186
			leaveInstructions[0] = 0x186; // 1
			THROW_SENTINEL(IL_0186);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_017a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t86 *)e.ex;
		goto IL_017a;
	}

IL_017a:
	{ // begin finally (depth: 1)
		t85  L_36 = V_1;
		t7 * L_37 = Box(InitializedTypeInfo(&t85_TI), &L_36);
		InterfaceActionInvoker0::Invoke(&m202_MI, L_37);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x186:
				goto IL_0186;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				t86 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception (_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0186:
	{
		t42 * L_38 = (__this->f4);
		VirtActionInvoker0::Invoke(&m207_MI, L_38);
		t42 * L_39 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t41_TI));
		m208(L_39, (((t41_SFs*)InitializedTypeInfo(&t41_TI)->static_fields)->f5), &m208_MI);
		t42 * L_40 = (__this->f4);
		m208(L_40, (((t41_SFs*)InitializedTypeInfo(&t41_TI)->static_fields)->f6), &m208_MI);
		t42 * L_41 = (__this->f4);
		int32_t L_42 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m209_MI, L_41);
		V_6 = ((int32_t)(L_42-1));
		goto IL_027b;
	}

IL_01c5:
	{
		t42 * L_43 = (__this->f4);
		t41 * L_44 = (t41 *)VirtFuncInvoker1< t41 *, int32_t >::Invoke(&m210_MI, L_43, V_6);
		V_7 = L_44;
		t42 * L_45 = (__this->f4);
		t85  L_46 = m203(L_45, &m203_MI);
		V_9 = L_46;
	}

IL_01e1:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0257;
		}

IL_01e6:
		{
			t41 * L_47 = m204((&V_9), &m204_MI);
			V_8 = L_47;
			if ((((t41 *)V_7) == ((t41 *)V_8)))
			{
				goto IL_0257;
			}
		}

IL_01f8:
		{
			int32_t L_48 = (V_7->f2);
			int32_t L_49 = (V_8->f2);
			if ((((int32_t)L_48) < ((int32_t)L_49)))
			{
				goto IL_0257;
			}
		}

IL_020b:
		{
			int32_t L_50 = (V_7->f3);
			int32_t L_51 = (V_8->f3);
			if ((((int32_t)L_50) < ((int32_t)L_51)))
			{
				goto IL_0257;
			}
		}

IL_021e:
		{
			int32_t L_52 = m64(V_7, &m64_MI);
			int32_t L_53 = m64(V_8, &m64_MI);
			if ((((int32_t)L_52) > ((int32_t)L_53)))
			{
				goto IL_0257;
			}
		}

IL_0231:
		{
			int32_t L_54 = m65(V_7, &m65_MI);
			int32_t L_55 = m65(V_8, &m65_MI);
			if ((((int32_t)L_54) > ((int32_t)L_55)))
			{
				goto IL_0257;
			}
		}

IL_0244:
		{
			t42 * L_56 = (__this->f4);
			VirtFuncInvoker1< bool, t41 * >::Invoke(&m205_MI, L_56, V_7);
			goto IL_0263;
		}

IL_0257:
		{
			bool L_57 = m206((&V_9), &m206_MI);
			if (L_57)
			{
				goto IL_01e6;
			}
		}

IL_0263:
		{
			// IL_0263: leave IL_0275
			leaveInstructions[0] = 0x275; // 1
			THROW_SENTINEL(IL_0275);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0268;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t86 *)e.ex;
		goto IL_0268;
	}

IL_0268:
	{ // begin finally (depth: 1)
		t85  L_58 = V_9;
		t7 * L_59 = Box(InitializedTypeInfo(&t85_TI), &L_58);
		InterfaceActionInvoker0::Invoke(&m202_MI, L_59);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x275:
				goto IL_0275;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				t86 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception (_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0275:
	{
		V_6 = ((int32_t)(V_6-1));
	}

IL_027b:
	{
		if ((((int32_t)V_6) >= ((int32_t)0)))
		{
			goto IL_01c5;
		}
	}
	{
		return;
	}
}
// Metadata Definition SpMaxRects
extern Il2CppType t60_0_0_1;
FieldInfo t41_f0_FieldInfo = 
{
	"w", &t60_0_0_1, &t41_TI, offsetof(t41, f0), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t41_f1_FieldInfo = 
{
	"h", &t60_0_0_1, &t41_TI, offsetof(t41, f1), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t41_f2_FieldInfo = 
{
	"x", &t60_0_0_1, &t41_TI, offsetof(t41, f2), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t41_f3_FieldInfo = 
{
	"y", &t60_0_0_1, &t41_TI, offsetof(t41, f3), &EmptyCustomAttributesCache};
extern Il2CppType t42_0_0_1;
FieldInfo t41_f4_FieldInfo = 
{
	"children", &t42_0_0_1, &t41_TI, offsetof(t41, f4), &EmptyCustomAttributesCache};
extern Il2CppType t42_0_0_17;
FieldInfo t41_f5_FieldInfo = 
{
	"newChildrenA", &t42_0_0_17, &t41_TI, offsetof(t41_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t42_0_0_17;
FieldInfo t41_f6_FieldInfo = 
{
	"newChildrenB", &t42_0_0_17, &t41_TI, offsetof(t41_SFs, f6), &EmptyCustomAttributesCache};
static FieldInfo* t41_FIs[] =
{
	&t41_f0_FieldInfo,
	&t41_f1_FieldInfo,
	&t41_f2_FieldInfo,
	&t41_f3_FieldInfo,
	&t41_f4_FieldInfo,
	&t41_f5_FieldInfo,
	&t41_f6_FieldInfo,
	NULL
};
extern MethodInfo m64_MI;
static PropertyInfo t41____r_PropertyInfo = 
{
	&t41_TI, "r", &m64_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m65_MI;
static PropertyInfo t41____t_PropertyInfo = 
{
	&t41_TI, "t", &m65_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t41_PIs[] =
{
	&t41____r_PropertyInfo,
	&t41____t_PropertyInfo,
	NULL
};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t41_m61_ParameterInfos[] = 
{
	{"newWidth", 0, 134217741, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"newHeight", 1, 134217742, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t41_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m61_MI = 
{
	".ctor", (methodPointerType)&m61, &t41_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t41_m61_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 62, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t41_m62_ParameterInfos[] = 
{
	{"newX", 0, 134217743, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"newY", 1, 134217744, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"newWidth", 2, 134217745, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"newHeight", 3, 134217746, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t41_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m62_MI = 
{
	".ctor", (methodPointerType)&m62, &t41_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60_t60_t60, t41_m62_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 4, false, false, 63, NULL, (methodPointerType)NULL};
extern TypeInfo t41_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m63_MI = 
{
	".cctor", (methodPointerType)&m63, &t41_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 64, NULL, (methodPointerType)NULL};
extern TypeInfo t41_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m64_MI = 
{
	"get_r", (methodPointerType)&m64, &t41_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2177, 0, 255, 0, false, false, 65, NULL, (methodPointerType)NULL};
extern TypeInfo t41_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m65_MI = 
{
	"get_t", (methodPointerType)&m65, &t41_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2177, 0, 255, 0, false, false, 66, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t41_m66_ParameterInfos[] = 
{
	{"rects", 0, 134217747, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t41_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m66_MI = 
{
	"TryPack", (methodPointerType)&m66, &t41_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t41_m66_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 67, NULL, (methodPointerType)NULL};
extern Il2CppType t44_0_0_0;
static ParameterInfo t41_m67_ParameterInfos[] = 
{
	{"rect", 0, 134217748, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern TypeInfo t41_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m67_MI = 
{
	"TryPack", (methodPointerType)&m67, &t41_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t41_m67_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 68, NULL, (methodPointerType)NULL};
extern Il2CppType t44_0_0_0;
static ParameterInfo t41_m68_ParameterInfos[] = 
{
	{"rect", 0, 134217749, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern TypeInfo t41_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m68_MI = 
{
	"Subdivide", (methodPointerType)&m68, &t41_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t41_m68_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 69, NULL, (methodPointerType)NULL};
static MethodInfo* t41_MIs[] =
{
	&m61_MI,
	&m62_MI,
	&m63_MI,
	&m64_MI,
	&m65_MI,
	&m66_MI,
	&m67_MI,
	&m68_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
static MethodInfo* t41_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t41_0_0_0;
extern Il2CppType t41_1_0_0;
extern TypeInfo t7_TI;
struct t41;
extern TypeInfo t41_TI;
TypeInfo t41_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "SpMaxRects", "", t41_MIs, t41_PIs, t41_FIs, NULL, &t7_TI, NULL, NULL, &t41_TI, NULL, t41_VT, &EmptyCustomAttributesCache, &t41_TI, &t41_0_0_0, &t41_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t41), 0, -1, sizeof(t41_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 8, 2, 7, 0, 0, 4, 0, 0};
#include "t38.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t38_TI;
#include "t38MD.h"



// Metadata Definition SpPadStyle
extern Il2CppType t60_0_0_1542;
FieldInfo t38_f1_FieldInfo = 
{
	"value__", &t60_0_0_1542, &t38_TI, offsetof(t38, f1) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t38_0_0_32854;
FieldInfo t38_f2_FieldInfo = 
{
	"Transparent", &t38_0_0_32854, &t38_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t38_0_0_32854;
FieldInfo t38_f3_FieldInfo = 
{
	"Clamp", &t38_0_0_32854, &t38_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t38_0_0_32854;
FieldInfo t38_f4_FieldInfo = 
{
	"Repeat", &t38_0_0_32854, &t38_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t38_FIs[] =
{
	&t38_f1_FieldInfo,
	&t38_f2_FieldInfo,
	&t38_f3_FieldInfo,
	&t38_f4_FieldInfo,
	NULL
};
static const int32_t t38_f2_DefaultValueData = 0;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t38_f2_DefaultValue = 
{
	&t38_f2_FieldInfo, { (char*)&t38_f2_DefaultValueData, &t60_0_0_0 }};
static const int32_t t38_f3_DefaultValueData = 1;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t38_f3_DefaultValue = 
{
	&t38_f3_FieldInfo, { (char*)&t38_f3_DefaultValueData, &t60_0_0_0 }};
static const int32_t t38_f4_DefaultValueData = 2;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t38_f4_DefaultValue = 
{
	&t38_f4_FieldInfo, { (char*)&t38_f4_DefaultValueData, &t60_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t38_FDVs[] = 
{
	&t38_f2_DefaultValue,
	&t38_f3_DefaultValue,
	&t38_f4_DefaultValue,
	NULL
};
static MethodInfo* t38_MIs[] =
{
	NULL
};
extern MethodInfo m145_MI;
extern MethodInfo m113_MI;
extern MethodInfo m146_MI;
extern MethodInfo m147_MI;
extern MethodInfo m148_MI;
extern MethodInfo m149_MI;
extern MethodInfo m150_MI;
extern MethodInfo m151_MI;
extern MethodInfo m152_MI;
extern MethodInfo m153_MI;
extern MethodInfo m154_MI;
extern MethodInfo m155_MI;
extern MethodInfo m156_MI;
extern MethodInfo m157_MI;
extern MethodInfo m158_MI;
extern MethodInfo m159_MI;
extern MethodInfo m160_MI;
extern MethodInfo m161_MI;
extern MethodInfo m162_MI;
extern MethodInfo m163_MI;
extern MethodInfo m164_MI;
extern MethodInfo m165_MI;
extern MethodInfo m166_MI;
static MethodInfo* t38_VT[] =
{
	&m145_MI,
	&m113_MI,
	&m146_MI,
	&m147_MI,
	&m148_MI,
	&m149_MI,
	&m150_MI,
	&m151_MI,
	&m152_MI,
	&m153_MI,
	&m154_MI,
	&m155_MI,
	&m156_MI,
	&m157_MI,
	&m158_MI,
	&m159_MI,
	&m160_MI,
	&m161_MI,
	&m162_MI,
	&m163_MI,
	&m164_MI,
	&m165_MI,
	&m166_MI,
};
extern TypeInfo t76_TI;
extern TypeInfo t77_TI;
extern TypeInfo t78_TI;
static Il2CppInterfaceOffsetPair t38_IOs[] = 
{
	{ &t76_TI, 4},
	{ &t77_TI, 5},
	{ &t78_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t38_0_0_0;
extern Il2CppType t38_1_0_0;
extern TypeInfo t23_TI;
extern TypeInfo t60_TI;
extern TypeInfo t60_TI;
TypeInfo t38_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "SpPadStyle", "", t38_MIs, NULL, t38_FIs, NULL, &t23_TI, NULL, NULL, &t60_TI, NULL, t38_VT, &EmptyCustomAttributesCache, &t60_TI, &t38_0_0_0, &t38_1_0_0, t38_IOs, NULL, NULL, t38_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t38)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t45.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t45_TI;
#include "t45MD.h"

#include "t47.h"
#include "t48.h"
#include "t35.h"
#include "t87.h"
#include "t88.h"
#include "t89.h"
#include "t49.h"
extern TypeInfo t45_TI;
extern TypeInfo t35_TI;
extern TypeInfo t87_TI;
extern TypeInfo t48_TI;
extern TypeInfo t60_TI;
extern TypeInfo t88_TI;
extern TypeInfo t46_TI;
extern TypeInfo t47_TI;
#include "t87MD.h"
#include "t48MD.h"
#include "t35MD.h"
#include "t88MD.h"
#include "t47MD.h"
#include "t49MD.h"
extern MethodInfo m116_MI;
extern MethodInfo m71_MI;
extern MethodInfo m211_MI;
extern MethodInfo m212_MI;
extern MethodInfo m213_MI;
extern MethodInfo m214_MI;
extern MethodInfo m215_MI;
extern MethodInfo m216_MI;
extern MethodInfo m217_MI;
extern MethodInfo m218_MI;
extern MethodInfo m219_MI;
extern MethodInfo m220_MI;
extern MethodInfo m221_MI;
extern MethodInfo m83_MI;
extern MethodInfo m72_MI;
extern MethodInfo m78_MI;
extern MethodInfo m84_MI;
extern MethodInfo m80_MI;
extern MethodInfo m85_MI;
extern MethodInfo m222_MI;
extern MethodInfo m223_MI;
extern MethodInfo m224_MI;
extern MethodInfo m225_MI;
extern MethodInfo m226_MI;
extern MethodInfo m227_MI;
extern MethodInfo m228_MI;


extern MethodInfo m69_MI;
 void m69 (t45 * __this, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		return;
	}
}
extern MethodInfo m70_MI;
 void m70 (t45 * __this, t48 * p0, MethodInfo* method){
	{
		m71(__this, ((t35 *)Castclass(p0, InitializedTypeInfo(&t35_TI))), &m71_MI);
		return;
	}
}
extern MethodInfo m71_MI;
 void m71 (t45 * __this, t35 * p0, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		bool L_0 = m211(NULL, p0, (t72 *)NULL, &m211_MI);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t87 * L_1 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m212(L_1, &m212_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m213_MI, p0);
		__this->f0 = L_2;
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m214_MI, p0);
		__this->f1 = L_3;
		t46* L_4 = m215(p0, &m215_MI);
		__this->f2 = L_4;
		return;
	}
}
extern MethodInfo m72_MI;
 void m72 (t45 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		t88 * L_0 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m216(L_0, &m216_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0013:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		t88 * L_1 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
		m216(L_1, &m216_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0020:
	{
		__this->f0 = p0;
		__this->f1 = p1;
		__this->f2 = ((t46*)SZArrayNew(InitializedTypeInfo(&t46_TI), ((int32_t)(p0*p1))));
		return;
	}
}
extern MethodInfo m73_MI;
 int32_t m73 (t45 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m74_MI;
 int32_t m74 (t45 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m75_MI;
 t46* m75 (t45 * __this, MethodInfo* method){
	{
		t46* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m76_MI;
 void m76 (t45 * __this, t47  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t46* L_0 = (__this->f2);
		V_0 = ((int32_t)((((int32_t)(((t52 *)L_0)->max_length)))-1));
		goto IL_0026;
	}

IL_0010:
	{
		t46* L_1 = (__this->f2);
		*((t47 *)(t47 *)SZArrayLdElema(L_1, V_0)) = p0;
		V_0 = ((int32_t)(V_0-1));
	}

IL_0026:
	{
		if ((((int32_t)V_0) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
extern MethodInfo m77_MI;
 void m77 (t45 * __this, t47  p0, MethodInfo* method){
	int32_t V_0 = 0;
	t47  V_1 = {0};
	{
		t46* L_0 = (__this->f2);
		V_0 = ((int32_t)((((int32_t)(((t52 *)L_0)->max_length)))-1));
		goto IL_0062;
	}

IL_0010:
	{
		t46* L_1 = (__this->f2);
		V_1 = (*(t47 *)((t47 *)(t47 *)SZArrayLdElema(L_1, V_0)));
		uint8_t L_2 = ((&p0)->f0);
		(&V_1)->f0 = L_2;
		uint8_t L_3 = ((&p0)->f1);
		(&V_1)->f1 = L_3;
		uint8_t L_4 = ((&p0)->f2);
		(&V_1)->f2 = L_4;
		t46* L_5 = (__this->f2);
		*((t47 *)(t47 *)SZArrayLdElema(L_5, V_0)) = V_1;
		V_0 = ((int32_t)(V_0-1));
	}

IL_0062:
	{
		if ((((int32_t)V_0) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
extern MethodInfo m78_MI;
 t47  m78 (t45 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t46* L_0 = (__this->f2);
		int32_t L_1 = (__this->f0);
		return (*(t47 *)((t47 *)(t47 *)SZArrayLdElema(L_0, ((int32_t)(p0+((int32_t)(L_1*p1)))))));
	}
}
extern MethodInfo m79_MI;
 t47  m79 (t45 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		if ((((int32_t)p0) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		if ((((int32_t)p1) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_0 = (__this->f0);
		if ((((int32_t)p0) >= ((int32_t)L_0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_1 = (__this->f1);
		if ((((int32_t)p1) < ((int32_t)L_1)))
		{
			goto IL_0030;
		}
	}

IL_0026:
	{
		t47  L_2 = {0};
		m217(&L_2, 0, 0, 0, 0, &m217_MI);
		return L_2;
	}

IL_0030:
	{
		t46* L_3 = (__this->f2);
		int32_t L_4 = (__this->f0);
		return (*(t47 *)((t47 *)(t47 *)SZArrayLdElema(L_3, ((int32_t)(p0+((int32_t)(L_4*p1)))))));
	}
}
extern MethodInfo m80_MI;
 t47  m80 (t45 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		p0 = 0;
		goto IL_0025;
	}

IL_000f:
	{
		int32_t L_0 = (__this->f0);
		if ((((int32_t)p0) < ((int32_t)L_0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_1 = (__this->f0);
		p0 = ((int32_t)(L_1-1));
	}

IL_0025:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		p1 = 0;
		goto IL_004a;
	}

IL_0034:
	{
		int32_t L_2 = (__this->f1);
		if ((((int32_t)p1) < ((int32_t)L_2)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_3 = (__this->f1);
		p1 = ((int32_t)(L_3-1));
	}

IL_004a:
	{
		t46* L_4 = (__this->f2);
		int32_t L_5 = (__this->f0);
		return (*(t47 *)((t47 *)(t47 *)SZArrayLdElema(L_4, ((int32_t)(p0+((int32_t)(L_5*p1)))))));
	}
}
extern MethodInfo m81_MI;
 t47  m81 (t45 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		if ((((int32_t)p0) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_0 = (__this->f0);
		G_B3_0 = ((int32_t)(p0%L_0));
		goto IL_0023;
	}

IL_0014:
	{
		int32_t L_1 = (__this->f0);
		int32_t L_2 = (__this->f0);
		G_B3_0 = ((int32_t)(L_1+((int32_t)(p0%L_2))));
	}

IL_0023:
	{
		p0 = G_B3_0;
		if ((((int32_t)p1) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_3 = (__this->f1);
		G_B6_0 = ((int32_t)(p1%L_3));
		goto IL_0048;
	}

IL_0039:
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = (__this->f1);
		G_B6_0 = ((int32_t)(L_4+((int32_t)(p1%L_5))));
	}

IL_0048:
	{
		p1 = G_B6_0;
		t46* L_6 = (__this->f2);
		int32_t L_7 = (__this->f0);
		return (*(t47 *)((t47 *)(t47 *)SZArrayLdElema(L_6, ((int32_t)(p0+((int32_t)(L_7*p1)))))));
	}
}
extern MethodInfo m82_MI;
 t45 * m82 (t45 * __this, t49  p0, MethodInfo* method){
	{
		float L_0 = m218((&p0), &m218_MI);
		float L_1 = m219((&p0), &m219_MI);
		float L_2 = m220((&p0), &m220_MI);
		float L_3 = m221((&p0), &m221_MI);
		t45 * L_4 = m83(__this, (((int32_t)L_0)), (((int32_t)L_1)), (((int32_t)L_2)), (((int32_t)L_3)), &m83_MI);
		return L_4;
	}
}
extern MethodInfo m83_MI;
 t45 * m83 (t45 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method){
	t45 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		if ((((int32_t)p2) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		p2 = ((-p2));
		p0 = ((int32_t)(p0-p2));
	}

IL_0010:
	{
		if ((((int32_t)p3) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		p3 = ((-p3));
		p1 = ((int32_t)(p1-p3));
	}

IL_0023:
	{
		t45 * L_0 = (t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t45_TI));
		m72(L_0, p2, p3, &m72_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_005d;
	}

IL_0033:
	{
		V_2 = 0;
		goto IL_0052;
	}

IL_003a:
	{
		t47  L_1 = m78(__this, ((int32_t)(V_2+p0)), ((int32_t)(V_1+p1)), &m78_MI);
		m84(V_0, V_2, V_1, L_1, &m84_MI);
		V_2 = ((int32_t)(V_2+1));
	}

IL_0052:
	{
		if ((((int32_t)V_2) < ((int32_t)p2)))
		{
			goto IL_003a;
		}
	}
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_005d:
	{
		if ((((int32_t)V_1) < ((int32_t)p3)))
		{
			goto IL_0033;
		}
	}
	{
		return V_0;
	}
}
extern MethodInfo m84_MI;
 void m84 (t45 * __this, int32_t p0, int32_t p1, t47  p2, MethodInfo* method){
	{
		t46* L_0 = (__this->f2);
		int32_t L_1 = (__this->f0);
		*((t47 *)(t47 *)SZArrayLdElema(L_0, ((int32_t)(p0+((int32_t)(L_1*p1)))))) = p2;
		return;
	}
}
extern MethodInfo m85_MI;
 void m85 (t45 * __this, int32_t p0, int32_t p1, t47  p2, MethodInfo* method){
	{
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		p0 = 0;
		goto IL_0025;
	}

IL_000f:
	{
		int32_t L_0 = (__this->f0);
		if ((((int32_t)p0) < ((int32_t)L_0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_1 = (__this->f0);
		p0 = ((int32_t)(L_1-1));
	}

IL_0025:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		p1 = 0;
		goto IL_004a;
	}

IL_0034:
	{
		int32_t L_2 = (__this->f1);
		if ((((int32_t)p1) < ((int32_t)L_2)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_3 = (__this->f1);
		p1 = ((int32_t)(L_3-1));
	}

IL_004a:
	{
		t46* L_4 = (__this->f2);
		int32_t L_5 = (__this->f0);
		*((t47 *)(t47 *)SZArrayLdElema(L_4, ((int32_t)(p0+((int32_t)(L_5*p1)))))) = p2;
		return;
	}
}
extern MethodInfo m86_MI;
 void m86 (t45 * __this, int32_t p0, int32_t p1, t45 * p2, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0036;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0026;
	}

IL_000e:
	{
		t47  L_0 = m78(p2, V_1, V_0, &m78_MI);
		m84(__this, ((int32_t)(p0+V_1)), ((int32_t)(p1+V_0)), L_0, &m84_MI);
		V_1 = ((int32_t)(V_1+1));
	}

IL_0026:
	{
		int32_t L_1 = (p2->f0);
		if ((((int32_t)V_1) < ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0036:
	{
		int32_t L_2 = (p2->f1);
		if ((((int32_t)V_0) < ((int32_t)L_2)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
extern MethodInfo m87_MI;
 void m87 (t45 * __this, int32_t p0, int32_t p1, t45 * p2, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0036;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0026;
	}

IL_000e:
	{
		t47  L_0 = m80(p2, V_1, V_0, &m80_MI);
		m85(__this, ((int32_t)(p0+V_1)), ((int32_t)(p1+V_0)), L_0, &m85_MI);
		V_1 = ((int32_t)(V_1+1));
	}

IL_0026:
	{
		int32_t L_1 = (p2->f0);
		if ((((int32_t)V_1) < ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0036:
	{
		int32_t L_2 = (p2->f1);
		if ((((int32_t)V_0) < ((int32_t)L_2)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
extern MethodInfo m88_MI;
 t45 * m88 (t45 * __this, MethodInfo* method){
	t45 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t47  V_3 = {0};
	{
		int32_t L_0 = (__this->f1);
		int32_t L_1 = (__this->f0);
		t45 * L_2 = (t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t45_TI));
		m72(L_2, L_0, L_1, &m72_MI);
		V_0 = L_2;
		V_1 = 0;
		goto IL_004f;
	}

IL_0019:
	{
		V_2 = 0;
		goto IL_003f;
	}

IL_0020:
	{
		t47  L_3 = m78(__this, V_2, V_1, &m78_MI);
		V_3 = L_3;
		int32_t L_4 = (__this->f0);
		m84(V_0, V_1, ((int32_t)(((int32_t)(L_4-V_2))-1)), V_3, &m84_MI);
		V_2 = ((int32_t)(V_2+1));
	}

IL_003f:
	{
		int32_t L_5 = (__this->f0);
		if ((((int32_t)V_2) < ((int32_t)L_5)))
		{
			goto IL_0020;
		}
	}
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_004f:
	{
		int32_t L_6 = (__this->f1);
		if ((((int32_t)V_1) < ((int32_t)L_6)))
		{
			goto IL_0019;
		}
	}
	{
		return V_0;
	}
}
extern MethodInfo m89_MI;
 t45 * m89 (t45 * __this, MethodInfo* method){
	t45 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->f1);
		int32_t L_1 = (__this->f0);
		t45 * L_2 = (t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t45_TI));
		m72(L_2, L_0, L_1, &m72_MI);
		V_0 = L_2;
		V_1 = 0;
		goto IL_004d;
	}

IL_0019:
	{
		V_2 = 0;
		goto IL_003d;
	}

IL_0020:
	{
		int32_t L_3 = (__this->f1);
		t47  L_4 = m78(__this, V_2, V_1, &m78_MI);
		m84(V_0, ((int32_t)(((int32_t)(L_3-V_1))-1)), V_2, L_4, &m84_MI);
		V_2 = ((int32_t)(V_2+1));
	}

IL_003d:
	{
		int32_t L_5 = (__this->f0);
		if ((((int32_t)V_2) < ((int32_t)L_5)))
		{
			goto IL_0020;
		}
	}
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_004d:
	{
		int32_t L_6 = (__this->f1);
		if ((((int32_t)V_1) < ((int32_t)L_6)))
		{
			goto IL_0019;
		}
	}
	{
		return V_0;
	}
}
extern MethodInfo m90_MI;
 t45 * m90 (t45 * __this, MethodInfo* method){
	t45 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		t45 * L_2 = (t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t45_TI));
		m72(L_2, L_0, L_1, &m72_MI);
		V_0 = L_2;
		V_1 = 0;
		goto IL_004d;
	}

IL_0019:
	{
		V_2 = 0;
		goto IL_003d;
	}

IL_0020:
	{
		int32_t L_3 = (__this->f0);
		t47  L_4 = m78(__this, V_2, V_1, &m78_MI);
		m84(V_0, ((int32_t)(((int32_t)(L_3-V_2))-1)), V_1, L_4, &m84_MI);
		V_2 = ((int32_t)(V_2+1));
	}

IL_003d:
	{
		int32_t L_5 = (__this->f0);
		if ((((int32_t)V_2) < ((int32_t)L_5)))
		{
			goto IL_0020;
		}
	}
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_004d:
	{
		int32_t L_6 = (__this->f1);
		if ((((int32_t)V_1) < ((int32_t)L_6)))
		{
			goto IL_0019;
		}
	}
	{
		return V_0;
	}
}
extern MethodInfo m91_MI;
 t45 * m91 (t45 * __this, MethodInfo* method){
	t45 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		t45 * L_2 = (t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t45_TI));
		m72(L_2, L_0, L_1, &m72_MI);
		V_0 = L_2;
		V_1 = 0;
		goto IL_004d;
	}

IL_0019:
	{
		V_2 = 0;
		goto IL_003d;
	}

IL_0020:
	{
		int32_t L_3 = (__this->f1);
		t47  L_4 = m78(__this, V_2, V_1, &m78_MI);
		m84(V_0, V_2, ((int32_t)(((int32_t)(L_3-V_1))-1)), L_4, &m84_MI);
		V_2 = ((int32_t)(V_2+1));
	}

IL_003d:
	{
		int32_t L_5 = (__this->f0);
		if ((((int32_t)V_2) < ((int32_t)L_5)))
		{
			goto IL_0020;
		}
	}
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_004d:
	{
		int32_t L_6 = (__this->f1);
		if ((((int32_t)V_1) < ((int32_t)L_6)))
		{
			goto IL_0019;
		}
	}
	{
		return V_0;
	}
}
extern MethodInfo m92_MI;
 t45 * m92 (t45 * __this, t49 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	t47  V_8 = {0};
	t47  V_9 = {0};
	t47  V_10 = {0};
	t47  V_11 = {0};
	{
		V_0 = 0;
		int32_t L_0 = (__this->f0);
		V_1 = L_0;
		V_2 = 0;
		int32_t L_1 = (__this->f1);
		V_3 = L_1;
		goto IL_004e;
	}

IL_0017:
	{
		V_4 = V_2;
		goto IL_0042;
	}

IL_001f:
	{
		t47  L_2 = m78(__this, V_0, V_4, &m78_MI);
		V_8 = L_2;
		uint8_t L_3 = ((&V_8)->f3);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0055;
	}

IL_003c:
	{
		V_4 = ((int32_t)(V_4+1));
	}

IL_0042:
	{
		if ((((int32_t)V_4) < ((int32_t)V_3)))
		{
			goto IL_001f;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_004e:
	{
		if ((((int32_t)V_0) < ((int32_t)V_1)))
		{
			goto IL_0017;
		}
	}

IL_0055:
	{
		goto IL_0093;
	}

IL_005a:
	{
		V_5 = V_2;
		goto IL_0087;
	}

IL_0062:
	{
		t47  L_4 = m78(__this, ((int32_t)(V_1-1)), V_5, &m78_MI);
		V_9 = L_4;
		uint8_t L_5 = ((&V_9)->f3);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_009a;
	}

IL_0081:
	{
		V_5 = ((int32_t)(V_5+1));
	}

IL_0087:
	{
		if ((((int32_t)V_5) < ((int32_t)V_3)))
		{
			goto IL_0062;
		}
	}
	{
		V_1 = ((int32_t)(V_1-1));
	}

IL_0093:
	{
		if ((((int32_t)V_1) > ((int32_t)V_0)))
		{
			goto IL_005a;
		}
	}

IL_009a:
	{
		goto IL_00d6;
	}

IL_009f:
	{
		V_6 = V_0;
		goto IL_00ca;
	}

IL_00a7:
	{
		t47  L_6 = m78(__this, V_6, V_2, &m78_MI);
		V_10 = L_6;
		uint8_t L_7 = ((&V_10)->f3);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_00dd;
	}

IL_00c4:
	{
		V_6 = ((int32_t)(V_6+1));
	}

IL_00ca:
	{
		if ((((int32_t)V_6) < ((int32_t)V_1)))
		{
			goto IL_00a7;
		}
	}
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_00d6:
	{
		if ((((int32_t)V_2) < ((int32_t)V_3)))
		{
			goto IL_009f;
		}
	}

IL_00dd:
	{
		goto IL_011b;
	}

IL_00e2:
	{
		V_7 = V_0;
		goto IL_010f;
	}

IL_00ea:
	{
		t47  L_8 = m78(__this, V_7, ((int32_t)(V_3-1)), &m78_MI);
		V_11 = L_8;
		uint8_t L_9 = ((&V_11)->f3);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		goto IL_0122;
	}

IL_0109:
	{
		V_7 = ((int32_t)(V_7+1));
	}

IL_010f:
	{
		if ((((int32_t)V_7) < ((int32_t)V_1)))
		{
			goto IL_00ea;
		}
	}
	{
		V_3 = ((int32_t)(V_3-1));
	}

IL_011b:
	{
		if ((((int32_t)V_3) > ((int32_t)V_2)))
		{
			goto IL_00e2;
		}
	}

IL_0122:
	{
		m222(p0, (((float)V_0)), &m222_MI);
		m223(p0, (((float)V_2)), &m223_MI);
		m224(p0, (((float)V_1)), &m224_MI);
		m225(p0, (((float)V_3)), &m225_MI);
		t45 * L_10 = m83(__this, V_0, V_2, ((int32_t)(V_1-V_0)), ((int32_t)(V_3-V_2)), &m83_MI);
		return L_10;
	}
}
extern MethodInfo m93_MI;
 t35 * m93 (t45 * __this, MethodInfo* method){
	t35 * V_0 = {0};
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		t35 * L_2 = (t35 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t35_TI));
		m226(L_2, L_0, L_1, &m226_MI);
		V_0 = L_2;
		t46* L_3 = (__this->f2);
		m227(V_0, L_3, &m227_MI);
		m228(V_0, &m228_MI);
		return V_0;
	}
}
// Metadata Definition SpPixels
extern Il2CppType t60_0_0_1;
extern CustomAttributesCache t45__CustomAttributeCache_width;
FieldInfo t45_f0_FieldInfo = 
{
	"width", &t60_0_0_1, &t45_TI, offsetof(t45, f0), &t45__CustomAttributeCache_width};
extern Il2CppType t60_0_0_1;
extern CustomAttributesCache t45__CustomAttributeCache_height;
FieldInfo t45_f1_FieldInfo = 
{
	"height", &t60_0_0_1, &t45_TI, offsetof(t45, f1), &t45__CustomAttributeCache_height};
extern Il2CppType t46_0_0_1;
extern CustomAttributesCache t45__CustomAttributeCache_pixels;
FieldInfo t45_f2_FieldInfo = 
{
	"pixels", &t46_0_0_1, &t45_TI, offsetof(t45, f2), &t45__CustomAttributeCache_pixels};
static FieldInfo* t45_FIs[] =
{
	&t45_f0_FieldInfo,
	&t45_f1_FieldInfo,
	&t45_f2_FieldInfo,
	NULL
};
extern MethodInfo m73_MI;
static PropertyInfo t45____Width_PropertyInfo = 
{
	&t45_TI, "Width", &m73_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m74_MI;
static PropertyInfo t45____Height_PropertyInfo = 
{
	&t45_TI, "Height", &m74_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m75_MI;
static PropertyInfo t45____Pixels_PropertyInfo = 
{
	&t45_TI, "Pixels", &m75_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t45_PIs[] =
{
	&t45____Width_PropertyInfo,
	&t45____Height_PropertyInfo,
	&t45____Pixels_PropertyInfo,
	NULL
};
extern TypeInfo t45_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m69_MI = 
{
	".ctor", (methodPointerType)&m69, &t45_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 70, NULL, (methodPointerType)NULL};
extern Il2CppType t48_0_0_0;
static ParameterInfo t45_m70_ParameterInfos[] = 
{
	{"texture", 0, 134217750, &EmptyCustomAttributesCache, &t48_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m70_MI = 
{
	".ctor", (methodPointerType)&m70, &t45_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t45_m70_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 71, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t45_m71_ParameterInfos[] = 
{
	{"texture", 0, 134217751, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m71_MI = 
{
	".ctor", (methodPointerType)&m71, &t45_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t45_m71_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 72, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t45_m72_ParameterInfos[] = 
{
	{"newWidth", 0, 134217752, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"newHeight", 1, 134217753, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m72_MI = 
{
	".ctor", (methodPointerType)&m72, &t45_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t45_m72_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 73, NULL, (methodPointerType)NULL};
extern TypeInfo t45_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m73_MI = 
{
	"get_Width", (methodPointerType)&m73, &t45_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 74, NULL, (methodPointerType)NULL};
extern TypeInfo t45_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m74_MI = 
{
	"get_Height", (methodPointerType)&m74, &t45_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 75, NULL, (methodPointerType)NULL};
extern TypeInfo t45_TI;
extern Il2CppType t46_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m75_MI = 
{
	"get_Pixels", (methodPointerType)&m75, &t45_TI, &t46_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 76, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t45_m76_ParameterInfos[] = 
{
	{"colour", 0, 134217754, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m76_MI = 
{
	"Fill", (methodPointerType)&m76, &t45_TI, &t53_0_0_0, RuntimeInvoker_t53_t47, t45_m76_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 77, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t45_m77_ParameterInfos[] = 
{
	{"colour", 0, 134217755, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m77_MI = 
{
	"FillRGB", (methodPointerType)&m77, &t45_TI, &t53_0_0_0, RuntimeInvoker_t53_t47, t45_m77_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 78, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t45_m78_ParameterInfos[] = 
{
	{"x", 0, 134217756, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217757, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m78_MI = 
{
	"GetPixel", (methodPointerType)&m78, &t45_TI, &t47_0_0_0, RuntimeInvoker_t47_t60_t60, t45_m78_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 79, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t45_m79_ParameterInfos[] = 
{
	{"x", 0, 134217758, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217759, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m79_MI = 
{
	"GetPixelTransparent", (methodPointerType)&m79, &t45_TI, &t47_0_0_0, RuntimeInvoker_t47_t60_t60, t45_m79_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 80, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t45_m80_ParameterInfos[] = 
{
	{"x", 0, 134217760, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217761, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m80_MI = 
{
	"GetPixelClamp", (methodPointerType)&m80, &t45_TI, &t47_0_0_0, RuntimeInvoker_t47_t60_t60, t45_m80_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 81, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t45_m81_ParameterInfos[] = 
{
	{"x", 0, 134217762, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217763, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m81_MI = 
{
	"GetPixelRepeat", (methodPointerType)&m81, &t45_TI, &t47_0_0_0, RuntimeInvoker_t47_t60_t60, t45_m81_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 82, NULL, (methodPointerType)NULL};
extern Il2CppType t49_0_0_0;
static ParameterInfo t45_m82_ParameterInfos[] = 
{
	{"rect", 0, 134217764, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t45_0_0_0;
extern void* RuntimeInvoker_t7_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m82_MI = 
{
	"GetSubset", (methodPointerType)&m82, &t45_TI, &t45_0_0_0, RuntimeInvoker_t7_t49, t45_m82_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 83, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t45_m83_ParameterInfos[] = 
{
	{"x", 0, 134217765, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217766, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"w", 2, 134217767, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"h", 3, 134217768, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t45_0_0_0;
extern void* RuntimeInvoker_t7_t60_t60_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m83_MI = 
{
	"GetSubset", (methodPointerType)&m83, &t45_TI, &t45_0_0_0, RuntimeInvoker_t7_t60_t60_t60_t60, t45_m83_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 4, false, false, 84, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t45_m84_ParameterInfos[] = 
{
	{"x", 0, 134217769, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217770, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"colour", 2, 134217771, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m84_MI = 
{
	"SetPixel", (methodPointerType)&m84, &t45_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60_t47, t45_m84_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 85, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t45_m85_ParameterInfos[] = 
{
	{"x", 0, 134217772, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217773, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"colour", 2, 134217774, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m85_MI = 
{
	"SetPixelClamp", (methodPointerType)&m85, &t45_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60_t47, t45_m85_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 86, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t45_0_0_0;
static ParameterInfo t45_m86_ParameterInfos[] = 
{
	{"x", 0, 134217775, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217776, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"s", 2, 134217777, &EmptyCustomAttributesCache, &t45_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m86_MI = 
{
	"SetPixels", (methodPointerType)&m86, &t45_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60_t7, t45_m86_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 87, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t45_0_0_0;
static ParameterInfo t45_m87_ParameterInfos[] = 
{
	{"x", 0, 134217778, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"y", 1, 134217779, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"s", 2, 134217780, &EmptyCustomAttributesCache, &t45_0_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m87_MI = 
{
	"SetPixelsClamp", (methodPointerType)&m87, &t45_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60_t7, t45_m87_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 88, NULL, (methodPointerType)NULL};
extern TypeInfo t45_TI;
extern Il2CppType t45_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m88_MI = 
{
	"GetRotated90", (methodPointerType)&m88, &t45_TI, &t45_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 89, NULL, (methodPointerType)NULL};
extern TypeInfo t45_TI;
extern Il2CppType t45_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m89_MI = 
{
	"GetRotated270", (methodPointerType)&m89, &t45_TI, &t45_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 90, NULL, (methodPointerType)NULL};
extern TypeInfo t45_TI;
extern Il2CppType t45_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m90_MI = 
{
	"GetFlippedHorizontally", (methodPointerType)&m90, &t45_TI, &t45_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 91, NULL, (methodPointerType)NULL};
extern TypeInfo t45_TI;
extern Il2CppType t45_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m91_MI = 
{
	"GetFlippedVertically", (methodPointerType)&m91, &t45_TI, &t45_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 92, NULL, (methodPointerType)NULL};
extern Il2CppType t49_1_0_0;
static ParameterInfo t45_m92_ParameterInfos[] = 
{
	{"trimmedRect", 0, 134217781, &EmptyCustomAttributesCache, &t49_1_0_0},
};
extern TypeInfo t45_TI;
extern Il2CppType t45_0_0_0;
extern void* RuntimeInvoker_t7_t90 (MethodInfo* method, void* obj, void** args);
MethodInfo m92_MI = 
{
	"GetTrimmed", (methodPointerType)&m92, &t45_TI, &t45_0_0_0, RuntimeInvoker_t7_t90, t45_m92_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 93, NULL, (methodPointerType)NULL};
extern TypeInfo t45_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m93_MI = 
{
	"Apply", (methodPointerType)&m93, &t45_TI, &t35_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 94, NULL, (methodPointerType)NULL};
static MethodInfo* t45_MIs[] =
{
	&m69_MI,
	&m70_MI,
	&m71_MI,
	&m72_MI,
	&m73_MI,
	&m74_MI,
	&m75_MI,
	&m76_MI,
	&m77_MI,
	&m78_MI,
	&m79_MI,
	&m80_MI,
	&m81_MI,
	&m82_MI,
	&m83_MI,
	&m84_MI,
	&m85_MI,
	&m86_MI,
	&m87_MI,
	&m88_MI,
	&m89_MI,
	&m90_MI,
	&m91_MI,
	&m92_MI,
	&m93_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
static MethodInfo* t45_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
};
extern TypeInfo t91_TI;
#include "t91.h"
#include "t91MD.h"
extern MethodInfo m229_MI;
void t45_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t91 * tmp;
		tmp = (t91 *)il2cpp_codegen_object_new (&t91_TI);
		m229(tmp, &m229_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t91_TI;
extern MethodInfo m229_MI;
void t45_CustomAttributesCacheGenerator_height(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t91 * tmp;
		tmp = (t91 *)il2cpp_codegen_object_new (&t91_TI);
		m229(tmp, &m229_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t91_TI;
extern MethodInfo m229_MI;
void t45_CustomAttributesCacheGenerator_pixels(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t91 * tmp;
		tmp = (t91 *)il2cpp_codegen_object_new (&t91_TI);
		m229(tmp, &m229_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t45__CustomAttributeCache_width = {
1,
NULL,
&t45_CustomAttributesCacheGenerator_width
};
CustomAttributesCache t45__CustomAttributeCache_height = {
1,
NULL,
&t45_CustomAttributesCacheGenerator_height
};
CustomAttributesCache t45__CustomAttributeCache_pixels = {
1,
NULL,
&t45_CustomAttributesCacheGenerator_pixels
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t45_0_0_0;
extern Il2CppType t45_1_0_0;
extern TypeInfo t7_TI;
struct t45;
extern TypeInfo t45_TI;
extern CustomAttributesCache t45__CustomAttributeCache_width;
extern CustomAttributesCache t45__CustomAttributeCache_height;
extern CustomAttributesCache t45__CustomAttributeCache_pixels;
TypeInfo t45_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "SpPixels", "", t45_MIs, t45_PIs, t45_FIs, NULL, &t7_TI, NULL, NULL, &t45_TI, NULL, t45_VT, &EmptyCustomAttributesCache, &t45_TI, &t45_0_0_0, &t45_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t45), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 25, 3, 3, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t44_TI;

#include "t50.h"
#include "t51.h"
extern TypeInfo t44_TI;
extern TypeInfo t50_TI;
extern TypeInfo t49_TI;
extern TypeInfo t45_TI;
extern TypeInfo t4_TI;
#include "t51MD.h"
extern MethodInfo m73_MI;
extern MethodInfo m74_MI;
extern MethodInfo m230_MI;
extern MethodInfo m72_MI;
extern MethodInfo m79_MI;
extern MethodInfo m84_MI;
extern MethodInfo m80_MI;
extern MethodInfo m81_MI;
extern MethodInfo m116_MI;
extern MethodInfo m94_MI;
extern MethodInfo m231_MI;
extern MethodInfo m232_MI;
extern MethodInfo m220_MI;
extern MethodInfo m221_MI;
extern MethodInfo m92_MI;
extern MethodInfo m233_MI;
extern MethodInfo m60_MI;
extern MethodInfo m234_MI;
extern MethodInfo m235_MI;
extern MethodInfo m101_MI;
extern MethodInfo m86_MI;


extern MethodInfo m94_MI;
 void m94 (t44 * __this, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		return;
	}
}
extern MethodInfo m95_MI;
 int32_t m95 (t44 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f5);
		int32_t L_1 = (__this->f7);
		return ((int32_t)(L_0+L_1));
	}
}
extern MethodInfo m96_MI;
 int32_t m96 (t44 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f6);
		int32_t L_1 = (__this->f8);
		return ((int32_t)(L_0+L_1));
	}
}
extern MethodInfo m97_MI;
 t49  m97 (t44 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f5);
		t50 * L_1 = (__this->f1);
		int32_t L_2 = (L_1->f4);
		int32_t L_3 = (__this->f6);
		t50 * L_4 = (__this->f1);
		int32_t L_5 = (L_4->f4);
		t45 * L_6 = (__this->f2);
		int32_t L_7 = m73(L_6, &m73_MI);
		t45 * L_8 = (__this->f2);
		int32_t L_9 = m74(L_8, &m74_MI);
		t49  L_10 = {0};
		m230(&L_10, (((float)((int32_t)(L_0+L_2)))), (((float)((int32_t)(L_3+L_5)))), (((float)L_7)), (((float)L_9)), &m230_MI);
		return L_10;
	}
}
extern MethodInfo m98_MI;
 t44 * m98 (t44 * __this, MethodInfo* method){
	t44 * V_0 = {0};
	{
		t44 * L_0 = (t44 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t44_TI));
		m94(L_0, &m94_MI);
		V_0 = L_0;
		t34* L_1 = (__this->f0);
		V_0->f0 = L_1;
		t50 * L_2 = (__this->f1);
		V_0->f1 = L_2;
		t45 * L_3 = (__this->f2);
		V_0->f2 = L_3;
		t51  L_4 = (__this->f3);
		V_0->f3 = L_4;
		t4  L_5 = (__this->f4);
		V_0->f4 = L_5;
		int32_t L_6 = (__this->f5);
		V_0->f5 = L_6;
		int32_t L_7 = (__this->f6);
		V_0->f6 = L_7;
		int32_t L_8 = (__this->f7);
		V_0->f7 = L_8;
		int32_t L_9 = (__this->f8);
		V_0->f8 = L_9;
		return V_0;
	}
}
extern MethodInfo m99_MI;
 void m99 (t44 * __this, MethodInfo* method){
	t49  V_0 = {0};
	t49  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	t49  V_4 = {0};
	{
		t50 * L_0 = (__this->f1);
		bool L_1 = (L_0->f3);
		if (!L_1)
		{
			goto IL_00dd;
		}
	}
	{
		t51  L_2 = (__this->f3);
		t51  L_3 = m231(NULL, &m231_MI);
		bool L_4 = m232(NULL, L_2, L_3, &m232_MI);
		if (!L_4)
		{
			goto IL_00dd;
		}
	}
	{
		t50 * L_5 = (__this->f1);
		int32_t L_6 = (L_5->f5);
		if (L_6)
		{
			goto IL_00dd;
		}
	}
	{
		t45 * L_7 = (__this->f2);
		int32_t L_8 = m73(L_7, &m73_MI);
		t45 * L_9 = (__this->f2);
		int32_t L_10 = m74(L_9, &m74_MI);
		m230((&V_0), (0.0f), (0.0f), (((float)L_8)), (((float)L_10)), &m230_MI);
		Initobj (&t49_TI, (&V_4));
		V_1 = V_4;
		t4 * L_11 = &(__this->f4);
		float L_12 = (L_11->f1);
		float L_13 = m220((&V_0), &m220_MI);
		V_2 = ((float)(L_12*L_13));
		t4 * L_14 = &(__this->f4);
		float L_15 = (L_14->f2);
		float L_16 = m221((&V_0), &m221_MI);
		V_3 = ((float)(L_15*L_16));
		t45 * L_17 = (__this->f2);
		t45 * L_18 = m92(L_17, (&V_1), &m92_MI);
		__this->f2 = L_18;
		float L_19 = m233((&V_1), &m233_MI);
		float L_20 = m220((&V_1), &m220_MI);
		float L_21 = m60(NULL, ((float)(V_2-L_19)), L_20, &m60_MI);
		V_2 = L_21;
		float L_22 = m234((&V_1), &m234_MI);
		float L_23 = m221((&V_1), &m221_MI);
		float L_24 = m60(NULL, ((float)(V_3-L_22)), L_23, &m60_MI);
		V_3 = L_24;
		t4  L_25 = {0};
		m235(&L_25, V_2, V_3, &m235_MI);
		__this->f4 = L_25;
	}

IL_00dd:
	{
		t45 * L_26 = (__this->f2);
		int32_t L_27 = m73(L_26, &m73_MI);
		t50 * L_28 = (__this->f1);
		int32_t L_29 = (L_28->f4);
		__this->f7 = ((int32_t)(L_27+((int32_t)(L_29*2))));
		t45 * L_30 = (__this->f2);
		int32_t L_31 = m74(L_30, &m74_MI);
		t50 * L_32 = (__this->f1);
		int32_t L_33 = (L_32->f4);
		__this->f8 = ((int32_t)(L_31+((int32_t)(L_33*2))));
		return;
	}
}
extern MethodInfo m100_MI;
 void m100 (t44 * __this, t45 * p0, MethodInfo* method){
	{
		int32_t L_0 = (__this->f5);
		int32_t L_1 = (__this->f6);
		t45 * L_2 = m101(__this, &m101_MI);
		m86(p0, L_0, L_1, L_2, &m86_MI);
		return;
	}
}
extern MethodInfo m101_MI;
 t45 * m101 (t44 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t45 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = {0};
	{
		t50 * L_0 = (__this->f1);
		int32_t L_1 = (L_0->f4);
		V_0 = L_1;
		int32_t L_2 = (__this->f7);
		int32_t L_3 = (__this->f8);
		t45 * L_4 = (t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t45_TI));
		m72(L_4, L_2, L_3, &m72_MI);
		V_1 = L_4;
		t50 * L_5 = (__this->f1);
		int32_t L_6 = (L_5->f5);
		V_8 = L_6;
		if (V_8 == 0)
		{
			goto IL_0043;
		}
		if (V_8 == 1)
		{
			goto IL_008f;
		}
		if (V_8 == 2)
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_013f;
	}

IL_0043:
	{
		V_2 = 0;
		goto IL_007e;
	}

IL_004a:
	{
		V_3 = 0;
		goto IL_006e;
	}

IL_0051:
	{
		t45 * L_7 = (__this->f2);
		t47  L_8 = m79(L_7, ((int32_t)(V_3-V_0)), ((int32_t)(V_2-V_0)), &m79_MI);
		m84(V_1, V_3, V_2, L_8, &m84_MI);
		V_3 = ((int32_t)(V_3+1));
	}

IL_006e:
	{
		int32_t L_9 = (__this->f7);
		if ((((int32_t)V_3) < ((int32_t)L_9)))
		{
			goto IL_0051;
		}
	}
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_007e:
	{
		int32_t L_10 = (__this->f8);
		if ((((int32_t)V_2) < ((int32_t)L_10)))
		{
			goto IL_004a;
		}
	}
	{
		goto IL_013f;
	}

IL_008f:
	{
		V_4 = 0;
		goto IL_00d5;
	}

IL_0097:
	{
		V_5 = 0;
		goto IL_00c2;
	}

IL_009f:
	{
		t45 * L_11 = (__this->f2);
		t47  L_12 = m80(L_11, ((int32_t)(V_5-V_0)), ((int32_t)(V_4-V_0)), &m80_MI);
		m84(V_1, V_5, V_4, L_12, &m84_MI);
		V_5 = ((int32_t)(V_5+1));
	}

IL_00c2:
	{
		int32_t L_13 = (__this->f7);
		if ((((int32_t)V_5) < ((int32_t)L_13)))
		{
			goto IL_009f;
		}
	}
	{
		V_4 = ((int32_t)(V_4+1));
	}

IL_00d5:
	{
		int32_t L_14 = (__this->f8);
		if ((((int32_t)V_4) < ((int32_t)L_14)))
		{
			goto IL_0097;
		}
	}
	{
		goto IL_013f;
	}

IL_00e7:
	{
		V_6 = 0;
		goto IL_012d;
	}

IL_00ef:
	{
		V_7 = 0;
		goto IL_011a;
	}

IL_00f7:
	{
		t45 * L_15 = (__this->f2);
		t47  L_16 = m81(L_15, ((int32_t)(V_7-V_0)), ((int32_t)(V_6-V_0)), &m81_MI);
		m84(V_1, V_7, V_6, L_16, &m84_MI);
		V_7 = ((int32_t)(V_7+1));
	}

IL_011a:
	{
		int32_t L_17 = (__this->f7);
		if ((((int32_t)V_7) < ((int32_t)L_17)))
		{
			goto IL_00f7;
		}
	}
	{
		V_6 = ((int32_t)(V_6+1));
	}

IL_012d:
	{
		int32_t L_18 = (__this->f8);
		if ((((int32_t)V_6) < ((int32_t)L_18)))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_013f;
	}

IL_013f:
	{
		return V_1;
	}
}
// Metadata Definition SpRect
extern Il2CppType t34_0_0_6;
FieldInfo t44_f0_FieldInfo = 
{
	"Name", &t34_0_0_6, &t44_TI, offsetof(t44, f0), &EmptyCustomAttributesCache};
extern Il2CppType t50_0_0_6;
FieldInfo t44_f1_FieldInfo = 
{
	"Source", &t50_0_0_6, &t44_TI, offsetof(t44, f1), &EmptyCustomAttributesCache};
extern Il2CppType t45_0_0_6;
FieldInfo t44_f2_FieldInfo = 
{
	"Pixels", &t45_0_0_6, &t44_TI, offsetof(t44, f2), &EmptyCustomAttributesCache};
extern Il2CppType t51_0_0_6;
FieldInfo t44_f3_FieldInfo = 
{
	"Border", &t51_0_0_6, &t44_TI, offsetof(t44, f3), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_6;
FieldInfo t44_f4_FieldInfo = 
{
	"Pivot", &t4_0_0_6, &t44_TI, offsetof(t44, f4), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_6;
FieldInfo t44_f5_FieldInfo = 
{
	"X", &t60_0_0_6, &t44_TI, offsetof(t44, f5), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_6;
FieldInfo t44_f6_FieldInfo = 
{
	"Y", &t60_0_0_6, &t44_TI, offsetof(t44, f6), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_6;
FieldInfo t44_f7_FieldInfo = 
{
	"W", &t60_0_0_6, &t44_TI, offsetof(t44, f7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_6;
FieldInfo t44_f8_FieldInfo = 
{
	"H", &t60_0_0_6, &t44_TI, offsetof(t44, f8), &EmptyCustomAttributesCache};
static FieldInfo* t44_FIs[] =
{
	&t44_f0_FieldInfo,
	&t44_f1_FieldInfo,
	&t44_f2_FieldInfo,
	&t44_f3_FieldInfo,
	&t44_f4_FieldInfo,
	&t44_f5_FieldInfo,
	&t44_f6_FieldInfo,
	&t44_f7_FieldInfo,
	&t44_f8_FieldInfo,
	NULL
};
extern MethodInfo m95_MI;
static PropertyInfo t44____R_PropertyInfo = 
{
	&t44_TI, "R", &m95_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m96_MI;
static PropertyInfo t44____T_PropertyInfo = 
{
	&t44_TI, "T", &m96_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m97_MI;
static PropertyInfo t44____Rect_PropertyInfo = 
{
	&t44_TI, "Rect", &m97_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m101_MI;
static PropertyInfo t44____ExpandedPixels_PropertyInfo = 
{
	&t44_TI, "ExpandedPixels", &m101_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t44_PIs[] =
{
	&t44____R_PropertyInfo,
	&t44____T_PropertyInfo,
	&t44____Rect_PropertyInfo,
	&t44____ExpandedPixels_PropertyInfo,
	NULL
};
extern TypeInfo t44_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m94_MI = 
{
	".ctor", (methodPointerType)&m94, &t44_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 95, NULL, (methodPointerType)NULL};
extern TypeInfo t44_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m95_MI = 
{
	"get_R", (methodPointerType)&m95, &t44_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 96, NULL, (methodPointerType)NULL};
extern TypeInfo t44_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m96_MI = 
{
	"get_T", (methodPointerType)&m96, &t44_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 97, NULL, (methodPointerType)NULL};
extern TypeInfo t44_TI;
extern Il2CppType t49_0_0_0;
extern void* RuntimeInvoker_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m97_MI = 
{
	"get_Rect", (methodPointerType)&m97, &t44_TI, &t49_0_0_0, RuntimeInvoker_t49, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 98, NULL, (methodPointerType)NULL};
extern TypeInfo t44_TI;
extern Il2CppType t44_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m98_MI = 
{
	"GetClone", (methodPointerType)&m98, &t44_TI, &t44_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 99, NULL, (methodPointerType)NULL};
extern TypeInfo t44_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m99_MI = 
{
	"Trim", (methodPointerType)&m99, &t44_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 100, NULL, (methodPointerType)NULL};
extern Il2CppType t45_0_0_0;
static ParameterInfo t44_m100_ParameterInfos[] = 
{
	{"atlas", 0, 134217782, &EmptyCustomAttributesCache, &t45_0_0_0},
};
extern TypeInfo t44_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m100_MI = 
{
	"PasteInto", (methodPointerType)&m100, &t44_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t44_m100_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 101, NULL, (methodPointerType)NULL};
extern TypeInfo t44_TI;
extern Il2CppType t45_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m101_MI = 
{
	"get_ExpandedPixels", (methodPointerType)&m101, &t44_TI, &t45_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 102, NULL, (methodPointerType)NULL};
static MethodInfo* t44_MIs[] =
{
	&m94_MI,
	&m95_MI,
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
	&m100_MI,
	&m101_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
static MethodInfo* t44_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t44_0_0_0;
extern Il2CppType t44_1_0_0;
extern TypeInfo t7_TI;
struct t44;
extern TypeInfo t44_TI;
TypeInfo t44_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "SpRect", "", t44_MIs, t44_PIs, t44_FIs, NULL, &t7_TI, NULL, NULL, &t44_TI, NULL, t44_VT, &EmptyCustomAttributesCache, &t44_TI, &t44_0_0_0, &t44_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t44), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 8, 4, 9, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t50_TI;
#include "t50MD.h"

extern TypeInfo t50_TI;
extern TypeInfo t4_TI;
extern MethodInfo m235_MI;
extern MethodInfo m116_MI;


extern MethodInfo m102_MI;
 void m102 (t50 * __this, MethodInfo* method){
	{
		__this->f0 = 1;
		__this->f2 = 1;
		t4  L_0 = {0};
		m235(&L_0, (0.5f), (0.5f), &m235_MI);
		__this->f7 = L_0;
		m116(__this, &m116_MI);
		return;
	}
}
// Metadata Definition SpSource
extern Il2CppType t39_0_0_6;
FieldInfo t50_f0_FieldInfo = 
{
	"Flag", &t39_0_0_6, &t50_TI, offsetof(t50, f0), &EmptyCustomAttributesCache};
extern Il2CppType t34_0_0_6;
FieldInfo t50_f1_FieldInfo = 
{
	"Identifier", &t34_0_0_6, &t50_TI, offsetof(t50, f1), &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_6;
FieldInfo t50_f2_FieldInfo = 
{
	"Dirty", &t55_0_0_6, &t50_TI, offsetof(t50, f2), &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_6;
FieldInfo t50_f3_FieldInfo = 
{
	"Trim", &t55_0_0_6, &t50_TI, offsetof(t50, f3), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_6;
FieldInfo t50_f4_FieldInfo = 
{
	"PadSize", &t60_0_0_6, &t50_TI, offsetof(t50, f4), &EmptyCustomAttributesCache};
extern Il2CppType t38_0_0_6;
FieldInfo t50_f5_FieldInfo = 
{
	"PadStyle", &t38_0_0_6, &t50_TI, offsetof(t50, f5), &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_6;
FieldInfo t50_f6_FieldInfo = 
{
	"UseCustomPivot", &t55_0_0_6, &t50_TI, offsetof(t50, f6), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_6;
FieldInfo t50_f7_FieldInfo = 
{
	"CustomPivot", &t4_0_0_6, &t50_TI, offsetof(t50, f7), &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_6;
FieldInfo t50_f8_FieldInfo = 
{
	"UseCustomBorder", &t55_0_0_6, &t50_TI, offsetof(t50, f8), &EmptyCustomAttributesCache};
extern Il2CppType t51_0_0_6;
FieldInfo t50_f9_FieldInfo = 
{
	"CustomBorder", &t51_0_0_6, &t50_TI, offsetof(t50, f9), &EmptyCustomAttributesCache};
static FieldInfo* t50_FIs[] =
{
	&t50_f0_FieldInfo,
	&t50_f1_FieldInfo,
	&t50_f2_FieldInfo,
	&t50_f3_FieldInfo,
	&t50_f4_FieldInfo,
	&t50_f5_FieldInfo,
	&t50_f6_FieldInfo,
	&t50_f7_FieldInfo,
	&t50_f8_FieldInfo,
	&t50_f9_FieldInfo,
	NULL
};
extern TypeInfo t50_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m102_MI = 
{
	".ctor", (methodPointerType)&m102, &t50_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 103, NULL, (methodPointerType)NULL};
static MethodInfo* t50_MIs[] =
{
	&m102_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
static MethodInfo* t50_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t50_0_0_0;
extern Il2CppType t50_1_0_0;
extern TypeInfo t7_TI;
struct t50;
extern TypeInfo t50_TI;
TypeInfo t50_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "SpSource", "", t50_MIs, NULL, t50_FIs, NULL, &t7_TI, NULL, NULL, &t50_TI, NULL, t50_VT, &EmptyCustomAttributesCache, &t50_TI, &t50_0_0_0, &t50_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t50), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 10, 0, 0, 4, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
