#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9478 _public_5b9478

PROC_DECLARE(0x5b9470, internal_5b9470, public_5b9470);
/* CHUNK of public_43c7b0 */
extern "C" NAKED register_t __cdecl internal_5b9470()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_43c730
        public_5b9478 : nop
        mov eax, offset public_5f347c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9470)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9478, public_5b9478)
    }
}

#undef public_5b9478

#pragma init_seg(compiler)
extern "C" void const* const public_5b9478 = __AsmFindLabelExport(&internal_5b9470, 0x5b9478);
