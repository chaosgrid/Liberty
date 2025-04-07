#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db24d9 _public_6db24d9
#define public_6db24e1 _public_6db24e1

PROC_DECLARE(0x6db24d0, internal_6db24d0, public_6db24d0);
/* CHUNK of public_6d87ec0 */
extern "C" NAKED register_t __cdecl internal_6db24d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp dword ptr ds : [public_6db30a4]
        public_6db24d9 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_6d91340
        public_6db24e1 : nop
        mov eax, offset public_6db6bf8
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db24d0)
        ASM_EXPORT_ENTRY_FIRST(0x6db24d9, public_6db24d9)
        ASM_EXPORT_ENTRY_LAST(0x6db24e1, public_6db24e1)
    }
}

#undef public_6db24d9
#undef public_6db24e1

#pragma init_seg(compiler)
extern "C" void const* const public_6db24d9 = __AsmFindLabelExport(&internal_6db24d0, 0x6db24d9);
extern "C" void const* const public_6db24e1 = __AsmFindLabelExport(&internal_6db24d0, 0x6db24e1);
