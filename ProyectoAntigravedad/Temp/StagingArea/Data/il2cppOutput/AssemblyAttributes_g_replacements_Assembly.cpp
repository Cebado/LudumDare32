#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t92_TI;
#include "t92.h"
#include "t92MD.h"
extern MethodInfo m236_MI;
void g_replacements_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t92 * tmp;
		tmp = (t92 *)il2cpp_codegen_object_new (&t92_TI);
		m236(tmp, &m236_MI);
		extern MethodInfo m237_MI;
		m237(tmp, true, &m237_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_replacements_Assembly__CustomAttributeCache = {
1,
NULL,
&g_replacements_Assembly_CustomAttributesCacheGenerator
};
