#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea90f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa098 _public_6faa098

PROC_DECLARE(0x6faa090, internal_6faa090, public_6faa090);
/* CHUNK of public_6eb2ca0 */
extern "C" NAKED register_t __cdecl internal_6faa090()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6ea90f0
        public_6faa098 : nop
        mov eax, offset public_6fbe46c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa090)
        ASM_EXPORT_ENTRY_SINGLE(0x6faa098, public_6faa098)
    }
}

#undef public_6faa098

#pragma init_seg(compiler)
extern "C" void const* const public_6faa098 = __AsmFindLabelExport(&internal_6faa090, 0x6faa098);
