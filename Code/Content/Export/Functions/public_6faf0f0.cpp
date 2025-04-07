#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf0f8 _public_6faf0f8

PROC_DECLARE(0x6faf0f0, internal_6faf0f0, public_6faf0f0);
/* CHUNK of public_6f4c610 */
extern "C" NAKED register_t __cdecl internal_6faf0f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6faf0f8 : nop
        mov eax, offset public_6fc40b4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf0f0)
        ASM_EXPORT_ENTRY_SINGLE(0x6faf0f8, public_6faf0f8)
    }
}

#undef public_6faf0f8

#pragma init_seg(compiler)
extern "C" void const* const public_6faf0f8 = __AsmFindLabelExport(&internal_6faf0f0, 0x6faf0f8);
