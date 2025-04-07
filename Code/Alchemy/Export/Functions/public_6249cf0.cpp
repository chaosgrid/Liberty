#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62346a0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249cf8 _public_6249cf8

PROC_DECLARE(0x6249cf0, internal_6249cf0, public_6249cf0);
/* CHUNK of public_62347d0 */
extern "C" NAKED register_t __cdecl internal_6249cf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_62346a0
        public_6249cf8 : nop
        mov eax, offset public_6252d38
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249cf0)
        ASM_EXPORT_ENTRY_SINGLE(0x6249cf8, public_6249cf8)
    }
}

#undef public_6249cf8

#pragma init_seg(compiler)
extern "C" void const* const public_6249cf8 = __AsmFindLabelExport(&internal_6249cf0, 0x6249cf8);
