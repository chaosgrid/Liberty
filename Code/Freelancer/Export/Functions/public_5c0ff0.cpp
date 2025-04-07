#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0ff8 _public_5c0ff8

PROC_DECLARE(0x5c0ff0, internal_5c0ff0, public_5c0ff0);
/* CHUNK of public_5488a0 */
extern "C" NAKED register_t __cdecl internal_5c0ff0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_526a20
        public_5c0ff8 : nop
        mov eax, offset public_5fb2e4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0ff0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0ff8, public_5c0ff8)
    }
}

#undef public_5c0ff8

#pragma init_seg(compiler)
extern "C" void const* const public_5c0ff8 = __AsmFindLabelExport(&internal_5c0ff0, 0x5c0ff8);
