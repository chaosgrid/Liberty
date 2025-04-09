#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9938 _public_5b9938

PROC_DECLARE(0x5b9930, internal_5b9930, public_5b9930);
/* CHUNK of public_446160 */
extern "C" NAKED register_t __cdecl internal_5b9930()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_4de730
        public_5b9938 : nop
        mov eax, offset public_5f3988
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9930)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9938, public_5b9938)
    }
}

#undef public_5b9938

#pragma init_seg(compiler)
extern "C" void const* const public_5b9938 = __AsmFindLabelExport(&internal_5b9930, 0x5b9938);
