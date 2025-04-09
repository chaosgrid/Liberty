#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c2620);
CLANG_FORWARD_PROC_SYMBOL(public_4c2690);
CLANG_FORWARD_PROC_SYMBOL(public_4c2700);

#define public_5a6126 _public_5a6126
#define public_5a613a _public_5a613a

PROC_DECLARE(0x5a6100, internal_5a6100, public_5a6100);
extern "C" NAKED register_t __cdecl internal_5a6100()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6724b4]
        test ecx, ecx
        je public_5a613a
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [public_673378]
        je public_5a6126
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        call public_4c2700
        mov ecx, dword ptr ds : [public_6724b4]
        public_5a6126 : nop
        push 0
        call public_4c2620
        mov ecx, dword ptr ds : [public_6724b4]
        push 0
        call public_4c2690
        public_5a613a : nop
        ret 0xC
        UNREACHABLE_TRAP(0x5a6100)
    }
}

#undef public_5a6126
#undef public_5a613a
