#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9eb8 _public_5b9eb8

PROC_DECLARE(0x5b9eb0, internal_5b9eb0, public_5b9eb0);
/* CHUNK of public_453a40 */
extern "C" NAKED register_t __cdecl internal_5b9eb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_455e90
        public_5b9eb8 : nop
        mov eax, offset public_5f41e4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9eb0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9eb8, public_5b9eb8)
    }
}

#undef public_5b9eb8

#pragma init_seg(compiler)
extern "C" void const* const public_5b9eb8 = __AsmFindLabelExport(&internal_5b9eb0, 0x5b9eb8);
