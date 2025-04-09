#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_44b9a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9c48 _public_5b9c48
#define public_5b9c50 _public_5b9c50

PROC_DECLARE(0x5b9c40, internal_5b9c40, public_5b9c40);
/* CHUNK of public_43bbc0 */
extern "C" NAKED register_t __cdecl internal_5b9c40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_44b9a0
        public_5b9c48 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_405840
        public_5b9c50 : nop
        mov eax, offset public_5f3cec
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9c40)
        ASM_EXPORT_ENTRY_FIRST(0x5b9c48, public_5b9c48)
        ASM_EXPORT_ENTRY_LAST(0x5b9c50, public_5b9c50)
    }
}

#undef public_5b9c48
#undef public_5b9c50

#pragma init_seg(compiler)
extern "C" void const* const public_5b9c48 = __AsmFindLabelExport(&internal_5b9c40, 0x5b9c48);
extern "C" void const* const public_5b9c50 = __AsmFindLabelExport(&internal_5b9c40, 0x5b9c50);
