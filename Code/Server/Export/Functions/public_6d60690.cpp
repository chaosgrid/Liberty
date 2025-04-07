#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60698 _public_6d60698

PROC_DECLARE(0x6d60690, internal_6d60690, public_6d60690);
/* CHUNK of public_6ced9d0 */
extern "C" NAKED register_t __cdecl internal_6d60690()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x68]
        jmp public_6d0b7e0
        public_6d60698 : nop
        mov eax, offset public_6d70f50
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60690)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60698, public_6d60698)
    }
}

#undef public_6d60698

#pragma init_seg(compiler)
extern "C" void const* const public_6d60698 = __AsmFindLabelExport(&internal_6d60690, 0x6d60698);
