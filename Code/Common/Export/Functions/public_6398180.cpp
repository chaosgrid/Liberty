#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639818b _public_639818b

PROC_DECLARE(0x6398180, internal_6398180, public_6398180);
/* CHUNK of public_63596b0 */
extern "C" NAKED register_t __cdecl internal_6398180()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x414]
        jmp public_63449d0
        public_639818b : nop
        mov eax, offset public_63b25d8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398180)
        ASM_EXPORT_ENTRY_SINGLE(0x639818b, public_639818b)
    }
}

#undef public_639818b

#pragma init_seg(compiler)
extern "C" void const* const public_639818b = __AsmFindLabelExport(&internal_6398180, 0x639818b);
