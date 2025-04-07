#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad09b _public_6fad09b

PROC_DECLARE(0x6fad090, internal_6fad090, public_6fad090);
/* CHUNK of public_6f08930 */
extern "C" NAKED register_t __cdecl internal_6fad090()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xB4]
        jmp public_6eec8d0
        public_6fad09b : nop
        mov eax, offset public_6fc1ea0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad090)
        ASM_EXPORT_ENTRY_SINGLE(0x6fad09b, public_6fad09b)
    }
}

#undef public_6fad09b

#pragma init_seg(compiler)
extern "C" void const* const public_6fad09b = __AsmFindLabelExport(&internal_6fad090, 0x6fad09b);
