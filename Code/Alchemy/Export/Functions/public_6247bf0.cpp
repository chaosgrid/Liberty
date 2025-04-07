#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247bfb _public_6247bfb

PROC_DECLARE(0x6247bf0, internal_6247bf0, public_6247bf0);
/* CHUNK of public_620f600 */
extern "C" NAKED register_t __cdecl internal_6247bf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6247bfb : nop
        mov eax, offset public_6250a00
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247bf0)
        ASM_EXPORT_ENTRY_SINGLE(0x6247bfb, public_6247bfb)
    }
}

#undef public_6247bfb

#pragma init_seg(compiler)
extern "C" void const* const public_6247bfb = __AsmFindLabelExport(&internal_6247bf0, 0x6247bfb);
