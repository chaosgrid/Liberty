#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafc88 _public_6fafc88

PROC_DECLARE(0x6fafc80, internal_6fafc80, public_6fafc80);
/* CHUNK of public_6f62750 */
extern "C" NAKED register_t __cdecl internal_6fafc80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fafc88 : nop
        mov eax, offset public_6fc4d94
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafc80)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafc88, public_6fafc88)
    }
}

#undef public_6fafc88

#pragma init_seg(compiler)
extern "C" void const* const public_6fafc88 = __AsmFindLabelExport(&internal_6fafc80, 0x6fafc88);
