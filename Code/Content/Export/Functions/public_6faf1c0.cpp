#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf1c8 _public_6faf1c8

PROC_DECLARE(0x6faf1c0, internal_6faf1c0, public_6faf1c0);
/* CHUNK of public_6f4f430 */
extern "C" NAKED register_t __cdecl internal_6faf1c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6faf1c8 : nop
        mov eax, offset public_6fc4228
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf1c0)
        ASM_EXPORT_ENTRY_SINGLE(0x6faf1c8, public_6faf1c8)
    }
}

#undef public_6faf1c8

#pragma init_seg(compiler)
extern "C" void const* const public_6faf1c8 = __AsmFindLabelExport(&internal_6faf1c0, 0x6faf1c8);
