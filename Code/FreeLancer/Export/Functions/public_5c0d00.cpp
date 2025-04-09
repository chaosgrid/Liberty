#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0d0b _public_5c0d0b

PROC_DECLARE(0x5c0d00, internal_5c0d00, public_5c0d00);
/* CHUNK of public_540c30 */
extern "C" NAKED register_t __cdecl internal_5c0d00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c0d0b : nop
        mov eax, offset public_5faf58
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0d00)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0d0b, public_5c0d0b)
    }
}

#undef public_5c0d0b

#pragma init_seg(compiler)
extern "C" void const* const public_5c0d0b = __AsmFindLabelExport(&internal_5c0d00, 0x5c0d0b);
