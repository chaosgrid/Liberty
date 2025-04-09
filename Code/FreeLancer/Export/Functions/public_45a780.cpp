#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a780);
CLANG_FORWARD_PROC_SYMBOL(public_45c7a0);

#define public_45a799 _public_45a799

PROC_DECLARE(0x45a780, internal_45a780, public_45a780);
extern "C" NAKED register_t __cdecl internal_45a780()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_66d3f0]
        test ecx, ecx
        je public_45a799
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push eax
        push edx
        call public_45c7a0
        public_45a799 : nop
        ret 
        UNREACHABLE_TRAP(0x45a780)
    }
}

#undef public_45a799
