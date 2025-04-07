#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3700);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65e006b _public_65e006b

PROC_DECLARE(0x65e0060, internal_65e0060, public_65e0060);
/* CHUNK of public_65d5220 */
extern "C" NAKED register_t __cdecl internal_65e0060()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_65d3700
        public_65e006b : nop
        mov eax, offset public_65e20e4
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65e0060)
        ASM_EXPORT_ENTRY_SINGLE(0x65e006b, public_65e006b)
    }
}

#undef public_65e006b

#pragma init_seg(compiler)
extern "C" void const* const public_65e006b = __AsmFindLabelExport(&internal_65e0060, 0x65e006b);
