#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272db0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63956a8 _public_63956a8

PROC_DECLARE(0x63956a0, internal_63956a0, public_63956a0);
/* CHUNK of public_62f21b0 */
extern "C" NAKED register_t __cdecl internal_63956a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_6272db0
        public_63956a8 : nop
        mov eax, offset public_63af180
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63956a0)
        ASM_EXPORT_ENTRY_SINGLE(0x63956a8, public_63956a8)
    }
}

#undef public_63956a8

#pragma init_seg(compiler)
extern "C" void const* const public_63956a8 = __AsmFindLabelExport(&internal_63956a0, 0x63956a8);
