#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627e5f2 _public_627e5f2
#define public_627e604 _public_627e604
#define public_627e618 _public_627e618

PROC_DECLARE(0x627e5e0, internal_627e5e0, public_627e5e0);
/* CHUNK of public_627d4a0 */
extern "C" NAKED register_t __cdecl internal_627e5e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        dec dword ptr ds : [public_63fc424]
        jne public_627e618
        mov eax, dword ptr ds : [public_63fc420]
        test eax, eax
        je public_627e604
        push esi
        public_627e5f2 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_627e5f2
        pop esi
        public_627e604 : nop
        mov dword ptr ds : [public_63fc420], 0
        mov dword ptr ds : [public_63fc42c], 0
        public_627e618 : nop
        ret 
        UNREACHABLE_TRAP(0x627e5e0)
        ASM_EXPORT_ENTRY_FIRST(0x627e5f2, public_627e5f2)
        ASM_EXPORT_ENTRY(0x627e604, public_627e604)
        ASM_EXPORT_ENTRY_LAST(0x627e618, public_627e618)
    }
}

#undef public_627e5f2
#undef public_627e604
#undef public_627e618

#pragma init_seg(compiler)
extern "C" void const* const public_627e5f2 = __AsmFindLabelExport(&internal_627e5e0, 0x627e5f2);
extern "C" void const* const public_627e604 = __AsmFindLabelExport(&internal_627e5e0, 0x627e604);
extern "C" void const* const public_627e618 = __AsmFindLabelExport(&internal_627e5e0, 0x627e618);
