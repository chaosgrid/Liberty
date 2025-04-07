#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf798 _public_6faf798

PROC_DECLARE(0x6faf790, internal_6faf790, public_6faf790);
/* CHUNK of public_6f57b00 */
extern "C" NAKED register_t __cdecl internal_6faf790()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_6f28e10
        public_6faf798 : nop
        mov eax, offset public_6fc46fc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf790)
        ASM_EXPORT_ENTRY_SINGLE(0x6faf798, public_6faf798)
    }
}

#undef public_6faf798

#pragma init_seg(compiler)
extern "C" void const* const public_6faf798 = __AsmFindLabelExport(&internal_6faf790, 0x6faf798);
