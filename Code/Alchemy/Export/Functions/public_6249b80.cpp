#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6234060);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249b88 _public_6249b88
#define public_6249b90 _public_6249b90

PROC_DECLARE(0x6249b80, internal_6249b80, public_6249b80);
/* CHUNK of public_6232cc0 */
extern "C" NAKED register_t __cdecl internal_6249b80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp public_6234060
        public_6249b88 : nop
        lea ecx, ss:[ebp-0x50]
        jmp public_6234060
        public_6249b90 : nop
        mov eax, offset public_6252ba4
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249b80)
        ASM_EXPORT_ENTRY_FIRST(0x6249b88, public_6249b88)
        ASM_EXPORT_ENTRY_LAST(0x6249b90, public_6249b90)
    }
}

#undef public_6249b88
#undef public_6249b90

#pragma init_seg(compiler)
extern "C" void const* const public_6249b88 = __AsmFindLabelExport(&internal_6249b80, 0x6249b88);
extern "C" void const* const public_6249b90 = __AsmFindLabelExport(&internal_6249b80, 0x6249b90);
