#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635bff0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63981c8 _public_63981c8

PROC_DECLARE(0x63981c0, internal_63981c0, public_63981c0);
/* CHUNK of public_635ada0 */
extern "C" NAKED register_t __cdecl internal_63981c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_635bff0
        public_63981c8 : nop
        mov eax, offset public_63b2628
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63981c0)
        ASM_EXPORT_ENTRY_SINGLE(0x63981c8, public_63981c8)
    }
}

#undef public_63981c8

#pragma init_seg(compiler)
extern "C" void const* const public_63981c8 = __AsmFindLabelExport(&internal_63981c0, 0x63981c8);
