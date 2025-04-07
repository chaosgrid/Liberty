#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f867a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f86ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0cf8 _public_6fb0cf8
#define public_6fb0d00 _public_6fb0d00
#define public_6fb0d08 _public_6fb0d08
#define public_6fb0d10 _public_6fb0d10

PROC_DECLARE(0x6fb0cf0, internal_6fb0cf0, public_6fb0cf0);
/* CHUNK of public_6f87e90 */
extern "C" NAKED register_t __cdecl internal_6fb0cf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x54]
        jmp public_6f86ac0
        public_6fb0cf8 : nop
        lea ecx, ss:[ebp-0x64]
        jmp public_6f867a0
        public_6fb0d00 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_6f86ac0
        public_6fb0d08 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_6f86ac0
        public_6fb0d10 : nop
        mov eax, offset public_6fc627c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0cf0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0cf8, public_6fb0cf8)
        ASM_EXPORT_ENTRY(0x6fb0d00, public_6fb0d00)
        ASM_EXPORT_ENTRY(0x6fb0d08, public_6fb0d08)
        ASM_EXPORT_ENTRY_LAST(0x6fb0d10, public_6fb0d10)
    }
}

#undef public_6fb0cf8
#undef public_6fb0d00
#undef public_6fb0d08
#undef public_6fb0d10

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0cf8 = __AsmFindLabelExport(&internal_6fb0cf0, 0x6fb0cf8);
extern "C" void const* const public_6fb0d00 = __AsmFindLabelExport(&internal_6fb0cf0, 0x6fb0d00);
extern "C" void const* const public_6fb0d08 = __AsmFindLabelExport(&internal_6fb0cf0, 0x6fb0d08);
extern "C" void const* const public_6fb0d10 = __AsmFindLabelExport(&internal_6fb0cf0, 0x6fb0d10);
