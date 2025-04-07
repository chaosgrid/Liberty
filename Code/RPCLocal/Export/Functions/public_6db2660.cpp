#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db266b _public_6db266b

PROC_DECLARE(0x6db2660, internal_6db2660, public_6db2660);
/* CHUNK of public_6d91580 */
extern "C" NAKED register_t __cdecl internal_6db2660()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6db1dc2
        pop ecx
        ret 
        public_6db266b : nop
        mov eax, offset public_6db6e50
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2660)
        ASM_EXPORT_ENTRY_SINGLE(0x6db266b, public_6db266b)
    }
}

#undef public_6db266b

#pragma init_seg(compiler)
extern "C" void const* const public_6db266b = __AsmFindLabelExport(&internal_6db2660, 0x6db266b);
