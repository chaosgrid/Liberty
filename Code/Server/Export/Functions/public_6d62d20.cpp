#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42120);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62d2b _public_6d62d2b

PROC_DECLARE(0x6d62d20, internal_6d62d20, public_6d62d20);
/* CHUNK of public_6d42a60 */
extern "C" NAKED register_t __cdecl internal_6d62d20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x101C]
        jmp public_6d42120
        public_6d62d2b : nop
        mov eax, offset public_6d75134
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62d20)
        ASM_EXPORT_ENTRY_SINGLE(0x6d62d2b, public_6d62d2b)
    }
}

#undef public_6d62d2b

#pragma init_seg(compiler)
extern "C" void const* const public_6d62d2b = __AsmFindLabelExport(&internal_6d62d20, 0x6d62d2b);
