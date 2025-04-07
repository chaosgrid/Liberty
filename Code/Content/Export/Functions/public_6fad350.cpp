#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad35b _public_6fad35b

PROC_DECLARE(0x6fad350, internal_6fad350, public_6fad350);
/* CHUNK of public_6f0c500 */
extern "C" NAKED register_t __cdecl internal_6fad350()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fad35b : nop
        mov eax, offset public_6fc21fc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad350)
        ASM_EXPORT_ENTRY_SINGLE(0x6fad35b, public_6fad35b)
    }
}

#undef public_6fad35b

#pragma init_seg(compiler)
extern "C" void const* const public_6fad35b = __AsmFindLabelExport(&internal_6fad350, 0x6fad35b);
