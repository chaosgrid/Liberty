#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1650);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9928 _public_6fa9928

PROC_DECLARE(0x6fa9920, internal_6fa9920, public_6fa9920);
/* CHUNK of public_6ea7350 */
extern "C" NAKED register_t __cdecl internal_6fa9920()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6ea1650
        public_6fa9928 : nop
        mov eax, offset public_6fbdc74
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9920)
        ASM_EXPORT_ENTRY_SINGLE(0x6fa9928, public_6fa9928)
    }
}

#undef public_6fa9928

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9928 = __AsmFindLabelExport(&internal_6fa9920, 0x6fa9928);
