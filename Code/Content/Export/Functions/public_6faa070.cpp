#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7c30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa07b _public_6faa07b

PROC_DECLARE(0x6faa070, internal_6faa070, public_6faa070);
/* CHUNK of public_6eb2b10 */
extern "C" NAKED register_t __cdecl internal_6faa070()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xD0]
        jmp public_6ea7c30
        public_6faa07b : nop
        mov eax, offset public_6fbe448
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa070)
        ASM_EXPORT_ENTRY_SINGLE(0x6faa07b, public_6faa07b)
    }
}

#undef public_6faa07b

#pragma init_seg(compiler)
extern "C" void const* const public_6faa07b = __AsmFindLabelExport(&internal_6faa070, 0x6faa07b);
