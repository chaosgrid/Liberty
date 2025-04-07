#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d84270);
CLANG_FORWARD_PROC_SYMBOL(public_6d84290);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db24bb _public_6db24bb
#define public_6db24c6 _public_6db24c6

PROC_DECLARE(0x6db24b0, internal_6db24b0, public_6db24b0);
/* CHUNK of public_6d86a70 */
extern "C" NAKED register_t __cdecl internal_6db24b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x478]
        jmp public_6d84270
        public_6db24bb : nop
        lea ecx, ss:[ebp-0x478]
        jmp public_6d84290
        public_6db24c6 : nop
        mov eax, offset public_6db6bcc
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db24b0)
        ASM_EXPORT_ENTRY_FIRST(0x6db24bb, public_6db24bb)
        ASM_EXPORT_ENTRY_LAST(0x6db24c6, public_6db24c6)
    }
}

#undef public_6db24bb
#undef public_6db24c6

#pragma init_seg(compiler)
extern "C" void const* const public_6db24bb = __AsmFindLabelExport(&internal_6db24b0, 0x6db24bb);
extern "C" void const* const public_6db24c6 = __AsmFindLabelExport(&internal_6db24b0, 0x6db24c6);
