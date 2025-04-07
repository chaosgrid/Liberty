#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facbb8 _public_6facbb8

PROC_DECLARE(0x6facbb0, internal_6facbb0, public_6facbb0);
/* CHUNK of public_6f020c0 */
extern "C" NAKED register_t __cdecl internal_6facbb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6facbb8 : nop
        mov eax, offset public_6fc1850
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facbb0)
        ASM_EXPORT_ENTRY_SINGLE(0x6facbb8, public_6facbb8)
    }
}

#undef public_6facbb8

#pragma init_seg(compiler)
extern "C" void const* const public_6facbb8 = __AsmFindLabelExport(&internal_6facbb0, 0x6facbb8);
