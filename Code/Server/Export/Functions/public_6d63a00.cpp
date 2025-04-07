#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d55c00);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63a08 _public_6d63a08

PROC_DECLARE(0x6d63a00, internal_6d63a00, public_6d63a00);
/* CHUNK of public_6d55830 */
extern "C" NAKED register_t __cdecl internal_6d63a00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp public_6d55c00
        public_6d63a08 : nop
        mov eax, offset public_6d75c20
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63a00)
        ASM_EXPORT_ENTRY_SINGLE(0x6d63a08, public_6d63a08)
    }
}

#undef public_6d63a08

#pragma init_seg(compiler)
extern "C" void const* const public_6d63a08 = __AsmFindLabelExport(&internal_6d63a00, 0x6d63a08);
