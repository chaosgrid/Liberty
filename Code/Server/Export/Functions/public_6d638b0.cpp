#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d572a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d638bb _public_6d638bb

PROC_DECLARE(0x6d638b0, internal_6d638b0, public_6d638b0);
/* CHUNK of public_6d52e60 */
extern "C" NAKED register_t __cdecl internal_6d638b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x228]
        jmp public_6d572a0
        public_6d638bb : nop
        mov eax, offset public_6d75acc
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d638b0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d638bb, public_6d638bb)
    }
}

#undef public_6d638bb

#pragma init_seg(compiler)
extern "C" void const* const public_6d638bb = __AsmFindLabelExport(&internal_6d638b0, 0x6d638bb);
