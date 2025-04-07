#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce36f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6395b _public_6d6395b

PROC_DECLARE(0x6d63950, internal_6d63950, public_6d63950);
/* CHUNK of public_6d53d50 */
extern "C" NAKED register_t __cdecl internal_6d63950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x32C]
        jmp public_6ce36f0
        public_6d6395b : nop
        mov eax, offset public_6d75b70
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63950)
        ASM_EXPORT_ENTRY_SINGLE(0x6d6395b, public_6d6395b)
    }
}

#undef public_6d6395b

#pragma init_seg(compiler)
extern "C" void const* const public_6d6395b = __AsmFindLabelExport(&internal_6d63950, 0x6d6395b);
