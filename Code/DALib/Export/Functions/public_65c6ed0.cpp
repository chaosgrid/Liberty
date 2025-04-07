#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c4240);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a6c);

#define public_65c6ed8 _public_65c6ed8

PROC_DECLARE(0x65c6ed0, internal_65c6ed0, public_65c6ed0);
/* CHUNK of public_65c4940 */
extern "C" NAKED register_t __cdecl internal_65c6ed0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp public_65c4240
        public_65c6ed8 : nop
        mov eax, offset public_65c7800
        jmp public_65c6a6c
        UNREACHABLE_TRAP(0x65c6ed0)
        ASM_EXPORT_ENTRY_SINGLE(0x65c6ed8, public_65c6ed8)
    }
}

#undef public_65c6ed8

#pragma init_seg(compiler)
extern "C" void const* const public_65c6ed8 = __AsmFindLabelExport(&internal_65c6ed0, 0x65c6ed8);
