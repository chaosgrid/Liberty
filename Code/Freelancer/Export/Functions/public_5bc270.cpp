#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489a50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc278 _public_5bc278

PROC_DECLARE(0x5bc270, internal_5bc270, public_5bc270);
/* CHUNK of public_489b50 */
extern "C" NAKED register_t __cdecl internal_5bc270()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_489a50
        public_5bc278 : nop
        mov eax, offset public_5f667c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc270)
        ASM_EXPORT_ENTRY_SINGLE(0x5bc278, public_5bc278)
    }
}

#undef public_5bc278

#pragma init_seg(compiler)
extern "C" void const* const public_5bc278 = __AsmFindLabelExport(&internal_5bc270, 0x5bc278);
