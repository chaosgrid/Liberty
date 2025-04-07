#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9148 _public_5b9148

PROC_DECLARE(0x5b9140, internal_5b9140, public_5b9140);
/* CHUNK of public_435100 */
extern "C" NAKED register_t __cdecl internal_5b9140()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_4dd9a0
        public_5b9148 : nop
        mov eax, offset public_5f3070
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9140)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9148, public_5b9148)
    }
}

#undef public_5b9148

#pragma init_seg(compiler)
extern "C" void const* const public_5b9148 = __AsmFindLabelExport(&internal_5b9140, 0x5b9148);
