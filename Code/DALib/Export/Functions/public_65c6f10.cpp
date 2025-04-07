#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c4240);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a6c);

#define public_65c6f1e _public_65c6f1e

PROC_DECLARE(0x65c6f10, internal_65c6f10, public_65c6f10);
/* CHUNK of public_65c4d70 */
extern "C" NAKED register_t __cdecl internal_65c6f10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x56C
        jmp public_65c4240
        public_65c6f1e : nop
        mov eax, offset public_65c7848
        jmp public_65c6a6c
        UNREACHABLE_TRAP(0x65c6f10)
        ASM_EXPORT_ENTRY_SINGLE(0x65c6f1e, public_65c6f1e)
    }
}

#undef public_65c6f1e

#pragma init_seg(compiler)
extern "C" void const* const public_65c6f1e = __AsmFindLabelExport(&internal_65c6f10, 0x65c6f1e);
