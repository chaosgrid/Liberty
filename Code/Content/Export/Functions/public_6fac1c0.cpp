#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac1c8 _public_6fac1c8
#define public_6fac1d0 _public_6fac1d0

PROC_DECLARE(0x6fac1c0, internal_6fac1c0, public_6fac1c0);
/* CHUNK of public_6ef3ef0 */
extern "C" NAKED register_t __cdecl internal_6fac1c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp public_6eec8d0
        public_6fac1c8 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6eec8d0
        public_6fac1d0 : nop
        mov eax, offset public_6fc0e2c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac1c0)
        ASM_EXPORT_ENTRY_FIRST(0x6fac1c8, public_6fac1c8)
        ASM_EXPORT_ENTRY_LAST(0x6fac1d0, public_6fac1d0)
    }
}

#undef public_6fac1c8
#undef public_6fac1d0

#pragma init_seg(compiler)
extern "C" void const* const public_6fac1c8 = __AsmFindLabelExport(&internal_6fac1c0, 0x6fac1c8);
extern "C" void const* const public_6fac1d0 = __AsmFindLabelExport(&internal_6fac1c0, 0x6fac1d0);
