#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bdfab _public_5bdfab

PROC_DECLARE(0x5bdfa0, internal_5bdfa0, public_5bdfa0);
/* CHUNK of public_4d46a0 */
extern "C" NAKED register_t __cdecl internal_5bdfa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bdfab : nop
        mov eax, offset public_5f8338
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bdfa0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bdfab, public_5bdfab)
    }
}

#undef public_5bdfab

#pragma init_seg(compiler)
extern "C" void const* const public_5bdfab = __AsmFindLabelExport(&internal_5bdfa0, 0x5bdfab);
