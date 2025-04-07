#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad198 _public_6fad198
#define public_6fad1a0 _public_6fad1a0
#define public_6fad1a8 _public_6fad1a8

PROC_DECLARE(0x6fad190, internal_6fad190, public_6fad190);
/* CHUNK of public_6f0a830 */
extern "C" NAKED register_t __cdecl internal_6fad190()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6ecfa90
        public_6fad198 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_6f28e10
        public_6fad1a0 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_6f15350
        public_6fad1a8 : nop
        mov eax, offset public_6fc1fd4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad190)
        ASM_EXPORT_ENTRY_FIRST(0x6fad198, public_6fad198)
        ASM_EXPORT_ENTRY(0x6fad1a0, public_6fad1a0)
        ASM_EXPORT_ENTRY_LAST(0x6fad1a8, public_6fad1a8)
    }
}

#undef public_6fad198
#undef public_6fad1a0
#undef public_6fad1a8

#pragma init_seg(compiler)
extern "C" void const* const public_6fad198 = __AsmFindLabelExport(&internal_6fad190, 0x6fad198);
extern "C" void const* const public_6fad1a0 = __AsmFindLabelExport(&internal_6fad190, 0x6fad1a0);
extern "C" void const* const public_6fad1a8 = __AsmFindLabelExport(&internal_6fad190, 0x6fad1a8);
