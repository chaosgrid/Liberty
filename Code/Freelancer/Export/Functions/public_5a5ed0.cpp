#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_547550);

#define public_5a5f02 _public_5a5f02
#define public_5a5f15 _public_5a5f15

PROC_DECLARE(0x5a5ed0, internal_5a5ed0, public_5a5ed0);
extern "C" NAKED register_t __cdecl internal_5a5ed0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push 1
        push esi
        call public_5416c0
        add esp, 8
        test eax, eax
        jne public_5a5f02
        push 2
        push esi
        call public_5416c0
        add esp, 8
        test eax, eax
        jne public_5a5f02
        push 7
        push esi
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_5a5f15
        public_5a5f02 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [public_673344]
        push ecx
        push edx
        mov ecx, eax
        call public_547550
        public_5a5f15 : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x5a5ed0)
    }
}

#undef public_5a5f02
#undef public_5a5f15
