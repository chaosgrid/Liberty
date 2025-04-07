#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a548 _public_6b6a548

PROC_DECLARE(0x6b6a540, internal_6b6a540, public_6b6a540);
/* CHUNK of public_6b33ef0 */
extern "C" NAKED register_t __cdecl internal_6b6a540()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_6b3a450
        public_6b6a548 : nop
        mov eax, offset public_6b6ebf0
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a540)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6a548, public_6b6a548)
    }
}

#undef public_6b6a548

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a548 = __AsmFindLabelExport(&internal_6b6a540, 0x6b6a548);
