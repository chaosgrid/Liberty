#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db264b _public_6db264b

PROC_DECLARE(0x6db2640, internal_6db2640, public_6db2640);
/* CHUNK of public_6d913f0 */
extern "C" NAKED register_t __cdecl internal_6db2640()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_6db1dc2
        pop ecx
        ret 
        public_6db264b : nop
        mov eax, offset public_6db6e2c
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2640)
        ASM_EXPORT_ENTRY_SINGLE(0x6db264b, public_6db264b)
    }
}

#undef public_6db264b

#pragma init_seg(compiler)
extern "C" void const* const public_6db264b = __AsmFindLabelExport(&internal_6db2640, 0x6db264b);
