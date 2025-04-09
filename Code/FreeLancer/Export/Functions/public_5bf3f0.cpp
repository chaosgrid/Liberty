#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf3fb _public_5bf3fb

PROC_DECLARE(0x5bf3f0, internal_5bf3f0, public_5bf3f0);
/* CHUNK of public_4f6810 */
extern "C" NAKED register_t __cdecl internal_5bf3f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x34]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bf3fb : nop
        mov eax, offset public_5f9340
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf3f0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bf3fb, public_5bf3fb)
    }
}

#undef public_5bf3fb

#pragma init_seg(compiler)
extern "C" void const* const public_5bf3fb = __AsmFindLabelExport(&internal_5bf3f0, 0x5bf3fb);
