#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fadc4b _public_6fadc4b

PROC_DECLARE(0x6fadc40, internal_6fadc40, public_6fadc40);
/* CHUNK of public_6f1a010 */
extern "C" NAKED register_t __cdecl internal_6fadc40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fadc4b : nop
        mov eax, offset public_6fc2bb4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fadc40)
        ASM_EXPORT_ENTRY_SINGLE(0x6fadc4b, public_6fadc4b)
    }
}

#undef public_6fadc4b

#pragma init_seg(compiler)
extern "C" void const* const public_6fadc4b = __AsmFindLabelExport(&internal_6fadc40, 0x6fadc4b);
