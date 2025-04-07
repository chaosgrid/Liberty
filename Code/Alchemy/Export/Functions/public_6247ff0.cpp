#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247ffb _public_6247ffb

PROC_DECLARE(0x6247ff0, internal_6247ff0, public_6247ff0);
/* CHUNK of public_6212fe0 */
extern "C" NAKED register_t __cdecl internal_6247ff0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6247ffb : nop
        mov eax, offset public_6250e74
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247ff0)
        ASM_EXPORT_ENTRY_SINGLE(0x6247ffb, public_6247ffb)
    }
}

#undef public_6247ffb

#pragma init_seg(compiler)
extern "C" void const* const public_6247ffb = __AsmFindLabelExport(&internal_6247ff0, 0x6247ffb);
