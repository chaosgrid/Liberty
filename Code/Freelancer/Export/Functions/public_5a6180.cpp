#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c2380);
CLANG_FORWARD_PROC_SYMBOL(public_4c2620);
CLANG_FORWARD_PROC_SYMBOL(public_4c2690);

#define public_5a61a6 _public_5a61a6
#define public_5a61ba _public_5a61ba

PROC_DECLARE(0x5a6180, internal_5a6180, public_5a6180);
extern "C" NAKED register_t __cdecl internal_5a6180()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6724b4]
        test ecx, ecx
        je public_5a61ba
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [public_673378]
        je public_5a61a6
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        call public_4c2380
        mov ecx, dword ptr ds : [public_6724b4]
        public_5a61a6 : nop
        push 0
        call public_4c2620
        mov ecx, dword ptr ds : [public_6724b4]
        push 0
        call public_4c2690
        public_5a61ba : nop
        ret 0xC
        UNREACHABLE_TRAP(0x5a6180)
    }
}

#undef public_5a61a6
#undef public_5a61ba
