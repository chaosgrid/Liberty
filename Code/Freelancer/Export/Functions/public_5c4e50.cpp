#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4e58 _public_5c4e58

PROC_DECLARE(0x5c4e50, internal_5c4e50, public_5c4e50);
/* CHUNK of public_59d5a0 */
extern "C" NAKED register_t __cdecl internal_5c4e50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_526a20
        public_5c4e58 : nop
        mov eax, offset public_5fec0c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4e50)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4e58, public_5c4e58)
    }
}

#undef public_5c4e58

#pragma init_seg(compiler)
extern "C" void const* const public_5c4e58 = __AsmFindLabelExport(&internal_5c4e50, 0x5c4e58);
