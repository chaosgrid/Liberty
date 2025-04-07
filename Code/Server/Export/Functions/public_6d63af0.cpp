#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46d20);
CLANG_FORWARD_PROC_SYMBOL(public_6d572e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63afb _public_6d63afb
#define public_6d63b06 _public_6d63b06

PROC_DECLARE(0x6d63af0, internal_6d63af0, public_6d63af0);
/* CHUNK of public_6d57090 */
extern "C" NAKED register_t __cdecl internal_6d63af0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x93C]
        jmp public_6d46d20
        public_6d63afb : nop
        lea ecx, ss:[ebp-0x5A4]
        jmp public_6d572e0
        public_6d63b06 : nop
        mov eax, offset public_6d75d20
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63af0)
        ASM_EXPORT_ENTRY_FIRST(0x6d63afb, public_6d63afb)
        ASM_EXPORT_ENTRY_LAST(0x6d63b06, public_6d63b06)
    }
}

#undef public_6d63afb
#undef public_6d63b06

#pragma init_seg(compiler)
extern "C" void const* const public_6d63afb = __AsmFindLabelExport(&internal_6d63af0, 0x6d63afb);
extern "C" void const* const public_6d63b06 = __AsmFindLabelExport(&internal_6d63af0, 0x6d63b06);
