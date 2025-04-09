#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8cc8 _public_5b8cc8

PROC_DECLARE(0x5b8cc0, internal_5b8cc0, public_5b8cc0);
/* CHUNK of public_42b5e0 */
extern "C" NAKED register_t __cdecl internal_5b8cc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_526a20
        public_5b8cc8 : nop
        mov eax, offset public_5f2b74
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8cc0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b8cc8, public_5b8cc8)
    }
}

#undef public_5b8cc8

#pragma init_seg(compiler)
extern "C" void const* const public_5b8cc8 = __AsmFindLabelExport(&internal_5b8cc0, 0x5b8cc8);
