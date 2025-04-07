#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4424f0);
CLANG_FORWARD_PROC_SYMBOL(public_45a460);
CLANG_FORWARD_PROC_SYMBOL(public_488970);
CLANG_FORWARD_PROC_SYMBOL(public_4bbfb0);
CLANG_FORWARD_PROC_SYMBOL(public_4bc830);
CLANG_FORWARD_PROC_SYMBOL(public_564b10);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a8260);
CLANG_FORWARD_PROC_SYMBOL(public_5b2c50);

#define public_4bc142 _public_4bc142
#define public_4bc15c _public_4bc15c
#define public_4bc176 _public_4bc176
#define public_4bc19d _public_4bc19d
#define public_4bc1c4 _public_4bc1c4
#define public_4bc1e9 _public_4bc1e9
#define public_4bc223 _public_4bc223
#define public_4bc256 _public_4bc256
#define public_4bc28e _public_4bc28e

PROC_DECLARE(0x4bc110, internal_4bc110, public_4bc110);
extern "C" NAKED register_t __cdecl internal_4bc110()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0x26
        push esi
        mov esi, ecx
        jne public_4bc28e
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+0x330]
        jne public_4bc142
        call public_45a460
        push 1
        call public_4424f0
        add esp, 4
        mov eax, 1
        pop esi
        ret 0xC
        public_4bc142 : nop
        cmp eax, dword ptr ds : [esi+0x36C]
        jne public_4bc15c
        push 1
        mov ecx, esi
        call public_4bbfb0
        mov eax, 1
        pop esi
        ret 0xC
        public_4bc15c : nop
        cmp eax, dword ptr ds : [esi+0x374]
        jne public_4bc176
        push 0
        mov ecx, esi
        call public_4bbfb0
        mov eax, 1
        pop esi
        ret 0xC
        public_4bc176 : nop
        cmp eax, dword ptr ds : [esi+0x33C]
        jne public_4bc19d
        call public_45a460
        push 1
        call public_4424f0
        add esp, 4
        mov ecx, esi
        call public_4bc830
        mov eax, 1
        pop esi
        ret 0xC
        public_4bc19d : nop
        cmp eax, dword ptr ds : [esi+0x340]
        jne public_4bc1c4
        call public_45a460
        push 1
        call public_4424f0
        push 3
        call public_488970
        add esp, 8
        mov eax, 1
        pop esi
        ret 0xC
        public_4bc1c4 : nop
        cmp eax, dword ptr ds : [esi+0x344]
        jne public_4bc1e9
        call public_45a460
        push 1
        call public_4424f0
        add esp, 4
        call public_5b2c50
        mov eax, 1
        pop esi
        ret 0xC
        public_4bc1e9 : nop
        cmp eax, dword ptr ds : [esi+0x354]
        jne public_4bc223
        call public_45a460
        push 1
        call public_4424f0
        push 4
        mov byte ptr ds : [public_66d35a], 1
        call public_564b10
        push 0
        push 0xC5
        call public_5763b0
        add esp, 0x10
        mov eax, 1
        pop esi
        ret 0xC
        public_4bc223 : nop
        cmp eax, dword ptr ds : [esi+0x358]
        jne public_4bc256
        call public_45a460
        push 1
        call public_4424f0
        push 2
        call public_564b10
        push 0
        push 0xC5
        call public_5763b0
        add esp, 0x10
        mov eax, 1
        pop esi
        ret 0xC
        public_4bc256 : nop
        cmp eax, dword ptr ds : [esi+0x35C]
        jne public_4bc28e
        call public_45a460
        push 1
        call public_4424f0
        call public_5a8260
        push 3
        call public_564b10
        push 0
        push 0xC5
        call public_5763b0
        add esp, 0x10
        mov eax, 1
        pop esi
        ret 0xC
        public_4bc28e : nop
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x4bc110)
    }
}

#undef public_4bc142
#undef public_4bc15c
#undef public_4bc176
#undef public_4bc19d
#undef public_4bc1c4
#undef public_4bc1e9
#undef public_4bc223
#undef public_4bc256
#undef public_4bc28e
