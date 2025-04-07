#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faec18 _public_6faec18

PROC_DECLARE(0x6faec10, internal_6faec10, public_6faec10);
/* CHUNK of public_6f35890 */
extern "C" NAKED register_t __cdecl internal_6faec10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6f15350
        public_6faec18 : nop
        mov eax, offset public_6fc3bd4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faec10)
        ASM_EXPORT_ENTRY_SINGLE(0x6faec18, public_6faec18)
    }
}

#undef public_6faec18

#pragma init_seg(compiler)
extern "C" void const* const public_6faec18 = __AsmFindLabelExport(&internal_6faec10, 0x6faec18);
