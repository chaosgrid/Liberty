#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec6960);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faaeeb _public_6faaeeb

PROC_DECLARE(0x6faaee0, internal_6faaee0, public_6faaee0);
/* CHUNK of public_6ec6580 */
extern "C" NAKED register_t __cdecl internal_6faaee0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x104]
        jmp public_6ec6960
        public_6faaeeb : nop
        mov eax, offset public_6fbf160
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faaee0)
        ASM_EXPORT_ENTRY_SINGLE(0x6faaeeb, public_6faaeeb)
    }
}

#undef public_6faaeeb

#pragma init_seg(compiler)
extern "C" void const* const public_6faaeeb = __AsmFindLabelExport(&internal_6faaee0, 0x6faaeeb);
