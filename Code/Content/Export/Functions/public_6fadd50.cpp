#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fadd5b _public_6fadd5b

PROC_DECLARE(0x6fadd50, internal_6fadd50, public_6fadd50);
/* CHUNK of public_6f1d110 */
extern "C" NAKED register_t __cdecl internal_6fadd50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fadd5b : nop
        mov eax, offset public_6fc2c58
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fadd50)
        ASM_EXPORT_ENTRY_SINGLE(0x6fadd5b, public_6fadd5b)
    }
}

#undef public_6fadd5b

#pragma init_seg(compiler)
extern "C" void const* const public_6fadd5b = __AsmFindLabelExport(&internal_6fadd50, 0x6fadd5b);
