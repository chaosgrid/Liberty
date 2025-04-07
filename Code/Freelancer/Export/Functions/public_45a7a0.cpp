#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a7a0);
CLANG_FORWARD_PROC_SYMBOL(public_45c820);

#define public_45a7ad _public_45a7ad

PROC_DECLARE(0x45a7a0, internal_45a7a0, public_45a7a0);
extern "C" NAKED register_t __cdecl internal_45a7a0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_66d3f0]
        test ecx, ecx
        jne public_45a7ad
        xor eax, eax
        ret 
        public_45a7ad : nop
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_45c820
        ret 
        UNREACHABLE_TRAP(0x45a7a0)
    }
}

#undef public_45a7ad
