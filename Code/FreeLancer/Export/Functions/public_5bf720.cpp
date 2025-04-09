#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf728 _public_5bf728
#define public_5bf730 _public_5bf730

PROC_DECLARE(0x5bf720, internal_5bf720, public_5bf720);
/* CHUNK of public_500a80 */
extern "C" NAKED register_t __cdecl internal_5bf720()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_4de730
        public_5bf728 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_4de730
        public_5bf730 : nop
        mov eax, offset public_5f96a0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf720)
        ASM_EXPORT_ENTRY_FIRST(0x5bf728, public_5bf728)
        ASM_EXPORT_ENTRY_LAST(0x5bf730, public_5bf730)
    }
}

#undef public_5bf728
#undef public_5bf730

#pragma init_seg(compiler)
extern "C" void const* const public_5bf728 = __AsmFindLabelExport(&internal_5bf720, 0x5bf728);
extern "C" void const* const public_5bf730 = __AsmFindLabelExport(&internal_5bf720, 0x5bf730);
