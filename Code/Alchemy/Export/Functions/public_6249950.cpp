#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62307d0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249958 _public_6249958

PROC_DECLARE(0x6249950, internal_6249950, public_6249950);
/* CHUNK of public_62308c0 */
extern "C" NAKED register_t __cdecl internal_6249950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_62307d0
        public_6249958 : nop
        mov eax, offset public_625294c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249950)
        ASM_EXPORT_ENTRY_SINGLE(0x6249958, public_6249958)
    }
}

#undef public_6249958

#pragma init_seg(compiler)
extern "C" void const* const public_6249958 = __AsmFindLabelExport(&internal_6249950, 0x6249958);
