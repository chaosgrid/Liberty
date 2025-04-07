#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf6d8 _public_6faf6d8
#define public_6faf6e0 _public_6faf6e0
#define public_6faf6e8 _public_6faf6e8

PROC_DECLARE(0x6faf6d0, internal_6faf6d0, public_6faf6d0);
/* CHUNK of public_6f56160 */
extern "C" NAKED register_t __cdecl internal_6faf6d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp public_6eec8d0
        public_6faf6d8 : nop
        lea ecx, ss:[ebp-0x60]
        jmp public_6eec8d0
        public_6faf6e0 : nop
        lea ecx, ss:[ebp-0x38]
        jmp public_6f98760
        public_6faf6e8 : nop
        mov eax, offset public_6fc4638
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf6d0)
        ASM_EXPORT_ENTRY_FIRST(0x6faf6d8, public_6faf6d8)
        ASM_EXPORT_ENTRY(0x6faf6e0, public_6faf6e0)
        ASM_EXPORT_ENTRY_LAST(0x6faf6e8, public_6faf6e8)
    }
}

#undef public_6faf6d8
#undef public_6faf6e0
#undef public_6faf6e8

#pragma init_seg(compiler)
extern "C" void const* const public_6faf6d8 = __AsmFindLabelExport(&internal_6faf6d0, 0x6faf6d8);
extern "C" void const* const public_6faf6e0 = __AsmFindLabelExport(&internal_6faf6d0, 0x6faf6e0);
extern "C" void const* const public_6faf6e8 = __AsmFindLabelExport(&internal_6faf6d0, 0x6faf6e8);
