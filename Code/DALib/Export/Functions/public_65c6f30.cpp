#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a6c);

#define public_65c6f3b _public_65c6f3b

PROC_DECLARE(0x65c6f30, internal_65c6f30, public_65c6f30);
/* CHUNK of public_65c5020 */
extern "C" NAKED register_t __cdecl internal_65c6f30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_65c6a60
        pop ecx
        ret 
        public_65c6f3b : nop
        mov eax, offset public_65c786c
        jmp public_65c6a6c
        UNREACHABLE_TRAP(0x65c6f30)
        ASM_EXPORT_ENTRY_SINGLE(0x65c6f3b, public_65c6f3b)
    }
}

#undef public_65c6f3b

#pragma init_seg(compiler)
extern "C" void const* const public_65c6f3b = __AsmFindLabelExport(&internal_65c6f30, 0x65c6f3b);
