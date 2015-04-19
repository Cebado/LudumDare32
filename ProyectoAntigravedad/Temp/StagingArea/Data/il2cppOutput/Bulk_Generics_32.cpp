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
extern TypeInfo t3830_TI;

#include "t1047.h"

#include "t52.h"

// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern MethodInfo m29947_MI;
static PropertyInfo t3830____Current_PropertyInfo = 
{
	&t3830_TI, "Current", &m29947_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3830_PIs[] =
{
	&t3830____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3830_TI;
extern Il2CppType t1047_0_0_0;
extern void* RuntimeInvoker_t1047 (MethodInfo* method, void* obj, void** args);
MethodInfo m29947_MI = 
{
	"get_Current", NULL, &t3830_TI, &t1047_0_0_0, RuntimeInvoker_t1047, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3830_MIs[] =
{
	&m29947_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3830_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3830_0_0_0;
extern Il2CppType t3830_1_0_0;
struct t3830;
extern TypeInfo t3830_TI;
extern Il2CppGenericClass t3830_GC;
TypeInfo t3830_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3830_MIs, t3830_PIs, NULL, NULL, NULL, NULL, NULL, &t3830_TI, t3830_ITIs, NULL, &EmptyCustomAttributesCache, &t3830_TI, &t3830_0_0_0, &t3830_1_0_0, NULL, &t3830_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2905.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2905_TI;
#include "t2905MD.h"

#include "t7.h"
#include "t60.h"
#include "t34.h"
#include "t1295.h"
#include "t53.h"
#include "t55.h"
extern TypeInfo t2905_TI;
extern TypeInfo t1047_TI;
extern TypeInfo t1295_TI;
#include "t1295MD.h"
#include "t52MD.h"
extern MethodInfo m16686_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22805_MI;
struct t52;
#include "t88.h"
 uint8_t m22805 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22805_MI;


extern MethodInfo m16682_MI;
 void m16682 (t2905 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16683_MI;
 t7 * m16683 (t2905 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m16686(__this, &m16686_MI);
		uint8_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1047_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16684_MI;
 void m16684 (t2905 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16685_MI;
 bool m16685 (t2905 * __this, MethodInfo* method){
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
extern MethodInfo m16686_MI;
 uint8_t m16686 (t2905 * __this, MethodInfo* method){
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
		uint8_t L_8 = m22805(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22805_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern Il2CppType t52_0_0_1;
FieldInfo t2905_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2905_TI, offsetof(t2905, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2905_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2905_TI, offsetof(t2905, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2905_FIs[] =
{
	&t2905_f0_FieldInfo,
	&t2905_f1_FieldInfo,
	NULL
};
extern MethodInfo m16683_MI;
static PropertyInfo t2905____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2905_TI, "System.Collections.IEnumerator.Current", &m16683_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16686_MI;
static PropertyInfo t2905____Current_PropertyInfo = 
{
	&t2905_TI, "Current", &m16686_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2905_PIs[] =
{
	&t2905____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2905____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2905_m16682_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2905_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16682_MI = 
{
	".ctor", (methodPointerType)&m16682, &t2905_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2905_m16682_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2905_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16683_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16683, &t2905_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2905_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16684_MI = 
{
	"Dispose", (methodPointerType)&m16684, &t2905_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2905_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16685_MI = 
{
	"MoveNext", (methodPointerType)&m16685, &t2905_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2905_TI;
extern Il2CppType t1047_0_0_0;
extern void* RuntimeInvoker_t1047 (MethodInfo* method, void* obj, void** args);
MethodInfo m16686_MI = 
{
	"get_Current", (methodPointerType)&m16686, &t2905_TI, &t1047_0_0_0, RuntimeInvoker_t1047, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2905_MIs[] =
{
	&m16682_MI,
	&m16683_MI,
	&m16684_MI,
	&m16685_MI,
	&m16686_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16683_MI;
extern MethodInfo m16685_MI;
extern MethodInfo m16684_MI;
extern MethodInfo m16686_MI;
static MethodInfo* t2905_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16683_MI,
	&m16685_MI,
	&m16684_MI,
	&m16686_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3830_TI;
static TypeInfo* t2905_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3830_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3830_TI;
static Il2CppInterfaceOffsetPair t2905_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3830_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2905_0_0_0;
extern Il2CppType t2905_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2905_TI;
extern Il2CppGenericClass t2905_GC;
extern TypeInfo t52_TI;
TypeInfo t2905_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2905_MIs, t2905_PIs, t2905_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2905_TI, t2905_ITIs, t2905_VT, &EmptyCustomAttributesCache, &t2905_TI, &t2905_0_0_0, &t2905_1_0_0, t2905_IOs, &t2905_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2905)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5146_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern MethodInfo m29948_MI;
static PropertyInfo t5146____Count_PropertyInfo = 
{
	&t5146_TI, "Count", &m29948_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29949_MI;
static PropertyInfo t5146____IsReadOnly_PropertyInfo = 
{
	&t5146_TI, "IsReadOnly", &m29949_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5146_PIs[] =
{
	&t5146____Count_PropertyInfo,
	&t5146____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5146_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29948_MI = 
{
	"get_Count", NULL, &t5146_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5146_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29949_MI = 
{
	"get_IsReadOnly", NULL, &t5146_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1047_0_0_0;
static ParameterInfo t5146_m29950_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1047_0_0_0},
};
extern TypeInfo t5146_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m29950_MI = 
{
	"Add", NULL, &t5146_TI, &t53_0_0_0, RuntimeInvoker_t53_t89, t5146_m29950_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5146_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29951_MI = 
{
	"Clear", NULL, &t5146_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1047_0_0_0;
static ParameterInfo t5146_m29952_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1047_0_0_0},
};
extern TypeInfo t5146_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m29952_MI = 
{
	"Contains", NULL, &t5146_TI, &t55_0_0_0, RuntimeInvoker_t55_t89, t5146_m29952_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3155_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5146_m29953_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3155_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5146_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29953_MI = 
{
	"CopyTo", NULL, &t5146_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5146_m29953_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1047_0_0_0;
static ParameterInfo t5146_m29954_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1047_0_0_0},
};
extern TypeInfo t5146_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m29954_MI = 
{
	"Remove", NULL, &t5146_TI, &t55_0_0_0, RuntimeInvoker_t55_t89, t5146_m29954_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5146_MIs[] =
{
	&m29948_MI,
	&m29949_MI,
	&m29950_MI,
	&m29951_MI,
	&m29952_MI,
	&m29953_MI,
	&m29954_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5148_TI;
static TypeInfo* t5146_ITIs[] = 
{
	&t618_TI,
	&t5148_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5146_0_0_0;
extern Il2CppType t5146_1_0_0;
struct t5146;
extern TypeInfo t5146_TI;
extern Il2CppGenericClass t5146_GC;
TypeInfo t5146_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5146_MIs, t5146_PIs, NULL, NULL, NULL, NULL, NULL, &t5146_TI, t5146_ITIs, NULL, &EmptyCustomAttributesCache, &t5146_TI, &t5146_0_0_0, &t5146_1_0_0, NULL, &t5146_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5148_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern TypeInfo t5148_TI;
extern Il2CppType t3830_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29955_MI = 
{
	"GetEnumerator", NULL, &t5148_TI, &t3830_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5148_MIs[] =
{
	&m29955_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5148_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5148_0_0_0;
extern Il2CppType t5148_1_0_0;
struct t5148;
extern TypeInfo t5148_TI;
extern Il2CppGenericClass t5148_GC;
TypeInfo t5148_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5148_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5148_TI, t5148_ITIs, NULL, &EmptyCustomAttributesCache, &t5148_TI, &t5148_0_0_0, &t5148_1_0_0, NULL, &t5148_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5147_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern MethodInfo m29956_MI;
extern MethodInfo m29957_MI;
static PropertyInfo t5147____Item_PropertyInfo = 
{
	&t5147_TI, "Item", &m29956_MI, &m29957_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5147_PIs[] =
{
	&t5147____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1047_0_0_0;
static ParameterInfo t5147_m29958_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1047_0_0_0},
};
extern TypeInfo t5147_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m29958_MI = 
{
	"IndexOf", NULL, &t5147_TI, &t60_0_0_0, RuntimeInvoker_t60_t89, t5147_m29958_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1047_0_0_0;
static ParameterInfo t5147_m29959_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1047_0_0_0},
};
extern TypeInfo t5147_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m29959_MI = 
{
	"Insert", NULL, &t5147_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t89, t5147_m29959_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5147_m29960_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5147_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29960_MI = 
{
	"RemoveAt", NULL, &t5147_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5147_m29960_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5147_m29956_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5147_TI;
extern Il2CppType t1047_0_0_0;
extern void* RuntimeInvoker_t1047_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29956_MI = 
{
	"get_Item", NULL, &t5147_TI, &t1047_0_0_0, RuntimeInvoker_t1047_t60, t5147_m29956_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1047_0_0_0;
static ParameterInfo t5147_m29957_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1047_0_0_0},
};
extern TypeInfo t5147_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m29957_MI = 
{
	"set_Item", NULL, &t5147_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t89, t5147_m29957_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5147_MIs[] =
{
	&m29958_MI,
	&m29959_MI,
	&m29960_MI,
	&m29956_MI,
	&m29957_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5146_TI;
extern TypeInfo t5148_TI;
static TypeInfo* t5147_ITIs[] = 
{
	&t618_TI,
	&t5146_TI,
	&t5148_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5147_0_0_0;
extern Il2CppType t5147_1_0_0;
struct t5147;
extern TypeInfo t5147_TI;
extern Il2CppGenericClass t5147_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5147_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5147_MIs, t5147_PIs, NULL, NULL, NULL, NULL, NULL, &t5147_TI, t5147_ITIs, NULL, &t1426__CustomAttributeCache, &t5147_TI, &t5147_0_0_0, &t5147_1_0_0, NULL, &t5147_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3831_TI;

#include "t1059.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Messaging.Header>
extern MethodInfo m29961_MI;
static PropertyInfo t3831____Current_PropertyInfo = 
{
	&t3831_TI, "Current", &m29961_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3831_PIs[] =
{
	&t3831____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3831_TI;
extern Il2CppType t1059_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29961_MI = 
{
	"get_Current", NULL, &t3831_TI, &t1059_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3831_MIs[] =
{
	&m29961_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3831_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3831_0_0_0;
extern Il2CppType t3831_1_0_0;
struct t3831;
extern TypeInfo t3831_TI;
extern Il2CppGenericClass t3831_GC;
TypeInfo t3831_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3831_MIs, t3831_PIs, NULL, NULL, NULL, NULL, NULL, &t3831_TI, t3831_ITIs, NULL, &EmptyCustomAttributesCache, &t3831_TI, &t3831_0_0_0, &t3831_1_0_0, NULL, &t3831_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2906.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2906_TI;
#include "t2906MD.h"

extern TypeInfo t2906_TI;
extern TypeInfo t1059_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16691_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22816_MI;
struct t52;
struct t52;
 t7 * m17147_gshared (t52 * __this, int32_t p0, MethodInfo* method);
#define m17147(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
#define m22816(__this, p0, method) (t1059 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22816_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>
extern Il2CppType t52_0_0_1;
FieldInfo t2906_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2906_TI, offsetof(t2906, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2906_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2906_TI, offsetof(t2906, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2906_FIs[] =
{
	&t2906_f0_FieldInfo,
	&t2906_f1_FieldInfo,
	NULL
};
extern MethodInfo m16688_MI;
static PropertyInfo t2906____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2906_TI, "System.Collections.IEnumerator.Current", &m16688_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16691_MI;
static PropertyInfo t2906____Current_PropertyInfo = 
{
	&t2906_TI, "Current", &m16691_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2906_PIs[] =
{
	&t2906____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2906____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2906_m16687_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2906_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16687_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2906_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2906_m16687_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2906_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16688_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2906_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2906_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16689_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2906_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2906_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16690_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2906_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2906_TI;
extern Il2CppType t1059_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16691_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2906_TI, &t1059_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2906_MIs[] =
{
	&m16687_MI,
	&m16688_MI,
	&m16689_MI,
	&m16690_MI,
	&m16691_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16688_MI;
extern MethodInfo m16690_MI;
extern MethodInfo m16689_MI;
extern MethodInfo m16691_MI;
static MethodInfo* t2906_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16688_MI,
	&m16690_MI,
	&m16689_MI,
	&m16691_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3831_TI;
static TypeInfo* t2906_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3831_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3831_TI;
static Il2CppInterfaceOffsetPair t2906_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3831_TI, 7},
};
extern MethodInfo m16691_MI;
extern TypeInfo t1059_TI;
extern MethodInfo m22816_MI;
static void* t2906_RGCTXData[3] = 
{
	&m16691_MI,
	&t1059_TI,
	&m22816_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2906_0_0_0;
extern Il2CppType t2906_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2906_TI;
extern Il2CppGenericClass t2906_GC;
extern TypeInfo t52_TI;
TypeInfo t2906_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2906_MIs, t2906_PIs, t2906_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2906_TI, t2906_ITIs, t2906_VT, &EmptyCustomAttributesCache, &t2906_TI, &t2906_0_0_0, &t2906_1_0_0, t2906_IOs, &t2906_GC, NULL, NULL, NULL, t2906_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2906)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5149_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>
extern MethodInfo m29962_MI;
static PropertyInfo t5149____Count_PropertyInfo = 
{
	&t5149_TI, "Count", &m29962_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29963_MI;
static PropertyInfo t5149____IsReadOnly_PropertyInfo = 
{
	&t5149_TI, "IsReadOnly", &m29963_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5149_PIs[] =
{
	&t5149____Count_PropertyInfo,
	&t5149____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5149_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29962_MI = 
{
	"get_Count", NULL, &t5149_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5149_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29963_MI = 
{
	"get_IsReadOnly", NULL, &t5149_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1059_0_0_0;
static ParameterInfo t5149_m29964_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1059_0_0_0},
};
extern TypeInfo t5149_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29964_MI = 
{
	"Add", NULL, &t5149_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5149_m29964_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5149_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29965_MI = 
{
	"Clear", NULL, &t5149_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1059_0_0_0;
static ParameterInfo t5149_m29966_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1059_0_0_0},
};
extern TypeInfo t5149_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29966_MI = 
{
	"Contains", NULL, &t5149_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5149_m29966_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1062_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5149_m29967_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1062_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5149_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29967_MI = 
{
	"CopyTo", NULL, &t5149_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5149_m29967_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1059_0_0_0;
static ParameterInfo t5149_m29968_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1059_0_0_0},
};
extern TypeInfo t5149_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29968_MI = 
{
	"Remove", NULL, &t5149_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5149_m29968_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5149_MIs[] =
{
	&m29962_MI,
	&m29963_MI,
	&m29964_MI,
	&m29965_MI,
	&m29966_MI,
	&m29967_MI,
	&m29968_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5151_TI;
static TypeInfo* t5149_ITIs[] = 
{
	&t618_TI,
	&t5151_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5149_0_0_0;
extern Il2CppType t5149_1_0_0;
struct t5149;
extern TypeInfo t5149_TI;
extern Il2CppGenericClass t5149_GC;
TypeInfo t5149_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5149_MIs, t5149_PIs, NULL, NULL, NULL, NULL, NULL, &t5149_TI, t5149_ITIs, NULL, &EmptyCustomAttributesCache, &t5149_TI, &t5149_0_0_0, &t5149_1_0_0, NULL, &t5149_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5151_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Messaging.Header>
extern TypeInfo t5151_TI;
extern Il2CppType t3831_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29969_MI = 
{
	"GetEnumerator", NULL, &t5151_TI, &t3831_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5151_MIs[] =
{
	&m29969_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5151_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5151_0_0_0;
extern Il2CppType t5151_1_0_0;
struct t5151;
extern TypeInfo t5151_TI;
extern Il2CppGenericClass t5151_GC;
TypeInfo t5151_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5151_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5151_TI, t5151_ITIs, NULL, &EmptyCustomAttributesCache, &t5151_TI, &t5151_0_0_0, &t5151_1_0_0, NULL, &t5151_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5150_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>
extern MethodInfo m29970_MI;
extern MethodInfo m29971_MI;
static PropertyInfo t5150____Item_PropertyInfo = 
{
	&t5150_TI, "Item", &m29970_MI, &m29971_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5150_PIs[] =
{
	&t5150____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1059_0_0_0;
static ParameterInfo t5150_m29972_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1059_0_0_0},
};
extern TypeInfo t5150_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29972_MI = 
{
	"IndexOf", NULL, &t5150_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5150_m29972_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1059_0_0_0;
static ParameterInfo t5150_m29973_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1059_0_0_0},
};
extern TypeInfo t5150_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29973_MI = 
{
	"Insert", NULL, &t5150_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5150_m29973_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5150_m29974_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5150_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29974_MI = 
{
	"RemoveAt", NULL, &t5150_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5150_m29974_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5150_m29970_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5150_TI;
extern Il2CppType t1059_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29970_MI = 
{
	"get_Item", NULL, &t5150_TI, &t1059_0_0_0, RuntimeInvoker_t7_t60, t5150_m29970_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1059_0_0_0;
static ParameterInfo t5150_m29971_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1059_0_0_0},
};
extern TypeInfo t5150_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29971_MI = 
{
	"set_Item", NULL, &t5150_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5150_m29971_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5150_MIs[] =
{
	&m29972_MI,
	&m29973_MI,
	&m29974_MI,
	&m29970_MI,
	&m29971_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5149_TI;
extern TypeInfo t5151_TI;
static TypeInfo* t5150_ITIs[] = 
{
	&t618_TI,
	&t5149_TI,
	&t5151_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5150_0_0_0;
extern Il2CppType t5150_1_0_0;
struct t5150;
extern TypeInfo t5150_TI;
extern Il2CppGenericClass t5150_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5150_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5150_MIs, t5150_PIs, NULL, NULL, NULL, NULL, NULL, &t5150_TI, t5150_ITIs, NULL, &t1426__CustomAttributeCache, &t5150_TI, &t5150_0_0_0, &t5150_1_0_0, NULL, &t5150_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3832_TI;

#include "t1075.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>
extern MethodInfo m29975_MI;
static PropertyInfo t3832____Current_PropertyInfo = 
{
	&t3832_TI, "Current", &m29975_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3832_PIs[] =
{
	&t3832____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3832_TI;
extern Il2CppType t1075_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29975_MI = 
{
	"get_Current", NULL, &t3832_TI, &t1075_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3832_MIs[] =
{
	&m29975_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3832_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3832_0_0_0;
extern Il2CppType t3832_1_0_0;
struct t3832;
extern TypeInfo t3832_TI;
extern Il2CppGenericClass t3832_GC;
TypeInfo t3832_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3832_MIs, t3832_PIs, NULL, NULL, NULL, NULL, NULL, &t3832_TI, t3832_ITIs, NULL, &EmptyCustomAttributesCache, &t3832_TI, &t3832_0_0_0, &t3832_1_0_0, NULL, &t3832_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2907.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2907_TI;
#include "t2907MD.h"

extern TypeInfo t2907_TI;
extern TypeInfo t1075_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16696_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22827_MI;
struct t52;
#define m22827(__this, p0, method) (t1075 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22827_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>
extern Il2CppType t52_0_0_1;
FieldInfo t2907_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2907_TI, offsetof(t2907, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2907_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2907_TI, offsetof(t2907, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2907_FIs[] =
{
	&t2907_f0_FieldInfo,
	&t2907_f1_FieldInfo,
	NULL
};
extern MethodInfo m16693_MI;
static PropertyInfo t2907____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2907_TI, "System.Collections.IEnumerator.Current", &m16693_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16696_MI;
static PropertyInfo t2907____Current_PropertyInfo = 
{
	&t2907_TI, "Current", &m16696_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2907_PIs[] =
{
	&t2907____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2907____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2907_m16692_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2907_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16692_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2907_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2907_m16692_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2907_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16693_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2907_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2907_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16694_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2907_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2907_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16695_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2907_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2907_TI;
extern Il2CppType t1075_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16696_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2907_TI, &t1075_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2907_MIs[] =
{
	&m16692_MI,
	&m16693_MI,
	&m16694_MI,
	&m16695_MI,
	&m16696_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16693_MI;
extern MethodInfo m16695_MI;
extern MethodInfo m16694_MI;
extern MethodInfo m16696_MI;
static MethodInfo* t2907_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16693_MI,
	&m16695_MI,
	&m16694_MI,
	&m16696_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3832_TI;
static TypeInfo* t2907_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3832_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3832_TI;
static Il2CppInterfaceOffsetPair t2907_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3832_TI, 7},
};
extern MethodInfo m16696_MI;
extern TypeInfo t1075_TI;
extern MethodInfo m22827_MI;
static void* t2907_RGCTXData[3] = 
{
	&m16696_MI,
	&t1075_TI,
	&m22827_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2907_0_0_0;
extern Il2CppType t2907_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2907_TI;
extern Il2CppGenericClass t2907_GC;
extern TypeInfo t52_TI;
TypeInfo t2907_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2907_MIs, t2907_PIs, t2907_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2907_TI, t2907_ITIs, t2907_VT, &EmptyCustomAttributesCache, &t2907_TI, &t2907_0_0_0, &t2907_1_0_0, t2907_IOs, &t2907_GC, NULL, NULL, NULL, t2907_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2907)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5152_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Proxies.ProxyAttribute>
extern MethodInfo m29976_MI;
static PropertyInfo t5152____Count_PropertyInfo = 
{
	&t5152_TI, "Count", &m29976_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29977_MI;
static PropertyInfo t5152____IsReadOnly_PropertyInfo = 
{
	&t5152_TI, "IsReadOnly", &m29977_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5152_PIs[] =
{
	&t5152____Count_PropertyInfo,
	&t5152____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5152_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29976_MI = 
{
	"get_Count", NULL, &t5152_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5152_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29977_MI = 
{
	"get_IsReadOnly", NULL, &t5152_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1075_0_0_0;
static ParameterInfo t5152_m29978_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1075_0_0_0},
};
extern TypeInfo t5152_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29978_MI = 
{
	"Add", NULL, &t5152_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5152_m29978_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5152_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29979_MI = 
{
	"Clear", NULL, &t5152_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1075_0_0_0;
static ParameterInfo t5152_m29980_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1075_0_0_0},
};
extern TypeInfo t5152_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29980_MI = 
{
	"Contains", NULL, &t5152_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5152_m29980_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3156_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5152_m29981_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3156_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5152_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29981_MI = 
{
	"CopyTo", NULL, &t5152_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5152_m29981_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1075_0_0_0;
static ParameterInfo t5152_m29982_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1075_0_0_0},
};
extern TypeInfo t5152_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29982_MI = 
{
	"Remove", NULL, &t5152_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5152_m29982_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5152_MIs[] =
{
	&m29976_MI,
	&m29977_MI,
	&m29978_MI,
	&m29979_MI,
	&m29980_MI,
	&m29981_MI,
	&m29982_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5154_TI;
static TypeInfo* t5152_ITIs[] = 
{
	&t618_TI,
	&t5154_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5152_0_0_0;
extern Il2CppType t5152_1_0_0;
struct t5152;
extern TypeInfo t5152_TI;
extern Il2CppGenericClass t5152_GC;
TypeInfo t5152_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5152_MIs, t5152_PIs, NULL, NULL, NULL, NULL, NULL, &t5152_TI, t5152_ITIs, NULL, &EmptyCustomAttributesCache, &t5152_TI, &t5152_0_0_0, &t5152_1_0_0, NULL, &t5152_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5154_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Proxies.ProxyAttribute>
extern TypeInfo t5154_TI;
extern Il2CppType t3832_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29983_MI = 
{
	"GetEnumerator", NULL, &t5154_TI, &t3832_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5154_MIs[] =
{
	&m29983_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5154_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5154_0_0_0;
extern Il2CppType t5154_1_0_0;
struct t5154;
extern TypeInfo t5154_TI;
extern Il2CppGenericClass t5154_GC;
TypeInfo t5154_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5154_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5154_TI, t5154_ITIs, NULL, &EmptyCustomAttributesCache, &t5154_TI, &t5154_0_0_0, &t5154_1_0_0, NULL, &t5154_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5153_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Proxies.ProxyAttribute>
extern MethodInfo m29984_MI;
extern MethodInfo m29985_MI;
static PropertyInfo t5153____Item_PropertyInfo = 
{
	&t5153_TI, "Item", &m29984_MI, &m29985_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5153_PIs[] =
{
	&t5153____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1075_0_0_0;
static ParameterInfo t5153_m29986_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1075_0_0_0},
};
extern TypeInfo t5153_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29986_MI = 
{
	"IndexOf", NULL, &t5153_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5153_m29986_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1075_0_0_0;
static ParameterInfo t5153_m29987_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1075_0_0_0},
};
extern TypeInfo t5153_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29987_MI = 
{
	"Insert", NULL, &t5153_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5153_m29987_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5153_m29988_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5153_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29988_MI = 
{
	"RemoveAt", NULL, &t5153_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5153_m29988_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5153_m29984_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5153_TI;
extern Il2CppType t1075_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29984_MI = 
{
	"get_Item", NULL, &t5153_TI, &t1075_0_0_0, RuntimeInvoker_t7_t60, t5153_m29984_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1075_0_0_0;
static ParameterInfo t5153_m29985_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1075_0_0_0},
};
extern TypeInfo t5153_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29985_MI = 
{
	"set_Item", NULL, &t5153_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5153_m29985_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5153_MIs[] =
{
	&m29986_MI,
	&m29987_MI,
	&m29988_MI,
	&m29984_MI,
	&m29985_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5152_TI;
extern TypeInfo t5154_TI;
static TypeInfo* t5153_ITIs[] = 
{
	&t618_TI,
	&t5152_TI,
	&t5154_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5153_0_0_0;
extern Il2CppType t5153_1_0_0;
struct t5153;
extern TypeInfo t5153_TI;
extern Il2CppGenericClass t5153_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5153_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5153_MIs, t5153_PIs, NULL, NULL, NULL, NULL, NULL, &t5153_TI, t5153_ITIs, NULL, &t1426__CustomAttributeCache, &t5153_TI, &t5153_0_0_0, &t5153_1_0_0, NULL, &t5153_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3833_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>
extern MethodInfo m29989_MI;
static PropertyInfo t3833____Current_PropertyInfo = 
{
	&t3833_TI, "Current", &m29989_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3833_PIs[] =
{
	&t3833____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3833_TI;
extern Il2CppType t1552_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29989_MI = 
{
	"get_Current", NULL, &t3833_TI, &t1552_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3833_MIs[] =
{
	&m29989_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3833_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3833_0_0_0;
extern Il2CppType t3833_1_0_0;
struct t3833;
extern TypeInfo t3833_TI;
extern Il2CppGenericClass t3833_GC;
TypeInfo t3833_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3833_MIs, t3833_PIs, NULL, NULL, NULL, NULL, NULL, &t3833_TI, t3833_ITIs, NULL, &EmptyCustomAttributesCache, &t3833_TI, &t3833_0_0_0, &t3833_1_0_0, NULL, &t3833_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2908.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2908_TI;
#include "t2908MD.h"

extern TypeInfo t2908_TI;
extern TypeInfo t1552_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16701_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22838_MI;
struct t52;
#define m22838(__this, p0, method) (t7 *)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22838_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>
extern Il2CppType t52_0_0_1;
FieldInfo t2908_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2908_TI, offsetof(t2908, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2908_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2908_TI, offsetof(t2908, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2908_FIs[] =
{
	&t2908_f0_FieldInfo,
	&t2908_f1_FieldInfo,
	NULL
};
extern MethodInfo m16698_MI;
static PropertyInfo t2908____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2908_TI, "System.Collections.IEnumerator.Current", &m16698_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16701_MI;
static PropertyInfo t2908____Current_PropertyInfo = 
{
	&t2908_TI, "Current", &m16701_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2908_PIs[] =
{
	&t2908____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2908____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2908_m16697_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2908_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16697_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2908_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2908_m16697_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2908_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16698_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2908_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2908_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16699_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2908_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2908_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16700_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2908_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2908_TI;
extern Il2CppType t1552_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16701_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2908_TI, &t1552_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2908_MIs[] =
{
	&m16697_MI,
	&m16698_MI,
	&m16699_MI,
	&m16700_MI,
	&m16701_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16698_MI;
extern MethodInfo m16700_MI;
extern MethodInfo m16699_MI;
extern MethodInfo m16701_MI;
static MethodInfo* t2908_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16698_MI,
	&m16700_MI,
	&m16699_MI,
	&m16701_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3833_TI;
static TypeInfo* t2908_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3833_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3833_TI;
static Il2CppInterfaceOffsetPair t2908_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3833_TI, 7},
};
extern MethodInfo m16701_MI;
extern TypeInfo t1552_TI;
extern MethodInfo m22838_MI;
static void* t2908_RGCTXData[3] = 
{
	&m16701_MI,
	&t1552_TI,
	&m22838_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2908_0_0_0;
extern Il2CppType t2908_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2908_TI;
extern Il2CppGenericClass t2908_GC;
extern TypeInfo t52_TI;
TypeInfo t2908_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2908_MIs, t2908_PIs, t2908_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2908_TI, t2908_ITIs, t2908_VT, &EmptyCustomAttributesCache, &t2908_TI, &t2908_0_0_0, &t2908_1_0_0, t2908_IOs, &t2908_GC, NULL, NULL, NULL, t2908_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2908)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5155_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>
extern MethodInfo m29990_MI;
static PropertyInfo t5155____Count_PropertyInfo = 
{
	&t5155_TI, "Count", &m29990_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29991_MI;
static PropertyInfo t5155____IsReadOnly_PropertyInfo = 
{
	&t5155_TI, "IsReadOnly", &m29991_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5155_PIs[] =
{
	&t5155____Count_PropertyInfo,
	&t5155____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5155_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29990_MI = 
{
	"get_Count", NULL, &t5155_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5155_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m29991_MI = 
{
	"get_IsReadOnly", NULL, &t5155_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1552_0_0_0;
static ParameterInfo t5155_m29992_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1552_0_0_0},
};
extern TypeInfo t5155_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29992_MI = 
{
	"Add", NULL, &t5155_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5155_m29992_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5155_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m29993_MI = 
{
	"Clear", NULL, &t5155_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1552_0_0_0;
static ParameterInfo t5155_m29994_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1552_0_0_0},
};
extern TypeInfo t5155_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29994_MI = 
{
	"Contains", NULL, &t5155_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5155_m29994_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1553_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5155_m29995_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1553_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5155_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29995_MI = 
{
	"CopyTo", NULL, &t5155_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5155_m29995_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1552_0_0_0;
static ParameterInfo t5155_m29996_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1552_0_0_0},
};
extern TypeInfo t5155_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29996_MI = 
{
	"Remove", NULL, &t5155_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5155_m29996_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5155_MIs[] =
{
	&m29990_MI,
	&m29991_MI,
	&m29992_MI,
	&m29993_MI,
	&m29994_MI,
	&m29995_MI,
	&m29996_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5157_TI;
static TypeInfo* t5155_ITIs[] = 
{
	&t618_TI,
	&t5157_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5155_0_0_0;
extern Il2CppType t5155_1_0_0;
struct t5155;
extern TypeInfo t5155_TI;
extern Il2CppGenericClass t5155_GC;
TypeInfo t5155_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5155_MIs, t5155_PIs, NULL, NULL, NULL, NULL, NULL, &t5155_TI, t5155_ITIs, NULL, &EmptyCustomAttributesCache, &t5155_TI, &t5155_0_0_0, &t5155_1_0_0, NULL, &t5155_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5157_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Services.ITrackingHandler>
extern TypeInfo t5157_TI;
extern Il2CppType t3833_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29997_MI = 
{
	"GetEnumerator", NULL, &t5157_TI, &t3833_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5157_MIs[] =
{
	&m29997_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5157_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5157_0_0_0;
extern Il2CppType t5157_1_0_0;
struct t5157;
extern TypeInfo t5157_TI;
extern Il2CppGenericClass t5157_GC;
TypeInfo t5157_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5157_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5157_TI, t5157_ITIs, NULL, &EmptyCustomAttributesCache, &t5157_TI, &t5157_0_0_0, &t5157_1_0_0, NULL, &t5157_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5156_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>
extern MethodInfo m29998_MI;
extern MethodInfo m29999_MI;
static PropertyInfo t5156____Item_PropertyInfo = 
{
	&t5156_TI, "Item", &m29998_MI, &m29999_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5156_PIs[] =
{
	&t5156____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1552_0_0_0;
static ParameterInfo t5156_m30000_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1552_0_0_0},
};
extern TypeInfo t5156_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30000_MI = 
{
	"IndexOf", NULL, &t5156_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5156_m30000_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1552_0_0_0;
static ParameterInfo t5156_m30001_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1552_0_0_0},
};
extern TypeInfo t5156_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30001_MI = 
{
	"Insert", NULL, &t5156_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5156_m30001_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5156_m30002_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5156_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30002_MI = 
{
	"RemoveAt", NULL, &t5156_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5156_m30002_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5156_m29998_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5156_TI;
extern Il2CppType t1552_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m29998_MI = 
{
	"get_Item", NULL, &t5156_TI, &t1552_0_0_0, RuntimeInvoker_t7_t60, t5156_m29998_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1552_0_0_0;
static ParameterInfo t5156_m29999_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1552_0_0_0},
};
extern TypeInfo t5156_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m29999_MI = 
{
	"set_Item", NULL, &t5156_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5156_m29999_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5156_MIs[] =
{
	&m30000_MI,
	&m30001_MI,
	&m30002_MI,
	&m29998_MI,
	&m29999_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5155_TI;
extern TypeInfo t5157_TI;
static TypeInfo* t5156_ITIs[] = 
{
	&t618_TI,
	&t5155_TI,
	&t5157_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5156_0_0_0;
extern Il2CppType t5156_1_0_0;
struct t5156;
extern TypeInfo t5156_TI;
extern Il2CppGenericClass t5156_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5156_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5156_MIs, t5156_PIs, NULL, NULL, NULL, NULL, NULL, &t5156_TI, t5156_ITIs, NULL, &t1426__CustomAttributeCache, &t5156_TI, &t5156_0_0_0, &t5156_1_0_0, NULL, &t5156_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3834_TI;

#include "t1095.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>
extern MethodInfo m30003_MI;
static PropertyInfo t3834____Current_PropertyInfo = 
{
	&t3834_TI, "Current", &m30003_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3834_PIs[] =
{
	&t3834____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3834_TI;
extern Il2CppType t1095_0_0_0;
extern void* RuntimeInvoker_t1095 (MethodInfo* method, void* obj, void** args);
MethodInfo m30003_MI = 
{
	"get_Current", NULL, &t3834_TI, &t1095_0_0_0, RuntimeInvoker_t1095, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3834_MIs[] =
{
	&m30003_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3834_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3834_0_0_0;
extern Il2CppType t3834_1_0_0;
struct t3834;
extern TypeInfo t3834_TI;
extern Il2CppGenericClass t3834_GC;
TypeInfo t3834_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3834_MIs, t3834_PIs, NULL, NULL, NULL, NULL, NULL, &t3834_TI, t3834_ITIs, NULL, &EmptyCustomAttributesCache, &t3834_TI, &t3834_0_0_0, &t3834_1_0_0, NULL, &t3834_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2909.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2909_TI;
#include "t2909MD.h"

extern TypeInfo t2909_TI;
extern TypeInfo t1095_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16706_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22849_MI;
struct t52;
 int32_t m22849 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22849_MI;


extern MethodInfo m16702_MI;
 void m16702 (t2909 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16703_MI;
 t7 * m16703 (t2909 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16706(__this, &m16706_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1095_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16704_MI;
 void m16704 (t2909 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16705_MI;
 bool m16705 (t2909 * __this, MethodInfo* method){
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
extern MethodInfo m16706_MI;
 int32_t m16706 (t2909 * __this, MethodInfo* method){
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
		int32_t L_8 = m22849(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22849_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>
extern Il2CppType t52_0_0_1;
FieldInfo t2909_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2909_TI, offsetof(t2909, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2909_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2909_TI, offsetof(t2909, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2909_FIs[] =
{
	&t2909_f0_FieldInfo,
	&t2909_f1_FieldInfo,
	NULL
};
extern MethodInfo m16703_MI;
static PropertyInfo t2909____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2909_TI, "System.Collections.IEnumerator.Current", &m16703_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16706_MI;
static PropertyInfo t2909____Current_PropertyInfo = 
{
	&t2909_TI, "Current", &m16706_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2909_PIs[] =
{
	&t2909____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2909____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2909_m16702_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2909_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16702_MI = 
{
	".ctor", (methodPointerType)&m16702, &t2909_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2909_m16702_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2909_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16703_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16703, &t2909_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2909_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16704_MI = 
{
	"Dispose", (methodPointerType)&m16704, &t2909_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2909_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16705_MI = 
{
	"MoveNext", (methodPointerType)&m16705, &t2909_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2909_TI;
extern Il2CppType t1095_0_0_0;
extern void* RuntimeInvoker_t1095 (MethodInfo* method, void* obj, void** args);
MethodInfo m16706_MI = 
{
	"get_Current", (methodPointerType)&m16706, &t2909_TI, &t1095_0_0_0, RuntimeInvoker_t1095, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2909_MIs[] =
{
	&m16702_MI,
	&m16703_MI,
	&m16704_MI,
	&m16705_MI,
	&m16706_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16703_MI;
extern MethodInfo m16705_MI;
extern MethodInfo m16704_MI;
extern MethodInfo m16706_MI;
static MethodInfo* t2909_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16703_MI,
	&m16705_MI,
	&m16704_MI,
	&m16706_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3834_TI;
static TypeInfo* t2909_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3834_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3834_TI;
static Il2CppInterfaceOffsetPair t2909_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3834_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2909_0_0_0;
extern Il2CppType t2909_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2909_TI;
extern Il2CppGenericClass t2909_GC;
extern TypeInfo t52_TI;
TypeInfo t2909_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2909_MIs, t2909_PIs, t2909_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2909_TI, t2909_ITIs, t2909_VT, &EmptyCustomAttributesCache, &t2909_TI, &t2909_0_0_0, &t2909_1_0_0, t2909_IOs, &t2909_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2909)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5158_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.WellKnownObjectMode>
extern MethodInfo m30004_MI;
static PropertyInfo t5158____Count_PropertyInfo = 
{
	&t5158_TI, "Count", &m30004_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30005_MI;
static PropertyInfo t5158____IsReadOnly_PropertyInfo = 
{
	&t5158_TI, "IsReadOnly", &m30005_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5158_PIs[] =
{
	&t5158____Count_PropertyInfo,
	&t5158____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5158_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30004_MI = 
{
	"get_Count", NULL, &t5158_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5158_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30005_MI = 
{
	"get_IsReadOnly", NULL, &t5158_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1095_0_0_0;
static ParameterInfo t5158_m30006_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern TypeInfo t5158_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30006_MI = 
{
	"Add", NULL, &t5158_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5158_m30006_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5158_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30007_MI = 
{
	"Clear", NULL, &t5158_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1095_0_0_0;
static ParameterInfo t5158_m30008_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern TypeInfo t5158_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30008_MI = 
{
	"Contains", NULL, &t5158_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5158_m30008_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3157_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5158_m30009_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3157_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5158_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30009_MI = 
{
	"CopyTo", NULL, &t5158_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5158_m30009_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1095_0_0_0;
static ParameterInfo t5158_m30010_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern TypeInfo t5158_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30010_MI = 
{
	"Remove", NULL, &t5158_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5158_m30010_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5158_MIs[] =
{
	&m30004_MI,
	&m30005_MI,
	&m30006_MI,
	&m30007_MI,
	&m30008_MI,
	&m30009_MI,
	&m30010_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5160_TI;
static TypeInfo* t5158_ITIs[] = 
{
	&t618_TI,
	&t5160_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5158_0_0_0;
extern Il2CppType t5158_1_0_0;
struct t5158;
extern TypeInfo t5158_TI;
extern Il2CppGenericClass t5158_GC;
TypeInfo t5158_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5158_MIs, t5158_PIs, NULL, NULL, NULL, NULL, NULL, &t5158_TI, t5158_ITIs, NULL, &EmptyCustomAttributesCache, &t5158_TI, &t5158_0_0_0, &t5158_1_0_0, NULL, &t5158_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5160_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.WellKnownObjectMode>
extern TypeInfo t5160_TI;
extern Il2CppType t3834_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30011_MI = 
{
	"GetEnumerator", NULL, &t5160_TI, &t3834_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5160_MIs[] =
{
	&m30011_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5160_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5160_0_0_0;
extern Il2CppType t5160_1_0_0;
struct t5160;
extern TypeInfo t5160_TI;
extern Il2CppGenericClass t5160_GC;
TypeInfo t5160_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5160_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5160_TI, t5160_ITIs, NULL, &EmptyCustomAttributesCache, &t5160_TI, &t5160_0_0_0, &t5160_1_0_0, NULL, &t5160_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5159_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.WellKnownObjectMode>
extern MethodInfo m30012_MI;
extern MethodInfo m30013_MI;
static PropertyInfo t5159____Item_PropertyInfo = 
{
	&t5159_TI, "Item", &m30012_MI, &m30013_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5159_PIs[] =
{
	&t5159____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1095_0_0_0;
static ParameterInfo t5159_m30014_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern TypeInfo t5159_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30014_MI = 
{
	"IndexOf", NULL, &t5159_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5159_m30014_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1095_0_0_0;
static ParameterInfo t5159_m30015_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern TypeInfo t5159_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30015_MI = 
{
	"Insert", NULL, &t5159_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5159_m30015_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5159_m30016_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5159_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30016_MI = 
{
	"RemoveAt", NULL, &t5159_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5159_m30016_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5159_m30012_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5159_TI;
extern Il2CppType t1095_0_0_0;
extern void* RuntimeInvoker_t1095_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30012_MI = 
{
	"get_Item", NULL, &t5159_TI, &t1095_0_0_0, RuntimeInvoker_t1095_t60, t5159_m30012_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1095_0_0_0;
static ParameterInfo t5159_m30013_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern TypeInfo t5159_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30013_MI = 
{
	"set_Item", NULL, &t5159_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5159_m30013_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5159_MIs[] =
{
	&m30014_MI,
	&m30015_MI,
	&m30016_MI,
	&m30012_MI,
	&m30013_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5158_TI;
extern TypeInfo t5160_TI;
static TypeInfo* t5159_ITIs[] = 
{
	&t618_TI,
	&t5158_TI,
	&t5160_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5159_0_0_0;
extern Il2CppType t5159_1_0_0;
struct t5159;
extern TypeInfo t5159_TI;
extern Il2CppGenericClass t5159_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5159_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5159_MIs, t5159_PIs, NULL, NULL, NULL, NULL, NULL, &t5159_TI, t5159_ITIs, NULL, &t1426__CustomAttributeCache, &t5159_TI, &t5159_0_0_0, &t5159_1_0_0, NULL, &t5159_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3835_TI;

#include "t1101.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>
extern MethodInfo m30017_MI;
static PropertyInfo t3835____Current_PropertyInfo = 
{
	&t3835_TI, "Current", &m30017_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3835_PIs[] =
{
	&t3835____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3835_TI;
extern Il2CppType t1101_0_0_0;
extern void* RuntimeInvoker_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m30017_MI = 
{
	"get_Current", NULL, &t3835_TI, &t1101_0_0_0, RuntimeInvoker_t1101, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3835_MIs[] =
{
	&m30017_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3835_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3835_0_0_0;
extern Il2CppType t3835_1_0_0;
struct t3835;
extern TypeInfo t3835_TI;
extern Il2CppGenericClass t3835_GC;
TypeInfo t3835_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3835_MIs, t3835_PIs, NULL, NULL, NULL, NULL, NULL, &t3835_TI, t3835_ITIs, NULL, &EmptyCustomAttributesCache, &t3835_TI, &t3835_0_0_0, &t3835_1_0_0, NULL, &t3835_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2910.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2910_TI;
#include "t2910MD.h"

extern TypeInfo t2910_TI;
extern TypeInfo t1101_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16711_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22860_MI;
struct t52;
 uint8_t m22860 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22860_MI;


extern MethodInfo m16707_MI;
 void m16707 (t2910 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16708_MI;
 t7 * m16708 (t2910 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m16711(__this, &m16711_MI);
		uint8_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1101_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16709_MI;
 void m16709 (t2910 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16710_MI;
 bool m16710 (t2910 * __this, MethodInfo* method){
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
extern MethodInfo m16711_MI;
 uint8_t m16711 (t2910 * __this, MethodInfo* method){
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
		uint8_t L_8 = m22860(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22860_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>
extern Il2CppType t52_0_0_1;
FieldInfo t2910_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2910_TI, offsetof(t2910, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2910_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2910_TI, offsetof(t2910, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2910_FIs[] =
{
	&t2910_f0_FieldInfo,
	&t2910_f1_FieldInfo,
	NULL
};
extern MethodInfo m16708_MI;
static PropertyInfo t2910____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2910_TI, "System.Collections.IEnumerator.Current", &m16708_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16711_MI;
static PropertyInfo t2910____Current_PropertyInfo = 
{
	&t2910_TI, "Current", &m16711_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2910_PIs[] =
{
	&t2910____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2910____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2910_m16707_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2910_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16707_MI = 
{
	".ctor", (methodPointerType)&m16707, &t2910_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2910_m16707_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2910_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16708_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16708, &t2910_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2910_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16709_MI = 
{
	"Dispose", (methodPointerType)&m16709, &t2910_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2910_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16710_MI = 
{
	"MoveNext", (methodPointerType)&m16710, &t2910_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2910_TI;
extern Il2CppType t1101_0_0_0;
extern void* RuntimeInvoker_t1101 (MethodInfo* method, void* obj, void** args);
MethodInfo m16711_MI = 
{
	"get_Current", (methodPointerType)&m16711, &t2910_TI, &t1101_0_0_0, RuntimeInvoker_t1101, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2910_MIs[] =
{
	&m16707_MI,
	&m16708_MI,
	&m16709_MI,
	&m16710_MI,
	&m16711_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16708_MI;
extern MethodInfo m16710_MI;
extern MethodInfo m16709_MI;
extern MethodInfo m16711_MI;
static MethodInfo* t2910_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16708_MI,
	&m16710_MI,
	&m16709_MI,
	&m16711_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3835_TI;
static TypeInfo* t2910_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3835_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3835_TI;
static Il2CppInterfaceOffsetPair t2910_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3835_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2910_0_0_0;
extern Il2CppType t2910_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2910_TI;
extern Il2CppGenericClass t2910_GC;
extern TypeInfo t52_TI;
TypeInfo t2910_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2910_MIs, t2910_PIs, t2910_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2910_TI, t2910_ITIs, t2910_VT, &EmptyCustomAttributesCache, &t2910_TI, &t2910_0_0_0, &t2910_1_0_0, t2910_IOs, &t2910_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2910)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5161_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>
extern MethodInfo m30018_MI;
static PropertyInfo t5161____Count_PropertyInfo = 
{
	&t5161_TI, "Count", &m30018_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30019_MI;
static PropertyInfo t5161____IsReadOnly_PropertyInfo = 
{
	&t5161_TI, "IsReadOnly", &m30019_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5161_PIs[] =
{
	&t5161____Count_PropertyInfo,
	&t5161____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5161_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30018_MI = 
{
	"get_Count", NULL, &t5161_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5161_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30019_MI = 
{
	"get_IsReadOnly", NULL, &t5161_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1101_0_0_0;
static ParameterInfo t5161_m30020_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern TypeInfo t5161_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30020_MI = 
{
	"Add", NULL, &t5161_TI, &t53_0_0_0, RuntimeInvoker_t53_t89, t5161_m30020_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5161_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30021_MI = 
{
	"Clear", NULL, &t5161_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1101_0_0_0;
static ParameterInfo t5161_m30022_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern TypeInfo t5161_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30022_MI = 
{
	"Contains", NULL, &t5161_TI, &t55_0_0_0, RuntimeInvoker_t55_t89, t5161_m30022_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3158_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5161_m30023_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3158_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5161_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30023_MI = 
{
	"CopyTo", NULL, &t5161_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5161_m30023_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1101_0_0_0;
static ParameterInfo t5161_m30024_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern TypeInfo t5161_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30024_MI = 
{
	"Remove", NULL, &t5161_TI, &t55_0_0_0, RuntimeInvoker_t55_t89, t5161_m30024_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5161_MIs[] =
{
	&m30018_MI,
	&m30019_MI,
	&m30020_MI,
	&m30021_MI,
	&m30022_MI,
	&m30023_MI,
	&m30024_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5163_TI;
static TypeInfo* t5161_ITIs[] = 
{
	&t618_TI,
	&t5163_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5161_0_0_0;
extern Il2CppType t5161_1_0_0;
struct t5161;
extern TypeInfo t5161_TI;
extern Il2CppGenericClass t5161_GC;
TypeInfo t5161_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5161_MIs, t5161_PIs, NULL, NULL, NULL, NULL, NULL, &t5161_TI, t5161_ITIs, NULL, &EmptyCustomAttributesCache, &t5161_TI, &t5161_0_0_0, &t5161_1_0_0, NULL, &t5161_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5163_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>
extern TypeInfo t5163_TI;
extern Il2CppType t3835_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30025_MI = 
{
	"GetEnumerator", NULL, &t5163_TI, &t3835_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5163_MIs[] =
{
	&m30025_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5163_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5163_0_0_0;
extern Il2CppType t5163_1_0_0;
struct t5163;
extern TypeInfo t5163_TI;
extern Il2CppGenericClass t5163_GC;
TypeInfo t5163_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5163_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5163_TI, t5163_ITIs, NULL, &EmptyCustomAttributesCache, &t5163_TI, &t5163_0_0_0, &t5163_1_0_0, NULL, &t5163_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5162_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>
extern MethodInfo m30026_MI;
extern MethodInfo m30027_MI;
static PropertyInfo t5162____Item_PropertyInfo = 
{
	&t5162_TI, "Item", &m30026_MI, &m30027_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5162_PIs[] =
{
	&t5162____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1101_0_0_0;
static ParameterInfo t5162_m30028_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern TypeInfo t5162_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30028_MI = 
{
	"IndexOf", NULL, &t5162_TI, &t60_0_0_0, RuntimeInvoker_t60_t89, t5162_m30028_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t5162_m30029_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern TypeInfo t5162_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30029_MI = 
{
	"Insert", NULL, &t5162_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t89, t5162_m30029_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5162_m30030_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5162_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30030_MI = 
{
	"RemoveAt", NULL, &t5162_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5162_m30030_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5162_m30026_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5162_TI;
extern Il2CppType t1101_0_0_0;
extern void* RuntimeInvoker_t1101_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30026_MI = 
{
	"get_Item", NULL, &t5162_TI, &t1101_0_0_0, RuntimeInvoker_t1101_t60, t5162_m30026_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1101_0_0_0;
static ParameterInfo t5162_m30027_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1101_0_0_0},
};
extern TypeInfo t5162_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30027_MI = 
{
	"set_Item", NULL, &t5162_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t89, t5162_m30027_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5162_MIs[] =
{
	&m30028_MI,
	&m30029_MI,
	&m30030_MI,
	&m30026_MI,
	&m30027_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5161_TI;
extern TypeInfo t5163_TI;
static TypeInfo* t5162_ITIs[] = 
{
	&t618_TI,
	&t5161_TI,
	&t5163_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5162_0_0_0;
extern Il2CppType t5162_1_0_0;
struct t5162;
extern TypeInfo t5162_TI;
extern Il2CppGenericClass t5162_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5162_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5162_MIs, t5162_PIs, NULL, NULL, NULL, NULL, NULL, &t5162_TI, t5162_ITIs, NULL, &t1426__CustomAttributeCache, &t5162_TI, &t5162_0_0_0, &t5162_1_0_0, NULL, &t5162_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3836_TI;

#include "t1102.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern MethodInfo m30031_MI;
static PropertyInfo t3836____Current_PropertyInfo = 
{
	&t3836_TI, "Current", &m30031_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3836_PIs[] =
{
	&t3836____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3836_TI;
extern Il2CppType t1102_0_0_0;
extern void* RuntimeInvoker_t1102 (MethodInfo* method, void* obj, void** args);
MethodInfo m30031_MI = 
{
	"get_Current", NULL, &t3836_TI, &t1102_0_0_0, RuntimeInvoker_t1102, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3836_MIs[] =
{
	&m30031_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3836_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3836_0_0_0;
extern Il2CppType t3836_1_0_0;
struct t3836;
extern TypeInfo t3836_TI;
extern Il2CppGenericClass t3836_GC;
TypeInfo t3836_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3836_MIs, t3836_PIs, NULL, NULL, NULL, NULL, NULL, &t3836_TI, t3836_ITIs, NULL, &EmptyCustomAttributesCache, &t3836_TI, &t3836_0_0_0, &t3836_1_0_0, NULL, &t3836_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2911.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2911_TI;
#include "t2911MD.h"

extern TypeInfo t2911_TI;
extern TypeInfo t1102_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16716_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22871_MI;
struct t52;
 uint8_t m22871 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22871_MI;


extern MethodInfo m16712_MI;
 void m16712 (t2911 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16713_MI;
 t7 * m16713 (t2911 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m16716(__this, &m16716_MI);
		uint8_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1102_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16714_MI;
 void m16714 (t2911 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16715_MI;
 bool m16715 (t2911 * __this, MethodInfo* method){
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
extern MethodInfo m16716_MI;
 uint8_t m16716 (t2911 * __this, MethodInfo* method){
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
		uint8_t L_8 = m22871(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22871_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern Il2CppType t52_0_0_1;
FieldInfo t2911_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2911_TI, offsetof(t2911, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2911_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2911_TI, offsetof(t2911, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2911_FIs[] =
{
	&t2911_f0_FieldInfo,
	&t2911_f1_FieldInfo,
	NULL
};
extern MethodInfo m16713_MI;
static PropertyInfo t2911____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2911_TI, "System.Collections.IEnumerator.Current", &m16713_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16716_MI;
static PropertyInfo t2911____Current_PropertyInfo = 
{
	&t2911_TI, "Current", &m16716_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2911_PIs[] =
{
	&t2911____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2911____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2911_m16712_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2911_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16712_MI = 
{
	".ctor", (methodPointerType)&m16712, &t2911_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2911_m16712_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2911_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16713_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16713, &t2911_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2911_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16714_MI = 
{
	"Dispose", (methodPointerType)&m16714, &t2911_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2911_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16715_MI = 
{
	"MoveNext", (methodPointerType)&m16715, &t2911_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2911_TI;
extern Il2CppType t1102_0_0_0;
extern void* RuntimeInvoker_t1102 (MethodInfo* method, void* obj, void** args);
MethodInfo m16716_MI = 
{
	"get_Current", (methodPointerType)&m16716, &t2911_TI, &t1102_0_0_0, RuntimeInvoker_t1102, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2911_MIs[] =
{
	&m16712_MI,
	&m16713_MI,
	&m16714_MI,
	&m16715_MI,
	&m16716_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16713_MI;
extern MethodInfo m16715_MI;
extern MethodInfo m16714_MI;
extern MethodInfo m16716_MI;
static MethodInfo* t2911_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16713_MI,
	&m16715_MI,
	&m16714_MI,
	&m16716_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3836_TI;
static TypeInfo* t2911_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3836_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3836_TI;
static Il2CppInterfaceOffsetPair t2911_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3836_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2911_0_0_0;
extern Il2CppType t2911_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2911_TI;
extern Il2CppGenericClass t2911_GC;
extern TypeInfo t52_TI;
TypeInfo t2911_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2911_MIs, t2911_PIs, t2911_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2911_TI, t2911_ITIs, t2911_VT, &EmptyCustomAttributesCache, &t2911_TI, &t2911_0_0_0, &t2911_1_0_0, t2911_IOs, &t2911_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2911)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5164_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern MethodInfo m30032_MI;
static PropertyInfo t5164____Count_PropertyInfo = 
{
	&t5164_TI, "Count", &m30032_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30033_MI;
static PropertyInfo t5164____IsReadOnly_PropertyInfo = 
{
	&t5164_TI, "IsReadOnly", &m30033_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5164_PIs[] =
{
	&t5164____Count_PropertyInfo,
	&t5164____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5164_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30032_MI = 
{
	"get_Count", NULL, &t5164_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5164_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30033_MI = 
{
	"get_IsReadOnly", NULL, &t5164_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1102_0_0_0;
static ParameterInfo t5164_m30034_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1102_0_0_0},
};
extern TypeInfo t5164_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30034_MI = 
{
	"Add", NULL, &t5164_TI, &t53_0_0_0, RuntimeInvoker_t53_t89, t5164_m30034_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5164_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30035_MI = 
{
	"Clear", NULL, &t5164_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1102_0_0_0;
static ParameterInfo t5164_m30036_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1102_0_0_0},
};
extern TypeInfo t5164_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30036_MI = 
{
	"Contains", NULL, &t5164_TI, &t55_0_0_0, RuntimeInvoker_t55_t89, t5164_m30036_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1557_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5164_m30037_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1557_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5164_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30037_MI = 
{
	"CopyTo", NULL, &t5164_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5164_m30037_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1102_0_0_0;
static ParameterInfo t5164_m30038_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1102_0_0_0},
};
extern TypeInfo t5164_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30038_MI = 
{
	"Remove", NULL, &t5164_TI, &t55_0_0_0, RuntimeInvoker_t55_t89, t5164_m30038_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5164_MIs[] =
{
	&m30032_MI,
	&m30033_MI,
	&m30034_MI,
	&m30035_MI,
	&m30036_MI,
	&m30037_MI,
	&m30038_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5166_TI;
static TypeInfo* t5164_ITIs[] = 
{
	&t618_TI,
	&t5166_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5164_0_0_0;
extern Il2CppType t5164_1_0_0;
struct t5164;
extern TypeInfo t5164_TI;
extern Il2CppGenericClass t5164_GC;
TypeInfo t5164_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5164_MIs, t5164_PIs, NULL, NULL, NULL, NULL, NULL, &t5164_TI, t5164_ITIs, NULL, &EmptyCustomAttributesCache, &t5164_TI, &t5164_0_0_0, &t5164_1_0_0, NULL, &t5164_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5166_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern TypeInfo t5166_TI;
extern Il2CppType t3836_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30039_MI = 
{
	"GetEnumerator", NULL, &t5166_TI, &t3836_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5166_MIs[] =
{
	&m30039_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5166_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5166_0_0_0;
extern Il2CppType t5166_1_0_0;
struct t5166;
extern TypeInfo t5166_TI;
extern Il2CppGenericClass t5166_GC;
TypeInfo t5166_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5166_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5166_TI, t5166_ITIs, NULL, &EmptyCustomAttributesCache, &t5166_TI, &t5166_0_0_0, &t5166_1_0_0, NULL, &t5166_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5165_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern MethodInfo m30040_MI;
extern MethodInfo m30041_MI;
static PropertyInfo t5165____Item_PropertyInfo = 
{
	&t5165_TI, "Item", &m30040_MI, &m30041_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5165_PIs[] =
{
	&t5165____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1102_0_0_0;
static ParameterInfo t5165_m30042_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1102_0_0_0},
};
extern TypeInfo t5165_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30042_MI = 
{
	"IndexOf", NULL, &t5165_TI, &t60_0_0_0, RuntimeInvoker_t60_t89, t5165_m30042_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1102_0_0_0;
static ParameterInfo t5165_m30043_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1102_0_0_0},
};
extern TypeInfo t5165_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30043_MI = 
{
	"Insert", NULL, &t5165_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t89, t5165_m30043_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5165_m30044_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5165_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30044_MI = 
{
	"RemoveAt", NULL, &t5165_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5165_m30044_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5165_m30040_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5165_TI;
extern Il2CppType t1102_0_0_0;
extern void* RuntimeInvoker_t1102_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30040_MI = 
{
	"get_Item", NULL, &t5165_TI, &t1102_0_0_0, RuntimeInvoker_t1102_t60, t5165_m30040_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1102_0_0_0;
static ParameterInfo t5165_m30041_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1102_0_0_0},
};
extern TypeInfo t5165_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30041_MI = 
{
	"set_Item", NULL, &t5165_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t89, t5165_m30041_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5165_MIs[] =
{
	&m30042_MI,
	&m30043_MI,
	&m30044_MI,
	&m30040_MI,
	&m30041_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5164_TI;
extern TypeInfo t5166_TI;
static TypeInfo* t5165_ITIs[] = 
{
	&t618_TI,
	&t5164_TI,
	&t5166_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5165_0_0_0;
extern Il2CppType t5165_1_0_0;
struct t5165;
extern TypeInfo t5165_TI;
extern Il2CppGenericClass t5165_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5165_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5165_MIs, t5165_PIs, NULL, NULL, NULL, NULL, NULL, &t5165_TI, t5165_ITIs, NULL, &t1426__CustomAttributeCache, &t5165_TI, &t5165_0_0_0, &t5165_1_0_0, NULL, &t5165_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3837_TI;

#include "t1103.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern MethodInfo m30045_MI;
static PropertyInfo t3837____Current_PropertyInfo = 
{
	&t3837_TI, "Current", &m30045_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3837_PIs[] =
{
	&t3837____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3837_TI;
extern Il2CppType t1103_0_0_0;
extern void* RuntimeInvoker_t1103 (MethodInfo* method, void* obj, void** args);
MethodInfo m30045_MI = 
{
	"get_Current", NULL, &t3837_TI, &t1103_0_0_0, RuntimeInvoker_t1103, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3837_MIs[] =
{
	&m30045_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3837_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3837_0_0_0;
extern Il2CppType t3837_1_0_0;
struct t3837;
extern TypeInfo t3837_TI;
extern Il2CppGenericClass t3837_GC;
TypeInfo t3837_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3837_MIs, t3837_PIs, NULL, NULL, NULL, NULL, NULL, &t3837_TI, t3837_ITIs, NULL, &EmptyCustomAttributesCache, &t3837_TI, &t3837_0_0_0, &t3837_1_0_0, NULL, &t3837_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2912.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2912_TI;
#include "t2912MD.h"

extern TypeInfo t2912_TI;
extern TypeInfo t1103_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16721_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22882_MI;
struct t52;
 int32_t m22882 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22882_MI;


extern MethodInfo m16717_MI;
 void m16717 (t2912 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16718_MI;
 t7 * m16718 (t2912 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16721(__this, &m16721_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1103_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16719_MI;
 void m16719 (t2912 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16720_MI;
 bool m16720 (t2912 * __this, MethodInfo* method){
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
extern MethodInfo m16721_MI;
 int32_t m16721 (t2912 * __this, MethodInfo* method){
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
		int32_t L_8 = m22882(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22882_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern Il2CppType t52_0_0_1;
FieldInfo t2912_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2912_TI, offsetof(t2912, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2912_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2912_TI, offsetof(t2912, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2912_FIs[] =
{
	&t2912_f0_FieldInfo,
	&t2912_f1_FieldInfo,
	NULL
};
extern MethodInfo m16718_MI;
static PropertyInfo t2912____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2912_TI, "System.Collections.IEnumerator.Current", &m16718_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16721_MI;
static PropertyInfo t2912____Current_PropertyInfo = 
{
	&t2912_TI, "Current", &m16721_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2912_PIs[] =
{
	&t2912____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2912____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2912_m16717_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2912_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16717_MI = 
{
	".ctor", (methodPointerType)&m16717, &t2912_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2912_m16717_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2912_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16718_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16718, &t2912_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2912_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16719_MI = 
{
	"Dispose", (methodPointerType)&m16719, &t2912_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2912_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16720_MI = 
{
	"MoveNext", (methodPointerType)&m16720, &t2912_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2912_TI;
extern Il2CppType t1103_0_0_0;
extern void* RuntimeInvoker_t1103 (MethodInfo* method, void* obj, void** args);
MethodInfo m16721_MI = 
{
	"get_Current", (methodPointerType)&m16721, &t2912_TI, &t1103_0_0_0, RuntimeInvoker_t1103, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2912_MIs[] =
{
	&m16717_MI,
	&m16718_MI,
	&m16719_MI,
	&m16720_MI,
	&m16721_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16718_MI;
extern MethodInfo m16720_MI;
extern MethodInfo m16719_MI;
extern MethodInfo m16721_MI;
static MethodInfo* t2912_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16718_MI,
	&m16720_MI,
	&m16719_MI,
	&m16721_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3837_TI;
static TypeInfo* t2912_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3837_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3837_TI;
static Il2CppInterfaceOffsetPair t2912_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3837_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2912_0_0_0;
extern Il2CppType t2912_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2912_TI;
extern Il2CppGenericClass t2912_GC;
extern TypeInfo t52_TI;
TypeInfo t2912_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2912_MIs, t2912_PIs, t2912_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2912_TI, t2912_ITIs, t2912_VT, &EmptyCustomAttributesCache, &t2912_TI, &t2912_0_0_0, &t2912_1_0_0, t2912_IOs, &t2912_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2912)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5167_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern MethodInfo m30046_MI;
static PropertyInfo t5167____Count_PropertyInfo = 
{
	&t5167_TI, "Count", &m30046_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30047_MI;
static PropertyInfo t5167____IsReadOnly_PropertyInfo = 
{
	&t5167_TI, "IsReadOnly", &m30047_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5167_PIs[] =
{
	&t5167____Count_PropertyInfo,
	&t5167____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5167_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30046_MI = 
{
	"get_Count", NULL, &t5167_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5167_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30047_MI = 
{
	"get_IsReadOnly", NULL, &t5167_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1103_0_0_0;
static ParameterInfo t5167_m30048_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1103_0_0_0},
};
extern TypeInfo t5167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30048_MI = 
{
	"Add", NULL, &t5167_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5167_m30048_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30049_MI = 
{
	"Clear", NULL, &t5167_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1103_0_0_0;
static ParameterInfo t5167_m30050_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1103_0_0_0},
};
extern TypeInfo t5167_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30050_MI = 
{
	"Contains", NULL, &t5167_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5167_m30050_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3159_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5167_m30051_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3159_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5167_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30051_MI = 
{
	"CopyTo", NULL, &t5167_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5167_m30051_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1103_0_0_0;
static ParameterInfo t5167_m30052_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1103_0_0_0},
};
extern TypeInfo t5167_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30052_MI = 
{
	"Remove", NULL, &t5167_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5167_m30052_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5167_MIs[] =
{
	&m30046_MI,
	&m30047_MI,
	&m30048_MI,
	&m30049_MI,
	&m30050_MI,
	&m30051_MI,
	&m30052_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5169_TI;
static TypeInfo* t5167_ITIs[] = 
{
	&t618_TI,
	&t5169_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5167_0_0_0;
extern Il2CppType t5167_1_0_0;
struct t5167;
extern TypeInfo t5167_TI;
extern Il2CppGenericClass t5167_GC;
TypeInfo t5167_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5167_MIs, t5167_PIs, NULL, NULL, NULL, NULL, NULL, &t5167_TI, t5167_ITIs, NULL, &EmptyCustomAttributesCache, &t5167_TI, &t5167_0_0_0, &t5167_1_0_0, NULL, &t5167_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5169_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern TypeInfo t5169_TI;
extern Il2CppType t3837_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30053_MI = 
{
	"GetEnumerator", NULL, &t5169_TI, &t3837_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5169_MIs[] =
{
	&m30053_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5169_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5169_0_0_0;
extern Il2CppType t5169_1_0_0;
struct t5169;
extern TypeInfo t5169_TI;
extern Il2CppGenericClass t5169_GC;
TypeInfo t5169_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5169_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5169_TI, t5169_ITIs, NULL, &EmptyCustomAttributesCache, &t5169_TI, &t5169_0_0_0, &t5169_1_0_0, NULL, &t5169_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5168_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern MethodInfo m30054_MI;
extern MethodInfo m30055_MI;
static PropertyInfo t5168____Item_PropertyInfo = 
{
	&t5168_TI, "Item", &m30054_MI, &m30055_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5168_PIs[] =
{
	&t5168____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1103_0_0_0;
static ParameterInfo t5168_m30056_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1103_0_0_0},
};
extern TypeInfo t5168_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30056_MI = 
{
	"IndexOf", NULL, &t5168_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5168_m30056_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1103_0_0_0;
static ParameterInfo t5168_m30057_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1103_0_0_0},
};
extern TypeInfo t5168_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30057_MI = 
{
	"Insert", NULL, &t5168_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5168_m30057_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5168_m30058_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5168_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30058_MI = 
{
	"RemoveAt", NULL, &t5168_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5168_m30058_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5168_m30054_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5168_TI;
extern Il2CppType t1103_0_0_0;
extern void* RuntimeInvoker_t1103_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30054_MI = 
{
	"get_Item", NULL, &t5168_TI, &t1103_0_0_0, RuntimeInvoker_t1103_t60, t5168_m30054_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1103_0_0_0;
static ParameterInfo t5168_m30055_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1103_0_0_0},
};
extern TypeInfo t5168_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30055_MI = 
{
	"set_Item", NULL, &t5168_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5168_m30055_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5168_MIs[] =
{
	&m30056_MI,
	&m30057_MI,
	&m30058_MI,
	&m30054_MI,
	&m30055_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5167_TI;
extern TypeInfo t5169_TI;
static TypeInfo* t5168_ITIs[] = 
{
	&t618_TI,
	&t5167_TI,
	&t5169_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5168_0_0_0;
extern Il2CppType t5168_1_0_0;
struct t5168;
extern TypeInfo t5168_TI;
extern Il2CppGenericClass t5168_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5168_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5168_MIs, t5168_PIs, NULL, NULL, NULL, NULL, NULL, &t5168_TI, t5168_ITIs, NULL, &t1426__CustomAttributeCache, &t5168_TI, &t5168_0_0_0, &t5168_1_0_0, NULL, &t5168_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3838_TI;

#include "t1104.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern MethodInfo m30059_MI;
static PropertyInfo t3838____Current_PropertyInfo = 
{
	&t3838_TI, "Current", &m30059_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3838_PIs[] =
{
	&t3838____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3838_TI;
extern Il2CppType t1104_0_0_0;
extern void* RuntimeInvoker_t1104 (MethodInfo* method, void* obj, void** args);
MethodInfo m30059_MI = 
{
	"get_Current", NULL, &t3838_TI, &t1104_0_0_0, RuntimeInvoker_t1104, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3838_MIs[] =
{
	&m30059_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3838_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3838_0_0_0;
extern Il2CppType t3838_1_0_0;
struct t3838;
extern TypeInfo t3838_TI;
extern Il2CppGenericClass t3838_GC;
TypeInfo t3838_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3838_MIs, t3838_PIs, NULL, NULL, NULL, NULL, NULL, &t3838_TI, t3838_ITIs, NULL, &EmptyCustomAttributesCache, &t3838_TI, &t3838_0_0_0, &t3838_1_0_0, NULL, &t3838_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2913.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2913_TI;
#include "t2913MD.h"

extern TypeInfo t2913_TI;
extern TypeInfo t1104_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16726_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22893_MI;
struct t52;
 uint8_t m22893 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22893_MI;


extern MethodInfo m16722_MI;
 void m16722 (t2913 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16723_MI;
 t7 * m16723 (t2913 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m16726(__this, &m16726_MI);
		uint8_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1104_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16724_MI;
 void m16724 (t2913 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16725_MI;
 bool m16725 (t2913 * __this, MethodInfo* method){
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
extern MethodInfo m16726_MI;
 uint8_t m16726 (t2913 * __this, MethodInfo* method){
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
		uint8_t L_8 = m22893(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22893_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern Il2CppType t52_0_0_1;
FieldInfo t2913_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2913_TI, offsetof(t2913, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2913_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2913_TI, offsetof(t2913, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2913_FIs[] =
{
	&t2913_f0_FieldInfo,
	&t2913_f1_FieldInfo,
	NULL
};
extern MethodInfo m16723_MI;
static PropertyInfo t2913____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2913_TI, "System.Collections.IEnumerator.Current", &m16723_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16726_MI;
static PropertyInfo t2913____Current_PropertyInfo = 
{
	&t2913_TI, "Current", &m16726_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2913_PIs[] =
{
	&t2913____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2913____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2913_m16722_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2913_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16722_MI = 
{
	".ctor", (methodPointerType)&m16722, &t2913_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2913_m16722_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2913_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16723_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16723, &t2913_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2913_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16724_MI = 
{
	"Dispose", (methodPointerType)&m16724, &t2913_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2913_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16725_MI = 
{
	"MoveNext", (methodPointerType)&m16725, &t2913_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2913_TI;
extern Il2CppType t1104_0_0_0;
extern void* RuntimeInvoker_t1104 (MethodInfo* method, void* obj, void** args);
MethodInfo m16726_MI = 
{
	"get_Current", (methodPointerType)&m16726, &t2913_TI, &t1104_0_0_0, RuntimeInvoker_t1104, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2913_MIs[] =
{
	&m16722_MI,
	&m16723_MI,
	&m16724_MI,
	&m16725_MI,
	&m16726_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16723_MI;
extern MethodInfo m16725_MI;
extern MethodInfo m16724_MI;
extern MethodInfo m16726_MI;
static MethodInfo* t2913_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16723_MI,
	&m16725_MI,
	&m16724_MI,
	&m16726_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3838_TI;
static TypeInfo* t2913_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3838_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3838_TI;
static Il2CppInterfaceOffsetPair t2913_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3838_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2913_0_0_0;
extern Il2CppType t2913_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2913_TI;
extern Il2CppGenericClass t2913_GC;
extern TypeInfo t52_TI;
TypeInfo t2913_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2913_MIs, t2913_PIs, t2913_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2913_TI, t2913_ITIs, t2913_VT, &EmptyCustomAttributesCache, &t2913_TI, &t2913_0_0_0, &t2913_1_0_0, t2913_IOs, &t2913_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2913)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5170_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern MethodInfo m30060_MI;
static PropertyInfo t5170____Count_PropertyInfo = 
{
	&t5170_TI, "Count", &m30060_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30061_MI;
static PropertyInfo t5170____IsReadOnly_PropertyInfo = 
{
	&t5170_TI, "IsReadOnly", &m30061_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5170_PIs[] =
{
	&t5170____Count_PropertyInfo,
	&t5170____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5170_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30060_MI = 
{
	"get_Count", NULL, &t5170_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5170_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30061_MI = 
{
	"get_IsReadOnly", NULL, &t5170_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1104_0_0_0;
static ParameterInfo t5170_m30062_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1104_0_0_0},
};
extern TypeInfo t5170_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30062_MI = 
{
	"Add", NULL, &t5170_TI, &t53_0_0_0, RuntimeInvoker_t53_t89, t5170_m30062_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5170_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30063_MI = 
{
	"Clear", NULL, &t5170_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1104_0_0_0;
static ParameterInfo t5170_m30064_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1104_0_0_0},
};
extern TypeInfo t5170_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30064_MI = 
{
	"Contains", NULL, &t5170_TI, &t55_0_0_0, RuntimeInvoker_t55_t89, t5170_m30064_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3160_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5170_m30065_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3160_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5170_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30065_MI = 
{
	"CopyTo", NULL, &t5170_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5170_m30065_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1104_0_0_0;
static ParameterInfo t5170_m30066_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1104_0_0_0},
};
extern TypeInfo t5170_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30066_MI = 
{
	"Remove", NULL, &t5170_TI, &t55_0_0_0, RuntimeInvoker_t55_t89, t5170_m30066_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5170_MIs[] =
{
	&m30060_MI,
	&m30061_MI,
	&m30062_MI,
	&m30063_MI,
	&m30064_MI,
	&m30065_MI,
	&m30066_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5172_TI;
static TypeInfo* t5170_ITIs[] = 
{
	&t618_TI,
	&t5172_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5170_0_0_0;
extern Il2CppType t5170_1_0_0;
struct t5170;
extern TypeInfo t5170_TI;
extern Il2CppGenericClass t5170_GC;
TypeInfo t5170_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5170_MIs, t5170_PIs, NULL, NULL, NULL, NULL, NULL, &t5170_TI, t5170_ITIs, NULL, &EmptyCustomAttributesCache, &t5170_TI, &t5170_0_0_0, &t5170_1_0_0, NULL, &t5170_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5172_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern TypeInfo t5172_TI;
extern Il2CppType t3838_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30067_MI = 
{
	"GetEnumerator", NULL, &t5172_TI, &t3838_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5172_MIs[] =
{
	&m30067_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5172_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5172_0_0_0;
extern Il2CppType t5172_1_0_0;
struct t5172;
extern TypeInfo t5172_TI;
extern Il2CppGenericClass t5172_GC;
TypeInfo t5172_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5172_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5172_TI, t5172_ITIs, NULL, &EmptyCustomAttributesCache, &t5172_TI, &t5172_0_0_0, &t5172_1_0_0, NULL, &t5172_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5171_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern MethodInfo m30068_MI;
extern MethodInfo m30069_MI;
static PropertyInfo t5171____Item_PropertyInfo = 
{
	&t5171_TI, "Item", &m30068_MI, &m30069_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5171_PIs[] =
{
	&t5171____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1104_0_0_0;
static ParameterInfo t5171_m30070_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1104_0_0_0},
};
extern TypeInfo t5171_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30070_MI = 
{
	"IndexOf", NULL, &t5171_TI, &t60_0_0_0, RuntimeInvoker_t60_t89, t5171_m30070_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1104_0_0_0;
static ParameterInfo t5171_m30071_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1104_0_0_0},
};
extern TypeInfo t5171_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30071_MI = 
{
	"Insert", NULL, &t5171_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t89, t5171_m30071_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5171_m30072_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5171_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30072_MI = 
{
	"RemoveAt", NULL, &t5171_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5171_m30072_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5171_m30068_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5171_TI;
extern Il2CppType t1104_0_0_0;
extern void* RuntimeInvoker_t1104_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30068_MI = 
{
	"get_Item", NULL, &t5171_TI, &t1104_0_0_0, RuntimeInvoker_t1104_t60, t5171_m30068_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1104_0_0_0;
static ParameterInfo t5171_m30069_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1104_0_0_0},
};
extern TypeInfo t5171_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t89 (MethodInfo* method, void* obj, void** args);
MethodInfo m30069_MI = 
{
	"set_Item", NULL, &t5171_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t89, t5171_m30069_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5171_MIs[] =
{
	&m30070_MI,
	&m30071_MI,
	&m30072_MI,
	&m30068_MI,
	&m30069_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5170_TI;
extern TypeInfo t5172_TI;
static TypeInfo* t5171_ITIs[] = 
{
	&t618_TI,
	&t5170_TI,
	&t5172_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5171_0_0_0;
extern Il2CppType t5171_1_0_0;
struct t5171;
extern TypeInfo t5171_TI;
extern Il2CppGenericClass t5171_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5171_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5171_MIs, t5171_PIs, NULL, NULL, NULL, NULL, NULL, &t5171_TI, t5171_ITIs, NULL, &t1426__CustomAttributeCache, &t5171_TI, &t5171_0_0_0, &t5171_1_0_0, NULL, &t5171_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3839_TI;

#include "t482.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DateTime>
extern MethodInfo m30073_MI;
static PropertyInfo t3839____Current_PropertyInfo = 
{
	&t3839_TI, "Current", &m30073_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3839_PIs[] =
{
	&t3839____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3839_TI;
extern Il2CppType t482_0_0_0;
extern void* RuntimeInvoker_t482 (MethodInfo* method, void* obj, void** args);
MethodInfo m30073_MI = 
{
	"get_Current", NULL, &t3839_TI, &t482_0_0_0, RuntimeInvoker_t482, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3839_MIs[] =
{
	&m30073_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3839_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3839_0_0_0;
extern Il2CppType t3839_1_0_0;
struct t3839;
extern TypeInfo t3839_TI;
extern Il2CppGenericClass t3839_GC;
TypeInfo t3839_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3839_MIs, t3839_PIs, NULL, NULL, NULL, NULL, NULL, &t3839_TI, t3839_ITIs, NULL, &EmptyCustomAttributesCache, &t3839_TI, &t3839_0_0_0, &t3839_1_0_0, NULL, &t3839_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2914.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2914_TI;
#include "t2914MD.h"

extern TypeInfo t2914_TI;
extern TypeInfo t482_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16731_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22904_MI;
struct t52;
 t482  m22904 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22904_MI;


extern MethodInfo m16727_MI;
 void m16727 (t2914 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16728_MI;
 t7 * m16728 (t2914 * __this, MethodInfo* method){
	{
		t482  L_0 = m16731(__this, &m16731_MI);
		t482  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t482_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16729_MI;
 void m16729 (t2914 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16730_MI;
 bool m16730 (t2914 * __this, MethodInfo* method){
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
extern MethodInfo m16731_MI;
 t482  m16731 (t2914 * __this, MethodInfo* method){
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
		t482  L_8 = m22904(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22904_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTime>
extern Il2CppType t52_0_0_1;
FieldInfo t2914_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2914_TI, offsetof(t2914, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2914_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2914_TI, offsetof(t2914, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2914_FIs[] =
{
	&t2914_f0_FieldInfo,
	&t2914_f1_FieldInfo,
	NULL
};
extern MethodInfo m16728_MI;
static PropertyInfo t2914____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2914_TI, "System.Collections.IEnumerator.Current", &m16728_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16731_MI;
static PropertyInfo t2914____Current_PropertyInfo = 
{
	&t2914_TI, "Current", &m16731_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2914_PIs[] =
{
	&t2914____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2914____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2914_m16727_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2914_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16727_MI = 
{
	".ctor", (methodPointerType)&m16727, &t2914_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2914_m16727_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2914_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16728_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16728, &t2914_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2914_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16729_MI = 
{
	"Dispose", (methodPointerType)&m16729, &t2914_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2914_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16730_MI = 
{
	"MoveNext", (methodPointerType)&m16730, &t2914_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2914_TI;
extern Il2CppType t482_0_0_0;
extern void* RuntimeInvoker_t482 (MethodInfo* method, void* obj, void** args);
MethodInfo m16731_MI = 
{
	"get_Current", (methodPointerType)&m16731, &t2914_TI, &t482_0_0_0, RuntimeInvoker_t482, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2914_MIs[] =
{
	&m16727_MI,
	&m16728_MI,
	&m16729_MI,
	&m16730_MI,
	&m16731_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16728_MI;
extern MethodInfo m16730_MI;
extern MethodInfo m16729_MI;
extern MethodInfo m16731_MI;
static MethodInfo* t2914_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16728_MI,
	&m16730_MI,
	&m16729_MI,
	&m16731_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3839_TI;
static TypeInfo* t2914_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3839_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3839_TI;
static Il2CppInterfaceOffsetPair t2914_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3839_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2914_0_0_0;
extern Il2CppType t2914_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2914_TI;
extern Il2CppGenericClass t2914_GC;
extern TypeInfo t52_TI;
TypeInfo t2914_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2914_MIs, t2914_PIs, t2914_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2914_TI, t2914_ITIs, t2914_VT, &EmptyCustomAttributesCache, &t2914_TI, &t2914_0_0_0, &t2914_1_0_0, t2914_IOs, &t2914_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2914)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5173_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTime>
extern MethodInfo m30074_MI;
static PropertyInfo t5173____Count_PropertyInfo = 
{
	&t5173_TI, "Count", &m30074_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30075_MI;
static PropertyInfo t5173____IsReadOnly_PropertyInfo = 
{
	&t5173_TI, "IsReadOnly", &m30075_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5173_PIs[] =
{
	&t5173____Count_PropertyInfo,
	&t5173____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5173_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30074_MI = 
{
	"get_Count", NULL, &t5173_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5173_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30075_MI = 
{
	"get_IsReadOnly", NULL, &t5173_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t482_0_0_0;
static ParameterInfo t5173_m30076_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t482_0_0_0},
};
extern TypeInfo t5173_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t482 (MethodInfo* method, void* obj, void** args);
MethodInfo m30076_MI = 
{
	"Add", NULL, &t5173_TI, &t53_0_0_0, RuntimeInvoker_t53_t482, t5173_m30076_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5173_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30077_MI = 
{
	"Clear", NULL, &t5173_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t482_0_0_0;
static ParameterInfo t5173_m30078_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t482_0_0_0},
};
extern TypeInfo t5173_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t482 (MethodInfo* method, void* obj, void** args);
MethodInfo m30078_MI = 
{
	"Contains", NULL, &t5173_TI, &t55_0_0_0, RuntimeInvoker_t55_t482, t5173_m30078_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1554_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5173_m30079_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1554_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5173_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30079_MI = 
{
	"CopyTo", NULL, &t5173_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5173_m30079_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t482_0_0_0;
static ParameterInfo t5173_m30080_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t482_0_0_0},
};
extern TypeInfo t5173_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t482 (MethodInfo* method, void* obj, void** args);
MethodInfo m30080_MI = 
{
	"Remove", NULL, &t5173_TI, &t55_0_0_0, RuntimeInvoker_t55_t482, t5173_m30080_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5173_MIs[] =
{
	&m30074_MI,
	&m30075_MI,
	&m30076_MI,
	&m30077_MI,
	&m30078_MI,
	&m30079_MI,
	&m30080_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5175_TI;
static TypeInfo* t5173_ITIs[] = 
{
	&t618_TI,
	&t5175_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5173_0_0_0;
extern Il2CppType t5173_1_0_0;
struct t5173;
extern TypeInfo t5173_TI;
extern Il2CppGenericClass t5173_GC;
TypeInfo t5173_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5173_MIs, t5173_PIs, NULL, NULL, NULL, NULL, NULL, &t5173_TI, t5173_ITIs, NULL, &EmptyCustomAttributesCache, &t5173_TI, &t5173_0_0_0, &t5173_1_0_0, NULL, &t5173_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5175_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTime>
extern TypeInfo t5175_TI;
extern Il2CppType t3839_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30081_MI = 
{
	"GetEnumerator", NULL, &t5175_TI, &t3839_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5175_MIs[] =
{
	&m30081_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5175_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5175_0_0_0;
extern Il2CppType t5175_1_0_0;
struct t5175;
extern TypeInfo t5175_TI;
extern Il2CppGenericClass t5175_GC;
TypeInfo t5175_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5175_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5175_TI, t5175_ITIs, NULL, &EmptyCustomAttributesCache, &t5175_TI, &t5175_0_0_0, &t5175_1_0_0, NULL, &t5175_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5174_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.DateTime>
extern MethodInfo m30082_MI;
extern MethodInfo m30083_MI;
static PropertyInfo t5174____Item_PropertyInfo = 
{
	&t5174_TI, "Item", &m30082_MI, &m30083_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5174_PIs[] =
{
	&t5174____Item_PropertyInfo,
	NULL
};
extern Il2CppType t482_0_0_0;
static ParameterInfo t5174_m30084_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t482_0_0_0},
};
extern TypeInfo t5174_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t482 (MethodInfo* method, void* obj, void** args);
MethodInfo m30084_MI = 
{
	"IndexOf", NULL, &t5174_TI, &t60_0_0_0, RuntimeInvoker_t60_t482, t5174_m30084_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t482_0_0_0;
static ParameterInfo t5174_m30085_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t482_0_0_0},
};
extern TypeInfo t5174_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t482 (MethodInfo* method, void* obj, void** args);
MethodInfo m30085_MI = 
{
	"Insert", NULL, &t5174_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t482, t5174_m30085_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5174_m30086_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5174_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30086_MI = 
{
	"RemoveAt", NULL, &t5174_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5174_m30086_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5174_m30082_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5174_TI;
extern Il2CppType t482_0_0_0;
extern void* RuntimeInvoker_t482_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30082_MI = 
{
	"get_Item", NULL, &t5174_TI, &t482_0_0_0, RuntimeInvoker_t482_t60, t5174_m30082_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t482_0_0_0;
static ParameterInfo t5174_m30083_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t482_0_0_0},
};
extern TypeInfo t5174_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t482 (MethodInfo* method, void* obj, void** args);
MethodInfo m30083_MI = 
{
	"set_Item", NULL, &t5174_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t482, t5174_m30083_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5174_MIs[] =
{
	&m30084_MI,
	&m30085_MI,
	&m30086_MI,
	&m30082_MI,
	&m30083_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5173_TI;
extern TypeInfo t5175_TI;
static TypeInfo* t5174_ITIs[] = 
{
	&t618_TI,
	&t5173_TI,
	&t5175_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5174_0_0_0;
extern Il2CppType t5174_1_0_0;
struct t5174;
extern TypeInfo t5174_TI;
extern Il2CppGenericClass t5174_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5174_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5174_MIs, t5174_PIs, NULL, NULL, NULL, NULL, NULL, &t5174_TI, t5174_ITIs, NULL, &t1426__CustomAttributeCache, &t5174_TI, &t5174_0_0_0, &t5174_1_0_0, NULL, &t5174_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5176_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>
extern MethodInfo m30087_MI;
static PropertyInfo t5176____Count_PropertyInfo = 
{
	&t5176_TI, "Count", &m30087_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30088_MI;
static PropertyInfo t5176____IsReadOnly_PropertyInfo = 
{
	&t5176_TI, "IsReadOnly", &m30088_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5176_PIs[] =
{
	&t5176____Count_PropertyInfo,
	&t5176____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5176_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30087_MI = 
{
	"get_Count", NULL, &t5176_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5176_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30088_MI = 
{
	"get_IsReadOnly", NULL, &t5176_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1576_0_0_0;
static ParameterInfo t5176_m30089_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1576_0_0_0},
};
extern TypeInfo t5176_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30089_MI = 
{
	"Add", NULL, &t5176_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5176_m30089_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5176_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30090_MI = 
{
	"Clear", NULL, &t5176_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1576_0_0_0;
static ParameterInfo t5176_m30091_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1576_0_0_0},
};
extern TypeInfo t5176_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30091_MI = 
{
	"Contains", NULL, &t5176_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5176_m30091_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3161_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5176_m30092_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3161_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5176_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30092_MI = 
{
	"CopyTo", NULL, &t5176_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5176_m30092_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1576_0_0_0;
static ParameterInfo t5176_m30093_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1576_0_0_0},
};
extern TypeInfo t5176_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30093_MI = 
{
	"Remove", NULL, &t5176_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5176_m30093_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5176_MIs[] =
{
	&m30087_MI,
	&m30088_MI,
	&m30089_MI,
	&m30090_MI,
	&m30091_MI,
	&m30092_MI,
	&m30093_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5178_TI;
static TypeInfo* t5176_ITIs[] = 
{
	&t618_TI,
	&t5178_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5176_0_0_0;
extern Il2CppType t5176_1_0_0;
struct t5176;
extern TypeInfo t5176_TI;
extern Il2CppGenericClass t5176_GC;
TypeInfo t5176_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5176_MIs, t5176_PIs, NULL, NULL, NULL, NULL, NULL, &t5176_TI, t5176_ITIs, NULL, &EmptyCustomAttributesCache, &t5176_TI, &t5176_0_0_0, &t5176_1_0_0, NULL, &t5176_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5178_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.DateTime>>
extern TypeInfo t5178_TI;
extern Il2CppType t3840_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30094_MI = 
{
	"GetEnumerator", NULL, &t5178_TI, &t3840_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5178_MIs[] =
{
	&m30094_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5178_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5178_0_0_0;
extern Il2CppType t5178_1_0_0;
struct t5178;
extern TypeInfo t5178_TI;
extern Il2CppGenericClass t5178_GC;
TypeInfo t5178_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5178_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5178_TI, t5178_ITIs, NULL, &EmptyCustomAttributesCache, &t5178_TI, &t5178_0_0_0, &t5178_1_0_0, NULL, &t5178_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3840_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.DateTime>>
extern MethodInfo m30095_MI;
static PropertyInfo t3840____Current_PropertyInfo = 
{
	&t3840_TI, "Current", &m30095_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3840_PIs[] =
{
	&t3840____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3840_TI;
extern Il2CppType t1576_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30095_MI = 
{
	"get_Current", NULL, &t3840_TI, &t1576_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3840_MIs[] =
{
	&m30095_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3840_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3840_0_0_0;
extern Il2CppType t3840_1_0_0;
struct t3840;
extern TypeInfo t3840_TI;
extern Il2CppGenericClass t3840_GC;
TypeInfo t3840_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3840_MIs, t3840_PIs, NULL, NULL, NULL, NULL, NULL, &t3840_TI, t3840_ITIs, NULL, &EmptyCustomAttributesCache, &t3840_TI, &t3840_0_0_0, &t3840_1_0_0, NULL, &t3840_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1576_TI;



// Metadata Definition System.IComparable`1<System.DateTime>
extern Il2CppType t482_0_0_0;
static ParameterInfo t1576_m30096_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t482_0_0_0},
};
extern TypeInfo t1576_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t482 (MethodInfo* method, void* obj, void** args);
MethodInfo m30096_MI = 
{
	"CompareTo", NULL, &t1576_TI, &t60_0_0_0, RuntimeInvoker_t60_t482, t1576_m30096_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1576_MIs[] =
{
	&m30096_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1576_0_0_0;
extern Il2CppType t1576_1_0_0;
struct t1576;
extern TypeInfo t1576_TI;
extern Il2CppGenericClass t1576_GC;
TypeInfo t1576_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1576_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1576_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1576_TI, &t1576_0_0_0, &t1576_1_0_0, NULL, &t1576_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2915.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2915_TI;
#include "t2915MD.h"

extern TypeInfo t2915_TI;
extern TypeInfo t1576_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16736_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22915_MI;
struct t52;
#define m22915(__this, p0, method) (t7*)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22915_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>
extern Il2CppType t52_0_0_1;
FieldInfo t2915_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2915_TI, offsetof(t2915, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2915_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2915_TI, offsetof(t2915, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2915_FIs[] =
{
	&t2915_f0_FieldInfo,
	&t2915_f1_FieldInfo,
	NULL
};
extern MethodInfo m16733_MI;
static PropertyInfo t2915____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2915_TI, "System.Collections.IEnumerator.Current", &m16733_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16736_MI;
static PropertyInfo t2915____Current_PropertyInfo = 
{
	&t2915_TI, "Current", &m16736_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2915_PIs[] =
{
	&t2915____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2915____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2915_m16732_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2915_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16732_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2915_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2915_m16732_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2915_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16733_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2915_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2915_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16734_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2915_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2915_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16735_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2915_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2915_TI;
extern Il2CppType t1576_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16736_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2915_TI, &t1576_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2915_MIs[] =
{
	&m16732_MI,
	&m16733_MI,
	&m16734_MI,
	&m16735_MI,
	&m16736_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16733_MI;
extern MethodInfo m16735_MI;
extern MethodInfo m16734_MI;
extern MethodInfo m16736_MI;
static MethodInfo* t2915_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16733_MI,
	&m16735_MI,
	&m16734_MI,
	&m16736_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3840_TI;
static TypeInfo* t2915_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3840_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3840_TI;
static Il2CppInterfaceOffsetPair t2915_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3840_TI, 7},
};
extern MethodInfo m16736_MI;
extern TypeInfo t1576_TI;
extern MethodInfo m22915_MI;
static void* t2915_RGCTXData[3] = 
{
	&m16736_MI,
	&t1576_TI,
	&m22915_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2915_0_0_0;
extern Il2CppType t2915_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2915_TI;
extern Il2CppGenericClass t2915_GC;
extern TypeInfo t52_TI;
TypeInfo t2915_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2915_MIs, t2915_PIs, t2915_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2915_TI, t2915_ITIs, t2915_VT, &EmptyCustomAttributesCache, &t2915_TI, &t2915_0_0_0, &t2915_1_0_0, t2915_IOs, &t2915_GC, NULL, NULL, NULL, t2915_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2915)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5177_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>
extern MethodInfo m30097_MI;
extern MethodInfo m30098_MI;
static PropertyInfo t5177____Item_PropertyInfo = 
{
	&t5177_TI, "Item", &m30097_MI, &m30098_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5177_PIs[] =
{
	&t5177____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1576_0_0_0;
static ParameterInfo t5177_m30099_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1576_0_0_0},
};
extern TypeInfo t5177_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30099_MI = 
{
	"IndexOf", NULL, &t5177_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5177_m30099_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1576_0_0_0;
static ParameterInfo t5177_m30100_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1576_0_0_0},
};
extern TypeInfo t5177_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30100_MI = 
{
	"Insert", NULL, &t5177_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5177_m30100_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5177_m30101_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5177_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30101_MI = 
{
	"RemoveAt", NULL, &t5177_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5177_m30101_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5177_m30097_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5177_TI;
extern Il2CppType t1576_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30097_MI = 
{
	"get_Item", NULL, &t5177_TI, &t1576_0_0_0, RuntimeInvoker_t7_t60, t5177_m30097_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1576_0_0_0;
static ParameterInfo t5177_m30098_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1576_0_0_0},
};
extern TypeInfo t5177_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30098_MI = 
{
	"set_Item", NULL, &t5177_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5177_m30098_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5177_MIs[] =
{
	&m30099_MI,
	&m30100_MI,
	&m30101_MI,
	&m30097_MI,
	&m30098_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5176_TI;
extern TypeInfo t5178_TI;
static TypeInfo* t5177_ITIs[] = 
{
	&t618_TI,
	&t5176_TI,
	&t5178_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5177_0_0_0;
extern Il2CppType t5177_1_0_0;
struct t5177;
extern TypeInfo t5177_TI;
extern Il2CppGenericClass t5177_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5177_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5177_MIs, t5177_PIs, NULL, NULL, NULL, NULL, NULL, &t5177_TI, t5177_ITIs, NULL, &t1426__CustomAttributeCache, &t5177_TI, &t5177_0_0_0, &t5177_1_0_0, NULL, &t5177_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5179_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>
extern MethodInfo m30102_MI;
static PropertyInfo t5179____Count_PropertyInfo = 
{
	&t5179_TI, "Count", &m30102_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30103_MI;
static PropertyInfo t5179____IsReadOnly_PropertyInfo = 
{
	&t5179_TI, "IsReadOnly", &m30103_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5179_PIs[] =
{
	&t5179____Count_PropertyInfo,
	&t5179____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5179_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30102_MI = 
{
	"get_Count", NULL, &t5179_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5179_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30103_MI = 
{
	"get_IsReadOnly", NULL, &t5179_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1577_0_0_0;
static ParameterInfo t5179_m30104_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1577_0_0_0},
};
extern TypeInfo t5179_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30104_MI = 
{
	"Add", NULL, &t5179_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5179_m30104_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5179_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30105_MI = 
{
	"Clear", NULL, &t5179_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1577_0_0_0;
static ParameterInfo t5179_m30106_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1577_0_0_0},
};
extern TypeInfo t5179_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30106_MI = 
{
	"Contains", NULL, &t5179_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5179_m30106_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3162_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5179_m30107_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3162_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5179_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30107_MI = 
{
	"CopyTo", NULL, &t5179_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5179_m30107_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1577_0_0_0;
static ParameterInfo t5179_m30108_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1577_0_0_0},
};
extern TypeInfo t5179_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30108_MI = 
{
	"Remove", NULL, &t5179_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5179_m30108_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5179_MIs[] =
{
	&m30102_MI,
	&m30103_MI,
	&m30104_MI,
	&m30105_MI,
	&m30106_MI,
	&m30107_MI,
	&m30108_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5181_TI;
static TypeInfo* t5179_ITIs[] = 
{
	&t618_TI,
	&t5181_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5179_0_0_0;
extern Il2CppType t5179_1_0_0;
struct t5179;
extern TypeInfo t5179_TI;
extern Il2CppGenericClass t5179_GC;
TypeInfo t5179_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5179_MIs, t5179_PIs, NULL, NULL, NULL, NULL, NULL, &t5179_TI, t5179_ITIs, NULL, &EmptyCustomAttributesCache, &t5179_TI, &t5179_0_0_0, &t5179_1_0_0, NULL, &t5179_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5181_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.DateTime>>
extern TypeInfo t5181_TI;
extern Il2CppType t3841_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30109_MI = 
{
	"GetEnumerator", NULL, &t5181_TI, &t3841_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5181_MIs[] =
{
	&m30109_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5181_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5181_0_0_0;
extern Il2CppType t5181_1_0_0;
struct t5181;
extern TypeInfo t5181_TI;
extern Il2CppGenericClass t5181_GC;
TypeInfo t5181_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5181_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5181_TI, t5181_ITIs, NULL, &EmptyCustomAttributesCache, &t5181_TI, &t5181_0_0_0, &t5181_1_0_0, NULL, &t5181_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3841_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.DateTime>>
extern MethodInfo m30110_MI;
static PropertyInfo t3841____Current_PropertyInfo = 
{
	&t3841_TI, "Current", &m30110_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3841_PIs[] =
{
	&t3841____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3841_TI;
extern Il2CppType t1577_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30110_MI = 
{
	"get_Current", NULL, &t3841_TI, &t1577_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3841_MIs[] =
{
	&m30110_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3841_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3841_0_0_0;
extern Il2CppType t3841_1_0_0;
struct t3841;
extern TypeInfo t3841_TI;
extern Il2CppGenericClass t3841_GC;
TypeInfo t3841_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3841_MIs, t3841_PIs, NULL, NULL, NULL, NULL, NULL, &t3841_TI, t3841_ITIs, NULL, &EmptyCustomAttributesCache, &t3841_TI, &t3841_0_0_0, &t3841_1_0_0, NULL, &t3841_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1577_TI;



// Metadata Definition System.IEquatable`1<System.DateTime>
extern Il2CppType t482_0_0_0;
static ParameterInfo t1577_m30111_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t482_0_0_0},
};
extern TypeInfo t1577_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t482 (MethodInfo* method, void* obj, void** args);
MethodInfo m30111_MI = 
{
	"Equals", NULL, &t1577_TI, &t55_0_0_0, RuntimeInvoker_t55_t482, t1577_m30111_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1577_MIs[] =
{
	&m30111_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1577_0_0_0;
extern Il2CppType t1577_1_0_0;
struct t1577;
extern TypeInfo t1577_TI;
extern Il2CppGenericClass t1577_GC;
TypeInfo t1577_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1577_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1577_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1577_TI, &t1577_0_0_0, &t1577_1_0_0, NULL, &t1577_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2916.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2916_TI;
#include "t2916MD.h"

extern TypeInfo t2916_TI;
extern TypeInfo t1577_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16741_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22926_MI;
struct t52;
#define m22926(__this, p0, method) (t7*)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22926_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>
extern Il2CppType t52_0_0_1;
FieldInfo t2916_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2916_TI, offsetof(t2916, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2916_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2916_TI, offsetof(t2916, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2916_FIs[] =
{
	&t2916_f0_FieldInfo,
	&t2916_f1_FieldInfo,
	NULL
};
extern MethodInfo m16738_MI;
static PropertyInfo t2916____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2916_TI, "System.Collections.IEnumerator.Current", &m16738_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16741_MI;
static PropertyInfo t2916____Current_PropertyInfo = 
{
	&t2916_TI, "Current", &m16741_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2916_PIs[] =
{
	&t2916____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2916____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2916_m16737_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2916_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16737_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2916_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2916_m16737_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2916_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16738_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2916_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2916_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16739_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2916_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2916_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16740_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2916_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2916_TI;
extern Il2CppType t1577_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16741_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2916_TI, &t1577_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2916_MIs[] =
{
	&m16737_MI,
	&m16738_MI,
	&m16739_MI,
	&m16740_MI,
	&m16741_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16738_MI;
extern MethodInfo m16740_MI;
extern MethodInfo m16739_MI;
extern MethodInfo m16741_MI;
static MethodInfo* t2916_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16738_MI,
	&m16740_MI,
	&m16739_MI,
	&m16741_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3841_TI;
static TypeInfo* t2916_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3841_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3841_TI;
static Il2CppInterfaceOffsetPair t2916_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3841_TI, 7},
};
extern MethodInfo m16741_MI;
extern TypeInfo t1577_TI;
extern MethodInfo m22926_MI;
static void* t2916_RGCTXData[3] = 
{
	&m16741_MI,
	&t1577_TI,
	&m22926_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2916_0_0_0;
extern Il2CppType t2916_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2916_TI;
extern Il2CppGenericClass t2916_GC;
extern TypeInfo t52_TI;
TypeInfo t2916_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2916_MIs, t2916_PIs, t2916_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2916_TI, t2916_ITIs, t2916_VT, &EmptyCustomAttributesCache, &t2916_TI, &t2916_0_0_0, &t2916_1_0_0, t2916_IOs, &t2916_GC, NULL, NULL, NULL, t2916_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2916)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5180_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>
extern MethodInfo m30112_MI;
extern MethodInfo m30113_MI;
static PropertyInfo t5180____Item_PropertyInfo = 
{
	&t5180_TI, "Item", &m30112_MI, &m30113_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5180_PIs[] =
{
	&t5180____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1577_0_0_0;
static ParameterInfo t5180_m30114_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1577_0_0_0},
};
extern TypeInfo t5180_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30114_MI = 
{
	"IndexOf", NULL, &t5180_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5180_m30114_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1577_0_0_0;
static ParameterInfo t5180_m30115_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1577_0_0_0},
};
extern TypeInfo t5180_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30115_MI = 
{
	"Insert", NULL, &t5180_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5180_m30115_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5180_m30116_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5180_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30116_MI = 
{
	"RemoveAt", NULL, &t5180_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5180_m30116_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5180_m30112_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5180_TI;
extern Il2CppType t1577_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30112_MI = 
{
	"get_Item", NULL, &t5180_TI, &t1577_0_0_0, RuntimeInvoker_t7_t60, t5180_m30112_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1577_0_0_0;
static ParameterInfo t5180_m30113_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1577_0_0_0},
};
extern TypeInfo t5180_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30113_MI = 
{
	"set_Item", NULL, &t5180_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5180_m30113_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5180_MIs[] =
{
	&m30114_MI,
	&m30115_MI,
	&m30116_MI,
	&m30112_MI,
	&m30113_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5179_TI;
extern TypeInfo t5181_TI;
static TypeInfo* t5180_ITIs[] = 
{
	&t618_TI,
	&t5179_TI,
	&t5181_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5180_0_0_0;
extern Il2CppType t5180_1_0_0;
struct t5180;
extern TypeInfo t5180_TI;
extern Il2CppGenericClass t5180_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5180_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5180_MIs, t5180_PIs, NULL, NULL, NULL, NULL, NULL, &t5180_TI, t5180_ITIs, NULL, &t1426__CustomAttributeCache, &t5180_TI, &t5180_0_0_0, &t5180_1_0_0, NULL, &t5180_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3842_TI;

#include "t723.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Decimal>
extern MethodInfo m30117_MI;
static PropertyInfo t3842____Current_PropertyInfo = 
{
	&t3842_TI, "Current", &m30117_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3842_PIs[] =
{
	&t3842____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3842_TI;
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t723 (MethodInfo* method, void* obj, void** args);
MethodInfo m30117_MI = 
{
	"get_Current", NULL, &t3842_TI, &t723_0_0_0, RuntimeInvoker_t723, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3842_MIs[] =
{
	&m30117_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3842_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3842_0_0_0;
extern Il2CppType t3842_1_0_0;
struct t3842;
extern TypeInfo t3842_TI;
extern Il2CppGenericClass t3842_GC;
TypeInfo t3842_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3842_MIs, t3842_PIs, NULL, NULL, NULL, NULL, NULL, &t3842_TI, t3842_ITIs, NULL, &EmptyCustomAttributesCache, &t3842_TI, &t3842_0_0_0, &t3842_1_0_0, NULL, &t3842_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2917.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2917_TI;
#include "t2917MD.h"

extern TypeInfo t2917_TI;
extern TypeInfo t723_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16746_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22937_MI;
struct t52;
 t723  m22937 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22937_MI;


extern MethodInfo m16742_MI;
 void m16742 (t2917 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16743_MI;
 t7 * m16743 (t2917 * __this, MethodInfo* method){
	{
		t723  L_0 = m16746(__this, &m16746_MI);
		t723  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t723_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16744_MI;
 void m16744 (t2917 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16745_MI;
 bool m16745 (t2917 * __this, MethodInfo* method){
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
extern MethodInfo m16746_MI;
 t723  m16746 (t2917 * __this, MethodInfo* method){
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
		t723  L_8 = m22937(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22937_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Decimal>
extern Il2CppType t52_0_0_1;
FieldInfo t2917_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2917_TI, offsetof(t2917, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2917_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2917_TI, offsetof(t2917, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2917_FIs[] =
{
	&t2917_f0_FieldInfo,
	&t2917_f1_FieldInfo,
	NULL
};
extern MethodInfo m16743_MI;
static PropertyInfo t2917____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2917_TI, "System.Collections.IEnumerator.Current", &m16743_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16746_MI;
static PropertyInfo t2917____Current_PropertyInfo = 
{
	&t2917_TI, "Current", &m16746_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2917_PIs[] =
{
	&t2917____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2917____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2917_m16742_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2917_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16742_MI = 
{
	".ctor", (methodPointerType)&m16742, &t2917_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2917_m16742_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2917_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16743_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16743, &t2917_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2917_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16744_MI = 
{
	"Dispose", (methodPointerType)&m16744, &t2917_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2917_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16745_MI = 
{
	"MoveNext", (methodPointerType)&m16745, &t2917_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2917_TI;
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t723 (MethodInfo* method, void* obj, void** args);
MethodInfo m16746_MI = 
{
	"get_Current", (methodPointerType)&m16746, &t2917_TI, &t723_0_0_0, RuntimeInvoker_t723, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2917_MIs[] =
{
	&m16742_MI,
	&m16743_MI,
	&m16744_MI,
	&m16745_MI,
	&m16746_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16743_MI;
extern MethodInfo m16745_MI;
extern MethodInfo m16744_MI;
extern MethodInfo m16746_MI;
static MethodInfo* t2917_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16743_MI,
	&m16745_MI,
	&m16744_MI,
	&m16746_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3842_TI;
static TypeInfo* t2917_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3842_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3842_TI;
static Il2CppInterfaceOffsetPair t2917_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3842_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2917_0_0_0;
extern Il2CppType t2917_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2917_TI;
extern Il2CppGenericClass t2917_GC;
extern TypeInfo t52_TI;
TypeInfo t2917_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2917_MIs, t2917_PIs, t2917_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2917_TI, t2917_ITIs, t2917_VT, &EmptyCustomAttributesCache, &t2917_TI, &t2917_0_0_0, &t2917_1_0_0, t2917_IOs, &t2917_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2917)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5182_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Decimal>
extern MethodInfo m30118_MI;
static PropertyInfo t5182____Count_PropertyInfo = 
{
	&t5182_TI, "Count", &m30118_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30119_MI;
static PropertyInfo t5182____IsReadOnly_PropertyInfo = 
{
	&t5182_TI, "IsReadOnly", &m30119_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5182_PIs[] =
{
	&t5182____Count_PropertyInfo,
	&t5182____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5182_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30118_MI = 
{
	"get_Count", NULL, &t5182_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5182_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30119_MI = 
{
	"get_IsReadOnly", NULL, &t5182_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t5182_m30120_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern TypeInfo t5182_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t723 (MethodInfo* method, void* obj, void** args);
MethodInfo m30120_MI = 
{
	"Add", NULL, &t5182_TI, &t53_0_0_0, RuntimeInvoker_t53_t723, t5182_m30120_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5182_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30121_MI = 
{
	"Clear", NULL, &t5182_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t5182_m30122_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern TypeInfo t5182_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t723 (MethodInfo* method, void* obj, void** args);
MethodInfo m30122_MI = 
{
	"Contains", NULL, &t5182_TI, &t55_0_0_0, RuntimeInvoker_t55_t723, t5182_m30122_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1555_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5182_m30123_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1555_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5182_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30123_MI = 
{
	"CopyTo", NULL, &t5182_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5182_m30123_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t723_0_0_0;
static ParameterInfo t5182_m30124_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern TypeInfo t5182_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t723 (MethodInfo* method, void* obj, void** args);
MethodInfo m30124_MI = 
{
	"Remove", NULL, &t5182_TI, &t55_0_0_0, RuntimeInvoker_t55_t723, t5182_m30124_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5182_MIs[] =
{
	&m30118_MI,
	&m30119_MI,
	&m30120_MI,
	&m30121_MI,
	&m30122_MI,
	&m30123_MI,
	&m30124_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5184_TI;
static TypeInfo* t5182_ITIs[] = 
{
	&t618_TI,
	&t5184_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5182_0_0_0;
extern Il2CppType t5182_1_0_0;
struct t5182;
extern TypeInfo t5182_TI;
extern Il2CppGenericClass t5182_GC;
TypeInfo t5182_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5182_MIs, t5182_PIs, NULL, NULL, NULL, NULL, NULL, &t5182_TI, t5182_ITIs, NULL, &EmptyCustomAttributesCache, &t5182_TI, &t5182_0_0_0, &t5182_1_0_0, NULL, &t5182_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5184_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Decimal>
extern TypeInfo t5184_TI;
extern Il2CppType t3842_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30125_MI = 
{
	"GetEnumerator", NULL, &t5184_TI, &t3842_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5184_MIs[] =
{
	&m30125_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5184_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5184_0_0_0;
extern Il2CppType t5184_1_0_0;
struct t5184;
extern TypeInfo t5184_TI;
extern Il2CppGenericClass t5184_GC;
TypeInfo t5184_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5184_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5184_TI, t5184_ITIs, NULL, &EmptyCustomAttributesCache, &t5184_TI, &t5184_0_0_0, &t5184_1_0_0, NULL, &t5184_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5183_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Decimal>
extern MethodInfo m30126_MI;
extern MethodInfo m30127_MI;
static PropertyInfo t5183____Item_PropertyInfo = 
{
	&t5183_TI, "Item", &m30126_MI, &m30127_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5183_PIs[] =
{
	&t5183____Item_PropertyInfo,
	NULL
};
extern Il2CppType t723_0_0_0;
static ParameterInfo t5183_m30128_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern TypeInfo t5183_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t723 (MethodInfo* method, void* obj, void** args);
MethodInfo m30128_MI = 
{
	"IndexOf", NULL, &t5183_TI, &t60_0_0_0, RuntimeInvoker_t60_t723, t5183_m30128_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t5183_m30129_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern TypeInfo t5183_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t723 (MethodInfo* method, void* obj, void** args);
MethodInfo m30129_MI = 
{
	"Insert", NULL, &t5183_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t723, t5183_m30129_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5183_m30130_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5183_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30130_MI = 
{
	"RemoveAt", NULL, &t5183_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5183_m30130_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5183_m30126_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5183_TI;
extern Il2CppType t723_0_0_0;
extern void* RuntimeInvoker_t723_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30126_MI = 
{
	"get_Item", NULL, &t5183_TI, &t723_0_0_0, RuntimeInvoker_t723_t60, t5183_m30126_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t723_0_0_0;
static ParameterInfo t5183_m30127_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t723_0_0_0},
};
extern TypeInfo t5183_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t723 (MethodInfo* method, void* obj, void** args);
MethodInfo m30127_MI = 
{
	"set_Item", NULL, &t5183_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t723, t5183_m30127_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5183_MIs[] =
{
	&m30128_MI,
	&m30129_MI,
	&m30130_MI,
	&m30126_MI,
	&m30127_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5182_TI;
extern TypeInfo t5184_TI;
static TypeInfo* t5183_ITIs[] = 
{
	&t618_TI,
	&t5182_TI,
	&t5184_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5183_0_0_0;
extern Il2CppType t5183_1_0_0;
struct t5183;
extern TypeInfo t5183_TI;
extern Il2CppGenericClass t5183_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5183_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5183_MIs, t5183_PIs, NULL, NULL, NULL, NULL, NULL, &t5183_TI, t5183_ITIs, NULL, &t1426__CustomAttributeCache, &t5183_TI, &t5183_0_0_0, &t5183_1_0_0, NULL, &t5183_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5185_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>
extern MethodInfo m30131_MI;
static PropertyInfo t5185____Count_PropertyInfo = 
{
	&t5185_TI, "Count", &m30131_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30132_MI;
static PropertyInfo t5185____IsReadOnly_PropertyInfo = 
{
	&t5185_TI, "IsReadOnly", &m30132_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5185_PIs[] =
{
	&t5185____Count_PropertyInfo,
	&t5185____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5185_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30131_MI = 
{
	"get_Count", NULL, &t5185_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5185_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30132_MI = 
{
	"get_IsReadOnly", NULL, &t5185_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1402_0_0_0;
static ParameterInfo t5185_m30133_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1402_0_0_0},
};
extern TypeInfo t5185_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30133_MI = 
{
	"Add", NULL, &t5185_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5185_m30133_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5185_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30134_MI = 
{
	"Clear", NULL, &t5185_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1402_0_0_0;
static ParameterInfo t5185_m30135_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1402_0_0_0},
};
extern TypeInfo t5185_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30135_MI = 
{
	"Contains", NULL, &t5185_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5185_m30135_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3163_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5185_m30136_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3163_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5185_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30136_MI = 
{
	"CopyTo", NULL, &t5185_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5185_m30136_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1402_0_0_0;
static ParameterInfo t5185_m30137_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1402_0_0_0},
};
extern TypeInfo t5185_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30137_MI = 
{
	"Remove", NULL, &t5185_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5185_m30137_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5185_MIs[] =
{
	&m30131_MI,
	&m30132_MI,
	&m30133_MI,
	&m30134_MI,
	&m30135_MI,
	&m30136_MI,
	&m30137_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5187_TI;
static TypeInfo* t5185_ITIs[] = 
{
	&t618_TI,
	&t5187_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5185_0_0_0;
extern Il2CppType t5185_1_0_0;
struct t5185;
extern TypeInfo t5185_TI;
extern Il2CppGenericClass t5185_GC;
TypeInfo t5185_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5185_MIs, t5185_PIs, NULL, NULL, NULL, NULL, NULL, &t5185_TI, t5185_ITIs, NULL, &EmptyCustomAttributesCache, &t5185_TI, &t5185_0_0_0, &t5185_1_0_0, NULL, &t5185_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5187_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Decimal>>
extern TypeInfo t5187_TI;
extern Il2CppType t3843_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30138_MI = 
{
	"GetEnumerator", NULL, &t5187_TI, &t3843_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5187_MIs[] =
{
	&m30138_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5187_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5187_0_0_0;
extern Il2CppType t5187_1_0_0;
struct t5187;
extern TypeInfo t5187_TI;
extern Il2CppGenericClass t5187_GC;
TypeInfo t5187_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5187_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5187_TI, t5187_ITIs, NULL, &EmptyCustomAttributesCache, &t5187_TI, &t5187_0_0_0, &t5187_1_0_0, NULL, &t5187_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3843_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Decimal>>
extern MethodInfo m30139_MI;
static PropertyInfo t3843____Current_PropertyInfo = 
{
	&t3843_TI, "Current", &m30139_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3843_PIs[] =
{
	&t3843____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3843_TI;
extern Il2CppType t1402_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30139_MI = 
{
	"get_Current", NULL, &t3843_TI, &t1402_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3843_MIs[] =
{
	&m30139_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3843_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3843_0_0_0;
extern Il2CppType t3843_1_0_0;
struct t3843;
extern TypeInfo t3843_TI;
extern Il2CppGenericClass t3843_GC;
TypeInfo t3843_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3843_MIs, t3843_PIs, NULL, NULL, NULL, NULL, NULL, &t3843_TI, t3843_ITIs, NULL, &EmptyCustomAttributesCache, &t3843_TI, &t3843_0_0_0, &t3843_1_0_0, NULL, &t3843_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2918.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2918_TI;
#include "t2918MD.h"

extern TypeInfo t2918_TI;
extern TypeInfo t1402_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16751_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22948_MI;
struct t52;
#define m22948(__this, p0, method) (t7*)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22948_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>
extern Il2CppType t52_0_0_1;
FieldInfo t2918_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2918_TI, offsetof(t2918, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2918_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2918_TI, offsetof(t2918, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2918_FIs[] =
{
	&t2918_f0_FieldInfo,
	&t2918_f1_FieldInfo,
	NULL
};
extern MethodInfo m16748_MI;
static PropertyInfo t2918____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2918_TI, "System.Collections.IEnumerator.Current", &m16748_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16751_MI;
static PropertyInfo t2918____Current_PropertyInfo = 
{
	&t2918_TI, "Current", &m16751_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2918_PIs[] =
{
	&t2918____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2918____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2918_m16747_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2918_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16747_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2918_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2918_m16747_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2918_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16748_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2918_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2918_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16749_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2918_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2918_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16750_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2918_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2918_TI;
extern Il2CppType t1402_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16751_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2918_TI, &t1402_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2918_MIs[] =
{
	&m16747_MI,
	&m16748_MI,
	&m16749_MI,
	&m16750_MI,
	&m16751_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16748_MI;
extern MethodInfo m16750_MI;
extern MethodInfo m16749_MI;
extern MethodInfo m16751_MI;
static MethodInfo* t2918_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16748_MI,
	&m16750_MI,
	&m16749_MI,
	&m16751_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3843_TI;
static TypeInfo* t2918_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3843_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3843_TI;
static Il2CppInterfaceOffsetPair t2918_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3843_TI, 7},
};
extern MethodInfo m16751_MI;
extern TypeInfo t1402_TI;
extern MethodInfo m22948_MI;
static void* t2918_RGCTXData[3] = 
{
	&m16751_MI,
	&t1402_TI,
	&m22948_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2918_0_0_0;
extern Il2CppType t2918_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2918_TI;
extern Il2CppGenericClass t2918_GC;
extern TypeInfo t52_TI;
TypeInfo t2918_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2918_MIs, t2918_PIs, t2918_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2918_TI, t2918_ITIs, t2918_VT, &EmptyCustomAttributesCache, &t2918_TI, &t2918_0_0_0, &t2918_1_0_0, t2918_IOs, &t2918_GC, NULL, NULL, NULL, t2918_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2918)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5186_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>
extern MethodInfo m30140_MI;
extern MethodInfo m30141_MI;
static PropertyInfo t5186____Item_PropertyInfo = 
{
	&t5186_TI, "Item", &m30140_MI, &m30141_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5186_PIs[] =
{
	&t5186____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1402_0_0_0;
static ParameterInfo t5186_m30142_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1402_0_0_0},
};
extern TypeInfo t5186_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30142_MI = 
{
	"IndexOf", NULL, &t5186_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5186_m30142_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1402_0_0_0;
static ParameterInfo t5186_m30143_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1402_0_0_0},
};
extern TypeInfo t5186_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30143_MI = 
{
	"Insert", NULL, &t5186_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5186_m30143_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5186_m30144_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5186_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30144_MI = 
{
	"RemoveAt", NULL, &t5186_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5186_m30144_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5186_m30140_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5186_TI;
extern Il2CppType t1402_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30140_MI = 
{
	"get_Item", NULL, &t5186_TI, &t1402_0_0_0, RuntimeInvoker_t7_t60, t5186_m30140_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1402_0_0_0;
static ParameterInfo t5186_m30141_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1402_0_0_0},
};
extern TypeInfo t5186_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30141_MI = 
{
	"set_Item", NULL, &t5186_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5186_m30141_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5186_MIs[] =
{
	&m30142_MI,
	&m30143_MI,
	&m30144_MI,
	&m30140_MI,
	&m30141_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5185_TI;
extern TypeInfo t5187_TI;
static TypeInfo* t5186_ITIs[] = 
{
	&t618_TI,
	&t5185_TI,
	&t5187_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5186_0_0_0;
extern Il2CppType t5186_1_0_0;
struct t5186;
extern TypeInfo t5186_TI;
extern Il2CppGenericClass t5186_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5186_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5186_MIs, t5186_PIs, NULL, NULL, NULL, NULL, NULL, &t5186_TI, t5186_ITIs, NULL, &t1426__CustomAttributeCache, &t5186_TI, &t5186_0_0_0, &t5186_1_0_0, NULL, &t5186_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5188_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>
extern MethodInfo m30145_MI;
static PropertyInfo t5188____Count_PropertyInfo = 
{
	&t5188_TI, "Count", &m30145_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30146_MI;
static PropertyInfo t5188____IsReadOnly_PropertyInfo = 
{
	&t5188_TI, "IsReadOnly", &m30146_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5188_PIs[] =
{
	&t5188____Count_PropertyInfo,
	&t5188____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5188_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30145_MI = 
{
	"get_Count", NULL, &t5188_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5188_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30146_MI = 
{
	"get_IsReadOnly", NULL, &t5188_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1403_0_0_0;
static ParameterInfo t5188_m30147_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1403_0_0_0},
};
extern TypeInfo t5188_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30147_MI = 
{
	"Add", NULL, &t5188_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5188_m30147_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5188_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30148_MI = 
{
	"Clear", NULL, &t5188_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1403_0_0_0;
static ParameterInfo t5188_m30149_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1403_0_0_0},
};
extern TypeInfo t5188_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30149_MI = 
{
	"Contains", NULL, &t5188_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5188_m30149_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3164_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5188_m30150_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3164_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5188_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30150_MI = 
{
	"CopyTo", NULL, &t5188_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5188_m30150_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1403_0_0_0;
static ParameterInfo t5188_m30151_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1403_0_0_0},
};
extern TypeInfo t5188_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30151_MI = 
{
	"Remove", NULL, &t5188_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5188_m30151_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5188_MIs[] =
{
	&m30145_MI,
	&m30146_MI,
	&m30147_MI,
	&m30148_MI,
	&m30149_MI,
	&m30150_MI,
	&m30151_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5190_TI;
static TypeInfo* t5188_ITIs[] = 
{
	&t618_TI,
	&t5190_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5188_0_0_0;
extern Il2CppType t5188_1_0_0;
struct t5188;
extern TypeInfo t5188_TI;
extern Il2CppGenericClass t5188_GC;
TypeInfo t5188_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5188_MIs, t5188_PIs, NULL, NULL, NULL, NULL, NULL, &t5188_TI, t5188_ITIs, NULL, &EmptyCustomAttributesCache, &t5188_TI, &t5188_0_0_0, &t5188_1_0_0, NULL, &t5188_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5190_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Decimal>>
extern TypeInfo t5190_TI;
extern Il2CppType t3844_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30152_MI = 
{
	"GetEnumerator", NULL, &t5190_TI, &t3844_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5190_MIs[] =
{
	&m30152_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5190_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5190_0_0_0;
extern Il2CppType t5190_1_0_0;
struct t5190;
extern TypeInfo t5190_TI;
extern Il2CppGenericClass t5190_GC;
TypeInfo t5190_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5190_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5190_TI, t5190_ITIs, NULL, &EmptyCustomAttributesCache, &t5190_TI, &t5190_0_0_0, &t5190_1_0_0, NULL, &t5190_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3844_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Decimal>>
extern MethodInfo m30153_MI;
static PropertyInfo t3844____Current_PropertyInfo = 
{
	&t3844_TI, "Current", &m30153_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3844_PIs[] =
{
	&t3844____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3844_TI;
extern Il2CppType t1403_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30153_MI = 
{
	"get_Current", NULL, &t3844_TI, &t1403_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3844_MIs[] =
{
	&m30153_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3844_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3844_0_0_0;
extern Il2CppType t3844_1_0_0;
struct t3844;
extern TypeInfo t3844_TI;
extern Il2CppGenericClass t3844_GC;
TypeInfo t3844_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3844_MIs, t3844_PIs, NULL, NULL, NULL, NULL, NULL, &t3844_TI, t3844_ITIs, NULL, &EmptyCustomAttributesCache, &t3844_TI, &t3844_0_0_0, &t3844_1_0_0, NULL, &t3844_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2919.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2919_TI;
#include "t2919MD.h"

extern TypeInfo t2919_TI;
extern TypeInfo t1403_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16756_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22959_MI;
struct t52;
#define m22959(__this, p0, method) (t7*)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22959_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>
extern Il2CppType t52_0_0_1;
FieldInfo t2919_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2919_TI, offsetof(t2919, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2919_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2919_TI, offsetof(t2919, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2919_FIs[] =
{
	&t2919_f0_FieldInfo,
	&t2919_f1_FieldInfo,
	NULL
};
extern MethodInfo m16753_MI;
static PropertyInfo t2919____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2919_TI, "System.Collections.IEnumerator.Current", &m16753_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16756_MI;
static PropertyInfo t2919____Current_PropertyInfo = 
{
	&t2919_TI, "Current", &m16756_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2919_PIs[] =
{
	&t2919____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2919____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2919_m16752_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2919_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16752_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2919_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2919_m16752_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2919_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16753_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2919_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2919_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16754_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2919_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2919_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16755_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2919_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2919_TI;
extern Il2CppType t1403_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16756_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2919_TI, &t1403_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2919_MIs[] =
{
	&m16752_MI,
	&m16753_MI,
	&m16754_MI,
	&m16755_MI,
	&m16756_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16753_MI;
extern MethodInfo m16755_MI;
extern MethodInfo m16754_MI;
extern MethodInfo m16756_MI;
static MethodInfo* t2919_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16753_MI,
	&m16755_MI,
	&m16754_MI,
	&m16756_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3844_TI;
static TypeInfo* t2919_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3844_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3844_TI;
static Il2CppInterfaceOffsetPair t2919_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3844_TI, 7},
};
extern MethodInfo m16756_MI;
extern TypeInfo t1403_TI;
extern MethodInfo m22959_MI;
static void* t2919_RGCTXData[3] = 
{
	&m16756_MI,
	&t1403_TI,
	&m22959_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2919_0_0_0;
extern Il2CppType t2919_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2919_TI;
extern Il2CppGenericClass t2919_GC;
extern TypeInfo t52_TI;
TypeInfo t2919_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2919_MIs, t2919_PIs, t2919_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2919_TI, t2919_ITIs, t2919_VT, &EmptyCustomAttributesCache, &t2919_TI, &t2919_0_0_0, &t2919_1_0_0, t2919_IOs, &t2919_GC, NULL, NULL, NULL, t2919_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2919)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5189_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>
extern MethodInfo m30154_MI;
extern MethodInfo m30155_MI;
static PropertyInfo t5189____Item_PropertyInfo = 
{
	&t5189_TI, "Item", &m30154_MI, &m30155_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5189_PIs[] =
{
	&t5189____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1403_0_0_0;
static ParameterInfo t5189_m30156_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1403_0_0_0},
};
extern TypeInfo t5189_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30156_MI = 
{
	"IndexOf", NULL, &t5189_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5189_m30156_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1403_0_0_0;
static ParameterInfo t5189_m30157_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1403_0_0_0},
};
extern TypeInfo t5189_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30157_MI = 
{
	"Insert", NULL, &t5189_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5189_m30157_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5189_m30158_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5189_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30158_MI = 
{
	"RemoveAt", NULL, &t5189_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5189_m30158_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5189_m30154_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5189_TI;
extern Il2CppType t1403_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30154_MI = 
{
	"get_Item", NULL, &t5189_TI, &t1403_0_0_0, RuntimeInvoker_t7_t60, t5189_m30154_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1403_0_0_0;
static ParameterInfo t5189_m30155_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1403_0_0_0},
};
extern TypeInfo t5189_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30155_MI = 
{
	"set_Item", NULL, &t5189_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5189_m30155_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5189_MIs[] =
{
	&m30156_MI,
	&m30157_MI,
	&m30158_MI,
	&m30154_MI,
	&m30155_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5188_TI;
extern TypeInfo t5190_TI;
static TypeInfo* t5189_ITIs[] = 
{
	&t618_TI,
	&t5188_TI,
	&t5190_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5189_0_0_0;
extern Il2CppType t5189_1_0_0;
struct t5189;
extern TypeInfo t5189_TI;
extern Il2CppGenericClass t5189_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5189_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5189_MIs, t5189_PIs, NULL, NULL, NULL, NULL, NULL, &t5189_TI, t5189_ITIs, NULL, &t1426__CustomAttributeCache, &t5189_TI, &t5189_0_0_0, &t5189_1_0_0, NULL, &t5189_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3845_TI;

#include "t905.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.TimeSpan>
extern MethodInfo m30159_MI;
static PropertyInfo t3845____Current_PropertyInfo = 
{
	&t3845_TI, "Current", &m30159_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3845_PIs[] =
{
	&t3845____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3845_TI;
extern Il2CppType t905_0_0_0;
extern void* RuntimeInvoker_t905 (MethodInfo* method, void* obj, void** args);
MethodInfo m30159_MI = 
{
	"get_Current", NULL, &t3845_TI, &t905_0_0_0, RuntimeInvoker_t905, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3845_MIs[] =
{
	&m30159_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3845_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3845_0_0_0;
extern Il2CppType t3845_1_0_0;
struct t3845;
extern TypeInfo t3845_TI;
extern Il2CppGenericClass t3845_GC;
TypeInfo t3845_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3845_MIs, t3845_PIs, NULL, NULL, NULL, NULL, NULL, &t3845_TI, t3845_ITIs, NULL, &EmptyCustomAttributesCache, &t3845_TI, &t3845_0_0_0, &t3845_1_0_0, NULL, &t3845_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2920.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2920_TI;
#include "t2920MD.h"

extern TypeInfo t2920_TI;
extern TypeInfo t905_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16761_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22970_MI;
struct t52;
 t905  m22970 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22970_MI;


extern MethodInfo m16757_MI;
 void m16757 (t2920 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16758_MI;
 t7 * m16758 (t2920 * __this, MethodInfo* method){
	{
		t905  L_0 = m16761(__this, &m16761_MI);
		t905  L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t905_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16759_MI;
 void m16759 (t2920 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16760_MI;
 bool m16760 (t2920 * __this, MethodInfo* method){
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
extern MethodInfo m16761_MI;
 t905  m16761 (t2920 * __this, MethodInfo* method){
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
		t905  L_8 = m22970(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22970_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.TimeSpan>
extern Il2CppType t52_0_0_1;
FieldInfo t2920_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2920_TI, offsetof(t2920, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2920_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2920_TI, offsetof(t2920, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2920_FIs[] =
{
	&t2920_f0_FieldInfo,
	&t2920_f1_FieldInfo,
	NULL
};
extern MethodInfo m16758_MI;
static PropertyInfo t2920____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2920_TI, "System.Collections.IEnumerator.Current", &m16758_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16761_MI;
static PropertyInfo t2920____Current_PropertyInfo = 
{
	&t2920_TI, "Current", &m16761_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2920_PIs[] =
{
	&t2920____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2920____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2920_m16757_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2920_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16757_MI = 
{
	".ctor", (methodPointerType)&m16757, &t2920_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2920_m16757_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2920_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16758_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16758, &t2920_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2920_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16759_MI = 
{
	"Dispose", (methodPointerType)&m16759, &t2920_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2920_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16760_MI = 
{
	"MoveNext", (methodPointerType)&m16760, &t2920_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2920_TI;
extern Il2CppType t905_0_0_0;
extern void* RuntimeInvoker_t905 (MethodInfo* method, void* obj, void** args);
MethodInfo m16761_MI = 
{
	"get_Current", (methodPointerType)&m16761, &t2920_TI, &t905_0_0_0, RuntimeInvoker_t905, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2920_MIs[] =
{
	&m16757_MI,
	&m16758_MI,
	&m16759_MI,
	&m16760_MI,
	&m16761_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16758_MI;
extern MethodInfo m16760_MI;
extern MethodInfo m16759_MI;
extern MethodInfo m16761_MI;
static MethodInfo* t2920_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16758_MI,
	&m16760_MI,
	&m16759_MI,
	&m16761_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3845_TI;
static TypeInfo* t2920_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3845_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3845_TI;
static Il2CppInterfaceOffsetPair t2920_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3845_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2920_0_0_0;
extern Il2CppType t2920_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2920_TI;
extern Il2CppGenericClass t2920_GC;
extern TypeInfo t52_TI;
TypeInfo t2920_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2920_MIs, t2920_PIs, t2920_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2920_TI, t2920_ITIs, t2920_VT, &EmptyCustomAttributesCache, &t2920_TI, &t2920_0_0_0, &t2920_1_0_0, t2920_IOs, &t2920_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2920)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5191_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.TimeSpan>
extern MethodInfo m30160_MI;
static PropertyInfo t5191____Count_PropertyInfo = 
{
	&t5191_TI, "Count", &m30160_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30161_MI;
static PropertyInfo t5191____IsReadOnly_PropertyInfo = 
{
	&t5191_TI, "IsReadOnly", &m30161_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5191_PIs[] =
{
	&t5191____Count_PropertyInfo,
	&t5191____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5191_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30160_MI = 
{
	"get_Count", NULL, &t5191_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5191_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30161_MI = 
{
	"get_IsReadOnly", NULL, &t5191_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t905_0_0_0;
static ParameterInfo t5191_m30162_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t905_0_0_0},
};
extern TypeInfo t5191_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t905 (MethodInfo* method, void* obj, void** args);
MethodInfo m30162_MI = 
{
	"Add", NULL, &t5191_TI, &t53_0_0_0, RuntimeInvoker_t53_t905, t5191_m30162_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5191_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30163_MI = 
{
	"Clear", NULL, &t5191_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t905_0_0_0;
static ParameterInfo t5191_m30164_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t905_0_0_0},
};
extern TypeInfo t5191_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t905 (MethodInfo* method, void* obj, void** args);
MethodInfo m30164_MI = 
{
	"Contains", NULL, &t5191_TI, &t55_0_0_0, RuntimeInvoker_t55_t905, t5191_m30164_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1556_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5191_m30165_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1556_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5191_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30165_MI = 
{
	"CopyTo", NULL, &t5191_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5191_m30165_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t905_0_0_0;
static ParameterInfo t5191_m30166_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t905_0_0_0},
};
extern TypeInfo t5191_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t905 (MethodInfo* method, void* obj, void** args);
MethodInfo m30166_MI = 
{
	"Remove", NULL, &t5191_TI, &t55_0_0_0, RuntimeInvoker_t55_t905, t5191_m30166_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5191_MIs[] =
{
	&m30160_MI,
	&m30161_MI,
	&m30162_MI,
	&m30163_MI,
	&m30164_MI,
	&m30165_MI,
	&m30166_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5193_TI;
static TypeInfo* t5191_ITIs[] = 
{
	&t618_TI,
	&t5193_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5191_0_0_0;
extern Il2CppType t5191_1_0_0;
struct t5191;
extern TypeInfo t5191_TI;
extern Il2CppGenericClass t5191_GC;
TypeInfo t5191_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5191_MIs, t5191_PIs, NULL, NULL, NULL, NULL, NULL, &t5191_TI, t5191_ITIs, NULL, &EmptyCustomAttributesCache, &t5191_TI, &t5191_0_0_0, &t5191_1_0_0, NULL, &t5191_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5193_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.TimeSpan>
extern TypeInfo t5193_TI;
extern Il2CppType t3845_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30167_MI = 
{
	"GetEnumerator", NULL, &t5193_TI, &t3845_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5193_MIs[] =
{
	&m30167_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5193_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5193_0_0_0;
extern Il2CppType t5193_1_0_0;
struct t5193;
extern TypeInfo t5193_TI;
extern Il2CppGenericClass t5193_GC;
TypeInfo t5193_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5193_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5193_TI, t5193_ITIs, NULL, &EmptyCustomAttributesCache, &t5193_TI, &t5193_0_0_0, &t5193_1_0_0, NULL, &t5193_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5192_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.TimeSpan>
extern MethodInfo m30168_MI;
extern MethodInfo m30169_MI;
static PropertyInfo t5192____Item_PropertyInfo = 
{
	&t5192_TI, "Item", &m30168_MI, &m30169_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5192_PIs[] =
{
	&t5192____Item_PropertyInfo,
	NULL
};
extern Il2CppType t905_0_0_0;
static ParameterInfo t5192_m30170_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t905_0_0_0},
};
extern TypeInfo t5192_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t905 (MethodInfo* method, void* obj, void** args);
MethodInfo m30170_MI = 
{
	"IndexOf", NULL, &t5192_TI, &t60_0_0_0, RuntimeInvoker_t60_t905, t5192_m30170_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t905_0_0_0;
static ParameterInfo t5192_m30171_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t905_0_0_0},
};
extern TypeInfo t5192_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t905 (MethodInfo* method, void* obj, void** args);
MethodInfo m30171_MI = 
{
	"Insert", NULL, &t5192_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t905, t5192_m30171_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5192_m30172_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5192_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30172_MI = 
{
	"RemoveAt", NULL, &t5192_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5192_m30172_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5192_m30168_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5192_TI;
extern Il2CppType t905_0_0_0;
extern void* RuntimeInvoker_t905_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30168_MI = 
{
	"get_Item", NULL, &t5192_TI, &t905_0_0_0, RuntimeInvoker_t905_t60, t5192_m30168_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t905_0_0_0;
static ParameterInfo t5192_m30169_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t905_0_0_0},
};
extern TypeInfo t5192_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t905 (MethodInfo* method, void* obj, void** args);
MethodInfo m30169_MI = 
{
	"set_Item", NULL, &t5192_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t905, t5192_m30169_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5192_MIs[] =
{
	&m30170_MI,
	&m30171_MI,
	&m30172_MI,
	&m30168_MI,
	&m30169_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5191_TI;
extern TypeInfo t5193_TI;
static TypeInfo* t5192_ITIs[] = 
{
	&t618_TI,
	&t5191_TI,
	&t5193_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5192_0_0_0;
extern Il2CppType t5192_1_0_0;
struct t5192;
extern TypeInfo t5192_TI;
extern Il2CppGenericClass t5192_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5192_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5192_MIs, t5192_PIs, NULL, NULL, NULL, NULL, NULL, &t5192_TI, t5192_ITIs, NULL, &t1426__CustomAttributeCache, &t5192_TI, &t5192_0_0_0, &t5192_1_0_0, NULL, &t5192_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5194_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>
extern MethodInfo m30173_MI;
static PropertyInfo t5194____Count_PropertyInfo = 
{
	&t5194_TI, "Count", &m30173_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30174_MI;
static PropertyInfo t5194____IsReadOnly_PropertyInfo = 
{
	&t5194_TI, "IsReadOnly", &m30174_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5194_PIs[] =
{
	&t5194____Count_PropertyInfo,
	&t5194____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5194_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30173_MI = 
{
	"get_Count", NULL, &t5194_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5194_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30174_MI = 
{
	"get_IsReadOnly", NULL, &t5194_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1601_0_0_0;
static ParameterInfo t5194_m30175_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1601_0_0_0},
};
extern TypeInfo t5194_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30175_MI = 
{
	"Add", NULL, &t5194_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5194_m30175_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5194_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30176_MI = 
{
	"Clear", NULL, &t5194_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1601_0_0_0;
static ParameterInfo t5194_m30177_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1601_0_0_0},
};
extern TypeInfo t5194_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30177_MI = 
{
	"Contains", NULL, &t5194_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5194_m30177_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3165_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5194_m30178_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3165_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5194_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30178_MI = 
{
	"CopyTo", NULL, &t5194_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5194_m30178_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1601_0_0_0;
static ParameterInfo t5194_m30179_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1601_0_0_0},
};
extern TypeInfo t5194_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30179_MI = 
{
	"Remove", NULL, &t5194_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5194_m30179_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5194_MIs[] =
{
	&m30173_MI,
	&m30174_MI,
	&m30175_MI,
	&m30176_MI,
	&m30177_MI,
	&m30178_MI,
	&m30179_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5196_TI;
static TypeInfo* t5194_ITIs[] = 
{
	&t618_TI,
	&t5196_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5194_0_0_0;
extern Il2CppType t5194_1_0_0;
struct t5194;
extern TypeInfo t5194_TI;
extern Il2CppGenericClass t5194_GC;
TypeInfo t5194_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5194_MIs, t5194_PIs, NULL, NULL, NULL, NULL, NULL, &t5194_TI, t5194_ITIs, NULL, &EmptyCustomAttributesCache, &t5194_TI, &t5194_0_0_0, &t5194_1_0_0, NULL, &t5194_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5196_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.TimeSpan>>
extern TypeInfo t5196_TI;
extern Il2CppType t3846_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30180_MI = 
{
	"GetEnumerator", NULL, &t5196_TI, &t3846_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5196_MIs[] =
{
	&m30180_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5196_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5196_0_0_0;
extern Il2CppType t5196_1_0_0;
struct t5196;
extern TypeInfo t5196_TI;
extern Il2CppGenericClass t5196_GC;
TypeInfo t5196_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5196_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5196_TI, t5196_ITIs, NULL, &EmptyCustomAttributesCache, &t5196_TI, &t5196_0_0_0, &t5196_1_0_0, NULL, &t5196_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3846_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.TimeSpan>>
extern MethodInfo m30181_MI;
static PropertyInfo t3846____Current_PropertyInfo = 
{
	&t3846_TI, "Current", &m30181_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3846_PIs[] =
{
	&t3846____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3846_TI;
extern Il2CppType t1601_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30181_MI = 
{
	"get_Current", NULL, &t3846_TI, &t1601_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3846_MIs[] =
{
	&m30181_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3846_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3846_0_0_0;
extern Il2CppType t3846_1_0_0;
struct t3846;
extern TypeInfo t3846_TI;
extern Il2CppGenericClass t3846_GC;
TypeInfo t3846_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3846_MIs, t3846_PIs, NULL, NULL, NULL, NULL, NULL, &t3846_TI, t3846_ITIs, NULL, &EmptyCustomAttributesCache, &t3846_TI, &t3846_0_0_0, &t3846_1_0_0, NULL, &t3846_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1601_TI;



// Metadata Definition System.IComparable`1<System.TimeSpan>
extern Il2CppType t905_0_0_0;
static ParameterInfo t1601_m30182_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t905_0_0_0},
};
extern TypeInfo t1601_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t905 (MethodInfo* method, void* obj, void** args);
MethodInfo m30182_MI = 
{
	"CompareTo", NULL, &t1601_TI, &t60_0_0_0, RuntimeInvoker_t60_t905, t1601_m30182_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1601_MIs[] =
{
	&m30182_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1601_0_0_0;
extern Il2CppType t1601_1_0_0;
struct t1601;
extern TypeInfo t1601_TI;
extern Il2CppGenericClass t1601_GC;
TypeInfo t1601_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t1601_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1601_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1601_TI, &t1601_0_0_0, &t1601_1_0_0, NULL, &t1601_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2921.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2921_TI;
#include "t2921MD.h"

extern TypeInfo t2921_TI;
extern TypeInfo t1601_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16766_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22981_MI;
struct t52;
#define m22981(__this, p0, method) (t7*)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22981_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>
extern Il2CppType t52_0_0_1;
FieldInfo t2921_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2921_TI, offsetof(t2921, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2921_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2921_TI, offsetof(t2921, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2921_FIs[] =
{
	&t2921_f0_FieldInfo,
	&t2921_f1_FieldInfo,
	NULL
};
extern MethodInfo m16763_MI;
static PropertyInfo t2921____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2921_TI, "System.Collections.IEnumerator.Current", &m16763_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16766_MI;
static PropertyInfo t2921____Current_PropertyInfo = 
{
	&t2921_TI, "Current", &m16766_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2921_PIs[] =
{
	&t2921____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2921____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2921_m16762_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2921_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16762_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2921_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2921_m16762_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2921_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16763_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2921_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2921_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16764_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2921_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2921_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16765_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2921_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2921_TI;
extern Il2CppType t1601_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16766_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2921_TI, &t1601_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2921_MIs[] =
{
	&m16762_MI,
	&m16763_MI,
	&m16764_MI,
	&m16765_MI,
	&m16766_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16763_MI;
extern MethodInfo m16765_MI;
extern MethodInfo m16764_MI;
extern MethodInfo m16766_MI;
static MethodInfo* t2921_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16763_MI,
	&m16765_MI,
	&m16764_MI,
	&m16766_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3846_TI;
static TypeInfo* t2921_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3846_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3846_TI;
static Il2CppInterfaceOffsetPair t2921_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3846_TI, 7},
};
extern MethodInfo m16766_MI;
extern TypeInfo t1601_TI;
extern MethodInfo m22981_MI;
static void* t2921_RGCTXData[3] = 
{
	&m16766_MI,
	&t1601_TI,
	&m22981_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2921_0_0_0;
extern Il2CppType t2921_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2921_TI;
extern Il2CppGenericClass t2921_GC;
extern TypeInfo t52_TI;
TypeInfo t2921_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2921_MIs, t2921_PIs, t2921_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2921_TI, t2921_ITIs, t2921_VT, &EmptyCustomAttributesCache, &t2921_TI, &t2921_0_0_0, &t2921_1_0_0, t2921_IOs, &t2921_GC, NULL, NULL, NULL, t2921_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2921)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5195_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>
extern MethodInfo m30183_MI;
extern MethodInfo m30184_MI;
static PropertyInfo t5195____Item_PropertyInfo = 
{
	&t5195_TI, "Item", &m30183_MI, &m30184_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5195_PIs[] =
{
	&t5195____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1601_0_0_0;
static ParameterInfo t5195_m30185_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1601_0_0_0},
};
extern TypeInfo t5195_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30185_MI = 
{
	"IndexOf", NULL, &t5195_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5195_m30185_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1601_0_0_0;
static ParameterInfo t5195_m30186_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1601_0_0_0},
};
extern TypeInfo t5195_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30186_MI = 
{
	"Insert", NULL, &t5195_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5195_m30186_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5195_m30187_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5195_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30187_MI = 
{
	"RemoveAt", NULL, &t5195_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5195_m30187_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5195_m30183_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5195_TI;
extern Il2CppType t1601_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30183_MI = 
{
	"get_Item", NULL, &t5195_TI, &t1601_0_0_0, RuntimeInvoker_t7_t60, t5195_m30183_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1601_0_0_0;
static ParameterInfo t5195_m30184_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1601_0_0_0},
};
extern TypeInfo t5195_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30184_MI = 
{
	"set_Item", NULL, &t5195_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5195_m30184_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5195_MIs[] =
{
	&m30185_MI,
	&m30186_MI,
	&m30187_MI,
	&m30183_MI,
	&m30184_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5194_TI;
extern TypeInfo t5196_TI;
static TypeInfo* t5195_ITIs[] = 
{
	&t618_TI,
	&t5194_TI,
	&t5196_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5195_0_0_0;
extern Il2CppType t5195_1_0_0;
struct t5195;
extern TypeInfo t5195_TI;
extern Il2CppGenericClass t5195_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5195_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5195_MIs, t5195_PIs, NULL, NULL, NULL, NULL, NULL, &t5195_TI, t5195_ITIs, NULL, &t1426__CustomAttributeCache, &t5195_TI, &t5195_0_0_0, &t5195_1_0_0, NULL, &t5195_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5197_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>
extern MethodInfo m30188_MI;
static PropertyInfo t5197____Count_PropertyInfo = 
{
	&t5197_TI, "Count", &m30188_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30189_MI;
static PropertyInfo t5197____IsReadOnly_PropertyInfo = 
{
	&t5197_TI, "IsReadOnly", &m30189_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5197_PIs[] =
{
	&t5197____Count_PropertyInfo,
	&t5197____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5197_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30188_MI = 
{
	"get_Count", NULL, &t5197_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5197_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30189_MI = 
{
	"get_IsReadOnly", NULL, &t5197_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1602_0_0_0;
static ParameterInfo t5197_m30190_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1602_0_0_0},
};
extern TypeInfo t5197_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30190_MI = 
{
	"Add", NULL, &t5197_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t5197_m30190_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5197_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30191_MI = 
{
	"Clear", NULL, &t5197_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1602_0_0_0;
static ParameterInfo t5197_m30192_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1602_0_0_0},
};
extern TypeInfo t5197_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30192_MI = 
{
	"Contains", NULL, &t5197_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5197_m30192_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3166_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5197_m30193_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3166_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5197_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30193_MI = 
{
	"CopyTo", NULL, &t5197_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5197_m30193_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1602_0_0_0;
static ParameterInfo t5197_m30194_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1602_0_0_0},
};
extern TypeInfo t5197_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30194_MI = 
{
	"Remove", NULL, &t5197_TI, &t55_0_0_0, RuntimeInvoker_t55_t7, t5197_m30194_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5197_MIs[] =
{
	&m30188_MI,
	&m30189_MI,
	&m30190_MI,
	&m30191_MI,
	&m30192_MI,
	&m30193_MI,
	&m30194_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5199_TI;
static TypeInfo* t5197_ITIs[] = 
{
	&t618_TI,
	&t5199_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5197_0_0_0;
extern Il2CppType t5197_1_0_0;
struct t5197;
extern TypeInfo t5197_TI;
extern Il2CppGenericClass t5197_GC;
TypeInfo t5197_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5197_MIs, t5197_PIs, NULL, NULL, NULL, NULL, NULL, &t5197_TI, t5197_ITIs, NULL, &EmptyCustomAttributesCache, &t5197_TI, &t5197_0_0_0, &t5197_1_0_0, NULL, &t5197_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5199_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.TimeSpan>>
extern TypeInfo t5199_TI;
extern Il2CppType t3847_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30195_MI = 
{
	"GetEnumerator", NULL, &t5199_TI, &t3847_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5199_MIs[] =
{
	&m30195_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5199_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5199_0_0_0;
extern Il2CppType t5199_1_0_0;
struct t5199;
extern TypeInfo t5199_TI;
extern Il2CppGenericClass t5199_GC;
TypeInfo t5199_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5199_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5199_TI, t5199_ITIs, NULL, &EmptyCustomAttributesCache, &t5199_TI, &t5199_0_0_0, &t5199_1_0_0, NULL, &t5199_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3847_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.TimeSpan>>
extern MethodInfo m30196_MI;
static PropertyInfo t3847____Current_PropertyInfo = 
{
	&t3847_TI, "Current", &m30196_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3847_PIs[] =
{
	&t3847____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3847_TI;
extern Il2CppType t1602_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30196_MI = 
{
	"get_Current", NULL, &t3847_TI, &t1602_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3847_MIs[] =
{
	&m30196_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3847_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3847_0_0_0;
extern Il2CppType t3847_1_0_0;
struct t3847;
extern TypeInfo t3847_TI;
extern Il2CppGenericClass t3847_GC;
TypeInfo t3847_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3847_MIs, t3847_PIs, NULL, NULL, NULL, NULL, NULL, &t3847_TI, t3847_ITIs, NULL, &EmptyCustomAttributesCache, &t3847_TI, &t3847_0_0_0, &t3847_1_0_0, NULL, &t3847_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1602_TI;



// Metadata Definition System.IEquatable`1<System.TimeSpan>
extern Il2CppType t905_0_0_0;
static ParameterInfo t1602_m30197_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t905_0_0_0},
};
extern TypeInfo t1602_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t905 (MethodInfo* method, void* obj, void** args);
MethodInfo m30197_MI = 
{
	"Equals", NULL, &t1602_TI, &t55_0_0_0, RuntimeInvoker_t55_t905, t1602_m30197_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1602_MIs[] =
{
	&m30197_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1602_0_0_0;
extern Il2CppType t1602_1_0_0;
struct t1602;
extern TypeInfo t1602_TI;
extern Il2CppGenericClass t1602_GC;
TypeInfo t1602_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t1602_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1602_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1602_TI, &t1602_0_0_0, &t1602_1_0_0, NULL, &t1602_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t2922.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2922_TI;
#include "t2922MD.h"

extern TypeInfo t2922_TI;
extern TypeInfo t1602_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16771_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m22992_MI;
struct t52;
#define m22992(__this, p0, method) (t7*)m17147_gshared((t52 *)__this, (int32_t)p0, method)
extern MethodInfo m22992_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>
extern Il2CppType t52_0_0_1;
FieldInfo t2922_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2922_TI, offsetof(t2922, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2922_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2922_TI, offsetof(t2922, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2922_FIs[] =
{
	&t2922_f0_FieldInfo,
	&t2922_f1_FieldInfo,
	NULL
};
extern MethodInfo m16768_MI;
static PropertyInfo t2922____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2922_TI, "System.Collections.IEnumerator.Current", &m16768_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16771_MI;
static PropertyInfo t2922____Current_PropertyInfo = 
{
	&t2922_TI, "Current", &m16771_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2922_PIs[] =
{
	&t2922____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2922____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2922_m16767_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2922_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16767_MI = 
{
	".ctor", (methodPointerType)&m7977_gshared, &t2922_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2922_m16767_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2922_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16768_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7979_gshared, &t2922_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2922_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16769_MI = 
{
	"Dispose", (methodPointerType)&m7981_gshared, &t2922_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2922_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16770_MI = 
{
	"MoveNext", (methodPointerType)&m7983_gshared, &t2922_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2922_TI;
extern Il2CppType t1602_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16771_MI = 
{
	"get_Current", (methodPointerType)&m7985_gshared, &t2922_TI, &t1602_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2922_MIs[] =
{
	&m16767_MI,
	&m16768_MI,
	&m16769_MI,
	&m16770_MI,
	&m16771_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16768_MI;
extern MethodInfo m16770_MI;
extern MethodInfo m16769_MI;
extern MethodInfo m16771_MI;
static MethodInfo* t2922_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16768_MI,
	&m16770_MI,
	&m16769_MI,
	&m16771_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3847_TI;
static TypeInfo* t2922_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3847_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3847_TI;
static Il2CppInterfaceOffsetPair t2922_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3847_TI, 7},
};
extern MethodInfo m16771_MI;
extern TypeInfo t1602_TI;
extern MethodInfo m22992_MI;
static void* t2922_RGCTXData[3] = 
{
	&m16771_MI,
	&t1602_TI,
	&m22992_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2922_0_0_0;
extern Il2CppType t2922_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2922_TI;
extern Il2CppGenericClass t2922_GC;
extern TypeInfo t52_TI;
TypeInfo t2922_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2922_MIs, t2922_PIs, t2922_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2922_TI, t2922_ITIs, t2922_VT, &EmptyCustomAttributesCache, &t2922_TI, &t2922_0_0_0, &t2922_1_0_0, t2922_IOs, &t2922_GC, NULL, NULL, NULL, t2922_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2922)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5198_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>
extern MethodInfo m30198_MI;
extern MethodInfo m30199_MI;
static PropertyInfo t5198____Item_PropertyInfo = 
{
	&t5198_TI, "Item", &m30198_MI, &m30199_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5198_PIs[] =
{
	&t5198____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1602_0_0_0;
static ParameterInfo t5198_m30200_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1602_0_0_0},
};
extern TypeInfo t5198_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30200_MI = 
{
	"IndexOf", NULL, &t5198_TI, &t60_0_0_0, RuntimeInvoker_t60_t7, t5198_m30200_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1602_0_0_0;
static ParameterInfo t5198_m30201_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1602_0_0_0},
};
extern TypeInfo t5198_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30201_MI = 
{
	"Insert", NULL, &t5198_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5198_m30201_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5198_m30202_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5198_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30202_MI = 
{
	"RemoveAt", NULL, &t5198_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5198_m30202_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5198_m30198_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5198_TI;
extern Il2CppType t1602_0_0_0;
extern void* RuntimeInvoker_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30198_MI = 
{
	"get_Item", NULL, &t5198_TI, &t1602_0_0_0, RuntimeInvoker_t7_t60, t5198_m30198_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1602_0_0_0;
static ParameterInfo t5198_m30199_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1602_0_0_0},
};
extern TypeInfo t5198_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30199_MI = 
{
	"set_Item", NULL, &t5198_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t7, t5198_m30199_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5198_MIs[] =
{
	&m30200_MI,
	&m30201_MI,
	&m30202_MI,
	&m30198_MI,
	&m30199_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5197_TI;
extern TypeInfo t5199_TI;
static TypeInfo* t5198_ITIs[] = 
{
	&t618_TI,
	&t5197_TI,
	&t5199_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5198_0_0_0;
extern Il2CppType t5198_1_0_0;
struct t5198;
extern TypeInfo t5198_TI;
extern Il2CppGenericClass t5198_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5198_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5198_MIs, t5198_PIs, NULL, NULL, NULL, NULL, NULL, &t5198_TI, t5198_ITIs, NULL, &t1426__CustomAttributeCache, &t5198_TI, &t5198_0_0_0, &t5198_1_0_0, NULL, &t5198_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3848_TI;

#include "t1106.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern MethodInfo m30203_MI;
static PropertyInfo t3848____Current_PropertyInfo = 
{
	&t3848_TI, "Current", &m30203_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3848_PIs[] =
{
	&t3848____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3848_TI;
extern Il2CppType t1106_0_0_0;
extern void* RuntimeInvoker_t1106 (MethodInfo* method, void* obj, void** args);
MethodInfo m30203_MI = 
{
	"get_Current", NULL, &t3848_TI, &t1106_0_0_0, RuntimeInvoker_t1106, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3848_MIs[] =
{
	&m30203_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3848_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3848_0_0_0;
extern Il2CppType t3848_1_0_0;
struct t3848;
extern TypeInfo t3848_TI;
extern Il2CppGenericClass t3848_GC;
TypeInfo t3848_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3848_MIs, t3848_PIs, NULL, NULL, NULL, NULL, NULL, &t3848_TI, t3848_ITIs, NULL, &EmptyCustomAttributesCache, &t3848_TI, &t3848_0_0_0, &t3848_1_0_0, NULL, &t3848_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2923.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2923_TI;
#include "t2923MD.h"

extern TypeInfo t2923_TI;
extern TypeInfo t1106_TI;
extern TypeInfo t1295_TI;
extern MethodInfo m16776_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m3829_MI;
extern MethodInfo m23003_MI;
struct t52;
 int32_t m23003 (t52 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m23003_MI;


extern MethodInfo m16772_MI;
 void m16772 (t2923 * __this, t52 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16773_MI;
 t7 * m16773 (t2923 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16776(__this, &m16776_MI);
		int32_t L_1 = L_0;
		t7 * L_2 = Box(InitializedTypeInfo(&t1106_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16774_MI;
 void m16774 (t2923 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16775_MI;
 bool m16775 (t2923 * __this, MethodInfo* method){
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
extern MethodInfo m16776_MI;
 int32_t m16776 (t2923 * __this, MethodInfo* method){
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
		int32_t L_8 = m23003(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m23003_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern Il2CppType t52_0_0_1;
FieldInfo t2923_f0_FieldInfo = 
{
	"array", &t52_0_0_1, &t2923_TI, offsetof(t2923, f0) + sizeof(t7), &EmptyCustomAttributesCache};
extern Il2CppType t60_0_0_1;
FieldInfo t2923_f1_FieldInfo = 
{
	"idx", &t60_0_0_1, &t2923_TI, offsetof(t2923, f1) + sizeof(t7), &EmptyCustomAttributesCache};
static FieldInfo* t2923_FIs[] =
{
	&t2923_f0_FieldInfo,
	&t2923_f1_FieldInfo,
	NULL
};
extern MethodInfo m16773_MI;
static PropertyInfo t2923____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2923_TI, "System.Collections.IEnumerator.Current", &m16773_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16776_MI;
static PropertyInfo t2923____Current_PropertyInfo = 
{
	&t2923_TI, "Current", &m16776_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2923_PIs[] =
{
	&t2923____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2923____Current_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t2923_m16772_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern TypeInfo t2923_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16772_MI = 
{
	".ctor", (methodPointerType)&m16772, &t2923_TI, &t53_0_0_0, RuntimeInvoker_t53_t7, t2923_m16772_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2923_TI;
extern Il2CppType t7_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m16773_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16773, &t2923_TI, &t7_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2923_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m16774_MI = 
{
	"Dispose", (methodPointerType)&m16774, &t2923_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2923_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m16775_MI = 
{
	"MoveNext", (methodPointerType)&m16775, &t2923_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2923_TI;
extern Il2CppType t1106_0_0_0;
extern void* RuntimeInvoker_t1106 (MethodInfo* method, void* obj, void** args);
MethodInfo m16776_MI = 
{
	"get_Current", (methodPointerType)&m16776, &t2923_TI, &t1106_0_0_0, RuntimeInvoker_t1106, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2923_MIs[] =
{
	&m16772_MI,
	&m16773_MI,
	&m16774_MI,
	&m16775_MI,
	&m16776_MI,
	NULL
};
extern MethodInfo m1519_MI;
extern MethodInfo m113_MI;
extern MethodInfo m1520_MI;
extern MethodInfo m1624_MI;
extern MethodInfo m16773_MI;
extern MethodInfo m16775_MI;
extern MethodInfo m16774_MI;
extern MethodInfo m16776_MI;
static MethodInfo* t2923_VT[] =
{
	&m1519_MI,
	&m113_MI,
	&m1520_MI,
	&m1624_MI,
	&m16773_MI,
	&m16775_MI,
	&m16774_MI,
	&m16776_MI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3848_TI;
static TypeInfo* t2923_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
	&t3848_TI,
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
extern TypeInfo t3848_TI;
static Il2CppInterfaceOffsetPair t2923_IOs[] = 
{
	{ &t12_TI, 4},
	{ &t65_TI, 6},
	{ &t3848_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2923_0_0_0;
extern Il2CppType t2923_1_0_0;
extern TypeInfo t159_TI;
extern TypeInfo t2923_TI;
extern Il2CppGenericClass t2923_GC;
extern TypeInfo t52_TI;
TypeInfo t2923_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2923_MIs, t2923_PIs, t2923_FIs, NULL, &t159_TI, NULL, &t52_TI, &t2923_TI, t2923_ITIs, t2923_VT, &EmptyCustomAttributesCache, &t2923_TI, &t2923_0_0_0, &t2923_1_0_0, t2923_IOs, &t2923_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2923)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5200_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern MethodInfo m30204_MI;
static PropertyInfo t5200____Count_PropertyInfo = 
{
	&t5200_TI, "Count", &m30204_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m30205_MI;
static PropertyInfo t5200____IsReadOnly_PropertyInfo = 
{
	&t5200_TI, "IsReadOnly", &m30205_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5200_PIs[] =
{
	&t5200____Count_PropertyInfo,
	&t5200____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5200_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30204_MI = 
{
	"get_Count", NULL, &t5200_TI, &t60_0_0_0, RuntimeInvoker_t60, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5200_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55 (MethodInfo* method, void* obj, void** args);
MethodInfo m30205_MI = 
{
	"get_IsReadOnly", NULL, &t5200_TI, &t55_0_0_0, RuntimeInvoker_t55, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1106_0_0_0;
static ParameterInfo t5200_m30206_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1106_0_0_0},
};
extern TypeInfo t5200_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30206_MI = 
{
	"Add", NULL, &t5200_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5200_m30206_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5200_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53 (MethodInfo* method, void* obj, void** args);
MethodInfo m30207_MI = 
{
	"Clear", NULL, &t5200_TI, &t53_0_0_0, RuntimeInvoker_t53, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1106_0_0_0;
static ParameterInfo t5200_m30208_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1106_0_0_0},
};
extern TypeInfo t5200_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30208_MI = 
{
	"Contains", NULL, &t5200_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5200_m30208_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3167_0_0_0;
extern Il2CppType t60_0_0_0;
static ParameterInfo t5200_m30209_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3167_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5200_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t7_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30209_MI = 
{
	"CopyTo", NULL, &t5200_TI, &t53_0_0_0, RuntimeInvoker_t53_t7_t60, t5200_m30209_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1106_0_0_0;
static ParameterInfo t5200_m30210_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1106_0_0_0},
};
extern TypeInfo t5200_TI;
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t55_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30210_MI = 
{
	"Remove", NULL, &t5200_TI, &t55_0_0_0, RuntimeInvoker_t55_t60, t5200_m30210_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5200_MIs[] =
{
	&m30204_MI,
	&m30205_MI,
	&m30206_MI,
	&m30207_MI,
	&m30208_MI,
	&m30209_MI,
	&m30210_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5202_TI;
static TypeInfo* t5200_ITIs[] = 
{
	&t618_TI,
	&t5202_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5200_0_0_0;
extern Il2CppType t5200_1_0_0;
struct t5200;
extern TypeInfo t5200_TI;
extern Il2CppGenericClass t5200_GC;
TypeInfo t5200_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5200_MIs, t5200_PIs, NULL, NULL, NULL, NULL, NULL, &t5200_TI, t5200_ITIs, NULL, &EmptyCustomAttributesCache, &t5200_TI, &t5200_0_0_0, &t5200_1_0_0, NULL, &t5200_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5202_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern TypeInfo t5202_TI;
extern Il2CppType t3848_0_0_0;
extern void* RuntimeInvoker_t7 (MethodInfo* method, void* obj, void** args);
MethodInfo m30211_MI = 
{
	"GetEnumerator", NULL, &t5202_TI, &t3848_0_0_0, RuntimeInvoker_t7, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5202_MIs[] =
{
	&m30211_MI,
	NULL
};
extern TypeInfo t618_TI;
static TypeInfo* t5202_ITIs[] = 
{
	&t618_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5202_0_0_0;
extern Il2CppType t5202_1_0_0;
struct t5202;
extern TypeInfo t5202_TI;
extern Il2CppGenericClass t5202_GC;
TypeInfo t5202_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5202_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5202_TI, t5202_ITIs, NULL, &EmptyCustomAttributesCache, &t5202_TI, &t5202_0_0_0, &t5202_1_0_0, NULL, &t5202_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5201_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern MethodInfo m30212_MI;
extern MethodInfo m30213_MI;
static PropertyInfo t5201____Item_PropertyInfo = 
{
	&t5201_TI, "Item", &m30212_MI, &m30213_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5201_PIs[] =
{
	&t5201____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1106_0_0_0;
static ParameterInfo t5201_m30214_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1106_0_0_0},
};
extern TypeInfo t5201_TI;
extern Il2CppType t60_0_0_0;
extern void* RuntimeInvoker_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30214_MI = 
{
	"IndexOf", NULL, &t5201_TI, &t60_0_0_0, RuntimeInvoker_t60_t60, t5201_m30214_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1106_0_0_0;
static ParameterInfo t5201_m30215_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1106_0_0_0},
};
extern TypeInfo t5201_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30215_MI = 
{
	"Insert", NULL, &t5201_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5201_m30215_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5201_m30216_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5201_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30216_MI = 
{
	"RemoveAt", NULL, &t5201_TI, &t53_0_0_0, RuntimeInvoker_t53_t60, t5201_m30216_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
static ParameterInfo t5201_m30212_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
};
extern TypeInfo t5201_TI;
extern Il2CppType t1106_0_0_0;
extern void* RuntimeInvoker_t1106_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30212_MI = 
{
	"get_Item", NULL, &t5201_TI, &t1106_0_0_0, RuntimeInvoker_t1106_t60, t5201_m30212_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t60_0_0_0;
extern Il2CppType t1106_0_0_0;
static ParameterInfo t5201_m30213_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t60_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1106_0_0_0},
};
extern TypeInfo t5201_TI;
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t53_t60_t60 (MethodInfo* method, void* obj, void** args);
MethodInfo m30213_MI = 
{
	"set_Item", NULL, &t5201_TI, &t53_0_0_0, RuntimeInvoker_t53_t60_t60, t5201_m30213_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5201_MIs[] =
{
	&m30214_MI,
	&m30215_MI,
	&m30216_MI,
	&m30212_MI,
	&m30213_MI,
	NULL
};
extern TypeInfo t618_TI;
extern TypeInfo t5200_TI;
extern TypeInfo t5202_TI;
static TypeInfo* t5201_ITIs[] = 
{
	&t618_TI,
	&t5200_TI,
	&t5202_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5201_0_0_0;
extern Il2CppType t5201_1_0_0;
struct t5201;
extern TypeInfo t5201_TI;
extern Il2CppGenericClass t5201_GC;
extern CustomAttributesCache t1426__CustomAttributeCache;
TypeInfo t5201_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5201_MIs, t5201_PIs, NULL, NULL, NULL, NULL, NULL, &t5201_TI, t5201_ITIs, NULL, &t1426__CustomAttributeCache, &t5201_TI, &t5201_0_0_0, &t5201_1_0_0, NULL, &t5201_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3849_TI;

#include "t1107.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern MethodInfo m30217_MI;
static PropertyInfo t3849____Current_PropertyInfo = 
{
	&t3849_TI, "Current", &m30217_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3849_PIs[] =
{
	&t3849____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3849_TI;
extern Il2CppType t1107_0_0_0;
extern void* RuntimeInvoker_t1107 (MethodInfo* method, void* obj, void** args);
MethodInfo m30217_MI = 
{
	"get_Current", NULL, &t3849_TI, &t1107_0_0_0, RuntimeInvoker_t1107, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3849_MIs[] =
{
	&m30217_MI,
	NULL
};
extern TypeInfo t12_TI;
extern TypeInfo t65_TI;
static TypeInfo* t3849_ITIs[] = 
{
	&t12_TI,
	&t65_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3849_0_0_0;
extern Il2CppType t3849_1_0_0;
struct t3849;
extern TypeInfo t3849_TI;
extern Il2CppGenericClass t3849_GC;
TypeInfo t3849_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3849_MIs, t3849_PIs, NULL, NULL, NULL, NULL, NULL, &t3849_TI, t3849_ITIs, NULL, &EmptyCustomAttributesCache, &t3849_TI, &t3849_0_0_0, &t3849_1_0_0, NULL, &t3849_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
