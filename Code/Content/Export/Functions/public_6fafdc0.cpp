#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafdc8 _public_6fafdc8
#define public_6fafdd0 _public_6fafdd0

PROC_DECLARE(0x6fafdc0, internal_6fafdc0, public_6fafdc0);
/* CHUNK of public_6f6d400 */
extern "C" NAKED register_t __cdecl internal_6fafdc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp public_6eec8d0
        public_6fafdc8 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6f98760
        public_6fafdd0 : nop
        mov eax, offset public_6fc4f3c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafdc0)
        ASM_EXPORT_ENTRY_FIRST(0x6fafdc8, public_6fafdc8)
        ASM_EXPORT_ENTRY_LAST(0x6fafdd0, public_6fafdd0)
    }
}

#undef public_6fafdc8
#undef public_6fafdd0

#pragma init_seg(compiler)
extern "C" void const* const public_6fafdc8 = __AsmFindLabelExport(&internal_6fafdc0, 0x6fafdc8);
extern "C" void const* const public_6fafdd0 = __AsmFindLabelExport(&internal_6fafdc0, 0x6fafdd0);
