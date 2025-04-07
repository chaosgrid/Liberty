#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85230);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db2518 _public_6db2518

PROC_DECLARE(0x6db2510, internal_6db2510, public_6db2510);
/* CHUNK of public_6d88d70 */
extern "C" NAKED register_t __cdecl internal_6db2510()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6d85230
        public_6db2518 : nop
        mov eax, offset public_6db6c90
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2510)
        ASM_EXPORT_ENTRY_SINGLE(0x6db2518, public_6db2518)
    }
}

#undef public_6db2518

#pragma init_seg(compiler)
extern "C" void const* const public_6db2518 = __AsmFindLabelExport(&internal_6db2510, 0x6db2518);
