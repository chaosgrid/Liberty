#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bca5b _public_5bca5b

PROC_DECLARE(0x5bca50, internal_5bca50, public_5bca50);
/* CHUNK of public_4992b0 */
extern "C" NAKED register_t __cdecl internal_5bca50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x128]
        jmp public_405840
        public_5bca5b : nop
        mov eax, offset public_5f6c64
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bca50)
        ASM_EXPORT_ENTRY_SINGLE(0x5bca5b, public_5bca5b)
    }
}

#undef public_5bca5b

#pragma init_seg(compiler)
extern "C" void const* const public_5bca5b = __AsmFindLabelExport(&internal_5bca50, 0x5bca5b);
