#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad318 _public_6fad318
#define public_6fad320 _public_6fad320

PROC_DECLARE(0x6fad310, internal_6fad310, public_6fad310);
/* CHUNK of public_6f0bfe0 */
extern "C" NAKED register_t __cdecl internal_6fad310()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_6f28e10
        public_6fad318 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6f28e10
        public_6fad320 : nop
        mov eax, offset public_6fc21b4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad310)
        ASM_EXPORT_ENTRY_FIRST(0x6fad318, public_6fad318)
        ASM_EXPORT_ENTRY_LAST(0x6fad320, public_6fad320)
    }
}

#undef public_6fad318
#undef public_6fad320

#pragma init_seg(compiler)
extern "C" void const* const public_6fad318 = __AsmFindLabelExport(&internal_6fad310, 0x6fad318);
extern "C" void const* const public_6fad320 = __AsmFindLabelExport(&internal_6fad310, 0x6fad320);
