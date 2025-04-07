#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247828 _public_6247828

PROC_DECLARE(0x6247820, internal_6247820, public_6247820);
/* CHUNK of public_620b850 */
extern "C" NAKED register_t __cdecl internal_6247820()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_620b6f0
        public_6247828 : nop
        mov eax, offset public_6250620
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247820)
        ASM_EXPORT_ENTRY_SINGLE(0x6247828, public_6247828)
    }
}

#undef public_6247828

#pragma init_seg(compiler)
extern "C" void const* const public_6247828 = __AsmFindLabelExport(&internal_6247820, 0x6247828);
