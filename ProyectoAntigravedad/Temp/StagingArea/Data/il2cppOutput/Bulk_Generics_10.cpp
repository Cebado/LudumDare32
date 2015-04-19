#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2098.h"
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
extern TypeInfo t2098_TI;
#include "t2098MD.h"

#include "t7.h"
#include "t53.h"
#include "t55.h"
#include "t59.h"
#include "t60.h"
#include "t180.h"
#include "t54.h"
#include "t62.h"
extern TypeInfo t2098_TI;
extern TypeInfo t180_TI;
extern TypeInfo t366_TI;
extern TypeInfo t55_TI;
extern TypeInfo t54_TI;
extern TypeInfo t56_TI;
extern TypeInfo t53_TI;
extern TypeInfo t62_TI;
#include "t7MD.h"
#include "t58MD.h"
#include "t56MD.h"
#include "t62MD.h"
extern MethodInfo m116_MI;
extern MethodInfo m1617_MI;
extern MethodInfo m1614_MI;
extern MethodInfo m1638_MI;
extern MethodInfo m107_MI;
extern MethodInfo m1615_MI;
extern MethodInfo m1760_MI;
extern MethodInfo m1616_MI;
extern MethodInfo m120_MI;

#include "t52.h"

extern MethodInfo m11698_MI;
 void m11698 (t2098 * __this, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		return;
	}
}
extern MethodInfo m11699_MI;
 t7 * m11699 (t2098 * __this, MethodInfo* method){
	{
		t7 * L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m11700_MI;
 t7 * m11700 (t2098 * __this, MethodInfo* method){
	{
		t7 * L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m11701_MI;
 bool m11701 (t2098 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	bool V_1 = false;
	float G_B7_0 = 0.0f;
	t2098 * G_B7_1 = {0};
	float G_B6_0 = 0.0f;
	t2098 * G_B6_1 = {0};
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	t2098 * G_B8_2 = {0};
	{
		int32_t L_0 = (__this->f3);
		V_0 = L_0;
		__this->f3 = (-1);
		if (V_0 == 0)
		{
			goto IL_0021;
		}
		if (V_0 == 1)
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0104;
	}

IL_0021:
	{
		t180 * L_1 = &(__this->f0);
		bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m1617_MI, Box(InitializedTypeInfo(&t180_TI), &(*L_1)));
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0104;
	}

IL_003c:
	{
		__this->f1 = (0.0f);
		goto IL_00cb;
	}

IL_004c:
	{
		float L_3 = (__this->f1);
		t180 * L_4 = &(__this->f0);
		bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m1614_MI, Box(InitializedTypeInfo(&t180_TI), &(*L_4)));
		G_B6_0 = L_3;
		G_B6_1 = ((t2098 *)(__this));
		if (!L_5)
		{
			G_B7_0 = L_3;
			G_B7_1 = ((t2098 *)(__this));
			goto IL_0073;
		}
	}
	{
		float L_6 = m1638(NULL, &m1638_MI);
		G_B8_0 = L_6;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((t2098 *)(G_B6_1));
		goto IL_0078;
	}

IL_0073:
	{
		float L_7 = m107(NULL, &m107_MI);
		G_B8_0 = L_7;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((t2098 *)(G_B7_1));
	}

IL_0078:
	{
		G_B8_2->f1 = ((float)(G_B8_1+G_B8_0));
		float L_8 = (__this->f1);
		t180 * L_9 = &(__this->f0);
		float L_10 = (float)InterfaceFuncInvoker0< float >::Invoke(&m1615_MI, Box(InitializedTypeInfo(&t180_TI), &(*L_9)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t56_TI));
		float L_11 = m1760(NULL, ((float)(L_8/L_10)), &m1760_MI);
		__this->f2 = L_11;
		t180 * L_12 = &(__this->f0);
		float L_13 = (__this->f2);
		InterfaceActionInvoker1< float >::Invoke(&m1616_MI, Box(InitializedTypeInfo(&t180_TI), &(*L_12)), L_13);
		__this->f4 = NULL;
		__this->f3 = 1;
		goto IL_0106;
	}

IL_00cb:
	{
		float L_14 = (__this->f1);
		t180 * L_15 = &(__this->f0);
		float L_16 = (float)InterfaceFuncInvoker0< float >::Invoke(&m1615_MI, Box(InitializedTypeInfo(&t180_TI), &(*L_15)));
		if ((((float)L_14) < ((float)L_16)))
		{
			goto IL_004c;
		}
	}
	{
		t180 * L_17 = &(__this->f0);
		InterfaceActionInvoker1< float >::Invoke(&m1616_MI, Box(InitializedTypeInfo(&t180_TI), &(*L_17)), (1.0f));
		__this->f3 = (-1);
	}

IL_0104:
	{
		return 0;
	}

IL_0106:
	{
		return 1;
	}
	// Dead block : IL_0108: ldloc.1
}
extern MethodInfo m11702_MI;
 void m11702 (t2098 * __this, MethodInfo* method){
	{
		__this->f3 = (-1);
		return;
	}
}
extern MethodInfo m11703_MI;
 void m11703 (t2098 * __this, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m120(L_0, &m120_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
extern Il2CppType t180_0_0_3;
FieldInfo t2098_f0_FieldInfo = 
{
	"tweenInfo", &t180_0_0_3, &t2098_TI, offsetof(t2098, f0), &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_3;
FieldInfo t2098_f1_FieldInfo = 
{
	"<elapsedTime>__0", &t54_0_0_3, &t2098_TI, offsetof(t2098, f1), &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_3;
FieldInfo t2098_f2_FieldInfo = 
{
	"<percentage>__1", &t54_0_0_3, &t2098_TI, offsetof(t2098, f2), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_3;
FieldInfo t2098_f3_FieldInfo = 
{
	"$PC", &t60_0_0_3, &t2098_TI, offsetof(t2098, f3), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_3;
FieldInfo t2098_f4_FieldInfo = 
{
	"$current", &t7_0_0_3, &t2098_TI, offsetof(t2098, f4), &EmptyCustomAttributesCache};
extern Il2CppType t180_0_0_3;
FieldInfo t2098_f5_FieldInfo = 
{
	"<$>tweenInfo", &t180_0_0_3, &t2098_TI, offsetof(t2098, f5), &EmptyCustomAttributesCache};
static FieldInfo* t2098_FIs[] =
{
	&t2098_f0_FieldInfo,
	&t2098_f1_FieldInfo,
	&t2098_f2_FieldInfo,
	&t2098_f3_FieldInfo,
	&t2098_f4_FieldInfo,
	&t2098_f5_FieldInfo,
	NULL
};
extern MethodInfo m11699_MI;
static PropertyInfo t2098____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&t2098_TI, "System.Collections.Generic.IEnumerator<object>.Current", &m11699_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11700_MI;
static PropertyInfo t2098____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2098_TI, "System.Collections.IEnumerator.Current", &m11700_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2098_PIs[] =
{
	&t2098____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&t2098____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern TypeInfo t2098_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11698_MI = 
{
	".ctor", (methodPointerType)&m11698, &t2098_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2098_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t183__CustomAttributeCache_m1626;
MethodInfo m11699_MI = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current", (methodPointerType)&m11699, &t2098_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &t183__CustomAttributeCache_m1626, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2098_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t183__CustomAttributeCache_m1627;
MethodInfo m11700_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11700, &t2098_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &t183__CustomAttributeCache_m1627, 2529, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2098_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11701_MI = 
{
	"MoveNext", (methodPointerType)&m11701, &t2098_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2098_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t183__CustomAttributeCache_m1629;
MethodInfo m11702_MI = 
{
	"Dispose", (methodPointerType)&m11702, &t2098_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &t183__CustomAttributeCache_m1629, 486, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2098_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t183__CustomAttributeCache_m1630;
MethodInfo m11703_MI = 
{
	"Reset", (methodPointerType)&m11703, &t2098_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &t183__CustomAttributeCache_m1630, 486, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2098_MIs[] =
{
	&m11698_MI,
	&m11699_MI,
	&m11700_MI,
	&m11701_MI,
	&m11702_MI,
	&m11703_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m11702_MI;
extern MethodInfo m11700_MI;
extern MethodInfo m11701_MI;
extern MethodInfo m11699_MI;
extern MethodInfo m11703_MI;
static MethodInfo* t2098_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m11702_MI,
	&m11700_MI,
	&m11701_MI,
	&m11699_MI,
	&m11703_MI,
};
extern TypeInfo t65_TI;
extern TypeInfo t12_TI;
extern TypeInfo t64_TI;
static TypeInfo* t2098_ITIs[] = 
{
	&t65_TI,
	&t12_TI,
	&t64_TI,
};
extern TypeInfo t65_TI;
extern TypeInfo t12_TI;
extern TypeInfo t64_TI;
static Il2CppInterfaceOffsetPair t2098_IOs[] = 
{
	{ &t65_TI, 4},
	{ &t12_TI, 5},
	{ &t64_TI, 7},
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t2098_0_0_0;
extern Il2CppType t2098_1_0_0;
extern TypeInfo t7_TI;
struct t2098;
extern TypeInfo t2098_TI;
extern Il2CppGenericClass t2098_GC;
extern TypeInfo t184_TI;
extern CustomAttributesCache t183__CustomAttributeCache;
extern CustomAttributesCache t183__CustomAttributeCache_m1626;
extern CustomAttributesCache t183__CustomAttributeCache_m1627;
extern CustomAttributesCache t183__CustomAttributeCache_m1629;
extern CustomAttributesCache t183__CustomAttributeCache_m1630;
TypeInfo t2098_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "<Start>c__Iterator0", "", t2098_MIs, t2098_PIs, t2098_FIs, NULL, &t7_TI, NULL, &t184_TI, &t2098_TI, t2098_ITIs, t2098_VT, &t183__CustomAttributeCache, &t2098_TI, &t2098_0_0_0, &t2098_1_0_0, t2098_IOs, &t2098_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2098), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 6, 0, 0, 9, 3, 3};
#include "t327.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t327_TI;
#include "t327MD.h"

#include "t212.h"
#include "t34.h"
#include "t348.h"
#include "UnityEngine_ArrayTypes.h"
#include "t88.h"
#include "t2106.h"
#include "t2103.h"
#include "t2104.h"
#include "t87.h"
#include "t2112.h"
#include "t2105.h"
extern TypeInfo t327_TI;
extern TypeInfo t212_TI;
extern TypeInfo t60_TI;
extern TypeInfo t53_TI;
extern TypeInfo t348_TI;
extern TypeInfo t601_TI;
extern TypeInfo t1294_TI;
extern TypeInfo t88_TI;
extern TypeInfo t2099_TI;
extern TypeInfo t2106_TI;
extern TypeInfo t55_TI;
extern TypeInfo t2101_TI;
extern TypeInfo t2102_TI;
extern TypeInfo t2100_TI;
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2103_TI;
extern TypeInfo t87_TI;
extern TypeInfo t2104_TI;
extern TypeInfo t2112_TI;
#include "t348MD.h"
#include "t88MD.h"
#include "t52MD.h"
#include "t617MD.h"
#include "t2103MD.h"
#include "t87MD.h"
#include "t2104MD.h"
#include "t2106MD.h"
#include "t2112MD.h"
extern MethodInfo m1688_MI;
extern MethodInfo m11749_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m216_MI;
extern MethodInfo m18799_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m11736_MI;
extern MethodInfo m116_MI;
extern MethodInfo m11733_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m11722_MI;
extern MethodInfo m11728_MI;
extern MethodInfo m11734_MI;
extern MethodInfo m11737_MI;
extern MethodInfo m11739_MI;
extern MethodInfo m11723_MI;
extern MethodInfo m11747_MI;
extern MethodInfo m7028_MI;
extern MethodInfo m11748_MI;
extern MethodInfo m25122_MI;
extern MethodInfo m25123_MI;
extern MethodInfo m25124_MI;
extern MethodInfo m25125_MI;
extern MethodInfo m7424_MI;
extern MethodInfo m202_MI;
extern MethodInfo m11738_MI;
extern MethodInfo m11724_MI;
extern MethodInfo m11725_MI;
extern MethodInfo m11761_MI;
extern MethodInfo m3874_MI;
extern MethodInfo m18801_MI;
extern MethodInfo m11731_MI;
extern MethodInfo m11732_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m11836_MI;
extern MethodInfo m11755_MI;
extern MethodInfo m11735_MI;
extern MethodInfo m11741_MI;
extern MethodInfo m3890_MI;
extern MethodInfo m11842_MI;
extern MethodInfo m18803_MI;
extern MethodInfo m18811_MI;
extern MethodInfo m3877_MI;
struct t52;
struct t52;
#include "mscorlib_ArrayTypes.h"
 void m17412_gshared (t7 * __this, t350** p0, int32_t p1, MethodInfo* method);
#define m17412(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
#define m18799(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
extern MethodInfo m18799_MI;
struct t52;
#include "t2110.h"
struct t52;
#include "t1511.h"
 int32_t m7824_gshared (t7 * __this, t350* p0, t7 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m7824(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m18801(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m18801_MI;
struct t52;
struct t52;
 void m17481_gshared (t7 * __this, t350* p0, int32_t p1, int32_t p2, t7* p3, MethodInfo* method);
#define m17481(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
#define m18803(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
extern MethodInfo m18803_MI;
struct t52;
#include "t86.h"
#include "t1295.h"
struct t52;
#include "t1679.h"
 void m17588_gshared (t7 * __this, t350* p0, int32_t p1, t1679 * p2, MethodInfo* method);
#define m17588(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
#define m18811(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
extern MethodInfo m18811_MI;


extern MethodInfo m11733_MI;
 t2106  m11733 (t327 * __this, MethodInfo* method){
	{
		t2106  L_0 = {0};
		m11755(&L_0, __this, &m11755_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.Canvas>
extern Il2CppType t60_0_0_32849;
FieldInfo t327_f0_FieldInfo = 
{
	"DefaultCapacity", &t60_0_0_32849, &t327_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2099_0_0_1;
FieldInfo t327_f1_FieldInfo = 
{
	"_items", &t2099_0_0_1, &t327_TI, offsetof(t327, f1), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t327_f2_FieldInfo = 
{
	"_size", &t60_0_0_1, &t327_TI, offsetof(t327, f2), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t327_f3_FieldInfo = 
{
	"_version", &t60_0_0_1, &t327_TI, offsetof(t327, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2099_0_0_49;
FieldInfo t327_f4_FieldInfo = 
{
	"EmptyArray", &t2099_0_0_49, &t327_TI, offsetof(t327_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t327_FIs[] =
{
	&t327_f0_FieldInfo,
	&t327_f1_FieldInfo,
	&t327_f2_FieldInfo,
	&t327_f3_FieldInfo,
	&t327_f4_FieldInfo,
	NULL
};
static const int32_t t327_f0_DefaultValueData = 4;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t327_f0_DefaultValue = 
{
	&t327_f0_FieldInfo, { (char*)&t327_f0_DefaultValueData, &t60_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t327_FDVs[] = 
{
	&t327_f0_DefaultValue,
	NULL
};
extern MethodInfo m11715_MI;
static PropertyInfo t327____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t327_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m11715_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11716_MI;
static PropertyInfo t327____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t327_TI, "System.Collections.ICollection.IsSynchronized", &m11716_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11717_MI;
static PropertyInfo t327____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t327_TI, "System.Collections.ICollection.SyncRoot", &m11717_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11718_MI;
static PropertyInfo t327____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t327_TI, "System.Collections.IList.IsFixedSize", &m11718_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11719_MI;
static PropertyInfo t327____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t327_TI, "System.Collections.IList.IsReadOnly", &m11719_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11720_MI;
extern MethodInfo m11721_MI;
static PropertyInfo t327____System_Collections_IList_Item_PropertyInfo = 
{
	&t327_TI, "System.Collections.IList.Item", &m11720_MI, &m11721_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11747_MI;
extern MethodInfo m11748_MI;
static PropertyInfo t327____Capacity_PropertyInfo = 
{
	&t327_TI, "Capacity", &m11747_MI, &m11748_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1687_MI;
static PropertyInfo t327____Count_PropertyInfo = 
{
	&t327_TI, "Count", &m1687_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1688_MI;
extern MethodInfo m11749_MI;
static PropertyInfo t327____Item_PropertyInfo = 
{
	&t327_TI, "Item", &m1688_MI, &m11749_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t327_PIs[] =
{
	&t327____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t327____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t327____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t327____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t327____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t327____System_Collections_IList_Item_PropertyInfo,
	&t327____Capacity_PropertyInfo,
	&t327____Count_PropertyInfo,
	&t327____Item_PropertyInfo,
	NULL
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11704_MI = 
{
	".ctor", (methodPointerType)&m8211_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t327_m11705_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11705_MI = 
{
	".ctor", (methodPointerType)&m8213_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t327_m11705_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11706_MI = 
{
	".cctor", (methodPointerType)&m8215_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t327_TI;
extern Il2CppType t2100_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11707_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m8217_gshared, &t327_TI, &t2100_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t327_m11708_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11708_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8219_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t327_m11708_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t327_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11709_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8221_gshared, &t327_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t327_m11710_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11710_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8223_gshared, &t327_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t327_m11710_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t327_m11711_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11711_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8225_gshared, &t327_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t327_m11711_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t327_m11712_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11712_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8227_gshared, &t327_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t327_m11712_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t327_m11713_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11713_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8229_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t327_m11713_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t327_m11714_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11714_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8231_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t327_m11714_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t327_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11715_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8233_gshared, &t327_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t327_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11716_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8235_gshared, &t327_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t327_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11717_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8237_gshared, &t327_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t327_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11718_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8239_gshared, &t327_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t327_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11719_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8241_gshared, &t327_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t327_m11720_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11720_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8243_gshared, &t327_TI, &t7_0_0_0, RuntimeInvoker_t7_t60, t327_m11720_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t327_m11721_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11721_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8245_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t327_m11721_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t327_m11722_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11722_MI = 
{
	"Add", (methodPointerType)&m8247_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t327_m11722_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t327_m11723_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11723_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m8249_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t327_m11723_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2101_0_0_0;
static ParameterInfo t327_m11724_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2101_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11724_MI = 
{
	"AddCollection", (methodPointerType)&m8251_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t327_m11724_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2102_0_0_0;
static ParameterInfo t327_m11725_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2102_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11725_MI = 
{
	"AddEnumerable", (methodPointerType)&m8253_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t327_m11725_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2102_0_0_0;
static ParameterInfo t327_m11726_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2102_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11726_MI = 
{
	"AddRange", (methodPointerType)&m8255_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t327_m11726_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t327_TI;
extern Il2CppType t2103_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11727_MI = 
{
	"AsReadOnly", (methodPointerType)&m8257_gshared, &t327_TI, &t2103_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m2140_MI = 
{
	"Clear", (methodPointerType)&m8259_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t327_m11728_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11728_MI = 
{
	"Contains", (methodPointerType)&m8261_gshared, &t327_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t327_m11728_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2099_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t327_m11729_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2099_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11729_MI = 
{
	"CopyTo", (methodPointerType)&m8263_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t327_m11729_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2104_0_0_0;
static ParameterInfo t327_m11730_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2104_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t212_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11730_MI = 
{
	"Find", (methodPointerType)&m8265_gshared, &t327_TI, &t212_0_0_0, RuntimeInvoker_t7_t7, t327_m11730_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2104_0_0_0;
static ParameterInfo t327_m11731_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2104_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11731_MI = 
{
	"CheckMatch", (methodPointerType)&m8267_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t327_m11731_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t2104_0_0_0;
static ParameterInfo t327_m11732_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2104_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11732_MI = 
{
	"GetIndex", (methodPointerType)&m8269_gshared, &t327_TI, &t60_0_0_0, RuntimeInvoker_t60_t60_t60_t7, t327_m11732_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t327_TI;
extern Il2CppType t2106_0_0_0;
extern void* RuntimeInvoker_t2106 (MethodInfo* method, void* obj, void** args);
MethodInfo m11733_MI = 
{
	"GetEnumerator", (methodPointerType)&m11733, &t327_TI, &t2106_0_0_0, RuntimeInvoker_t2106, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t327_m11734_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11734_MI = 
{
	"IndexOf", (methodPointerType)&m8272_gshared, &t327_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t327_m11734_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t327_m11735_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11735_MI = 
{
	"Shift", (methodPointerType)&m8274_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t327_m11735_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t327_m11736_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11736_MI = 
{
	"CheckIndex", (methodPointerType)&m8276_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t327_m11736_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t327_m11737_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11737_MI = 
{
	"Insert", (methodPointerType)&m8278_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t327_m11737_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2102_0_0_0;
static ParameterInfo t327_m11738_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2102_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11738_MI = 
{
	"CheckCollection", (methodPointerType)&m8280_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t327_m11738_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t327_m11739_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11739_MI = 
{
	"Remove", (methodPointerType)&m8282_gshared, &t327_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t327_m11739_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2104_0_0_0;
static ParameterInfo t327_m11740_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2104_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11740_MI = 
{
	"RemoveAll", (methodPointerType)&m8284_gshared, &t327_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t327_m11740_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t327_m11741_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11741_MI = 
{
	"RemoveAt", (methodPointerType)&m8286_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t327_m11741_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11742_MI = 
{
	"Reverse", (methodPointerType)&m8288_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11743_MI = 
{
	"Sort", (methodPointerType)&m8290_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2105_0_0_0;
static ParameterInfo t327_m11744_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t2105_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11744_MI = 
{
	"Sort", (methodPointerType)&m8292_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t327_m11744_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t327_TI;
extern Il2CppType t2099_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11745_MI = 
{
	"ToArray", (methodPointerType)&m8294_gshared, &t327_TI, &t2099_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11746_MI = 
{
	"TrimExcess", (methodPointerType)&m8296_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t327_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11747_MI = 
{
	"get_Capacity", (methodPointerType)&m8298_gshared, &t327_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t327_m11748_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11748_MI = 
{
	"set_Capacity", (methodPointerType)&m8300_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t327_m11748_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t327_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m1687_MI = 
{
	"get_Count", (methodPointerType)&m8301_gshared, &t327_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t327_m1688_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t212_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m1688_MI = 
{
	"get_Item", (methodPointerType)&m8302_gshared, &t327_TI, &t212_0_0_0, RuntimeInvoker_t7_t60, t327_m1688_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t327_m11749_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t327_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11749_MI = 
{
	"set_Item", (methodPointerType)&m8304_gshared, &t327_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t327_m11749_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t327_MIs[] =
{
	&m11704_MI,
	&m11705_MI,
	&m11706_MI,
	&m11707_MI,
	&m11708_MI,
	&m11709_MI,
	&m11710_MI,
	&m11711_MI,
	&m11712_MI,
	&m11713_MI,
	&m11714_MI,
	&m11715_MI,
	&m11716_MI,
	&m11717_MI,
	&m11718_MI,
	&m11719_MI,
	&m11720_MI,
	&m11721_MI,
	&m11722_MI,
	&m11723_MI,
	&m11724_MI,
	&m11725_MI,
	&m11726_MI,
	&m11727_MI,
	&m2140_MI,
	&m11728_MI,
	&m11729_MI,
	&m11730_MI,
	&m11731_MI,
	&m11732_MI,
	&m11733_MI,
	&m11734_MI,
	&m11735_MI,
	&m11736_MI,
	&m11737_MI,
	&m11738_MI,
	&m11739_MI,
	&m11740_MI,
	&m11741_MI,
	&m11742_MI,
	&m11743_MI,
	&m11744_MI,
	&m11745_MI,
	&m11746_MI,
	&m11747_MI,
	&m11748_MI,
	&m1687_MI,
	&m1688_MI,
	&m11749_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m11709_MI;
extern MethodInfo m1687_MI;
extern MethodInfo m11716_MI;
extern MethodInfo m11717_MI;
extern MethodInfo m11708_MI;
extern MethodInfo m11718_MI;
extern MethodInfo m11719_MI;
extern MethodInfo m11720_MI;
extern MethodInfo m11721_MI;
extern MethodInfo m11710_MI;
extern MethodInfo m2140_MI;
extern MethodInfo m11711_MI;
extern MethodInfo m11712_MI;
extern MethodInfo m11713_MI;
extern MethodInfo m11714_MI;
extern MethodInfo m11741_MI;
extern MethodInfo m1687_MI;
extern MethodInfo m11715_MI;
extern MethodInfo m11722_MI;
extern MethodInfo m2140_MI;
extern MethodInfo m11728_MI;
extern MethodInfo m11729_MI;
extern MethodInfo m11739_MI;
extern MethodInfo m11707_MI;
extern MethodInfo m11734_MI;
extern MethodInfo m11737_MI;
extern MethodInfo m11741_MI;
extern MethodInfo m1688_MI;
extern MethodInfo m11749_MI;
static MethodInfo* t327_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m11709_MI,
	&m1687_MI,
	&m11716_MI,
	&m11717_MI,
	&m11708_MI,
	&m11718_MI,
	&m11719_MI,
	&m11720_MI,
	&m11721_MI,
	&m11710_MI,
	&m2140_MI,
	&m11711_MI,
	&m11712_MI,
	&m11713_MI,
	&m11714_MI,
	&m11741_MI,
	&m1687_MI,
	&m11715_MI,
	&m11722_MI,
	&m2140_MI,
	&m11728_MI,
	&m11729_MI,
	&m11739_MI,
	&m11707_MI,
	&m11734_MI,
	&m11737_MI,
	&m11741_MI,
	&m1688_MI,
	&m11749_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2101_TI;
extern TypeInfo t2102_TI;
extern TypeInfo t2108_TI;
static TypeInfo* t327_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t1041_TI,
	&t2101_TI,
	&t2102_TI,
	&t2108_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2101_TI;
extern TypeInfo t2102_TI;
extern TypeInfo t2108_TI;
static Il2CppInterfaceOffsetPair t327_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t1041_TI, 9},
	{ &t2101_TI, 20},
	{ &t2102_TI, 27},
	{ &t2108_TI, 28},
};
extern TypeInfo t327_TI;
extern TypeInfo t2099_TI;
extern MethodInfo m11733_MI;
extern TypeInfo t2106_TI;
extern TypeInfo t212_TI;
extern MethodInfo m11722_MI;
extern MethodInfo m11728_MI;
extern MethodInfo m11734_MI;
extern MethodInfo m11736_MI;
extern MethodInfo m11737_MI;
extern MethodInfo m11739_MI;
extern MethodInfo m1688_MI;
extern MethodInfo m11749_MI;
extern MethodInfo m11723_MI;
extern MethodInfo m11747_MI;
extern MethodInfo m11748_MI;
extern MethodInfo m25122_MI;
extern MethodInfo m25123_MI;
extern MethodInfo m25124_MI;
extern MethodInfo m25125_MI;
extern MethodInfo m11738_MI;
extern TypeInfo t2101_TI;
extern MethodInfo m11724_MI;
extern MethodInfo m11725_MI;
extern TypeInfo t2103_TI;
extern MethodInfo m11761_MI;
extern MethodInfo m18801_MI;
extern MethodInfo m11731_MI;
extern MethodInfo m11732_MI;
extern MethodInfo m11836_MI;
extern MethodInfo m11755_MI;
extern MethodInfo m11735_MI;
extern MethodInfo m11741_MI;
extern MethodInfo m11842_MI;
extern MethodInfo m18803_MI;
extern MethodInfo m18811_MI;
extern MethodInfo m18799_MI;
static void* t327_RGCTXData[37] = 
{
	&t327_TI,
	&t2099_TI,
	&m11733_MI,
	&t2106_TI,
	&t212_TI,
	&m11722_MI,
	&m11728_MI,
	&m11734_MI,
	&m11736_MI,
	&m11737_MI,
	&m11739_MI,
	&m1688_MI,
	&m11749_MI,
	&m11723_MI,
	&m11747_MI,
	&m11748_MI,
	&m25122_MI,
	&m25123_MI,
	&m25124_MI,
	&m25125_MI,
	&m11738_MI,
	&t2101_TI,
	&m11724_MI,
	&m11725_MI,
	&t2103_TI,
	&m11761_MI,
	&m18801_MI,
	&m11731_MI,
	&m11732_MI,
	&m11836_MI,
	&m11755_MI,
	&m11735_MI,
	&m11741_MI,
	&m11842_MI,
	&m18803_MI,
	&m18811_MI,
	&m18799_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t327_0_0_0;
extern Il2CppType t327_1_0_0;
extern TypeInfo t7_TI;
struct t327;
extern TypeInfo t327_TI;
extern Il2CppGenericClass t327_GC;
extern CustomAttributesCache t866__CustomAttributeCache;
TypeInfo t327_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t327_MIs, t327_PIs, t327_FIs, NULL, &t7_TI, NULL, NULL, &t327_TI, t327_ITIs, t327_VT, &t866__CustomAttributeCache, &t327_TI, &t327_0_0_0, &t327_1_0_0, t327_IOs, &t327_GC, NULL, t327_FDVs, NULL, t327_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t327), 0, -1, sizeof(t327_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2101_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Canvas>
extern MethodInfo m25122_MI;
static PropertyInfo t2101____Count_PropertyInfo = 
{
	&t2101_TI, "Count", &m25122_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25126_MI;
static PropertyInfo t2101____IsReadOnly_PropertyInfo = 
{
	&t2101_TI, "IsReadOnly", &m25126_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2101_PIs[] =
{
	&t2101____Count_PropertyInfo,
	&t2101____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t2101_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25122_MI = 
{
	"get_Count", NULL, &t2101_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2101_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m25126_MI = 
{
	"get_IsReadOnly", NULL, &t2101_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t2101_m25127_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2101_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25127_MI = 
{
	"Add", NULL, &t2101_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2101_m25127_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2101_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m25128_MI = 
{
	"Clear", NULL, &t2101_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t2101_m25129_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2101_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25129_MI = 
{
	"Contains", NULL, &t2101_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2101_m25129_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2099_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2101_m25123_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2099_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2101_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25123_MI = 
{
	"CopyTo", NULL, &t2101_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2101_m25123_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t2101_m25130_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2101_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25130_MI = 
{
	"Remove", NULL, &t2101_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2101_m25130_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2101_MIs[] =
{
	&m25122_MI,
	&m25126_MI,
	&m25127_MI,
	&m25128_MI,
	&m25129_MI,
	&m25123_MI,
	&m25130_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t2102_TI;
static TypeInfo* t2101_ITIs[] = 
{
	&t618_TI,
	&t2102_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2101_0_0_0;
extern Il2CppType t2101_1_0_0;
struct t2101;
extern TypeInfo t2101_TI;
extern Il2CppGenericClass t2101_GC;
TypeInfo t2101_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t2101_MIs, t2101_PIs, NULL, NULL, NULL, NULL, NULL, &t2101_TI, t2101_ITIs, NULL, &EmptyCustomAttributesCache, &t2101_TI, &t2101_0_0_0, &t2101_1_0_0, NULL, &t2101_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2102_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Canvas>
extern TypeInfo t2102_TI;
extern Il2CppType t2100_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25124_MI = 
{
	"GetEnumerator", NULL, &t2102_TI, &t2100_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2102_MIs[] =
{
	&m25124_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t2102_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2102_0_0_0;
extern Il2CppType t2102_1_0_0;
struct t2102;
extern TypeInfo t2102_TI;
extern Il2CppGenericClass t2102_GC;
TypeInfo t2102_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2102_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2102_TI, t2102_ITIs, NULL, &EmptyCustomAttributesCache, &t2102_TI, &t2102_0_0_0, &t2102_1_0_0, NULL, &t2102_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2100_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Canvas>
extern MethodInfo m25125_MI;
static PropertyInfo t2100____Current_PropertyInfo = 
{
	&t2100_TI, "Current", &m25125_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2100_PIs[] =
{
	&t2100____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2100_TI;
extern Il2CppType t212_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25125_MI = 
{
	"get_Current", NULL, &t2100_TI, &t212_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2100_MIs[] =
{
	&m25125_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t2100_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2100_0_0_0;
extern Il2CppType t2100_1_0_0;
struct t2100;
extern TypeInfo t2100_TI;
extern Il2CppGenericClass t2100_GC;
TypeInfo t2100_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2100_MIs, t2100_PIs, NULL, NULL, NULL, NULL, NULL, &t2100_TI, t2100_ITIs, NULL, &EmptyCustomAttributesCache, &t2100_TI, &t2100_0_0_0, &t2100_1_0_0, NULL, &t2100_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2107.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2107_TI;
#include "t2107MD.h"

extern TypeInfo t2107_TI;
extern TypeInfo t212_TI;
extern TypeInfo t1295_TI;
#include "t1295MD.h"
extern MethodInfo m11754_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18788_MI;
struct t52;
struct t52;
 t7 * m17147_gshared (t52 * __this, int32_t p0, MethodInfo* method);
#define m17147(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
#define m18788(__this, p0, method) (t212 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m18788_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Canvas>
extern Il2CppType t52_0_0_1;
FieldInfo t2107_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2107_TI, offsetof(t2107, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2107_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2107_TI, offsetof(t2107, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2107_FIs[] =
{
	&t2107_f0_FieldInfo,
	&t2107_f1_FieldInfo,
	NULL
};
extern MethodInfo m11751_MI;
static PropertyInfo t2107____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2107_TI, "System.Collections.IEnumerator.Current", &m11751_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11754_MI;
static PropertyInfo t2107____Current_PropertyInfo = 
{
	&t2107_TI, "Current", &m11754_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2107_PIs[] =
{
	&t2107____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2107____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2107_m11750_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2107_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11750_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2107_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2107_m11750_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2107_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11751_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2107_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2107_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11752_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2107_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2107_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11753_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2107_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2107_TI;
extern Il2CppType t212_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11754_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2107_TI, &t212_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2107_MIs[] =
{
	&m11750_MI,
	&m11751_MI,
	&m11752_MI,
	&m11753_MI,
	&m11754_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m11751_MI;
extern MethodInfo m11753_MI;
extern MethodInfo m11752_MI;
extern MethodInfo m11754_MI;
static MethodInfo* t2107_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m11751_MI,
	&m11753_MI,
	&m11752_MI,
	&m11754_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2100_TI;
static TypeInfo* t2107_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2100_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2100_TI;
static Il2CppInterfaceOffsetPair t2107_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2100_TI, 7},
};
extern MethodInfo m11754_MI;
extern TypeInfo t212_TI;
extern MethodInfo m18788_MI;
static void* t2107_RGCTXData[3] = 
{
	&m11754_MI,
	&t212_TI,
	&m18788_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2107_0_0_0;
extern Il2CppType t2107_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2107_TI;
extern Il2CppGenericClass t2107_GC;
extern TypeInfo t52_TI;
TypeInfo t2107_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2107_MIs, t2107_PIs, t2107_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2107_TI, t2107_ITIs, t2107_VT, &EmptyCustomAttributesCache, &t2107_TI, &t2107_0_0_0, &t2107_1_0_0, t2107_IOs, &t2107_GC, NULL, NULL, NULL, t2107_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2107)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2108_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Canvas>
extern MethodInfo m25131_MI;
extern MethodInfo m25132_MI;
static PropertyInfo t2108____Item_PropertyInfo = 
{
	&t2108_TI, "Item", &m25131_MI, &m25132_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2108_PIs[] =
{
	&t2108____Item_PropertyInfo,
	NULL
};
extern Il2CppType t212_0_0_0;
static ParameterInfo t2108_m25133_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2108_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25133_MI = 
{
	"IndexOf", NULL, &t2108_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2108_m25133_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t2108_m25134_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2108_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25134_MI = 
{
	"Insert", NULL, &t2108_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2108_m25134_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2108_m25135_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2108_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25135_MI = 
{
	"RemoveAt", NULL, &t2108_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2108_m25135_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2108_m25131_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2108_TI;
extern Il2CppType t212_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25131_MI = 
{
	"get_Item", NULL, &t2108_TI, &t212_0_0_0, RuntimeInvoker_t7_t60, t2108_m25131_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t2108_m25132_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2108_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25132_MI = 
{
	"set_Item", NULL, &t2108_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2108_m25132_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2108_MIs[] =
{
	&m25133_MI,
	&m25134_MI,
	&m25135_MI,
	&m25131_MI,
	&m25132_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t2101_TI;
extern TypeInfo t2102_TI;
static TypeInfo* t2108_ITIs[] = 
{
	&t618_TI,
	&t2101_TI,
	&t2102_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2108_0_0_0;
extern Il2CppType t2108_1_0_0;
struct t2108;
extern TypeInfo t2108_TI;
extern Il2CppGenericClass t2108_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t2108_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t2108_MIs, t2108_PIs, NULL, NULL, NULL, NULL, NULL, &t2108_TI, t2108_ITIs, NULL, &t1426__CustomAttributeCache, &t2108_TI, &t2108_0_0_0, &t2108_1_0_0, NULL, &t2108_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2106_TI;

#include "t70.h"
#include "t1312.h"
extern TypeInfo t2106_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t212_TI;
extern TypeInfo t327_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1312_TI;
#include "t70MD.h"
#include "t1312MD.h"
extern MethodInfo m11758_MI;
extern MethodInfo m7022_MI;
extern MethodInfo m1555_MI;
extern MethodInfo m3114_MI;
extern MethodInfo m7227_MI;
extern MethodInfo m7023_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.Canvas>
extern Il2CppType t327_0_0_1;
FieldInfo t2106_f0_FieldInfo = 
{
	"l", &t327_0_0_1, &t2106_TI, offsetof(t2106, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2106_f1_FieldInfo = 
{
	"next", &t60_0_0_1, &t2106_TI, offsetof(t2106, f1) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2106_f2_FieldInfo = 
{
	"ver", &t60_0_0_1, &t2106_TI, offsetof(t2106, f2) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t212_0_0_1;
FieldInfo t2106_f3_FieldInfo = 
{
	"current", &t212_0_0_1, &t2106_TI, offsetof(t2106, f3) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2106_FIs[] =
{
	&t2106_f0_FieldInfo,
	&t2106_f1_FieldInfo,
	&t2106_f2_FieldInfo,
	&t2106_f3_FieldInfo,
	NULL
};
extern MethodInfo m11756_MI;
static PropertyInfo t2106____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2106_TI, "System.Collections.IEnumerator.Current", &m11756_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11760_MI;
static PropertyInfo t2106____Current_PropertyInfo = 
{
	&t2106_TI, "Current", &m11760_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2106_PIs[] =
{
	&t2106____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2106____Current_PropertyInfo,
	NULL
};
extern Il2CppType t327_0_0_0;
static ParameterInfo t2106_m11755_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t327_0_0_0},
};
extern TypeInfo t2106_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11755_MI = 
{
	".ctor", (methodPointerType)&m8306_gshared, &t2106_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2106_m11755_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2106_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11756_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8307_gshared, &t2106_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2106_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11757_MI = 
{
	"Dispose", (methodPointerType)&m8308_gshared, &t2106_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2106_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11758_MI = 
{
	"VerifyState", (methodPointerType)&m8309_gshared, &t2106_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2106_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11759_MI = 
{
	"MoveNext", (methodPointerType)&m8310_gshared, &t2106_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2106_TI;
extern Il2CppType t212_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11760_MI = 
{
	"get_Current", (methodPointerType)&m8311_gshared, &t2106_TI, &t212_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2106_MIs[] =
{
	&m11755_MI,
	&m11756_MI,
	&m11757_MI,
	&m11758_MI,
	&m11759_MI,
	&m11760_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m11756_MI;
extern MethodInfo m11759_MI;
extern MethodInfo m11757_MI;
extern MethodInfo m11760_MI;
static MethodInfo* t2106_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m11756_MI,
	&m11759_MI,
	&m11757_MI,
	&m11760_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2100_TI;
static TypeInfo* t2106_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2100_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2100_TI;
static Il2CppInterfaceOffsetPair t2106_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2100_TI, 7},
};
extern MethodInfo m11758_MI;
extern TypeInfo t212_TI;
extern TypeInfo t2106_TI;
static void* t2106_RGCTXData[3] = 
{
	&m11758_MI,
	&t212_TI,
	&t2106_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2106_0_0_0;
extern Il2CppType t2106_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2106_TI;
extern Il2CppGenericClass t2106_GC;
extern TypeInfo t866_TI;
TypeInfo t2106_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2106_MIs, t2106_PIs, t2106_FIs, NULL, &t159_TI, NULL, &t866_TI, &t2106_TI, t2106_ITIs, t2106_VT, &EmptyCustomAttributesCache, &t2106_TI, &t2106_0_0_0, &t2106_1_0_0, t2106_IOs, &t2106_GC, NULL, NULL, NULL, t2106_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2106)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2103_TI;

extern TypeInfo t2103_TI;
extern TypeInfo t212_TI;
extern TypeInfo t60_TI;
extern TypeInfo t62_TI;
extern TypeInfo t2108_TI;
extern TypeInfo t2101_TI;
extern TypeInfo t87_TI;
extern TypeInfo t669_TI;
extern TypeInfo t53_TI;
extern TypeInfo t52_TI;
extern TypeInfo t618_TI;
extern TypeInfo t12_TI;
extern TypeInfo t55_TI;
extern TypeInfo t2099_TI;
extern TypeInfo t2102_TI;
extern TypeInfo t2100_TI;
#include "t2109MD.h"
extern MethodInfo m11790_MI;
extern MethodInfo m120_MI;
extern MethodInfo m25131_MI;
extern MethodInfo m25122_MI;
extern MethodInfo m116_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m7516_MI;
extern MethodInfo m7425_MI;
extern MethodInfo m11822_MI;
extern MethodInfo m25129_MI;
extern MethodInfo m25133_MI;
extern MethodInfo m25123_MI;
extern MethodInfo m25124_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Canvas>
extern Il2CppType t2108_0_0_1;
FieldInfo t2103_f0_FieldInfo = 
{
	"list", &t2108_0_0_1, &t2103_TI, offsetof(t2103, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2103_FIs[] =
{
	&t2103_f0_FieldInfo,
	NULL
};
extern MethodInfo m11767_MI;
extern MethodInfo m11768_MI;
static PropertyInfo t2103____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2103_TI, "System.Collections.Generic.IList<T>.Item", &m11767_MI, &m11768_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11769_MI;
static PropertyInfo t2103____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2103_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m11769_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11779_MI;
static PropertyInfo t2103____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2103_TI, "System.Collections.ICollection.IsSynchronized", &m11779_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11780_MI;
static PropertyInfo t2103____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2103_TI, "System.Collections.ICollection.SyncRoot", &m11780_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11781_MI;
static PropertyInfo t2103____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2103_TI, "System.Collections.IList.IsFixedSize", &m11781_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11782_MI;
static PropertyInfo t2103____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2103_TI, "System.Collections.IList.IsReadOnly", &m11782_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11783_MI;
extern MethodInfo m11784_MI;
static PropertyInfo t2103____System_Collections_IList_Item_PropertyInfo = 
{
	&t2103_TI, "System.Collections.IList.Item", &m11783_MI, &m11784_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11789_MI;
static PropertyInfo t2103____Count_PropertyInfo = 
{
	&t2103_TI, "Count", &m11789_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11790_MI;
static PropertyInfo t2103____Item_PropertyInfo = 
{
	&t2103_TI, "Item", &m11790_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2103_PIs[] =
{
	&t2103____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2103____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2103____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2103____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2103____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2103____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2103____System_Collections_IList_Item_PropertyInfo,
	&t2103____Count_PropertyInfo,
	&t2103____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2108_0_0_0;
static ParameterInfo t2103_m11761_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2108_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11761_MI = 
{
	".ctor", (methodPointerType)&m8312_gshared, &t2103_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2103_m11761_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t2103_m11762_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11762_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m8313_gshared, &t2103_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2103_m11762_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2103_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11763_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m8314_gshared, &t2103_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t2103_m11764_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11764_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m8315_gshared, &t2103_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2103_m11764_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t2103_m11765_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11765_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m8316_gshared, &t2103_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2103_m11765_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2103_m11766_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11766_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m8317_gshared, &t2103_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2103_m11766_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2103_m11767_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t212_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11767_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8318_gshared, &t2103_TI, &t212_0_0_0, RuntimeInvoker_t7_t60, t2103_m11767_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t2103_m11768_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11768_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8319_gshared, &t2103_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2103_m11768_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2103_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11769_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8320_gshared, &t2103_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2103_m11770_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11770_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8321_gshared, &t2103_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2103_m11770_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2103_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11771_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8322_gshared, &t2103_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2103_m11772_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11772_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8323_gshared, &t2103_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2103_m11772_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2103_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11773_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8324_gshared, &t2103_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2103_m11774_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11774_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8325_gshared, &t2103_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2103_m11774_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2103_m11775_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11775_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8326_gshared, &t2103_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2103_m11775_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2103_m11776_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11776_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8327_gshared, &t2103_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2103_m11776_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2103_m11777_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11777_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8328_gshared, &t2103_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2103_m11777_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2103_m11778_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11778_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8329_gshared, &t2103_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2103_m11778_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2103_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11779_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8330_gshared, &t2103_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2103_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11780_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8331_gshared, &t2103_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2103_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11781_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8332_gshared, &t2103_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2103_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11782_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8333_gshared, &t2103_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2103_m11783_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11783_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8334_gshared, &t2103_TI, &t7_0_0_0, RuntimeInvoker_t7_t60, t2103_m11783_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2103_m11784_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11784_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8335_gshared, &t2103_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2103_m11784_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t2103_m11785_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11785_MI = 
{
	"Contains", (methodPointerType)&m8336_gshared, &t2103_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2103_m11785_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2099_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2103_m11786_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2099_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11786_MI = 
{
	"CopyTo", (methodPointerType)&m8337_gshared, &t2103_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2103_m11786_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2103_TI;
extern Il2CppType t2100_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11787_MI = 
{
	"GetEnumerator", (methodPointerType)&m8338_gshared, &t2103_TI, &t2100_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t2103_m11788_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11788_MI = 
{
	"IndexOf", (methodPointerType)&m8339_gshared, &t2103_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2103_m11788_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2103_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11789_MI = 
{
	"get_Count", (methodPointerType)&m8340_gshared, &t2103_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2103_m11790_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2103_TI;
extern Il2CppType t212_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11790_MI = 
{
	"get_Item", (methodPointerType)&m8341_gshared, &t2103_TI, &t212_0_0_0, RuntimeInvoker_t7_t60, t2103_m11790_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2103_MIs[] =
{
	&m11761_MI,
	&m11762_MI,
	&m11763_MI,
	&m11764_MI,
	&m11765_MI,
	&m11766_MI,
	&m11767_MI,
	&m11768_MI,
	&m11769_MI,
	&m11770_MI,
	&m11771_MI,
	&m11772_MI,
	&m11773_MI,
	&m11774_MI,
	&m11775_MI,
	&m11776_MI,
	&m11777_MI,
	&m11778_MI,
	&m11779_MI,
	&m11780_MI,
	&m11781_MI,
	&m11782_MI,
	&m11783_MI,
	&m11784_MI,
	&m11785_MI,
	&m11786_MI,
	&m11787_MI,
	&m11788_MI,
	&m11789_MI,
	&m11790_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m11771_MI;
extern MethodInfo m11789_MI;
extern MethodInfo m11779_MI;
extern MethodInfo m11780_MI;
extern MethodInfo m11770_MI;
extern MethodInfo m11781_MI;
extern MethodInfo m11782_MI;
extern MethodInfo m11783_MI;
extern MethodInfo m11784_MI;
extern MethodInfo m11772_MI;
extern MethodInfo m11773_MI;
extern MethodInfo m11774_MI;
extern MethodInfo m11775_MI;
extern MethodInfo m11776_MI;
extern MethodInfo m11777_MI;
extern MethodInfo m11778_MI;
extern MethodInfo m11789_MI;
extern MethodInfo m11769_MI;
extern MethodInfo m11762_MI;
extern MethodInfo m11763_MI;
extern MethodInfo m11785_MI;
extern MethodInfo m11786_MI;
extern MethodInfo m11765_MI;
extern MethodInfo m11788_MI;
extern MethodInfo m11764_MI;
extern MethodInfo m11766_MI;
extern MethodInfo m11767_MI;
extern MethodInfo m11768_MI;
extern MethodInfo m11787_MI;
extern MethodInfo m11790_MI;
static MethodInfo* t2103_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m11771_MI,
	&m11789_MI,
	&m11779_MI,
	&m11780_MI,
	&m11770_MI,
	&m11781_MI,
	&m11782_MI,
	&m11783_MI,
	&m11784_MI,
	&m11772_MI,
	&m11773_MI,
	&m11774_MI,
	&m11775_MI,
	&m11776_MI,
	&m11777_MI,
	&m11778_MI,
	&m11789_MI,
	&m11769_MI,
	&m11762_MI,
	&m11763_MI,
	&m11785_MI,
	&m11786_MI,
	&m11765_MI,
	&m11788_MI,
	&m11764_MI,
	&m11766_MI,
	&m11767_MI,
	&m11768_MI,
	&m11787_MI,
	&m11790_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2101_TI;
extern TypeInfo t2108_TI;
extern TypeInfo t2102_TI;
static TypeInfo* t2103_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t1041_TI,
	&t2101_TI,
	&t2108_TI,
	&t2102_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2101_TI;
extern TypeInfo t2108_TI;
extern TypeInfo t2102_TI;
static Il2CppInterfaceOffsetPair t2103_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t1041_TI, 9},
	{ &t2101_TI, 20},
	{ &t2108_TI, 27},
	{ &t2102_TI, 32},
};
extern MethodInfo m11790_MI;
extern MethodInfo m11822_MI;
extern TypeInfo t212_TI;
extern MethodInfo m25129_MI;
extern MethodInfo m25133_MI;
extern MethodInfo m25131_MI;
extern MethodInfo m25123_MI;
extern MethodInfo m25124_MI;
extern MethodInfo m25122_MI;
static void* t2103_RGCTXData[9] = 
{
	&m11790_MI,
	&m11822_MI,
	&t212_TI,
	&m25129_MI,
	&m25133_MI,
	&m25131_MI,
	&m25123_MI,
	&m25124_MI,
	&m25122_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2103_0_0_0;
extern Il2CppType t2103_1_0_0;
extern TypeInfo t7_TI;
struct t2103;
extern TypeInfo t2103_TI;
extern Il2CppGenericClass t2103_GC;
extern CustomAttributesCache t868__CustomAttributeCache;
TypeInfo t2103_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2103_MIs, t2103_PIs, t2103_FIs, NULL, &t7_TI, NULL, NULL, &t2103_TI, t2103_ITIs, t2103_VT, &t868__CustomAttributeCache, &t2103_TI, &t2103_0_0_0, &t2103_1_0_0, t2103_IOs, &t2103_GC, NULL, NULL, NULL, t2103_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2103), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2109.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2109_TI;

#include "t71.h"
extern TypeInfo t2109_TI;
extern TypeInfo t2101_TI;
extern TypeInfo t55_TI;
extern TypeInfo t2108_TI;
extern TypeInfo t212_TI;
extern TypeInfo t60_TI;
extern TypeInfo t53_TI;
extern TypeInfo t327_TI;
extern TypeInfo t669_TI;
extern TypeInfo t7_TI;
extern TypeInfo t52_TI;
extern TypeInfo t2102_TI;
extern TypeInfo t2100_TI;
extern TypeInfo t2099_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern TypeInfo t62_TI;
extern TypeInfo t1041_TI;
extern Il2CppType t212_0_0_0;
extern MethodInfo m25126_MI;
extern MethodInfo m11825_MI;
extern MethodInfo m11826_MI;
extern MethodInfo m25131_MI;
extern MethodInfo m11823_MI;
extern MethodInfo m11821_MI;
extern MethodInfo m25122_MI;
extern MethodInfo m116_MI;
extern MethodInfo m11704_MI;
extern MethodInfo m7515_MI;
extern MethodInfo m7516_MI;
extern MethodInfo m25124_MI;
extern MethodInfo m11814_MI;
extern MethodInfo m11822_MI;
extern MethodInfo m25129_MI;
extern MethodInfo m25133_MI;
extern MethodInfo m11824_MI;
extern MethodInfo m11812_MI;
extern MethodInfo m11817_MI;
extern MethodInfo m11808_MI;
extern MethodInfo m25128_MI;
extern MethodInfo m25123_MI;
extern MethodInfo m25134_MI;
extern MethodInfo m25135_MI;
extern MethodInfo m25132_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3933_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m120_MI;
extern MethodInfo m7514_MI;
extern MethodInfo m7517_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.Canvas>
extern Il2CppType t2108_0_0_1;
FieldInfo t2109_f0_FieldInfo = 
{
	"list", &t2108_0_0_1, &t2109_TI, offsetof(t2109, f0), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_1;
FieldInfo t2109_f1_FieldInfo = 
{
	"syncRoot", &t7_0_0_1, &t2109_TI, offsetof(t2109, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2109_FIs[] =
{
	&t2109_f0_FieldInfo,
	&t2109_f1_FieldInfo,
	NULL
};
extern MethodInfo m11792_MI;
static PropertyInfo t2109____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2109_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m11792_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11800_MI;
static PropertyInfo t2109____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2109_TI, "System.Collections.ICollection.IsSynchronized", &m11800_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11801_MI;
static PropertyInfo t2109____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2109_TI, "System.Collections.ICollection.SyncRoot", &m11801_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11802_MI;
static PropertyInfo t2109____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2109_TI, "System.Collections.IList.IsFixedSize", &m11802_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11803_MI;
static PropertyInfo t2109____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2109_TI, "System.Collections.IList.IsReadOnly", &m11803_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11804_MI;
extern MethodInfo m11805_MI;
static PropertyInfo t2109____System_Collections_IList_Item_PropertyInfo = 
{
	&t2109_TI, "System.Collections.IList.Item", &m11804_MI, &m11805_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11818_MI;
static PropertyInfo t2109____Count_PropertyInfo = 
{
	&t2109_TI, "Count", &m11818_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11819_MI;
extern MethodInfo m11820_MI;
static PropertyInfo t2109____Item_PropertyInfo = 
{
	&t2109_TI, "Item", &m11819_MI, &m11820_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2109_PIs[] =
{
	&t2109____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2109____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2109____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2109____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2109____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2109____System_Collections_IList_Item_PropertyInfo,
	&t2109____Count_PropertyInfo,
	&t2109____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2109_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11791_MI = 
{
	".ctor", (methodPointerType)&m8342_gshared, &t2109_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2109_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11792_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8343_gshared, &t2109_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2109_m11793_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11793_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8344_gshared, &t2109_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2109_m11793_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2109_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11794_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8345_gshared, &t2109_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2109_m11795_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11795_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8346_gshared, &t2109_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2109_m11795_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2109_m11796_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11796_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8347_gshared, &t2109_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2109_m11796_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2109_m11797_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11797_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8348_gshared, &t2109_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2109_m11797_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2109_m11798_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11798_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8349_gshared, &t2109_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2109_m11798_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2109_m11799_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11799_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8350_gshared, &t2109_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2109_m11799_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2109_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11800_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8351_gshared, &t2109_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2109_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11801_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8352_gshared, &t2109_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2109_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11802_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8353_gshared, &t2109_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2109_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11803_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8354_gshared, &t2109_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2109_m11804_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11804_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8355_gshared, &t2109_TI, &t7_0_0_0, RuntimeInvoker_t7_t60, t2109_m11804_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2109_m11805_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11805_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8356_gshared, &t2109_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2109_m11805_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t2109_m11806_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11806_MI = 
{
	"Add", (methodPointerType)&m8357_gshared, &t2109_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2109_m11806_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2109_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11807_MI = 
{
	"Clear", (methodPointerType)&m8358_gshared, &t2109_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2109_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11808_MI = 
{
	"ClearItems", (methodPointerType)&m8359_gshared, &t2109_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t2109_m11809_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11809_MI = 
{
	"Contains", (methodPointerType)&m8360_gshared, &t2109_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2109_m11809_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2099_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2109_m11810_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2099_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11810_MI = 
{
	"CopyTo", (methodPointerType)&m8361_gshared, &t2109_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2109_m11810_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2109_TI;
extern Il2CppType t2100_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11811_MI = 
{
	"GetEnumerator", (methodPointerType)&m8362_gshared, &t2109_TI, &t2100_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t2109_m11812_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11812_MI = 
{
	"IndexOf", (methodPointerType)&m8363_gshared, &t2109_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2109_m11812_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t2109_m11813_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11813_MI = 
{
	"Insert", (methodPointerType)&m8364_gshared, &t2109_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2109_m11813_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t2109_m11814_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11814_MI = 
{
	"InsertItem", (methodPointerType)&m8365_gshared, &t2109_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2109_m11814_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t2109_m11815_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11815_MI = 
{
	"Remove", (methodPointerType)&m8366_gshared, &t2109_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2109_m11815_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2109_m11816_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11816_MI = 
{
	"RemoveAt", (methodPointerType)&m8367_gshared, &t2109_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2109_m11816_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2109_m11817_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11817_MI = 
{
	"RemoveItem", (methodPointerType)&m8368_gshared, &t2109_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2109_m11817_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2109_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11818_MI = 
{
	"get_Count", (methodPointerType)&m8369_gshared, &t2109_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2109_m11819_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t212_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11819_MI = 
{
	"get_Item", (methodPointerType)&m8370_gshared, &t2109_TI, &t212_0_0_0, RuntimeInvoker_t7_t60, t2109_m11819_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t2109_m11820_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11820_MI = 
{
	"set_Item", (methodPointerType)&m8371_gshared, &t2109_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2109_m11820_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t2109_m11821_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11821_MI = 
{
	"SetItem", (methodPointerType)&m8372_gshared, &t2109_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2109_m11821_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2109_m11822_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11822_MI = 
{
	"IsValidItem", (methodPointerType)&m8373_gshared, &t2109_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2109_m11822_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2109_m11823_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t212_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11823_MI = 
{
	"ConvertItem", (methodPointerType)&m8374_gshared, &t2109_TI, &t212_0_0_0, RuntimeInvoker_t7_t7, t2109_m11823_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2108_0_0_0;
static ParameterInfo t2109_m11824_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2108_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11824_MI = 
{
	"CheckWritable", (methodPointerType)&m8375_gshared, &t2109_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2109_m11824_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2108_0_0_0;
static ParameterInfo t2109_m11825_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2108_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11825_MI = 
{
	"IsSynchronized", (methodPointerType)&m8376_gshared, &t2109_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2109_m11825_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2108_0_0_0;
static ParameterInfo t2109_m11826_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t2108_0_0_0},
};
extern TypeInfo t2109_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11826_MI = 
{
	"IsFixedSize", (methodPointerType)&m8377_gshared, &t2109_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2109_m11826_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2109_MIs[] =
{
	&m11791_MI,
	&m11792_MI,
	&m11793_MI,
	&m11794_MI,
	&m11795_MI,
	&m11796_MI,
	&m11797_MI,
	&m11798_MI,
	&m11799_MI,
	&m11800_MI,
	&m11801_MI,
	&m11802_MI,
	&m11803_MI,
	&m11804_MI,
	&m11805_MI,
	&m11806_MI,
	&m11807_MI,
	&m11808_MI,
	&m11809_MI,
	&m11810_MI,
	&m11811_MI,
	&m11812_MI,
	&m11813_MI,
	&m11814_MI,
	&m11815_MI,
	&m11816_MI,
	&m11817_MI,
	&m11818_MI,
	&m11819_MI,
	&m11820_MI,
	&m11821_MI,
	&m11822_MI,
	&m11823_MI,
	&m11824_MI,
	&m11825_MI,
	&m11826_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m11794_MI;
extern MethodInfo m11818_MI;
extern MethodInfo m11800_MI;
extern MethodInfo m11801_MI;
extern MethodInfo m11793_MI;
extern MethodInfo m11802_MI;
extern MethodInfo m11803_MI;
extern MethodInfo m11804_MI;
extern MethodInfo m11805_MI;
extern MethodInfo m11795_MI;
extern MethodInfo m11807_MI;
extern MethodInfo m11796_MI;
extern MethodInfo m11797_MI;
extern MethodInfo m11798_MI;
extern MethodInfo m11799_MI;
extern MethodInfo m11816_MI;
extern MethodInfo m11818_MI;
extern MethodInfo m11792_MI;
extern MethodInfo m11806_MI;
extern MethodInfo m11807_MI;
extern MethodInfo m11809_MI;
extern MethodInfo m11810_MI;
extern MethodInfo m11815_MI;
extern MethodInfo m11812_MI;
extern MethodInfo m11813_MI;
extern MethodInfo m11816_MI;
extern MethodInfo m11819_MI;
extern MethodInfo m11820_MI;
extern MethodInfo m11811_MI;
extern MethodInfo m11808_MI;
extern MethodInfo m11814_MI;
extern MethodInfo m11817_MI;
extern MethodInfo m11821_MI;
static MethodInfo* t2109_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m11794_MI,
	&m11818_MI,
	&m11800_MI,
	&m11801_MI,
	&m11793_MI,
	&m11802_MI,
	&m11803_MI,
	&m11804_MI,
	&m11805_MI,
	&m11795_MI,
	&m11807_MI,
	&m11796_MI,
	&m11797_MI,
	&m11798_MI,
	&m11799_MI,
	&m11816_MI,
	&m11818_MI,
	&m11792_MI,
	&m11806_MI,
	&m11807_MI,
	&m11809_MI,
	&m11810_MI,
	&m11815_MI,
	&m11812_MI,
	&m11813_MI,
	&m11816_MI,
	&m11819_MI,
	&m11820_MI,
	&m11811_MI,
	&m11808_MI,
	&m11814_MI,
	&m11817_MI,
	&m11821_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2101_TI;
extern TypeInfo t2108_TI;
extern TypeInfo t2102_TI;
static TypeInfo* t2109_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t1041_TI,
	&t2101_TI,
	&t2108_TI,
	&t2102_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t2101_TI;
extern TypeInfo t2108_TI;
extern TypeInfo t2102_TI;
static Il2CppInterfaceOffsetPair t2109_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t1041_TI, 9},
	{ &t2101_TI, 20},
	{ &t2108_TI, 27},
	{ &t2102_TI, 32},
};
extern TypeInfo t327_TI;
extern MethodInfo m11704_MI;
extern MethodInfo m25126_MI;
extern MethodInfo m25124_MI;
extern MethodInfo m25122_MI;
extern MethodInfo m11823_MI;
extern MethodInfo m11814_MI;
extern MethodInfo m11822_MI;
extern TypeInfo t212_TI;
extern MethodInfo m25129_MI;
extern MethodInfo m25133_MI;
extern MethodInfo m11824_MI;
extern MethodInfo m11812_MI;
extern MethodInfo m11817_MI;
extern MethodInfo m11825_MI;
extern MethodInfo m11826_MI;
extern MethodInfo m25131_MI;
extern MethodInfo m11821_MI;
extern MethodInfo m11808_MI;
extern MethodInfo m25128_MI;
extern MethodInfo m25123_MI;
extern MethodInfo m25134_MI;
extern MethodInfo m25135_MI;
extern MethodInfo m25132_MI;
extern Il2CppType t212_0_0_0;
static void* t2109_RGCTXData[25] = 
{
	&t327_TI,
	&m11704_MI,
	&m25126_MI,
	&m25124_MI,
	&m25122_MI,
	&m11823_MI,
	&m11814_MI,
	&m11822_MI,
	&t212_TI,
	&m25129_MI,
	&m25133_MI,
	&m11824_MI,
	&m11812_MI,
	&m11817_MI,
	&m11825_MI,
	&m11826_MI,
	&m25131_MI,
	&m11821_MI,
	&m11808_MI,
	&m25128_MI,
	&m25123_MI,
	&m25134_MI,
	&m25135_MI,
	&m25132_MI,
	(void*)&t212_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2109_0_0_0;
extern Il2CppType t2109_1_0_0;
extern TypeInfo t7_TI;
struct t2109;
extern TypeInfo t2109_TI;
extern Il2CppGenericClass t2109_GC;
extern CustomAttributesCache t867__CustomAttributeCache;
TypeInfo t2109_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2109_MIs, t2109_PIs, t2109_FIs, NULL, &t7_TI, NULL, NULL, &t2109_TI, t2109_ITIs, t2109_VT, &t867__CustomAttributeCache, &t2109_TI, &t2109_0_0_0, &t2109_1_0_0, t2109_IOs, &t2109_GC, NULL, NULL, NULL, t2109_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2109), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2110_TI;
#include "t2110MD.h"

#include "t863.h"
#include "t2111.h"
extern TypeInfo t2110_TI;
extern TypeInfo t5334_TI;
extern TypeInfo t70_TI;
extern TypeInfo t212_TI;
extern TypeInfo t55_TI;
extern TypeInfo t863_TI;
extern TypeInfo t553_TI;
extern TypeInfo t2111_TI;
extern TypeInfo t60_TI;
#include "t1249MD.h"
#include "t2111MD.h"
extern Il2CppType t5334_0_0_0;
extern Il2CppType t212_0_0_0;
extern Il2CppType t863_0_0_0;
extern MethodInfo m116_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3097_MI;
extern MethodInfo m3095_MI;
extern MethodInfo m6560_MI;
extern MethodInfo m11832_MI;
extern MethodInfo m25136_MI;
extern MethodInfo m18800_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.Canvas>
extern Il2CppType t2110_0_0_49;
FieldInfo t2110_f0_FieldInfo = 
{
	"_default", &t2110_0_0_49, &t2110_TI, offsetof(t2110_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2110_FIs[] =
{
	&t2110_f0_FieldInfo,
	NULL
};
extern MethodInfo m11831_MI;
static PropertyInfo t2110____Default_PropertyInfo = 
{
	&t2110_TI, "Default", &m11831_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2110_PIs[] =
{
	&t2110____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2110_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11827_MI = 
{
	".ctor", (methodPointerType)&m8378_gshared, &t2110_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2110_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11828_MI = 
{
	".cctor", (methodPointerType)&m8379_gshared, &t2110_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2110_m11829_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2110_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11829_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8380_gshared, &t2110_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2110_m11829_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2110_m11830_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2110_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11830_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8381_gshared, &t2110_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2110_m11830_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t2110_m25136_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2110_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25136_MI = 
{
	"GetHashCode", NULL, &t2110_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2110_m25136_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t2110_m18800_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2110_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m18800_MI = 
{
	"Equals", NULL, &t2110_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2110_m18800_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2110_TI;
extern Il2CppType t2110_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11831_MI = 
{
	"get_Default", (methodPointerType)&m8382_gshared, &t2110_TI, &t2110_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2110_MIs[] =
{
	&m11827_MI,
	&m11828_MI,
	&m11829_MI,
	&m11830_MI,
	&m25136_MI,
	&m18800_MI,
	&m11831_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m18800_MI;
extern MethodInfo m25136_MI;
extern MethodInfo m11830_MI;
extern MethodInfo m11829_MI;
static MethodInfo* t2110_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m18800_MI,
	&m25136_MI,
	&m11830_MI,
	&m11829_MI,
	NULL,
	NULL,
};
extern TypeInfo t2131_TI;
extern TypeInfo t886_TI;
static TypeInfo* t2110_ITIs[] = 
{
	&t2131_TI,
	&t886_TI,
};
extern TypeInfo t2131_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t2110_IOs[] = 
{
	{ &t2131_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t5334_0_0_0;
extern Il2CppType t212_0_0_0;
extern TypeInfo t2110_TI;
extern TypeInfo t2110_TI;
extern TypeInfo t2111_TI;
extern MethodInfo m11832_MI;
extern TypeInfo t212_TI;
extern MethodInfo m25136_MI;
extern MethodInfo m18800_MI;
static void* t2110_RGCTXData[9] = 
{
	(void*)&t5334_0_0_0,
	(void*)&t212_0_0_0,
	&t2110_TI,
	&t2110_TI,
	&t2111_TI,
	&m11832_MI,
	&t212_TI,
	&m25136_MI,
	&m18800_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2110_0_0_0;
extern Il2CppType t2110_1_0_0;
extern TypeInfo t7_TI;
struct t2110;
extern TypeInfo t2110_TI;
extern Il2CppGenericClass t2110_GC;
TypeInfo t2110_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2110_MIs, t2110_PIs, t2110_FIs, NULL, &t7_TI, NULL, NULL, &t2110_TI, t2110_ITIs, t2110_VT, &EmptyCustomAttributesCache, &t2110_TI, &t2110_0_0_0, &t2110_1_0_0, t2110_IOs, &t2110_GC, NULL, NULL, NULL, t2110_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2110), 0, -1, sizeof(t2110_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2131_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.Canvas>
extern Il2CppType t212_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t2131_m25137_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2131_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25137_MI = 
{
	"Equals", NULL, &t2131_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2131_m25137_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t2131_m25138_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2131_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25138_MI = 
{
	"GetHashCode", NULL, &t2131_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2131_m25138_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2131_MIs[] =
{
	&m25137_MI,
	&m25138_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2131_0_0_0;
extern Il2CppType t2131_1_0_0;
struct t2131;
extern TypeInfo t2131_TI;
extern Il2CppGenericClass t2131_GC;
TypeInfo t2131_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t2131_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2131_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2131_TI, &t2131_0_0_0, &t2131_1_0_0, NULL, &t2131_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5334_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.Canvas>
extern Il2CppType t212_0_0_0;
static ParameterInfo t5334_m25139_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t5334_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25139_MI = 
{
	"Equals", NULL, &t5334_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5334_m25139_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5334_MIs[] =
{
	&m25139_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5334_0_0_0;
extern Il2CppType t5334_1_0_0;
struct t5334;
extern TypeInfo t5334_TI;
extern Il2CppGenericClass t5334_GC;
TypeInfo t5334_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5334_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5334_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5334_TI, &t5334_0_0_0, &t5334_1_0_0, NULL, &t5334_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2111_TI;

extern TypeInfo t212_TI;
extern TypeInfo t7_TI;
extern TypeInfo t60_TI;
extern TypeInfo t55_TI;
extern MethodInfo m11827_MI;
extern MethodInfo m122_MI;
extern MethodInfo m121_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Canvas>
extern TypeInfo t2111_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11832_MI = 
{
	".ctor", (methodPointerType)&m8413_gshared, &t2111_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t2111_m11833_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2111_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11833_MI = 
{
	"GetHashCode", (methodPointerType)&m8414_gshared, &t2111_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2111_m11833_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t2111_m11834_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2111_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11834_MI = 
{
	"Equals", (methodPointerType)&m8415_gshared, &t2111_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2111_m11834_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2111_MIs[] =
{
	&m11832_MI,
	&m11833_MI,
	&m11834_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m11834_MI;
extern MethodInfo m11833_MI;
extern MethodInfo m11830_MI;
extern MethodInfo m11829_MI;
extern MethodInfo m11833_MI;
extern MethodInfo m11834_MI;
static MethodInfo* t2111_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m11834_MI,
	&m11833_MI,
	&m11830_MI,
	&m11829_MI,
	&m11833_MI,
	&m11834_MI,
};
extern TypeInfo t2131_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t2111_IOs[] = 
{
	{ &t2131_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t5334_0_0_0;
extern Il2CppType t212_0_0_0;
extern TypeInfo t2110_TI;
extern TypeInfo t2110_TI;
extern TypeInfo t2111_TI;
extern MethodInfo m11832_MI;
extern TypeInfo t212_TI;
extern MethodInfo m25136_MI;
extern MethodInfo m18800_MI;
extern MethodInfo m11827_MI;
extern TypeInfo t212_TI;
static void* t2111_RGCTXData[11] = 
{
	(void*)&t5334_0_0_0,
	(void*)&t212_0_0_0,
	&t2110_TI,
	&t2110_TI,
	&t2111_TI,
	&m11832_MI,
	&t212_TI,
	&m25136_MI,
	&m18800_MI,
	&m11827_MI,
	&t212_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2111_0_0_0;
extern Il2CppType t2111_1_0_0;
extern TypeInfo t2110_TI;
struct t2111;
extern TypeInfo t2111_TI;
extern Il2CppGenericClass t2111_GC;
extern TypeInfo t862_TI;
TypeInfo t2111_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2111_MIs, NULL, NULL, NULL, &t2110_TI, NULL, &t862_TI, &t2111_TI, NULL, t2111_VT, &EmptyCustomAttributesCache, &t2111_TI, &t2111_0_0_0, &t2111_1_0_0, t2111_IOs, &t2111_GC, NULL, NULL, NULL, t2111_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2111), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2104_TI;

#include "t114.h"
#include "t113.h"


// Metadata Definition System.Predicate`1<UnityEngine.Canvas>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2104_m11835_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2104_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m11835_MI = 
{
	".ctor", (methodPointerType)&m8416_gshared, &t2104_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2104_m11835_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t2104_m11836_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2104_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11836_MI = 
{
	"Invoke", (methodPointerType)&m8417_gshared, &t2104_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2104_m11836_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2104_m11837_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2104_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11837_MI = 
{
	"BeginInvoke", (methodPointerType)&m8418_gshared, &t2104_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7, t2104_m11837_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2104_m11838_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2104_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11838_MI = 
{
	"EndInvoke", (methodPointerType)&m8419_gshared, &t2104_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2104_m11838_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2104_MIs[] =
{
	&m11835_MI,
	&m11836_MI,
	&m11837_MI,
	&m11838_MI,
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
extern MethodInfo m11836_MI;
extern MethodInfo m11837_MI;
extern MethodInfo m11838_MI;
static MethodInfo* t2104_VT[] =
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
	&m11836_MI,
	&m11837_MI,
	&m11838_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2104_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2104_0_0_0;
extern Il2CppType t2104_1_0_0;
extern TypeInfo t245_TI;
struct t2104;
extern TypeInfo t2104_TI;
extern Il2CppGenericClass t2104_GC;
TypeInfo t2104_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2104_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t2104_TI, NULL, t2104_VT, &EmptyCustomAttributesCache, &t2104_TI, &t2104_0_0_0, &t2104_1_0_0, t2104_IOs, &t2104_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2104), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2112_TI;

#include "t851.h"
#include "t2113.h"
extern TypeInfo t2112_TI;
extern TypeInfo t3491_TI;
extern TypeInfo t70_TI;
extern TypeInfo t212_TI;
extern TypeInfo t55_TI;
extern TypeInfo t851_TI;
extern TypeInfo t553_TI;
extern TypeInfo t2113_TI;
extern TypeInfo t60_TI;
extern TypeInfo t348_TI;
#include "t2113MD.h"
extern Il2CppType t3491_0_0_0;
extern Il2CppType t212_0_0_0;
extern Il2CppType t851_0_0_0;
extern MethodInfo m116_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3097_MI;
extern MethodInfo m3095_MI;
extern MethodInfo m6560_MI;
extern MethodInfo m11843_MI;
extern MethodInfo m25140_MI;
extern MethodInfo m6582_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.Canvas>
extern Il2CppType t2112_0_0_49;
FieldInfo t2112_f0_FieldInfo = 
{
	"_default", &t2112_0_0_49, &t2112_TI, offsetof(t2112_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2112_FIs[] =
{
	&t2112_f0_FieldInfo,
	NULL
};
extern MethodInfo m11842_MI;
static PropertyInfo t2112____Default_PropertyInfo = 
{
	&t2112_TI, "Default", &m11842_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2112_PIs[] =
{
	&t2112____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2112_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11839_MI = 
{
	".ctor", (methodPointerType)&m8420_gshared, &t2112_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2112_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11840_MI = 
{
	".cctor", (methodPointerType)&m8421_gshared, &t2112_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2112_m11841_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2112_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11841_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8422_gshared, &t2112_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t2112_m11841_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t2112_m25140_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2112_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25140_MI = 
{
	"Compare", NULL, &t2112_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t2112_m25140_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2112_TI;
extern Il2CppType t2112_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11842_MI = 
{
	"get_Default", (methodPointerType)&m8423_gshared, &t2112_TI, &t2112_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2112_MIs[] =
{
	&m11839_MI,
	&m11840_MI,
	&m11841_MI,
	&m25140_MI,
	&m11842_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m25140_MI;
extern MethodInfo m11841_MI;
static MethodInfo* t2112_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m25140_MI,
	&m11841_MI,
	NULL,
};
extern TypeInfo t3490_TI;
extern TypeInfo t743_TI;
static TypeInfo* t2112_ITIs[] = 
{
	&t3490_TI,
	&t743_TI,
};
extern TypeInfo t3490_TI;
extern TypeInfo t743_TI;
static Il2CppInterfaceOffsetPair t2112_IOs[] = 
{
	{ &t3490_TI, 4},
	{ &t743_TI, 5},
};
extern Il2CppType t3491_0_0_0;
extern Il2CppType t212_0_0_0;
extern TypeInfo t2112_TI;
extern TypeInfo t2112_TI;
extern TypeInfo t2113_TI;
extern MethodInfo m11843_MI;
extern TypeInfo t212_TI;
extern MethodInfo m25140_MI;
static void* t2112_RGCTXData[8] = 
{
	(void*)&t3491_0_0_0,
	(void*)&t212_0_0_0,
	&t2112_TI,
	&t2112_TI,
	&t2113_TI,
	&m11843_MI,
	&t212_TI,
	&m25140_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2112_0_0_0;
extern Il2CppType t2112_1_0_0;
extern TypeInfo t7_TI;
struct t2112;
extern TypeInfo t2112_TI;
extern Il2CppGenericClass t2112_GC;
TypeInfo t2112_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2112_MIs, t2112_PIs, t2112_FIs, NULL, &t7_TI, NULL, NULL, &t2112_TI, t2112_ITIs, t2112_VT, &EmptyCustomAttributesCache, &t2112_TI, &t2112_0_0_0, &t2112_1_0_0, t2112_IOs, &t2112_GC, NULL, NULL, NULL, t2112_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2112), 0, -1, sizeof(t2112_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3490_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.Canvas>
extern Il2CppType t212_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t3490_m18808_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t3490_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m18808_MI = 
{
	"Compare", NULL, &t3490_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t3490_m18808_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3490_MIs[] =
{
	&m18808_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3490_0_0_0;
extern Il2CppType t3490_1_0_0;
struct t3490;
extern TypeInfo t3490_TI;
extern Il2CppGenericClass t3490_GC;
TypeInfo t3490_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3490_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3490_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3490_TI, &t3490_0_0_0, &t3490_1_0_0, NULL, &t3490_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3491_TI;



// Metadata Definition System.IComparable`1<UnityEngine.Canvas>
extern Il2CppType t212_0_0_0;
static ParameterInfo t3491_m18809_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t3491_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m18809_MI = 
{
	"CompareTo", NULL, &t3491_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t3491_m18809_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3491_MIs[] =
{
	&m18809_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3491_0_0_0;
extern Il2CppType t3491_1_0_0;
struct t3491;
extern TypeInfo t3491_TI;
extern Il2CppGenericClass t3491_GC;
TypeInfo t3491_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3491_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3491_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3491_TI, &t3491_0_0_0, &t3491_1_0_0, NULL, &t3491_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2113_TI;

extern TypeInfo t212_TI;
extern TypeInfo t3491_TI;
extern TypeInfo t60_TI;
extern TypeInfo t78_TI;
extern TypeInfo t7_TI;
extern TypeInfo t348_TI;
extern MethodInfo m11839_MI;
extern MethodInfo m18809_MI;
extern MethodInfo m7420_MI;
extern MethodInfo m2046_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Canvas>
extern TypeInfo t2113_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11843_MI = 
{
	".ctor", (methodPointerType)&m8424_gshared, &t2113_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t2113_m11844_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2113_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11844_MI = 
{
	"Compare", (methodPointerType)&m8425_gshared, &t2113_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t2113_m11844_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2113_MIs[] =
{
	&m11843_MI,
	&m11844_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m11844_MI;
extern MethodInfo m11841_MI;
extern MethodInfo m11844_MI;
static MethodInfo* t2113_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m11844_MI,
	&m11841_MI,
	&m11844_MI,
};
extern TypeInfo t3490_TI;
extern TypeInfo t743_TI;
static Il2CppInterfaceOffsetPair t2113_IOs[] = 
{
	{ &t3490_TI, 4},
	{ &t743_TI, 5},
};
extern Il2CppType t3491_0_0_0;
extern Il2CppType t212_0_0_0;
extern TypeInfo t2112_TI;
extern TypeInfo t2112_TI;
extern TypeInfo t2113_TI;
extern MethodInfo m11843_MI;
extern TypeInfo t212_TI;
extern MethodInfo m25140_MI;
extern MethodInfo m11839_MI;
extern TypeInfo t212_TI;
extern TypeInfo t3491_TI;
extern MethodInfo m18809_MI;
static void* t2113_RGCTXData[12] = 
{
	(void*)&t3491_0_0_0,
	(void*)&t212_0_0_0,
	&t2112_TI,
	&t2112_TI,
	&t2113_TI,
	&m11843_MI,
	&t212_TI,
	&m25140_MI,
	&m11839_MI,
	&t212_TI,
	&t3491_TI,
	&m18809_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2113_0_0_0;
extern Il2CppType t2113_1_0_0;
extern TypeInfo t2112_TI;
struct t2113;
extern TypeInfo t2113_TI;
extern Il2CppGenericClass t2113_GC;
extern TypeInfo t850_TI;
TypeInfo t2113_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2113_MIs, NULL, NULL, NULL, &t2112_TI, NULL, &t850_TI, &t2113_TI, NULL, t2113_VT, &EmptyCustomAttributesCache, &t2113_TI, &t2113_0_0_0, &t2113_1_0_0, t2113_IOs, &t2113_GC, NULL, NULL, NULL, t2113_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2113), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2105_TI;
#include "t2105MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.Canvas>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2105_m11845_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2105_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m11845_MI = 
{
	".ctor", (methodPointerType)&m8471_gshared, &t2105_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2105_m11845_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t212_0_0_0;
static ParameterInfo t2105_m11846_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2105_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11846_MI = 
{
	"Invoke", (methodPointerType)&m8472_gshared, &t2105_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t2105_m11846_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t212_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2105_m11847_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2105_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11847_MI = 
{
	"BeginInvoke", (methodPointerType)&m8473_gshared, &t2105_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t2105_m11847_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2105_m11848_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2105_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11848_MI = 
{
	"EndInvoke", (methodPointerType)&m8474_gshared, &t2105_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2105_m11848_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2105_MIs[] =
{
	&m11845_MI,
	&m11846_MI,
	&m11847_MI,
	&m11848_MI,
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
extern MethodInfo m11846_MI;
extern MethodInfo m11847_MI;
extern MethodInfo m11848_MI;
static MethodInfo* t2105_VT[] =
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
	&m11846_MI,
	&m11847_MI,
	&m11848_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2105_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2105_0_0_0;
extern Il2CppType t2105_1_0_0;
extern TypeInfo t245_TI;
struct t2105;
extern TypeInfo t2105_TI;
extern Il2CppGenericClass t2105_GC;
TypeInfo t2105_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t2105_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t2105_TI, NULL, t2105_VT, &EmptyCustomAttributesCache, &t2105_TI, &t2105_0_0_0, &t2105_1_0_0, t2105_IOs, &t2105_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2105), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3492_TI;

#include "t218.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.GraphicRaycaster>
extern MethodInfo m25141_MI;
static PropertyInfo t3492____Current_PropertyInfo = 
{
	&t3492_TI, "Current", &m25141_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3492_PIs[] =
{
	&t3492____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3492_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25141_MI = 
{
	"get_Current", NULL, &t3492_TI, &t218_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3492_MIs[] =
{
	&m25141_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3492_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3492_0_0_0;
extern Il2CppType t3492_1_0_0;
struct t3492;
extern TypeInfo t3492_TI;
extern Il2CppGenericClass t3492_GC;
TypeInfo t3492_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3492_MIs, t3492_PIs, NULL, NULL, NULL, NULL, NULL, &t3492_TI, t3492_ITIs, NULL, &EmptyCustomAttributesCache, &t3492_TI, &t3492_0_0_0, &t3492_1_0_0, NULL, &t3492_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2114.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2114_TI;
#include "t2114MD.h"

extern TypeInfo t2114_TI;
extern TypeInfo t218_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m11853_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18814_MI;
struct t52;
#define m18814(__this, p0, method) (t218 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m18814_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.GraphicRaycaster>
extern Il2CppType t52_0_0_1;
FieldInfo t2114_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2114_TI, offsetof(t2114, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2114_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2114_TI, offsetof(t2114, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2114_FIs[] =
{
	&t2114_f0_FieldInfo,
	&t2114_f1_FieldInfo,
	NULL
};
extern MethodInfo m11850_MI;
static PropertyInfo t2114____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2114_TI, "System.Collections.IEnumerator.Current", &m11850_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11853_MI;
static PropertyInfo t2114____Current_PropertyInfo = 
{
	&t2114_TI, "Current", &m11853_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2114_PIs[] =
{
	&t2114____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2114____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2114_m11849_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2114_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11849_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2114_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2114_m11849_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2114_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11850_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2114_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2114_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11851_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2114_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2114_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11852_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2114_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2114_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11853_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2114_TI, &t218_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2114_MIs[] =
{
	&m11849_MI,
	&m11850_MI,
	&m11851_MI,
	&m11852_MI,
	&m11853_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m11850_MI;
extern MethodInfo m11852_MI;
extern MethodInfo m11851_MI;
extern MethodInfo m11853_MI;
static MethodInfo* t2114_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m11850_MI,
	&m11852_MI,
	&m11851_MI,
	&m11853_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3492_TI;
static TypeInfo* t2114_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3492_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3492_TI;
static Il2CppInterfaceOffsetPair t2114_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3492_TI, 7},
};
extern MethodInfo m11853_MI;
extern TypeInfo t218_TI;
extern MethodInfo m18814_MI;
static void* t2114_RGCTXData[3] = 
{
	&m11853_MI,
	&t218_TI,
	&m18814_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2114_0_0_0;
extern Il2CppType t2114_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2114_TI;
extern Il2CppGenericClass t2114_GC;
extern TypeInfo t52_TI;
TypeInfo t2114_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2114_MIs, t2114_PIs, t2114_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2114_TI, t2114_ITIs, t2114_VT, &EmptyCustomAttributesCache, &t2114_TI, &t2114_0_0_0, &t2114_1_0_0, t2114_IOs, &t2114_GC, NULL, NULL, NULL, t2114_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2114)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4174_TI;

#include "UnityEngine.UI_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.GraphicRaycaster>
extern MethodInfo m25142_MI;
static PropertyInfo t4174____Count_PropertyInfo = 
{
	&t4174_TI, "Count", &m25142_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25143_MI;
static PropertyInfo t4174____IsReadOnly_PropertyInfo = 
{
	&t4174_TI, "IsReadOnly", &m25143_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4174_PIs[] =
{
	&t4174____Count_PropertyInfo,
	&t4174____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4174_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25142_MI = 
{
	"get_Count", NULL, &t4174_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4174_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m25143_MI = 
{
	"get_IsReadOnly", NULL, &t4174_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t4174_m25144_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t4174_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25144_MI = 
{
	"Add", NULL, &t4174_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4174_m25144_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4174_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m25145_MI = 
{
	"Clear", NULL, &t4174_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t4174_m25146_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t4174_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25146_MI = 
{
	"Contains", NULL, &t4174_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4174_m25146_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3309_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4174_m25147_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3309_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4174_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25147_MI = 
{
	"CopyTo", NULL, &t4174_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4174_m25147_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t4174_m25148_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t4174_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25148_MI = 
{
	"Remove", NULL, &t4174_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4174_m25148_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4174_MIs[] =
{
	&m25142_MI,
	&m25143_MI,
	&m25144_MI,
	&m25145_MI,
	&m25146_MI,
	&m25147_MI,
	&m25148_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4176_TI;
static TypeInfo* t4174_ITIs[] = 
{
	&t618_TI,
	&t4176_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4174_0_0_0;
extern Il2CppType t4174_1_0_0;
struct t4174;
extern TypeInfo t4174_TI;
extern Il2CppGenericClass t4174_GC;
TypeInfo t4174_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4174_MIs, t4174_PIs, NULL, NULL, NULL, NULL, NULL, &t4174_TI, t4174_ITIs, NULL, &EmptyCustomAttributesCache, &t4174_TI, &t4174_0_0_0, &t4174_1_0_0, NULL, &t4174_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4176_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.GraphicRaycaster>
extern TypeInfo t4176_TI;
extern Il2CppType t3492_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25149_MI = 
{
	"GetEnumerator", NULL, &t4176_TI, &t3492_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4176_MIs[] =
{
	&m25149_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4176_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4176_0_0_0;
extern Il2CppType t4176_1_0_0;
struct t4176;
extern TypeInfo t4176_TI;
extern Il2CppGenericClass t4176_GC;
TypeInfo t4176_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4176_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4176_TI, t4176_ITIs, NULL, &EmptyCustomAttributesCache, &t4176_TI, &t4176_0_0_0, &t4176_1_0_0, NULL, &t4176_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4175_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.GraphicRaycaster>
extern MethodInfo m25150_MI;
extern MethodInfo m25151_MI;
static PropertyInfo t4175____Item_PropertyInfo = 
{
	&t4175_TI, "Item", &m25150_MI, &m25151_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4175_PIs[] =
{
	&t4175____Item_PropertyInfo,
	NULL
};
extern Il2CppType t218_0_0_0;
static ParameterInfo t4175_m25152_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t4175_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25152_MI = 
{
	"IndexOf", NULL, &t4175_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4175_m25152_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t218_0_0_0;
static ParameterInfo t4175_m25153_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t4175_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25153_MI = 
{
	"Insert", NULL, &t4175_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4175_m25153_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4175_m25154_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4175_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25154_MI = 
{
	"RemoveAt", NULL, &t4175_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4175_m25154_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4175_m25150_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4175_TI;
extern Il2CppType t218_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25150_MI = 
{
	"get_Item", NULL, &t4175_TI, &t218_0_0_0, RuntimeInvoker_t7_t60, t4175_m25150_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t218_0_0_0;
static ParameterInfo t4175_m25151_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t4175_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25151_MI = 
{
	"set_Item", NULL, &t4175_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4175_m25151_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4175_MIs[] =
{
	&m25152_MI,
	&m25153_MI,
	&m25154_MI,
	&m25150_MI,
	&m25151_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4174_TI;
extern TypeInfo t4176_TI;
static TypeInfo* t4175_ITIs[] = 
{
	&t618_TI,
	&t4174_TI,
	&t4176_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4175_0_0_0;
extern Il2CppType t4175_1_0_0;
struct t4175;
extern TypeInfo t4175_TI;
extern Il2CppGenericClass t4175_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4175_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4175_MIs, t4175_PIs, NULL, NULL, NULL, NULL, NULL, &t4175_TI, t4175_ITIs, NULL, &t1426__CustomAttributeCache, &t4175_TI, &t4175_0_0_0, &t4175_1_0_0, NULL, &t4175_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2115.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2115_TI;
#include "t2115MD.h"

#include "t72.h"
#include "t573.h"
#include "t2116.h"
extern TypeInfo t350_TI;
extern TypeInfo t7_TI;
extern TypeInfo t2115_TI;
extern TypeInfo t218_TI;
extern TypeInfo t2116_TI;
extern TypeInfo t53_TI;
#include "t2116MD.h"
extern MethodInfo m11856_MI;
extern MethodInfo m11858_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.GraphicRaycaster>
extern Il2CppType t350_0_0_33;
FieldInfo t2115_f1_FieldInfo = 
{
	"m_Arg1", &t350_0_0_33, &t2115_TI, offsetof(t2115, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2115_FIs[] =
{
	&t2115_f1_FieldInfo,
	NULL
};
extern Il2CppType t72_0_0_0;
extern Il2CppType t573_0_0_0;
extern Il2CppType t218_0_0_0;
static ParameterInfo t2115_m11854_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t72_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2115_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11854_MI = 
{
	".ctor", (methodPointerType)&m8007_gshared, &t2115_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7_t7, t2115_m11854_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2115_m11855_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2115_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11855_MI = 
{
	"Invoke", (methodPointerType)&m8009_gshared, &t2115_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2115_m11855_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2115_MIs[] =
{
	&m11854_MI,
	&m11855_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m11855_MI;
extern MethodInfo m11859_MI;
static MethodInfo* t2115_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m11855_MI,
	&m11859_MI,
};
extern Il2CppType t2117_0_0_0;
extern TypeInfo t2117_TI;
extern MethodInfo m18824_MI;
extern TypeInfo t218_TI;
extern MethodInfo m11861_MI;
extern MethodInfo m11856_MI;
extern TypeInfo t218_TI;
extern MethodInfo m11858_MI;
static void* t2115_RGCTXData[8] = 
{
	(void*)&t2117_0_0_0,
	&t2117_TI,
	&m18824_MI,
	&t218_TI,
	&m11861_MI,
	&m11856_MI,
	&t218_TI,
	&m11858_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2115_0_0_0;
extern Il2CppType t2115_1_0_0;
extern TypeInfo t2116_TI;
struct t2115;
extern TypeInfo t2115_TI;
extern Il2CppGenericClass t2115_GC;
TypeInfo t2115_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2115_MIs, NULL, t2115_FIs, NULL, &t2116_TI, NULL, NULL, &t2115_TI, NULL, t2115_VT, &EmptyCustomAttributesCache, &t2115_TI, &t2115_0_0_0, &t2115_1_0_0, NULL, &t2115_GC, NULL, NULL, NULL, t2115_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2115), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2116_TI;

#include "t2117.h"
#include "t374.h"
extern TypeInfo t2116_TI;
extern TypeInfo t2117_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern TypeInfo t218_TI;
extern TypeInfo t53_TI;
#include "t572MD.h"
#include "t374MD.h"
#include "t2117MD.h"
extern Il2CppType t2117_0_0_0;
extern MethodInfo m2910_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3073_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m18824_MI;
extern MethodInfo m2911_MI;
extern MethodInfo m11861_MI;
extern MethodInfo m3069_MI;
extern MethodInfo m3067_MI;
struct t572;
#include "t572.h"
struct t572;
 void m17212_gshared (t7 * __this, t7 * p0, MethodInfo* method);
#define m17212(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
#define m18824(__this, p0, method) (void)m17212_gshared((t7 *)__this, (t7 *)p0, method)
extern MethodInfo m18824_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.GraphicRaycaster>
extern Il2CppType t2117_0_0_1;
FieldInfo t2116_f0_FieldInfo = 
{
	"Delegate", &t2117_0_0_1, &t2116_TI, offsetof(t2116, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2116_FIs[] =
{
	&t2116_f0_FieldInfo,
	NULL
};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2116_m11856_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2116_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11856_MI = 
{
	".ctor", (methodPointerType)&m8010_gshared, &t2116_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t2116_m11856_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2117_0_0_0;
static ParameterInfo t2116_m11857_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2117_0_0_0},
};
extern TypeInfo t2116_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11857_MI = 
{
	".ctor", (methodPointerType)&m8011_gshared, &t2116_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2116_m11857_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t350_0_0_0;
static ParameterInfo t2116_m11858_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t350_0_0_0},
};
extern TypeInfo t2116_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11858_MI = 
{
	"Invoke", (methodPointerType)&m8012_gshared, &t2116_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2116_m11858_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t573_0_0_0;
static ParameterInfo t2116_m11859_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t2116_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11859_MI = 
{
	"Find", (methodPointerType)&m8013_gshared, &t2116_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2116_m11859_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2116_MIs[] =
{
	&m11856_MI,
	&m11857_MI,
	&m11858_MI,
	&m11859_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m11858_MI;
extern MethodInfo m11859_MI;
static MethodInfo* t2116_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m11858_MI,
	&m11859_MI,
};
extern Il2CppType t2117_0_0_0;
extern TypeInfo t2117_TI;
extern MethodInfo m18824_MI;
extern TypeInfo t218_TI;
extern MethodInfo m11861_MI;
static void* t2116_RGCTXData[5] = 
{
	(void*)&t2117_0_0_0,
	&t2117_TI,
	&m18824_MI,
	&t218_TI,
	&m11861_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2116_0_0_0;
extern Il2CppType t2116_1_0_0;
extern TypeInfo t572_TI;
struct t2116;
extern TypeInfo t2116_TI;
extern Il2CppGenericClass t2116_GC;
TypeInfo t2116_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2116_MIs, NULL, t2116_FIs, NULL, &t572_TI, NULL, NULL, &t2116_TI, NULL, t2116_VT, &EmptyCustomAttributesCache, &t2116_TI, &t2116_0_0_0, &t2116_1_0_0, NULL, &t2116_GC, NULL, NULL, NULL, t2116_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2116), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2117_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.GraphicRaycaster>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2117_m11860_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2117_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m11860_MI = 
{
	".ctor", (methodPointerType)&m8014_gshared, &t2117_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2117_m11860_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
static ParameterInfo t2117_m11861_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
};
extern TypeInfo t2117_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11861_MI = 
{
	"Invoke", (methodPointerType)&m8015_gshared, &t2117_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2117_m11861_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t218_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2117_m11862_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t218_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2117_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11862_MI = 
{
	"BeginInvoke", (methodPointerType)&m8016_gshared, &t2117_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7, t2117_m11862_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2117_m11863_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2117_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11863_MI = 
{
	"EndInvoke", (methodPointerType)&m8017_gshared, &t2117_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2117_m11863_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2117_MIs[] =
{
	&m11860_MI,
	&m11861_MI,
	&m11862_MI,
	&m11863_MI,
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
extern MethodInfo m11861_MI;
extern MethodInfo m11862_MI;
extern MethodInfo m11863_MI;
static MethodInfo* t2117_VT[] =
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
	&m11861_MI,
	&m11862_MI,
	&m11863_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2117_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2117_0_0_0;
extern Il2CppType t2117_1_0_0;
extern TypeInfo t245_TI;
struct t2117;
extern TypeInfo t2117_TI;
extern Il2CppGenericClass t2117_GC;
TypeInfo t2117_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2117_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t2117_TI, NULL, t2117_VT, &EmptyCustomAttributesCache, &t2117_TI, &t2117_0_0_0, &t2117_1_0_0, t2117_IOs, &t2117_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2117), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t219.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t219_TI;
#include "t219MD.h"

#include "t207.h"
#include "t2123.h"
#include "t2121.h"
#include "t2122.h"
#include "t2127.h"
#include "t220.h"
extern TypeInfo t219_TI;
extern TypeInfo t207_TI;
extern TypeInfo t60_TI;
extern TypeInfo t53_TI;
extern TypeInfo t348_TI;
extern TypeInfo t601_TI;
extern TypeInfo t1294_TI;
extern TypeInfo t88_TI;
extern TypeInfo t2118_TI;
extern TypeInfo t2123_TI;
extern TypeInfo t55_TI;
extern TypeInfo t384_TI;
extern TypeInfo t2120_TI;
extern TypeInfo t2119_TI;
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2121_TI;
extern TypeInfo t87_TI;
extern TypeInfo t2122_TI;
extern TypeInfo t2127_TI;
#include "t2121MD.h"
#include "t2122MD.h"
#include "t2123MD.h"
#include "t2127MD.h"
extern MethodInfo m1735_MI;
extern MethodInfo m11906_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m216_MI;
extern MethodInfo m18826_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m11894_MI;
extern MethodInfo m116_MI;
extern MethodInfo m11891_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m1746_MI;
extern MethodInfo m11886_MI;
extern MethodInfo m11892_MI;
extern MethodInfo m11895_MI;
extern MethodInfo m11897_MI;
extern MethodInfo m11881_MI;
extern MethodInfo m11904_MI;
extern MethodInfo m7028_MI;
extern MethodInfo m11905_MI;
extern MethodInfo m1747_MI;
extern MethodInfo m25038_MI;
extern MethodInfo m25040_MI;
extern MethodInfo m25041_MI;
extern MethodInfo m7424_MI;
extern MethodInfo m202_MI;
extern MethodInfo m11896_MI;
extern MethodInfo m11882_MI;
extern MethodInfo m11883_MI;
extern MethodInfo m11913_MI;
extern MethodInfo m3874_MI;
extern MethodInfo m18828_MI;
extern MethodInfo m11889_MI;
extern MethodInfo m11890_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m11988_MI;
extern MethodInfo m11907_MI;
extern MethodInfo m11893_MI;
extern MethodInfo m11899_MI;
extern MethodInfo m3890_MI;
extern MethodInfo m11994_MI;
extern MethodInfo m18830_MI;
extern MethodInfo m18838_MI;
extern MethodInfo m3877_MI;
struct t52;
#define m18826(__this, p0, p1, method) (void)m17412_gshared((t7 *)__this, (t350**)p0, (int32_t)p1, method)
extern MethodInfo m18826_MI;
struct t52;
#include "t2125.h"
#define m18828(__this, p0, p1, p2, p3, method) (int32_t)m7824_gshared((t7 *)__this, (t350*)p0, (t7 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m18828_MI;
struct t52;
#define m18830(__this, p0, p1, p2, p3, method) (void)m17481_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (int32_t)p2, (t7*)p3, method)
extern MethodInfo m18830_MI;
struct t52;
#define m18838(__this, p0, p1, p2, method) (void)m17588_gshared((t7 *)__this, (t350*)p0, (int32_t)p1, (t1679 *)p2, method)
extern MethodInfo m18838_MI;


extern MethodInfo m11891_MI;
 t2123  m11891 (t219 * __this, MethodInfo* method){
	{
		t2123  L_0 = {0};
		m11907(&L_0, __this, &m11907_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
extern Il2CppType t60_0_0_32849;
FieldInfo t219_f0_FieldInfo = 
{
	"DefaultCapacity", &t60_0_0_32849, &t219_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2118_0_0_1;
FieldInfo t219_f1_FieldInfo = 
{
	"_items", &t2118_0_0_1, &t219_TI, offsetof(t219, f1), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t219_f2_FieldInfo = 
{
	"_size", &t60_0_0_1, &t219_TI, offsetof(t219, f2), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t219_f3_FieldInfo = 
{
	"_version", &t60_0_0_1, &t219_TI, offsetof(t219, f3), &EmptyCustomAttributesCache};
extern Il2CppType t2118_0_0_49;
FieldInfo t219_f4_FieldInfo = 
{
	"EmptyArray", &t2118_0_0_49, &t219_TI, offsetof(t219_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t219_FIs[] =
{
	&t219_f0_FieldInfo,
	&t219_f1_FieldInfo,
	&t219_f2_FieldInfo,
	&t219_f3_FieldInfo,
	&t219_f4_FieldInfo,
	NULL
};
static const int32_t t219_f0_DefaultValueData = 4;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t219_f0_DefaultValue = 
{
	&t219_f0_FieldInfo, { (char*)&t219_f0_DefaultValueData, &t60_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t219_FDVs[] = 
{
	&t219_f0_DefaultValue,
	NULL
};
extern MethodInfo m11874_MI;
static PropertyInfo t219____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t219_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m11874_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11875_MI;
static PropertyInfo t219____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t219_TI, "System.Collections.ICollection.IsSynchronized", &m11875_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11876_MI;
static PropertyInfo t219____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t219_TI, "System.Collections.ICollection.SyncRoot", &m11876_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11877_MI;
static PropertyInfo t219____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t219_TI, "System.Collections.IList.IsFixedSize", &m11877_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11878_MI;
static PropertyInfo t219____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t219_TI, "System.Collections.IList.IsReadOnly", &m11878_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11879_MI;
extern MethodInfo m11880_MI;
static PropertyInfo t219____System_Collections_IList_Item_PropertyInfo = 
{
	&t219_TI, "System.Collections.IList.Item", &m11879_MI, &m11880_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11904_MI;
extern MethodInfo m11905_MI;
static PropertyInfo t219____Capacity_PropertyInfo = 
{
	&t219_TI, "Capacity", &m11904_MI, &m11905_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1743_MI;
static PropertyInfo t219____Count_PropertyInfo = 
{
	&t219_TI, "Count", &m1743_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1735_MI;
extern MethodInfo m11906_MI;
static PropertyInfo t219____Item_PropertyInfo = 
{
	&t219_TI, "Item", &m1735_MI, &m11906_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t219_PIs[] =
{
	&t219____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t219____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t219____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t219____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t219____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t219____System_Collections_IList_Item_PropertyInfo,
	&t219____Capacity_PropertyInfo,
	&t219____Count_PropertyInfo,
	&t219____Item_PropertyInfo,
	NULL
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m1727_MI = 
{
	".ctor", (methodPointerType)&m8211_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t219_m11864_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11864_MI = 
{
	".ctor", (methodPointerType)&m8213_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t219_m11864_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11865_MI = 
{
	".cctor", (methodPointerType)&m8215_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t219_TI;
extern Il2CppType t2119_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11866_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m8217_gshared, &t219_TI, &t2119_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t219_m11867_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11867_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8219_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t219_m11867_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t219_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11868_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8221_gshared, &t219_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t219_m11869_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11869_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8223_gshared, &t219_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t219_m11869_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t219_m11870_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11870_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8225_gshared, &t219_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t219_m11870_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t219_m11871_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11871_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8227_gshared, &t219_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t219_m11871_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t219_m11872_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11872_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8229_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t219_m11872_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t219_m11873_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11873_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8231_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t219_m11873_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t219_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11874_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8233_gshared, &t219_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t219_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11875_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8235_gshared, &t219_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t219_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11876_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8237_gshared, &t219_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t219_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11877_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8239_gshared, &t219_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t219_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11878_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8241_gshared, &t219_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t219_m11879_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11879_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8243_gshared, &t219_TI, &t7_0_0_0, RuntimeInvoker_t7_t60, t219_m11879_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t219_m11880_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11880_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8245_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t219_m11880_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t219_m1746_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m1746_MI = 
{
	"Add", (methodPointerType)&m8247_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t219_m1746_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t219_m11881_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11881_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m8249_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t219_m11881_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t384_0_0_0;
static ParameterInfo t219_m11882_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t384_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11882_MI = 
{
	"AddCollection", (methodPointerType)&m8251_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t219_m11882_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2120_0_0_0;
static ParameterInfo t219_m11883_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t2120_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11883_MI = 
{
	"AddEnumerable", (methodPointerType)&m8253_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t219_m11883_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2120_0_0_0;
static ParameterInfo t219_m11884_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2120_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11884_MI = 
{
	"AddRange", (methodPointerType)&m8255_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t219_m11884_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t219_TI;
extern Il2CppType t2121_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11885_MI = 
{
	"AsReadOnly", (methodPointerType)&m8257_gshared, &t219_TI, &t2121_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m1734_MI = 
{
	"Clear", (methodPointerType)&m8259_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t219_m11886_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11886_MI = 
{
	"Contains", (methodPointerType)&m8261_gshared, &t219_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t219_m11886_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2118_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t219_m11887_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2118_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11887_MI = 
{
	"CopyTo", (methodPointerType)&m8263_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t219_m11887_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2122_0_0_0;
static ParameterInfo t219_m11888_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2122_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t207_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11888_MI = 
{
	"Find", (methodPointerType)&m8265_gshared, &t219_TI, &t207_0_0_0, RuntimeInvoker_t7_t7, t219_m11888_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2122_0_0_0;
static ParameterInfo t219_m11889_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2122_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11889_MI = 
{
	"CheckMatch", (methodPointerType)&m8267_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t219_m11889_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t2122_0_0_0;
static ParameterInfo t219_m11890_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t2122_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11890_MI = 
{
	"GetIndex", (methodPointerType)&m8269_gshared, &t219_TI, &t60_0_0_0, RuntimeInvoker_t60_t60_t60_t7, t219_m11890_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t219_TI;
extern Il2CppType t2123_0_0_0;
extern void* RuntimeInvoker_t2123 (MethodInfo* method, void* obj, void** args);
MethodInfo m11891_MI = 
{
	"GetEnumerator", (methodPointerType)&m11891, &t219_TI, &t2123_0_0_0, RuntimeInvoker_t2123, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t219_m11892_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11892_MI = 
{
	"IndexOf", (methodPointerType)&m8272_gshared, &t219_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t219_m11892_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t219_m11893_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11893_MI = 
{
	"Shift", (methodPointerType)&m8274_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t219_m11893_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t219_m11894_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11894_MI = 
{
	"CheckIndex", (methodPointerType)&m8276_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t219_m11894_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t219_m11895_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11895_MI = 
{
	"Insert", (methodPointerType)&m8278_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t219_m11895_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2120_0_0_0;
static ParameterInfo t219_m11896_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t2120_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11896_MI = 
{
	"CheckCollection", (methodPointerType)&m8280_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t219_m11896_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t219_m11897_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11897_MI = 
{
	"Remove", (methodPointerType)&m8282_gshared, &t219_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t219_m11897_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2122_0_0_0;
static ParameterInfo t219_m11898_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2122_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11898_MI = 
{
	"RemoveAll", (methodPointerType)&m8284_gshared, &t219_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t219_m11898_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t219_m11899_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11899_MI = 
{
	"RemoveAt", (methodPointerType)&m8286_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t219_m11899_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11900_MI = 
{
	"Reverse", (methodPointerType)&m8288_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11901_MI = 
{
	"Sort", (methodPointerType)&m8290_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t220_0_0_0;
static ParameterInfo t219_m1749_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t220_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m1749_MI = 
{
	"Sort", (methodPointerType)&m8292_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t219_m1749_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t219_TI;
extern Il2CppType t2118_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11902_MI = 
{
	"ToArray", (methodPointerType)&m8294_gshared, &t219_TI, &t2118_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11903_MI = 
{
	"TrimExcess", (methodPointerType)&m8296_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t219_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11904_MI = 
{
	"get_Capacity", (methodPointerType)&m8298_gshared, &t219_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t219_m11905_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11905_MI = 
{
	"set_Capacity", (methodPointerType)&m8300_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t219_m11905_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t219_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m1743_MI = 
{
	"get_Count", (methodPointerType)&m8301_gshared, &t219_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t219_m1735_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t207_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m1735_MI = 
{
	"get_Item", (methodPointerType)&m8302_gshared, &t219_TI, &t207_0_0_0, RuntimeInvoker_t7_t60, t219_m1735_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t219_m11906_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t219_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11906_MI = 
{
	"set_Item", (methodPointerType)&m8304_gshared, &t219_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t219_m11906_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t219_MIs[] =
{
	&m1727_MI,
	&m11864_MI,
	&m11865_MI,
	&m11866_MI,
	&m11867_MI,
	&m11868_MI,
	&m11869_MI,
	&m11870_MI,
	&m11871_MI,
	&m11872_MI,
	&m11873_MI,
	&m11874_MI,
	&m11875_MI,
	&m11876_MI,
	&m11877_MI,
	&m11878_MI,
	&m11879_MI,
	&m11880_MI,
	&m1746_MI,
	&m11881_MI,
	&m11882_MI,
	&m11883_MI,
	&m11884_MI,
	&m11885_MI,
	&m1734_MI,
	&m11886_MI,
	&m11887_MI,
	&m11888_MI,
	&m11889_MI,
	&m11890_MI,
	&m11891_MI,
	&m11892_MI,
	&m11893_MI,
	&m11894_MI,
	&m11895_MI,
	&m11896_MI,
	&m11897_MI,
	&m11898_MI,
	&m11899_MI,
	&m11900_MI,
	&m11901_MI,
	&m1749_MI,
	&m11902_MI,
	&m11903_MI,
	&m11904_MI,
	&m11905_MI,
	&m1743_MI,
	&m1735_MI,
	&m11906_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m11868_MI;
extern MethodInfo m1743_MI;
extern MethodInfo m11875_MI;
extern MethodInfo m11876_MI;
extern MethodInfo m11867_MI;
extern MethodInfo m11877_MI;
extern MethodInfo m11878_MI;
extern MethodInfo m11879_MI;
extern MethodInfo m11880_MI;
extern MethodInfo m11869_MI;
extern MethodInfo m1734_MI;
extern MethodInfo m11870_MI;
extern MethodInfo m11871_MI;
extern MethodInfo m11872_MI;
extern MethodInfo m11873_MI;
extern MethodInfo m11899_MI;
extern MethodInfo m1743_MI;
extern MethodInfo m11874_MI;
extern MethodInfo m1746_MI;
extern MethodInfo m1734_MI;
extern MethodInfo m11886_MI;
extern MethodInfo m11887_MI;
extern MethodInfo m11897_MI;
extern MethodInfo m11866_MI;
extern MethodInfo m11892_MI;
extern MethodInfo m11895_MI;
extern MethodInfo m11899_MI;
extern MethodInfo m1735_MI;
extern MethodInfo m11906_MI;
static MethodInfo* t219_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m11868_MI,
	&m1743_MI,
	&m11875_MI,
	&m11876_MI,
	&m11867_MI,
	&m11877_MI,
	&m11878_MI,
	&m11879_MI,
	&m11880_MI,
	&m11869_MI,
	&m1734_MI,
	&m11870_MI,
	&m11871_MI,
	&m11872_MI,
	&m11873_MI,
	&m11899_MI,
	&m1743_MI,
	&m11874_MI,
	&m1746_MI,
	&m1734_MI,
	&m11886_MI,
	&m11887_MI,
	&m11897_MI,
	&m11866_MI,
	&m11892_MI,
	&m11895_MI,
	&m11899_MI,
	&m1735_MI,
	&m11906_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t384_TI;
extern TypeInfo t2120_TI;
extern TypeInfo t223_TI;
static TypeInfo* t219_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t1041_TI,
	&t384_TI,
	&t2120_TI,
	&t223_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t384_TI;
extern TypeInfo t2120_TI;
extern TypeInfo t223_TI;
static Il2CppInterfaceOffsetPair t219_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t1041_TI, 9},
	{ &t384_TI, 20},
	{ &t2120_TI, 27},
	{ &t223_TI, 28},
};
extern TypeInfo t219_TI;
extern TypeInfo t2118_TI;
extern MethodInfo m11891_MI;
extern TypeInfo t2123_TI;
extern TypeInfo t207_TI;
extern MethodInfo m1746_MI;
extern MethodInfo m11886_MI;
extern MethodInfo m11892_MI;
extern MethodInfo m11894_MI;
extern MethodInfo m11895_MI;
extern MethodInfo m11897_MI;
extern MethodInfo m1735_MI;
extern MethodInfo m11906_MI;
extern MethodInfo m11881_MI;
extern MethodInfo m11904_MI;
extern MethodInfo m11905_MI;
extern MethodInfo m1747_MI;
extern MethodInfo m25038_MI;
extern MethodInfo m25040_MI;
extern MethodInfo m25041_MI;
extern MethodInfo m11896_MI;
extern TypeInfo t384_TI;
extern MethodInfo m11882_MI;
extern MethodInfo m11883_MI;
extern TypeInfo t2121_TI;
extern MethodInfo m11913_MI;
extern MethodInfo m18828_MI;
extern MethodInfo m11889_MI;
extern MethodInfo m11890_MI;
extern MethodInfo m11988_MI;
extern MethodInfo m11907_MI;
extern MethodInfo m11893_MI;
extern MethodInfo m11899_MI;
extern MethodInfo m11994_MI;
extern MethodInfo m18830_MI;
extern MethodInfo m18838_MI;
extern MethodInfo m18826_MI;
static void* t219_RGCTXData[37] = 
{
	&t219_TI,
	&t2118_TI,
	&m11891_MI,
	&t2123_TI,
	&t207_TI,
	&m1746_MI,
	&m11886_MI,
	&m11892_MI,
	&m11894_MI,
	&m11895_MI,
	&m11897_MI,
	&m1735_MI,
	&m11906_MI,
	&m11881_MI,
	&m11904_MI,
	&m11905_MI,
	&m1747_MI,
	&m25038_MI,
	&m25040_MI,
	&m25041_MI,
	&m11896_MI,
	&t384_TI,
	&m11882_MI,
	&m11883_MI,
	&t2121_TI,
	&m11913_MI,
	&m18828_MI,
	&m11889_MI,
	&m11890_MI,
	&m11988_MI,
	&m11907_MI,
	&m11893_MI,
	&m11899_MI,
	&m11994_MI,
	&m18830_MI,
	&m18838_MI,
	&m18826_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t219_0_0_0;
extern Il2CppType t219_1_0_0;
extern TypeInfo t7_TI;
struct t219;
extern TypeInfo t219_TI;
extern Il2CppGenericClass t219_GC;
extern CustomAttributesCache t866__CustomAttributeCache;
TypeInfo t219_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t219_MIs, t219_PIs, t219_FIs, NULL, &t7_TI, NULL, NULL, &t219_TI, t219_ITIs, t219_VT, &t866__CustomAttributeCache, &t219_TI, &t219_0_0_0, &t219_1_0_0, t219_IOs, &t219_GC, NULL, t219_FDVs, NULL, t219_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t219), 0, -1, sizeof(t219_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2123_TI;

extern TypeInfo t2123_TI;
extern TypeInfo t1295_TI;
extern TypeInfo t207_TI;
extern TypeInfo t219_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
extern TypeInfo t1312_TI;
extern MethodInfo m11910_MI;
extern MethodInfo m7022_MI;
extern MethodInfo m1555_MI;
extern MethodInfo m3114_MI;
extern MethodInfo m7227_MI;
extern MethodInfo m7023_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Graphic>
extern Il2CppType t219_0_0_1;
FieldInfo t2123_f0_FieldInfo = 
{
	"l", &t219_0_0_1, &t2123_TI, offsetof(t2123, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2123_f1_FieldInfo = 
{
	"next", &t60_0_0_1, &t2123_TI, offsetof(t2123, f1) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2123_f2_FieldInfo = 
{
	"ver", &t60_0_0_1, &t2123_TI, offsetof(t2123, f2) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t207_0_0_1;
FieldInfo t2123_f3_FieldInfo = 
{
	"current", &t207_0_0_1, &t2123_TI, offsetof(t2123, f3) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2123_FIs[] =
{
	&t2123_f0_FieldInfo,
	&t2123_f1_FieldInfo,
	&t2123_f2_FieldInfo,
	&t2123_f3_FieldInfo,
	NULL
};
extern MethodInfo m11908_MI;
static PropertyInfo t2123____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2123_TI, "System.Collections.IEnumerator.Current", &m11908_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11912_MI;
static PropertyInfo t2123____Current_PropertyInfo = 
{
	&t2123_TI, "Current", &m11912_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2123_PIs[] =
{
	&t2123____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2123____Current_PropertyInfo,
	NULL
};
extern Il2CppType t219_0_0_0;
static ParameterInfo t2123_m11907_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t219_0_0_0},
};
extern TypeInfo t2123_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11907_MI = 
{
	".ctor", (methodPointerType)&m8306_gshared, &t2123_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2123_m11907_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2123_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11908_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8307_gshared, &t2123_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2123_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11909_MI = 
{
	"Dispose", (methodPointerType)&m8308_gshared, &t2123_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2123_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11910_MI = 
{
	"VerifyState", (methodPointerType)&m8309_gshared, &t2123_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2123_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11911_MI = 
{
	"MoveNext", (methodPointerType)&m8310_gshared, &t2123_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2123_TI;
extern Il2CppType t207_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11912_MI = 
{
	"get_Current", (methodPointerType)&m8311_gshared, &t2123_TI, &t207_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2123_MIs[] =
{
	&m11907_MI,
	&m11908_MI,
	&m11909_MI,
	&m11910_MI,
	&m11911_MI,
	&m11912_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m11908_MI;
extern MethodInfo m11911_MI;
extern MethodInfo m11909_MI;
extern MethodInfo m11912_MI;
static MethodInfo* t2123_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m11908_MI,
	&m11911_MI,
	&m11909_MI,
	&m11912_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2119_TI;
static TypeInfo* t2123_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2119_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2119_TI;
static Il2CppInterfaceOffsetPair t2123_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2119_TI, 7},
};
extern MethodInfo m11910_MI;
extern TypeInfo t207_TI;
extern TypeInfo t2123_TI;
static void* t2123_RGCTXData[3] = 
{
	&m11910_MI,
	&t207_TI,
	&t2123_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2123_0_0_0;
extern Il2CppType t2123_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2123_TI;
extern Il2CppGenericClass t2123_GC;
extern TypeInfo t866_TI;
TypeInfo t2123_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2123_MIs, t2123_PIs, t2123_FIs, NULL, &t159_TI, NULL, &t866_TI, &t2123_TI, t2123_ITIs, t2123_VT, &EmptyCustomAttributesCache, &t2123_TI, &t2123_0_0_0, &t2123_1_0_0, t2123_IOs, &t2123_GC, NULL, NULL, NULL, t2123_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2123)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2121_TI;

extern TypeInfo t2121_TI;
extern TypeInfo t207_TI;
extern TypeInfo t60_TI;
extern TypeInfo t62_TI;
extern TypeInfo t223_TI;
extern TypeInfo t384_TI;
extern TypeInfo t87_TI;
extern TypeInfo t669_TI;
extern TypeInfo t53_TI;
extern TypeInfo t52_TI;
extern TypeInfo t618_TI;
extern TypeInfo t12_TI;
extern TypeInfo t55_TI;
extern TypeInfo t2118_TI;
extern TypeInfo t2120_TI;
extern TypeInfo t2119_TI;
#include "t2124MD.h"
extern MethodInfo m11942_MI;
extern MethodInfo m120_MI;
extern MethodInfo m1744_MI;
extern MethodInfo m1747_MI;
extern MethodInfo m116_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m7516_MI;
extern MethodInfo m7425_MI;
extern MethodInfo m11974_MI;
extern MethodInfo m25037_MI;
extern MethodInfo m25043_MI;
extern MethodInfo m25038_MI;
extern MethodInfo m25040_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Graphic>
extern Il2CppType t223_0_0_1;
FieldInfo t2121_f0_FieldInfo = 
{
	"list", &t223_0_0_1, &t2121_TI, offsetof(t2121, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2121_FIs[] =
{
	&t2121_f0_FieldInfo,
	NULL
};
extern MethodInfo m11919_MI;
extern MethodInfo m11920_MI;
static PropertyInfo t2121____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t2121_TI, "System.Collections.Generic.IList<T>.Item", &m11919_MI, &m11920_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11921_MI;
static PropertyInfo t2121____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2121_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m11921_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11931_MI;
static PropertyInfo t2121____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2121_TI, "System.Collections.ICollection.IsSynchronized", &m11931_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11932_MI;
static PropertyInfo t2121____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2121_TI, "System.Collections.ICollection.SyncRoot", &m11932_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11933_MI;
static PropertyInfo t2121____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2121_TI, "System.Collections.IList.IsFixedSize", &m11933_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11934_MI;
static PropertyInfo t2121____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2121_TI, "System.Collections.IList.IsReadOnly", &m11934_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11935_MI;
extern MethodInfo m11936_MI;
static PropertyInfo t2121____System_Collections_IList_Item_PropertyInfo = 
{
	&t2121_TI, "System.Collections.IList.Item", &m11935_MI, &m11936_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11941_MI;
static PropertyInfo t2121____Count_PropertyInfo = 
{
	&t2121_TI, "Count", &m11941_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11942_MI;
static PropertyInfo t2121____Item_PropertyInfo = 
{
	&t2121_TI, "Item", &m11942_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2121_PIs[] =
{
	&t2121____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t2121____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2121____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2121____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2121____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2121____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2121____System_Collections_IList_Item_PropertyInfo,
	&t2121____Count_PropertyInfo,
	&t2121____Item_PropertyInfo,
	NULL
};
extern Il2CppType t223_0_0_0;
static ParameterInfo t2121_m11913_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11913_MI = 
{
	".ctor", (methodPointerType)&m8312_gshared, &t2121_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2121_m11913_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t2121_m11914_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11914_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m8313_gshared, &t2121_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2121_m11914_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2121_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11915_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m8314_gshared, &t2121_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t2121_m11916_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11916_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m8315_gshared, &t2121_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2121_m11916_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t2121_m11917_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11917_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m8316_gshared, &t2121_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2121_m11917_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2121_m11918_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11918_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m8317_gshared, &t2121_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2121_m11918_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2121_m11919_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t207_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11919_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8318_gshared, &t2121_TI, &t207_0_0_0, RuntimeInvoker_t7_t60, t2121_m11919_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t2121_m11920_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11920_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8319_gshared, &t2121_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2121_m11920_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2121_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11921_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8320_gshared, &t2121_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2121_m11922_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11922_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8321_gshared, &t2121_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2121_m11922_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2121_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11923_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8322_gshared, &t2121_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2121_m11924_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11924_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8323_gshared, &t2121_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2121_m11924_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2121_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11925_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8324_gshared, &t2121_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2121_m11926_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11926_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8325_gshared, &t2121_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2121_m11926_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2121_m11927_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11927_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8326_gshared, &t2121_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2121_m11927_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2121_m11928_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11928_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8327_gshared, &t2121_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2121_m11928_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2121_m11929_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11929_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8328_gshared, &t2121_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2121_m11929_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2121_m11930_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11930_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8329_gshared, &t2121_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2121_m11930_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2121_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11931_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8330_gshared, &t2121_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2121_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11932_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8331_gshared, &t2121_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2121_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11933_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8332_gshared, &t2121_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2121_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11934_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8333_gshared, &t2121_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2121_m11935_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11935_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8334_gshared, &t2121_TI, &t7_0_0_0, RuntimeInvoker_t7_t60, t2121_m11935_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2121_m11936_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11936_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8335_gshared, &t2121_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2121_m11936_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t2121_m11937_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11937_MI = 
{
	"Contains", (methodPointerType)&m8336_gshared, &t2121_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2121_m11937_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2118_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2121_m11938_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2118_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11938_MI = 
{
	"CopyTo", (methodPointerType)&m8337_gshared, &t2121_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2121_m11938_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2121_TI;
extern Il2CppType t2119_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11939_MI = 
{
	"GetEnumerator", (methodPointerType)&m8338_gshared, &t2121_TI, &t2119_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t2121_m11940_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11940_MI = 
{
	"IndexOf", (methodPointerType)&m8339_gshared, &t2121_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2121_m11940_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2121_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11941_MI = 
{
	"get_Count", (methodPointerType)&m8340_gshared, &t2121_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2121_m11942_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2121_TI;
extern Il2CppType t207_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11942_MI = 
{
	"get_Item", (methodPointerType)&m8341_gshared, &t2121_TI, &t207_0_0_0, RuntimeInvoker_t7_t60, t2121_m11942_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2121_MIs[] =
{
	&m11913_MI,
	&m11914_MI,
	&m11915_MI,
	&m11916_MI,
	&m11917_MI,
	&m11918_MI,
	&m11919_MI,
	&m11920_MI,
	&m11921_MI,
	&m11922_MI,
	&m11923_MI,
	&m11924_MI,
	&m11925_MI,
	&m11926_MI,
	&m11927_MI,
	&m11928_MI,
	&m11929_MI,
	&m11930_MI,
	&m11931_MI,
	&m11932_MI,
	&m11933_MI,
	&m11934_MI,
	&m11935_MI,
	&m11936_MI,
	&m11937_MI,
	&m11938_MI,
	&m11939_MI,
	&m11940_MI,
	&m11941_MI,
	&m11942_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m11923_MI;
extern MethodInfo m11941_MI;
extern MethodInfo m11931_MI;
extern MethodInfo m11932_MI;
extern MethodInfo m11922_MI;
extern MethodInfo m11933_MI;
extern MethodInfo m11934_MI;
extern MethodInfo m11935_MI;
extern MethodInfo m11936_MI;
extern MethodInfo m11924_MI;
extern MethodInfo m11925_MI;
extern MethodInfo m11926_MI;
extern MethodInfo m11927_MI;
extern MethodInfo m11928_MI;
extern MethodInfo m11929_MI;
extern MethodInfo m11930_MI;
extern MethodInfo m11941_MI;
extern MethodInfo m11921_MI;
extern MethodInfo m11914_MI;
extern MethodInfo m11915_MI;
extern MethodInfo m11937_MI;
extern MethodInfo m11938_MI;
extern MethodInfo m11917_MI;
extern MethodInfo m11940_MI;
extern MethodInfo m11916_MI;
extern MethodInfo m11918_MI;
extern MethodInfo m11919_MI;
extern MethodInfo m11920_MI;
extern MethodInfo m11939_MI;
extern MethodInfo m11942_MI;
static MethodInfo* t2121_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m11923_MI,
	&m11941_MI,
	&m11931_MI,
	&m11932_MI,
	&m11922_MI,
	&m11933_MI,
	&m11934_MI,
	&m11935_MI,
	&m11936_MI,
	&m11924_MI,
	&m11925_MI,
	&m11926_MI,
	&m11927_MI,
	&m11928_MI,
	&m11929_MI,
	&m11930_MI,
	&m11941_MI,
	&m11921_MI,
	&m11914_MI,
	&m11915_MI,
	&m11937_MI,
	&m11938_MI,
	&m11917_MI,
	&m11940_MI,
	&m11916_MI,
	&m11918_MI,
	&m11919_MI,
	&m11920_MI,
	&m11939_MI,
	&m11942_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t384_TI;
extern TypeInfo t223_TI;
extern TypeInfo t2120_TI;
static TypeInfo* t2121_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t1041_TI,
	&t384_TI,
	&t223_TI,
	&t2120_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t384_TI;
extern TypeInfo t223_TI;
extern TypeInfo t2120_TI;
static Il2CppInterfaceOffsetPair t2121_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t1041_TI, 9},
	{ &t384_TI, 20},
	{ &t223_TI, 27},
	{ &t2120_TI, 32},
};
extern MethodInfo m11942_MI;
extern MethodInfo m11974_MI;
extern TypeInfo t207_TI;
extern MethodInfo m25037_MI;
extern MethodInfo m25043_MI;
extern MethodInfo m1744_MI;
extern MethodInfo m25038_MI;
extern MethodInfo m25040_MI;
extern MethodInfo m1747_MI;
static void* t2121_RGCTXData[9] = 
{
	&m11942_MI,
	&m11974_MI,
	&t207_TI,
	&m25037_MI,
	&m25043_MI,
	&m1744_MI,
	&m25038_MI,
	&m25040_MI,
	&m1747_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2121_0_0_0;
extern Il2CppType t2121_1_0_0;
extern TypeInfo t7_TI;
struct t2121;
extern TypeInfo t2121_TI;
extern Il2CppGenericClass t2121_GC;
extern CustomAttributesCache t868__CustomAttributeCache;
TypeInfo t2121_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t2121_MIs, t2121_PIs, t2121_FIs, NULL, &t7_TI, NULL, NULL, &t2121_TI, t2121_ITIs, t2121_VT, &t868__CustomAttributeCache, &t2121_TI, &t2121_0_0_0, &t2121_1_0_0, t2121_IOs, &t2121_GC, NULL, NULL, NULL, t2121_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2121), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t2124.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2124_TI;

extern TypeInfo t2124_TI;
extern TypeInfo t384_TI;
extern TypeInfo t55_TI;
extern TypeInfo t223_TI;
extern TypeInfo t207_TI;
extern TypeInfo t60_TI;
extern TypeInfo t53_TI;
extern TypeInfo t219_TI;
extern TypeInfo t669_TI;
extern TypeInfo t7_TI;
extern TypeInfo t52_TI;
extern TypeInfo t2120_TI;
extern TypeInfo t2119_TI;
extern TypeInfo t2118_TI;
extern TypeInfo t70_TI;
extern TypeInfo t348_TI;
extern TypeInfo t62_TI;
extern TypeInfo t1041_TI;
extern Il2CppType t207_0_0_0;
extern MethodInfo m25034_MI;
extern MethodInfo m11977_MI;
extern MethodInfo m11978_MI;
extern MethodInfo m1744_MI;
extern MethodInfo m11975_MI;
extern MethodInfo m11973_MI;
extern MethodInfo m1747_MI;
extern MethodInfo m116_MI;
extern MethodInfo m1727_MI;
extern MethodInfo m7515_MI;
extern MethodInfo m7516_MI;
extern MethodInfo m25040_MI;
extern MethodInfo m11966_MI;
extern MethodInfo m11974_MI;
extern MethodInfo m25037_MI;
extern MethodInfo m25043_MI;
extern MethodInfo m11976_MI;
extern MethodInfo m11964_MI;
extern MethodInfo m11969_MI;
extern MethodInfo m11960_MI;
extern MethodInfo m25036_MI;
extern MethodInfo m25038_MI;
extern MethodInfo m25044_MI;
extern MethodInfo m25045_MI;
extern MethodInfo m25042_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3933_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m120_MI;
extern MethodInfo m7514_MI;
extern MethodInfo m7517_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Graphic>
extern Il2CppType t223_0_0_1;
FieldInfo t2124_f0_FieldInfo = 
{
	"list", &t223_0_0_1, &t2124_TI, offsetof(t2124, f0), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_1;
FieldInfo t2124_f1_FieldInfo = 
{
	"syncRoot", &t7_0_0_1, &t2124_TI, offsetof(t2124, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2124_FIs[] =
{
	&t2124_f0_FieldInfo,
	&t2124_f1_FieldInfo,
	NULL
};
extern MethodInfo m11944_MI;
static PropertyInfo t2124____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t2124_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m11944_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11952_MI;
static PropertyInfo t2124____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2124_TI, "System.Collections.ICollection.IsSynchronized", &m11952_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11953_MI;
static PropertyInfo t2124____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2124_TI, "System.Collections.ICollection.SyncRoot", &m11953_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11954_MI;
static PropertyInfo t2124____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t2124_TI, "System.Collections.IList.IsFixedSize", &m11954_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11955_MI;
static PropertyInfo t2124____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t2124_TI, "System.Collections.IList.IsReadOnly", &m11955_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11956_MI;
extern MethodInfo m11957_MI;
static PropertyInfo t2124____System_Collections_IList_Item_PropertyInfo = 
{
	&t2124_TI, "System.Collections.IList.Item", &m11956_MI, &m11957_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11970_MI;
static PropertyInfo t2124____Count_PropertyInfo = 
{
	&t2124_TI, "Count", &m11970_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11971_MI;
extern MethodInfo m11972_MI;
static PropertyInfo t2124____Item_PropertyInfo = 
{
	&t2124_TI, "Item", &m11971_MI, &m11972_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2124_PIs[] =
{
	&t2124____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t2124____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2124____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2124____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t2124____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t2124____System_Collections_IList_Item_PropertyInfo,
	&t2124____Count_PropertyInfo,
	&t2124____Item_PropertyInfo,
	NULL
};
extern TypeInfo t2124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11943_MI = 
{
	".ctor", (methodPointerType)&m8342_gshared, &t2124_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2124_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11944_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8343_gshared, &t2124_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2124_m11945_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11945_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8344_gshared, &t2124_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2124_m11945_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2124_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11946_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8345_gshared, &t2124_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2124_m11947_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11947_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8346_gshared, &t2124_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2124_m11947_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2124_m11948_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11948_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8347_gshared, &t2124_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2124_m11948_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2124_m11949_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11949_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8348_gshared, &t2124_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2124_m11949_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2124_m11950_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11950_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8349_gshared, &t2124_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2124_m11950_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2124_m11951_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11951_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8350_gshared, &t2124_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2124_m11951_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2124_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11952_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8351_gshared, &t2124_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2124_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11953_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8352_gshared, &t2124_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2124_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11954_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8353_gshared, &t2124_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2124_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m11955_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8354_gshared, &t2124_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2124_m11956_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11956_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8355_gshared, &t2124_TI, &t7_0_0_0, RuntimeInvoker_t7_t60, t2124_m11956_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2124_m11957_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11957_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8356_gshared, &t2124_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2124_m11957_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t2124_m11958_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11958_MI = 
{
	"Add", (methodPointerType)&m8357_gshared, &t2124_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2124_m11958_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11959_MI = 
{
	"Clear", (methodPointerType)&m8358_gshared, &t2124_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11960_MI = 
{
	"ClearItems", (methodPointerType)&m8359_gshared, &t2124_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t2124_m11961_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11961_MI = 
{
	"Contains", (methodPointerType)&m8360_gshared, &t2124_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2124_m11961_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2118_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2124_m11962_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2118_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11962_MI = 
{
	"CopyTo", (methodPointerType)&m8361_gshared, &t2124_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2124_m11962_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2124_TI;
extern Il2CppType t2119_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11963_MI = 
{
	"GetEnumerator", (methodPointerType)&m8362_gshared, &t2124_TI, &t2119_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t2124_m11964_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11964_MI = 
{
	"IndexOf", (methodPointerType)&m8363_gshared, &t2124_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2124_m11964_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t2124_m11965_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11965_MI = 
{
	"Insert", (methodPointerType)&m8364_gshared, &t2124_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2124_m11965_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t2124_m11966_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11966_MI = 
{
	"InsertItem", (methodPointerType)&m8365_gshared, &t2124_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2124_m11966_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t2124_m11967_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11967_MI = 
{
	"Remove", (methodPointerType)&m8366_gshared, &t2124_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2124_m11967_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2124_m11968_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11968_MI = 
{
	"RemoveAt", (methodPointerType)&m8367_gshared, &t2124_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2124_m11968_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2124_m11969_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11969_MI = 
{
	"RemoveItem", (methodPointerType)&m8368_gshared, &t2124_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2124_m11969_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2124_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11970_MI = 
{
	"get_Count", (methodPointerType)&m8369_gshared, &t2124_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2124_m11971_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t207_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m11971_MI = 
{
	"get_Item", (methodPointerType)&m8370_gshared, &t2124_TI, &t207_0_0_0, RuntimeInvoker_t7_t60, t2124_m11971_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t2124_m11972_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11972_MI = 
{
	"set_Item", (methodPointerType)&m8371_gshared, &t2124_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2124_m11972_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t2124_m11973_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11973_MI = 
{
	"SetItem", (methodPointerType)&m8372_gshared, &t2124_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t2124_m11973_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2124_m11974_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11974_MI = 
{
	"IsValidItem", (methodPointerType)&m8373_gshared, &t2124_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2124_m11974_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2124_m11975_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t207_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11975_MI = 
{
	"ConvertItem", (methodPointerType)&m8374_gshared, &t2124_TI, &t207_0_0_0, RuntimeInvoker_t7_t7, t2124_m11975_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t223_0_0_0;
static ParameterInfo t2124_m11976_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11976_MI = 
{
	"CheckWritable", (methodPointerType)&m8375_gshared, &t2124_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2124_m11976_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t223_0_0_0;
static ParameterInfo t2124_m11977_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11977_MI = 
{
	"IsSynchronized", (methodPointerType)&m8376_gshared, &t2124_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2124_m11977_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t223_0_0_0;
static ParameterInfo t2124_m11978_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t223_0_0_0},
};
extern TypeInfo t2124_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11978_MI = 
{
	"IsFixedSize", (methodPointerType)&m8377_gshared, &t2124_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2124_m11978_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2124_MIs[] =
{
	&m11943_MI,
	&m11944_MI,
	&m11945_MI,
	&m11946_MI,
	&m11947_MI,
	&m11948_MI,
	&m11949_MI,
	&m11950_MI,
	&m11951_MI,
	&m11952_MI,
	&m11953_MI,
	&m11954_MI,
	&m11955_MI,
	&m11956_MI,
	&m11957_MI,
	&m11958_MI,
	&m11959_MI,
	&m11960_MI,
	&m11961_MI,
	&m11962_MI,
	&m11963_MI,
	&m11964_MI,
	&m11965_MI,
	&m11966_MI,
	&m11967_MI,
	&m11968_MI,
	&m11969_MI,
	&m11970_MI,
	&m11971_MI,
	&m11972_MI,
	&m11973_MI,
	&m11974_MI,
	&m11975_MI,
	&m11976_MI,
	&m11977_MI,
	&m11978_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m11946_MI;
extern MethodInfo m11970_MI;
extern MethodInfo m11952_MI;
extern MethodInfo m11953_MI;
extern MethodInfo m11945_MI;
extern MethodInfo m11954_MI;
extern MethodInfo m11955_MI;
extern MethodInfo m11956_MI;
extern MethodInfo m11957_MI;
extern MethodInfo m11947_MI;
extern MethodInfo m11959_MI;
extern MethodInfo m11948_MI;
extern MethodInfo m11949_MI;
extern MethodInfo m11950_MI;
extern MethodInfo m11951_MI;
extern MethodInfo m11968_MI;
extern MethodInfo m11970_MI;
extern MethodInfo m11944_MI;
extern MethodInfo m11958_MI;
extern MethodInfo m11959_MI;
extern MethodInfo m11961_MI;
extern MethodInfo m11962_MI;
extern MethodInfo m11967_MI;
extern MethodInfo m11964_MI;
extern MethodInfo m11965_MI;
extern MethodInfo m11968_MI;
extern MethodInfo m11971_MI;
extern MethodInfo m11972_MI;
extern MethodInfo m11963_MI;
extern MethodInfo m11960_MI;
extern MethodInfo m11966_MI;
extern MethodInfo m11969_MI;
extern MethodInfo m11973_MI;
static MethodInfo* t2124_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m11946_MI,
	&m11970_MI,
	&m11952_MI,
	&m11953_MI,
	&m11945_MI,
	&m11954_MI,
	&m11955_MI,
	&m11956_MI,
	&m11957_MI,
	&m11947_MI,
	&m11959_MI,
	&m11948_MI,
	&m11949_MI,
	&m11950_MI,
	&m11951_MI,
	&m11968_MI,
	&m11970_MI,
	&m11944_MI,
	&m11958_MI,
	&m11959_MI,
	&m11961_MI,
	&m11962_MI,
	&m11967_MI,
	&m11964_MI,
	&m11965_MI,
	&m11968_MI,
	&m11971_MI,
	&m11972_MI,
	&m11963_MI,
	&m11960_MI,
	&m11966_MI,
	&m11969_MI,
	&m11973_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t384_TI;
extern TypeInfo t223_TI;
extern TypeInfo t2120_TI;
static TypeInfo* t2124_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t1041_TI,
	&t384_TI,
	&t223_TI,
	&t2120_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t1041_TI;
extern TypeInfo t384_TI;
extern TypeInfo t223_TI;
extern TypeInfo t2120_TI;
static Il2CppInterfaceOffsetPair t2124_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t1041_TI, 9},
	{ &t384_TI, 20},
	{ &t223_TI, 27},
	{ &t2120_TI, 32},
};
extern TypeInfo t219_TI;
extern MethodInfo m1727_MI;
extern MethodInfo m25034_MI;
extern MethodInfo m25040_MI;
extern MethodInfo m1747_MI;
extern MethodInfo m11975_MI;
extern MethodInfo m11966_MI;
extern MethodInfo m11974_MI;
extern TypeInfo t207_TI;
extern MethodInfo m25037_MI;
extern MethodInfo m25043_MI;
extern MethodInfo m11976_MI;
extern MethodInfo m11964_MI;
extern MethodInfo m11969_MI;
extern MethodInfo m11977_MI;
extern MethodInfo m11978_MI;
extern MethodInfo m1744_MI;
extern MethodInfo m11973_MI;
extern MethodInfo m11960_MI;
extern MethodInfo m25036_MI;
extern MethodInfo m25038_MI;
extern MethodInfo m25044_MI;
extern MethodInfo m25045_MI;
extern MethodInfo m25042_MI;
extern Il2CppType t207_0_0_0;
static void* t2124_RGCTXData[25] = 
{
	&t219_TI,
	&m1727_MI,
	&m25034_MI,
	&m25040_MI,
	&m1747_MI,
	&m11975_MI,
	&m11966_MI,
	&m11974_MI,
	&t207_TI,
	&m25037_MI,
	&m25043_MI,
	&m11976_MI,
	&m11964_MI,
	&m11969_MI,
	&m11977_MI,
	&m11978_MI,
	&m1744_MI,
	&m11973_MI,
	&m11960_MI,
	&m25036_MI,
	&m25038_MI,
	&m25044_MI,
	&m25045_MI,
	&m25042_MI,
	(void*)&t207_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2124_0_0_0;
extern Il2CppType t2124_1_0_0;
extern TypeInfo t7_TI;
struct t2124;
extern TypeInfo t2124_TI;
extern Il2CppGenericClass t2124_GC;
extern CustomAttributesCache t867__CustomAttributeCache;
TypeInfo t2124_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t2124_MIs, t2124_PIs, t2124_FIs, NULL, &t7_TI, NULL, NULL, &t2124_TI, t2124_ITIs, t2124_VT, &t867__CustomAttributeCache, &t2124_TI, &t2124_0_0_0, &t2124_1_0_0, t2124_IOs, &t2124_GC, NULL, NULL, NULL, t2124_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2124), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2125_TI;
#include "t2125MD.h"

#include "t2126.h"
extern TypeInfo t2125_TI;
extern TypeInfo t5335_TI;
extern TypeInfo t70_TI;
extern TypeInfo t207_TI;
extern TypeInfo t55_TI;
extern TypeInfo t863_TI;
extern TypeInfo t553_TI;
extern TypeInfo t2126_TI;
extern TypeInfo t60_TI;
#include "t2126MD.h"
extern Il2CppType t5335_0_0_0;
extern Il2CppType t207_0_0_0;
extern Il2CppType t863_0_0_0;
extern MethodInfo m116_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3097_MI;
extern MethodInfo m3095_MI;
extern MethodInfo m6560_MI;
extern MethodInfo m11984_MI;
extern MethodInfo m25155_MI;
extern MethodInfo m18827_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Graphic>
extern Il2CppType t2125_0_0_49;
FieldInfo t2125_f0_FieldInfo = 
{
	"_default", &t2125_0_0_49, &t2125_TI, offsetof(t2125_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2125_FIs[] =
{
	&t2125_f0_FieldInfo,
	NULL
};
extern MethodInfo m11983_MI;
static PropertyInfo t2125____Default_PropertyInfo = 
{
	&t2125_TI, "Default", &m11983_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2125_PIs[] =
{
	&t2125____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2125_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11979_MI = 
{
	".ctor", (methodPointerType)&m8378_gshared, &t2125_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2125_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11980_MI = 
{
	".cctor", (methodPointerType)&m8379_gshared, &t2125_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2125_m11981_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2125_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11981_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8380_gshared, &t2125_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2125_m11981_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2125_m11982_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2125_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11982_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8381_gshared, &t2125_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2125_m11982_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t2125_m25155_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2125_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25155_MI = 
{
	"GetHashCode", NULL, &t2125_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2125_m25155_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t2125_m18827_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2125_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m18827_MI = 
{
	"Equals", NULL, &t2125_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2125_m18827_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2125_TI;
extern Il2CppType t2125_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11983_MI = 
{
	"get_Default", (methodPointerType)&m8382_gshared, &t2125_TI, &t2125_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2125_MIs[] =
{
	&m11979_MI,
	&m11980_MI,
	&m11981_MI,
	&m11982_MI,
	&m25155_MI,
	&m18827_MI,
	&m11983_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m18827_MI;
extern MethodInfo m25155_MI;
extern MethodInfo m11982_MI;
extern MethodInfo m11981_MI;
static MethodInfo* t2125_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m18827_MI,
	&m25155_MI,
	&m11982_MI,
	&m11981_MI,
	NULL,
	NULL,
};
extern TypeInfo t2138_TI;
extern TypeInfo t886_TI;
static TypeInfo* t2125_ITIs[] = 
{
	&t2138_TI,
	&t886_TI,
};
extern TypeInfo t2138_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t2125_IOs[] = 
{
	{ &t2138_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t5335_0_0_0;
extern Il2CppType t207_0_0_0;
extern TypeInfo t2125_TI;
extern TypeInfo t2125_TI;
extern TypeInfo t2126_TI;
extern MethodInfo m11984_MI;
extern TypeInfo t207_TI;
extern MethodInfo m25155_MI;
extern MethodInfo m18827_MI;
static void* t2125_RGCTXData[9] = 
{
	(void*)&t5335_0_0_0,
	(void*)&t207_0_0_0,
	&t2125_TI,
	&t2125_TI,
	&t2126_TI,
	&m11984_MI,
	&t207_TI,
	&m25155_MI,
	&m18827_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2125_0_0_0;
extern Il2CppType t2125_1_0_0;
extern TypeInfo t7_TI;
struct t2125;
extern TypeInfo t2125_TI;
extern Il2CppGenericClass t2125_GC;
TypeInfo t2125_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2125_MIs, t2125_PIs, t2125_FIs, NULL, &t7_TI, NULL, NULL, &t2125_TI, t2125_ITIs, t2125_VT, &EmptyCustomAttributesCache, &t2125_TI, &t2125_0_0_0, &t2125_1_0_0, t2125_IOs, &t2125_GC, NULL, NULL, NULL, t2125_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2125), 0, -1, sizeof(t2125_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2138_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Graphic>
extern Il2CppType t207_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t2138_m25156_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2138_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25156_MI = 
{
	"Equals", NULL, &t2138_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2138_m25156_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t2138_m25157_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2138_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25157_MI = 
{
	"GetHashCode", NULL, &t2138_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2138_m25157_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2138_MIs[] =
{
	&m25156_MI,
	&m25157_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2138_0_0_0;
extern Il2CppType t2138_1_0_0;
struct t2138;
extern TypeInfo t2138_TI;
extern Il2CppGenericClass t2138_GC;
TypeInfo t2138_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t2138_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2138_TI, NULL, NULL, &EmptyCustomAttributesCache, &t2138_TI, &t2138_0_0_0, &t2138_1_0_0, NULL, &t2138_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5335_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.UI.Graphic>
extern Il2CppType t207_0_0_0;
static ParameterInfo t5335_m25158_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t5335_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25158_MI = 
{
	"Equals", NULL, &t5335_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5335_m25158_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5335_MIs[] =
{
	&m25158_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5335_0_0_0;
extern Il2CppType t5335_1_0_0;
struct t5335;
extern TypeInfo t5335_TI;
extern Il2CppGenericClass t5335_GC;
TypeInfo t5335_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5335_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5335_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5335_TI, &t5335_0_0_0, &t5335_1_0_0, NULL, &t5335_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2126_TI;

extern TypeInfo t207_TI;
extern TypeInfo t7_TI;
extern TypeInfo t60_TI;
extern TypeInfo t55_TI;
extern MethodInfo m11979_MI;
extern MethodInfo m122_MI;
extern MethodInfo m121_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Graphic>
extern TypeInfo t2126_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11984_MI = 
{
	".ctor", (methodPointerType)&m8413_gshared, &t2126_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t2126_m11985_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2126_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11985_MI = 
{
	"GetHashCode", (methodPointerType)&m8414_gshared, &t2126_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2126_m11985_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t2126_m11986_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2126_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11986_MI = 
{
	"Equals", (methodPointerType)&m8415_gshared, &t2126_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2126_m11986_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2126_MIs[] =
{
	&m11984_MI,
	&m11985_MI,
	&m11986_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m11986_MI;
extern MethodInfo m11985_MI;
extern MethodInfo m11982_MI;
extern MethodInfo m11981_MI;
extern MethodInfo m11985_MI;
extern MethodInfo m11986_MI;
static MethodInfo* t2126_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m11986_MI,
	&m11985_MI,
	&m11982_MI,
	&m11981_MI,
	&m11985_MI,
	&m11986_MI,
};
extern TypeInfo t2138_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t2126_IOs[] = 
{
	{ &t2138_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t5335_0_0_0;
extern Il2CppType t207_0_0_0;
extern TypeInfo t2125_TI;
extern TypeInfo t2125_TI;
extern TypeInfo t2126_TI;
extern MethodInfo m11984_MI;
extern TypeInfo t207_TI;
extern MethodInfo m25155_MI;
extern MethodInfo m18827_MI;
extern MethodInfo m11979_MI;
extern TypeInfo t207_TI;
static void* t2126_RGCTXData[11] = 
{
	(void*)&t5335_0_0_0,
	(void*)&t207_0_0_0,
	&t2125_TI,
	&t2125_TI,
	&t2126_TI,
	&m11984_MI,
	&t207_TI,
	&m25155_MI,
	&m18827_MI,
	&m11979_MI,
	&t207_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2126_0_0_0;
extern Il2CppType t2126_1_0_0;
extern TypeInfo t2125_TI;
struct t2126;
extern TypeInfo t2126_TI;
extern Il2CppGenericClass t2126_GC;
extern TypeInfo t862_TI;
TypeInfo t2126_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2126_MIs, NULL, NULL, NULL, &t2125_TI, NULL, &t862_TI, &t2126_TI, NULL, t2126_VT, &EmptyCustomAttributesCache, &t2126_TI, &t2126_0_0_0, &t2126_1_0_0, t2126_IOs, &t2126_GC, NULL, NULL, NULL, t2126_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2126), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2122_TI;



// Metadata Definition System.Predicate`1<UnityEngine.UI.Graphic>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2122_m11987_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2122_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m11987_MI = 
{
	".ctor", (methodPointerType)&m8416_gshared, &t2122_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2122_m11987_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t2122_m11988_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2122_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11988_MI = 
{
	"Invoke", (methodPointerType)&m8417_gshared, &t2122_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2122_m11988_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2122_m11989_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2122_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11989_MI = 
{
	"BeginInvoke", (methodPointerType)&m8418_gshared, &t2122_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7, t2122_m11989_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2122_m11990_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2122_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11990_MI = 
{
	"EndInvoke", (methodPointerType)&m8419_gshared, &t2122_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2122_m11990_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2122_MIs[] =
{
	&m11987_MI,
	&m11988_MI,
	&m11989_MI,
	&m11990_MI,
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
extern MethodInfo m11988_MI;
extern MethodInfo m11989_MI;
extern MethodInfo m11990_MI;
static MethodInfo* t2122_VT[] =
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
	&m11988_MI,
	&m11989_MI,
	&m11990_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2122_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2122_0_0_0;
extern Il2CppType t2122_1_0_0;
extern TypeInfo t245_TI;
struct t2122;
extern TypeInfo t2122_TI;
extern Il2CppGenericClass t2122_GC;
TypeInfo t2122_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t2122_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t2122_TI, NULL, t2122_VT, &EmptyCustomAttributesCache, &t2122_TI, &t2122_0_0_0, &t2122_1_0_0, t2122_IOs, &t2122_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2122), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2127_TI;

#include "t2128.h"
extern TypeInfo t2127_TI;
extern TypeInfo t3494_TI;
extern TypeInfo t70_TI;
extern TypeInfo t207_TI;
extern TypeInfo t55_TI;
extern TypeInfo t851_TI;
extern TypeInfo t553_TI;
extern TypeInfo t2128_TI;
extern TypeInfo t60_TI;
extern TypeInfo t348_TI;
#include "t2128MD.h"
extern Il2CppType t3494_0_0_0;
extern Il2CppType t207_0_0_0;
extern Il2CppType t851_0_0_0;
extern MethodInfo m116_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3097_MI;
extern MethodInfo m3095_MI;
extern MethodInfo m6560_MI;
extern MethodInfo m11995_MI;
extern MethodInfo m25159_MI;
extern MethodInfo m6582_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.UI.Graphic>
extern Il2CppType t2127_0_0_49;
FieldInfo t2127_f0_FieldInfo = 
{
	"_default", &t2127_0_0_49, &t2127_TI, offsetof(t2127_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2127_FIs[] =
{
	&t2127_f0_FieldInfo,
	NULL
};
extern MethodInfo m11994_MI;
static PropertyInfo t2127____Default_PropertyInfo = 
{
	&t2127_TI, "Default", &m11994_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2127_PIs[] =
{
	&t2127____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2127_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11991_MI = 
{
	".ctor", (methodPointerType)&m8420_gshared, &t2127_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2127_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11992_MI = 
{
	".cctor", (methodPointerType)&m8421_gshared, &t2127_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2127_m11993_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2127_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11993_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8422_gshared, &t2127_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t2127_m11993_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t2127_m25159_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2127_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25159_MI = 
{
	"Compare", NULL, &t2127_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t2127_m25159_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2127_TI;
extern Il2CppType t2127_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11994_MI = 
{
	"get_Default", (methodPointerType)&m8423_gshared, &t2127_TI, &t2127_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2127_MIs[] =
{
	&m11991_MI,
	&m11992_MI,
	&m11993_MI,
	&m25159_MI,
	&m11994_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m25159_MI;
extern MethodInfo m11993_MI;
static MethodInfo* t2127_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m25159_MI,
	&m11993_MI,
	NULL,
};
extern TypeInfo t3493_TI;
extern TypeInfo t743_TI;
static TypeInfo* t2127_ITIs[] = 
{
	&t3493_TI,
	&t743_TI,
};
extern TypeInfo t3493_TI;
extern TypeInfo t743_TI;
static Il2CppInterfaceOffsetPair t2127_IOs[] = 
{
	{ &t3493_TI, 4},
	{ &t743_TI, 5},
};
extern Il2CppType t3494_0_0_0;
extern Il2CppType t207_0_0_0;
extern TypeInfo t2127_TI;
extern TypeInfo t2127_TI;
extern TypeInfo t2128_TI;
extern MethodInfo m11995_MI;
extern TypeInfo t207_TI;
extern MethodInfo m25159_MI;
static void* t2127_RGCTXData[8] = 
{
	(void*)&t3494_0_0_0,
	(void*)&t207_0_0_0,
	&t2127_TI,
	&t2127_TI,
	&t2128_TI,
	&m11995_MI,
	&t207_TI,
	&m25159_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2127_0_0_0;
extern Il2CppType t2127_1_0_0;
extern TypeInfo t7_TI;
struct t2127;
extern TypeInfo t2127_TI;
extern Il2CppGenericClass t2127_GC;
TypeInfo t2127_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2127_MIs, t2127_PIs, t2127_FIs, NULL, &t7_TI, NULL, NULL, &t2127_TI, t2127_ITIs, t2127_VT, &EmptyCustomAttributesCache, &t2127_TI, &t2127_0_0_0, &t2127_1_0_0, t2127_IOs, &t2127_GC, NULL, NULL, NULL, t2127_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2127), 0, -1, sizeof(t2127_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3493_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.UI.Graphic>
extern Il2CppType t207_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t3493_m18835_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t3493_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m18835_MI = 
{
	"Compare", NULL, &t3493_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t3493_m18835_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3493_MIs[] =
{
	&m18835_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3493_0_0_0;
extern Il2CppType t3493_1_0_0;
struct t3493;
extern TypeInfo t3493_TI;
extern Il2CppGenericClass t3493_GC;
TypeInfo t3493_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3493_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3493_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3493_TI, &t3493_0_0_0, &t3493_1_0_0, NULL, &t3493_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3494_TI;



// Metadata Definition System.IComparable`1<UnityEngine.UI.Graphic>
extern Il2CppType t207_0_0_0;
static ParameterInfo t3494_m18836_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t3494_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m18836_MI = 
{
	"CompareTo", NULL, &t3494_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t3494_m18836_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3494_MIs[] =
{
	&m18836_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3494_0_0_0;
extern Il2CppType t3494_1_0_0;
struct t3494;
extern TypeInfo t3494_TI;
extern Il2CppGenericClass t3494_GC;
TypeInfo t3494_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3494_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3494_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3494_TI, &t3494_0_0_0, &t3494_1_0_0, NULL, &t3494_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2128_TI;

extern TypeInfo t207_TI;
extern TypeInfo t3494_TI;
extern TypeInfo t60_TI;
extern TypeInfo t78_TI;
extern TypeInfo t7_TI;
extern TypeInfo t348_TI;
extern MethodInfo m11991_MI;
extern MethodInfo m18836_MI;
extern MethodInfo m7420_MI;
extern MethodInfo m2046_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Graphic>
extern TypeInfo t2128_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m11995_MI = 
{
	".ctor", (methodPointerType)&m8424_gshared, &t2128_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t2128_m11996_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2128_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11996_MI = 
{
	"Compare", (methodPointerType)&m8425_gshared, &t2128_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t2128_m11996_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2128_MIs[] =
{
	&m11995_MI,
	&m11996_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m11996_MI;
extern MethodInfo m11993_MI;
extern MethodInfo m11996_MI;
static MethodInfo* t2128_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m11996_MI,
	&m11993_MI,
	&m11996_MI,
};
extern TypeInfo t3493_TI;
extern TypeInfo t743_TI;
static Il2CppInterfaceOffsetPair t2128_IOs[] = 
{
	{ &t3493_TI, 4},
	{ &t743_TI, 5},
};
extern Il2CppType t3494_0_0_0;
extern Il2CppType t207_0_0_0;
extern TypeInfo t2127_TI;
extern TypeInfo t2127_TI;
extern TypeInfo t2128_TI;
extern MethodInfo m11995_MI;
extern TypeInfo t207_TI;
extern MethodInfo m25159_MI;
extern MethodInfo m11991_MI;
extern TypeInfo t207_TI;
extern TypeInfo t3494_TI;
extern MethodInfo m18836_MI;
static void* t2128_RGCTXData[12] = 
{
	(void*)&t3494_0_0_0,
	(void*)&t207_0_0_0,
	&t2127_TI,
	&t2127_TI,
	&t2128_TI,
	&m11995_MI,
	&t207_TI,
	&m25159_MI,
	&m11991_MI,
	&t207_TI,
	&t3494_TI,
	&m18836_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2128_0_0_0;
extern Il2CppType t2128_1_0_0;
extern TypeInfo t2127_TI;
struct t2128;
extern TypeInfo t2128_TI;
extern Il2CppGenericClass t2128_GC;
extern TypeInfo t850_TI;
TypeInfo t2128_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2128_MIs, NULL, NULL, NULL, &t2127_TI, NULL, &t850_TI, &t2128_TI, NULL, t2128_VT, &EmptyCustomAttributesCache, &t2128_TI, &t2128_0_0_0, &t2128_1_0_0, t2128_IOs, &t2128_GC, NULL, NULL, NULL, t2128_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2128), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t220_TI;
#include "t220MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.UI.Graphic>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t220_m1748_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t220_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m1748_MI = 
{
	".ctor", (methodPointerType)&m8471_gshared, &t220_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t220_m1748_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t220_m11997_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t220_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11997_MI = 
{
	"Invoke", (methodPointerType)&m8472_gshared, &t220_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t7, t220_m11997_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t207_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t220_m11998_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t220_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11998_MI = 
{
	"BeginInvoke", (methodPointerType)&m8473_gshared, &t220_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t220_m11998_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t220_m11999_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t220_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m11999_MI = 
{
	"EndInvoke", (methodPointerType)&m8474_gshared, &t220_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t220_m11999_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t220_MIs[] =
{
	&m1748_MI,
	&m11997_MI,
	&m11998_MI,
	&m11999_MI,
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
extern MethodInfo m11997_MI;
extern MethodInfo m11998_MI;
extern MethodInfo m11999_MI;
static MethodInfo* t220_VT[] =
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
	&m11997_MI,
	&m11998_MI,
	&m11999_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t220_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t220_0_0_0;
extern Il2CppType t220_1_0_0;
extern TypeInfo t245_TI;
struct t220;
extern TypeInfo t220_TI;
extern Il2CppGenericClass t220_GC;
TypeInfo t220_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t220_MIs, NULL, NULL, NULL, &t245_TI, NULL, NULL, &t220_TI, NULL, t220_VT, &EmptyCustomAttributesCache, &t220_TI, &t220_0_0_0, &t220_1_0_0, t220_IOs, &t220_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t220), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3495_TI;

#include "t217.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.GraphicRaycaster/BlockingObjects>
extern MethodInfo m25160_MI;
static PropertyInfo t3495____Current_PropertyInfo = 
{
	&t3495_TI, "Current", &m25160_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3495_PIs[] =
{
	&t3495____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3495_TI;
extern Il2CppType t217_0_0_0;
extern void* RuntimeInvoker_t217 (MethodInfo* method, void* obj, void** args);
MethodInfo m25160_MI = 
{
	"get_Current", NULL, &t3495_TI, &t217_0_0_0, RuntimeInvoker_t217, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3495_MIs[] =
{
	&m25160_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3495_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3495_0_0_0;
extern Il2CppType t3495_1_0_0;
struct t3495;
extern TypeInfo t3495_TI;
extern Il2CppGenericClass t3495_GC;
TypeInfo t3495_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3495_MIs, t3495_PIs, NULL, NULL, NULL, NULL, NULL, &t3495_TI, t3495_ITIs, NULL, &EmptyCustomAttributesCache, &t3495_TI, &t3495_0_0_0, &t3495_1_0_0, NULL, &t3495_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2129.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2129_TI;
#include "t2129MD.h"

extern TypeInfo t2129_TI;
extern TypeInfo t217_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m12004_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18841_MI;
struct t52;
 int32_t m18841 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18841_MI;


extern MethodInfo m12000_MI;
 void m12000 (t2129 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12001_MI;
 t7 * m12001 (t2129 * __this, MethodInfo* method){
	{
		int32_t L_0 = m12004(__this, &m12004_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t217_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m12002_MI;
 void m12002 (t2129 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12003_MI;
 bool m12003 (t2129 * __this, MethodInfo* method){
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
extern MethodInfo m12004_MI;
 int32_t m12004 (t2129 * __this, MethodInfo* method){
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
		int32_t L_8 = m18841(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18841_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.GraphicRaycaster/BlockingObjects>
extern Il2CppType t52_0_0_1;
FieldInfo t2129_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2129_TI, offsetof(t2129, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2129_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2129_TI, offsetof(t2129, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2129_FIs[] =
{
	&t2129_f0_FieldInfo,
	&t2129_f1_FieldInfo,
	NULL
};
extern MethodInfo m12001_MI;
static PropertyInfo t2129____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2129_TI, "System.Collections.IEnumerator.Current", &m12001_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12004_MI;
static PropertyInfo t2129____Current_PropertyInfo = 
{
	&t2129_TI, "Current", &m12004_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2129_PIs[] =
{
	&t2129____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2129____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2129_m12000_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2129_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12000_MI = 
{
	".ctor", (methodPointerType)&m12000, &t2129_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2129_m12000_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2129_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12001_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12001, &t2129_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2129_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12002_MI = 
{
	"Dispose", (methodPointerType)&m12002, &t2129_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2129_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12003_MI = 
{
	"MoveNext", (methodPointerType)&m12003, &t2129_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2129_TI;
extern Il2CppType t217_0_0_0;
extern void* RuntimeInvoker_t217 (MethodInfo* method, void* obj, void** args);
MethodInfo m12004_MI = 
{
	"get_Current", (methodPointerType)&m12004, &t2129_TI, &t217_0_0_0, RuntimeInvoker_t217, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2129_MIs[] =
{
	&m12000_MI,
	&m12001_MI,
	&m12002_MI,
	&m12003_MI,
	&m12004_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m12001_MI;
extern MethodInfo m12003_MI;
extern MethodInfo m12002_MI;
extern MethodInfo m12004_MI;
static MethodInfo* t2129_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m12001_MI,
	&m12003_MI,
	&m12002_MI,
	&m12004_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3495_TI;
static TypeInfo* t2129_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3495_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3495_TI;
static Il2CppInterfaceOffsetPair t2129_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3495_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2129_0_0_0;
extern Il2CppType t2129_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2129_TI;
extern Il2CppGenericClass t2129_GC;
extern TypeInfo t52_TI;
TypeInfo t2129_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2129_MIs, t2129_PIs, t2129_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2129_TI, t2129_ITIs, t2129_VT, &EmptyCustomAttributesCache, &t2129_TI, &t2129_0_0_0, &t2129_1_0_0, t2129_IOs, &t2129_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2129)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4177_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.GraphicRaycaster/BlockingObjects>
extern MethodInfo m25161_MI;
static PropertyInfo t4177____Count_PropertyInfo = 
{
	&t4177_TI, "Count", &m25161_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25162_MI;
static PropertyInfo t4177____IsReadOnly_PropertyInfo = 
{
	&t4177_TI, "IsReadOnly", &m25162_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4177_PIs[] =
{
	&t4177____Count_PropertyInfo,
	&t4177____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4177_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25161_MI = 
{
	"get_Count", NULL, &t4177_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4177_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m25162_MI = 
{
	"get_IsReadOnly", NULL, &t4177_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t217_0_0_0;
static ParameterInfo t4177_m25163_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t217_0_0_0},
};
extern TypeInfo t4177_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25163_MI = 
{
	"Add", NULL, &t4177_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4177_m25163_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4177_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m25164_MI = 
{
	"Clear", NULL, &t4177_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t217_0_0_0;
static ParameterInfo t4177_m25165_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t217_0_0_0},
};
extern TypeInfo t4177_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25165_MI = 
{
	"Contains", NULL, &t4177_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4177_m25165_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3310_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4177_m25166_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3310_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4177_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25166_MI = 
{
	"CopyTo", NULL, &t4177_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4177_m25166_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t217_0_0_0;
static ParameterInfo t4177_m25167_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t217_0_0_0},
};
extern TypeInfo t4177_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25167_MI = 
{
	"Remove", NULL, &t4177_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t4177_m25167_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4177_MIs[] =
{
	&m25161_MI,
	&m25162_MI,
	&m25163_MI,
	&m25164_MI,
	&m25165_MI,
	&m25166_MI,
	&m25167_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4179_TI;
static TypeInfo* t4177_ITIs[] = 
{
	&t618_TI,
	&t4179_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4177_0_0_0;
extern Il2CppType t4177_1_0_0;
struct t4177;
extern TypeInfo t4177_TI;
extern Il2CppGenericClass t4177_GC;
TypeInfo t4177_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4177_MIs, t4177_PIs, NULL, NULL, NULL, NULL, NULL, &t4177_TI, t4177_ITIs, NULL, &EmptyCustomAttributesCache, &t4177_TI, &t4177_0_0_0, &t4177_1_0_0, NULL, &t4177_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4179_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.GraphicRaycaster/BlockingObjects>
extern TypeInfo t4179_TI;
extern Il2CppType t3495_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25168_MI = 
{
	"GetEnumerator", NULL, &t4179_TI, &t3495_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4179_MIs[] =
{
	&m25168_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4179_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4179_0_0_0;
extern Il2CppType t4179_1_0_0;
struct t4179;
extern TypeInfo t4179_TI;
extern Il2CppGenericClass t4179_GC;
TypeInfo t4179_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4179_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4179_TI, t4179_ITIs, NULL, &EmptyCustomAttributesCache, &t4179_TI, &t4179_0_0_0, &t4179_1_0_0, NULL, &t4179_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4178_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.GraphicRaycaster/BlockingObjects>
extern MethodInfo m25169_MI;
extern MethodInfo m25170_MI;
static PropertyInfo t4178____Item_PropertyInfo = 
{
	&t4178_TI, "Item", &m25169_MI, &m25170_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4178_PIs[] =
{
	&t4178____Item_PropertyInfo,
	NULL
};
extern Il2CppType t217_0_0_0;
static ParameterInfo t4178_m25171_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t217_0_0_0},
};
extern TypeInfo t4178_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25171_MI = 
{
	"IndexOf", NULL, &t4178_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t4178_m25171_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t217_0_0_0;
static ParameterInfo t4178_m25172_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t217_0_0_0},
};
extern TypeInfo t4178_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25172_MI = 
{
	"Insert", NULL, &t4178_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4178_m25172_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4178_m25173_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4178_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25173_MI = 
{
	"RemoveAt", NULL, &t4178_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4178_m25173_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4178_m25169_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4178_TI;
extern Il2CppType t217_0_0_0;
extern void* RuntimeInvoker_t217_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25169_MI = 
{
	"get_Item", NULL, &t4178_TI, &t217_0_0_0, RuntimeInvoker_t217_t60, t4178_m25169_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t217_0_0_0;
static ParameterInfo t4178_m25170_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t217_0_0_0},
};
extern TypeInfo t4178_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25170_MI = 
{
	"set_Item", NULL, &t4178_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t4178_m25170_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4178_MIs[] =
{
	&m25171_MI,
	&m25172_MI,
	&m25173_MI,
	&m25169_MI,
	&m25170_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4177_TI;
extern TypeInfo t4179_TI;
static TypeInfo* t4178_ITIs[] = 
{
	&t618_TI,
	&t4177_TI,
	&t4179_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4178_0_0_0;
extern Il2CppType t4178_1_0_0;
struct t4178;
extern TypeInfo t4178_TI;
extern Il2CppGenericClass t4178_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4178_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4178_MIs, t4178_PIs, NULL, NULL, NULL, NULL, NULL, &t4178_TI, t4178_ITIs, NULL, &t1426__CustomAttributeCache, &t4178_TI, &t4178_0_0_0, &t4178_1_0_0, NULL, &t4178_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t222.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t222_TI;
#include "t222MD.h"

#include "t388.h"
#include "t852.h"
#include "t2133.h"
#include "t732.h"
#include "t733.h"
#include "t2135.h"
#include "t854.h"
#include "t2132.h"
#include "t2155.h"
#include "t2137.h"
#include "t2156.h"
#include "t2157.h"
extern TypeInfo t222_TI;
extern TypeInfo t53_TI;
extern TypeInfo t212_TI;
extern TypeInfo t388_TI;
extern TypeInfo t87_TI;
extern TypeInfo t2131_TI;
extern TypeInfo t60_TI;
extern TypeInfo t852_TI;
extern TypeInfo t55_TI;
extern TypeInfo t2133_TI;
extern TypeInfo t2134_TI;
extern TypeInfo t2135_TI;
extern TypeInfo t3020_TI;
extern TypeInfo t854_TI;
extern TypeInfo t2132_TI;
extern TypeInfo t2155_TI;
extern TypeInfo t2137_TI;
extern TypeInfo t2156_TI;
extern TypeInfo t88_TI;
extern TypeInfo t2110_TI;
extern TypeInfo t731_TI;
extern TypeInfo t1476_TI;
extern TypeInfo t2099_TI;
extern TypeInfo t2130_TI;
extern TypeInfo t348_TI;
extern TypeInfo t881_TI;
extern TypeInfo t2157_TI;
extern TypeInfo t5336_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
#include "t2133MD.h"
#include "t2135MD.h"
#include "t2132MD.h"
#include "t2155MD.h"
#include "t2137MD.h"
#include "t2156MD.h"
#include "t881MD.h"
#include "t2157MD.h"
#include "t732MD.h"
#include "t34MD.h"
#include "t854MD.h"
extern Il2CppType t2131_0_0_0;
extern Il2CppType t2134_0_0_0;
extern Il2CppType t212_0_0_0;
extern Il2CppType t388_0_0_0;
extern MethodInfo m12036_MI;
extern MethodInfo m12037_MI;
extern MethodInfo m12021_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m25138_MI;
extern MethodInfo m25137_MI;
extern MethodInfo m12028_MI;
extern MethodInfo m12168_MI;
extern MethodInfo m116_MI;
extern MethodInfo m12022_MI;
extern MethodInfo m12042_MI;
extern MethodInfo m12044_MI;
extern MethodInfo m1754_MI;
extern MethodInfo m12038_MI;
extern MethodInfo m12027_MI;
extern MethodInfo m12034_MI;
extern MethodInfo m12024_MI;
extern MethodInfo m12040_MI;
extern MethodInfo m12202_MI;
extern MethodInfo m18894_MI;
extern MethodInfo m12025_MI;
extern MethodInfo m12206_MI;
extern MethodInfo m18896_MI;
extern MethodInfo m12187_MI;
extern MethodInfo m12210_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m11831_MI;
extern MethodInfo m12023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m12020_MI;
extern MethodInfo m12041_MI;
extern MethodInfo m18897_MI;
extern MethodInfo m4529_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m3874_MI;
extern MethodInfo m12219_MI;
extern MethodInfo m25174_MI;
extern MethodInfo m5859_MI;
extern MethodInfo m5865_MI;
extern MethodInfo m5868_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m5855_MI;
extern MethodInfo m3964_MI;
extern MethodInfo m1876_MI;
extern MethodInfo m6583_MI;
extern MethodInfo m3933_MI;
extern MethodInfo m1751_MI;
extern MethodInfo m25175_MI;
extern MethodInfo m4471_MI;
struct t222;
 void m18894 (t222 * __this, t3020* p0, int32_t p1, t2132 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18894_MI;
struct t222;
 void m18896 (t222 * __this, t52 * p0, int32_t p1, t2155 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18896_MI;
struct t222;
 void m18897 (t222 * __this, t2134* p0, int32_t p1, t2155 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18897_MI;


extern MethodInfo m12012_MI;
 void m12012 (t222 * __this, t2135  p0, MethodInfo* method){
	{
		t212 * L_0 = m12042((&p0), &m12042_MI);
		t388 * L_1 = m12044((&p0), &m12044_MI);
		VirtActionInvoker2< t212 *, t388 * >::Invoke(&m1754_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m12013_MI;
 bool m12013 (t222 * __this, t2135  p0, MethodInfo* method){
	{
		bool L_0 = m12038(__this, p0, &m12038_MI);
		return L_0;
	}
}
extern MethodInfo m12015_MI;
 bool m12015 (t222 * __this, t2135  p0, MethodInfo* method){
	{
		bool L_0 = m12038(__this, p0, &m12038_MI);
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
		t212 * L_1 = m12042((&p0), &m12042_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t212 * >::Invoke(&m12034_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m12025_MI;
 t2135  m12025 (t7 * __this, t212 * p0, t388 * p1, MethodInfo* method){
	{
		t2135  L_0 = {0};
		m12041(&L_0, p0, p1, &m12041_MI);
		return L_0;
	}
}
extern MethodInfo m12038_MI;
 bool m12038 (t222 * __this, t2135  p0, MethodInfo* method){
	t388 * V_0 = {0};
	{
		t212 * L_0 = m12042((&p0), &m12042_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t212 *, t388 ** >::Invoke(&m1751_MI, __this, L_0, (&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2157_TI));
		t2157 * L_2 = m12219(NULL, &m12219_MI);
		t388 * L_3 = m12044((&p0), &m12044_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, t388 *, t388 * >::Invoke(&m25175_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m12039_MI;
 t2137  m12039 (t222 * __this, MethodInfo* method){
	{
		t2137  L_0 = {0};
		m12187(&L_0, __this, &m12187_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t60_0_0_32849;
FieldInfo t222_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t60_0_0_32849, &t222_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_32849;
FieldInfo t222_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t54_0_0_32849, &t222_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_32849;
FieldInfo t222_f2_FieldInfo = 
{
	"NO_SLOT", &t60_0_0_32849, &t222_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_32849;
FieldInfo t222_f3_FieldInfo = 
{
	"HASH_FLAG", &t60_0_0_32849, &t222_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t731_0_0_1;
FieldInfo t222_f4_FieldInfo = 
{
	"table", &t731_0_0_1, &t222_TI, offsetof(t222, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1476_0_0_1;
FieldInfo t222_f5_FieldInfo = 
{
	"linkSlots", &t1476_0_0_1, &t222_TI, offsetof(t222, f5), &EmptyCustomAttributesCache};
extern Il2CppType t2099_0_0_1;
FieldInfo t222_f6_FieldInfo = 
{
	"keySlots", &t2099_0_0_1, &t222_TI, offsetof(t222, f6), &EmptyCustomAttributesCache};
extern Il2CppType t2130_0_0_1;
FieldInfo t222_f7_FieldInfo = 
{
	"valueSlots", &t2130_0_0_1, &t222_TI, offsetof(t222, f7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t222_f8_FieldInfo = 
{
	"touchedSlots", &t60_0_0_1, &t222_TI, offsetof(t222, f8), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t222_f9_FieldInfo = 
{
	"emptySlot", &t60_0_0_1, &t222_TI, offsetof(t222, f9), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t222_f10_FieldInfo = 
{
	"count", &t60_0_0_1, &t222_TI, offsetof(t222, f10), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t222_f11_FieldInfo = 
{
	"threshold", &t60_0_0_1, &t222_TI, offsetof(t222, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2131_0_0_1;
FieldInfo t222_f12_FieldInfo = 
{
	"hcp", &t2131_0_0_1, &t222_TI, offsetof(t222, f12), &EmptyCustomAttributesCache};
extern Il2CppType t732_0_0_1;
FieldInfo t222_f13_FieldInfo = 
{
	"serialization_info", &t732_0_0_1, &t222_TI, offsetof(t222, f13), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t222_f14_FieldInfo = 
{
	"generation", &t60_0_0_1, &t222_TI, offsetof(t222, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2132_0_0_17;
extern CustomAttributesCache t859__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t222_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t2132_0_0_17, &t222_TI, offsetof(t222_SFs, f15), &t859__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t222_FIs[] =
{
	&t222_f0_FieldInfo,
	&t222_f1_FieldInfo,
	&t222_f2_FieldInfo,
	&t222_f3_FieldInfo,
	&t222_f4_FieldInfo,
	&t222_f5_FieldInfo,
	&t222_f6_FieldInfo,
	&t222_f7_FieldInfo,
	&t222_f8_FieldInfo,
	&t222_f9_FieldInfo,
	&t222_f10_FieldInfo,
	&t222_f11_FieldInfo,
	&t222_f12_FieldInfo,
	&t222_f13_FieldInfo,
	&t222_f14_FieldInfo,
	&t222_f15_FieldInfo,
	NULL
};
static const int32_t t222_f0_DefaultValueData = 10;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t222_f0_DefaultValue = 
{
	&t222_f0_FieldInfo, { (char*)&t222_f0_DefaultValueData, &t60_0_0_0 }};
static const float t222_f1_DefaultValueData = 0.9f;
extern Il2CppType t54_0_0_0;
static Il2CppFieldDefaultValueEntry t222_f1_DefaultValue = 
{
	&t222_f1_FieldInfo, { (char*)&t222_f1_DefaultValueData, &t54_0_0_0 }};
static const int32_t t222_f2_DefaultValueData = -1;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t222_f2_DefaultValue = 
{
	&t222_f2_FieldInfo, { (char*)&t222_f2_DefaultValueData, &t60_0_0_0 }};
static const int32_t t222_f3_DefaultValueData = -2147483648;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t222_f3_DefaultValue = 
{
	&t222_f3_FieldInfo, { (char*)&t222_f3_DefaultValueData, &t60_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t222_FDVs[] = 
{
	&t222_f0_DefaultValue,
	&t222_f1_DefaultValue,
	&t222_f2_DefaultValue,
	&t222_f3_DefaultValue,
	NULL
};
extern MethodInfo m12008_MI;
static PropertyInfo t222____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t222_TI, "System.Collections.IDictionary.Item", NULL, &m12008_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12009_MI;
static PropertyInfo t222____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t222_TI, "System.Collections.ICollection.IsSynchronized", &m12009_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12010_MI;
static PropertyInfo t222____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t222_TI, "System.Collections.ICollection.SyncRoot", &m12010_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12011_MI;
static PropertyInfo t222____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t222_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m12011_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12020_MI;
static PropertyInfo t222____Count_PropertyInfo = 
{
	&t222_TI, "Count", &m12020_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12021_MI;
static PropertyInfo t222____Item_PropertyInfo = 
{
	&t222_TI, "Item", NULL, &m12021_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12035_MI;
static PropertyInfo t222____Values_PropertyInfo = 
{
	&t222_TI, "Values", &m12035_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t222_PIs[] =
{
	&t222____System_Collections_IDictionary_Item_PropertyInfo,
	&t222____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t222____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t222____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t222____Count_PropertyInfo,
	&t222____Item_PropertyInfo,
	&t222____Values_PropertyInfo,
	NULL
};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m1750_MI = 
{
	".ctor", (methodPointerType)&m11135_gshared, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2131_0_0_0;
static ParameterInfo t222_m12005_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t2131_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12005_MI = 
{
	".ctor", (methodPointerType)&m11137_gshared, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t222_m12005_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t222_m12006_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12006_MI = 
{
	".ctor", (methodPointerType)&m11139_gshared, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t222_m12006_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t732_0_0_0;
extern Il2CppType t733_0_0_0;
static ParameterInfo t222_m12007_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t732_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t733_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t733 (MethodInfo* method, void* obj, void** args);
MethodInfo m12007_MI = 
{
	".ctor", (methodPointerType)&m11141_gshared, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t733, t222_m12007_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t222_m12008_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12008_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m11143_gshared, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t222_m12008_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t222_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12009_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11145_gshared, &t222_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t222_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12010_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11147_gshared, &t222_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t222_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12011_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m11149_gshared, &t222_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2135_0_0_0;
static ParameterInfo t222_m12012_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2135_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t2135 (MethodInfo* method, void* obj, void** args);
MethodInfo m12012_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m12012, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53_t2135, t222_m12012_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2135_0_0_0;
static ParameterInfo t222_m12013_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2135_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2135 (MethodInfo* method, void* obj, void** args);
MethodInfo m12013_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m12013, &t222_TI, &t55_0_0_0, RuntimeInvoker_t55_t2135, t222_m12013_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2134_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t222_m12014_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2134_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12014_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m11153_gshared, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t222_m12014_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2135_0_0_0;
static ParameterInfo t222_m12015_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2135_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2135 (MethodInfo* method, void* obj, void** args);
MethodInfo m12015_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m12015, &t222_TI, &t55_0_0_0, RuntimeInvoker_t55_t2135, t222_m12015_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t222_m12016_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12016_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11156_gshared, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t222_m12016_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t222_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12017_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11158_gshared, &t222_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t222_TI;
extern Il2CppType t2136_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12018_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m11160_gshared, &t222_TI, &t2136_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t222_TI;
extern Il2CppType t860_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12019_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m11162_gshared, &t222_TI, &t860_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t222_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12020_MI = 
{
	"get_Count", (methodPointerType)&m11164_gshared, &t222_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t222_m12021_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12021_MI = 
{
	"set_Item", (methodPointerType)&m11166_gshared, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t222_m12021_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2131_0_0_0;
static ParameterInfo t222_m12022_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t2131_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12022_MI = 
{
	"Init", (methodPointerType)&m11168_gshared, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t222_m12022_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t222_m12023_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12023_MI = 
{
	"InitArrays", (methodPointerType)&m11170_gshared, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t222_m12023_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t222_m12024_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12024_MI = 
{
	"CopyToCheck", (methodPointerType)&m11172_gshared, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t222_m12024_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern Il2CppGenericContainer m25176_IGC;
extern TypeInfo m25176_gp_TRet_0_TI;
Il2CppGenericParamFull m25176_gp_TRet_0_TI_GenericParamFull = { { &m25176_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m25176_gp_TElem_1_TI;
Il2CppGenericParamFull m25176_gp_TElem_1_TI_GenericParamFull = { { &m25176_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m25176_IGPA[2] = 
{
	&m25176_gp_TRet_0_TI_GenericParamFull,
	&m25176_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m25176_MI;
Il2CppGenericContainer m25176_IGC = { { NULL, NULL }, NULL, &m25176_MI, 2, 1, m25176_IGPA };
MethodInfo m25176_MI = 
{
	"Do_CopyTo", NULL, &t222_TI, &t53_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t222_m12025_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t2135_0_0_0;
extern void* RuntimeInvoker_t2135_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12025_MI = 
{
	"make_pair", (methodPointerType)&m12025, &t222_TI, &t2135_0_0_0, RuntimeInvoker_t2135_t7_t7, t222_m12025_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t222_m12026_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12026_MI = 
{
	"pick_value", (methodPointerType)&m11175_gshared, &t222_TI, &t388_0_0_0, RuntimeInvoker_t7_t7_t7, t222_m12026_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2134_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t222_m12027_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2134_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12027_MI = 
{
	"CopyTo", (methodPointerType)&m11177_gshared, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t222_m12027_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern Il2CppGenericContainer m25177_IGC;
extern TypeInfo m25177_gp_TRet_0_TI;
Il2CppGenericParamFull m25177_gp_TRet_0_TI_GenericParamFull = { { &m25177_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m25177_IGPA[1] = 
{
	&m25177_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m25177_MI;
Il2CppGenericContainer m25177_IGC = { { NULL, NULL }, NULL, &m25177_MI, 1, 1, m25177_IGPA };
MethodInfo m25177_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t222_TI, &t53_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12028_MI = 
{
	"Resize", (methodPointerType)&m11179_gshared, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t222_m1754_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m1754_MI = 
{
	"Add", (methodPointerType)&m11180_gshared, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t222_m1754_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 23, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12029_MI = 
{
	"Clear", (methodPointerType)&m11182_gshared, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t222_m12030_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12030_MI = 
{
	"ContainsKey", (methodPointerType)&m11184_gshared, &t222_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t222_m12030_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t222_m12031_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12031_MI = 
{
	"ContainsValue", (methodPointerType)&m11186_gshared, &t222_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t222_m12031_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t732_0_0_0;
extern Il2CppType t733_0_0_0;
static ParameterInfo t222_m12032_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t732_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t733_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t733 (MethodInfo* method, void* obj, void** args);
MethodInfo m12032_MI = 
{
	"GetObjectData", (methodPointerType)&m11188_gshared, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t733, t222_m12032_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t222_m12033_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12033_MI = 
{
	"OnDeserialization", (methodPointerType)&m11190_gshared, &t222_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t222_m12033_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t222_m12034_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12034_MI = 
{
	"Remove", (methodPointerType)&m11192_gshared, &t222_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t222_m12034_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t388_1_0_0;
static ParameterInfo t222_m1751_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_1_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t5337 (MethodInfo* method, void* obj, void** args);
MethodInfo m1751_MI = 
{
	"TryGetValue", (methodPointerType)&m11193_gshared, &t222_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t5337, t222_m1751_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t222_TI;
extern Il2CppType t2133_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12035_MI = 
{
	"get_Values", (methodPointerType)&m11195_gshared, &t222_TI, &t2133_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t222_m12036_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t212_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12036_MI = 
{
	"ToTKey", (methodPointerType)&m11197_gshared, &t222_TI, &t212_0_0_0, RuntimeInvoker_t7_t7, t222_m12036_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t222_m12037_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12037_MI = 
{
	"ToTValue", (methodPointerType)&m11199_gshared, &t222_TI, &t388_0_0_0, RuntimeInvoker_t7_t7, t222_m12037_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2135_0_0_0;
static ParameterInfo t222_m12038_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t2135_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2135 (MethodInfo* method, void* obj, void** args);
MethodInfo m12038_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m12038, &t222_TI, &t55_0_0_0, RuntimeInvoker_t55_t2135, t222_m12038_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t222_TI;
extern Il2CppType t2137_0_0_0;
extern void* RuntimeInvoker_t2137 (MethodInfo* method, void* obj, void** args);
MethodInfo m12039_MI = 
{
	"GetEnumerator", (methodPointerType)&m12039, &t222_TI, &t2137_0_0_0, RuntimeInvoker_t2137, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t222_m12040_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t222_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854_t7_t7 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t859__CustomAttributeCache_m7679;
MethodInfo m12040_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m11203_gshared, &t222_TI, &t854_0_0_0, RuntimeInvoker_t854_t7_t7, t222_m12040_ParameterInfos, &t859__CustomAttributeCache_m7679, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t222_MIs[] =
{
	&m1750_MI,
	&m12005_MI,
	&m12006_MI,
	&m12007_MI,
	&m12008_MI,
	&m12009_MI,
	&m12010_MI,
	&m12011_MI,
	&m12012_MI,
	&m12013_MI,
	&m12014_MI,
	&m12015_MI,
	&m12016_MI,
	&m12017_MI,
	&m12018_MI,
	&m12019_MI,
	&m12020_MI,
	&m12021_MI,
	&m12022_MI,
	&m12023_MI,
	&m12024_MI,
	&m25176_MI,
	&m12025_MI,
	&m12026_MI,
	&m12027_MI,
	&m25177_MI,
	&m12028_MI,
	&m1754_MI,
	&m12029_MI,
	&m12030_MI,
	&m12031_MI,
	&m12032_MI,
	&m12033_MI,
	&m12034_MI,
	&m1751_MI,
	&m12035_MI,
	&m12036_MI,
	&m12037_MI,
	&m12038_MI,
	&m12039_MI,
	&m12040_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m12017_MI;
extern MethodInfo m12032_MI;
extern MethodInfo m12020_MI;
extern MethodInfo m12009_MI;
extern MethodInfo m12010_MI;
extern MethodInfo m12016_MI;
extern MethodInfo m12020_MI;
extern MethodInfo m12011_MI;
extern MethodInfo m12012_MI;
extern MethodInfo m12029_MI;
extern MethodInfo m12013_MI;
extern MethodInfo m12014_MI;
extern MethodInfo m12015_MI;
extern MethodInfo m12018_MI;
extern MethodInfo m12034_MI;
extern MethodInfo m12008_MI;
extern MethodInfo m12019_MI;
extern MethodInfo m12033_MI;
extern MethodInfo m12021_MI;
extern MethodInfo m1754_MI;
extern MethodInfo m12030_MI;
extern MethodInfo m12032_MI;
extern MethodInfo m12033_MI;
extern MethodInfo m1751_MI;
static MethodInfo* t222_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m12017_MI,
	&m12032_MI,
	&m12020_MI,
	&m12009_MI,
	&m12010_MI,
	&m12016_MI,
	&m12020_MI,
	&m12011_MI,
	&m12012_MI,
	&m12029_MI,
	&m12013_MI,
	&m12014_MI,
	&m12015_MI,
	&m12018_MI,
	&m12034_MI,
	&m12008_MI,
	&m12019_MI,
	&m12033_MI,
	&m12021_MI,
	&m1754_MI,
	&m12030_MI,
	&m12032_MI,
	&m12033_MI,
	&m1751_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t396_TI;
extern TypeInfo t669_TI;
extern TypeInfo t4183_TI;
extern TypeInfo t4185_TI;
extern TypeInfo t5338_TI;
extern TypeInfo t756_TI;
extern TypeInfo t1512_TI;
static TypeInfo* t222_ITIs[] = 
{
	&t618_TI,
	&t396_TI,
	&t669_TI,
	&t4183_TI,
	&t4185_TI,
	&t5338_TI,
	&t756_TI,
	&t1512_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t396_TI;
extern TypeInfo t669_TI;
extern TypeInfo t4183_TI;
extern TypeInfo t4185_TI;
extern TypeInfo t5338_TI;
extern TypeInfo t756_TI;
extern TypeInfo t1512_TI;
static Il2CppInterfaceOffsetPair t222_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t396_TI, 5},
	{ &t669_TI, 6},
	{ &t4183_TI, 10},
	{ &t4185_TI, 17},
	{ &t5338_TI, 18},
	{ &t756_TI, 19},
	{ &t1512_TI, 21},
};
extern MethodInfo m12022_MI;
extern MethodInfo m12036_MI;
extern MethodInfo m12037_MI;
extern MethodInfo m12021_MI;
extern MethodInfo m12042_MI;
extern MethodInfo m12044_MI;
extern MethodInfo m1754_MI;
extern MethodInfo m12038_MI;
extern MethodInfo m12027_MI;
extern MethodInfo m12034_MI;
extern TypeInfo t2134_TI;
extern MethodInfo m12024_MI;
extern TypeInfo t222_TI;
extern MethodInfo m12040_MI;
extern TypeInfo t2132_TI;
extern MethodInfo m12202_MI;
extern MethodInfo m18894_MI;
extern MethodInfo m12025_MI;
extern TypeInfo t2155_TI;
extern MethodInfo m12206_MI;
extern MethodInfo m18896_MI;
extern TypeInfo t2137_TI;
extern MethodInfo m12187_MI;
extern TypeInfo t2156_TI;
extern MethodInfo m12210_MI;
extern TypeInfo t212_TI;
extern MethodInfo m25138_MI;
extern MethodInfo m25137_MI;
extern MethodInfo m12028_MI;
extern MethodInfo m11831_MI;
extern MethodInfo m12023_MI;
extern TypeInfo t2099_TI;
extern TypeInfo t2130_TI;
extern MethodInfo m12020_MI;
extern TypeInfo t2135_TI;
extern MethodInfo m12041_MI;
extern MethodInfo m18897_MI;
extern MethodInfo m12219_MI;
extern MethodInfo m25174_MI;
extern TypeInfo t2134_TI;
extern Il2CppType t2131_0_0_0;
extern TypeInfo t2131_TI;
extern Il2CppType t2134_0_0_0;
extern TypeInfo t2133_TI;
extern MethodInfo m12168_MI;
extern Il2CppType t212_0_0_0;
extern Il2CppType t388_0_0_0;
extern TypeInfo t388_TI;
extern MethodInfo m1751_MI;
extern MethodInfo m25175_MI;
static void* t222_RGCTXData[50] = 
{
	&m12022_MI,
	&m12036_MI,
	&m12037_MI,
	&m12021_MI,
	&m12042_MI,
	&m12044_MI,
	&m1754_MI,
	&m12038_MI,
	&m12027_MI,
	&m12034_MI,
	&t2134_TI,
	&m12024_MI,
	&t222_TI,
	&m12040_MI,
	&t2132_TI,
	&m12202_MI,
	&m18894_MI,
	&m12025_MI,
	&t2155_TI,
	&m12206_MI,
	&m18896_MI,
	&t2137_TI,
	&m12187_MI,
	&t2156_TI,
	&m12210_MI,
	&t212_TI,
	&m25138_MI,
	&m25137_MI,
	&m12028_MI,
	&m11831_MI,
	&m12023_MI,
	&t2099_TI,
	&t2130_TI,
	&m12020_MI,
	&t2135_TI,
	&m12041_MI,
	&m18897_MI,
	&m12219_MI,
	&m25174_MI,
	&t2134_TI,
	(void*)&t2131_0_0_0,
	&t2131_TI,
	(void*)&t2134_0_0_0,
	&t2133_TI,
	&m12168_MI,
	(void*)&t212_0_0_0,
	(void*)&t388_0_0_0,
	&t388_TI,
	&m1751_MI,
	&m25175_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t222_0_0_0;
extern Il2CppType t222_1_0_0;
extern TypeInfo t7_TI;
struct t222;
extern TypeInfo t222_TI;
extern Il2CppGenericClass t222_GC;
extern CustomAttributesCache t859__CustomAttributeCache;
extern CustomAttributesCache t859__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t859__CustomAttributeCache_m7679;
TypeInfo t222_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t222_MIs, t222_PIs, t222_FIs, NULL, &t7_TI, NULL, NULL, &t222_TI, t222_ITIs, t222_VT, &t859__CustomAttributeCache, &t222_TI, &t222_0_0_0, &t222_1_0_0, t222_IOs, &t222_GC, NULL, t222_FDVs, NULL, t222_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t222), 0, -1, sizeof(t222_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 41, 7, 16, 0, 0, 28, 8, 8};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4183_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
extern MethodInfo m25178_MI;
static PropertyInfo t4183____Count_PropertyInfo = 
{
	&t4183_TI, "Count", &m25178_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25179_MI;
static PropertyInfo t4183____IsReadOnly_PropertyInfo = 
{
	&t4183_TI, "IsReadOnly", &m25179_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4183_PIs[] =
{
	&t4183____Count_PropertyInfo,
	&t4183____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4183_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25178_MI = 
{
	"get_Count", NULL, &t4183_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4183_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m25179_MI = 
{
	"get_IsReadOnly", NULL, &t4183_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2135_0_0_0;
static ParameterInfo t4183_m25180_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2135_0_0_0},
};
extern TypeInfo t4183_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t2135 (MethodInfo* method, void* obj, void** args);
MethodInfo m25180_MI = 
{
	"Add", NULL, &t4183_TI, &t53_0_0_0, RuntimeInvoker_t53_t2135, t4183_m25180_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4183_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m25181_MI = 
{
	"Clear", NULL, &t4183_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2135_0_0_0;
static ParameterInfo t4183_m25182_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2135_0_0_0},
};
extern TypeInfo t4183_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2135 (MethodInfo* method, void* obj, void** args);
MethodInfo m25182_MI = 
{
	"Contains", NULL, &t4183_TI, &t55_0_0_0, RuntimeInvoker_t55_t2135, t4183_m25182_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2134_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4183_m25183_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2134_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4183_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25183_MI = 
{
	"CopyTo", NULL, &t4183_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4183_m25183_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2135_0_0_0;
static ParameterInfo t4183_m25184_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2135_0_0_0},
};
extern TypeInfo t4183_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2135 (MethodInfo* method, void* obj, void** args);
MethodInfo m25184_MI = 
{
	"Remove", NULL, &t4183_TI, &t55_0_0_0, RuntimeInvoker_t55_t2135, t4183_m25184_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4183_MIs[] =
{
	&m25178_MI,
	&m25179_MI,
	&m25180_MI,
	&m25181_MI,
	&m25182_MI,
	&m25183_MI,
	&m25184_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4185_TI;
static TypeInfo* t4183_ITIs[] = 
{
	&t618_TI,
	&t4185_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4183_0_0_0;
extern Il2CppType t4183_1_0_0;
struct t4183;
extern TypeInfo t4183_TI;
extern Il2CppGenericClass t4183_GC;
TypeInfo t4183_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4183_MIs, t4183_PIs, NULL, NULL, NULL, NULL, NULL, &t4183_TI, t4183_ITIs, NULL, &EmptyCustomAttributesCache, &t4183_TI, &t4183_0_0_0, &t4183_1_0_0, NULL, &t4183_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4185_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
extern TypeInfo t4185_TI;
extern Il2CppType t2136_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25185_MI = 
{
	"GetEnumerator", NULL, &t4185_TI, &t2136_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4185_MIs[] =
{
	&m25185_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4185_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4185_0_0_0;
extern Il2CppType t4185_1_0_0;
struct t4185;
extern TypeInfo t4185_TI;
extern Il2CppGenericClass t4185_GC;
TypeInfo t4185_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4185_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4185_TI, t4185_ITIs, NULL, &EmptyCustomAttributesCache, &t4185_TI, &t4185_0_0_0, &t4185_1_0_0, NULL, &t4185_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2136_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
extern MethodInfo m25186_MI;
static PropertyInfo t2136____Current_PropertyInfo = 
{
	&t2136_TI, "Current", &m25186_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2136_PIs[] =
{
	&t2136____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2136_TI;
extern Il2CppType t2135_0_0_0;
extern void* RuntimeInvoker_t2135 (MethodInfo* method, void* obj, void** args);
MethodInfo m25186_MI = 
{
	"get_Current", NULL, &t2136_TI, &t2135_0_0_0, RuntimeInvoker_t2135, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2136_MIs[] =
{
	&m25186_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t2136_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2136_0_0_0;
extern Il2CppType t2136_1_0_0;
struct t2136;
extern TypeInfo t2136_TI;
extern Il2CppGenericClass t2136_GC;
TypeInfo t2136_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2136_MIs, t2136_PIs, NULL, NULL, NULL, NULL, NULL, &t2136_TI, t2136_ITIs, NULL, &EmptyCustomAttributesCache, &t2136_TI, &t2136_0_0_0, &t2136_1_0_0, NULL, &t2136_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2135_TI;

extern TypeInfo t2135_TI;
extern TypeInfo t463_TI;
extern TypeInfo t34_TI;
extern TypeInfo t212_TI;
extern TypeInfo t7_TI;
extern TypeInfo t388_TI;
extern MethodInfo m12043_MI;
extern MethodInfo m12045_MI;
extern MethodInfo m12042_MI;
extern MethodInfo m123_MI;
extern MethodInfo m12044_MI;
extern MethodInfo m3540_MI;


// Metadata Definition System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t212_0_0_1;
FieldInfo t2135_f0_FieldInfo = 
{
	"key", &t212_0_0_1, &t2135_TI, offsetof(t2135, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t388_0_0_1;
FieldInfo t2135_f1_FieldInfo = 
{
	"value", &t388_0_0_1, &t2135_TI, offsetof(t2135, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2135_FIs[] =
{
	&t2135_f0_FieldInfo,
	&t2135_f1_FieldInfo,
	NULL
};
extern MethodInfo m12042_MI;
extern MethodInfo m12043_MI;
static PropertyInfo t2135____Key_PropertyInfo = 
{
	&t2135_TI, "Key", &m12042_MI, &m12043_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12044_MI;
extern MethodInfo m12045_MI;
static PropertyInfo t2135____Value_PropertyInfo = 
{
	&t2135_TI, "Value", &m12044_MI, &m12045_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2135_PIs[] =
{
	&t2135____Key_PropertyInfo,
	&t2135____Value_PropertyInfo,
	NULL
};
extern Il2CppType t212_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2135_m12041_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2135_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12041_MI = 
{
	".ctor", (methodPointerType)&m11210_gshared, &t2135_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t2135_m12041_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2135_TI;
extern Il2CppType t212_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12042_MI = 
{
	"get_Key", (methodPointerType)&m11211_gshared, &t2135_TI, &t212_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
static ParameterInfo t2135_m12043_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t2135_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12043_MI = 
{
	"set_Key", (methodPointerType)&m11212_gshared, &t2135_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2135_m12043_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2135_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12044_MI = 
{
	"get_Value", (methodPointerType)&m11213_gshared, &t2135_TI, &t388_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2135_m12045_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2135_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12045_MI = 
{
	"set_Value", (methodPointerType)&m11214_gshared, &t2135_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2135_m12045_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2135_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12046_MI = 
{
	"ToString", (methodPointerType)&m11215_gshared, &t2135_TI, &t34_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2135_MIs[] =
{
	&m12041_MI,
	&m12042_MI,
	&m12043_MI,
	&m12044_MI,
	&m12045_MI,
	&m12046_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m12046_MI;
static MethodInfo* t2135_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m12046_MI,
};
extern MethodInfo m12043_MI;
extern MethodInfo m12045_MI;
extern MethodInfo m12042_MI;
extern TypeInfo t212_TI;
extern MethodInfo m12044_MI;
extern TypeInfo t388_TI;
static void* t2135_RGCTXData[6] = 
{
	&m12043_MI,
	&m12045_MI,
	&m12042_MI,
	&t212_TI,
	&m12044_MI,
	&t388_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2135_0_0_0;
extern Il2CppType t2135_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2135_TI;
extern Il2CppGenericClass t2135_GC;
extern CustomAttributesCache t864__CustomAttributeCache;
TypeInfo t2135_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t2135_MIs, t2135_PIs, t2135_FIs, NULL, &t159_TI, NULL, NULL, &t2135_TI, NULL, t2135_VT, &t864__CustomAttributeCache, &t2135_TI, &t2135_0_0_0, &t2135_1_0_0, NULL, &t2135_GC, NULL, NULL, NULL, t2135_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2135)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t388_TI;
#include "t388MD.h"

#include "t386.h"
#include "t1309.h"
extern TypeInfo t388_TI;
extern TypeInfo t219_TI;
extern TypeInfo t60_TI;
extern TypeInfo t207_TI;
extern TypeInfo t386_TI;
extern TypeInfo t55_TI;
extern TypeInfo t53_TI;
extern TypeInfo t2119_TI;
extern TypeInfo t1309_TI;
extern TypeInfo t2118_TI;
extern TypeInfo t62_TI;
extern TypeInfo t2122_TI;
#include "t386MD.h"
#include "t1309MD.h"
extern MethodInfo m1743_MI;
extern MethodInfo m1735_MI;
extern MethodInfo m12092_MI;
extern MethodInfo m11906_MI;
extern MethodInfo m12086_MI;
extern MethodInfo m1727_MI;
extern MethodInfo m12061_MI;
extern MethodInfo m116_MI;
extern MethodInfo m12048_MI;
extern MethodInfo m12088_MI;
extern MethodInfo m1746_MI;
extern MethodInfo m12093_MI;
extern MethodInfo m12056_MI;
extern MethodInfo m7122_MI;
extern MethodInfo m1734_MI;
extern MethodInfo m12087_MI;
extern MethodInfo m11887_MI;
extern MethodInfo m7125_MI;
extern MethodInfo m11899_MI;
extern MethodInfo m12078_MI;
extern MethodInfo m11988_MI;
extern MethodInfo m1755_MI;
extern MethodInfo m1749_MI;


// Metadata Definition UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
extern Il2CppType t219_0_0_33;
FieldInfo t388_f0_FieldInfo = 
{
	"m_List", &t219_0_0_33, &t388_TI, offsetof(t388, f0), &EmptyCustomAttributesCache};
extern Il2CppType t386_0_0_1;
FieldInfo t388_f1_FieldInfo = 
{
	"m_Dictionary", &t386_0_0_1, &t388_TI, offsetof(t388, f1), &EmptyCustomAttributesCache};
static FieldInfo* t388_FIs[] =
{
	&t388_f0_FieldInfo,
	&t388_f1_FieldInfo,
	NULL
};
extern MethodInfo m12052_MI;
static PropertyInfo t388____Count_PropertyInfo = 
{
	&t388_TI, "Count", &m12052_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12053_MI;
static PropertyInfo t388____IsReadOnly_PropertyInfo = 
{
	&t388_TI, "IsReadOnly", &m12053_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12057_MI;
extern MethodInfo m12058_MI;
static PropertyInfo t388____Item_PropertyInfo = 
{
	&t388_TI, "Item", &m12057_MI, &m12058_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t388_PIs[] =
{
	&t388____Count_PropertyInfo,
	&t388____IsReadOnly_PropertyInfo,
	&t388____Item_PropertyInfo,
	NULL
};
extern TypeInfo t388_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m1753_MI = 
{
	".ctor", (methodPointerType)&m10769_gshared, &t388_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t388_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12047_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10771_gshared, &t388_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t388_m1752_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t388_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m1752_MI = 
{
	"Add", (methodPointerType)&m10772_gshared, &t388_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t388_m1752_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t388_m1755_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t388_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m1755_MI = 
{
	"Remove", (methodPointerType)&m10773_gshared, &t388_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t388_m1755_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t388_TI;
extern Il2CppType t2119_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12048_MI = 
{
	"GetEnumerator", (methodPointerType)&m10775_gshared, &t388_TI, &t2119_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 486, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t388_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12049_MI = 
{
	"Clear", (methodPointerType)&m10776_gshared, &t388_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t388_m12050_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t388_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12050_MI = 
{
	"Contains", (methodPointerType)&m10778_gshared, &t388_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t388_m12050_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2118_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t388_m12051_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2118_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t388_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12051_MI = 
{
	"CopyTo", (methodPointerType)&m10780_gshared, &t388_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t388_m12051_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t388_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12052_MI = 
{
	"get_Count", (methodPointerType)&m10781_gshared, &t388_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t388_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12053_MI = 
{
	"get_IsReadOnly", (methodPointerType)&m10783_gshared, &t388_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t388_m12054_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t388_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12054_MI = 
{
	"IndexOf", (methodPointerType)&m10785_gshared, &t388_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t388_m12054_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t388_m12055_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t388_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12055_MI = 
{
	"Insert", (methodPointerType)&m10787_gshared, &t388_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t388_m12055_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t388_m12056_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t388_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12056_MI = 
{
	"RemoveAt", (methodPointerType)&m10789_gshared, &t388_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t388_m12056_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t388_m12057_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t388_TI;
extern Il2CppType t207_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12057_MI = 
{
	"get_Item", (methodPointerType)&m10790_gshared, &t388_TI, &t207_0_0_0, RuntimeInvoker_t7_t60, t388_m12057_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t207_0_0_0;
static ParameterInfo t388_m12058_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t388_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12058_MI = 
{
	"set_Item", (methodPointerType)&m10792_gshared, &t388_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t388_m12058_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2122_0_0_0;
static ParameterInfo t388_m12059_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t2122_0_0_0},
};
extern TypeInfo t388_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12059_MI = 
{
	"RemoveAll", (methodPointerType)&m10793_gshared, &t388_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t388_m12059_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t220_0_0_0;
static ParameterInfo t388_m12060_ParameterInfos[] = 
{
	{"sortLayoutFunction", 0, 134217728, &EmptyCustomAttributesCache, &t220_0_0_0},
};
extern TypeInfo t388_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12060_MI = 
{
	"Sort", (methodPointerType)&m10794_gshared, &t388_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t388_m12060_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t388_MIs[] =
{
	&m1753_MI,
	&m12047_MI,
	&m1752_MI,
	&m1755_MI,
	&m12048_MI,
	&m12049_MI,
	&m12050_MI,
	&m12051_MI,
	&m12052_MI,
	&m12053_MI,
	&m12054_MI,
	&m12055_MI,
	&m12056_MI,
	&m12057_MI,
	&m12058_MI,
	&m12059_MI,
	&m12060_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m12054_MI;
extern MethodInfo m12055_MI;
extern MethodInfo m12056_MI;
extern MethodInfo m12057_MI;
extern MethodInfo m12058_MI;
extern MethodInfo m12052_MI;
extern MethodInfo m12053_MI;
extern MethodInfo m1752_MI;
extern MethodInfo m12049_MI;
extern MethodInfo m12050_MI;
extern MethodInfo m12051_MI;
extern MethodInfo m1755_MI;
extern MethodInfo m12048_MI;
extern MethodInfo m12047_MI;
static MethodInfo* t388_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m12054_MI,
	&m12055_MI,
	&m12056_MI,
	&m12057_MI,
	&m12058_MI,
	&m12052_MI,
	&m12053_MI,
	&m1752_MI,
	&m12049_MI,
	&m12050_MI,
	&m12051_MI,
	&m1755_MI,
	&m12048_MI,
	&m12047_MI,
};
extern TypeInfo t223_TI;
extern TypeInfo t384_TI;
extern TypeInfo t2120_TI;
extern TypeInfo t618_TI;
static TypeInfo* t388_ITIs[] = 
{
	&t223_TI,
	&t384_TI,
	&t2120_TI,
	&t618_TI,
};
extern TypeInfo t223_TI;
extern TypeInfo t384_TI;
extern TypeInfo t2120_TI;
extern TypeInfo t618_TI;
static Il2CppInterfaceOffsetPair t388_IOs[] = 
{
	{ &t223_TI, 4},
	{ &t384_TI, 9},
	{ &t2120_TI, 16},
	{ &t618_TI, 17},
};
extern TypeInfo t219_TI;
extern MethodInfo m1727_MI;
extern TypeInfo t386_TI;
extern MethodInfo m12061_MI;
extern MethodInfo m12048_MI;
extern MethodInfo m12088_MI;
extern MethodInfo m1746_MI;
extern MethodInfo m1743_MI;
extern MethodInfo m12086_MI;
extern MethodInfo m12093_MI;
extern MethodInfo m12056_MI;
extern MethodInfo m1734_MI;
extern MethodInfo m12087_MI;
extern MethodInfo m11887_MI;
extern MethodInfo m1735_MI;
extern MethodInfo m12092_MI;
extern MethodInfo m11899_MI;
extern MethodInfo m11906_MI;
extern MethodInfo m12078_MI;
extern MethodInfo m11988_MI;
extern MethodInfo m1755_MI;
extern MethodInfo m1749_MI;
static void* t388_RGCTXData[22] = 
{
	&t219_TI,
	&m1727_MI,
	&t386_TI,
	&m12061_MI,
	&m12048_MI,
	&m12088_MI,
	&m1746_MI,
	&m1743_MI,
	&m12086_MI,
	&m12093_MI,
	&m12056_MI,
	&m1734_MI,
	&m12087_MI,
	&m11887_MI,
	&m1735_MI,
	&m12092_MI,
	&m11899_MI,
	&m11906_MI,
	&m12078_MI,
	&m11988_MI,
	&m1755_MI,
	&m1749_MI,
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t388_0_0_0;
extern Il2CppType t388_1_0_0;
extern TypeInfo t7_TI;
struct t388;
extern TypeInfo t388_TI;
extern Il2CppGenericClass t388_GC;
extern CustomAttributesCache t323__CustomAttributeCache;
TypeInfo t388_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "IndexedSet`1", "UnityEngine.UI.Collections", t388_MIs, t388_PIs, t388_FIs, NULL, &t7_TI, NULL, NULL, &t388_TI, t388_ITIs, t388_VT, &t323__CustomAttributeCache, &t388_TI, &t388_0_0_0, &t388_1_0_0, t388_IOs, &t388_GC, NULL, NULL, NULL, t388_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t388), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 17, 3, 2, 0, 0, 18, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t386_TI;

#include "t2140.h"
#include "t2142.h"
#include "t2139.h"
#include "t2148.h"
#include "t2144.h"
#include "t2149.h"
#include "t1934.h"
extern TypeInfo t386_TI;
extern TypeInfo t53_TI;
extern TypeInfo t207_TI;
extern TypeInfo t60_TI;
extern TypeInfo t87_TI;
extern TypeInfo t2138_TI;
extern TypeInfo t852_TI;
extern TypeInfo t55_TI;
extern TypeInfo t2140_TI;
extern TypeInfo t2141_TI;
extern TypeInfo t2142_TI;
extern TypeInfo t3020_TI;
extern TypeInfo t854_TI;
extern TypeInfo t2139_TI;
extern TypeInfo t2148_TI;
extern TypeInfo t2144_TI;
extern TypeInfo t2149_TI;
extern TypeInfo t88_TI;
extern TypeInfo t2125_TI;
extern TypeInfo t731_TI;
extern TypeInfo t1476_TI;
extern TypeInfo t2118_TI;
extern TypeInfo t348_TI;
extern TypeInfo t881_TI;
extern TypeInfo t1934_TI;
extern TypeInfo t1917_TI;
extern TypeInfo t70_TI;
extern TypeInfo t34_TI;
#include "t2140MD.h"
#include "t2142MD.h"
#include "t2139MD.h"
#include "t2148MD.h"
#include "t2144MD.h"
#include "t2149MD.h"
#include "t1934MD.h"
extern Il2CppType t2138_0_0_0;
extern Il2CppType t2141_0_0_0;
extern Il2CppType t207_0_0_0;
extern Il2CppType t60_0_0_0;
extern MethodInfo m12095_MI;
extern MethodInfo m12096_MI;
extern MethodInfo m12078_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m25157_MI;
extern MethodInfo m25156_MI;
extern MethodInfo m12085_MI;
extern MethodInfo m12111_MI;
extern MethodInfo m116_MI;
extern MethodInfo m12079_MI;
extern MethodInfo m12101_MI;
extern MethodInfo m12103_MI;
extern MethodInfo m12086_MI;
extern MethodInfo m12097_MI;
extern MethodInfo m12084_MI;
extern MethodInfo m12092_MI;
extern MethodInfo m12081_MI;
extern MethodInfo m12099_MI;
extern MethodInfo m12145_MI;
extern MethodInfo m18865_MI;
extern MethodInfo m12082_MI;
extern MethodInfo m12149_MI;
extern MethodInfo m18867_MI;
extern MethodInfo m12130_MI;
extern MethodInfo m12153_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m11983_MI;
extern MethodInfo m12080_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m2046_MI;
extern MethodInfo m12077_MI;
extern MethodInfo m12100_MI;
extern MethodInfo m18868_MI;
extern MethodInfo m4529_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m3874_MI;
extern MethodInfo m10483_MI;
extern MethodInfo m24581_MI;
extern MethodInfo m5859_MI;
extern MethodInfo m5865_MI;
extern MethodInfo m5868_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m5855_MI;
extern MethodInfo m3964_MI;
extern MethodInfo m1876_MI;
extern MethodInfo m6583_MI;
extern MethodInfo m3933_MI;
extern MethodInfo m12093_MI;
extern MethodInfo m24716_MI;
extern MethodInfo m4471_MI;
struct t386;
 void m18865 (t386 * __this, t3020* p0, int32_t p1, t2139 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18865_MI;
struct t386;
 void m18867 (t386 * __this, t52 * p0, int32_t p1, t2148 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18867_MI;
struct t386;
 void m18868 (t386 * __this, t2141* p0, int32_t p1, t2148 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18868_MI;


extern MethodInfo m12061_MI;
 void m12061 (t386 * __this, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		m12079(__this, ((int32_t)10), (t7*)NULL, &m12079_MI);
		return;
	}
}
extern MethodInfo m12062_MI;
 void m12062 (t386 * __this, t7* p0, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		m12079(__this, ((int32_t)10), p0, &m12079_MI);
		return;
	}
}
extern MethodInfo m12063_MI;
 void m12063 (t386 * __this, int32_t p0, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		m12079(__this, p0, (t7*)NULL, &m12079_MI);
		return;
	}
}
extern MethodInfo m12064_MI;
 void m12064 (t386 * __this, t732 * p0, t733  p1, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		__this->f13 = p0;
		return;
	}
}
extern MethodInfo m12065_MI;
 void m12065 (t386 * __this, t7 * p0, t7 * p1, MethodInfo* method){
	{
		t207 * L_0 = m12095(__this, p0, &m12095_MI);
		int32_t L_1 = m12096(__this, p1, &m12096_MI);
		VirtActionInvoker2< t207 *, int32_t >::Invoke(&m12078_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m12066_MI;
 bool m12066 (t386 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m12067_MI;
 t7 * m12067 (t386 * __this, MethodInfo* method){
	{
		return __this;
	}
}
extern MethodInfo m12068_MI;
 bool m12068 (t386 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m12069_MI;
 void m12069 (t386 * __this, t2142  p0, MethodInfo* method){
	{
		t207 * L_0 = m12101((&p0), &m12101_MI);
		int32_t L_1 = m12103((&p0), &m12103_MI);
		VirtActionInvoker2< t207 *, int32_t >::Invoke(&m12086_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m12070_MI;
 bool m12070 (t386 * __this, t2142  p0, MethodInfo* method){
	{
		bool L_0 = m12097(__this, p0, &m12097_MI);
		return L_0;
	}
}
extern MethodInfo m12071_MI;
 void m12071 (t386 * __this, t2141* p0, int32_t p1, MethodInfo* method){
	{
		m12084(__this, p0, p1, &m12084_MI);
		return;
	}
}
extern MethodInfo m12072_MI;
 bool m12072 (t386 * __this, t2142  p0, MethodInfo* method){
	{
		bool L_0 = m12097(__this, p0, &m12097_MI);
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
		t207 * L_1 = m12101((&p0), &m12101_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t207 * >::Invoke(&m12092_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m12073_MI;
 void m12073 (t386 * __this, t52 * p0, int32_t p1, MethodInfo* method){
	t2141* V_0 = {0};
	t3020* V_1 = {0};
	int32_t G_B5_0 = 0;
	t3020* G_B5_1 = {0};
	t386 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t3020* G_B4_1 = {0};
	t386 * G_B4_2 = {0};
	{
		V_0 = ((t2141*)IsInst(p0, InitializedTypeInfo(&t2141_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		m12084(__this, V_0, p1, &m12084_MI);
		return;
	}

IL_0013:
	{
		m12081(__this, p0, p1, &m12081_MI);
		V_1 = ((t3020*)IsInst(p0, InitializedTypeInfo(&t3020_TI)));
		if (!V_1)
		{
			goto IL_004b;
		}
	}
	{
		G_B4_0 = p1;
		G_B4_1 = V_1;
		G_B4_2 = ((t386 *)(__this));
		if ((((t386_SFs*)InitializedTypeInfo(&t386_TI)->static_fields)->f15))
		{
			G_B5_0 = p1;
			G_B5_1 = V_1;
			G_B5_2 = ((t386 *)(__this));
			goto IL_0040;
		}
	}
	{
		t114 L_0 = { &m12099_MI };
		t2139 * L_1 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m12145(L_1, NULL, L_0, &m12145_MI);
		((t386_SFs*)InitializedTypeInfo(&t386_TI)->static_fields)->f15 = L_1;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t386 *)(G_B4_2));
	}

IL_0040:
	{
		m18865(G_B5_2, G_B5_1, G_B5_0, (((t386_SFs*)InitializedTypeInfo(&t386_TI)->static_fields)->f15), &m18865_MI);
		return;
	}

IL_004b:
	{
		t114 L_2 = { &m12082_MI };
		t2148 * L_3 = (t2148 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2148_TI));
		m12149(L_3, NULL, L_2, &m12149_MI);
		m18867(__this, p0, p1, L_3, &m18867_MI);
		return;
	}
}
extern MethodInfo m12074_MI;
 t7 * m12074 (t386 * __this, MethodInfo* method){
	{
		t2144  L_0 = {0};
		m12130(&L_0, __this, &m12130_MI);
		t2144  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2144_TI), &L_1);
		return (t7 *)L_2;
	}
}
extern MethodInfo m12075_MI;
 t7* m12075 (t386 * __this, MethodInfo* method){
	{
		t2144  L_0 = {0};
		m12130(&L_0, __this, &m12130_MI);
		t2144  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2144_TI), &L_1);
		return (t7*)L_2;
	}
}
extern MethodInfo m12076_MI;
 t7 * m12076 (t386 * __this, MethodInfo* method){
	{
		t2149 * L_0 = (t2149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2149_TI));
		m12153(L_0, __this, &m12153_MI);
		return L_0;
	}
}
extern MethodInfo m12077_MI;
 int32_t m12077 (t386 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m12078_MI;
 void m12078 (t386 * __this, t207 * p0, int32_t p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t207 * L_0 = p0;
		if (((t207 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t87 * L_1 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_1, (t34*) &_stringLiteral539, &m3066_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t7* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t207 * >::Invoke(&m25157_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t731* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_4)->max_length)))));
		t731* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		V_3 = (-1);
		if ((((int32_t)V_2) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		t1476* L_6 = (__this->f5);
		int32_t L_7 = (((t852 *)(t852 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0078;
		}
	}
	{
		t7* L_8 = (__this->f12);
		t2118* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t207 *, t207 * >::Invoke(&m25156_MI, L_8, (*(t207 **)(t207 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
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
		t1476* L_11 = (__this->f5);
		int32_t L_12 = (((t852 *)(t852 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
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
		int32_t L_13 = (__this->f10);
		int32_t L_14 = ((int32_t)(L_13+1));
		V_4 = L_14;
		__this->f10 = L_14;
		int32_t L_15 = (__this->f11);
		if ((((int32_t)V_4) <= ((int32_t)L_15)))
		{
			goto IL_00c9;
		}
	}
	{
		m12085(__this, &m12085_MI);
		t731* L_16 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_16)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_17 = (__this->f9);
		V_2 = L_17;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_18 = (__this->f8);
		int32_t L_19 = L_18;
		V_4 = L_19;
		__this->f8 = ((int32_t)(L_19+1));
		V_2 = V_4;
		goto IL_0101;
	}

IL_00ea:
	{
		t1476* L_20 = (__this->f5);
		int32_t L_21 = (((t852 *)(t852 *)SZArrayLdElema(L_20, V_2))->f1);
		__this->f9 = L_21;
	}

IL_0101:
	{
		t1476* L_22 = (__this->f5);
		t731* L_23 = (__this->f4);
		((t852 *)(t852 *)SZArrayLdElema(L_22, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_23, V_1))-1));
		t731* L_24 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_1)) = (int32_t)((int32_t)(V_2+1));
		t1476* L_25 = (__this->f5);
		((t852 *)(t852 *)SZArrayLdElema(L_25, V_2))->f0 = V_0;
		t2118* L_26 = (__this->f6);
		*((t207 **)(t207 **)SZArrayLdElema(L_26, V_2)) = (t207 *)p0;
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
		t1476* L_27 = (__this->f5);
		t1476* L_28 = (__this->f5);
		int32_t L_29 = (((t852 *)(t852 *)SZArrayLdElema(L_28, V_2))->f1);
		((t852 *)(t852 *)SZArrayLdElema(L_27, V_3))->f1 = L_29;
		t1476* L_30 = (__this->f5);
		t731* L_31 = (__this->f4);
		((t852 *)(t852 *)SZArrayLdElema(L_30, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_31, V_1))-1));
		t731* L_32 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_32, V_1)) = (int32_t)((int32_t)(V_2+1));
	}

IL_0194:
	{
		t731* L_33 = (__this->f7);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_33, V_2)) = (int32_t)p1;
		int32_t L_34 = (__this->f14);
		__this->f14 = ((int32_t)(L_34+1));
		return;
	}
}
extern MethodInfo m12079_MI;
 void m12079 (t386 * __this, int32_t p0, t7* p1, MethodInfo* method){
	t7* V_0 = {0};
	t386 * G_B4_0 = {0};
	t386 * G_B3_0 = {0};
	t7* G_B5_0 = {0};
	t386 * G_B5_1 = {0};
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
		G_B3_0 = ((t386 *)(__this));
		if (!p1)
		{
			G_B4_0 = ((t386 *)(__this));
			goto IL_0018;
		}
	}
	{
		V_0 = p1;
		G_B5_0 = V_0;
		G_B5_1 = ((t386 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2125_TI));
		t2125 * L_1 = m11983(NULL, &m11983_MI);
		G_B5_0 = ((t7*)(L_1));
		G_B5_1 = ((t386 *)(G_B4_0));
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
		m12080(__this, p0, &m12080_MI);
		__this->f14 = 0;
		return;
	}
}
extern MethodInfo m12080_MI;
 void m12080 (t386 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f4 = ((t731*)SZArrayNew(InitializedTypeInfo(&t731_TI), p0));
		__this->f5 = ((t1476*)SZArrayNew(InitializedTypeInfo(&t1476_TI), p0));
		__this->f9 = (-1);
		__this->f6 = ((t2118*)SZArrayNew(InitializedTypeInfo(&t2118_TI), p0));
		__this->f7 = ((t731*)SZArrayNew(InitializedTypeInfo(&t731_TI), p0));
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
extern MethodInfo m12081_MI;
 void m12081 (t386 * __this, t52 * p0, int32_t p1, MethodInfo* method){
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
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m12077_MI, __this);
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
extern MethodInfo m12082_MI;
 t2142  m12082 (t7 * __this, t207 * p0, int32_t p1, MethodInfo* method){
	{
		t2142  L_0 = {0};
		m12100(&L_0, p0, p1, &m12100_MI);
		return L_0;
	}
}
extern MethodInfo m12083_MI;
 int32_t m12083 (t7 * __this, t207 * p0, int32_t p1, MethodInfo* method){
	{
		return p1;
	}
}
extern MethodInfo m12084_MI;
 void m12084 (t386 * __this, t2141* p0, int32_t p1, MethodInfo* method){
	{
		m12081(__this, (t52 *)(t52 *)p0, p1, &m12081_MI);
		t114 L_0 = { &m12082_MI };
		t2148 * L_1 = (t2148 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2148_TI));
		m12149(L_1, NULL, L_0, &m12149_MI);
		m18868(__this, p0, p1, L_1, &m18868_MI);
		return;
	}
}
extern MethodInfo m12085_MI;
 void m12085 (t386 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t731* V_1 = {0};
	t1476* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t2118* V_7 = {0};
	t731* V_8 = {0};
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
		t2118* L_4 = (__this->f6);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t207 * >::Invoke(&m25157_MI, L_3, (*(t207 **)(t207 **)SZArrayLdElema(L_4, V_4)));
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
		V_7 = ((t2118*)SZArrayNew(InitializedTypeInfo(&t2118_TI), V_0));
		V_8 = ((t731*)SZArrayNew(InitializedTypeInfo(&t731_TI), V_0));
		t2118* L_10 = (__this->f6);
		int32_t L_11 = (__this->f8);
		m3878(NULL, (t52 *)(t52 *)L_10, 0, (t52 *)(t52 *)V_7, 0, L_11, &m3878_MI);
		t731* L_12 = (__this->f7);
		int32_t L_13 = (__this->f8);
		m3878(NULL, (t52 *)(t52 *)L_12, 0, (t52 *)(t52 *)V_8, 0, L_13, &m3878_MI);
		__this->f6 = V_7;
		__this->f7 = V_8;
		__this->f11 = (((int32_t)((float)((((float)V_0))*(0.9f)))));
		return;
	}
}
extern MethodInfo m12086_MI;
 void m12086 (t386 * __this, t207 * p0, int32_t p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t207 * L_0 = p0;
		if (((t207 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t87 * L_1 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_1, (t34*) &_stringLiteral539, &m3066_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t7* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t207 * >::Invoke(&m25157_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t731* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_4)->max_length)))));
		t731* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		goto IL_008f;
	}

IL_0044:
	{
		t1476* L_6 = (__this->f5);
		int32_t L_7 = (((t852 *)(t852 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		t7* L_8 = (__this->f12);
		t2118* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t207 *, t207 * >::Invoke(&m25156_MI, L_8, (*(t207 **)(t207 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		t348 * L_11 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m2046(L_11, (t34*) &_stringLiteral544, &m2046_MI);
		il2cpp_codegen_raise_exception (L_11);
	}

IL_007d:
	{
		t1476* L_12 = (__this->f5);
		int32_t L_13 = (((t852 *)(t852 *)SZArrayLdElema(L_12, V_2))->f1);
		V_2 = L_13;
	}

IL_008f:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_14 = (__this->f10);
		int32_t L_15 = ((int32_t)(L_14+1));
		V_3 = L_15;
		__this->f10 = L_15;
		int32_t L_16 = (__this->f11);
		if ((((int32_t)V_3) <= ((int32_t)L_16)))
		{
			goto IL_00c3;
		}
	}
	{
		m12085(__this, &m12085_MI);
		t731* L_17 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_17)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_18 = (__this->f9);
		V_2 = L_18;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_19 = (__this->f8);
		int32_t L_20 = L_19;
		V_3 = L_20;
		__this->f8 = ((int32_t)(L_20+1));
		V_2 = V_3;
		goto IL_00f9;
	}

IL_00e2:
	{
		t1476* L_21 = (__this->f5);
		int32_t L_22 = (((t852 *)(t852 *)SZArrayLdElema(L_21, V_2))->f1);
		__this->f9 = L_22;
	}

IL_00f9:
	{
		t1476* L_23 = (__this->f5);
		((t852 *)(t852 *)SZArrayLdElema(L_23, V_2))->f0 = V_0;
		t1476* L_24 = (__this->f5);
		t731* L_25 = (__this->f4);
		((t852 *)(t852 *)SZArrayLdElema(L_24, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_25, V_1))-1));
		t731* L_26 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_26, V_1)) = (int32_t)((int32_t)(V_2+1));
		t2118* L_27 = (__this->f6);
		*((t207 **)(t207 **)SZArrayLdElema(L_27, V_2)) = (t207 *)p0;
		t731* L_28 = (__this->f7);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_28, V_2)) = (int32_t)p1;
		int32_t L_29 = (__this->f14);
		__this->f14 = ((int32_t)(L_29+1));
		return;
	}
}
extern MethodInfo m12087_MI;
 void m12087 (t386 * __this, MethodInfo* method){
	{
		__this->f10 = 0;
		t731* L_0 = (__this->f4);
		t731* L_1 = (__this->f4);
		m3874(NULL, (t52 *)(t52 *)L_0, 0, (((int32_t)(((t52 *)L_1)->max_length))), &m3874_MI);
		t2118* L_2 = (__this->f6);
		t2118* L_3 = (__this->f6);
		m3874(NULL, (t52 *)(t52 *)L_2, 0, (((int32_t)(((t52 *)L_3)->max_length))), &m3874_MI);
		t731* L_4 = (__this->f7);
		t731* L_5 = (__this->f7);
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
extern MethodInfo m12088_MI;
 bool m12088 (t386 * __this, t207 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t207 * L_0 = p0;
		if (((t207 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t87 * L_1 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_1, (t34*) &_stringLiteral539, &m3066_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t7* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t207 * >::Invoke(&m25157_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t731* L_4 = (__this->f4);
		t731* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_5)->max_length)))))))-1));
		goto IL_0084;
	}

IL_0042:
	{
		t1476* L_6 = (__this->f5);
		int32_t L_7 = (((t852 *)(t852 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0072;
		}
	}
	{
		t7* L_8 = (__this->f12);
		t2118* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t207 *, t207 * >::Invoke(&m25156_MI, L_8, (*(t207 **)(t207 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		t1476* L_11 = (__this->f5);
		int32_t L_12 = (((t852 *)(t852 *)SZArrayLdElema(L_11, V_1))->f1);
		V_1 = L_12;
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
extern MethodInfo m12089_MI;
 bool m12089 (t386 * __this, int32_t p0, MethodInfo* method){
	t7* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1934_TI));
		t1934 * L_0 = m10483(NULL, &m10483_MI);
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
		t731* L_2 = (__this->f7);
		bool L_3 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m24581_MI, V_0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, V_2)), p0);
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
extern MethodInfo m12090_MI;
 void m12090 (t386 * __this, t732 * p0, t733  p1, MethodInfo* method){
	t2141* V_0 = {0};
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
		V_0 = (t2141*)NULL;
		int32_t L_3 = (__this->f10);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_4 = (__this->f10);
		V_0 = ((t2141*)SZArrayNew(InitializedTypeInfo(&t2141_TI), L_4));
		m12084(__this, V_0, 0, &m12084_MI);
	}

IL_004f:
	{
		t731* L_5 = (__this->f4);
		m5859(p0, (t34*) &_stringLiteral547, (((int32_t)(((t52 *)L_5)->max_length))), &m5859_MI);
		m5865(p0, (t34*) &_stringLiteral548, (t7 *)(t7 *)V_0, &m5865_MI);
		return;
	}
}
extern MethodInfo m12091_MI;
 void m12091 (t386 * __this, t7 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	t2141* V_1 = {0};
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
		t70 * L_4 = m1675(NULL, LoadTypeToken(&t2138_0_0_0), &m1675_MI);
		t7 * L_5 = m5855(L_3, (t34*) &_stringLiteral546, L_4, &m5855_MI);
		__this->f12 = ((t7*)Castclass(L_5, InitializedTypeInfo(&t2138_TI)));
		t732 * L_6 = (__this->f13);
		int32_t L_7 = m5868(L_6, (t34*) &_stringLiteral547, &m5868_MI);
		V_0 = L_7;
		t732 * L_8 = (__this->f13);
		t70 * L_9 = m1675(NULL, LoadTypeToken(&t2141_0_0_0), &m1675_MI);
		t7 * L_10 = m5855(L_8, (t34*) &_stringLiteral548, L_9, &m5855_MI);
		V_1 = ((t2141*)Castclass(L_10, InitializedTypeInfo(&t2141_TI)));
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
		m12080(__this, V_0, &m12080_MI);
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
		t207 * L_11 = m12101(((t2142 *)(t2142 *)SZArrayLdElema(V_1, V_2)), &m12101_MI);
		int32_t L_12 = m12103(((t2142 *)(t2142 *)SZArrayLdElema(V_1, V_2)), &m12103_MI);
		VirtActionInvoker2< t207 *, int32_t >::Invoke(&m12086_MI, __this, L_11, L_12);
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
extern MethodInfo m12092_MI;
 bool m12092 (t386 * __this, t207 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t207 * V_4 = {0};
	int32_t V_5 = 0;
	{
		t207 * L_0 = p0;
		if (((t207 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t87 * L_1 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_1, (t34*) &_stringLiteral539, &m3066_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t7* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t207 * >::Invoke(&m25157_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t731* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_4)->max_length)))));
		t731* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
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
		t1476* L_6 = (__this->f5);
		int32_t L_7 = (((t852 *)(t852 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007a;
		}
	}
	{
		t7* L_8 = (__this->f12);
		t2118* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t207 *, t207 * >::Invoke(&m25156_MI, L_8, (*(t207 **)(t207 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
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
		t1476* L_11 = (__this->f5);
		int32_t L_12 = (((t852 *)(t852 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
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
		int32_t L_13 = (__this->f10);
		__this->f10 = ((int32_t)(L_13-1));
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_00c7;
		}
	}
	{
		t731* L_14 = (__this->f4);
		t1476* L_15 = (__this->f5);
		int32_t L_16 = (((t852 *)(t852 *)SZArrayLdElema(L_15, V_2))->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_14, V_1)) = (int32_t)((int32_t)(L_16+1));
		goto IL_00e9;
	}

IL_00c7:
	{
		t1476* L_17 = (__this->f5);
		t1476* L_18 = (__this->f5);
		int32_t L_19 = (((t852 *)(t852 *)SZArrayLdElema(L_18, V_2))->f1);
		((t852 *)(t852 *)SZArrayLdElema(L_17, V_3))->f1 = L_19;
	}

IL_00e9:
	{
		t1476* L_20 = (__this->f5);
		int32_t L_21 = (__this->f9);
		((t852 *)(t852 *)SZArrayLdElema(L_20, V_2))->f1 = L_21;
		__this->f9 = V_2;
		t1476* L_22 = (__this->f5);
		((t852 *)(t852 *)SZArrayLdElema(L_22, V_2))->f0 = 0;
		t2118* L_23 = (__this->f6);
		Initobj (&t207_TI, (&V_4));
		*((t207 **)(t207 **)SZArrayLdElema(L_23, V_2)) = (t207 *)V_4;
		t731* L_24 = (__this->f7);
		Initobj (&t60_TI, (&V_5));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_2)) = (int32_t)V_5;
		int32_t L_25 = (__this->f14);
		__this->f14 = ((int32_t)(L_25+1));
		return 1;
	}
}
extern MethodInfo m12093_MI;
 bool m12093 (t386 * __this, t207 * p0, int32_t* p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		t207 * L_0 = p0;
		if (((t207 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t87 * L_1 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_1, (t34*) &_stringLiteral539, &m3066_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t7* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t207 * >::Invoke(&m25157_MI, L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t731* L_4 = (__this->f4);
		t731* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t52 *)L_5)->max_length)))))))-1));
		goto IL_0096;
	}

IL_0042:
	{
		t1476* L_6 = (__this->f5);
		int32_t L_7 = (((t852 *)(t852 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0084;
		}
	}
	{
		t7* L_8 = (__this->f12);
		t2118* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t207 *, t207 * >::Invoke(&m25156_MI, L_8, (*(t207 **)(t207 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0084;
		}
	}
	{
		t731* L_11 = (__this->f7);
		*p1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, V_1));
		return 1;
	}

IL_0084:
	{
		t1476* L_12 = (__this->f5);
		int32_t L_13 = (((t852 *)(t852 *)SZArrayLdElema(L_12, V_1))->f1);
		V_1 = L_13;
	}

IL_0096:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		Initobj (&t60_TI, (&V_2));
		*p1 = V_2;
		return 0;
	}
}
extern MethodInfo m12094_MI;
 t2140 * m12094 (t386 * __this, MethodInfo* method){
	{
		t2140 * L_0 = (t2140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2140_TI));
		m12111(L_0, __this, &m12111_MI);
		return L_0;
	}
}
extern MethodInfo m12095_MI;
 t207 * m12095 (t386 * __this, t7 * p0, MethodInfo* method){
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
		if (((t207 *)IsInst(p0, InitializedTypeInfo(&t207_TI))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
		t70 * L_1 = m1675(NULL, LoadTypeToken(&t207_0_0_0), &m1675_MI);
		t34* L_2 = (t34*)VirtFuncInvoker0< t34* >::Invoke(&m3964_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		t34* L_3 = m1876(NULL, (t34*) &_stringLiteral549, L_2, &m1876_MI);
		t348 * L_4 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m6583(L_4, L_3, (t34*) &_stringLiteral539, &m6583_MI);
		il2cpp_codegen_raise_exception (L_4);
	}

IL_003a:
	{
		return ((t207 *)Castclass(p0, InitializedTypeInfo(&t207_TI)));
	}
}
extern MethodInfo m12096_MI;
 int32_t m12096 (t386 * __this, t7 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		if (p0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
		t70 * L_0 = m1675(NULL, LoadTypeToken(&t60_0_0_0), &m1675_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3933_MI, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (&t60_TI, (&V_0));
		return V_0;
	}

IL_001e:
	{
		if (((t7 *)IsInst(p0, InitializedTypeInfo(&t60_TI))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t70_TI));
		t70 * L_2 = m1675(NULL, LoadTypeToken(&t60_0_0_0), &m1675_MI);
		t34* L_3 = (t34*)VirtFuncInvoker0< t34* >::Invoke(&m3964_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t34_TI));
		t34* L_4 = m1876(NULL, (t34*) &_stringLiteral549, L_3, &m1876_MI);
		t348 * L_5 = (t348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t348_TI));
		m6583(L_5, L_4, (t34*) &_stringLiteral245, &m6583_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_004a:
	{
		return ((*(int32_t*)((int32_t*)UnBox (p0, InitializedTypeInfo(&t60_TI)))));
	}
}
extern MethodInfo m12097_MI;
 bool m12097 (t386 * __this, t2142  p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t207 * L_0 = m12101((&p0), &m12101_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t207 *, int32_t* >::Invoke(&m12093_MI, __this, L_0, (&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1934_TI));
		t1934 * L_2 = m10483(NULL, &m10483_MI);
		int32_t L_3 = m12103((&p0), &m12103_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(&m24716_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m12098_MI;
 t2144  m12098 (t386 * __this, MethodInfo* method){
	{
		t2144  L_0 = {0};
		m12130(&L_0, __this, &m12130_MI);
		return L_0;
	}
}
extern MethodInfo m12099_MI;
 t854  m12099 (t7 * __this, t207 * p0, int32_t p1, MethodInfo* method){
	{
		t207 * L_0 = p0;
		int32_t L_1 = p1;
		t7 * L_2 = Box(InitializedTypeInfo(&t60_TI), &L_1);
		t854  L_3 = {0};
		m4471(&L_3, ((t207 *)L_0), L_2, &m4471_MI);
		return L_3;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>
extern Il2CppType t60_0_0_32849;
FieldInfo t386_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t60_0_0_32849, &t386_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t54_0_0_32849;
FieldInfo t386_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t54_0_0_32849, &t386_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_32849;
FieldInfo t386_f2_FieldInfo = 
{
	"NO_SLOT", &t60_0_0_32849, &t386_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_32849;
FieldInfo t386_f3_FieldInfo = 
{
	"HASH_FLAG", &t60_0_0_32849, &t386_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t731_0_0_1;
FieldInfo t386_f4_FieldInfo = 
{
	"table", &t731_0_0_1, &t386_TI, offsetof(t386, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1476_0_0_1;
FieldInfo t386_f5_FieldInfo = 
{
	"linkSlots", &t1476_0_0_1, &t386_TI, offsetof(t386, f5), &EmptyCustomAttributesCache};
extern Il2CppType t2118_0_0_1;
FieldInfo t386_f6_FieldInfo = 
{
	"keySlots", &t2118_0_0_1, &t386_TI, offsetof(t386, f6), &EmptyCustomAttributesCache};
extern Il2CppType t731_0_0_1;
FieldInfo t386_f7_FieldInfo = 
{
	"valueSlots", &t731_0_0_1, &t386_TI, offsetof(t386, f7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t386_f8_FieldInfo = 
{
	"touchedSlots", &t60_0_0_1, &t386_TI, offsetof(t386, f8), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t386_f9_FieldInfo = 
{
	"emptySlot", &t60_0_0_1, &t386_TI, offsetof(t386, f9), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t386_f10_FieldInfo = 
{
	"count", &t60_0_0_1, &t386_TI, offsetof(t386, f10), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t386_f11_FieldInfo = 
{
	"threshold", &t60_0_0_1, &t386_TI, offsetof(t386, f11), &EmptyCustomAttributesCache};
extern Il2CppType t2138_0_0_1;
FieldInfo t386_f12_FieldInfo = 
{
	"hcp", &t2138_0_0_1, &t386_TI, offsetof(t386, f12), &EmptyCustomAttributesCache};
extern Il2CppType t732_0_0_1;
FieldInfo t386_f13_FieldInfo = 
{
	"serialization_info", &t732_0_0_1, &t386_TI, offsetof(t386, f13), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t386_f14_FieldInfo = 
{
	"generation", &t60_0_0_1, &t386_TI, offsetof(t386, f14), &EmptyCustomAttributesCache};
extern Il2CppType t2139_0_0_17;
extern CustomAttributesCache t859__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t386_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t2139_0_0_17, &t386_TI, offsetof(t386_SFs, f15), &t859__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t386_FIs[] =
{
	&t386_f0_FieldInfo,
	&t386_f1_FieldInfo,
	&t386_f2_FieldInfo,
	&t386_f3_FieldInfo,
	&t386_f4_FieldInfo,
	&t386_f5_FieldInfo,
	&t386_f6_FieldInfo,
	&t386_f7_FieldInfo,
	&t386_f8_FieldInfo,
	&t386_f9_FieldInfo,
	&t386_f10_FieldInfo,
	&t386_f11_FieldInfo,
	&t386_f12_FieldInfo,
	&t386_f13_FieldInfo,
	&t386_f14_FieldInfo,
	&t386_f15_FieldInfo,
	NULL
};
static const int32_t t386_f0_DefaultValueData = 10;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t386_f0_DefaultValue = 
{
	&t386_f0_FieldInfo, { (char*)&t386_f0_DefaultValueData, &t60_0_0_0 }};
static const float t386_f1_DefaultValueData = 0.9f;
extern Il2CppType t54_0_0_0;
static Il2CppFieldDefaultValueEntry t386_f1_DefaultValue = 
{
	&t386_f1_FieldInfo, { (char*)&t386_f1_DefaultValueData, &t54_0_0_0 }};
static const int32_t t386_f2_DefaultValueData = -1;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t386_f2_DefaultValue = 
{
	&t386_f2_FieldInfo, { (char*)&t386_f2_DefaultValueData, &t60_0_0_0 }};
static const int32_t t386_f3_DefaultValueData = -2147483648;
extern Il2CppType t60_0_0_0;
static Il2CppFieldDefaultValueEntry t386_f3_DefaultValue = 
{
	&t386_f3_FieldInfo, { (char*)&t386_f3_DefaultValueData, &t60_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t386_FDVs[] = 
{
	&t386_f0_DefaultValue,
	&t386_f1_DefaultValue,
	&t386_f2_DefaultValue,
	&t386_f3_DefaultValue,
	NULL
};
extern MethodInfo m12065_MI;
static PropertyInfo t386____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t386_TI, "System.Collections.IDictionary.Item", NULL, &m12065_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12066_MI;
static PropertyInfo t386____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t386_TI, "System.Collections.ICollection.IsSynchronized", &m12066_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12067_MI;
static PropertyInfo t386____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t386_TI, "System.Collections.ICollection.SyncRoot", &m12067_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12068_MI;
static PropertyInfo t386____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t386_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m12068_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12077_MI;
static PropertyInfo t386____Count_PropertyInfo = 
{
	&t386_TI, "Count", &m12077_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12078_MI;
static PropertyInfo t386____Item_PropertyInfo = 
{
	&t386_TI, "Item", NULL, &m12078_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12094_MI;
static PropertyInfo t386____Values_PropertyInfo = 
{
	&t386_TI, "Values", &m12094_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t386_PIs[] =
{
	&t386____System_Collections_IDictionary_Item_PropertyInfo,
	&t386____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t386____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t386____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t386____Count_PropertyInfo,
	&t386____Item_PropertyInfo,
	&t386____Values_PropertyInfo,
	NULL
};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12061_MI = 
{
	".ctor", (methodPointerType)&m12061, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2138_0_0_0;
static ParameterInfo t386_m12062_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t2138_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12062_MI = 
{
	".ctor", (methodPointerType)&m12062, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t386_m12062_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t386_m12063_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12063_MI = 
{
	".ctor", (methodPointerType)&m12063, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t386_m12063_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t732_0_0_0;
extern Il2CppType t733_0_0_0;
static ParameterInfo t386_m12064_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t732_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t733_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t733 (MethodInfo* method, void* obj, void** args);
MethodInfo m12064_MI = 
{
	".ctor", (methodPointerType)&m12064, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t733, t386_m12064_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t386_m12065_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12065_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m12065, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t7, t386_m12065_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t386_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12066_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m12066, &t386_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t386_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12067_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m12067, &t386_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t386_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12068_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m12068, &t386_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2142_0_0_0;
static ParameterInfo t386_m12069_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2142_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t2142 (MethodInfo* method, void* obj, void** args);
MethodInfo m12069_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m12069, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53_t2142, t386_m12069_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2142_0_0_0;
static ParameterInfo t386_m12070_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2142_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2142 (MethodInfo* method, void* obj, void** args);
MethodInfo m12070_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m12070, &t386_TI, &t55_0_0_0, RuntimeInvoker_t55_t2142, t386_m12070_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2141_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t386_m12071_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2141_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12071_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m12071, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t386_m12071_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2142_0_0_0;
static ParameterInfo t386_m12072_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t2142_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2142 (MethodInfo* method, void* obj, void** args);
MethodInfo m12072_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m12072, &t386_TI, &t55_0_0_0, RuntimeInvoker_t55_t2142, t386_m12072_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t386_m12073_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12073_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m12073, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t386_m12073_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t386_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12074_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m12074, &t386_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t386_TI;
extern Il2CppType t2143_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12075_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m12075, &t386_TI, &t2143_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t386_TI;
extern Il2CppType t860_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12076_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m12076, &t386_TI, &t860_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t386_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12077_MI = 
{
	"get_Count", (methodPointerType)&m12077, &t386_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t386_m12078_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12078_MI = 
{
	"set_Item", (methodPointerType)&m12078, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t386_m12078_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2138_0_0_0;
static ParameterInfo t386_m12079_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t2138_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12079_MI = 
{
	"Init", (methodPointerType)&m12079, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t386_m12079_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t386_m12080_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12080_MI = 
{
	"InitArrays", (methodPointerType)&m12080, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t386_m12080_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t386_m12081_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12081_MI = 
{
	"CopyToCheck", (methodPointerType)&m12081, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t386_m12081_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern Il2CppGenericContainer m25187_IGC;
extern TypeInfo m25187_gp_TRet_0_TI;
Il2CppGenericParamFull m25187_gp_TRet_0_TI_GenericParamFull = { { &m25187_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m25187_gp_TElem_1_TI;
Il2CppGenericParamFull m25187_gp_TElem_1_TI_GenericParamFull = { { &m25187_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m25187_IGPA[2] = 
{
	&m25187_gp_TRet_0_TI_GenericParamFull,
	&m25187_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m25187_MI;
Il2CppGenericContainer m25187_IGC = { { NULL, NULL }, NULL, &m25187_MI, 2, 1, m25187_IGPA };
MethodInfo m25187_MI = 
{
	"Do_CopyTo", NULL, &t386_TI, &t53_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t386_m12082_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t2142_0_0_0;
extern void* RuntimeInvoker_t2142_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12082_MI = 
{
	"make_pair", (methodPointerType)&m12082, &t386_TI, &t2142_0_0_0, RuntimeInvoker_t2142_t7_t60, t386_m12082_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t386_m12083_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12083_MI = 
{
	"pick_value", (methodPointerType)&m12083, &t386_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t60, t386_m12083_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2141_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t386_m12084_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2141_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12084_MI = 
{
	"CopyTo", (methodPointerType)&m12084, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t386_m12084_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern Il2CppGenericContainer m25188_IGC;
extern TypeInfo m25188_gp_TRet_0_TI;
Il2CppGenericParamFull m25188_gp_TRet_0_TI_GenericParamFull = { { &m25188_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m25188_IGPA[1] = 
{
	&m25188_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m25188_MI;
Il2CppGenericContainer m25188_IGC = { { NULL, NULL }, NULL, &m25188_MI, 1, 1, m25188_IGPA };
MethodInfo m25188_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t386_TI, &t53_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12085_MI = 
{
	"Resize", (methodPointerType)&m12085, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t386_m12086_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12086_MI = 
{
	"Add", (methodPointerType)&m12086, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t386_m12086_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 23, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12087_MI = 
{
	"Clear", (methodPointerType)&m12087, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t386_m12088_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12088_MI = 
{
	"ContainsKey", (methodPointerType)&m12088, &t386_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t386_m12088_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t386_m12089_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12089_MI = 
{
	"ContainsValue", (methodPointerType)&m12089, &t386_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t386_m12089_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t732_0_0_0;
extern Il2CppType t733_0_0_0;
static ParameterInfo t386_m12090_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t732_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t733_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t733 (MethodInfo* method, void* obj, void** args);
MethodInfo m12090_MI = 
{
	"GetObjectData", (methodPointerType)&m12090, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t733, t386_m12090_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t386_m12091_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12091_MI = 
{
	"OnDeserialization", (methodPointerType)&m12091, &t386_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t386_m12091_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t386_m12092_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12092_MI = 
{
	"Remove", (methodPointerType)&m12092, &t386_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t386_m12092_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t60_1_0_0;
static ParameterInfo t386_m12093_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_1_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t410 (MethodInfo* method, void* obj, void** args);
MethodInfo m12093_MI = 
{
	"TryGetValue", (methodPointerType)&m12093, &t386_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t410, t386_m12093_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t386_TI;
extern Il2CppType t2140_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12094_MI = 
{
	"get_Values", (methodPointerType)&m12094, &t386_TI, &t2140_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t386_m12095_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t207_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12095_MI = 
{
	"ToTKey", (methodPointerType)&m12095, &t386_TI, &t207_0_0_0, RuntimeInvoker_t7_t7, t386_m12095_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t386_m12096_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12096_MI = 
{
	"ToTValue", (methodPointerType)&m12096, &t386_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t386_m12096_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2142_0_0_0;
static ParameterInfo t386_m12097_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t2142_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2142 (MethodInfo* method, void* obj, void** args);
MethodInfo m12097_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m12097, &t386_TI, &t55_0_0_0, RuntimeInvoker_t55_t2142, t386_m12097_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t386_TI;
extern Il2CppType t2144_0_0_0;
extern void* RuntimeInvoker_t2144 (MethodInfo* method, void* obj, void** args);
MethodInfo m12098_MI = 
{
	"GetEnumerator", (methodPointerType)&m12098, &t386_TI, &t2144_0_0_0, RuntimeInvoker_t2144, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t386_m12099_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t386_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854_t7_t60 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t859__CustomAttributeCache_m7679;
MethodInfo m12099_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m12099, &t386_TI, &t854_0_0_0, RuntimeInvoker_t854_t7_t60, t386_m12099_ParameterInfos, &t859__CustomAttributeCache_m7679, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t386_MIs[] =
{
	&m12061_MI,
	&m12062_MI,
	&m12063_MI,
	&m12064_MI,
	&m12065_MI,
	&m12066_MI,
	&m12067_MI,
	&m12068_MI,
	&m12069_MI,
	&m12070_MI,
	&m12071_MI,
	&m12072_MI,
	&m12073_MI,
	&m12074_MI,
	&m12075_MI,
	&m12076_MI,
	&m12077_MI,
	&m12078_MI,
	&m12079_MI,
	&m12080_MI,
	&m12081_MI,
	&m25187_MI,
	&m12082_MI,
	&m12083_MI,
	&m12084_MI,
	&m25188_MI,
	&m12085_MI,
	&m12086_MI,
	&m12087_MI,
	&m12088_MI,
	&m12089_MI,
	&m12090_MI,
	&m12091_MI,
	&m12092_MI,
	&m12093_MI,
	&m12094_MI,
	&m12095_MI,
	&m12096_MI,
	&m12097_MI,
	&m12098_MI,
	&m12099_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m12074_MI;
extern MethodInfo m12090_MI;
extern MethodInfo m12077_MI;
extern MethodInfo m12066_MI;
extern MethodInfo m12067_MI;
extern MethodInfo m12073_MI;
extern MethodInfo m12077_MI;
extern MethodInfo m12068_MI;
extern MethodInfo m12069_MI;
extern MethodInfo m12087_MI;
extern MethodInfo m12070_MI;
extern MethodInfo m12071_MI;
extern MethodInfo m12072_MI;
extern MethodInfo m12075_MI;
extern MethodInfo m12092_MI;
extern MethodInfo m12065_MI;
extern MethodInfo m12076_MI;
extern MethodInfo m12091_MI;
extern MethodInfo m12078_MI;
extern MethodInfo m12086_MI;
extern MethodInfo m12088_MI;
extern MethodInfo m12090_MI;
extern MethodInfo m12091_MI;
extern MethodInfo m12093_MI;
static MethodInfo* t386_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m12074_MI,
	&m12090_MI,
	&m12077_MI,
	&m12066_MI,
	&m12067_MI,
	&m12073_MI,
	&m12077_MI,
	&m12068_MI,
	&m12069_MI,
	&m12087_MI,
	&m12070_MI,
	&m12071_MI,
	&m12072_MI,
	&m12075_MI,
	&m12092_MI,
	&m12065_MI,
	&m12076_MI,
	&m12091_MI,
	&m12078_MI,
	&m12086_MI,
	&m12088_MI,
	&m12090_MI,
	&m12091_MI,
	&m12093_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t396_TI;
extern TypeInfo t669_TI;
extern TypeInfo t4180_TI;
extern TypeInfo t4182_TI;
extern TypeInfo t5339_TI;
extern TypeInfo t756_TI;
extern TypeInfo t1512_TI;
static TypeInfo* t386_ITIs[] = 
{
	&t618_TI,
	&t396_TI,
	&t669_TI,
	&t4180_TI,
	&t4182_TI,
	&t5339_TI,
	&t756_TI,
	&t1512_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t396_TI;
extern TypeInfo t669_TI;
extern TypeInfo t4180_TI;
extern TypeInfo t4182_TI;
extern TypeInfo t5339_TI;
extern TypeInfo t756_TI;
extern TypeInfo t1512_TI;
static Il2CppInterfaceOffsetPair t386_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t396_TI, 5},
	{ &t669_TI, 6},
	{ &t4180_TI, 10},
	{ &t4182_TI, 17},
	{ &t5339_TI, 18},
	{ &t756_TI, 19},
	{ &t1512_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t386_0_0_0;
extern Il2CppType t386_1_0_0;
extern TypeInfo t7_TI;
struct t386;
extern TypeInfo t386_TI;
extern Il2CppGenericClass t386_GC;
extern CustomAttributesCache t859__CustomAttributeCache;
extern CustomAttributesCache t859__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t859__CustomAttributeCache_m7679;
TypeInfo t386_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t386_MIs, t386_PIs, t386_FIs, NULL, &t7_TI, NULL, NULL, &t386_TI, t386_ITIs, t386_VT, &t859__CustomAttributeCache, &t386_TI, &t386_0_0_0, &t386_1_0_0, t386_IOs, &t386_GC, NULL, t386_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t386), 0, -1, sizeof(t386_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 41, 7, 16, 0, 0, 28, 8, 8};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4180_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
extern MethodInfo m25189_MI;
static PropertyInfo t4180____Count_PropertyInfo = 
{
	&t4180_TI, "Count", &m25189_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25190_MI;
static PropertyInfo t4180____IsReadOnly_PropertyInfo = 
{
	&t4180_TI, "IsReadOnly", &m25190_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4180_PIs[] =
{
	&t4180____Count_PropertyInfo,
	&t4180____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4180_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25189_MI = 
{
	"get_Count", NULL, &t4180_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4180_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m25190_MI = 
{
	"get_IsReadOnly", NULL, &t4180_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2142_0_0_0;
static ParameterInfo t4180_m25191_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2142_0_0_0},
};
extern TypeInfo t4180_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t2142 (MethodInfo* method, void* obj, void** args);
MethodInfo m25191_MI = 
{
	"Add", NULL, &t4180_TI, &t53_0_0_0, RuntimeInvoker_t53_t2142, t4180_m25191_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4180_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m25192_MI = 
{
	"Clear", NULL, &t4180_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2142_0_0_0;
static ParameterInfo t4180_m25193_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2142_0_0_0},
};
extern TypeInfo t4180_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2142 (MethodInfo* method, void* obj, void** args);
MethodInfo m25193_MI = 
{
	"Contains", NULL, &t4180_TI, &t55_0_0_0, RuntimeInvoker_t55_t2142, t4180_m25193_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2141_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4180_m25194_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2141_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4180_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25194_MI = 
{
	"CopyTo", NULL, &t4180_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4180_m25194_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2142_0_0_0;
static ParameterInfo t4180_m25195_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2142_0_0_0},
};
extern TypeInfo t4180_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t2142 (MethodInfo* method, void* obj, void** args);
MethodInfo m25195_MI = 
{
	"Remove", NULL, &t4180_TI, &t55_0_0_0, RuntimeInvoker_t55_t2142, t4180_m25195_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4180_MIs[] =
{
	&m25189_MI,
	&m25190_MI,
	&m25191_MI,
	&m25192_MI,
	&m25193_MI,
	&m25194_MI,
	&m25195_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4182_TI;
static TypeInfo* t4180_ITIs[] = 
{
	&t618_TI,
	&t4182_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4180_0_0_0;
extern Il2CppType t4180_1_0_0;
struct t4180;
extern TypeInfo t4180_TI;
extern Il2CppGenericClass t4180_GC;
TypeInfo t4180_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4180_MIs, t4180_PIs, NULL, NULL, NULL, NULL, NULL, &t4180_TI, t4180_ITIs, NULL, &EmptyCustomAttributesCache, &t4180_TI, &t4180_0_0_0, &t4180_1_0_0, NULL, &t4180_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4182_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
extern TypeInfo t4182_TI;
extern Il2CppType t2143_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25196_MI = 
{
	"GetEnumerator", NULL, &t4182_TI, &t2143_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4182_MIs[] =
{
	&m25196_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4182_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4182_0_0_0;
extern Il2CppType t4182_1_0_0;
struct t4182;
extern TypeInfo t4182_TI;
extern Il2CppGenericClass t4182_GC;
TypeInfo t4182_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4182_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4182_TI, t4182_ITIs, NULL, &EmptyCustomAttributesCache, &t4182_TI, &t4182_0_0_0, &t4182_1_0_0, NULL, &t4182_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2143_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
extern MethodInfo m25197_MI;
static PropertyInfo t2143____Current_PropertyInfo = 
{
	&t2143_TI, "Current", &m25197_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2143_PIs[] =
{
	&t2143____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2143_TI;
extern Il2CppType t2142_0_0_0;
extern void* RuntimeInvoker_t2142 (MethodInfo* method, void* obj, void** args);
MethodInfo m25197_MI = 
{
	"get_Current", NULL, &t2143_TI, &t2142_0_0_0, RuntimeInvoker_t2142, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2143_MIs[] =
{
	&m25197_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t2143_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2143_0_0_0;
extern Il2CppType t2143_1_0_0;
struct t2143;
extern TypeInfo t2143_TI;
extern Il2CppGenericClass t2143_GC;
TypeInfo t2143_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2143_MIs, t2143_PIs, NULL, NULL, NULL, NULL, NULL, &t2143_TI, t2143_ITIs, NULL, &EmptyCustomAttributesCache, &t2143_TI, &t2143_0_0_0, &t2143_1_0_0, NULL, &t2143_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2142_TI;

extern TypeInfo t2142_TI;
extern TypeInfo t463_TI;
extern TypeInfo t34_TI;
extern TypeInfo t207_TI;
extern TypeInfo t7_TI;
extern TypeInfo t60_TI;
extern MethodInfo m12102_MI;
extern MethodInfo m12104_MI;
extern MethodInfo m12101_MI;
extern MethodInfo m123_MI;
extern MethodInfo m12103_MI;
extern MethodInfo m3540_MI;


extern MethodInfo m12100_MI;
 void m12100 (t2142 * __this, t207 * p0, int32_t p1, MethodInfo* method){
	{
		m12102(__this, p0, &m12102_MI);
		m12104(__this, p1, &m12104_MI);
		return;
	}
}
extern MethodInfo m12101_MI;
 t207 * m12101 (t2142 * __this, MethodInfo* method){
	{
		t207 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m12102_MI;
 void m12102 (t2142 * __this, t207 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m12103_MI;
 int32_t m12103 (t2142 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m12104_MI;
 void m12104 (t2142 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m12105_MI;
 t34* m12105 (t2142 * __this, MethodInfo* method){
	t207 * V_0 = {0};
	int32_t V_1 = 0;
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
		t207 * L_2 = m12101(__this, &m12101_MI);
		t207 * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((t207 *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		t207 * L_4 = m12101(__this, &m12101_MI);
		V_0 = L_4;
		t34* L_5 = (t34*)VirtFuncInvoker0< t34* >::Invoke(&m123_MI, (*(&V_0)));
		G_B3_0 = L_5;
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
		t463* L_6 = G_B3_3;
		ArrayElementTypeCheck (L_6, (t34*) &_stringLiteral186);
		*((t34**)(t34**)SZArrayLdElema(L_6, 2)) = (t34*)(t34*) &_stringLiteral186;
		t463* L_7 = L_6;
		int32_t L_8 = m12103(__this, &m12103_MI);
		int32_t L_9 = L_8;
		t7 * L_10 = Box(InitializedTypeInfo(&t60_TI), &L_9);
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_10)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = m12103(__this, &m12103_MI);
		V_1 = L_11;
		t34* L_12 = (t34*)VirtFuncInvoker0< t34* >::Invoke(&m123_MI, Box(InitializedTypeInfo(&t60_TI), &(*(&V_1))));
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
// Metadata Definition System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>
extern Il2CppType t207_0_0_1;
FieldInfo t2142_f0_FieldInfo = 
{
	"key", &t207_0_0_1, &t2142_TI, offsetof(t2142, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2142_f1_FieldInfo = 
{
	"value", &t60_0_0_1, &t2142_TI, offsetof(t2142, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2142_FIs[] =
{
	&t2142_f0_FieldInfo,
	&t2142_f1_FieldInfo,
	NULL
};
extern MethodInfo m12101_MI;
extern MethodInfo m12102_MI;
static PropertyInfo t2142____Key_PropertyInfo = 
{
	&t2142_TI, "Key", &m12101_MI, &m12102_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12103_MI;
extern MethodInfo m12104_MI;
static PropertyInfo t2142____Value_PropertyInfo = 
{
	&t2142_TI, "Value", &m12103_MI, &m12104_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2142_PIs[] =
{
	&t2142____Key_PropertyInfo,
	&t2142____Value_PropertyInfo,
	NULL
};
extern Il2CppType t207_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2142_m12100_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2142_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12100_MI = 
{
	".ctor", (methodPointerType)&m12100, &t2142_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2142_m12100_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2142_TI;
extern Il2CppType t207_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12101_MI = 
{
	"get_Key", (methodPointerType)&m12101, &t2142_TI, &t207_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
static ParameterInfo t2142_m12102_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t2142_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12102_MI = 
{
	"set_Key", (methodPointerType)&m12102, &t2142_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2142_m12102_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2142_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12103_MI = 
{
	"get_Value", (methodPointerType)&m12103, &t2142_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2142_m12104_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2142_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12104_MI = 
{
	"set_Value", (methodPointerType)&m12104, &t2142_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2142_m12104_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2142_TI;
extern Il2CppType t34_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12105_MI = 
{
	"ToString", (methodPointerType)&m12105, &t2142_TI, &t34_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2142_MIs[] =
{
	&m12100_MI,
	&m12101_MI,
	&m12102_MI,
	&m12103_MI,
	&m12104_MI,
	&m12105_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m12105_MI;
static MethodInfo* t2142_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m12105_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2142_0_0_0;
extern Il2CppType t2142_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2142_TI;
extern Il2CppGenericClass t2142_GC;
extern CustomAttributesCache t864__CustomAttributeCache;
TypeInfo t2142_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t2142_MIs, t2142_PIs, t2142_FIs, NULL, &t159_TI, NULL, NULL, &t2142_TI, NULL, t2142_VT, &t864__CustomAttributeCache, &t2142_TI, &t2142_0_0_0, &t2142_1_0_0, NULL, &t2142_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2142)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t2145.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2145_TI;
#include "t2145MD.h"

extern TypeInfo t2145_TI;
extern TypeInfo t2142_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m12110_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18852_MI;
struct t52;
 t2142  m18852 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18852_MI;


extern MethodInfo m12106_MI;
 void m12106 (t2145 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12107_MI;
 t7 * m12107 (t2145 * __this, MethodInfo* method){
	{
		t2142  L_0 = m12110(__this, &m12110_MI);
		t2142  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2142_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m12108_MI;
 void m12108 (t2145 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12109_MI;
 bool m12109 (t2145 * __this, MethodInfo* method){
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
extern MethodInfo m12110_MI;
 t2142  m12110 (t2145 * __this, MethodInfo* method){
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
		t2142  L_8 = m18852(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18852_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
extern Il2CppType t52_0_0_1;
FieldInfo t2145_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2145_TI, offsetof(t2145, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2145_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2145_TI, offsetof(t2145, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2145_FIs[] =
{
	&t2145_f0_FieldInfo,
	&t2145_f1_FieldInfo,
	NULL
};
extern MethodInfo m12107_MI;
static PropertyInfo t2145____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2145_TI, "System.Collections.IEnumerator.Current", &m12107_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12110_MI;
static PropertyInfo t2145____Current_PropertyInfo = 
{
	&t2145_TI, "Current", &m12110_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2145_PIs[] =
{
	&t2145____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2145____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2145_m12106_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2145_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12106_MI = 
{
	".ctor", (methodPointerType)&m12106, &t2145_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2145_m12106_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2145_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12107_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12107, &t2145_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2145_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12108_MI = 
{
	"Dispose", (methodPointerType)&m12108, &t2145_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2145_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12109_MI = 
{
	"MoveNext", (methodPointerType)&m12109, &t2145_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2145_TI;
extern Il2CppType t2142_0_0_0;
extern void* RuntimeInvoker_t2142 (MethodInfo* method, void* obj, void** args);
MethodInfo m12110_MI = 
{
	"get_Current", (methodPointerType)&m12110, &t2145_TI, &t2142_0_0_0, RuntimeInvoker_t2142, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2145_MIs[] =
{
	&m12106_MI,
	&m12107_MI,
	&m12108_MI,
	&m12109_MI,
	&m12110_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m12107_MI;
extern MethodInfo m12109_MI;
extern MethodInfo m12108_MI;
extern MethodInfo m12110_MI;
static MethodInfo* t2145_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m12107_MI,
	&m12109_MI,
	&m12108_MI,
	&m12110_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2143_TI;
static TypeInfo* t2145_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2143_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2143_TI;
static Il2CppInterfaceOffsetPair t2145_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2143_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2145_0_0_0;
extern Il2CppType t2145_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2145_TI;
extern Il2CppGenericClass t2145_GC;
extern TypeInfo t52_TI;
TypeInfo t2145_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2145_MIs, t2145_PIs, t2145_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2145_TI, t2145_ITIs, t2145_VT, &EmptyCustomAttributesCache, &t2145_TI, &t2145_0_0_0, &t2145_1_0_0, t2145_IOs, &t2145_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2145)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4181_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
extern MethodInfo m25198_MI;
extern MethodInfo m25199_MI;
static PropertyInfo t4181____Item_PropertyInfo = 
{
	&t4181_TI, "Item", &m25198_MI, &m25199_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4181_PIs[] =
{
	&t4181____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2142_0_0_0;
static ParameterInfo t4181_m25200_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2142_0_0_0},
};
extern TypeInfo t4181_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t2142 (MethodInfo* method, void* obj, void** args);
MethodInfo m25200_MI = 
{
	"IndexOf", NULL, &t4181_TI, &t60_0_0_0, RuntimeInvoker_t60_t2142, t4181_m25200_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2142_0_0_0;
static ParameterInfo t4181_m25201_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2142_0_0_0},
};
extern TypeInfo t4181_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t2142 (MethodInfo* method, void* obj, void** args);
MethodInfo m25201_MI = 
{
	"Insert", NULL, &t4181_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t2142, t4181_m25201_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4181_m25202_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4181_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25202_MI = 
{
	"RemoveAt", NULL, &t4181_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4181_m25202_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4181_m25198_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4181_TI;
extern Il2CppType t2142_0_0_0;
extern void* RuntimeInvoker_t2142_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25198_MI = 
{
	"get_Item", NULL, &t4181_TI, &t2142_0_0_0, RuntimeInvoker_t2142_t60, t4181_m25198_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2142_0_0_0;
static ParameterInfo t4181_m25199_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2142_0_0_0},
};
extern TypeInfo t4181_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t2142 (MethodInfo* method, void* obj, void** args);
MethodInfo m25199_MI = 
{
	"set_Item", NULL, &t4181_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t2142, t4181_m25199_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4181_MIs[] =
{
	&m25200_MI,
	&m25201_MI,
	&m25202_MI,
	&m25198_MI,
	&m25199_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4180_TI;
extern TypeInfo t4182_TI;
static TypeInfo* t4181_ITIs[] = 
{
	&t618_TI,
	&t4180_TI,
	&t4182_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4181_0_0_0;
extern Il2CppType t4181_1_0_0;
struct t4181;
extern TypeInfo t4181_TI;
extern Il2CppGenericClass t4181_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4181_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4181_MIs, t4181_PIs, NULL, NULL, NULL, NULL, NULL, &t4181_TI, t4181_ITIs, NULL, &t1426__CustomAttributeCache, &t4181_TI, &t4181_0_0_0, &t4181_1_0_0, NULL, &t4181_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5339_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<UnityEngine.UI.Graphic,System.Int32>
extern Il2CppType t207_0_0_0;
static ParameterInfo t5339_m25203_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
};
extern TypeInfo t5339_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25203_MI = 
{
	"Remove", NULL, &t5339_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5339_m25203_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5339_MIs[] =
{
	&m25203_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4180_TI;
extern TypeInfo t4182_TI;
static TypeInfo* t5339_ITIs[] = 
{
	&t618_TI,
	&t4180_TI,
	&t4182_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5339_0_0_0;
extern Il2CppType t5339_1_0_0;
struct t5339;
extern TypeInfo t5339_TI;
extern Il2CppGenericClass t5339_GC;
extern CustomAttributesCache t1486__CustomAttributeCache;
TypeInfo t5339_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5339_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5339_TI, t5339_ITIs, NULL, &t1486__CustomAttributeCache, &t5339_TI, &t5339_0_0_0, &t5339_1_0_0, NULL, &t5339_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2140_TI;

#include "t2146.h"
#include "t2147.h"
extern TypeInfo t2140_TI;
extern TypeInfo t669_TI;
extern TypeInfo t7_TI;
extern TypeInfo t386_TI;
extern TypeInfo t60_TI;
extern TypeInfo t87_TI;
extern TypeInfo t62_TI;
extern TypeInfo t2146_TI;
extern TypeInfo t731_TI;
extern TypeInfo t53_TI;
extern TypeInfo t2147_TI;
#include "t2147MD.h"
#include "t2146MD.h"
extern MethodInfo m7515_MI;
extern MethodInfo m12077_MI;
extern MethodInfo m116_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m7125_MI;
extern MethodInfo m12089_MI;
extern MethodInfo m12123_MI;
extern MethodInfo m12122_MI;
extern MethodInfo m12081_MI;
extern MethodInfo m12083_MI;
extern MethodInfo m12141_MI;
extern MethodInfo m18863_MI;
extern MethodInfo m18864_MI;
extern MethodInfo m12125_MI;
struct t386;
 void m18863 (t386 * __this, t52 * p0, int32_t p1, t2147 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18863_MI;
struct t386;
 void m18864 (t386 * __this, t731* p0, int32_t p1, t2147 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18864_MI;


extern MethodInfo m12111_MI;
 void m12111 (t2140 * __this, t386 * p0, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m3066(L_0, (t34*) &_stringLiteral552, &m3066_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m12112_MI;
 void m12112 (t2140 * __this, int32_t p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral553, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m12113_MI;
 void m12113 (t2140 * __this, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral553, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m12114_MI;
 bool m12114 (t2140 * __this, int32_t p0, MethodInfo* method){
	{
		t386 * L_0 = (__this->f0);
		bool L_1 = m12089(L_0, p0, &m12089_MI);
		return L_1;
	}
}
extern MethodInfo m12115_MI;
 bool m12115 (t2140 * __this, int32_t p0, MethodInfo* method){
	{
		t62 * L_0 = (t62 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t62_TI));
		m7125(L_0, (t34*) &_stringLiteral553, &m7125_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m12116_MI;
 t7* m12116 (t2140 * __this, MethodInfo* method){
	{
		t2146  L_0 = m12123(__this, &m12123_MI);
		t2146  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2146_TI), &L_1);
		return (t7*)L_2;
	}
}
extern MethodInfo m12117_MI;
 void m12117 (t2140 * __this, t52 * p0, int32_t p1, MethodInfo* method){
	t731* V_0 = {0};
	{
		V_0 = ((t731*)IsInst(p0, InitializedTypeInfo(&t731_TI)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< t731*, int32_t >::Invoke(&m12122_MI, __this, V_0, p1);
		return;
	}

IL_0013:
	{
		t386 * L_0 = (__this->f0);
		m12081(L_0, p0, p1, &m12081_MI);
		t386 * L_1 = (__this->f0);
		t114 L_2 = { &m12083_MI };
		t2147 * L_3 = (t2147 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2147_TI));
		m12141(L_3, NULL, L_2, &m12141_MI);
		m18863(L_1, p0, p1, L_3, &m18863_MI);
		return;
	}
}
extern MethodInfo m12118_MI;
 t7 * m12118 (t2140 * __this, MethodInfo* method){
	{
		t2146  L_0 = m12123(__this, &m12123_MI);
		t2146  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2146_TI), &L_1);
		return (t7 *)L_2;
	}
}
extern MethodInfo m12119_MI;
 bool m12119 (t2140 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m12120_MI;
 bool m12120 (t2140 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m12121_MI;
 t7 * m12121 (t2140 * __this, MethodInfo* method){
	{
		t386 * L_0 = (__this->f0);
		t7 * L_1 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(&m7515_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m12122_MI;
 void m12122 (t2140 * __this, t731* p0, int32_t p1, MethodInfo* method){
	{
		t386 * L_0 = (__this->f0);
		m12081(L_0, (t52 *)(t52 *)p0, p1, &m12081_MI);
		t386 * L_1 = (__this->f0);
		t114 L_2 = { &m12083_MI };
		t2147 * L_3 = (t2147 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2147_TI));
		m12141(L_3, NULL, L_2, &m12141_MI);
		m18864(L_1, p0, p1, L_3, &m18864_MI);
		return;
	}
}
extern MethodInfo m12123_MI;
 t2146  m12123 (t2140 * __this, MethodInfo* method){
	{
		t386 * L_0 = (__this->f0);
		t2146  L_1 = {0};
		m12125(&L_1, L_0, &m12125_MI);
		return L_1;
	}
}
extern MethodInfo m12124_MI;
 int32_t m12124 (t2140 * __this, MethodInfo* method){
	{
		t386 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m12077_MI, L_0);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.Graphic,System.Int32>
extern Il2CppType t386_0_0_1;
FieldInfo t2140_f0_FieldInfo = 
{
	"dictionary", &t386_0_0_1, &t2140_TI, offsetof(t2140, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2140_FIs[] =
{
	&t2140_f0_FieldInfo,
	NULL
};
extern MethodInfo m12119_MI;
static PropertyInfo t2140____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t2140_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m12119_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12120_MI;
static PropertyInfo t2140____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2140_TI, "System.Collections.ICollection.IsSynchronized", &m12120_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12121_MI;
static PropertyInfo t2140____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2140_TI, "System.Collections.ICollection.SyncRoot", &m12121_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12124_MI;
static PropertyInfo t2140____Count_PropertyInfo = 
{
	&t2140_TI, "Count", &m12124_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2140_PIs[] =
{
	&t2140____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t2140____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2140____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2140____Count_PropertyInfo,
	NULL
};
extern Il2CppType t386_0_0_0;
static ParameterInfo t2140_m12111_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t386_0_0_0},
};
extern TypeInfo t2140_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12111_MI = 
{
	".ctor", (methodPointerType)&m12111, &t2140_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2140_m12111_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2140_m12112_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2140_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12112_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m12112, &t2140_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t2140_m12112_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2140_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12113_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m12113, &t2140_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2140_m12114_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2140_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12114_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m12114, &t2140_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t2140_m12114_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t2140_m12115_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2140_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12115_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m12115, &t2140_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t2140_m12115_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2140_TI;
extern Il2CppType t1997_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12116_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m12116, &t2140_TI, &t1997_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2140_m12117_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2140_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12117_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m12117, &t2140_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2140_m12117_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2140_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12118_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m12118, &t2140_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2140_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12119_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m12119, &t2140_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2140_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12120_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m12120, &t2140_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2140_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12121_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m12121, &t2140_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t731_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2140_m12122_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t731_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2140_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12122_MI = 
{
	"CopyTo", (methodPointerType)&m12122, &t2140_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2140_m12122_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2140_TI;
extern Il2CppType t2146_0_0_0;
extern void* RuntimeInvoker_t2146 (MethodInfo* method, void* obj, void** args);
MethodInfo m12123_MI = 
{
	"GetEnumerator", (methodPointerType)&m12123, &t2140_TI, &t2146_0_0_0, RuntimeInvoker_t2146, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2140_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12124_MI = 
{
	"get_Count", (methodPointerType)&m12124, &t2140_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2140_MIs[] =
{
	&m12111_MI,
	&m12112_MI,
	&m12113_MI,
	&m12114_MI,
	&m12115_MI,
	&m12116_MI,
	&m12117_MI,
	&m12118_MI,
	&m12119_MI,
	&m12120_MI,
	&m12121_MI,
	&m12122_MI,
	&m12123_MI,
	&m12124_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m12118_MI;
extern MethodInfo m12124_MI;
extern MethodInfo m12120_MI;
extern MethodInfo m12121_MI;
extern MethodInfo m12117_MI;
extern MethodInfo m12124_MI;
extern MethodInfo m12119_MI;
extern MethodInfo m12112_MI;
extern MethodInfo m12113_MI;
extern MethodInfo m12114_MI;
extern MethodInfo m12122_MI;
extern MethodInfo m12115_MI;
extern MethodInfo m12116_MI;
static MethodInfo* t2140_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m12118_MI,
	&m12124_MI,
	&m12120_MI,
	&m12121_MI,
	&m12117_MI,
	&m12124_MI,
	&m12119_MI,
	&m12112_MI,
	&m12113_MI,
	&m12114_MI,
	&m12122_MI,
	&m12115_MI,
	&m12116_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t3956_TI;
extern TypeInfo t3958_TI;
static TypeInfo* t2140_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t3956_TI,
	&t3958_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t3956_TI;
extern TypeInfo t3958_TI;
static Il2CppInterfaceOffsetPair t2140_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t3956_TI, 9},
	{ &t3958_TI, 16},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2140_0_0_0;
extern Il2CppType t2140_1_0_0;
extern TypeInfo t7_TI;
struct t2140;
extern TypeInfo t2140_TI;
extern Il2CppGenericClass t2140_GC;
extern TypeInfo t859_TI;
extern CustomAttributesCache t857__CustomAttributeCache;
TypeInfo t2140_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t2140_MIs, t2140_PIs, t2140_FIs, NULL, &t7_TI, NULL, &t859_TI, &t2140_TI, t2140_ITIs, t2140_VT, &t857__CustomAttributeCache, &t2140_TI, &t2140_0_0_0, &t2140_1_0_0, t2140_IOs, &t2140_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2140), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2146_TI;

extern TypeInfo t2146_TI;
extern TypeInfo t60_TI;
extern TypeInfo t2144_TI;
extern TypeInfo t53_TI;
extern TypeInfo t55_TI;
extern MethodInfo m12137_MI;
extern MethodInfo m12103_MI;
extern MethodInfo m12098_MI;
extern MethodInfo m12140_MI;
extern MethodInfo m12134_MI;


extern MethodInfo m12125_MI;
 void m12125 (t2146 * __this, t386 * p0, MethodInfo* method){
	{
		t2144  L_0 = m12098(p0, &m12098_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m12126_MI;
 t7 * m12126 (t2146 * __this, MethodInfo* method){
	{
		t2144 * L_0 = &(__this->f0);
		int32_t L_1 = m12137(L_0, &m12137_MI);
		int32_t L_2 = L_1;
		t7 * L_3 = Box(InitializedTypeInfo(&t60_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m12127_MI;
 void m12127 (t2146 * __this, MethodInfo* method){
	{
		t2144 * L_0 = &(__this->f0);
		m12140(L_0, &m12140_MI);
		return;
	}
}
extern MethodInfo m12128_MI;
 bool m12128 (t2146 * __this, MethodInfo* method){
	{
		t2144 * L_0 = &(__this->f0);
		bool L_1 = m12134(L_0, &m12134_MI);
		return L_1;
	}
}
extern MethodInfo m12129_MI;
 int32_t m12129 (t2146 * __this, MethodInfo* method){
	{
		t2144 * L_0 = &(__this->f0);
		t2142 * L_1 = &(L_0->f3);
		int32_t L_2 = m12103(L_1, &m12103_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.Graphic,System.Int32>
extern Il2CppType t2144_0_0_1;
FieldInfo t2146_f0_FieldInfo = 
{
	"host_enumerator", &t2144_0_0_1, &t2146_TI, offsetof(t2146, f0) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2146_FIs[] =
{
	&t2146_f0_FieldInfo,
	NULL
};
extern MethodInfo m12126_MI;
static PropertyInfo t2146____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2146_TI, "System.Collections.IEnumerator.Current", &m12126_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12129_MI;
static PropertyInfo t2146____Current_PropertyInfo = 
{
	&t2146_TI, "Current", &m12129_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2146_PIs[] =
{
	&t2146____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2146____Current_PropertyInfo,
	NULL
};
extern Il2CppType t386_0_0_0;
static ParameterInfo t2146_m12125_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t386_0_0_0},
};
extern TypeInfo t2146_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12125_MI = 
{
	".ctor", (methodPointerType)&m12125, &t2146_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2146_m12125_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2146_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12126_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12126, &t2146_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2146_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12127_MI = 
{
	"Dispose", (methodPointerType)&m12127, &t2146_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2146_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12128_MI = 
{
	"MoveNext", (methodPointerType)&m12128, &t2146_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2146_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12129_MI = 
{
	"get_Current", (methodPointerType)&m12129, &t2146_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2146_MIs[] =
{
	&m12125_MI,
	&m12126_MI,
	&m12127_MI,
	&m12128_MI,
	&m12129_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m12126_MI;
extern MethodInfo m12128_MI;
extern MethodInfo m12127_MI;
extern MethodInfo m12129_MI;
static MethodInfo* t2146_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m12126_MI,
	&m12128_MI,
	&m12127_MI,
	&m12129_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t1997_TI;
static TypeInfo* t2146_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t1997_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t1997_TI;
static Il2CppInterfaceOffsetPair t2146_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t1997_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2146_0_0_0;
extern Il2CppType t2146_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2146_TI;
extern Il2CppGenericClass t2146_GC;
extern TypeInfo t857_TI;
TypeInfo t2146_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2146_MIs, t2146_PIs, t2146_FIs, NULL, &t159_TI, NULL, &t857_TI, &t2146_TI, t2146_ITIs, t2146_VT, &EmptyCustomAttributesCache, &t2146_TI, &t2146_0_0_0, &t2146_1_0_0, t2146_IOs, &t2146_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2146)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2144_TI;

extern TypeInfo t2144_TI;
extern TypeInfo t2142_TI;
extern TypeInfo t207_TI;
extern TypeInfo t60_TI;
extern TypeInfo t854_TI;
extern TypeInfo t386_TI;
extern TypeInfo t852_TI;
extern TypeInfo t1312_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m12139_MI;
extern MethodInfo m12101_MI;
extern MethodInfo m12103_MI;
extern MethodInfo m4471_MI;
extern MethodInfo m12136_MI;
extern MethodInfo m12138_MI;
extern MethodInfo m12100_MI;
extern MethodInfo m7227_MI;
extern MethodInfo m7023_MI;


extern MethodInfo m12130_MI;
 void m12130 (t2144 * __this, t386 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m12131_MI;
 t7 * m12131 (t2144 * __this, MethodInfo* method){
	{
		m12139(__this, &m12139_MI);
		t2142  L_0 = (__this->f3);
		t2142  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2142_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m12132_MI;
 t854  m12132 (t2144 * __this, MethodInfo* method){
	{
		m12139(__this, &m12139_MI);
		t2142 * L_0 = &(__this->f3);
		t207 * L_1 = m12101(L_0, &m12101_MI);
		t207 * L_2 = L_1;
		t2142 * L_3 = &(__this->f3);
		int32_t L_4 = m12103(L_3, &m12103_MI);
		int32_t L_5 = L_4;
		t7 * L_6 = Box(InitializedTypeInfo(&t60_TI), &L_5);
		t854  L_7 = {0};
		m4471(&L_7, ((t207 *)L_2), L_6, &m4471_MI);
		return L_7;
	}
}
extern MethodInfo m12133_MI;
 t7 * m12133 (t2144 * __this, MethodInfo* method){
	{
		t207 * L_0 = m12136(__this, &m12136_MI);
		t207 * L_1 = L_0;
		return ((t207 *)L_1);
	}
}
extern MethodInfo m12134_MI;
 bool m12134 (t2144 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m12138(__this, &m12138_MI);
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
		t386 * L_3 = (__this->f0);
		t1476* L_4 = (L_3->f5);
		int32_t L_5 = (((t852 *)(t852 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)(L_5&((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t386 * L_6 = (__this->f0);
		t2118* L_7 = (L_6->f6);
		t386 * L_8 = (__this->f0);
		t731* L_9 = (L_8->f7);
		t2142  L_10 = {0};
		m12100(&L_10, (*(t207 **)(t207 **)SZArrayLdElema(L_7, V_0)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, V_0)), &m12100_MI);
		__this->f3 = L_10;
		return 1;
	}

IL_0072:
	{
		int32_t L_11 = (__this->f1);
		t386 * L_12 = (__this->f0);
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
extern MethodInfo m12135_MI;
 t2142  m12135 (t2144 * __this, MethodInfo* method){
	{
		t2142  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m12136_MI;
 t207 * m12136 (t2144 * __this, MethodInfo* method){
	{
		m12139(__this, &m12139_MI);
		t2142 * L_0 = &(__this->f3);
		t207 * L_1 = m12101(L_0, &m12101_MI);
		return L_1;
	}
}
extern MethodInfo m12137_MI;
 int32_t m12137 (t2144 * __this, MethodInfo* method){
	{
		m12139(__this, &m12139_MI);
		t2142 * L_0 = &(__this->f3);
		int32_t L_1 = m12103(L_0, &m12103_MI);
		return L_1;
	}
}
extern MethodInfo m12138_MI;
 void m12138 (t2144 * __this, MethodInfo* method){
	{
		t386 * L_0 = (__this->f0);
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
		t386 * L_2 = (__this->f0);
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
extern MethodInfo m12139_MI;
 void m12139 (t2144 * __this, MethodInfo* method){
	{
		m12138(__this, &m12138_MI);
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
extern MethodInfo m12140_MI;
 void m12140 (t2144 * __this, MethodInfo* method){
	{
		__this->f0 = (t386 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.Graphic,System.Int32>
extern Il2CppType t386_0_0_1;
FieldInfo t2144_f0_FieldInfo = 
{
	"dictionary", &t386_0_0_1, &t2144_TI, offsetof(t2144, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2144_f1_FieldInfo = 
{
	"next", &t60_0_0_1, &t2144_TI, offsetof(t2144, f1) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2144_f2_FieldInfo = 
{
	"stamp", &t60_0_0_1, &t2144_TI, offsetof(t2144, f2) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t2142_0_0_3;
FieldInfo t2144_f3_FieldInfo = 
{
	"current", &t2142_0_0_3, &t2144_TI, offsetof(t2144, f3) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2144_FIs[] =
{
	&t2144_f0_FieldInfo,
	&t2144_f1_FieldInfo,
	&t2144_f2_FieldInfo,
	&t2144_f3_FieldInfo,
	NULL
};
extern MethodInfo m12131_MI;
static PropertyInfo t2144____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2144_TI, "System.Collections.IEnumerator.Current", &m12131_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12132_MI;
static PropertyInfo t2144____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t2144_TI, "System.Collections.IDictionaryEnumerator.Entry", &m12132_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12133_MI;
static PropertyInfo t2144____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t2144_TI, "System.Collections.IDictionaryEnumerator.Key", &m12133_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12135_MI;
static PropertyInfo t2144____Current_PropertyInfo = 
{
	&t2144_TI, "Current", &m12135_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12136_MI;
static PropertyInfo t2144____CurrentKey_PropertyInfo = 
{
	&t2144_TI, "CurrentKey", &m12136_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12137_MI;
static PropertyInfo t2144____CurrentValue_PropertyInfo = 
{
	&t2144_TI, "CurrentValue", &m12137_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2144_PIs[] =
{
	&t2144____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2144____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t2144____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t2144____Current_PropertyInfo,
	&t2144____CurrentKey_PropertyInfo,
	&t2144____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t386_0_0_0;
static ParameterInfo t2144_m12130_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t386_0_0_0},
};
extern TypeInfo t2144_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12130_MI = 
{
	".ctor", (methodPointerType)&m12130, &t2144_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2144_m12130_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2144_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12131_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12131, &t2144_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2144_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854 (MethodInfo* method, void* obj, void** args);
MethodInfo m12132_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m12132, &t2144_TI, &t854_0_0_0, RuntimeInvoker_t854, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2144_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12133_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m12133, &t2144_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2144_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12134_MI = 
{
	"MoveNext", (methodPointerType)&m12134, &t2144_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2144_TI;
extern Il2CppType t2142_0_0_0;
extern void* RuntimeInvoker_t2142 (MethodInfo* method, void* obj, void** args);
MethodInfo m12135_MI = 
{
	"get_Current", (methodPointerType)&m12135, &t2144_TI, &t2142_0_0_0, RuntimeInvoker_t2142, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2144_TI;
extern Il2CppType t207_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12136_MI = 
{
	"get_CurrentKey", (methodPointerType)&m12136, &t2144_TI, &t207_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2144_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12137_MI = 
{
	"get_CurrentValue", (methodPointerType)&m12137, &t2144_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2144_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12138_MI = 
{
	"VerifyState", (methodPointerType)&m12138, &t2144_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2144_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12139_MI = 
{
	"VerifyCurrent", (methodPointerType)&m12139, &t2144_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2144_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12140_MI = 
{
	"Dispose", (methodPointerType)&m12140, &t2144_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2144_MIs[] =
{
	&m12130_MI,
	&m12131_MI,
	&m12132_MI,
	&m12133_MI,
	&m12134_MI,
	&m12135_MI,
	&m12136_MI,
	&m12137_MI,
	&m12138_MI,
	&m12139_MI,
	&m12140_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m12131_MI;
extern MethodInfo m12134_MI;
extern MethodInfo m12140_MI;
extern MethodInfo m12135_MI;
extern MethodInfo m12132_MI;
extern MethodInfo m12133_MI;
static MethodInfo* t2144_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m12131_MI,
	&m12134_MI,
	&m12140_MI,
	&m12135_MI,
	&m12132_MI,
	&m12133_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2143_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2144_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2143_TI,
	&t860_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2143_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2144_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2143_TI, 7},
	{ &t860_TI, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2144_0_0_0;
extern Il2CppType t2144_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2144_TI;
extern Il2CppGenericClass t2144_GC;
extern TypeInfo t859_TI;
TypeInfo t2144_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2144_MIs, t2144_PIs, t2144_FIs, NULL, &t159_TI, NULL, &t859_TI, &t2144_TI, t2144_ITIs, t2144_VT, &EmptyCustomAttributesCache, &t2144_TI, &t2144_0_0_0, &t2144_1_0_0, t2144_IOs, &t2144_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2144)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2147_TI;



extern MethodInfo m12141_MI;
 void m12141 (t2147 * __this, t7 * p0, t114 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m12142_MI;
 int32_t m12142 (t2147 * __this, t207 * p0, int32_t p1, MethodInfo* method){
	typedef  int32_t (*FunctionPointerType) (t7 * __this, t207 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m12142((t2147 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m12143_MI;
 t7 * m12143 (t2147 * __this, t207 * p0, int32_t p1, t113 * p2, t7 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t60_TI), &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m12144_MI;
 int32_t m12144 (t2147 * __this, t7 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Int32>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2147_m12141_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2147_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m12141_MI = 
{
	".ctor", (methodPointerType)&m12141, &t2147_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2147_m12141_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2147_m12142_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2147_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12142_MI = 
{
	"Invoke", (methodPointerType)&m12142, &t2147_TI, &t60_0_0_0, RuntimeInvoker_t60_t7_t60, t2147_m12142_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2147_m12143_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2147_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12143_MI = 
{
	"BeginInvoke", (methodPointerType)&m12143, &t2147_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t60_t7_t7, t2147_m12143_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2147_m12144_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2147_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12144_MI = 
{
	"EndInvoke", (methodPointerType)&m12144, &t2147_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2147_m12144_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2147_MIs[] =
{
	&m12141_MI,
	&m12142_MI,
	&m12143_MI,
	&m12144_MI,
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
extern MethodInfo m12142_MI;
extern MethodInfo m12143_MI;
extern MethodInfo m12144_MI;
static MethodInfo* t2147_VT[] =
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
	&m12142_MI,
	&m12143_MI,
	&m12144_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2147_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2147_0_0_0;
extern Il2CppType t2147_1_0_0;
extern TypeInfo t245_TI;
struct t2147;
extern TypeInfo t2147_TI;
extern Il2CppGenericClass t2147_GC;
extern TypeInfo t859_TI;
TypeInfo t2147_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2147_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t859_TI, &t2147_TI, NULL, t2147_VT, &EmptyCustomAttributesCache, &t2147_TI, &t2147_0_0_0, &t2147_1_0_0, t2147_IOs, &t2147_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2147), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2139_TI;



extern MethodInfo m12145_MI;
 void m12145 (t2139 * __this, t7 * p0, t114 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m12146_MI;
 t854  m12146 (t2139 * __this, t207 * p0, int32_t p1, MethodInfo* method){
	typedef  t854  (*FunctionPointerType) (t7 * __this, t207 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m12146((t2139 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m12147_MI;
 t7 * m12147 (t2139 * __this, t207 * p0, int32_t p1, t113 * p2, t7 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t60_TI), &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m12148_MI;
 t854  m12148 (t2139 * __this, t7 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t854 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2139_m12145_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2139_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m12145_MI = 
{
	".ctor", (methodPointerType)&m12145, &t2139_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2139_m12145_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2139_m12146_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2139_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12146_MI = 
{
	"Invoke", (methodPointerType)&m12146, &t2139_TI, &t854_0_0_0, RuntimeInvoker_t854_t7_t60, t2139_m12146_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2139_m12147_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2139_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12147_MI = 
{
	"BeginInvoke", (methodPointerType)&m12147, &t2139_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t60_t7_t7, t2139_m12147_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2139_m12148_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2139_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12148_MI = 
{
	"EndInvoke", (methodPointerType)&m12148, &t2139_TI, &t854_0_0_0, RuntimeInvoker_t854_t7, t2139_m12148_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2139_MIs[] =
{
	&m12145_MI,
	&m12146_MI,
	&m12147_MI,
	&m12148_MI,
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
extern MethodInfo m12146_MI;
extern MethodInfo m12147_MI;
extern MethodInfo m12148_MI;
static MethodInfo* t2139_VT[] =
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
	&m12146_MI,
	&m12147_MI,
	&m12148_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2139_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2139_0_0_0;
extern Il2CppType t2139_1_0_0;
extern TypeInfo t245_TI;
struct t2139;
extern TypeInfo t2139_TI;
extern Il2CppGenericClass t2139_GC;
extern TypeInfo t859_TI;
TypeInfo t2139_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2139_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t859_TI, &t2139_TI, NULL, t2139_VT, &EmptyCustomAttributesCache, &t2139_TI, &t2139_0_0_0, &t2139_1_0_0, t2139_IOs, &t2139_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2139), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2148_TI;



extern MethodInfo m12149_MI;
 void m12149 (t2148 * __this, t7 * p0, t114 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m12150_MI;
 t2142  m12150 (t2148 * __this, t207 * p0, int32_t p1, MethodInfo* method){
	typedef  t2142  (*FunctionPointerType) (t7 * __this, t207 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m12150((t2148 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m12151_MI;
 t7 * m12151 (t2148 * __this, t207 * p0, int32_t p1, t113 * p2, t7 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t60_TI), &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m12152_MI;
 t2142  m12152 (t2148 * __this, t7 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2142 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2148_m12149_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2148_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m12149_MI = 
{
	".ctor", (methodPointerType)&m12149, &t2148_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2148_m12149_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2148_m12150_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2148_TI;
extern Il2CppType t2142_0_0_0;
extern void* RuntimeInvoker_t2142_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12150_MI = 
{
	"Invoke", (methodPointerType)&m12150, &t2148_TI, &t2142_0_0_0, RuntimeInvoker_t2142_t7_t60, t2148_m12150_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t207_0_0_0;
extern Il2CppType t60_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2148_m12151_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t207_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2148_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t60_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12151_MI = 
{
	"BeginInvoke", (methodPointerType)&m12151, &t2148_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t60_t7_t7, t2148_m12151_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2148_m12152_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2148_TI;
extern Il2CppType t2142_0_0_0;
extern void* RuntimeInvoker_t2142_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12152_MI = 
{
	"EndInvoke", (methodPointerType)&m12152, &t2148_TI, &t2142_0_0_0, RuntimeInvoker_t2142_t7, t2148_m12152_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2148_MIs[] =
{
	&m12149_MI,
	&m12150_MI,
	&m12151_MI,
	&m12152_MI,
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
extern MethodInfo m12150_MI;
extern MethodInfo m12151_MI;
extern MethodInfo m12152_MI;
static MethodInfo* t2148_VT[] =
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
	&m12150_MI,
	&m12151_MI,
	&m12152_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2148_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2148_0_0_0;
extern Il2CppType t2148_1_0_0;
extern TypeInfo t245_TI;
struct t2148;
extern TypeInfo t2148_TI;
extern Il2CppGenericClass t2148_GC;
extern TypeInfo t859_TI;
TypeInfo t2148_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2148_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t859_TI, &t2148_TI, NULL, t2148_VT, &EmptyCustomAttributesCache, &t2148_TI, &t2148_0_0_0, &t2148_1_0_0, t2148_IOs, &t2148_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2148), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2149_TI;

extern TypeInfo t2149_TI;
extern TypeInfo t2144_TI;
extern TypeInfo t860_TI;
extern TypeInfo t854_TI;
extern TypeInfo t2142_TI;
extern TypeInfo t207_TI;
extern TypeInfo t55_TI;
extern MethodInfo m7825_MI;
extern MethodInfo m12135_MI;
extern MethodInfo m12101_MI;
extern MethodInfo m12155_MI;
extern MethodInfo m116_MI;
extern MethodInfo m12098_MI;
extern MethodInfo m12134_MI;


extern MethodInfo m12153_MI;
 void m12153 (t2149 * __this, t386 * p0, MethodInfo* method){
	{
		m116(__this, &m116_MI);
		t2144  L_0 = m12098(p0, &m12098_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m12154_MI;
 bool m12154 (t2149 * __this, MethodInfo* method){
	{
		t2144 * L_0 = &(__this->f0);
		bool L_1 = m12134(L_0, &m12134_MI);
		return L_1;
	}
}
extern MethodInfo m12155_MI;
 t854  m12155 (t2149 * __this, MethodInfo* method){
	{
		t2144  L_0 = (__this->f0);
		t2144  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2144_TI), &L_1);
		t854  L_3 = (t854 )InterfaceFuncInvoker0< t854  >::Invoke(&m7825_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m12156_MI;
 t7 * m12156 (t2149 * __this, MethodInfo* method){
	t2142  V_0 = {0};
	{
		t2144 * L_0 = &(__this->f0);
		t2142  L_1 = m12135(L_0, &m12135_MI);
		V_0 = L_1;
		t207 * L_2 = m12101((&V_0), &m12101_MI);
		t207 * L_3 = L_2;
		return ((t207 *)L_3);
	}
}
extern MethodInfo m12157_MI;
 t7 * m12157 (t2149 * __this, MethodInfo* method){
	{
		t854  L_0 = (t854 )VirtFuncInvoker0< t854  >::Invoke(&m12155_MI, __this);
		t854  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t854_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.Graphic,System.Int32>
extern Il2CppType t2144_0_0_1;
FieldInfo t2149_f0_FieldInfo = 
{
	"host_enumerator", &t2144_0_0_1, &t2149_TI, offsetof(t2149, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2149_FIs[] =
{
	&t2149_f0_FieldInfo,
	NULL
};
extern MethodInfo m12155_MI;
static PropertyInfo t2149____Entry_PropertyInfo = 
{
	&t2149_TI, "Entry", &m12155_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12156_MI;
static PropertyInfo t2149____Key_PropertyInfo = 
{
	&t2149_TI, "Key", &m12156_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12157_MI;
static PropertyInfo t2149____Current_PropertyInfo = 
{
	&t2149_TI, "Current", &m12157_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2149_PIs[] =
{
	&t2149____Entry_PropertyInfo,
	&t2149____Key_PropertyInfo,
	&t2149____Current_PropertyInfo,
	NULL
};
extern Il2CppType t386_0_0_0;
static ParameterInfo t2149_m12153_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t386_0_0_0},
};
extern TypeInfo t2149_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12153_MI = 
{
	".ctor", (methodPointerType)&m12153, &t2149_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2149_m12153_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2149_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12154_MI = 
{
	"MoveNext", (methodPointerType)&m12154, &t2149_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2149_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854 (MethodInfo* method, void* obj, void** args);
MethodInfo m12155_MI = 
{
	"get_Entry", (methodPointerType)&m12155, &t2149_TI, &t854_0_0_0, RuntimeInvoker_t854, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2149_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12156_MI = 
{
	"get_Key", (methodPointerType)&m12156, &t2149_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2149_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12157_MI = 
{
	"get_Current", (methodPointerType)&m12157, &t2149_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2149_MIs[] =
{
	&m12153_MI,
	&m12154_MI,
	&m12155_MI,
	&m12156_MI,
	&m12157_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m12157_MI;
extern MethodInfo m12154_MI;
extern MethodInfo m12155_MI;
extern MethodInfo m12156_MI;
static MethodInfo* t2149_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m12157_MI,
	&m12154_MI,
	&m12155_MI,
	&m12156_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2149_ITIs[] = 
{
	&t12_TI,
	&t860_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2149_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t860_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2149_0_0_0;
extern Il2CppType t2149_1_0_0;
extern TypeInfo t7_TI;
struct t2149;
extern TypeInfo t2149_TI;
extern Il2CppGenericClass t2149_GC;
extern TypeInfo t859_TI;
TypeInfo t2149_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t2149_MIs, t2149_PIs, t2149_FIs, NULL, &t7_TI, NULL, &t859_TI, &t2149_TI, t2149_ITIs, t2149_VT, &EmptyCustomAttributesCache, &t2149_TI, &t2149_0_0_0, &t2149_1_0_0, t2149_IOs, &t2149_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2149), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#include "t2150.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2150_TI;
#include "t2150MD.h"

extern TypeInfo t2150_TI;
extern TypeInfo t2135_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m12162_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18870_MI;
struct t52;
 t2135  m18870 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18870_MI;


extern MethodInfo m12158_MI;
 void m12158 (t2150 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12159_MI;
 t7 * m12159 (t2150 * __this, MethodInfo* method){
	{
		t2135  L_0 = m12162(__this, &m12162_MI);
		t2135  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t2135_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m12160_MI;
 void m12160 (t2150 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12161_MI;
 bool m12161 (t2150 * __this, MethodInfo* method){
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
extern MethodInfo m12162_MI;
 t2135  m12162 (t2150 * __this, MethodInfo* method){
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
		t2135  L_8 = m18870(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18870_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
extern Il2CppType t52_0_0_1;
FieldInfo t2150_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2150_TI, offsetof(t2150, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2150_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2150_TI, offsetof(t2150, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2150_FIs[] =
{
	&t2150_f0_FieldInfo,
	&t2150_f1_FieldInfo,
	NULL
};
extern MethodInfo m12159_MI;
static PropertyInfo t2150____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2150_TI, "System.Collections.IEnumerator.Current", &m12159_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12162_MI;
static PropertyInfo t2150____Current_PropertyInfo = 
{
	&t2150_TI, "Current", &m12162_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2150_PIs[] =
{
	&t2150____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2150____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2150_m12158_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2150_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12158_MI = 
{
	".ctor", (methodPointerType)&m12158, &t2150_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2150_m12158_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2150_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12159_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12159, &t2150_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2150_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12160_MI = 
{
	"Dispose", (methodPointerType)&m12160, &t2150_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2150_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12161_MI = 
{
	"MoveNext", (methodPointerType)&m12161, &t2150_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2150_TI;
extern Il2CppType t2135_0_0_0;
extern void* RuntimeInvoker_t2135 (MethodInfo* method, void* obj, void** args);
MethodInfo m12162_MI = 
{
	"get_Current", (methodPointerType)&m12162, &t2150_TI, &t2135_0_0_0, RuntimeInvoker_t2135, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2150_MIs[] =
{
	&m12158_MI,
	&m12159_MI,
	&m12160_MI,
	&m12161_MI,
	&m12162_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m12159_MI;
extern MethodInfo m12161_MI;
extern MethodInfo m12160_MI;
extern MethodInfo m12162_MI;
static MethodInfo* t2150_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m12159_MI,
	&m12161_MI,
	&m12160_MI,
	&m12162_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2136_TI;
static TypeInfo* t2150_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2136_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2136_TI;
static Il2CppInterfaceOffsetPair t2150_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2136_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2150_0_0_0;
extern Il2CppType t2150_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2150_TI;
extern Il2CppGenericClass t2150_GC;
extern TypeInfo t52_TI;
TypeInfo t2150_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2150_MIs, t2150_PIs, t2150_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2150_TI, t2150_ITIs, t2150_VT, &EmptyCustomAttributesCache, &t2150_TI, &t2150_0_0_0, &t2150_1_0_0, t2150_IOs, &t2150_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2150)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4184_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
extern MethodInfo m25204_MI;
extern MethodInfo m25205_MI;
static PropertyInfo t4184____Item_PropertyInfo = 
{
	&t4184_TI, "Item", &m25204_MI, &m25205_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4184_PIs[] =
{
	&t4184____Item_PropertyInfo,
	NULL
};
extern Il2CppType t2135_0_0_0;
static ParameterInfo t4184_m25206_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t2135_0_0_0},
};
extern TypeInfo t4184_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t2135 (MethodInfo* method, void* obj, void** args);
MethodInfo m25206_MI = 
{
	"IndexOf", NULL, &t4184_TI, &t60_0_0_0, RuntimeInvoker_t60_t2135, t4184_m25206_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2135_0_0_0;
static ParameterInfo t4184_m25207_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t2135_0_0_0},
};
extern TypeInfo t4184_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t2135 (MethodInfo* method, void* obj, void** args);
MethodInfo m25207_MI = 
{
	"Insert", NULL, &t4184_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t2135, t4184_m25207_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4184_m25208_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4184_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25208_MI = 
{
	"RemoveAt", NULL, &t4184_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4184_m25208_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4184_m25204_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4184_TI;
extern Il2CppType t2135_0_0_0;
extern void* RuntimeInvoker_t2135_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25204_MI = 
{
	"get_Item", NULL, &t4184_TI, &t2135_0_0_0, RuntimeInvoker_t2135_t60, t4184_m25204_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t2135_0_0_0;
static ParameterInfo t4184_m25205_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t2135_0_0_0},
};
extern TypeInfo t4184_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t2135 (MethodInfo* method, void* obj, void** args);
MethodInfo m25205_MI = 
{
	"set_Item", NULL, &t4184_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t2135, t4184_m25205_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4184_MIs[] =
{
	&m25206_MI,
	&m25207_MI,
	&m25208_MI,
	&m25204_MI,
	&m25205_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4183_TI;
extern TypeInfo t4185_TI;
static TypeInfo* t4184_ITIs[] = 
{
	&t618_TI,
	&t4183_TI,
	&t4185_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4184_0_0_0;
extern Il2CppType t4184_1_0_0;
struct t4184;
extern TypeInfo t4184_TI;
extern Il2CppGenericClass t4184_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4184_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4184_MIs, t4184_PIs, NULL, NULL, NULL, NULL, NULL, &t4184_TI, t4184_ITIs, NULL, &t1426__CustomAttributeCache, &t4184_TI, &t4184_0_0_0, &t4184_1_0_0, NULL, &t4184_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5338_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t212_0_0_0;
static ParameterInfo t5338_m25209_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
};
extern TypeInfo t5338_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25209_MI = 
{
	"Remove", NULL, &t5338_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5338_m25209_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5338_MIs[] =
{
	&m25209_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4183_TI;
extern TypeInfo t4185_TI;
static TypeInfo* t5338_ITIs[] = 
{
	&t618_TI,
	&t4183_TI,
	&t4185_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5338_0_0_0;
extern Il2CppType t5338_1_0_0;
struct t5338;
extern TypeInfo t5338_TI;
extern Il2CppGenericClass t5338_GC;
extern CustomAttributesCache t1486__CustomAttributeCache;
TypeInfo t5338_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5338_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5338_TI, t5338_ITIs, NULL, &t1486__CustomAttributeCache, &t5338_TI, &t5338_0_0_0, &t5338_1_0_0, NULL, &t5338_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2152_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern MethodInfo m25210_MI;
static PropertyInfo t2152____Current_PropertyInfo = 
{
	&t2152_TI, "Current", &m25210_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2152_PIs[] =
{
	&t2152____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2152_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25210_MI = 
{
	"get_Current", NULL, &t2152_TI, &t388_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2152_MIs[] =
{
	&m25210_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t2152_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2152_0_0_0;
extern Il2CppType t2152_1_0_0;
struct t2152;
extern TypeInfo t2152_TI;
extern Il2CppGenericClass t2152_GC;
TypeInfo t2152_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2152_MIs, t2152_PIs, NULL, NULL, NULL, NULL, NULL, &t2152_TI, t2152_ITIs, NULL, &EmptyCustomAttributesCache, &t2152_TI, &t2152_0_0_0, &t2152_1_0_0, NULL, &t2152_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2151.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2151_TI;
#include "t2151MD.h"

extern TypeInfo t2151_TI;
extern TypeInfo t388_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m12167_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18881_MI;
struct t52;
#define m18881(__this, p0, method) (t388 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m18881_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t52_0_0_1;
FieldInfo t2151_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2151_TI, offsetof(t2151, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2151_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2151_TI, offsetof(t2151, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2151_FIs[] =
{
	&t2151_f0_FieldInfo,
	&t2151_f1_FieldInfo,
	NULL
};
extern MethodInfo m12164_MI;
static PropertyInfo t2151____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2151_TI, "System.Collections.IEnumerator.Current", &m12164_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12167_MI;
static PropertyInfo t2151____Current_PropertyInfo = 
{
	&t2151_TI, "Current", &m12167_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2151_PIs[] =
{
	&t2151____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2151____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2151_m12163_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2151_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12163_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2151_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2151_m12163_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2151_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12164_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2151_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2151_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12165_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2151_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2151_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12166_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2151_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2151_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12167_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2151_TI, &t388_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2151_MIs[] =
{
	&m12163_MI,
	&m12164_MI,
	&m12165_MI,
	&m12166_MI,
	&m12167_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m12164_MI;
extern MethodInfo m12166_MI;
extern MethodInfo m12165_MI;
extern MethodInfo m12167_MI;
static MethodInfo* t2151_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m12164_MI,
	&m12166_MI,
	&m12165_MI,
	&m12167_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2152_TI;
static TypeInfo* t2151_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2152_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2152_TI;
static Il2CppInterfaceOffsetPair t2151_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2152_TI, 7},
};
extern MethodInfo m12167_MI;
extern TypeInfo t388_TI;
extern MethodInfo m18881_MI;
static void* t2151_RGCTXData[3] = 
{
	&m12167_MI,
	&t388_TI,
	&m18881_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2151_0_0_0;
extern Il2CppType t2151_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2151_TI;
extern Il2CppGenericClass t2151_GC;
extern TypeInfo t52_TI;
TypeInfo t2151_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2151_MIs, t2151_PIs, t2151_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2151_TI, t2151_ITIs, t2151_VT, &EmptyCustomAttributesCache, &t2151_TI, &t2151_0_0_0, &t2151_1_0_0, t2151_IOs, &t2151_GC, NULL, NULL, NULL, t2151_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2151)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4186_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern MethodInfo m25211_MI;
static PropertyInfo t4186____Count_PropertyInfo = 
{
	&t4186_TI, "Count", &m25211_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25212_MI;
static PropertyInfo t4186____IsReadOnly_PropertyInfo = 
{
	&t4186_TI, "IsReadOnly", &m25212_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4186_PIs[] =
{
	&t4186____Count_PropertyInfo,
	&t4186____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4186_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25211_MI = 
{
	"get_Count", NULL, &t4186_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4186_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m25212_MI = 
{
	"get_IsReadOnly", NULL, &t4186_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t4186_m25213_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t4186_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25213_MI = 
{
	"Add", NULL, &t4186_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4186_m25213_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4186_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m25214_MI = 
{
	"Clear", NULL, &t4186_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t4186_m25215_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t4186_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25215_MI = 
{
	"Contains", NULL, &t4186_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4186_m25215_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2130_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4186_m25216_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2130_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4186_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25216_MI = 
{
	"CopyTo", NULL, &t4186_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4186_m25216_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t4186_m25217_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t4186_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25217_MI = 
{
	"Remove", NULL, &t4186_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4186_m25217_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4186_MIs[] =
{
	&m25211_MI,
	&m25212_MI,
	&m25213_MI,
	&m25214_MI,
	&m25215_MI,
	&m25216_MI,
	&m25217_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4188_TI;
static TypeInfo* t4186_ITIs[] = 
{
	&t618_TI,
	&t4188_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4186_0_0_0;
extern Il2CppType t4186_1_0_0;
struct t4186;
extern TypeInfo t4186_TI;
extern Il2CppGenericClass t4186_GC;
TypeInfo t4186_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4186_MIs, t4186_PIs, NULL, NULL, NULL, NULL, NULL, &t4186_TI, t4186_ITIs, NULL, &EmptyCustomAttributesCache, &t4186_TI, &t4186_0_0_0, &t4186_1_0_0, NULL, &t4186_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4188_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern TypeInfo t4188_TI;
extern Il2CppType t2152_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25218_MI = 
{
	"GetEnumerator", NULL, &t4188_TI, &t2152_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4188_MIs[] =
{
	&m25218_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4188_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4188_0_0_0;
extern Il2CppType t4188_1_0_0;
struct t4188;
extern TypeInfo t4188_TI;
extern Il2CppGenericClass t4188_GC;
TypeInfo t4188_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4188_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4188_TI, t4188_ITIs, NULL, &EmptyCustomAttributesCache, &t4188_TI, &t4188_0_0_0, &t4188_1_0_0, NULL, &t4188_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4187_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern MethodInfo m25219_MI;
extern MethodInfo m25220_MI;
static PropertyInfo t4187____Item_PropertyInfo = 
{
	&t4187_TI, "Item", &m25219_MI, &m25220_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4187_PIs[] =
{
	&t4187____Item_PropertyInfo,
	NULL
};
extern Il2CppType t388_0_0_0;
static ParameterInfo t4187_m25221_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t4187_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25221_MI = 
{
	"IndexOf", NULL, &t4187_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4187_m25221_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t4187_m25222_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t4187_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25222_MI = 
{
	"Insert", NULL, &t4187_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4187_m25222_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4187_m25223_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4187_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25223_MI = 
{
	"RemoveAt", NULL, &t4187_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4187_m25223_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4187_m25219_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4187_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25219_MI = 
{
	"get_Item", NULL, &t4187_TI, &t388_0_0_0, RuntimeInvoker_t7_t60, t4187_m25219_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t4187_m25220_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t4187_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25220_MI = 
{
	"set_Item", NULL, &t4187_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4187_m25220_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4187_MIs[] =
{
	&m25221_MI,
	&m25222_MI,
	&m25223_MI,
	&m25219_MI,
	&m25220_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4186_TI;
extern TypeInfo t4188_TI;
static TypeInfo* t4187_ITIs[] = 
{
	&t618_TI,
	&t4186_TI,
	&t4188_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4187_0_0_0;
extern Il2CppType t4187_1_0_0;
struct t4187;
extern TypeInfo t4187_TI;
extern Il2CppGenericClass t4187_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4187_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4187_MIs, t4187_PIs, NULL, NULL, NULL, NULL, NULL, &t4187_TI, t4187_ITIs, NULL, &t1426__CustomAttributeCache, &t4187_TI, &t4187_0_0_0, &t4187_1_0_0, NULL, &t4187_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2133_TI;

#include "t2153.h"
#include "t2154.h"
extern TypeInfo t2133_TI;
extern TypeInfo t669_TI;
extern TypeInfo t7_TI;
extern TypeInfo t222_TI;
extern TypeInfo t60_TI;
extern TypeInfo t87_TI;
extern TypeInfo t62_TI;
extern TypeInfo t2153_TI;
extern TypeInfo t2130_TI;
extern TypeInfo t388_TI;
extern TypeInfo t53_TI;
extern TypeInfo t2154_TI;
#include "t2154MD.h"
#include "t2153MD.h"
extern MethodInfo m7515_MI;
extern MethodInfo m12020_MI;
extern MethodInfo m116_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m7125_MI;
extern MethodInfo m12031_MI;
extern MethodInfo m12180_MI;
extern MethodInfo m12179_MI;
extern MethodInfo m12024_MI;
extern MethodInfo m12026_MI;
extern MethodInfo m12198_MI;
extern MethodInfo m18892_MI;
extern MethodInfo m18893_MI;
extern MethodInfo m12182_MI;
struct t222;
struct t2034;
#include "t2034.h"
#include "t2043.h"
 void m18631_gshared (t2034 * __this, t52 * p0, int32_t p1, t2043 * p2, MethodInfo* method);
#define m18631(__this, p0, p1, p2, method) (void)m18631_gshared((t2034 *)__this, (t52 *)p0, (int32_t)p1, (t2043 *)p2, method)
#define m18892(__this, p0, p1, p2, method) (void)m18631_gshared((t2034 *)__this, (t52 *)p0, (int32_t)p1, (t2043 *)p2, method)
extern MethodInfo m18892_MI;
struct t222;
 void m18893 (t222 * __this, t2130* p0, int32_t p1, t2154 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18893_MI;


extern MethodInfo m12180_MI;
 t2153  m12180 (t2133 * __this, MethodInfo* method){
	{
		t222 * L_0 = (__this->f0);
		t2153  L_1 = {0};
		m12182(&L_1, L_0, &m12182_MI);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t222_0_0_1;
FieldInfo t2133_f0_FieldInfo = 
{
	"dictionary", &t222_0_0_1, &t2133_TI, offsetof(t2133, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2133_FIs[] =
{
	&t2133_f0_FieldInfo,
	NULL
};
extern MethodInfo m12176_MI;
static PropertyInfo t2133____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t2133_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m12176_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12177_MI;
static PropertyInfo t2133____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2133_TI, "System.Collections.ICollection.IsSynchronized", &m12177_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12178_MI;
static PropertyInfo t2133____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2133_TI, "System.Collections.ICollection.SyncRoot", &m12178_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12181_MI;
static PropertyInfo t2133____Count_PropertyInfo = 
{
	&t2133_TI, "Count", &m12181_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2133_PIs[] =
{
	&t2133____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t2133____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2133____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2133____Count_PropertyInfo,
	NULL
};
extern Il2CppType t222_0_0_0;
static ParameterInfo t2133_m12168_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
};
extern TypeInfo t2133_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12168_MI = 
{
	".ctor", (methodPointerType)&m11221_gshared, &t2133_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2133_m12168_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2133_m12169_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2133_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12169_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m11222_gshared, &t2133_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2133_m12169_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2133_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12170_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m11223_gshared, &t2133_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2133_m12171_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2133_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12171_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m11224_gshared, &t2133_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2133_m12171_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2133_m12172_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2133_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12172_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m11225_gshared, &t2133_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t2133_m12172_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2133_TI;
extern Il2CppType t2152_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12173_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m11226_gshared, &t2133_TI, &t2152_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2133_m12174_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2133_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12174_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m11227_gshared, &t2133_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2133_m12174_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2133_TI;
extern Il2CppType t12_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12175_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m11228_gshared, &t2133_TI, &t12_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2133_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12176_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m11229_gshared, &t2133_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2133_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12177_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m11230_gshared, &t2133_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2133_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12178_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m11231_gshared, &t2133_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2130_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t2133_m12179_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2130_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t2133_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12179_MI = 
{
	"CopyTo", (methodPointerType)&m11232_gshared, &t2133_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t2133_m12179_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2133_TI;
extern Il2CppType t2153_0_0_0;
extern void* RuntimeInvoker_t2153 (MethodInfo* method, void* obj, void** args);
MethodInfo m12180_MI = 
{
	"GetEnumerator", (methodPointerType)&m12180, &t2133_TI, &t2153_0_0_0, RuntimeInvoker_t2153, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2133_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m12181_MI = 
{
	"get_Count", (methodPointerType)&m11234_gshared, &t2133_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2133_MIs[] =
{
	&m12168_MI,
	&m12169_MI,
	&m12170_MI,
	&m12171_MI,
	&m12172_MI,
	&m12173_MI,
	&m12174_MI,
	&m12175_MI,
	&m12176_MI,
	&m12177_MI,
	&m12178_MI,
	&m12179_MI,
	&m12180_MI,
	&m12181_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m12175_MI;
extern MethodInfo m12181_MI;
extern MethodInfo m12177_MI;
extern MethodInfo m12178_MI;
extern MethodInfo m12174_MI;
extern MethodInfo m12181_MI;
extern MethodInfo m12176_MI;
extern MethodInfo m12169_MI;
extern MethodInfo m12170_MI;
extern MethodInfo m12171_MI;
extern MethodInfo m12179_MI;
extern MethodInfo m12172_MI;
extern MethodInfo m12173_MI;
static MethodInfo* t2133_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m12175_MI,
	&m12181_MI,
	&m12177_MI,
	&m12178_MI,
	&m12174_MI,
	&m12181_MI,
	&m12176_MI,
	&m12169_MI,
	&m12170_MI,
	&m12171_MI,
	&m12179_MI,
	&m12172_MI,
	&m12173_MI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t4186_TI;
extern TypeInfo t4188_TI;
static TypeInfo* t2133_ITIs[] = 
{
	&t618_TI,
	&t669_TI,
	&t4186_TI,
	&t4188_TI,
};
extern TypeInfo t618_TI;
extern TypeInfo t669_TI;
extern TypeInfo t4186_TI;
extern TypeInfo t4188_TI;
static Il2CppInterfaceOffsetPair t2133_IOs[] = 
{
	{ &t618_TI, 4},
	{ &t669_TI, 5},
	{ &t4186_TI, 9},
	{ &t4188_TI, 16},
};
extern MethodInfo m12031_MI;
extern MethodInfo m12180_MI;
extern TypeInfo t2153_TI;
extern TypeInfo t2130_TI;
extern MethodInfo m12179_MI;
extern MethodInfo m12024_MI;
extern MethodInfo m12026_MI;
extern TypeInfo t2154_TI;
extern MethodInfo m12198_MI;
extern MethodInfo m18892_MI;
extern MethodInfo m18893_MI;
extern MethodInfo m12182_MI;
extern MethodInfo m12020_MI;
static void* t2133_RGCTXData[13] = 
{
	&m12031_MI,
	&m12180_MI,
	&t2153_TI,
	&t2130_TI,
	&m12179_MI,
	&m12024_MI,
	&m12026_MI,
	&t2154_TI,
	&m12198_MI,
	&m18892_MI,
	&m18893_MI,
	&m12182_MI,
	&m12020_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2133_0_0_0;
extern Il2CppType t2133_1_0_0;
extern TypeInfo t7_TI;
struct t2133;
extern TypeInfo t2133_TI;
extern Il2CppGenericClass t2133_GC;
extern TypeInfo t859_TI;
extern CustomAttributesCache t857__CustomAttributeCache;
TypeInfo t2133_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t2133_MIs, t2133_PIs, t2133_FIs, NULL, &t7_TI, NULL, &t859_TI, &t2133_TI, t2133_ITIs, t2133_VT, &t857__CustomAttributeCache, &t2133_TI, &t2133_0_0_0, &t2133_1_0_0, t2133_IOs, &t2133_GC, NULL, NULL, NULL, t2133_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2133), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2153_TI;

extern TypeInfo t2153_TI;
extern TypeInfo t388_TI;
extern TypeInfo t2137_TI;
extern TypeInfo t53_TI;
extern TypeInfo t55_TI;
extern MethodInfo m12194_MI;
extern MethodInfo m12044_MI;
extern MethodInfo m12039_MI;
extern MethodInfo m12197_MI;
extern MethodInfo m12191_MI;


// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t2137_0_0_1;
FieldInfo t2153_f0_FieldInfo = 
{
	"host_enumerator", &t2137_0_0_1, &t2153_TI, offsetof(t2153, f0) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2153_FIs[] =
{
	&t2153_f0_FieldInfo,
	NULL
};
extern MethodInfo m12183_MI;
static PropertyInfo t2153____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2153_TI, "System.Collections.IEnumerator.Current", &m12183_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12186_MI;
static PropertyInfo t2153____Current_PropertyInfo = 
{
	&t2153_TI, "Current", &m12186_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2153_PIs[] =
{
	&t2153____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2153____Current_PropertyInfo,
	NULL
};
extern Il2CppType t222_0_0_0;
static ParameterInfo t2153_m12182_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
};
extern TypeInfo t2153_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12182_MI = 
{
	".ctor", (methodPointerType)&m11235_gshared, &t2153_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2153_m12182_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2153_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12183_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11236_gshared, &t2153_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2153_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12184_MI = 
{
	"Dispose", (methodPointerType)&m11237_gshared, &t2153_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2153_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12185_MI = 
{
	"MoveNext", (methodPointerType)&m11238_gshared, &t2153_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2153_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12186_MI = 
{
	"get_Current", (methodPointerType)&m11239_gshared, &t2153_TI, &t388_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2153_MIs[] =
{
	&m12182_MI,
	&m12183_MI,
	&m12184_MI,
	&m12185_MI,
	&m12186_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m12183_MI;
extern MethodInfo m12185_MI;
extern MethodInfo m12184_MI;
extern MethodInfo m12186_MI;
static MethodInfo* t2153_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m12183_MI,
	&m12185_MI,
	&m12184_MI,
	&m12186_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2152_TI;
static TypeInfo* t2153_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2152_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2152_TI;
static Il2CppInterfaceOffsetPair t2153_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2152_TI, 7},
};
extern MethodInfo m12039_MI;
extern MethodInfo m12194_MI;
extern TypeInfo t388_TI;
extern MethodInfo m12197_MI;
extern MethodInfo m12191_MI;
extern MethodInfo m12044_MI;
static void* t2153_RGCTXData[6] = 
{
	&m12039_MI,
	&m12194_MI,
	&t388_TI,
	&m12197_MI,
	&m12191_MI,
	&m12044_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2153_0_0_0;
extern Il2CppType t2153_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2153_TI;
extern Il2CppGenericClass t2153_GC;
extern TypeInfo t857_TI;
TypeInfo t2153_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2153_MIs, t2153_PIs, t2153_FIs, NULL, &t159_TI, NULL, &t857_TI, &t2153_TI, t2153_ITIs, t2153_VT, &EmptyCustomAttributesCache, &t2153_TI, &t2153_0_0_0, &t2153_1_0_0, t2153_IOs, &t2153_GC, NULL, NULL, NULL, t2153_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2153)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2137_TI;

extern TypeInfo t2137_TI;
extern TypeInfo t2135_TI;
extern TypeInfo t212_TI;
extern TypeInfo t388_TI;
extern TypeInfo t854_TI;
extern TypeInfo t222_TI;
extern TypeInfo t852_TI;
extern TypeInfo t1312_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m12196_MI;
extern MethodInfo m12042_MI;
extern MethodInfo m12044_MI;
extern MethodInfo m4471_MI;
extern MethodInfo m12193_MI;
extern MethodInfo m12195_MI;
extern MethodInfo m12041_MI;
extern MethodInfo m7227_MI;
extern MethodInfo m7023_MI;


extern MethodInfo m12192_MI;
 t2135  m12192 (t2137 * __this, MethodInfo* method){
	{
		t2135  L_0 = (__this->f3);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t222_0_0_1;
FieldInfo t2137_f0_FieldInfo = 
{
	"dictionary", &t222_0_0_1, &t2137_TI, offsetof(t2137, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2137_f1_FieldInfo = 
{
	"next", &t60_0_0_1, &t2137_TI, offsetof(t2137, f1) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2137_f2_FieldInfo = 
{
	"stamp", &t60_0_0_1, &t2137_TI, offsetof(t2137, f2) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t2135_0_0_3;
FieldInfo t2137_f3_FieldInfo = 
{
	"current", &t2135_0_0_3, &t2137_TI, offsetof(t2137, f3) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2137_FIs[] =
{
	&t2137_f0_FieldInfo,
	&t2137_f1_FieldInfo,
	&t2137_f2_FieldInfo,
	&t2137_f3_FieldInfo,
	NULL
};
extern MethodInfo m12188_MI;
static PropertyInfo t2137____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2137_TI, "System.Collections.IEnumerator.Current", &m12188_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12189_MI;
static PropertyInfo t2137____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t2137_TI, "System.Collections.IDictionaryEnumerator.Entry", &m12189_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12190_MI;
static PropertyInfo t2137____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t2137_TI, "System.Collections.IDictionaryEnumerator.Key", &m12190_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12192_MI;
static PropertyInfo t2137____Current_PropertyInfo = 
{
	&t2137_TI, "Current", &m12192_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12193_MI;
static PropertyInfo t2137____CurrentKey_PropertyInfo = 
{
	&t2137_TI, "CurrentKey", &m12193_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12194_MI;
static PropertyInfo t2137____CurrentValue_PropertyInfo = 
{
	&t2137_TI, "CurrentValue", &m12194_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2137_PIs[] =
{
	&t2137____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2137____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t2137____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t2137____Current_PropertyInfo,
	&t2137____CurrentKey_PropertyInfo,
	&t2137____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t222_0_0_0;
static ParameterInfo t2137_m12187_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
};
extern TypeInfo t2137_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12187_MI = 
{
	".ctor", (methodPointerType)&m11240_gshared, &t2137_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2137_m12187_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2137_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12188_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m11241_gshared, &t2137_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2137_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854 (MethodInfo* method, void* obj, void** args);
MethodInfo m12189_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m11242_gshared, &t2137_TI, &t854_0_0_0, RuntimeInvoker_t854, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2137_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12190_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m11243_gshared, &t2137_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2137_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12191_MI = 
{
	"MoveNext", (methodPointerType)&m11244_gshared, &t2137_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2137_TI;
extern Il2CppType t2135_0_0_0;
extern void* RuntimeInvoker_t2135 (MethodInfo* method, void* obj, void** args);
MethodInfo m12192_MI = 
{
	"get_Current", (methodPointerType)&m12192, &t2137_TI, &t2135_0_0_0, RuntimeInvoker_t2135, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2137_TI;
extern Il2CppType t212_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12193_MI = 
{
	"get_CurrentKey", (methodPointerType)&m11246_gshared, &t2137_TI, &t212_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2137_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12194_MI = 
{
	"get_CurrentValue", (methodPointerType)&m11247_gshared, &t2137_TI, &t388_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2137_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12195_MI = 
{
	"VerifyState", (methodPointerType)&m11248_gshared, &t2137_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2137_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12196_MI = 
{
	"VerifyCurrent", (methodPointerType)&m11249_gshared, &t2137_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2137_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12197_MI = 
{
	"Dispose", (methodPointerType)&m11250_gshared, &t2137_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2137_MIs[] =
{
	&m12187_MI,
	&m12188_MI,
	&m12189_MI,
	&m12190_MI,
	&m12191_MI,
	&m12192_MI,
	&m12193_MI,
	&m12194_MI,
	&m12195_MI,
	&m12196_MI,
	&m12197_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m12188_MI;
extern MethodInfo m12191_MI;
extern MethodInfo m12197_MI;
extern MethodInfo m12192_MI;
extern MethodInfo m12189_MI;
extern MethodInfo m12190_MI;
static MethodInfo* t2137_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m12188_MI,
	&m12191_MI,
	&m12197_MI,
	&m12192_MI,
	&m12189_MI,
	&m12190_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2136_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2137_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t2136_TI,
	&t860_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t2136_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2137_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t2136_TI, 7},
	{ &t860_TI, 8},
};
extern MethodInfo m12196_MI;
extern TypeInfo t2135_TI;
extern MethodInfo m12042_MI;
extern TypeInfo t212_TI;
extern MethodInfo m12044_MI;
extern TypeInfo t388_TI;
extern MethodInfo m12193_MI;
extern MethodInfo m12195_MI;
extern MethodInfo m12041_MI;
static void* t2137_RGCTXData[9] = 
{
	&m12196_MI,
	&t2135_TI,
	&m12042_MI,
	&t212_TI,
	&m12044_MI,
	&t388_TI,
	&m12193_MI,
	&m12195_MI,
	&m12041_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2137_0_0_0;
extern Il2CppType t2137_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2137_TI;
extern Il2CppGenericClass t2137_GC;
extern TypeInfo t859_TI;
TypeInfo t2137_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2137_MIs, t2137_PIs, t2137_FIs, NULL, &t159_TI, NULL, &t859_TI, &t2137_TI, t2137_ITIs, t2137_VT, &EmptyCustomAttributesCache, &t2137_TI, &t2137_0_0_0, &t2137_1_0_0, t2137_IOs, &t2137_GC, NULL, NULL, NULL, t2137_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2137)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2154_TI;



// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2154_m12198_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m12198_MI = 
{
	".ctor", (methodPointerType)&m11251_gshared, &t2154_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2154_m12198_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2154_m12199_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12199_MI = 
{
	"Invoke", (methodPointerType)&m11252_gshared, &t2154_TI, &t388_0_0_0, RuntimeInvoker_t7_t7_t7, t2154_m12199_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t388_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2154_m12200_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12200_MI = 
{
	"BeginInvoke", (methodPointerType)&m11253_gshared, &t2154_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t2154_m12200_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2154_m12201_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2154_TI;
extern Il2CppType t388_0_0_0;
extern void* RuntimeInvoker_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12201_MI = 
{
	"EndInvoke", (methodPointerType)&m11254_gshared, &t2154_TI, &t388_0_0_0, RuntimeInvoker_t7_t7, t2154_m12201_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2154_MIs[] =
{
	&m12198_MI,
	&m12199_MI,
	&m12200_MI,
	&m12201_MI,
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
extern MethodInfo m12199_MI;
extern MethodInfo m12200_MI;
extern MethodInfo m12201_MI;
static MethodInfo* t2154_VT[] =
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
	&m12199_MI,
	&m12200_MI,
	&m12201_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2154_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2154_0_0_0;
extern Il2CppType t2154_1_0_0;
extern TypeInfo t245_TI;
struct t2154;
extern TypeInfo t2154_TI;
extern Il2CppGenericClass t2154_GC;
extern TypeInfo t859_TI;
TypeInfo t2154_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2154_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t859_TI, &t2154_TI, NULL, t2154_VT, &EmptyCustomAttributesCache, &t2154_TI, &t2154_0_0_0, &t2154_1_0_0, t2154_IOs, &t2154_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2154), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2132_TI;



extern MethodInfo m12202_MI;
 void m12202 (t2132 * __this, t7 * p0, t114 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m12203_MI;
 t854  m12203 (t2132 * __this, t212 * p0, t388 * p1, MethodInfo* method){
	typedef  t854  (*FunctionPointerType) (t7 * __this, t212 * p0, t388 * p1, MethodInfo* method);
	if (__this->f9)
		m12203((t2132 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m12204_MI;
 t7 * m12204 (t2132 * __this, t212 * p0, t388 * p1, t113 * p2, t7 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m12205_MI;
 t854  m12205 (t2132 * __this, t7 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t854 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.DictionaryEntry>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2132_m12202_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2132_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m12202_MI = 
{
	".ctor", (methodPointerType)&m12202, &t2132_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2132_m12202_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2132_m12203_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2132_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12203_MI = 
{
	"Invoke", (methodPointerType)&m12203, &t2132_TI, &t854_0_0_0, RuntimeInvoker_t854_t7_t7, t2132_m12203_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t388_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2132_m12204_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2132_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12204_MI = 
{
	"BeginInvoke", (methodPointerType)&m12204, &t2132_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t2132_m12204_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2132_m12205_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2132_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12205_MI = 
{
	"EndInvoke", (methodPointerType)&m12205, &t2132_TI, &t854_0_0_0, RuntimeInvoker_t854_t7, t2132_m12205_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2132_MIs[] =
{
	&m12202_MI,
	&m12203_MI,
	&m12204_MI,
	&m12205_MI,
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
extern MethodInfo m12203_MI;
extern MethodInfo m12204_MI;
extern MethodInfo m12205_MI;
static MethodInfo* t2132_VT[] =
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
	&m12203_MI,
	&m12204_MI,
	&m12205_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2132_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2132_0_0_0;
extern Il2CppType t2132_1_0_0;
extern TypeInfo t245_TI;
struct t2132;
extern TypeInfo t2132_TI;
extern Il2CppGenericClass t2132_GC;
extern TypeInfo t859_TI;
TypeInfo t2132_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2132_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t859_TI, &t2132_TI, NULL, t2132_VT, &EmptyCustomAttributesCache, &t2132_TI, &t2132_0_0_0, &t2132_1_0_0, t2132_IOs, &t2132_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2132), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2155_TI;



extern MethodInfo m12206_MI;
 void m12206 (t2155 * __this, t7 * p0, t114 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m12207_MI;
 t2135  m12207 (t2155 * __this, t212 * p0, t388 * p1, MethodInfo* method){
	typedef  t2135  (*FunctionPointerType) (t7 * __this, t212 * p0, t388 * p1, MethodInfo* method);
	if (__this->f9)
		m12207((t2155 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m12208_MI;
 t7 * m12208 (t2155 * __this, t212 * p0, t388 * p1, t113 * p2, t7 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m12209_MI;
 t2135  m12209 (t2155 * __this, t7 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2135 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
extern Il2CppType t7_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t2155_m12206_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern TypeInfo t2155_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t114 (MethodInfo* method, void* obj, void** args);
MethodInfo m12206_MI = 
{
	".ctor", (methodPointerType)&m12206, &t2155_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t114, t2155_m12206_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2155_m12207_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2155_TI;
extern Il2CppType t2135_0_0_0;
extern void* RuntimeInvoker_t2135_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12207_MI = 
{
	"Invoke", (methodPointerType)&m12207, &t2155_TI, &t2135_0_0_0, RuntimeInvoker_t2135_t7_t7, t2155_m12207_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t212_0_0_0;
extern Il2CppType t388_0_0_0;
extern Il2CppType t113_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2155_m12208_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t212_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t113_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2155_TI;
extern Il2CppType t112_0_0_0;
extern void* RuntimeInvoker_t7_t7_t7_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12208_MI = 
{
	"BeginInvoke", (methodPointerType)&m12208, &t2155_TI, &t112_0_0_0, RuntimeInvoker_t7_t7_t7_t7_t7, t2155_m12208_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t112_0_0_0;
static ParameterInfo t2155_m12209_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t112_0_0_0},
};
extern TypeInfo t2155_TI;
extern Il2CppType t2135_0_0_0;
extern void* RuntimeInvoker_t2135_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12209_MI = 
{
	"EndInvoke", (methodPointerType)&m12209, &t2155_TI, &t2135_0_0_0, RuntimeInvoker_t2135_t7, t2155_m12209_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2155_MIs[] =
{
	&m12206_MI,
	&m12207_MI,
	&m12208_MI,
	&m12209_MI,
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
extern MethodInfo m12207_MI;
extern MethodInfo m12208_MI;
extern MethodInfo m12209_MI;
static MethodInfo* t2155_VT[] =
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
	&m12207_MI,
	&m12208_MI,
	&m12209_MI,
};
extern TypeInfo t395_TI;
extern TypeInfo t396_TI;
static Il2CppInterfaceOffsetPair t2155_IOs[] = 
{
	{ &t395_TI, 4},
	{ &t396_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2155_0_0_0;
extern Il2CppType t2155_1_0_0;
extern TypeInfo t245_TI;
struct t2155;
extern TypeInfo t2155_TI;
extern Il2CppGenericClass t2155_GC;
extern TypeInfo t859_TI;
TypeInfo t2155_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2155_MIs, NULL, NULL, NULL, &t245_TI, NULL, &t859_TI, &t2155_TI, NULL, t2155_VT, &EmptyCustomAttributesCache, &t2155_TI, &t2155_0_0_0, &t2155_1_0_0, t2155_IOs, &t2155_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2155), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2156_TI;

extern TypeInfo t2156_TI;
extern TypeInfo t2137_TI;
extern TypeInfo t860_TI;
extern TypeInfo t854_TI;
extern TypeInfo t2135_TI;
extern TypeInfo t212_TI;
extern TypeInfo t55_TI;
extern MethodInfo m7825_MI;
extern MethodInfo m12192_MI;
extern MethodInfo m12042_MI;
extern MethodInfo m12212_MI;
extern MethodInfo m116_MI;
extern MethodInfo m12039_MI;
extern MethodInfo m12191_MI;


// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t2137_0_0_1;
FieldInfo t2156_f0_FieldInfo = 
{
	"host_enumerator", &t2137_0_0_1, &t2156_TI, offsetof(t2156, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2156_FIs[] =
{
	&t2156_f0_FieldInfo,
	NULL
};
extern MethodInfo m12212_MI;
static PropertyInfo t2156____Entry_PropertyInfo = 
{
	&t2156_TI, "Entry", &m12212_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12213_MI;
static PropertyInfo t2156____Key_PropertyInfo = 
{
	&t2156_TI, "Key", &m12213_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12214_MI;
static PropertyInfo t2156____Current_PropertyInfo = 
{
	&t2156_TI, "Current", &m12214_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2156_PIs[] =
{
	&t2156____Entry_PropertyInfo,
	&t2156____Key_PropertyInfo,
	&t2156____Current_PropertyInfo,
	NULL
};
extern Il2CppType t222_0_0_0;
static ParameterInfo t2156_m12210_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t222_0_0_0},
};
extern TypeInfo t2156_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12210_MI = 
{
	".ctor", (methodPointerType)&m11263_gshared, &t2156_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2156_m12210_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2156_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12211_MI = 
{
	"MoveNext", (methodPointerType)&m11264_gshared, &t2156_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2156_TI;
extern Il2CppType t854_0_0_0;
extern void* RuntimeInvoker_t854 (MethodInfo* method, void* obj, void** args);
MethodInfo m12212_MI = 
{
	"get_Entry", (methodPointerType)&m11265_gshared, &t2156_TI, &t854_0_0_0, RuntimeInvoker_t854, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2156_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12213_MI = 
{
	"get_Key", (methodPointerType)&m11266_gshared, &t2156_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2156_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12214_MI = 
{
	"get_Current", (methodPointerType)&m11267_gshared, &t2156_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2156_MIs[] =
{
	&m12210_MI,
	&m12211_MI,
	&m12212_MI,
	&m12213_MI,
	&m12214_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m12214_MI;
extern MethodInfo m12211_MI;
extern MethodInfo m12212_MI;
extern MethodInfo m12213_MI;
static MethodInfo* t2156_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m12214_MI,
	&m12211_MI,
	&m12212_MI,
	&m12213_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t860_TI;
static TypeInfo* t2156_ITIs[] = 
{
	&t12_TI,
	&t860_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t860_TI;
static Il2CppInterfaceOffsetPair t2156_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t860_TI, 6},
};
extern MethodInfo m12039_MI;
extern MethodInfo m12191_MI;
extern TypeInfo t2137_TI;
extern MethodInfo m12192_MI;
extern MethodInfo m12042_MI;
extern TypeInfo t212_TI;
extern MethodInfo m12212_MI;
static void* t2156_RGCTXData[7] = 
{
	&m12039_MI,
	&m12191_MI,
	&t2137_TI,
	&m12192_MI,
	&m12042_MI,
	&t212_TI,
	&m12212_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2156_0_0_0;
extern Il2CppType t2156_1_0_0;
extern TypeInfo t7_TI;
struct t2156;
extern TypeInfo t2156_TI;
extern Il2CppGenericClass t2156_GC;
extern TypeInfo t859_TI;
TypeInfo t2156_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t2156_MIs, t2156_PIs, t2156_FIs, NULL, &t7_TI, NULL, &t859_TI, &t2156_TI, t2156_ITIs, t2156_VT, &EmptyCustomAttributesCache, &t2156_TI, &t2156_0_0_0, &t2156_1_0_0, t2156_IOs, &t2156_GC, NULL, NULL, NULL, t2156_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2156), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5336_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t388_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t5336_m25174_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t5336_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25174_MI = 
{
	"Equals", NULL, &t5336_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t5336_m25174_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t5336_m25224_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t5336_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25224_MI = 
{
	"GetHashCode", NULL, &t5336_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5336_m25224_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5336_MIs[] =
{
	&m25174_MI,
	&m25224_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5336_0_0_0;
extern Il2CppType t5336_1_0_0;
struct t5336;
extern TypeInfo t5336_TI;
extern Il2CppGenericClass t5336_GC;
TypeInfo t5336_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5336_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5336_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5336_TI, &t5336_0_0_0, &t5336_1_0_0, NULL, &t5336_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2157_TI;

#include "t2158.h"
extern TypeInfo t2157_TI;
extern TypeInfo t5340_TI;
extern TypeInfo t70_TI;
extern TypeInfo t388_TI;
extern TypeInfo t55_TI;
extern TypeInfo t863_TI;
extern TypeInfo t553_TI;
extern TypeInfo t2158_TI;
extern TypeInfo t60_TI;
#include "t2158MD.h"
extern Il2CppType t5340_0_0_0;
extern Il2CppType t388_0_0_0;
extern Il2CppType t863_0_0_0;
extern MethodInfo m116_MI;
extern MethodInfo m1675_MI;
extern MethodInfo m3097_MI;
extern MethodInfo m3095_MI;
extern MethodInfo m6560_MI;
extern MethodInfo m12220_MI;
extern MethodInfo m25225_MI;
extern MethodInfo m25175_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t2157_0_0_49;
FieldInfo t2157_f0_FieldInfo = 
{
	"_default", &t2157_0_0_49, &t2157_TI, offsetof(t2157_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2157_FIs[] =
{
	&t2157_f0_FieldInfo,
	NULL
};
extern MethodInfo m12219_MI;
static PropertyInfo t2157____Default_PropertyInfo = 
{
	&t2157_TI, "Default", &m12219_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2157_PIs[] =
{
	&t2157____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2157_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12215_MI = 
{
	".ctor", (methodPointerType)&m8378_gshared, &t2157_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2157_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12216_MI = 
{
	".cctor", (methodPointerType)&m8379_gshared, &t2157_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t2157_m12217_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2157_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12217_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8380_gshared, &t2157_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2157_m12217_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t2157_m12218_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern TypeInfo t2157_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12218_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8381_gshared, &t2157_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2157_m12218_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2157_m25225_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2157_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25225_MI = 
{
	"GetHashCode", NULL, &t2157_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2157_m25225_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2157_m25175_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2157_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25175_MI = 
{
	"Equals", NULL, &t2157_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2157_m25175_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2157_TI;
extern Il2CppType t2157_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12219_MI = 
{
	"get_Default", (methodPointerType)&m8382_gshared, &t2157_TI, &t2157_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2157_MIs[] =
{
	&m12215_MI,
	&m12216_MI,
	&m12217_MI,
	&m12218_MI,
	&m25225_MI,
	&m25175_MI,
	&m12219_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m25175_MI;
extern MethodInfo m25225_MI;
extern MethodInfo m12218_MI;
extern MethodInfo m12217_MI;
static MethodInfo* t2157_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m25175_MI,
	&m25225_MI,
	&m12218_MI,
	&m12217_MI,
	NULL,
	NULL,
};
extern TypeInfo t5336_TI;
extern TypeInfo t886_TI;
static TypeInfo* t2157_ITIs[] = 
{
	&t5336_TI,
	&t886_TI,
};
extern TypeInfo t5336_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t2157_IOs[] = 
{
	{ &t5336_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t5340_0_0_0;
extern Il2CppType t388_0_0_0;
extern TypeInfo t2157_TI;
extern TypeInfo t2157_TI;
extern TypeInfo t2158_TI;
extern MethodInfo m12220_MI;
extern TypeInfo t388_TI;
extern MethodInfo m25225_MI;
extern MethodInfo m25175_MI;
static void* t2157_RGCTXData[9] = 
{
	(void*)&t5340_0_0_0,
	(void*)&t388_0_0_0,
	&t2157_TI,
	&t2157_TI,
	&t2158_TI,
	&m12220_MI,
	&t388_TI,
	&m25225_MI,
	&m25175_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2157_0_0_0;
extern Il2CppType t2157_1_0_0;
extern TypeInfo t7_TI;
struct t2157;
extern TypeInfo t2157_TI;
extern Il2CppGenericClass t2157_GC;
TypeInfo t2157_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2157_MIs, t2157_PIs, t2157_FIs, NULL, &t7_TI, NULL, NULL, &t2157_TI, t2157_ITIs, t2157_VT, &EmptyCustomAttributesCache, &t2157_TI, &t2157_0_0_0, &t2157_1_0_0, t2157_IOs, &t2157_GC, NULL, NULL, NULL, t2157_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2157), 0, -1, sizeof(t2157_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5340_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern Il2CppType t388_0_0_0;
static ParameterInfo t5340_m25226_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t5340_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25226_MI = 
{
	"Equals", NULL, &t5340_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5340_m25226_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5340_MIs[] =
{
	&m25226_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5340_0_0_0;
extern Il2CppType t5340_1_0_0;
struct t5340;
extern TypeInfo t5340_TI;
extern Il2CppGenericClass t5340_GC;
TypeInfo t5340_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5340_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5340_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5340_TI, &t5340_0_0_0, &t5340_1_0_0, NULL, &t5340_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2158_TI;

extern TypeInfo t388_TI;
extern TypeInfo t7_TI;
extern TypeInfo t60_TI;
extern TypeInfo t55_TI;
extern MethodInfo m12215_MI;
extern MethodInfo m122_MI;
extern MethodInfo m121_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
extern TypeInfo t2158_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12220_MI = 
{
	".ctor", (methodPointerType)&m8413_gshared, &t2158_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
static ParameterInfo t2158_m12221_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2158_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12221_MI = 
{
	"GetHashCode", (methodPointerType)&m8414_gshared, &t2158_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t2158_m12221_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t388_0_0_0;
extern Il2CppType t388_0_0_0;
static ParameterInfo t2158_m12222_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t388_0_0_0},
};
extern TypeInfo t2158_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12222_MI = 
{
	"Equals", (methodPointerType)&m8415_gshared, &t2158_TI, &t55_0_0_0, RuntimeInvoker_t55_t7_t7, t2158_m12222_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2158_MIs[] =
{
	&m12220_MI,
	&m12221_MI,
	&m12222_MI,
	NULL
};
extern MethodInfo m121_MI;
extern MethodInfo m113_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m12222_MI;
extern MethodInfo m12221_MI;
extern MethodInfo m12218_MI;
extern MethodInfo m12217_MI;
extern MethodInfo m12221_MI;
extern MethodInfo m12222_MI;
static MethodInfo* t2158_VT[] =
{
	&m121_MI,
	&m113_MI,
	&m122_MI,
	&m123_MI,
	&m12222_MI,
	&m12221_MI,
	&m12218_MI,
	&m12217_MI,
	&m12221_MI,
	&m12222_MI,
};
extern TypeInfo t5336_TI;
extern TypeInfo t886_TI;
static Il2CppInterfaceOffsetPair t2158_IOs[] = 
{
	{ &t5336_TI, 4},
	{ &t886_TI, 6},
};
extern Il2CppType t5340_0_0_0;
extern Il2CppType t388_0_0_0;
extern TypeInfo t2157_TI;
extern TypeInfo t2157_TI;
extern TypeInfo t2158_TI;
extern MethodInfo m12220_MI;
extern TypeInfo t388_TI;
extern MethodInfo m25225_MI;
extern MethodInfo m25175_MI;
extern MethodInfo m12215_MI;
extern TypeInfo t388_TI;
static void* t2158_RGCTXData[11] = 
{
	(void*)&t5340_0_0_0,
	(void*)&t388_0_0_0,
	&t2157_TI,
	&t2157_TI,
	&t2158_TI,
	&m12220_MI,
	&t388_TI,
	&m25225_MI,
	&m25175_MI,
	&m12215_MI,
	&t388_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2158_0_0_0;
extern Il2CppType t2158_1_0_0;
extern TypeInfo t2157_TI;
struct t2158;
extern TypeInfo t2158_TI;
extern Il2CppGenericClass t2158_GC;
extern TypeInfo t862_TI;
TypeInfo t2158_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2158_MIs, NULL, NULL, NULL, &t2157_TI, NULL, &t862_TI, &t2158_TI, NULL, t2158_VT, &EmptyCustomAttributesCache, &t2158_TI, &t2158_0_0_0, &t2158_1_0_0, t2158_IOs, &t2158_GC, NULL, NULL, NULL, t2158_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2158), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3496_TI;

#include "t231.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image>
extern MethodInfo m25227_MI;
static PropertyInfo t3496____Current_PropertyInfo = 
{
	&t3496_TI, "Current", &m25227_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3496_PIs[] =
{
	&t3496____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3496_TI;
extern Il2CppType t231_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25227_MI = 
{
	"get_Current", NULL, &t3496_TI, &t231_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3496_MIs[] =
{
	&m25227_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3496_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3496_0_0_0;
extern Il2CppType t3496_1_0_0;
struct t3496;
extern TypeInfo t3496_TI;
extern Il2CppGenericClass t3496_GC;
TypeInfo t3496_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3496_MIs, t3496_PIs, NULL, NULL, NULL, NULL, NULL, &t3496_TI, t3496_ITIs, NULL, &EmptyCustomAttributesCache, &t3496_TI, &t3496_0_0_0, &t3496_1_0_0, NULL, &t3496_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2159.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2159_TI;
#include "t2159MD.h"

extern TypeInfo t2159_TI;
extern TypeInfo t231_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m12227_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18899_MI;
struct t52;
#define m18899(__this, p0, method) (t231 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m18899_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Image>
extern Il2CppType t52_0_0_1;
FieldInfo t2159_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2159_TI, offsetof(t2159, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2159_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2159_TI, offsetof(t2159, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2159_FIs[] =
{
	&t2159_f0_FieldInfo,
	&t2159_f1_FieldInfo,
	NULL
};
extern MethodInfo m12224_MI;
static PropertyInfo t2159____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2159_TI, "System.Collections.IEnumerator.Current", &m12224_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12227_MI;
static PropertyInfo t2159____Current_PropertyInfo = 
{
	&t2159_TI, "Current", &m12227_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2159_PIs[] =
{
	&t2159____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2159____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2159_m12223_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2159_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12223_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2159_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2159_m12223_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2159_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12224_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2159_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2159_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12225_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2159_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2159_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12226_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2159_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2159_TI;
extern Il2CppType t231_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12227_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2159_TI, &t231_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2159_MIs[] =
{
	&m12223_MI,
	&m12224_MI,
	&m12225_MI,
	&m12226_MI,
	&m12227_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m12224_MI;
extern MethodInfo m12226_MI;
extern MethodInfo m12225_MI;
extern MethodInfo m12227_MI;
static MethodInfo* t2159_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m12224_MI,
	&m12226_MI,
	&m12225_MI,
	&m12227_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3496_TI;
static TypeInfo* t2159_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3496_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3496_TI;
static Il2CppInterfaceOffsetPair t2159_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3496_TI, 7},
};
extern MethodInfo m12227_MI;
extern TypeInfo t231_TI;
extern MethodInfo m18899_MI;
static void* t2159_RGCTXData[3] = 
{
	&m12227_MI,
	&t231_TI,
	&m18899_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2159_0_0_0;
extern Il2CppType t2159_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2159_TI;
extern Il2CppGenericClass t2159_GC;
extern TypeInfo t52_TI;
TypeInfo t2159_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2159_MIs, t2159_PIs, t2159_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2159_TI, t2159_ITIs, t2159_VT, &EmptyCustomAttributesCache, &t2159_TI, &t2159_0_0_0, &t2159_1_0_0, t2159_IOs, &t2159_GC, NULL, NULL, NULL, t2159_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2159)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4189_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Image>
extern MethodInfo m25228_MI;
static PropertyInfo t4189____Count_PropertyInfo = 
{
	&t4189_TI, "Count", &m25228_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25229_MI;
static PropertyInfo t4189____IsReadOnly_PropertyInfo = 
{
	&t4189_TI, "IsReadOnly", &m25229_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4189_PIs[] =
{
	&t4189____Count_PropertyInfo,
	&t4189____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4189_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25228_MI = 
{
	"get_Count", NULL, &t4189_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4189_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m25229_MI = 
{
	"get_IsReadOnly", NULL, &t4189_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t231_0_0_0;
static ParameterInfo t4189_m25230_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t231_0_0_0},
};
extern TypeInfo t4189_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25230_MI = 
{
	"Add", NULL, &t4189_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4189_m25230_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4189_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m25231_MI = 
{
	"Clear", NULL, &t4189_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t231_0_0_0;
static ParameterInfo t4189_m25232_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t231_0_0_0},
};
extern TypeInfo t4189_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25232_MI = 
{
	"Contains", NULL, &t4189_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4189_m25232_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3311_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4189_m25233_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3311_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4189_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25233_MI = 
{
	"CopyTo", NULL, &t4189_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4189_m25233_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t231_0_0_0;
static ParameterInfo t4189_m25234_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t231_0_0_0},
};
extern TypeInfo t4189_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25234_MI = 
{
	"Remove", NULL, &t4189_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4189_m25234_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4189_MIs[] =
{
	&m25228_MI,
	&m25229_MI,
	&m25230_MI,
	&m25231_MI,
	&m25232_MI,
	&m25233_MI,
	&m25234_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4191_TI;
static TypeInfo* t4189_ITIs[] = 
{
	&t618_TI,
	&t4191_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4189_0_0_0;
extern Il2CppType t4189_1_0_0;
struct t4189;
extern TypeInfo t4189_TI;
extern Il2CppGenericClass t4189_GC;
TypeInfo t4189_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4189_MIs, t4189_PIs, NULL, NULL, NULL, NULL, NULL, &t4189_TI, t4189_ITIs, NULL, &EmptyCustomAttributesCache, &t4189_TI, &t4189_0_0_0, &t4189_1_0_0, NULL, &t4189_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4191_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image>
extern TypeInfo t4191_TI;
extern Il2CppType t3496_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25235_MI = 
{
	"GetEnumerator", NULL, &t4191_TI, &t3496_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4191_MIs[] =
{
	&m25235_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4191_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4191_0_0_0;
extern Il2CppType t4191_1_0_0;
struct t4191;
extern TypeInfo t4191_TI;
extern Il2CppGenericClass t4191_GC;
TypeInfo t4191_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4191_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4191_TI, t4191_ITIs, NULL, &EmptyCustomAttributesCache, &t4191_TI, &t4191_0_0_0, &t4191_1_0_0, NULL, &t4191_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4190_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Image>
extern MethodInfo m25236_MI;
extern MethodInfo m25237_MI;
static PropertyInfo t4190____Item_PropertyInfo = 
{
	&t4190_TI, "Item", &m25236_MI, &m25237_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4190_PIs[] =
{
	&t4190____Item_PropertyInfo,
	NULL
};
extern Il2CppType t231_0_0_0;
static ParameterInfo t4190_m25238_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t231_0_0_0},
};
extern TypeInfo t4190_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25238_MI = 
{
	"IndexOf", NULL, &t4190_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4190_m25238_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t231_0_0_0;
static ParameterInfo t4190_m25239_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t231_0_0_0},
};
extern TypeInfo t4190_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25239_MI = 
{
	"Insert", NULL, &t4190_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4190_m25239_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4190_m25240_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4190_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25240_MI = 
{
	"RemoveAt", NULL, &t4190_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4190_m25240_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4190_m25236_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4190_TI;
extern Il2CppType t231_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25236_MI = 
{
	"get_Item", NULL, &t4190_TI, &t231_0_0_0, RuntimeInvoker_t7_t60, t4190_m25236_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t231_0_0_0;
static ParameterInfo t4190_m25237_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t231_0_0_0},
};
extern TypeInfo t4190_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25237_MI = 
{
	"set_Item", NULL, &t4190_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4190_m25237_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4190_MIs[] =
{
	&m25238_MI,
	&m25239_MI,
	&m25240_MI,
	&m25236_MI,
	&m25237_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4189_TI;
extern TypeInfo t4191_TI;
static TypeInfo* t4190_ITIs[] = 
{
	&t618_TI,
	&t4189_TI,
	&t4191_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4190_0_0_0;
extern Il2CppType t4190_1_0_0;
struct t4190;
extern TypeInfo t4190_TI;
extern Il2CppGenericClass t4190_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4190_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4190_MIs, t4190_PIs, NULL, NULL, NULL, NULL, NULL, &t4190_TI, t4190_ITIs, NULL, &t1426__CustomAttributeCache, &t4190_TI, &t4190_0_0_0, &t4190_1_0_0, NULL, &t4190_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4192_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.ICanvasRaycastFilter>
extern MethodInfo m25241_MI;
static PropertyInfo t4192____Count_PropertyInfo = 
{
	&t4192_TI, "Count", &m25241_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25242_MI;
static PropertyInfo t4192____IsReadOnly_PropertyInfo = 
{
	&t4192_TI, "IsReadOnly", &m25242_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4192_PIs[] =
{
	&t4192____Count_PropertyInfo,
	&t4192____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4192_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25241_MI = 
{
	"get_Count", NULL, &t4192_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4192_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m25242_MI = 
{
	"get_IsReadOnly", NULL, &t4192_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t378_0_0_0;
static ParameterInfo t4192_m25243_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t378_0_0_0},
};
extern TypeInfo t4192_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25243_MI = 
{
	"Add", NULL, &t4192_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4192_m25243_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4192_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m25244_MI = 
{
	"Clear", NULL, &t4192_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t378_0_0_0;
static ParameterInfo t4192_m25245_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t378_0_0_0},
};
extern TypeInfo t4192_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25245_MI = 
{
	"Contains", NULL, &t4192_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4192_m25245_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3201_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4192_m25246_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3201_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4192_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25246_MI = 
{
	"CopyTo", NULL, &t4192_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4192_m25246_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t378_0_0_0;
static ParameterInfo t4192_m25247_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t378_0_0_0},
};
extern TypeInfo t4192_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25247_MI = 
{
	"Remove", NULL, &t4192_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4192_m25247_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4192_MIs[] =
{
	&m25241_MI,
	&m25242_MI,
	&m25243_MI,
	&m25244_MI,
	&m25245_MI,
	&m25246_MI,
	&m25247_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4194_TI;
static TypeInfo* t4192_ITIs[] = 
{
	&t618_TI,
	&t4194_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4192_0_0_0;
extern Il2CppType t4192_1_0_0;
struct t4192;
extern TypeInfo t4192_TI;
extern Il2CppGenericClass t4192_GC;
TypeInfo t4192_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4192_MIs, t4192_PIs, NULL, NULL, NULL, NULL, NULL, &t4192_TI, t4192_ITIs, NULL, &EmptyCustomAttributesCache, &t4192_TI, &t4192_0_0_0, &t4192_1_0_0, NULL, &t4192_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4194_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.ICanvasRaycastFilter>
extern TypeInfo t4194_TI;
extern Il2CppType t3497_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25248_MI = 
{
	"GetEnumerator", NULL, &t4194_TI, &t3497_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4194_MIs[] =
{
	&m25248_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4194_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4194_0_0_0;
extern Il2CppType t4194_1_0_0;
struct t4194;
extern TypeInfo t4194_TI;
extern Il2CppGenericClass t4194_GC;
TypeInfo t4194_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4194_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4194_TI, t4194_ITIs, NULL, &EmptyCustomAttributesCache, &t4194_TI, &t4194_0_0_0, &t4194_1_0_0, NULL, &t4194_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3497_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.ICanvasRaycastFilter>
extern MethodInfo m25249_MI;
static PropertyInfo t3497____Current_PropertyInfo = 
{
	&t3497_TI, "Current", &m25249_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3497_PIs[] =
{
	&t3497____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3497_TI;
extern Il2CppType t378_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25249_MI = 
{
	"get_Current", NULL, &t3497_TI, &t378_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3497_MIs[] =
{
	&m25249_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3497_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3497_0_0_0;
extern Il2CppType t3497_1_0_0;
struct t3497;
extern TypeInfo t3497_TI;
extern Il2CppGenericClass t3497_GC;
TypeInfo t3497_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3497_MIs, t3497_PIs, NULL, NULL, NULL, NULL, NULL, &t3497_TI, t3497_ITIs, NULL, &EmptyCustomAttributesCache, &t3497_TI, &t3497_0_0_0, &t3497_1_0_0, NULL, &t3497_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2160.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2160_TI;
#include "t2160MD.h"

extern TypeInfo t2160_TI;
extern TypeInfo t378_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m12232_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m18910_MI;
struct t52;
#define m18910(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m18910_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.ICanvasRaycastFilter>
extern Il2CppType t52_0_0_1;
FieldInfo t2160_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2160_TI, offsetof(t2160, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2160_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2160_TI, offsetof(t2160, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2160_FIs[] =
{
	&t2160_f0_FieldInfo,
	&t2160_f1_FieldInfo,
	NULL
};
extern MethodInfo m12229_MI;
static PropertyInfo t2160____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2160_TI, "System.Collections.IEnumerator.Current", &m12229_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12232_MI;
static PropertyInfo t2160____Current_PropertyInfo = 
{
	&t2160_TI, "Current", &m12232_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2160_PIs[] =
{
	&t2160____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2160____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2160_m12228_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2160_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12228_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2160_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2160_m12228_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2160_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12229_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2160_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2160_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m12230_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2160_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2160_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m12231_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2160_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2160_TI;
extern Il2CppType t378_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m12232_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2160_TI, &t378_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2160_MIs[] =
{
	&m12228_MI,
	&m12229_MI,
	&m12230_MI,
	&m12231_MI,
	&m12232_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m12229_MI;
extern MethodInfo m12231_MI;
extern MethodInfo m12230_MI;
extern MethodInfo m12232_MI;
static MethodInfo* t2160_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m12229_MI,
	&m12231_MI,
	&m12230_MI,
	&m12232_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3497_TI;
static TypeInfo* t2160_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3497_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3497_TI;
static Il2CppInterfaceOffsetPair t2160_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3497_TI, 7},
};
extern MethodInfo m12232_MI;
extern TypeInfo t378_TI;
extern MethodInfo m18910_MI;
static void* t2160_RGCTXData[3] = 
{
	&m12232_MI,
	&t378_TI,
	&m18910_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2160_0_0_0;
extern Il2CppType t2160_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2160_TI;
extern Il2CppGenericClass t2160_GC;
extern TypeInfo t52_TI;
TypeInfo t2160_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2160_MIs, t2160_PIs, t2160_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2160_TI, t2160_ITIs, t2160_VT, &EmptyCustomAttributesCache, &t2160_TI, &t2160_0_0_0, &t2160_1_0_0, t2160_IOs, &t2160_GC, NULL, NULL, NULL, t2160_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2160)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4193_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.ICanvasRaycastFilter>
extern MethodInfo m25250_MI;
extern MethodInfo m25251_MI;
static PropertyInfo t4193____Item_PropertyInfo = 
{
	&t4193_TI, "Item", &m25250_MI, &m25251_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4193_PIs[] =
{
	&t4193____Item_PropertyInfo,
	NULL
};
extern Il2CppType t378_0_0_0;
static ParameterInfo t4193_m25252_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t378_0_0_0},
};
extern TypeInfo t4193_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25252_MI = 
{
	"IndexOf", NULL, &t4193_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t4193_m25252_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t378_0_0_0;
static ParameterInfo t4193_m25253_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t378_0_0_0},
};
extern TypeInfo t4193_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25253_MI = 
{
	"Insert", NULL, &t4193_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4193_m25253_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4193_m25254_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4193_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25254_MI = 
{
	"RemoveAt", NULL, &t4193_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t4193_m25254_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t4193_m25250_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4193_TI;
extern Il2CppType t378_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25250_MI = 
{
	"get_Item", NULL, &t4193_TI, &t378_0_0_0, RuntimeInvoker_t7_t60, t4193_m25250_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t378_0_0_0;
static ParameterInfo t4193_m25251_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t378_0_0_0},
};
extern TypeInfo t4193_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25251_MI = 
{
	"set_Item", NULL, &t4193_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t4193_m25251_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4193_MIs[] =
{
	&m25252_MI,
	&m25253_MI,
	&m25254_MI,
	&m25250_MI,
	&m25251_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4192_TI;
extern TypeInfo t4194_TI;
static TypeInfo* t4193_ITIs[] = 
{
	&t618_TI,
	&t4192_TI,
	&t4194_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4193_0_0_0;
extern Il2CppType t4193_1_0_0;
struct t4193;
extern TypeInfo t4193_TI;
extern Il2CppGenericClass t4193_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t4193_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4193_MIs, t4193_PIs, NULL, NULL, NULL, NULL, NULL, &t4193_TI, t4193_ITIs, NULL, &t1426__CustomAttributeCache, &t4193_TI, &t4193_0_0_0, &t4193_1_0_0, NULL, &t4193_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4195_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.ISerializationCallbackReceiver>
extern MethodInfo m25255_MI;
static PropertyInfo t4195____Count_PropertyInfo = 
{
	&t4195_TI, "Count", &m25255_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25256_MI;
static PropertyInfo t4195____IsReadOnly_PropertyInfo = 
{
	&t4195_TI, "IsReadOnly", &m25256_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4195_PIs[] =
{
	&t4195____Count_PropertyInfo,
	&t4195____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4195_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25255_MI = 
{
	"get_Count", NULL, &t4195_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4195_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m25256_MI = 
{
	"get_IsReadOnly", NULL, &t4195_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t4195_m25257_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t4195_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25257_MI = 
{
	"Add", NULL, &t4195_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t4195_m25257_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4195_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m25258_MI = 
{
	"Clear", NULL, &t4195_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t4195_m25259_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t4195_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25259_MI = 
{
	"Contains", NULL, &t4195_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4195_m25259_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3202_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t4195_m25260_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3202_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t4195_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m25260_MI = 
{
	"CopyTo", NULL, &t4195_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t4195_m25260_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t4195_m25261_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t4195_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25261_MI = 
{
	"Remove", NULL, &t4195_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t4195_m25261_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4195_MIs[] =
{
	&m25255_MI,
	&m25256_MI,
	&m25257_MI,
	&m25258_MI,
	&m25259_MI,
	&m25260_MI,
	&m25261_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t4197_TI;
static TypeInfo* t4195_ITIs[] = 
{
	&t618_TI,
	&t4197_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4195_0_0_0;
extern Il2CppType t4195_1_0_0;
struct t4195;
extern TypeInfo t4195_TI;
extern Il2CppGenericClass t4195_GC;
TypeInfo t4195_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4195_MIs, t4195_PIs, NULL, NULL, NULL, NULL, NULL, &t4195_TI, t4195_ITIs, NULL, &EmptyCustomAttributesCache, &t4195_TI, &t4195_0_0_0, &t4195_1_0_0, NULL, &t4195_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4197_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.ISerializationCallbackReceiver>
extern TypeInfo t4197_TI;
extern Il2CppType t3498_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25262_MI = 
{
	"GetEnumerator", NULL, &t4197_TI, &t3498_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4197_MIs[] =
{
	&m25262_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t4197_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4197_0_0_0;
extern Il2CppType t4197_1_0_0;
struct t4197;
extern TypeInfo t4197_TI;
extern Il2CppGenericClass t4197_GC;
TypeInfo t4197_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4197_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4197_TI, t4197_ITIs, NULL, &EmptyCustomAttributesCache, &t4197_TI, &t4197_0_0_0, &t4197_1_0_0, NULL, &t4197_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3498_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.ISerializationCallbackReceiver>
extern MethodInfo m25263_MI;
static PropertyInfo t3498____Current_PropertyInfo = 
{
	&t3498_TI, "Current", &m25263_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3498_PIs[] =
{
	&t3498____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3498_TI;
extern Il2CppType t344_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m25263_MI = 
{
	"get_Current", NULL, &t3498_TI, &t344_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3498_MIs[] =
{
	&m25263_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3498_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3498_0_0_0;
extern Il2CppType t3498_1_0_0;
struct t3498;
extern TypeInfo t3498_TI;
extern Il2CppGenericClass t3498_GC;
TypeInfo t3498_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3498_MIs, t3498_PIs, NULL, NULL, NULL, NULL, NULL, &t3498_TI, t3498_ITIs, NULL, &EmptyCustomAttributesCache, &t3498_TI, &t3498_0_0_0, &t3498_1_0_0, NULL, &t3498_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
