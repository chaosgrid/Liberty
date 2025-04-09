#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be098 _public_5be098

PROC_DECLARE(0x5be090, internal_5be090, public_5be090);
/* CHUNK of public_4d5410 */
extern "C" NAKED register_t __cdecl internal_5be090()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_405840
        public_5be098 : nop
        mov eax, offset public_5f841c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be090)
        ASM_EXPORT_ENTRY_SINGLE(0x5be098, public_5be098)
    }
}

#undef public_5be098

#pragma init_seg(compiler)
extern "C" void const* const public_5be098 = __AsmFindLabelExport(&internal_5be090, 0x5be098);
