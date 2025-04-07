#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec5130);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faaec8 _public_6faaec8

PROC_DECLARE(0x6faaec0, internal_6faaec0, public_6faaec0);
/* CHUNK of public_6ec4f00 */
extern "C" NAKED register_t __cdecl internal_6faaec0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x54]
        jmp public_6ec5130
        public_6faaec8 : nop
        mov eax, offset public_6fbf088
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faaec0)
        ASM_EXPORT_ENTRY_SINGLE(0x6faaec8, public_6faaec8)
    }
}

#undef public_6faaec8

#pragma init_seg(compiler)
extern "C" void const* const public_6faaec8 = __AsmFindLabelExport(&internal_6faaec0, 0x6faaec8);
