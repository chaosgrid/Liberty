#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafd8b _public_6fafd8b

PROC_DECLARE(0x6fafd80, internal_6fafd80, public_6fafd80);
/* CHUNK of public_6f6c250 */
extern "C" NAKED register_t __cdecl internal_6fafd80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x94]
        jmp public_6eec8d0
        public_6fafd8b : nop
        mov eax, offset public_6fc4ec8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafd80)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafd8b, public_6fafd8b)
    }
}

#undef public_6fafd8b

#pragma init_seg(compiler)
extern "C" void const* const public_6fafd8b = __AsmFindLabelExport(&internal_6fafd80, 0x6fafd8b);
