#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faef88 _public_6faef88

PROC_DECLARE(0x6faef80, internal_6faef80, public_6faef80);
/* CHUNK of public_6f481f0 */
extern "C" NAKED register_t __cdecl internal_6faef80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x5C]
        jmp public_6eec8d0
        public_6faef88 : nop
        mov eax, offset public_6fc3f2c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faef80)
        ASM_EXPORT_ENTRY_SINGLE(0x6faef88, public_6faef88)
    }
}

#undef public_6faef88

#pragma init_seg(compiler)
extern "C" void const* const public_6faef88 = __AsmFindLabelExport(&internal_6faef80, 0x6faef88);
