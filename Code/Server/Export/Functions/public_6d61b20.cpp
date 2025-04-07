#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61b2b _public_6d61b2b

PROC_DECLARE(0x6d61b20, internal_6d61b20, public_6d61b20);
/* CHUNK of public_6d120b0 */
extern "C" NAKED register_t __cdecl internal_6d61b20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d61b2b : nop
        mov eax, offset public_6d7272c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61b20)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61b2b, public_6d61b2b)
    }
}

#undef public_6d61b2b

#pragma init_seg(compiler)
extern "C" void const* const public_6d61b2b = __AsmFindLabelExport(&internal_6d61b20, 0x6d61b2b);
