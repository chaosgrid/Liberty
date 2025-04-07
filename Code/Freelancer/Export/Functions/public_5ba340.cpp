#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba34b _public_5ba34b

PROC_DECLARE(0x5ba340, internal_5ba340, public_5ba340);
/* CHUNK of public_45dd50 */
extern "C" NAKED register_t __cdecl internal_5ba340()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5ba34b : nop
        mov eax, offset public_5f4730
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba340)
        ASM_EXPORT_ENTRY_SINGLE(0x5ba34b, public_5ba34b)
    }
}

#undef public_5ba34b

#pragma init_seg(compiler)
extern "C" void const* const public_5ba34b = __AsmFindLabelExport(&internal_5ba340, 0x5ba34b);
