#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec7820);
CLANG_FORWARD_PROC_SYMBOL(public_6f94b20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb172b _public_6fb172b
#define public_6fb1736 _public_6fb1736

PROC_DECLARE(0x6fb1720, internal_6fb1720, public_6fb1720);
/* CHUNK of public_6f979b0 */
extern "C" NAKED register_t __cdecl internal_6fb1720()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xA4]
        jmp public_6f94b20
        public_6fb172b : nop
        lea ecx, ss:[ebp-0x1AC]
        jmp public_6ec7820
        public_6fb1736 : nop
        mov eax, offset public_6fc6cf4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1720)
        ASM_EXPORT_ENTRY_FIRST(0x6fb172b, public_6fb172b)
        ASM_EXPORT_ENTRY_LAST(0x6fb1736, public_6fb1736)
    }
}

#undef public_6fb172b
#undef public_6fb1736

#pragma init_seg(compiler)
extern "C" void const* const public_6fb172b = __AsmFindLabelExport(&internal_6fb1720, 0x6fb172b);
extern "C" void const* const public_6fb1736 = __AsmFindLabelExport(&internal_6fb1720, 0x6fb1736);
