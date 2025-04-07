#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7c30);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa0b8 _public_6faa0b8
#define public_6faa0c0 _public_6faa0c0
#define public_6faa0c8 _public_6faa0c8
#define public_6faa0d0 _public_6faa0d0

PROC_DECLARE(0x6faa0b0, internal_6faa0b0, public_6faa0b0);
/* CHUNK of public_6eb30d0 */
extern "C" NAKED register_t __cdecl internal_6faa0b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp public_6ea7c30
        public_6faa0b8 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_6eec8d0
        public_6faa0c0 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_6eec8d0
        public_6faa0c8 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6f98760
        public_6faa0d0 : nop
        mov eax, offset public_6fbe4a8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa0b0)
        ASM_EXPORT_ENTRY_FIRST(0x6faa0b8, public_6faa0b8)
        ASM_EXPORT_ENTRY(0x6faa0c0, public_6faa0c0)
        ASM_EXPORT_ENTRY(0x6faa0c8, public_6faa0c8)
        ASM_EXPORT_ENTRY_LAST(0x6faa0d0, public_6faa0d0)
    }
}

#undef public_6faa0b8
#undef public_6faa0c0
#undef public_6faa0c8
#undef public_6faa0d0

#pragma init_seg(compiler)
extern "C" void const* const public_6faa0b8 = __AsmFindLabelExport(&internal_6faa0b0, 0x6faa0b8);
extern "C" void const* const public_6faa0c0 = __AsmFindLabelExport(&internal_6faa0b0, 0x6faa0c0);
extern "C" void const* const public_6faa0c8 = __AsmFindLabelExport(&internal_6faa0b0, 0x6faa0c8);
extern "C" void const* const public_6faa0d0 = __AsmFindLabelExport(&internal_6faa0b0, 0x6faa0d0);
