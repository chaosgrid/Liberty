#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bf140);
CLANG_FORWARD_PROC_SYMBOL(public_63415e0);

#define public_62bf14c _public_62bf14c

PROC_DECLARE(0x62bf140, internal_62bf140, public_62bf140);
/* CHUNK of public_62bf070 */
extern "C" NAKED register_t __cdecl internal_62bf140()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        test ecx, ecx
        je public_62bf14c
        add ecx, 8
        jmp public_63415e0
        public_62bf14c : nop
        xor ecx, ecx
        jmp public_63415e0
        UNREACHABLE_TRAP(0x62bf140)
        ASM_EXPORT_ENTRY_SINGLE(0x62bf14c, public_62bf14c)
    }
}

#undef public_62bf14c

#pragma init_seg(compiler)
extern "C" void const* const public_62bf14c = __AsmFindLabelExport(&internal_62bf140, 0x62bf14c);
