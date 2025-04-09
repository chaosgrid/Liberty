#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5437a0);

#define public_5437c3 _public_5437c3
#define public_5437c5 _public_5437c5

PROC_DECLARE(0x5437a0, internal_5437a0, public_5437a0);
extern "C" NAKED register_t __cdecl internal_5437a0()
{
    __asm
    {
        test ecx, ecx
        je public_5437c3
        lea eax, ds:[ecx+0xC]
        test eax, eax
        je public_5437c3
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5437c3
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_5437c5
        public_5437c3 : nop
        xor eax, eax
        public_5437c5 : nop
        mov ecx, eax
        jmp dword ptr ds : [public_5c6abc]
        UNREACHABLE_TRAP(0x5437a0)
    }
}

#undef public_5437c3
#undef public_5437c5
