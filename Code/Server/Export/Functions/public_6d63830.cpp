#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d572a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6383b _public_6d6383b

PROC_DECLARE(0x6d63830, internal_6d63830, public_6d63830);
/* CHUNK of public_6d52040 */
extern "C" NAKED register_t __cdecl internal_6d63830()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x850]
        jmp public_6d572a0
        public_6d6383b : nop
        mov eax, offset public_6d75a48
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63830)
        ASM_EXPORT_ENTRY_SINGLE(0x6d6383b, public_6d6383b)
    }
}

#undef public_6d6383b

#pragma init_seg(compiler)
extern "C" void const* const public_6d6383b = __AsmFindLabelExport(&internal_6d63830, 0x6d6383b);
