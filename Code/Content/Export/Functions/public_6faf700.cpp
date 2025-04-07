#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf708 _public_6faf708

PROC_DECLARE(0x6faf700, internal_6faf700, public_6faf700);
/* CHUNK of public_6f564d0 */
extern "C" NAKED register_t __cdecl internal_6faf700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6faf708 : nop
        mov eax, offset public_6fc465c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf700)
        ASM_EXPORT_ENTRY_SINGLE(0x6faf708, public_6faf708)
    }
}

#undef public_6faf708

#pragma init_seg(compiler)
extern "C" void const* const public_6faf708 = __AsmFindLabelExport(&internal_6faf700, 0x6faf708);
