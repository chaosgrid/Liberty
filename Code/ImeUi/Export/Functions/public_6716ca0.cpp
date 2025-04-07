#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6711a00);
CLANG_FORWARD_PROC_SYMBOL(public_67169e8);

#define public_6716cab _public_6716cab

PROC_DECLARE(0x6716ca0, internal_6716ca0, public_6716ca0);
/* CHUNK of public_67111d0 */
extern "C" NAKED register_t __cdecl internal_6716ca0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_6711a00
        public_6716cab : nop
        mov eax, offset public_671790c
        jmp public_67169e8
        UNREACHABLE_TRAP(0x6716ca0)
        ASM_EXPORT_ENTRY_SINGLE(0x6716cab, public_6716cab)
    }
}

#undef public_6716cab

#pragma init_seg(compiler)
extern "C" void const* const public_6716cab = __AsmFindLabelExport(&internal_6716ca0, 0x6716cab);
