#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_6209f60);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62490d8 _public_62490d8
#define public_62490e0 _public_62490e0

PROC_DECLARE(0x62490d0, internal_62490d0, public_62490d0);
/* CHUNK of public_6227ef0 */
extern "C" NAKED register_t __cdecl internal_62490d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp public_62084b0
        public_62490d8 : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_6209f60
        public_62490e0 : nop
        mov eax, offset public_6252060
        jmp public_6246126
        UNREACHABLE_TRAP(0x62490d0)
        ASM_EXPORT_ENTRY_FIRST(0x62490d8, public_62490d8)
        ASM_EXPORT_ENTRY_LAST(0x62490e0, public_62490e0)
    }
}

#undef public_62490d8
#undef public_62490e0

#pragma init_seg(compiler)
extern "C" void const* const public_62490d8 = __AsmFindLabelExport(&internal_62490d0, 0x62490d8);
extern "C" void const* const public_62490e0 = __AsmFindLabelExport(&internal_62490d0, 0x62490e0);
