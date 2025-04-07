#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9a2b _public_5b9a2b

PROC_DECLARE(0x5b9a20, internal_5b9a20, public_5b9a20);
/* CHUNK of public_448540 */
extern "C" NAKED register_t __cdecl internal_5b9a20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9a2b : nop
        mov eax, offset public_5f3aa4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9a20)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9a2b, public_5b9a2b)
    }
}

#undef public_5b9a2b

#pragma init_seg(compiler)
extern "C" void const* const public_5b9a2b = __AsmFindLabelExport(&internal_5b9a20, 0x5b9a2b);
