#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62b98 _public_6d62b98

PROC_DECLARE(0x6d62b90, internal_6d62b90, public_6d62b90);
/* CHUNK of public_6d27700 */
extern "C" NAKED register_t __cdecl internal_6d62b90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x5C]
        jmp public_6d0b7e0
        public_6d62b98 : nop
        mov eax, offset public_6d73c38
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62b90)
        ASM_EXPORT_ENTRY_SINGLE(0x6d62b98, public_6d62b98)
    }
}

#undef public_6d62b98

#pragma init_seg(compiler)
extern "C" void const* const public_6d62b98 = __AsmFindLabelExport(&internal_6d62b90, 0x6d62b98);
