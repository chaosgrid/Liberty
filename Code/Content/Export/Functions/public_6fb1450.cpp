#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f867a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1458 _public_6fb1458

PROC_DECLARE(0x6fb1450, internal_6fb1450, public_6fb1450);
/* CHUNK of public_6f8bc70 */
extern "C" NAKED register_t __cdecl internal_6fb1450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6f867a0
        public_6fb1458 : nop
        mov eax, offset public_6fc69a4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1450)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb1458, public_6fb1458)
    }
}

#undef public_6fb1458

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1458 = __AsmFindLabelExport(&internal_6fb1450, 0x6fb1458);
