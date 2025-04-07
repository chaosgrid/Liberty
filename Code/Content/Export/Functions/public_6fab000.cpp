#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab008 _public_6fab008

PROC_DECLARE(0x6fab000, internal_6fab000, public_6fab000);
/* CHUNK of public_6eccfc0 */
extern "C" NAKED register_t __cdecl internal_6fab000()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6f15350
        public_6fab008 : nop
        mov eax, offset public_6fbf4c8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab000)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab008, public_6fab008)
    }
}

#undef public_6fab008

#pragma init_seg(compiler)
extern "C" void const* const public_6fab008 = __AsmFindLabelExport(&internal_6fab000, 0x6fab008);
