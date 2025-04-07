#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da36f0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db29f1 _public_6db29f1

PROC_DECLARE(0x6db29e0, internal_6db29e0, public_6db29e0);
/* CHUNK of public_6da3590 */
extern "C" NAKED register_t __cdecl internal_6db29e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6da36f0
        add esp, 8
        ret 
        public_6db29f1 : nop
        mov eax, offset public_6db72d8
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db29e0)
        ASM_EXPORT_ENTRY_SINGLE(0x6db29f1, public_6db29f1)
    }
}

#undef public_6db29f1

#pragma init_seg(compiler)
extern "C" void const* const public_6db29f1 = __AsmFindLabelExport(&internal_6db29e0, 0x6db29f1);
