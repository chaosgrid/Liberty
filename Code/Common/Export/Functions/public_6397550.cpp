#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397558 _public_6397558
#define public_6397563 _public_6397563
#define public_639756e _public_639756e

PROC_DECLARE(0x6397550, internal_6397550, public_6397550);
/* CHUNK of public_6330990 */
extern "C" NAKED register_t __cdecl internal_6397550()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x7C]
        jmp public_6269110
        public_6397558 : nop
        lea ecx, ss:[ebp-0x8C]
        jmp public_6269110
        public_6397563 : nop
        lea ecx, ss:[ebp-0x9C]
        jmp public_6269110
        public_639756e : nop
        mov eax, offset public_63b1708
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397550)
        ASM_EXPORT_ENTRY_FIRST(0x6397558, public_6397558)
        ASM_EXPORT_ENTRY(0x6397563, public_6397563)
        ASM_EXPORT_ENTRY_LAST(0x639756e, public_639756e)
    }
}

#undef public_6397558
#undef public_6397563
#undef public_639756e

#pragma init_seg(compiler)
extern "C" void const* const public_6397558 = __AsmFindLabelExport(&internal_6397550, 0x6397558);
extern "C" void const* const public_6397563 = __AsmFindLabelExport(&internal_6397550, 0x6397563);
extern "C" void const* const public_639756e = __AsmFindLabelExport(&internal_6397550, 0x639756e);
