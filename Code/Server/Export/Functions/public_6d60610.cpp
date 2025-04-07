#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cec7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60618 _public_6d60618

PROC_DECLARE(0x6d60610, internal_6d60610, public_6d60610);
/* CHUNK of public_6cec4d0 */
extern "C" NAKED register_t __cdecl internal_6d60610()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp public_6cec7e0
        public_6d60618 : nop
        mov eax, offset public_6d70ec0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60610)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60618, public_6d60618)
    }
}

#undef public_6d60618

#pragma init_seg(compiler)
extern "C" void const* const public_6d60618 = __AsmFindLabelExport(&internal_6d60610, 0x6d60618);
