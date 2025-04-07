#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7009);
CLANG_FORWARD_PROC_SYMBOL(public_65d80af);

#define public_65e01b0 _public_65e01b0

PROC_DECLARE(0x65e01a8, internal_65e01a8, public_65e01a8);
/* CHUNK of public_65d6dab */
extern "C" NAKED register_t __cdecl internal_65e01a8()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_65d80af
        public_65e01b0 : nop
        mov eax, offset public_65e2410
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65e01a8)
        ASM_EXPORT_ENTRY_SINGLE(0x65e01b0, public_65e01b0)
    }
}

#undef public_65e01b0

#pragma init_seg(compiler)
extern "C" void const* const public_65e01b0 = __AsmFindLabelExport(&internal_65e01a8, 0x65e01b0);
