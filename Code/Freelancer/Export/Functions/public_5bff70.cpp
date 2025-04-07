#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bff7b _public_5bff7b

PROC_DECLARE(0x5bff70, internal_5bff70, public_5bff70);
/* CHUNK of public_51ff50 */
extern "C" NAKED register_t __cdecl internal_5bff70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bff7b : nop
        mov eax, offset public_5f9f50
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bff70)
        ASM_EXPORT_ENTRY_SINGLE(0x5bff7b, public_5bff7b)
    }
}

#undef public_5bff7b

#pragma init_seg(compiler)
extern "C" void const* const public_5bff7b = __AsmFindLabelExport(&internal_5bff70, 0x5bff7b);
