#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8c00);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8f6e);

#define public_6ee8f88 _public_6ee8f88

PROC_DECLARE(0x6ee8f80, internal_6ee8f80, public_6ee8f80);
/* CHUNK of public_6ee8960 */
extern "C" NAKED register_t __cdecl internal_6ee8f80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_6ee8c00
        public_6ee8f88 : nop
        mov eax, offset public_6ee964c
        jmp public_6ee8f6e
        UNREACHABLE_TRAP(0x6ee8f80)
        ASM_EXPORT_ENTRY_SINGLE(0x6ee8f88, public_6ee8f88)
    }
}

#undef public_6ee8f88

#pragma init_seg(compiler)
extern "C" void const* const public_6ee8f88 = __AsmFindLabelExport(&internal_6ee8f80, 0x6ee8f88);
