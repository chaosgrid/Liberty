#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcb2b _public_5bcb2b
#define public_5bcb36 _public_5bcb36

PROC_DECLARE(0x5bcb20, internal_5bcb20, public_5bcb20);
/* CHUNK of public_4a2370 */
extern "C" NAKED register_t __cdecl internal_5bcb20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x15C]
        jmp public_444e20
        public_5bcb2b : nop
        lea ecx, ss:[ebp-0x16C]
        jmp public_444e20
        public_5bcb36 : nop
        mov eax, offset public_5f6db0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcb20)
        ASM_EXPORT_ENTRY_FIRST(0x5bcb2b, public_5bcb2b)
        ASM_EXPORT_ENTRY_LAST(0x5bcb36, public_5bcb36)
    }
}

#undef public_5bcb2b
#undef public_5bcb36

#pragma init_seg(compiler)
extern "C" void const* const public_5bcb2b = __AsmFindLabelExport(&internal_5bcb20, 0x5bcb2b);
extern "C" void const* const public_5bcb36 = __AsmFindLabelExport(&internal_5bcb20, 0x5bcb36);
