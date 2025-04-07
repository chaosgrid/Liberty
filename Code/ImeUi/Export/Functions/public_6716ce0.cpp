#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712720);
CLANG_FORWARD_PROC_SYMBOL(public_67169e8);

#define public_6716ce8 _public_6716ce8

PROC_DECLARE(0x6716ce0, internal_6716ce0, public_6716ce0);
/* CHUNK of public_6712ca0 */
extern "C" NAKED register_t __cdecl internal_6716ce0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6712720
        public_6716ce8 : nop
        mov eax, offset public_6717954
        jmp public_67169e8
        UNREACHABLE_TRAP(0x6716ce0)
        ASM_EXPORT_ENTRY_SINGLE(0x6716ce8, public_6716ce8)
    }
}

#undef public_6716ce8

#pragma init_seg(compiler)
extern "C" void const* const public_6716ce8 = __AsmFindLabelExport(&internal_6716ce0, 0x6716ce8);
