#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3abb _public_5c3abb

PROC_DECLARE(0x5c3ab0, internal_5c3ab0, public_5c3ab0);
/* CHUNK of public_575e00 */
extern "C" NAKED register_t __cdecl internal_5c3ab0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c3abb : nop
        mov eax, offset public_5fd78c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3ab0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c3abb, public_5c3abb)
    }
}

#undef public_5c3abb

#pragma init_seg(compiler)
extern "C" void const* const public_5c3abb = __AsmFindLabelExport(&internal_5c3ab0, 0x5c3abb);
