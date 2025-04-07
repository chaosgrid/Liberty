#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3700);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65e004b _public_65e004b

PROC_DECLARE(0x65e0040, internal_65e0040, public_65e0040);
/* CHUNK of public_65d50b0 */
extern "C" NAKED register_t __cdecl internal_65e0040()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 4
        jmp public_65d3700
        public_65e004b : nop
        mov eax, offset public_65e20c0
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65e0040)
        ASM_EXPORT_ENTRY_SINGLE(0x65e004b, public_65e004b)
    }
}

#undef public_65e004b

#pragma init_seg(compiler)
extern "C" void const* const public_65e004b = __AsmFindLabelExport(&internal_65e0040, 0x65e004b);
