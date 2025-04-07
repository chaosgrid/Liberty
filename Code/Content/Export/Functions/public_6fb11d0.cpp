#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f867a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb11d8 _public_6fb11d8
#define public_6fb11e0 _public_6fb11e0

PROC_DECLARE(0x6fb11d0, internal_6fb11d0, public_6fb11d0);
/* CHUNK of public_6f8b930 */
extern "C" NAKED register_t __cdecl internal_6fb11d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6f867a0
        public_6fb11d8 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_6f867a0
        public_6fb11e0 : nop
        mov eax, offset public_6fc6730
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb11d0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb11d8, public_6fb11d8)
        ASM_EXPORT_ENTRY_LAST(0x6fb11e0, public_6fb11e0)
    }
}

#undef public_6fb11d8
#undef public_6fb11e0

#pragma init_seg(compiler)
extern "C" void const* const public_6fb11d8 = __AsmFindLabelExport(&internal_6fb11d0, 0x6fb11d8);
extern "C" void const* const public_6fb11e0 = __AsmFindLabelExport(&internal_6fb11d0, 0x6fb11e0);
