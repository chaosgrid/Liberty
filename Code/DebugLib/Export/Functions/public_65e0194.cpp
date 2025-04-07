#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d38f0);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65e019c _public_65e019c

PROC_DECLARE(0x65e0194, internal_65e0194, public_65e0194);
/* CHUNK of public_65d6cc3 */
extern "C" NAKED register_t __cdecl internal_65e0194()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_65d38f0
        public_65e019c : nop
        mov eax, offset public_65e23e8
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65e0194)
        ASM_EXPORT_ENTRY_SINGLE(0x65e019c, public_65e019c)
    }
}

#undef public_65e019c

#pragma init_seg(compiler)
extern "C" void const* const public_65e019c = __AsmFindLabelExport(&internal_65e0194, 0x65e019c);
