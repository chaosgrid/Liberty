#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc41b _public_5bc41b

PROC_DECLARE(0x5bc410, internal_5bc410, public_5bc410);
/* CHUNK of public_48c770 */
extern "C" NAKED register_t __cdecl internal_5bc410()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bc41b : nop
        mov eax, offset public_5f6804
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc410)
        ASM_EXPORT_ENTRY_SINGLE(0x5bc41b, public_5bc41b)
    }
}

#undef public_5bc41b

#pragma init_seg(compiler)
extern "C" void const* const public_5bc41b = __AsmFindLabelExport(&internal_5bc410, 0x5bc41b);
