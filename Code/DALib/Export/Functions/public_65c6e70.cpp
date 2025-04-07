#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a6c);

#define public_65c6e7b _public_65c6e7b

PROC_DECLARE(0x65c6e70, internal_65c6e70, public_65c6e70);
/* CHUNK of public_65c3a00 */
extern "C" NAKED register_t __cdecl internal_65c6e70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_65c6a60
        pop ecx
        ret 
        public_65c6e7b : nop
        mov eax, offset public_65c77a0
        jmp public_65c6a6c
        UNREACHABLE_TRAP(0x65c6e70)
        ASM_EXPORT_ENTRY_SINGLE(0x65c6e7b, public_65c6e7b)
    }
}

#undef public_65c6e7b

#pragma init_seg(compiler)
extern "C" void const* const public_65c6e7b = __AsmFindLabelExport(&internal_65c6e70, 0x65c6e7b);
