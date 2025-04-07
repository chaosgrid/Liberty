#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a668 _public_41a668

PROC_DECLARE(0x41a660, internal_41a660, public_41a660);
/* CHUNK of public_411fd0 */
extern "C" NAKED register_t __cdecl internal_41a660()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x58]
        jmp public_418aa4
        public_41a668 : nop
        mov eax, offset public_41f78c
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a660)
        ASM_EXPORT_ENTRY_SINGLE(0x41a668, public_41a668)
    }
}

#undef public_41a668

#pragma init_seg(compiler)
extern "C" void const* const public_41a668 = __AsmFindLabelExport(&internal_41a660, 0x41a668);
