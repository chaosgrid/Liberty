#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ac8);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a798 _public_41a798

PROC_DECLARE(0x41a790, internal_41a790, public_41a790);
/* CHUNK of public_412a70 */
extern "C" NAKED register_t __cdecl internal_41a790()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x54]
        jmp public_418ac8
        public_41a798 : nop
        mov eax, offset public_41f8c8
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a790)
        ASM_EXPORT_ENTRY_SINGLE(0x41a798, public_41a798)
    }
}

#undef public_41a798

#pragma init_seg(compiler)
extern "C" void const* const public_41a798 = __AsmFindLabelExport(&internal_41a790, 0x41a798);
