#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396ad8 _public_6396ad8

PROC_DECLARE(0x6396ad0, internal_6396ad0, public_6396ad0);
/* CHUNK of public_631afe0 */
extern "C" NAKED register_t __cdecl internal_6396ad0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_630e210
        public_6396ad8 : nop
        mov eax, offset public_63b0a04
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396ad0)
        ASM_EXPORT_ENTRY_SINGLE(0x6396ad8, public_6396ad8)
    }
}

#undef public_6396ad8

#pragma init_seg(compiler)
extern "C" void const* const public_6396ad8 = __AsmFindLabelExport(&internal_6396ad0, 0x6396ad8);
