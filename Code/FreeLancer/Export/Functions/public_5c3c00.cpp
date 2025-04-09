#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3c0b _public_5c3c0b

PROC_DECLARE(0x5c3c00, internal_5c3c00, public_5c3c00);
/* CHUNK of public_579170 */
extern "C" NAKED register_t __cdecl internal_5c3c00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c3c0b : nop
        mov eax, offset public_5fd8e0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3c00)
        ASM_EXPORT_ENTRY_SINGLE(0x5c3c0b, public_5c3c0b)
    }
}

#undef public_5c3c0b

#pragma init_seg(compiler)
extern "C" void const* const public_5c3c0b = __AsmFindLabelExport(&internal_5c3c00, 0x5c3c0b);
