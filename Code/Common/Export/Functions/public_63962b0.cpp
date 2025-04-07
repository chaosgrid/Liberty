#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ef200);
CLANG_FORWARD_PROC_SYMBOL(public_630bfe0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63962bb _public_63962bb
#define public_63962c3 _public_63962c3

PROC_DECLARE(0x63962b0, internal_63962b0, public_63962b0);
/* CHUNK of public_630bd60 */
extern "C" NAKED register_t __cdecl internal_63962b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xD0]
        jmp public_62ef200
        public_63962bb : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_630bfe0
        public_63962c3 : nop
        mov eax, offset public_63b0110
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63962b0)
        ASM_EXPORT_ENTRY_FIRST(0x63962bb, public_63962bb)
        ASM_EXPORT_ENTRY_LAST(0x63962c3, public_63962c3)
    }
}

#undef public_63962bb
#undef public_63962c3

#pragma init_seg(compiler)
extern "C" void const* const public_63962bb = __AsmFindLabelExport(&internal_63962b0, 0x63962bb);
extern "C" void const* const public_63962c3 = __AsmFindLabelExport(&internal_63962b0, 0x63962c3);
