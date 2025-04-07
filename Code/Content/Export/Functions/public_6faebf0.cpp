#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faebf8 _public_6faebf8

PROC_DECLARE(0x6faebf0, internal_6faebf0, public_6faebf0);
/* CHUNK of public_6f34ce0 */
extern "C" NAKED register_t __cdecl internal_6faebf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0x18]
        jmp public_6f28e10
        public_6faebf8 : nop
        mov eax, offset public_6fc3bb0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faebf0)
        ASM_EXPORT_ENTRY_SINGLE(0x6faebf8, public_6faebf8)
    }
}

#undef public_6faebf8

#pragma init_seg(compiler)
extern "C" void const* const public_6faebf8 = __AsmFindLabelExport(&internal_6faebf0, 0x6faebf8);
