#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2c20);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f86420);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb16fb _public_6fb16fb
#define public_6fb1706 _public_6fb1706
#define public_6fb1711 _public_6fb1711

PROC_DECLARE(0x6fb16f0, internal_6fb16f0, public_6fb16f0);
/* CHUNK of public_6f97580 */
extern "C" NAKED register_t __cdecl internal_6fb16f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x11C]
        jmp public_6eec8d0
        public_6fb16fb : nop
        lea ecx, ss:[ebp-0xFC]
        jmp public_6f86420
        public_6fb1706 : nop
        lea ecx, ss:[ebp-0xFC]
        jmp public_6ed2c20
        public_6fb1711 : nop
        mov eax, offset public_6fc6cc8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb16f0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb16fb, public_6fb16fb)
        ASM_EXPORT_ENTRY(0x6fb1706, public_6fb1706)
        ASM_EXPORT_ENTRY_LAST(0x6fb1711, public_6fb1711)
    }
}

#undef public_6fb16fb
#undef public_6fb1706
#undef public_6fb1711

#pragma init_seg(compiler)
extern "C" void const* const public_6fb16fb = __AsmFindLabelExport(&internal_6fb16f0, 0x6fb16fb);
extern "C" void const* const public_6fb1706 = __AsmFindLabelExport(&internal_6fb16f0, 0x6fb1706);
extern "C" void const* const public_6fb1711 = __AsmFindLabelExport(&internal_6fb16f0, 0x6fb1711);
