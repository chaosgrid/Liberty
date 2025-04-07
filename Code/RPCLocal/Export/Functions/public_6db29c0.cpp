#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db29c9 _public_6db29c9

PROC_DECLARE(0x6db29c0, internal_6db29c0, public_6db29c0);
/* CHUNK of public_6da2980 */
extern "C" NAKED register_t __cdecl internal_6db29c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_6db3168]
        public_6db29c9 : nop
        mov eax, offset public_6db72b4
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db29c0)
        ASM_EXPORT_ENTRY_SINGLE(0x6db29c9, public_6db29c9)
    }
}

#undef public_6db29c9

#pragma init_seg(compiler)
extern "C" void const* const public_6db29c9 = __AsmFindLabelExport(&internal_6db29c0, 0x6db29c9);
