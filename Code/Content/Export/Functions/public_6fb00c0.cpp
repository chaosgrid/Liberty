#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb00c8 _public_6fb00c8

PROC_DECLARE(0x6fb00c0, internal_6fb00c0, public_6fb00c0);
/* CHUNK of public_6f73dd0 */
extern "C" NAKED register_t __cdecl internal_6fb00c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x40]
        jmp public_6eec8d0
        public_6fb00c8 : nop
        mov eax, offset public_6fc53c0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb00c0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb00c8, public_6fb00c8)
    }
}

#undef public_6fb00c8

#pragma init_seg(compiler)
extern "C" void const* const public_6fb00c8 = __AsmFindLabelExport(&internal_6fb00c0, 0x6fb00c8);
