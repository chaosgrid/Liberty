#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247afb _public_6247afb

PROC_DECLARE(0x6247af0, internal_6247af0, public_6247af0);
/* CHUNK of public_620e510 */
extern "C" NAKED register_t __cdecl internal_6247af0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6247afb : nop
        mov eax, offset public_6250908
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247af0)
        ASM_EXPORT_ENTRY_SINGLE(0x6247afb, public_6247afb)
    }
}

#undef public_6247afb

#pragma init_seg(compiler)
extern "C" void const* const public_6247afb = __AsmFindLabelExport(&internal_6247af0, 0x6247afb);
