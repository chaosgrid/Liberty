#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63986e8 _public_63986e8

PROC_DECLARE(0x63986e0, internal_63986e0, public_63986e0);
/* CHUNK of public_636a1e0 */
extern "C" NAKED register_t __cdecl internal_63986e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_63449d0
        public_63986e8 : nop
        mov eax, offset public_63b2cf0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63986e0)
        ASM_EXPORT_ENTRY_SINGLE(0x63986e8, public_63986e8)
    }
}

#undef public_63986e8

#pragma init_seg(compiler)
extern "C" void const* const public_63986e8 = __AsmFindLabelExport(&internal_63986e0, 0x63986e8);
