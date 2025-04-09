#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0f38 _public_5c0f38

PROC_DECLARE(0x5c0f30, internal_5c0f30, public_5c0f30);
/* CHUNK of public_5462d0 */
extern "C" NAKED register_t __cdecl internal_5c0f30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_526a20
        public_5c0f38 : nop
        mov eax, offset public_5fb224
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0f30)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0f38, public_5c0f38)
    }
}

#undef public_5c0f38

#pragma init_seg(compiler)
extern "C" void const* const public_5c0f38 = __AsmFindLabelExport(&internal_5c0f30, 0x5c0f38);
