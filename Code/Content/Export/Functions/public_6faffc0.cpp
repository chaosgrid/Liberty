#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30690);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faffc8 _public_6faffc8
#define public_6faffd0 _public_6faffd0

PROC_DECLARE(0x6faffc0, internal_6faffc0, public_6faffc0);
/* CHUNK of public_6f725c0 */
extern "C" NAKED register_t __cdecl internal_6faffc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x40]
        jmp public_6f30690
        public_6faffc8 : nop
        lea ecx, ss:[ebp-0x50]
        jmp public_6eec8d0
        public_6faffd0 : nop
        mov eax, offset public_6fc52b0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faffc0)
        ASM_EXPORT_ENTRY_FIRST(0x6faffc8, public_6faffc8)
        ASM_EXPORT_ENTRY_LAST(0x6faffd0, public_6faffd0)
    }
}

#undef public_6faffc8
#undef public_6faffd0

#pragma init_seg(compiler)
extern "C" void const* const public_6faffc8 = __AsmFindLabelExport(&internal_6faffc0, 0x6faffc8);
extern "C" void const* const public_6faffd0 = __AsmFindLabelExport(&internal_6faffc0, 0x6faffd0);
