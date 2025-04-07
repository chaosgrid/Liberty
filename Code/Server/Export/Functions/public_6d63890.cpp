#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d572a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6389b _public_6d6389b

PROC_DECLARE(0x6d63890, internal_6d63890, public_6d63890);
/* CHUNK of public_6d52b60 */
extern "C" NAKED register_t __cdecl internal_6d63890()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x520]
        jmp public_6d572a0
        public_6d6389b : nop
        mov eax, offset public_6d75aa8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63890)
        ASM_EXPORT_ENTRY_SINGLE(0x6d6389b, public_6d6389b)
    }
}

#undef public_6d6389b

#pragma init_seg(compiler)
extern "C" void const* const public_6d6389b = __AsmFindLabelExport(&internal_6d63890, 0x6d6389b);
