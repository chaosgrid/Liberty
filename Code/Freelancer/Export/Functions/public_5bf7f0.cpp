#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf7fb _public_5bf7fb

PROC_DECLARE(0x5bf7f0, internal_5bf7f0, public_5bf7f0);
/* CHUNK of public_502b00 */
extern "C" NAKED register_t __cdecl internal_5bf7f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bf7fb : nop
        mov eax, offset public_5f9768
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf7f0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bf7fb, public_5bf7fb)
    }
}

#undef public_5bf7fb

#pragma init_seg(compiler)
extern "C" void const* const public_5bf7fb = __AsmFindLabelExport(&internal_5bf7f0, 0x5bf7fb);
