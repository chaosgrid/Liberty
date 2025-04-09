#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfc0b _public_5bfc0b

PROC_DECLARE(0x5bfc00, internal_5bfc00, public_5bfc00);
/* CHUNK of public_50bfa0 */
extern "C" NAKED register_t __cdecl internal_5bfc00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bfc0b : nop
        mov eax, offset public_5f9b2c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfc00)
        ASM_EXPORT_ENTRY_SINGLE(0x5bfc0b, public_5bfc0b)
    }
}

#undef public_5bfc0b

#pragma init_seg(compiler)
extern "C" void const* const public_5bfc0b = __AsmFindLabelExport(&internal_5bfc00, 0x5bfc0b);
