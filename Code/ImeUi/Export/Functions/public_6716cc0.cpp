#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6711a00);
CLANG_FORWARD_PROC_SYMBOL(public_67169e8);

#define public_6716ccb _public_6716ccb

PROC_DECLARE(0x6716cc0, internal_6716cc0, public_6716cc0);
/* CHUNK of public_67112c0 */
extern "C" NAKED register_t __cdecl internal_6716cc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 4
        jmp public_6711a00
        public_6716ccb : nop
        mov eax, offset public_6717930
        jmp public_67169e8
        UNREACHABLE_TRAP(0x6716cc0)
        ASM_EXPORT_ENTRY_SINGLE(0x6716ccb, public_6716ccb)
    }
}

#undef public_6716ccb

#pragma init_seg(compiler)
extern "C" void const* const public_6716ccb = __AsmFindLabelExport(&internal_6716cc0, 0x6716ccb);
