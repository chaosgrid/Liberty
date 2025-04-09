#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0938 _public_5c0938

PROC_DECLARE(0x5c0930, internal_5c0930, public_5c0930);
/* CHUNK of public_534870 */
extern "C" NAKED register_t __cdecl internal_5c0930()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x80]
        jmp public_52d3f0
        public_5c0938 : nop
        mov eax, offset public_5fab20
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0930)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0938, public_5c0938)
    }
}

#undef public_5c0938

#pragma init_seg(compiler)
extern "C" void const* const public_5c0938 = __AsmFindLabelExport(&internal_5c0930, 0x5c0938);
