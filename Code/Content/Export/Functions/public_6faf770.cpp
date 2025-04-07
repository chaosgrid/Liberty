#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf778 _public_6faf778

PROC_DECLARE(0x6faf770, internal_6faf770, public_6faf770);
/* CHUNK of public_6f57640 */
extern "C" NAKED register_t __cdecl internal_6faf770()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6faf778 : nop
        mov eax, offset public_6fc46d8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf770)
        ASM_EXPORT_ENTRY_SINGLE(0x6faf778, public_6faf778)
    }
}

#undef public_6faf778

#pragma init_seg(compiler)
extern "C" void const* const public_6faf778 = __AsmFindLabelExport(&internal_6faf770, 0x6faf778);
