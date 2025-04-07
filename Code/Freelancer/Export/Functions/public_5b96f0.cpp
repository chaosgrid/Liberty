#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b96fb _public_5b96fb

PROC_DECLARE(0x5b96f0, internal_5b96f0, public_5b96f0);
/* CHUNK of public_442a10 */
extern "C" NAKED register_t __cdecl internal_5b96f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b96fb : nop
        mov eax, offset public_5f36b0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b96f0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b96fb, public_5b96fb)
    }
}

#undef public_5b96fb

#pragma init_seg(compiler)
extern "C" void const* const public_5b96fb = __AsmFindLabelExport(&internal_5b96f0, 0x5b96fb);
