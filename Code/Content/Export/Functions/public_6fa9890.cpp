#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea6fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa989b _public_6fa989b

PROC_DECLARE(0x6fa9890, internal_6fa9890, public_6fa9890);
/* CHUNK of public_6ea6900 */
extern "C" NAKED register_t __cdecl internal_6fa9890()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xC60]
        jmp public_6ea6fe0
        public_6fa989b : nop
        mov eax, offset public_6fbdbc4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9890)
        ASM_EXPORT_ENTRY_SINGLE(0x6fa989b, public_6fa989b)
    }
}

#undef public_6fa989b

#pragma init_seg(compiler)
extern "C" void const* const public_6fa989b = __AsmFindLabelExport(&internal_6fa9890, 0x6fa989b);
