#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2630);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65e00f8 _public_65e00f8

PROC_DECLARE(0x65e00f0, internal_65e00f0, public_65e00f0);
/* CHUNK of public_65d6340 */
extern "C" NAKED register_t __cdecl internal_65e00f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_65d2630
        public_65e00f8 : nop
        mov eax, offset public_65e219c
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65e00f0)
        ASM_EXPORT_ENTRY_SINGLE(0x65e00f8, public_65e00f8)
    }
}

#undef public_65e00f8

#pragma init_seg(compiler)
extern "C" void const* const public_65e00f8 = __AsmFindLabelExport(&internal_65e00f0, 0x65e00f8);
