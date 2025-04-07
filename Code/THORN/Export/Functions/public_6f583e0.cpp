#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23610);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f583e8 _public_6f583e8

PROC_DECLARE(0x6f583e0, internal_6f583e0, public_6f583e0);
/* CHUNK of public_6f21ca0 */
extern "C" NAKED register_t __cdecl internal_6f583e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6f23610
        public_6f583e8 : nop
        mov eax, offset public_6f5b574
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f583e0)
        ASM_EXPORT_ENTRY_SINGLE(0x6f583e8, public_6f583e8)
    }
}

#undef public_6f583e8

#pragma init_seg(compiler)
extern "C" void const* const public_6f583e8 = __AsmFindLabelExport(&internal_6f583e0, 0x6f583e8);
