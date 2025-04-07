#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22a00);
CLANG_FORWARD_PROC_SYMBOL(public_6f956a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faea58 _public_6faea58
#define public_6faea60 _public_6faea60

PROC_DECLARE(0x6faea50, internal_6faea50, public_6faea50);
/* CHUNK of public_6f32510 */
extern "C" NAKED register_t __cdecl internal_6faea50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x60]
        jmp public_6f956a0
        public_6faea58 : nop
        lea ecx, ss:[ebp-0x38]
        jmp public_6f22a00
        public_6faea60 : nop
        mov eax, offset public_6fc3a38
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faea50)
        ASM_EXPORT_ENTRY_FIRST(0x6faea58, public_6faea58)
        ASM_EXPORT_ENTRY_LAST(0x6faea60, public_6faea60)
    }
}

#undef public_6faea58
#undef public_6faea60

#pragma init_seg(compiler)
extern "C" void const* const public_6faea58 = __AsmFindLabelExport(&internal_6faea50, 0x6faea58);
extern "C" void const* const public_6faea60 = __AsmFindLabelExport(&internal_6faea50, 0x6faea60);
