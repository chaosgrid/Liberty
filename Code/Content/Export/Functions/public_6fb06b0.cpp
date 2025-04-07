#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb06b8 _public_6fb06b8
#define public_6fb06c0 _public_6fb06c0

PROC_DECLARE(0x6fb06b0, internal_6fb06b0, public_6fb06b0);
/* CHUNK of public_6f7fc80 */
extern "C" NAKED register_t __cdecl internal_6fb06b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x7C]
        jmp public_6eb7d10
        public_6fb06b8 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_6eb7d10
        public_6fb06c0 : nop
        mov eax, offset public_6fc597c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb06b0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb06b8, public_6fb06b8)
        ASM_EXPORT_ENTRY_LAST(0x6fb06c0, public_6fb06c0)
    }
}

#undef public_6fb06b8
#undef public_6fb06c0

#pragma init_seg(compiler)
extern "C" void const* const public_6fb06b8 = __AsmFindLabelExport(&internal_6fb06b0, 0x6fb06b8);
extern "C" void const* const public_6fb06c0 = __AsmFindLabelExport(&internal_6fb06b0, 0x6fb06c0);
