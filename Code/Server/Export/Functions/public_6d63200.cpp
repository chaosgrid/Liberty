#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d572a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6320b _public_6d6320b

PROC_DECLARE(0x6d63200, internal_6d63200, public_6d63200);
/* CHUNK of public_6d49f60 */
extern "C" NAKED register_t __cdecl internal_6d63200()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x32C]
        jmp public_6d572a0
        public_6d6320b : nop
        mov eax, offset public_6d75594
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63200)
        ASM_EXPORT_ENTRY_SINGLE(0x6d6320b, public_6d6320b)
    }
}

#undef public_6d6320b

#pragma init_seg(compiler)
extern "C" void const* const public_6d6320b = __AsmFindLabelExport(&internal_6d63200, 0x6d6320b);
