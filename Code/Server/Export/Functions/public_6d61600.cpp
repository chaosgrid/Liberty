#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6160b _public_6d6160b

PROC_DECLARE(0x6d61600, internal_6d61600, public_6d61600);
/* CHUNK of public_6d0be50 */
extern "C" NAKED register_t __cdecl internal_6d61600()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2088]
        jmp public_6cecb50
        public_6d6160b : nop
        mov eax, offset public_6d7222c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61600)
        ASM_EXPORT_ENTRY_SINGLE(0x6d6160b, public_6d6160b)
    }
}

#undef public_6d6160b

#pragma init_seg(compiler)
extern "C" void const* const public_6d6160b = __AsmFindLabelExport(&internal_6d61600, 0x6d6160b);
