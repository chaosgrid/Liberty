#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249548 _public_6249548
#define public_6249550 _public_6249550

PROC_DECLARE(0x6249540, internal_6249540, public_6249540);
/* CHUNK of public_622d1a0 */
extern "C" NAKED register_t __cdecl internal_6249540()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_622d2c0
        public_6249548 : nop
        lea ecx, ss:[ebp-0x10]
        jmp public_622d2c0
        public_6249550 : nop
        mov eax, offset public_62524e4
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249540)
        ASM_EXPORT_ENTRY_FIRST(0x6249548, public_6249548)
        ASM_EXPORT_ENTRY_LAST(0x6249550, public_6249550)
    }
}

#undef public_6249548
#undef public_6249550

#pragma init_seg(compiler)
extern "C" void const* const public_6249548 = __AsmFindLabelExport(&internal_6249540, 0x6249548);
extern "C" void const* const public_6249550 = __AsmFindLabelExport(&internal_6249540, 0x6249550);
