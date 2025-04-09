#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9c28 _public_5b9c28

PROC_DECLARE(0x5b9c20, internal_5b9c20, public_5b9c20);
/* CHUNK of public_44b370 */
extern "C" NAKED register_t __cdecl internal_5b9c20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_526a20
        public_5b9c28 : nop
        mov eax, offset public_5f3cc0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9c20)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9c28, public_5b9c28)
    }
}

#undef public_5b9c28

#pragma init_seg(compiler)
extern "C" void const* const public_5b9c28 = __AsmFindLabelExport(&internal_5b9c20, 0x5b9c28);
