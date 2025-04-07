#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635bff0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63988b8 _public_63988b8

PROC_DECLARE(0x63988b0, internal_63988b0, public_63988b0);
/* CHUNK of public_636d650 */
extern "C" NAKED register_t __cdecl internal_63988b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_635bff0
        public_63988b8 : nop
        mov eax, offset public_63b2ee0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63988b0)
        ASM_EXPORT_ENTRY_SINGLE(0x63988b8, public_63988b8)
    }
}

#undef public_63988b8

#pragma init_seg(compiler)
extern "C" void const* const public_63988b8 = __AsmFindLabelExport(&internal_63988b0, 0x63988b8);
