#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac768 _public_6fac768

PROC_DECLARE(0x6fac760, internal_6fac760, public_6fac760);
/* CHUNK of public_6efac00 */
extern "C" NAKED register_t __cdecl internal_6fac760()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_6eec8d0
        public_6fac768 : nop
        mov eax, offset public_6fc13f8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac760)
        ASM_EXPORT_ENTRY_SINGLE(0x6fac768, public_6fac768)
    }
}

#undef public_6fac768

#pragma init_seg(compiler)
extern "C" void const* const public_6fac768 = __AsmFindLabelExport(&internal_6fac760, 0x6fac768);
