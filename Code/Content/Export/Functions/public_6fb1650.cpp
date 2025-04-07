#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f95ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1658 _public_6fb1658
#define public_6fb1660 _public_6fb1660
#define public_6fb1668 _public_6fb1668

PROC_DECLARE(0x6fb1650, internal_6fb1650, public_6fb1650);
/* CHUNK of public_6f95890 */
extern "C" NAKED register_t __cdecl internal_6fb1650()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp public_6eec8d0
        public_6fb1658 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_6f95ca0
        public_6fb1660 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_6eec8d0
        public_6fb1668 : nop
        mov eax, offset public_6fc6c20
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1650)
        ASM_EXPORT_ENTRY_FIRST(0x6fb1658, public_6fb1658)
        ASM_EXPORT_ENTRY(0x6fb1660, public_6fb1660)
        ASM_EXPORT_ENTRY_LAST(0x6fb1668, public_6fb1668)
    }
}

#undef public_6fb1658
#undef public_6fb1660
#undef public_6fb1668

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1658 = __AsmFindLabelExport(&internal_6fb1650, 0x6fb1658);
extern "C" void const* const public_6fb1660 = __AsmFindLabelExport(&internal_6fb1650, 0x6fb1660);
extern "C" void const* const public_6fb1668 = __AsmFindLabelExport(&internal_6fb1650, 0x6fb1668);
