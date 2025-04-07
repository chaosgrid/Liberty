#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1650);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9858 _public_6fa9858

PROC_DECLARE(0x6fa9850, internal_6fa9850, public_6fa9850);
/* CHUNK of public_6ea5e10 */
extern "C" NAKED register_t __cdecl internal_6fa9850()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ea1650
        public_6fa9858 : nop
        mov eax, offset public_6fbdb7c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9850)
        ASM_EXPORT_ENTRY_SINGLE(0x6fa9858, public_6fa9858)
    }
}

#undef public_6fa9858

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9858 = __AsmFindLabelExport(&internal_6fa9850, 0x6fa9858);
