#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c4240);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a6c);

#define public_65c6efe _public_65c6efe

PROC_DECLARE(0x65c6ef0, internal_65c6ef0, public_65c6ef0);
/* CHUNK of public_65c4bf0 */
extern "C" NAKED register_t __cdecl internal_65c6ef0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 0x56C
        jmp public_65c4240
        public_65c6efe : nop
        mov eax, offset public_65c7824
        jmp public_65c6a6c
        UNREACHABLE_TRAP(0x65c6ef0)
        ASM_EXPORT_ENTRY_SINGLE(0x65c6efe, public_65c6efe)
    }
}

#undef public_65c6efe

#pragma init_seg(compiler)
extern "C" void const* const public_65c6efe = __AsmFindLabelExport(&internal_65c6ef0, 0x65c6efe);
