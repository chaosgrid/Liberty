#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba018 _public_5ba018

PROC_DECLARE(0x5ba010, internal_5ba010, public_5ba010);
/* CHUNK of public_455b80 */
extern "C" NAKED register_t __cdecl internal_5ba010()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_455e90
        public_5ba018 : nop
        mov eax, offset public_5f4344
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba010)
        ASM_EXPORT_ENTRY_SINGLE(0x5ba018, public_5ba018)
    }
}

#undef public_5ba018

#pragma init_seg(compiler)
extern "C" void const* const public_5ba018 = __AsmFindLabelExport(&internal_5ba010, 0x5ba018);
