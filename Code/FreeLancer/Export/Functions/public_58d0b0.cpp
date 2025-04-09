#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58d0b0);

#define public_58d0dc _public_58d0dc

PROC_DECLARE(0x58d0b0, internal_58d0b0, public_58d0b0);
extern "C" NAKED register_t __cdecl internal_58d0b0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x4A4]
        test edx, edx
        je public_58d0dc
        mov eax, dword ptr ds : [ecx+0x4A8]
        sub eax, edx
        mov edx, dword ptr ss : [esp+4]
        sar eax, 2
        cmp edx, eax
        jae public_58d0dc
        mov ecx, dword ptr ds : [ecx+0x4C4]
        lea eax, ds:[edx+edx*2]
        lea eax, ds:[ecx+eax*4]
        ret 4
        public_58d0dc : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x58d0b0)
    }
}

#undef public_58d0dc
