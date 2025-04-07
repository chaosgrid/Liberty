#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d3410);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395128 _public_6395128

PROC_DECLARE(0x6395120, internal_6395120, public_6395120);
/* CHUNK of public_62d2b10 */
extern "C" NAKED register_t __cdecl internal_6395120()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_62d3410
        public_6395128 : nop
        mov eax, offset public_63aeb40
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395120)
        ASM_EXPORT_ENTRY_SINGLE(0x6395128, public_6395128)
    }
}

#undef public_6395128

#pragma init_seg(compiler)
extern "C" void const* const public_6395128 = __AsmFindLabelExport(&internal_6395120, 0x6395128);
