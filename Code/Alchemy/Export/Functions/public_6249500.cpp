#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249508 _public_6249508
#define public_6249510 _public_6249510

PROC_DECLARE(0x6249500, internal_6249500, public_6249500);
/* CHUNK of public_622bed0 */
extern "C" NAKED register_t __cdecl internal_6249500()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x4C]
        jmp public_622d2c0
        public_6249508 : nop
        lea ecx, ss:[ebp+4]
        jmp public_622d2c0
        public_6249510 : nop
        mov eax, offset public_625248c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249500)
        ASM_EXPORT_ENTRY_FIRST(0x6249508, public_6249508)
        ASM_EXPORT_ENTRY_LAST(0x6249510, public_6249510)
    }
}

#undef public_6249508
#undef public_6249510

#pragma init_seg(compiler)
extern "C" void const* const public_6249508 = __AsmFindLabelExport(&internal_6249500, 0x6249508);
extern "C" void const* const public_6249510 = __AsmFindLabelExport(&internal_6249500, 0x6249510);
