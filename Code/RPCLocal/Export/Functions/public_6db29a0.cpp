#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da2b10);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db29a9 _public_6db29a9
#define public_6db29b1 _public_6db29b1

PROC_DECLARE(0x6db29a0, internal_6db29a0, public_6db29a0);
/* CHUNK of public_6da2820 */
extern "C" NAKED register_t __cdecl internal_6db29a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_6db3168]
        public_6db29a9 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6da2b10
        public_6db29b1 : nop
        mov eax, offset public_6db7290
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db29a0)
        ASM_EXPORT_ENTRY_FIRST(0x6db29a9, public_6db29a9)
        ASM_EXPORT_ENTRY_LAST(0x6db29b1, public_6db29b1)
    }
}

#undef public_6db29a9
#undef public_6db29b1

#pragma init_seg(compiler)
extern "C" void const* const public_6db29a9 = __AsmFindLabelExport(&internal_6db29a0, 0x6db29a9);
extern "C" void const* const public_6db29b1 = __AsmFindLabelExport(&internal_6db29a0, 0x6db29b1);
