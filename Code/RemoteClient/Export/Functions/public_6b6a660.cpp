#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b38590);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a668 _public_6b6a668

PROC_DECLARE(0x6b6a660, internal_6b6a660, public_6b6a660);
/* CHUNK of public_6b36080 */
extern "C" NAKED register_t __cdecl internal_6b6a660()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6b38590
        public_6b6a668 : nop
        mov eax, offset public_6b6ed10
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a660)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6a668, public_6b6a668)
    }
}

#undef public_6b6a668

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a668 = __AsmFindLabelExport(&internal_6b6a660, 0x6b6a668);
