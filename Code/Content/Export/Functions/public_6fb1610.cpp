#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb161e _public_6fb161e

PROC_DECLARE(0x6fb1610, internal_6fb1610, public_6fb1610);
/* CHUNK of public_6f94b80 */
extern "C" NAKED register_t __cdecl internal_6fb1610()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x46C
        jmp public_6f15350
        public_6fb161e : nop
        mov eax, offset public_6fc6b9c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1610)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb161e, public_6fb161e)
    }
}

#undef public_6fb161e

#pragma init_seg(compiler)
extern "C" void const* const public_6fb161e = __AsmFindLabelExport(&internal_6fb1610, 0x6fb161e);
