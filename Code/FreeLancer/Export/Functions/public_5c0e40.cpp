#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0e4b _public_5c0e4b

PROC_DECLARE(0x5c0e40, internal_5c0e40, public_5c0e40);
/* CHUNK of public_543630 */
extern "C" NAKED register_t __cdecl internal_5c0e40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c0e4b : nop
        mov eax, offset public_5fb0d4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0e40)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0e4b, public_5c0e4b)
    }
}

#undef public_5c0e4b

#pragma init_seg(compiler)
extern "C" void const* const public_5c0e4b = __AsmFindLabelExport(&internal_5c0e40, 0x5c0e4b);
