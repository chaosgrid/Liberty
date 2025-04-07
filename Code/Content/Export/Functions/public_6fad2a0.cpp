#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad2ab _public_6fad2ab
#define public_6fad2b6 _public_6fad2b6
#define public_6fad2c1 _public_6fad2c1
#define public_6fad2cc _public_6fad2cc
#define public_6fad2d7 _public_6fad2d7

PROC_DECLARE(0x6fad2a0, internal_6fad2a0, public_6fad2a0);
/* CHUNK of public_6f0b410 */
extern "C" NAKED register_t __cdecl internal_6fad2a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14C]
        jmp public_6f28e10
        public_6fad2ab : nop
        lea ecx, ss:[ebp-0x134]
        jmp public_6eec8d0
        public_6fad2b6 : nop
        lea ecx, ss:[ebp-0x14C]
        jmp public_6f28e10
        public_6fad2c1 : nop
        lea ecx, ss:[ebp-0x148]
        jmp public_6f28e10
        public_6fad2cc : nop
        lea ecx, ss:[ebp-0x148]
        jmp public_6f28e10
        public_6fad2d7 : nop
        mov eax, offset public_6fc2164
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad2a0)
        ASM_EXPORT_ENTRY_FIRST(0x6fad2ab, public_6fad2ab)
        ASM_EXPORT_ENTRY(0x6fad2b6, public_6fad2b6)
        ASM_EXPORT_ENTRY(0x6fad2c1, public_6fad2c1)
        ASM_EXPORT_ENTRY(0x6fad2cc, public_6fad2cc)
        ASM_EXPORT_ENTRY_LAST(0x6fad2d7, public_6fad2d7)
    }
}

#undef public_6fad2ab
#undef public_6fad2b6
#undef public_6fad2c1
#undef public_6fad2cc
#undef public_6fad2d7

#pragma init_seg(compiler)
extern "C" void const* const public_6fad2ab = __AsmFindLabelExport(&internal_6fad2a0, 0x6fad2ab);
extern "C" void const* const public_6fad2b6 = __AsmFindLabelExport(&internal_6fad2a0, 0x6fad2b6);
extern "C" void const* const public_6fad2c1 = __AsmFindLabelExport(&internal_6fad2a0, 0x6fad2c1);
extern "C" void const* const public_6fad2cc = __AsmFindLabelExport(&internal_6fad2a0, 0x6fad2cc);
extern "C" void const* const public_6fad2d7 = __AsmFindLabelExport(&internal_6fad2a0, 0x6fad2d7);
