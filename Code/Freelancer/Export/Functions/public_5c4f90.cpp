#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4f9b _public_5c4f9b

PROC_DECLARE(0x5c4f90, internal_5c4f90, public_5c4f90);
/* CHUNK of public_5a1a20 */
extern "C" NAKED register_t __cdecl internal_5c4f90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c4f9b : nop
        mov eax, offset public_5fed6c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4f90)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4f9b, public_5c4f9b)
    }
}

#undef public_5c4f9b

#pragma init_seg(compiler)
extern "C" void const* const public_5c4f9b = __AsmFindLabelExport(&internal_5c4f90, 0x5c4f9b);
