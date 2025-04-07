#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_46fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb998 _public_5bb998
#define public_5bb9a0 _public_5bb9a0
#define public_5bb9a8 _public_5bb9a8
#define public_5bb9b0 _public_5bb9b0

PROC_DECLARE(0x5bb990, internal_5bb990, public_5bb990);
/* CHUNK of public_46f6d0 */
extern "C" NAKED register_t __cdecl internal_5bb990()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x50]
        jmp public_444e20
        public_5bb998 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_46fa50
        public_5bb9a0 : nop
        lea ecx, ss:[ebp-0x48]
        jmp public_444e20
        public_5bb9a8 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_46fa50
        public_5bb9b0 : nop
        mov eax, offset public_5f5c8c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb990)
        ASM_EXPORT_ENTRY_FIRST(0x5bb998, public_5bb998)
        ASM_EXPORT_ENTRY(0x5bb9a0, public_5bb9a0)
        ASM_EXPORT_ENTRY(0x5bb9a8, public_5bb9a8)
        ASM_EXPORT_ENTRY_LAST(0x5bb9b0, public_5bb9b0)
    }
}

#undef public_5bb998
#undef public_5bb9a0
#undef public_5bb9a8
#undef public_5bb9b0

#pragma init_seg(compiler)
extern "C" void const* const public_5bb998 = __AsmFindLabelExport(&internal_5bb990, 0x5bb998);
extern "C" void const* const public_5bb9a0 = __AsmFindLabelExport(&internal_5bb990, 0x5bb9a0);
extern "C" void const* const public_5bb9a8 = __AsmFindLabelExport(&internal_5bb990, 0x5bb9a8);
extern "C" void const* const public_5bb9b0 = __AsmFindLabelExport(&internal_5bb990, 0x5bb9b0);
