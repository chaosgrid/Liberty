#include "Common-PCH.h"


#define public_62efb50 _public_62efb50
#define public_62efb56 _public_62efb56
#define public_62efb5c _public_62efb5c
#define public_62efb62 _public_62efb62
#define public_62efb68 _public_62efb68
#define public_62efb6e _public_62efb6e
#define public_62efb74 _public_62efb74

PROC_DECLARE(0x62efb40, internal_62efb40, public_62efb40);
extern "C" NAKED register_t __cdecl internal_62efb40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 6
        ja public_62efb74
/*FIXUP jmp dword ptr ds : [eax*4+public_62efb78] @0x62efb49*/
  JMPTB cmp eax, 0
  JMPTB je public_62efb50
  JMPTB cmp eax, 1
  JMPTB je public_62efb74
  JMPTB cmp eax, 2
  JMPTB je public_62efb62
  JMPTB cmp eax, 3
  JMPTB je public_62efb5c
  JMPTB cmp eax, 4
  JMPTB je public_62efb68
  JMPTB cmp eax, 5
  JMPTB je public_62efb6e
  JMPTB cmp eax, 6
  JMPTB je public_62efb56
  JMPTB int 3
        public_62efb50 : nop
        mov eax, dword ptr ds : [public_63fcaf8]
        ret 
        public_62efb56 : nop
        mov eax, dword ptr ds : [public_63fcae4]
        ret 
        public_62efb5c : nop
        mov eax, dword ptr ds : [public_63fcad0]
        ret 
        public_62efb62 : nop
        mov eax, dword ptr ds : [public_63fcabc]
        ret 
        public_62efb68 : nop
        mov eax, dword ptr ds : [public_63fcaa8]
        ret 
        public_62efb6e : nop
        mov eax, dword ptr ds : [public_63fca94]
        ret 
        public_62efb74 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62efb40)
        ASM_EXPORT_ENTRY_FIRST(0x62efb50, public_62efb50)
        ASM_EXPORT_ENTRY(0x62efb56, public_62efb56)
        ASM_EXPORT_ENTRY(0x62efb5c, public_62efb5c)
        ASM_EXPORT_ENTRY(0x62efb62, public_62efb62)
        ASM_EXPORT_ENTRY(0x62efb68, public_62efb68)
        ASM_EXPORT_ENTRY(0x62efb6e, public_62efb6e)
        ASM_EXPORT_ENTRY_LAST(0x62efb74, public_62efb74)
    }
}

#undef public_62efb50
#undef public_62efb56
#undef public_62efb5c
#undef public_62efb62
#undef public_62efb68
#undef public_62efb6e
#undef public_62efb74

#pragma init_seg(compiler)
extern "C" void const* const public_62efb50 = __AsmFindLabelExport(&internal_62efb40, 0x62efb50);
extern "C" void const* const public_62efb56 = __AsmFindLabelExport(&internal_62efb40, 0x62efb56);
extern "C" void const* const public_62efb5c = __AsmFindLabelExport(&internal_62efb40, 0x62efb5c);
extern "C" void const* const public_62efb62 = __AsmFindLabelExport(&internal_62efb40, 0x62efb62);
extern "C" void const* const public_62efb68 = __AsmFindLabelExport(&internal_62efb40, 0x62efb68);
extern "C" void const* const public_62efb6e = __AsmFindLabelExport(&internal_62efb40, 0x62efb6e);
extern "C" void const* const public_62efb74 = __AsmFindLabelExport(&internal_62efb40, 0x62efb74);
