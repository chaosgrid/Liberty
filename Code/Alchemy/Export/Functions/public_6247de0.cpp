#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211030);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247de8 _public_6247de8
#define public_6247df0 _public_6247df0

PROC_DECLARE(0x6247de0, internal_6247de0, public_6247de0);
/* CHUNK of public_62110e0 */
extern "C" NAKED register_t __cdecl internal_6247de0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6211030
        public_6247de8 : nop
        lea ecx, ss:[ebp-0x10]
        jmp public_6211030
        public_6247df0 : nop
        mov eax, offset public_6250c24
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247de0)
        ASM_EXPORT_ENTRY_FIRST(0x6247de8, public_6247de8)
        ASM_EXPORT_ENTRY_LAST(0x6247df0, public_6247df0)
    }
}

#undef public_6247de8
#undef public_6247df0

#pragma init_seg(compiler)
extern "C" void const* const public_6247de8 = __AsmFindLabelExport(&internal_6247de0, 0x6247de8);
extern "C" void const* const public_6247df0 = __AsmFindLabelExport(&internal_6247de0, 0x6247df0);
