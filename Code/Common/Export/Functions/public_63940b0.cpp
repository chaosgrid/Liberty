#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63940b8 _public_63940b8

PROC_DECLARE(0x63940b0, internal_63940b0, public_63940b0);
/* CHUNK of public_62abde0 */
extern "C" NAKED register_t __cdecl internal_63940b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6269110
        public_63940b8 : nop
        mov eax, offset public_63ad5a8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63940b0)
        ASM_EXPORT_ENTRY_SINGLE(0x63940b8, public_63940b8)
    }
}

#undef public_63940b8

#pragma init_seg(compiler)
extern "C" void const* const public_63940b8 = __AsmFindLabelExport(&internal_63940b0, 0x63940b8);
