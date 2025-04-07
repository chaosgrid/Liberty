#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7009);
CLANG_FORWARD_PROC_SYMBOL(public_65d80af);

#define public_65e0188 _public_65e0188

PROC_DECLARE(0x65e0180, internal_65e0180, public_65e0180);
/* CHUNK of public_65d6d1d */
extern "C" NAKED register_t __cdecl internal_65e0180()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_65d80af
        public_65e0188 : nop
        mov eax, offset public_65e22e8
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65e0180)
        ASM_EXPORT_ENTRY_SINGLE(0x65e0188, public_65e0188)
    }
}

#undef public_65e0188

#pragma init_seg(compiler)
extern "C" void const* const public_65e0188 = __AsmFindLabelExport(&internal_65e0180, 0x65e0188);
