#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e790);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627e7a2 _public_627e7a2
#define public_627e7b4 _public_627e7b4
#define public_627e7c8 _public_627e7c8

PROC_DECLARE(0x627e790, internal_627e790, public_627e790);
/* CHUNK of public_627d3b0 */
extern "C" NAKED register_t __cdecl internal_627e790()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        dec dword ptr ds : [public_63fc020]
        jne public_627e7c8
        mov eax, dword ptr ds : [public_63fc01c]
        test eax, eax
        je public_627e7b4
        push esi
        public_627e7a2 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_627e7a2
        pop esi
        public_627e7b4 : nop
        mov dword ptr ds : [public_63fc01c], 0
        mov dword ptr ds : [public_63fc028], 0
        public_627e7c8 : nop
        ret 
        UNREACHABLE_TRAP(0x627e790)
        ASM_EXPORT_ENTRY_FIRST(0x627e7a2, public_627e7a2)
        ASM_EXPORT_ENTRY(0x627e7b4, public_627e7b4)
        ASM_EXPORT_ENTRY_LAST(0x627e7c8, public_627e7c8)
    }
}

#undef public_627e7a2
#undef public_627e7b4
#undef public_627e7c8

#pragma init_seg(compiler)
extern "C" void const* const public_627e7a2 = __AsmFindLabelExport(&internal_627e790, 0x627e7a2);
extern "C" void const* const public_627e7b4 = __AsmFindLabelExport(&internal_627e790, 0x627e7b4);
extern "C" void const* const public_627e7c8 = __AsmFindLabelExport(&internal_627e790, 0x627e7c8);
