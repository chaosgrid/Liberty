#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6234060);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249ba8 _public_6249ba8
#define public_6249bb0 _public_6249bb0

PROC_DECLARE(0x6249ba0, internal_6249ba0, public_6249ba0);
/* CHUNK of public_6233170 */
extern "C" NAKED register_t __cdecl internal_6249ba0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x70]
        jmp public_6234060
        public_6249ba8 : nop
        lea ecx, ss:[ebp-0x74]
        jmp public_6234060
        public_6249bb0 : nop
        mov eax, offset public_6252bd0
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249ba0)
        ASM_EXPORT_ENTRY_FIRST(0x6249ba8, public_6249ba8)
        ASM_EXPORT_ENTRY_LAST(0x6249bb0, public_6249bb0)
    }
}

#undef public_6249ba8
#undef public_6249bb0

#pragma init_seg(compiler)
extern "C" void const* const public_6249ba8 = __AsmFindLabelExport(&internal_6249ba0, 0x6249ba8);
extern "C" void const* const public_6249bb0 = __AsmFindLabelExport(&internal_6249ba0, 0x6249bb0);
