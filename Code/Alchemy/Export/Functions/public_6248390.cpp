#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217c00);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248398 _public_6248398

PROC_DECLARE(0x6248390, internal_6248390, public_6248390);
/* CHUNK of public_6217dc0 */
extern "C" NAKED register_t __cdecl internal_6248390()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6217c00
        public_6248398 : nop
        mov eax, offset public_625125c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248390)
        ASM_EXPORT_ENTRY_SINGLE(0x6248398, public_6248398)
    }
}

#undef public_6248398

#pragma init_seg(compiler)
extern "C" void const* const public_6248398 = __AsmFindLabelExport(&internal_6248390, 0x6248398);
