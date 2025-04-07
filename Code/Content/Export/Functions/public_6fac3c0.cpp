#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6680);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac3c8 _public_6fac3c8
#define public_6fac3d0 _public_6fac3d0

PROC_DECLARE(0x6fac3c0, internal_6fac3c0, public_6fac3c0);
/* CHUNK of public_6ef54e0 */
extern "C" NAKED register_t __cdecl internal_6fac3c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x50]
        jmp public_6ef6680
        public_6fac3c8 : nop
        lea ecx, ss:[ebp-0x5C]
        jmp public_6f15350
        public_6fac3d0 : nop
        mov eax, offset public_6fc1040
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac3c0)
        ASM_EXPORT_ENTRY_FIRST(0x6fac3c8, public_6fac3c8)
        ASM_EXPORT_ENTRY_LAST(0x6fac3d0, public_6fac3d0)
    }
}

#undef public_6fac3c8
#undef public_6fac3d0

#pragma init_seg(compiler)
extern "C" void const* const public_6fac3c8 = __AsmFindLabelExport(&internal_6fac3c0, 0x6fac3c8);
extern "C" void const* const public_6fac3d0 = __AsmFindLabelExport(&internal_6fac3c0, 0x6fac3d0);
