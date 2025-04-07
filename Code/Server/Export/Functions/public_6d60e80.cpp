#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60e88 _public_6d60e88

PROC_DECLARE(0x6d60e80, internal_6d60e80, public_6d60e80);
/* CHUNK of public_6d00830 */
extern "C" NAKED register_t __cdecl internal_6d60e80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x68]
        jmp public_6cecb50
        public_6d60e88 : nop
        mov eax, offset public_6d719d4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60e80)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60e88, public_6d60e88)
    }
}

#undef public_6d60e88

#pragma init_seg(compiler)
extern "C" void const* const public_6d60e88 = __AsmFindLabelExport(&internal_6d60e80, 0x6d60e88);
