#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4e98 _public_5c4e98

PROC_DECLARE(0x5c4e90, internal_5c4e90, public_5c4e90);
/* CHUNK of public_59ec80 */
extern "C" NAKED register_t __cdecl internal_5c4e90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x58]
        jmp public_526a20
        public_5c4e98 : nop
        mov eax, offset public_5fec54
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4e90)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4e98, public_5c4e98)
    }
}

#undef public_5c4e98

#pragma init_seg(compiler)
extern "C" void const* const public_5c4e98 = __AsmFindLabelExport(&internal_5c4e90, 0x5c4e98);
