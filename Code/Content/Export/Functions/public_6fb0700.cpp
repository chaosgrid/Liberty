#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0708 _public_6fb0708

PROC_DECLARE(0x6fb0700, internal_6fb0700, public_6fb0700);
/* CHUNK of public_6f80180 */
extern "C" NAKED register_t __cdecl internal_6fb0700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x44]
        jmp public_6eb7d10
        public_6fb0708 : nop
        mov eax, offset public_6fc59d4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0700)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb0708, public_6fb0708)
    }
}

#undef public_6fb0708

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0708 = __AsmFindLabelExport(&internal_6fb0700, 0x6fb0708);
