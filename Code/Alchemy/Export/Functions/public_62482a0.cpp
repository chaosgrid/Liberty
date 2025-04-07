#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218d10);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62482a8 _public_62482a8
#define public_62482b0 _public_62482b0

PROC_DECLARE(0x62482a0, internal_62482a0, public_62482a0);
/* CHUNK of public_6215f40 */
extern "C" NAKED register_t __cdecl internal_62482a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x6C]
        jmp public_6218d10
        public_62482a8 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_6218d10
        public_62482b0 : nop
        mov eax, offset public_6251128
        jmp public_6246126
        UNREACHABLE_TRAP(0x62482a0)
        ASM_EXPORT_ENTRY_FIRST(0x62482a8, public_62482a8)
        ASM_EXPORT_ENTRY_LAST(0x62482b0, public_62482b0)
    }
}

#undef public_62482a8
#undef public_62482b0

#pragma init_seg(compiler)
extern "C" void const* const public_62482a8 = __AsmFindLabelExport(&internal_62482a0, 0x62482a8);
extern "C" void const* const public_62482b0 = __AsmFindLabelExport(&internal_62482a0, 0x62482b0);
