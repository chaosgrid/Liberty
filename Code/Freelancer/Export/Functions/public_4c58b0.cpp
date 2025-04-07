#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c58b0);

#define public_4c58d4 _public_4c58d4

PROC_DECLARE(0x4c58b0, internal_4c58b0, public_4c58b0);
extern "C" NAKED register_t __cdecl internal_4c58b0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        jl public_4c58d4
        mov ecx, dword ptr ds : [public_6728cc]
        test ecx, ecx
        je public_4c58d4
        mov eax, dword ptr ds : [public_6728d0]
        sub eax, ecx
        sar eax, 2
        cmp edx, eax
        jae public_4c58d4
        mov eax, dword ptr ds : [ecx+edx*4]
        ret 
        public_4c58d4 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x4c58b0)
    }
}

#undef public_4c58d4
