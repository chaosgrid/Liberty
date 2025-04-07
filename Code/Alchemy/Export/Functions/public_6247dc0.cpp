#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211030);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247dc8 _public_6247dc8
#define public_6247dd0 _public_6247dd0

PROC_DECLARE(0x6247dc0, internal_6247dc0, public_6247dc0);
/* CHUNK of public_6211060 */
extern "C" NAKED register_t __cdecl internal_6247dc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0xC]
        jmp public_6211030
        public_6247dc8 : nop
        lea ecx, ss:[ebp+8]
        jmp public_6211030
        public_6247dd0 : nop
        mov eax, offset public_6250bf8
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247dc0)
        ASM_EXPORT_ENTRY_FIRST(0x6247dc8, public_6247dc8)
        ASM_EXPORT_ENTRY_LAST(0x6247dd0, public_6247dd0)
    }
}

#undef public_6247dc8
#undef public_6247dd0

#pragma init_seg(compiler)
extern "C" void const* const public_6247dc8 = __AsmFindLabelExport(&internal_6247dc0, 0x6247dc8);
extern "C" void const* const public_6247dd0 = __AsmFindLabelExport(&internal_6247dc0, 0x6247dd0);
