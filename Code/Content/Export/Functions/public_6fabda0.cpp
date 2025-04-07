#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabda8 _public_6fabda8
#define public_6fabdb0 _public_6fabdb0

PROC_DECLARE(0x6fabda0, internal_6fabda0, public_6fabda0);
/* CHUNK of public_6eec550 */
extern "C" NAKED register_t __cdecl internal_6fabda0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp public_6eec8f0
        public_6fabda8 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_6eec9b0
        public_6fabdb0 : nop
        mov eax, offset public_6fc0998
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabda0)
        ASM_EXPORT_ENTRY_FIRST(0x6fabda8, public_6fabda8)
        ASM_EXPORT_ENTRY_LAST(0x6fabdb0, public_6fabdb0)
    }
}

#undef public_6fabda8
#undef public_6fabdb0

#pragma init_seg(compiler)
extern "C" void const* const public_6fabda8 = __AsmFindLabelExport(&internal_6fabda0, 0x6fabda8);
extern "C" void const* const public_6fabdb0 = __AsmFindLabelExport(&internal_6fabda0, 0x6fabdb0);
