#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63924fe _public_63924fe
#define public_639250a _public_639250a
#define public_6392516 _public_6392516

PROC_DECLARE(0x63924f0, internal_63924f0, public_63924f0);
/* CHUNK of public_6264ea0 */
extern "C" NAKED register_t __cdecl internal_63924f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x120]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63924fe : nop
        lea ecx, ss:[ebp-0x11C]
        jmp dword ptr ds : [public_63991ac]
        public_639250a : nop
        lea ecx, ss:[ebp-0x130]
        jmp dword ptr ds : [public_63991ac]
        public_6392516 : nop
        mov eax, offset public_63ab060
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63924f0)
        ASM_EXPORT_ENTRY_FIRST(0x63924fe, public_63924fe)
        ASM_EXPORT_ENTRY(0x639250a, public_639250a)
        ASM_EXPORT_ENTRY_LAST(0x6392516, public_6392516)
    }
}

#undef public_63924fe
#undef public_639250a
#undef public_6392516

#pragma init_seg(compiler)
extern "C" void const* const public_63924fe = __AsmFindLabelExport(&internal_63924f0, 0x63924fe);
extern "C" void const* const public_639250a = __AsmFindLabelExport(&internal_63924f0, 0x639250a);
extern "C" void const* const public_6392516 = __AsmFindLabelExport(&internal_63924f0, 0x6392516);
