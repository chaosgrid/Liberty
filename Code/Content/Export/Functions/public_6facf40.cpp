#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facf48 _public_6facf48
#define public_6facf50 _public_6facf50
#define public_6facf58 _public_6facf58
#define public_6facf60 _public_6facf60

PROC_DECLARE(0x6facf40, internal_6facf40, public_6facf40);
/* CHUNK of public_6f07240 */
extern "C" NAKED register_t __cdecl internal_6facf40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6ecfa90
        public_6facf48 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_6ecfa90
        public_6facf50 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_6f15350
        public_6facf58 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_6f15350
        public_6facf60 : nop
        mov eax, offset public_6fc1d0c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facf40)
        ASM_EXPORT_ENTRY_FIRST(0x6facf48, public_6facf48)
        ASM_EXPORT_ENTRY(0x6facf50, public_6facf50)
        ASM_EXPORT_ENTRY(0x6facf58, public_6facf58)
        ASM_EXPORT_ENTRY_LAST(0x6facf60, public_6facf60)
    }
}

#undef public_6facf48
#undef public_6facf50
#undef public_6facf58
#undef public_6facf60

#pragma init_seg(compiler)
extern "C" void const* const public_6facf48 = __AsmFindLabelExport(&internal_6facf40, 0x6facf48);
extern "C" void const* const public_6facf50 = __AsmFindLabelExport(&internal_6facf40, 0x6facf50);
extern "C" void const* const public_6facf58 = __AsmFindLabelExport(&internal_6facf40, 0x6facf58);
extern "C" void const* const public_6facf60 = __AsmFindLabelExport(&internal_6facf40, 0x6facf60);
