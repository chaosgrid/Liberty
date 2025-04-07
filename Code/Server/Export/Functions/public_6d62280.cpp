#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d29370);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62288 _public_6d62288

PROC_DECLARE(0x6d62280, internal_6d62280, public_6d62280);
/* CHUNK of public_6d1c1a0 */
extern "C" NAKED register_t __cdecl internal_6d62280()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_6d29370
        public_6d62288 : nop
        mov eax, offset public_6d7310c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62280)
        ASM_EXPORT_ENTRY_SINGLE(0x6d62288, public_6d62288)
    }
}

#undef public_6d62288

#pragma init_seg(compiler)
extern "C" void const* const public_6d62288 = __AsmFindLabelExport(&internal_6d62280, 0x6d62288);
