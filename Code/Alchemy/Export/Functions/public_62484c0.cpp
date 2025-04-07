#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217c00);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62484c8 _public_62484c8
#define public_62484d0 _public_62484d0

PROC_DECLARE(0x62484c0, internal_62484c0, public_62484c0);
/* CHUNK of public_62188c0 */
extern "C" NAKED register_t __cdecl internal_62484c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_6217c00
        public_62484c8 : nop
        lea ecx, ss:[ebp+4]
        jmp public_6217c00
        public_62484d0 : nop
        mov eax, offset public_62513a0
        jmp public_6246126
        UNREACHABLE_TRAP(0x62484c0)
        ASM_EXPORT_ENTRY_FIRST(0x62484c8, public_62484c8)
        ASM_EXPORT_ENTRY_LAST(0x62484d0, public_62484d0)
    }
}

#undef public_62484c8
#undef public_62484d0

#pragma init_seg(compiler)
extern "C" void const* const public_62484c8 = __AsmFindLabelExport(&internal_62484c0, 0x62484c8);
extern "C" void const* const public_62484d0 = __AsmFindLabelExport(&internal_62484c0, 0x62484d0);
