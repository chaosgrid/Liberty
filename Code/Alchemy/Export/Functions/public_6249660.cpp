#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249668 _public_6249668
#define public_6249670 _public_6249670

PROC_DECLARE(0x6249660, internal_6249660, public_6249660);
/* CHUNK of public_622da40 */
extern "C" NAKED register_t __cdecl internal_6249660()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0xC]
        jmp public_622d2c0
        public_6249668 : nop
        lea ecx, ss:[ebp+8]
        jmp public_622d2c0
        public_6249670 : nop
        mov eax, offset public_62525fc
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249660)
        ASM_EXPORT_ENTRY_FIRST(0x6249668, public_6249668)
        ASM_EXPORT_ENTRY_LAST(0x6249670, public_6249670)
    }
}

#undef public_6249668
#undef public_6249670

#pragma init_seg(compiler)
extern "C" void const* const public_6249668 = __AsmFindLabelExport(&internal_6249660, 0x6249668);
extern "C" void const* const public_6249670 = __AsmFindLabelExport(&internal_6249660, 0x6249670);
