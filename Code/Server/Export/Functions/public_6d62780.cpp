#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62788 _public_6d62788

PROC_DECLARE(0x6d62780, internal_6d62780, public_6d62780);
/* CHUNK of public_6d20960 */
extern "C" NAKED register_t __cdecl internal_6d62780()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6d209f0
        public_6d62788 : nop
        mov eax, offset public_6d7340c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62780)
        ASM_EXPORT_ENTRY_SINGLE(0x6d62788, public_6d62788)
    }
}

#undef public_6d62788

#pragma init_seg(compiler)
extern "C" void const* const public_6d62788 = __AsmFindLabelExport(&internal_6d62780, 0x6d62788);
