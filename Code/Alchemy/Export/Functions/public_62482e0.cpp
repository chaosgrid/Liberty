#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217c10);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62482eb _public_62482eb
#define public_62482f6 _public_62482f6

PROC_DECLARE(0x62482e0, internal_62482e0, public_62482e0);
/* CHUNK of public_6216550 */
extern "C" NAKED register_t __cdecl internal_62482e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xA4]
        jmp public_6217c10
        public_62482eb : nop
        lea ecx, ss:[ebp-0x84]
        jmp public_6217c10
        public_62482f6 : nop
        mov eax, offset public_6251180
        jmp public_6246126
        UNREACHABLE_TRAP(0x62482e0)
        ASM_EXPORT_ENTRY_FIRST(0x62482eb, public_62482eb)
        ASM_EXPORT_ENTRY_LAST(0x62482f6, public_62482f6)
    }
}

#undef public_62482eb
#undef public_62482f6

#pragma init_seg(compiler)
extern "C" void const* const public_62482eb = __AsmFindLabelExport(&internal_62482e0, 0x62482eb);
extern "C" void const* const public_62482f6 = __AsmFindLabelExport(&internal_62482e0, 0x62482f6);
