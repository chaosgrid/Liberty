#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60c9b _public_6d60c9b

PROC_DECLARE(0x6d60c90, internal_6d60c90, public_6d60c90);
/* CHUNK of public_6cfbd60 */
extern "C" NAKED register_t __cdecl internal_6d60c90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_6cecb50
        public_6d60c9b : nop
        mov eax, offset public_6d71604
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60c90)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60c9b, public_6d60c9b)
    }
}

#undef public_6d60c9b

#pragma init_seg(compiler)
extern "C" void const* const public_6d60c9b = __AsmFindLabelExport(&internal_6d60c90, 0x6d60c9b);
