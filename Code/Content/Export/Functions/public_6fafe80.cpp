#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f86ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafe88 _public_6fafe88

PROC_DECLARE(0x6fafe80, internal_6fafe80, public_6fafe80);
/* CHUNK of public_6f71240 */
extern "C" NAKED register_t __cdecl internal_6fafe80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x34]
        jmp public_6f86ac0
        public_6fafe88 : nop
        mov eax, offset public_6fc50a0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafe80)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafe88, public_6fafe88)
    }
}

#undef public_6fafe88

#pragma init_seg(compiler)
extern "C" void const* const public_6fafe88 = __AsmFindLabelExport(&internal_6fafe80, 0x6fafe88);
