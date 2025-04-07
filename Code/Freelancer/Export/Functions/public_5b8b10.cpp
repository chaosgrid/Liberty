#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8b18 _public_5b8b18

PROC_DECLARE(0x5b8b10, internal_5b8b10, public_5b8b10);
/* CHUNK of public_420dd0 */
extern "C" NAKED register_t __cdecl internal_5b8b10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x44]
        jmp public_526a20
        public_5b8b18 : nop
        mov eax, offset public_5f29c0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8b10)
        ASM_EXPORT_ENTRY_SINGLE(0x5b8b18, public_5b8b18)
    }
}

#undef public_5b8b18

#pragma init_seg(compiler)
extern "C" void const* const public_5b8b18 = __AsmFindLabelExport(&internal_5b8b10, 0x5b8b18);
