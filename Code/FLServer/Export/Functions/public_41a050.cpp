#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d530);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a05b _public_41a05b

PROC_DECLARE(0x41a050, internal_41a050, public_41a050);
/* CHUNK of public_40c4d0 */
extern "C" NAKED register_t __cdecl internal_41a050()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x820]
        jmp public_40d530
        public_41a05b : nop
        mov eax, offset public_41f1b0
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a050)
        ASM_EXPORT_ENTRY_SINGLE(0x41a05b, public_41a05b)
    }
}

#undef public_41a05b

#pragma init_seg(compiler)
extern "C" void const* const public_41a05b = __AsmFindLabelExport(&internal_41a050, 0x41a05b);
