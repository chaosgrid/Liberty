#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5d0ff _public_6d5d0ff

PROC_DECLARE(0x6d5d0f5, internal_6d5d0f5, public_6d5d0f5);
/* CHUNK of public_6d376cc */
extern "C" NAKED register_t __cdecl internal_6d5d0f5()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push dword ptr ss : [ebp-0x14]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d0ff : nop
        mov eax, offset public_6d62b1c
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5d0f5)
        ASM_EXPORT_ENTRY_SINGLE(0x6d5d0ff, public_6d5d0ff)
    }
}

#undef public_6d5d0ff

#pragma init_seg(compiler)
extern "C" void const* const public_6d5d0ff = __AsmFindLabelExport(&internal_6d5d0f5, 0x6d5d0ff);
