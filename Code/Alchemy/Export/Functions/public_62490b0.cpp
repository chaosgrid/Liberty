#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209f60);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62490b8 _public_62490b8
#define public_62490c0 _public_62490c0

PROC_DECLARE(0x62490b0, internal_62490b0, public_62490b0);
/* CHUNK of public_6227c70 */
extern "C" NAKED register_t __cdecl internal_62490b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6209f60
        public_62490b8 : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_6209f60
        public_62490c0 : nop
        mov eax, offset public_6252034
        jmp public_6246126
        UNREACHABLE_TRAP(0x62490b0)
        ASM_EXPORT_ENTRY_FIRST(0x62490b8, public_62490b8)
        ASM_EXPORT_ENTRY_LAST(0x62490c0, public_62490c0)
    }
}

#undef public_62490b8
#undef public_62490c0

#pragma init_seg(compiler)
extern "C" void const* const public_62490b8 = __AsmFindLabelExport(&internal_62490b0, 0x62490b8);
extern "C" void const* const public_62490c0 = __AsmFindLabelExport(&internal_62490b0, 0x62490c0);
