#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c4f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9458 _public_5b9458

PROC_DECLARE(0x5b9450, internal_5b9450, public_5b9450);
/* CHUNK of public_43c570 */
extern "C" NAKED register_t __cdecl internal_5b9450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_43c4f0
        public_5b9458 : nop
        mov eax, offset public_5f3434
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9450)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9458, public_5b9458)
    }
}

#undef public_5b9458

#pragma init_seg(compiler)
extern "C" void const* const public_5b9458 = __AsmFindLabelExport(&internal_5b9450, 0x5b9458);
