#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5687e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c2e1b _public_5c2e1b

PROC_DECLARE(0x5c2e10, internal_5c2e10, public_5c2e10);
/* CHUNK of public_567350 */
extern "C" NAKED register_t __cdecl internal_5c2e10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x90]
        jmp public_5687e0
        public_5c2e1b : nop
        mov eax, offset public_5fcd00
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c2e10)
        ASM_EXPORT_ENTRY_SINGLE(0x5c2e1b, public_5c2e1b)
    }
}

#undef public_5c2e1b

#pragma init_seg(compiler)
extern "C" void const* const public_5c2e1b = __AsmFindLabelExport(&internal_5c2e10, 0x5c2e1b);
