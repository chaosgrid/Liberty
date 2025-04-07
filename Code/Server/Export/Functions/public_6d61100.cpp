#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d04830);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6110b _public_6d6110b

PROC_DECLARE(0x6d61100, internal_6d61100, public_6d61100);
/* CHUNK of public_6d046c0 */
extern "C" NAKED register_t __cdecl internal_6d61100()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x10
        jmp public_6d04830
        public_6d6110b : nop
        mov eax, offset public_6d71c9c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61100)
        ASM_EXPORT_ENTRY_SINGLE(0x6d6110b, public_6d6110b)
    }
}

#undef public_6d6110b

#pragma init_seg(compiler)
extern "C" void const* const public_6d6110b = __AsmFindLabelExport(&internal_6d61100, 0x6d6110b);
