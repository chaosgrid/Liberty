#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a568 _public_6b6a568

PROC_DECLARE(0x6b6a560, internal_6b6a560, public_6b6a560);
/* CHUNK of public_6b33f80 */
extern "C" NAKED register_t __cdecl internal_6b6a560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_6b3a450
        public_6b6a568 : nop
        mov eax, offset public_6b6ec14
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a560)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6a568, public_6b6a568)
    }
}

#undef public_6b6a568

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a568 = __AsmFindLabelExport(&internal_6b6a560, 0x6b6a568);
