#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63345f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392b18 _public_6392b18

PROC_DECLARE(0x6392b10, internal_6392b10, public_6392b10);
/* CHUNK of public_6277c70 */
extern "C" NAKED register_t __cdecl internal_6392b10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp public_63345f0
        public_6392b18 : nop
        mov eax, offset public_63ab914
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392b10)
        ASM_EXPORT_ENTRY_SINGLE(0x6392b18, public_6392b18)
    }
}

#undef public_6392b18

#pragma init_seg(compiler)
extern "C" void const* const public_6392b18 = __AsmFindLabelExport(&internal_6392b10, 0x6392b18);
