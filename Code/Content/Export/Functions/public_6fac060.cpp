#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac068 _public_6fac068

PROC_DECLARE(0x6fac060, internal_6fac060, public_6fac060);
/* CHUNK of public_6ef0c90 */
extern "C" NAKED register_t __cdecl internal_6fac060()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fac068 : nop
        mov eax, offset public_6fc0c90
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac060)
        ASM_EXPORT_ENTRY_SINGLE(0x6fac068, public_6fac068)
    }
}

#undef public_6fac068

#pragma init_seg(compiler)
extern "C" void const* const public_6fac068 = __AsmFindLabelExport(&internal_6fac060, 0x6fac068);
