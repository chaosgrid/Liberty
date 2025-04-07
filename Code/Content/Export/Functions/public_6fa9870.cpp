#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea6fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9878 _public_6fa9878

PROC_DECLARE(0x6fa9870, internal_6fa9870, public_6fa9870);
/* CHUNK of public_6ea6280 */
extern "C" NAKED register_t __cdecl internal_6fa9870()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6ea6fe0
        public_6fa9878 : nop
        mov eax, offset public_6fbdba0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9870)
        ASM_EXPORT_ENTRY_SINGLE(0x6fa9878, public_6fa9878)
    }
}

#undef public_6fa9878

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9878 = __AsmFindLabelExport(&internal_6fa9870, 0x6fa9878);
