#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb176b _public_6fb176b

PROC_DECLARE(0x6fb1760, internal_6fb1760, public_6fb1760);
/* CHUNK of public_6f98010 */
extern "C" NAKED register_t __cdecl internal_6fb1760()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x88]
        jmp public_6eec8d0
        public_6fb176b : nop
        mov eax, offset public_6fc6d44
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1760)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb176b, public_6fb176b)
    }
}

#undef public_6fb176b

#pragma init_seg(compiler)
extern "C" void const* const public_6fb176b = __AsmFindLabelExport(&internal_6fb1760, 0x6fb176b);
