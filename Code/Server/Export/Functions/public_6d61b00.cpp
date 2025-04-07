#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61b0b _public_6d61b0b

PROC_DECLARE(0x6d61b00, internal_6d61b00, public_6d61b00);
/* CHUNK of public_6d11ee0 */
extern "C" NAKED register_t __cdecl internal_6d61b00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x44]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d61b0b : nop
        mov eax, offset public_6d72708
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61b00)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61b0b, public_6d61b0b)
    }
}

#undef public_6d61b0b

#pragma init_seg(compiler)
extern "C" void const* const public_6d61b0b = __AsmFindLabelExport(&internal_6d61b00, 0x6d61b0b);
