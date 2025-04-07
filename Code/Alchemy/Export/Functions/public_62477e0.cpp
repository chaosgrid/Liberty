#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62477e8 _public_62477e8
#define public_62477f0 _public_62477f0

PROC_DECLARE(0x62477e0, internal_62477e0, public_62477e0);
/* CHUNK of public_620b750 */
extern "C" NAKED register_t __cdecl internal_62477e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0xC]
        jmp public_620b6f0
        public_62477e8 : nop
        lea ecx, ss:[ebp+8]
        jmp public_620b6f0
        public_62477f0 : nop
        mov eax, offset public_62505d0
        jmp public_6246126
        UNREACHABLE_TRAP(0x62477e0)
        ASM_EXPORT_ENTRY_FIRST(0x62477e8, public_62477e8)
        ASM_EXPORT_ENTRY_LAST(0x62477f0, public_62477f0)
    }
}

#undef public_62477e8
#undef public_62477f0

#pragma init_seg(compiler)
extern "C" void const* const public_62477e8 = __AsmFindLabelExport(&internal_62477e0, 0x62477e8);
extern "C" void const* const public_62477f0 = __AsmFindLabelExport(&internal_62477e0, 0x62477f0);
