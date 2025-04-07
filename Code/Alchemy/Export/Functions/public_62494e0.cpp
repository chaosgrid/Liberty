#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e920);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62494e8 _public_62494e8
#define public_62494f0 _public_62494f0

PROC_DECLARE(0x62494e0, internal_62494e0, public_62494e0);
/* CHUNK of public_622bd80 */
extern "C" NAKED register_t __cdecl internal_62494e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x6C]
        jmp public_622e920
        public_62494e8 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_622e920
        public_62494f0 : nop
        mov eax, offset public_6252460
        jmp public_6246126
        UNREACHABLE_TRAP(0x62494e0)
        ASM_EXPORT_ENTRY_FIRST(0x62494e8, public_62494e8)
        ASM_EXPORT_ENTRY_LAST(0x62494f0, public_62494f0)
    }
}

#undef public_62494e8
#undef public_62494f0

#pragma init_seg(compiler)
extern "C" void const* const public_62494e8 = __AsmFindLabelExport(&internal_62494e0, 0x62494e8);
extern "C" void const* const public_62494f0 = __AsmFindLabelExport(&internal_62494e0, 0x62494f0);
