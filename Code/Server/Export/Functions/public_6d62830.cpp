#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62838 _public_6d62838

PROC_DECLARE(0x6d62830, internal_6d62830, public_6d62830);
/* CHUNK of public_6d21ac0 */
extern "C" NAKED register_t __cdecl internal_6d62830()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp public_6d209f0
        public_6d62838 : nop
        mov eax, offset public_6d73598
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62830)
        ASM_EXPORT_ENTRY_SINGLE(0x6d62838, public_6d62838)
    }
}

#undef public_6d62838

#pragma init_seg(compiler)
extern "C" void const* const public_6d62838 = __AsmFindLabelExport(&internal_6d62830, 0x6d62838);
