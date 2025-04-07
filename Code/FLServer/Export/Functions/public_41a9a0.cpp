#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414600);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a9a8 _public_41a9a8

PROC_DECLARE(0x41a9a0, internal_41a9a0, public_41a9a0);
/* CHUNK of public_414530 */
extern "C" NAKED register_t __cdecl internal_41a9a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_414600
        public_41a9a8 : nop
        mov eax, offset public_41fac4
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a9a0)
        ASM_EXPORT_ENTRY_SINGLE(0x41a9a8, public_41a9a8)
    }
}

#undef public_41a9a8

#pragma init_seg(compiler)
extern "C" void const* const public_41a9a8 = __AsmFindLabelExport(&internal_41a9a0, 0x41a9a8);
