#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faefa8 _public_6faefa8

PROC_DECLARE(0x6faefa0, internal_6faefa0, public_6faefa0);
/* CHUNK of public_6f47ee0 */
extern "C" NAKED register_t __cdecl internal_6faefa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6faefa8 : nop
        mov eax, offset public_6fc3f74
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faefa0)
        ASM_EXPORT_ENTRY_SINGLE(0x6faefa8, public_6faefa8)
    }
}

#undef public_6faefa8

#pragma init_seg(compiler)
extern "C" void const* const public_6faefa8 = __AsmFindLabelExport(&internal_6faefa0, 0x6faefa8);
