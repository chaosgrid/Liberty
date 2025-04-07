#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6105b _public_6d6105b

PROC_DECLARE(0x6d61050, internal_6d61050, public_6d61050);
/* CHUNK of public_6d03db0 */
extern "C" NAKED register_t __cdecl internal_6d61050()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d6105b : nop
        mov eax, offset public_6d71bc0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61050)
        ASM_EXPORT_ENTRY_SINGLE(0x6d6105b, public_6d6105b)
    }
}

#undef public_6d6105b

#pragma init_seg(compiler)
extern "C" void const* const public_6d6105b = __AsmFindLabelExport(&internal_6d61050, 0x6d6105b);
