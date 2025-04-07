#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf7b8 _public_6faf7b8
#define public_6faf7c0 _public_6faf7c0

PROC_DECLARE(0x6faf7b0, internal_6faf7b0, public_6faf7b0);
/* CHUNK of public_6f58190 */
extern "C" NAKED register_t __cdecl internal_6faf7b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp public_6eec8d0
        public_6faf7b8 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6f98760
        public_6faf7c0 : nop
        mov eax, offset public_6fc4728
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf7b0)
        ASM_EXPORT_ENTRY_FIRST(0x6faf7b8, public_6faf7b8)
        ASM_EXPORT_ENTRY_LAST(0x6faf7c0, public_6faf7c0)
    }
}

#undef public_6faf7b8
#undef public_6faf7c0

#pragma init_seg(compiler)
extern "C" void const* const public_6faf7b8 = __AsmFindLabelExport(&internal_6faf7b0, 0x6faf7b8);
extern "C" void const* const public_6faf7c0 = __AsmFindLabelExport(&internal_6faf7b0, 0x6faf7c0);
