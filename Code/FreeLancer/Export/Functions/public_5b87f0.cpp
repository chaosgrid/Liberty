#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412cb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b87f8 _public_5b87f8

PROC_DECLARE(0x5b87f0, internal_5b87f0, public_5b87f0);
/* CHUNK of public_4127d0 */
extern "C" NAKED register_t __cdecl internal_5b87f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp public_412cb0
        public_5b87f8 : nop
        mov eax, offset public_5f25fc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b87f0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b87f8, public_5b87f8)
    }
}

#undef public_5b87f8

#pragma init_seg(compiler)
extern "C" void const* const public_5b87f8 = __AsmFindLabelExport(&internal_5b87f0, 0x5b87f8);
