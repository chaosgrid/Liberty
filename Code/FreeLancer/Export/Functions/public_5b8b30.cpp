#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8b38 _public_5b8b38

PROC_DECLARE(0x5b8b30, internal_5b8b30, public_5b8b30);
/* CHUNK of public_424510 */
extern "C" NAKED register_t __cdecl internal_5b8b30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_526a20
        public_5b8b38 : nop
        mov eax, offset public_5f29e4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8b30)
        ASM_EXPORT_ENTRY_SINGLE(0x5b8b38, public_5b8b38)
    }
}

#undef public_5b8b38

#pragma init_seg(compiler)
extern "C" void const* const public_5b8b38 = __AsmFindLabelExport(&internal_5b8b30, 0x5b8b38);
