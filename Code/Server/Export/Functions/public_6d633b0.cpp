#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d633bc _public_6d633bc

PROC_DECLARE(0x6d633b0, internal_6d633b0, public_6d633b0);
/* CHUNK of public_6d4c800 */
extern "C" NAKED register_t __cdecl internal_6d633b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x528]
        jmp dword ptr ds : [public_6d64b94]
        public_6d633bc : nop
        mov eax, offset public_6d756e0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d633b0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d633bc, public_6d633bc)
    }
}

#undef public_6d633bc

#pragma init_seg(compiler)
extern "C" void const* const public_6d633bc = __AsmFindLabelExport(&internal_6d633b0, 0x6d633bc);
