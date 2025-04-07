#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be13b _public_5be13b

PROC_DECLARE(0x5be130, internal_5be130, public_5be130);
/* CHUNK of public_4d61f0 */
extern "C" NAKED register_t __cdecl internal_5be130()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5be13b : nop
        mov eax, offset public_5f84c4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be130)
        ASM_EXPORT_ENTRY_SINGLE(0x5be13b, public_5be13b)
    }
}

#undef public_5be13b

#pragma init_seg(compiler)
extern "C" void const* const public_5be13b = __AsmFindLabelExport(&internal_5be130, 0x5be13b);
