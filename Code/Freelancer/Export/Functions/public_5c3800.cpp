#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_467ee0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3808 _public_5c3808

PROC_DECLARE(0x5c3800, internal_5c3800, public_5c3800);
/* CHUNK of public_5725e0 */
extern "C" NAKED register_t __cdecl internal_5c3800()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_467ee0
        public_5c3808 : nop
        mov eax, offset public_5fd504
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3800)
        ASM_EXPORT_ENTRY_SINGLE(0x5c3808, public_5c3808)
    }
}

#undef public_5c3808

#pragma init_seg(compiler)
extern "C" void const* const public_5c3808 = __AsmFindLabelExport(&internal_5c3800, 0x5c3808);
