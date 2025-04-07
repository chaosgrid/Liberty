#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d613ab _public_6d613ab

PROC_DECLARE(0x6d613a0, internal_6d613a0, public_6d613a0);
/* CHUNK of public_6d099e0 */
extern "C" NAKED register_t __cdecl internal_6d613a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x70]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d613ab : nop
        mov eax, offset public_6d71fa8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d613a0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d613ab, public_6d613ab)
    }
}

#undef public_6d613ab

#pragma init_seg(compiler)
extern "C" void const* const public_6d613ab = __AsmFindLabelExport(&internal_6d613a0, 0x6d613ab);
