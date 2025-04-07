#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabd88 _public_6fabd88

PROC_DECLARE(0x6fabd80, internal_6fabd80, public_6fabd80);
/* CHUNK of public_6eeb870 */
extern "C" NAKED register_t __cdecl internal_6fabd80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fabd88 : nop
        mov eax, offset public_6fc096c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabd80)
        ASM_EXPORT_ENTRY_SINGLE(0x6fabd88, public_6fabd88)
    }
}

#undef public_6fabd88

#pragma init_seg(compiler)
extern "C" void const* const public_6fabd88 = __AsmFindLabelExport(&internal_6fabd80, 0x6fabd88);
