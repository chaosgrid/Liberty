#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c07a8 _public_5c07a8

PROC_DECLARE(0x5c07a0, internal_5c07a0, public_5c07a0);
/* CHUNK of public_532800 */
extern "C" NAKED register_t __cdecl internal_5c07a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_531af0
        public_5c07a8 : nop
        mov eax, offset public_5fa970
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c07a0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c07a8, public_5c07a8)
    }
}

#undef public_5c07a8

#pragma init_seg(compiler)
extern "C" void const* const public_5c07a8 = __AsmFindLabelExport(&internal_5c07a0, 0x5c07a8);
