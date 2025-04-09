#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c465b _public_5c465b

PROC_DECLARE(0x5c4650, internal_5c4650, public_5c4650);
/* CHUNK of public_58c120 */
extern "C" NAKED register_t __cdecl internal_5c4650()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c465b : nop
        mov eax, offset public_5fe304
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4650)
        ASM_EXPORT_ENTRY_SINGLE(0x5c465b, public_5c465b)
    }
}

#undef public_5c465b

#pragma init_seg(compiler)
extern "C" void const* const public_5c465b = __AsmFindLabelExport(&internal_5c4650, 0x5c465b);
