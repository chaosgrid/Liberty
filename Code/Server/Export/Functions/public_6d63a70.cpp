#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d55d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63a78 _public_6d63a78

PROC_DECLARE(0x6d63a70, internal_6d63a70, public_6d63a70);
/* CHUNK of public_6d55c10 */
extern "C" NAKED register_t __cdecl internal_6d63a70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp public_6d55d10
        public_6d63a78 : nop
        mov eax, offset public_6d75c9c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63a70)
        ASM_EXPORT_ENTRY_SINGLE(0x6d63a78, public_6d63a78)
    }
}

#undef public_6d63a78

#pragma init_seg(compiler)
extern "C" void const* const public_6d63a78 = __AsmFindLabelExport(&internal_6d63a70, 0x6d63a78);
