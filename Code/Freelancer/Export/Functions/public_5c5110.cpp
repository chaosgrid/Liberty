#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c511b _public_5c511b

PROC_DECLARE(0x5c5110, internal_5c5110, public_5c5110);
/* CHUNK of public_5a4d00 */
extern "C" NAKED register_t __cdecl internal_5c5110()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c511b : nop
        mov eax, offset public_5fef40
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5110)
        ASM_EXPORT_ENTRY_SINGLE(0x5c511b, public_5c511b)
    }
}

#undef public_5c511b

#pragma init_seg(compiler)
extern "C" void const* const public_5c511b = __AsmFindLabelExport(&internal_5c5110, 0x5c511b);
