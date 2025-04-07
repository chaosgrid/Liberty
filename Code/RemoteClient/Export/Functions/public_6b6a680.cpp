#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a688 _public_6b6a688

PROC_DECLARE(0x6b6a680, internal_6b6a680, public_6b6a680);
/* CHUNK of public_6b37b00 */
extern "C" NAKED register_t __cdecl internal_6b6a680()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0x10]
        jmp public_6b3a450
        public_6b6a688 : nop
        mov eax, offset public_6b6ed34
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a680)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6a688, public_6b6a688)
    }
}

#undef public_6b6a688

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a688 = __AsmFindLabelExport(&internal_6b6a680, 0x6b6a688);
