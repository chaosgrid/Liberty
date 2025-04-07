#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef38e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6640);
CLANG_FORWARD_PROC_SYMBOL(public_6ef93c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb04a8 _public_6fb04a8
#define public_6fb04b0 _public_6fb04b0
#define public_6fb04b8 _public_6fb04b8
#define public_6fb04c0 _public_6fb04c0

PROC_DECLARE(0x6fb04a0, internal_6fb04a0, public_6fb04a0);
/* CHUNK of public_6f78ef0 */
extern "C" NAKED register_t __cdecl internal_6fb04a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x58]
        jmp public_6ef93c0
        public_6fb04a8 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_6eec8d0
        public_6fb04b0 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_6ef38e0
        public_6fb04b8 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_6ef6640
        public_6fb04c0 : nop
        mov eax, offset public_6fc5774
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb04a0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb04a8, public_6fb04a8)
        ASM_EXPORT_ENTRY(0x6fb04b0, public_6fb04b0)
        ASM_EXPORT_ENTRY(0x6fb04b8, public_6fb04b8)
        ASM_EXPORT_ENTRY_LAST(0x6fb04c0, public_6fb04c0)
    }
}

#undef public_6fb04a8
#undef public_6fb04b0
#undef public_6fb04b8
#undef public_6fb04c0

#pragma init_seg(compiler)
extern "C" void const* const public_6fb04a8 = __AsmFindLabelExport(&internal_6fb04a0, 0x6fb04a8);
extern "C" void const* const public_6fb04b0 = __AsmFindLabelExport(&internal_6fb04a0, 0x6fb04b0);
extern "C" void const* const public_6fb04b8 = __AsmFindLabelExport(&internal_6fb04a0, 0x6fb04b8);
extern "C" void const* const public_6fb04c0 = __AsmFindLabelExport(&internal_6fb04a0, 0x6fb04c0);
