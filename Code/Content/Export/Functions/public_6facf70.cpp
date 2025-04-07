#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facf78 _public_6facf78

PROC_DECLARE(0x6facf70, internal_6facf70, public_6facf70);
/* CHUNK of public_6f07470 */
extern "C" NAKED register_t __cdecl internal_6facf70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x7C]
        jmp public_6f15350
        public_6facf78 : nop
        mov eax, offset public_6fc1d30
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facf70)
        ASM_EXPORT_ENTRY_SINGLE(0x6facf78, public_6facf78)
    }
}

#undef public_6facf78

#pragma init_seg(compiler)
extern "C" void const* const public_6facf78 = __AsmFindLabelExport(&internal_6facf70, 0x6facf78);
