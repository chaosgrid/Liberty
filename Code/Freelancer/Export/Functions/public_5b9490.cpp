#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b949b _public_5b949b

PROC_DECLARE(0x5b9490, internal_5b9490, public_5b9490);
/* CHUNK of public_43c1b0 */
extern "C" NAKED register_t __cdecl internal_5b9490()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b949b : nop
        mov eax, offset public_5f34c4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9490)
        ASM_EXPORT_ENTRY_SINGLE(0x5b949b, public_5b949b)
    }
}

#undef public_5b949b

#pragma init_seg(compiler)
extern "C" void const* const public_5b949b = __AsmFindLabelExport(&internal_5b9490, 0x5b949b);
