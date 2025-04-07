#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2c20);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fadfd8 _public_6fadfd8
#define public_6fadfe0 _public_6fadfe0
#define public_6fadfe8 _public_6fadfe8
#define public_6fadff0 _public_6fadff0
#define public_6fadff8 _public_6fadff8

PROC_DECLARE(0x6fadfd0, internal_6fadfd0, public_6fadfd0);
/* CHUNK of public_6f233e0 */
extern "C" NAKED register_t __cdecl internal_6fadfd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6ed2c20
        public_6fadfd8 : nop
        lea ecx, ss:[ebp+0x44]
        jmp public_6f15350
        public_6fadfe0 : nop
        lea ecx, ss:[ebp+0x60]
        jmp public_6ecfa90
        public_6fadfe8 : nop
        lea ecx, ss:[ebp+0x70]
        jmp public_6f28e10
        public_6fadff0 : nop
        lea ecx, ss:[ebp+0x74]
        jmp public_6eec8d0
        public_6fadff8 : nop
        mov eax, offset public_6fc2f90
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fadfd0)
        ASM_EXPORT_ENTRY_FIRST(0x6fadfd8, public_6fadfd8)
        ASM_EXPORT_ENTRY(0x6fadfe0, public_6fadfe0)
        ASM_EXPORT_ENTRY(0x6fadfe8, public_6fadfe8)
        ASM_EXPORT_ENTRY(0x6fadff0, public_6fadff0)
        ASM_EXPORT_ENTRY_LAST(0x6fadff8, public_6fadff8)
    }
}

#undef public_6fadfd8
#undef public_6fadfe0
#undef public_6fadfe8
#undef public_6fadff0
#undef public_6fadff8

#pragma init_seg(compiler)
extern "C" void const* const public_6fadfd8 = __AsmFindLabelExport(&internal_6fadfd0, 0x6fadfd8);
extern "C" void const* const public_6fadfe0 = __AsmFindLabelExport(&internal_6fadfd0, 0x6fadfe0);
extern "C" void const* const public_6fadfe8 = __AsmFindLabelExport(&internal_6fadfd0, 0x6fadfe8);
extern "C" void const* const public_6fadff0 = __AsmFindLabelExport(&internal_6fadfd0, 0x6fadff0);
extern "C" void const* const public_6fadff8 = __AsmFindLabelExport(&internal_6fadfd0, 0x6fadff8);
