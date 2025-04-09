#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b170);
CLANG_FORWARD_PROC_SYMBOL(public_473cb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4a80);
CLANG_FORWARD_PROC_SYMBOL(public_4c4bc0);
CLANG_FORWARD_PROC_SYMBOL(public_564b00);
CLANG_FORWARD_PROC_SYMBOL(public_5a8080);
CLANG_FORWARD_PROC_SYMBOL(public_5a8770);
CLANG_FORWARD_PROC_SYMBOL(public_5a9990);
CLANG_FORWARD_PROC_SYMBOL(public_5aa440);
CLANG_FORWARD_PROC_SYMBOL(public_5b6fd0);

#define public_5a87a4 _public_5a87a4
#define public_5a87c0 _public_5a87c0
#define public_5a87ca _public_5a87ca
#define public_5a87d2 _public_5a87d2
#define public_5a87da _public_5a87da
#define public_5a881f _public_5a881f
#define public_5a8825 _public_5a8825

PROC_DECLARE(0x5a8770, internal_5a8770, public_5a8770);
extern "C" NAKED register_t __cdecl internal_5a8770()
{
    __asm
    {
        push ebx
        call dword ptr ds : [public_5c60f8]
        call public_4c4a80
        mov eax, dword ptr ss : [esp+8]
        push eax
        xor ebx, ebx
        call public_5a8080
        add esp, 4
        test al, al
        je public_5a87da
        push 1
        mov ecx, offset public_67e7b8
        call public_5a9990
        cmp eax, 1
        jne public_5a87a4
        mov al, al
        pop ebx
        ret 
        public_5a87a4 : nop
        sub eax, 4
        je public_5a87ca
        sub eax, 2
        je public_5a87c0
        cmp byte ptr ds : [public_67ecbe], bl
        jne public_5a87da
        push ebx
        push 1
        push 0x73D
        jmp public_5a87d2
        public_5a87c0 : nop
        push ebx
        push 1
        push 0x73F
        jmp public_5a87d2
        public_5a87ca : nop
        push ebx
        push 1
        push 0x73E
        public_5a87d2 : nop
        call public_473cb0
        add esp, 0xC
        public_5a87da : nop
        call public_564b00
        test al, al
        jne public_5a8825
        call public_46b170
        cmp dword ptr ds : [public_67ecd0], ebx
        je public_5a881f
        mov ecx, offset public_67e7b8
        call public_5aa440
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [public_67ecd0]
        push eax
        call public_5b6fd0
        add esp, 4
        mov dword ptr ds : [public_67ecd0], ebx
        mov dword ptr ds : [public_67ecd4], ebx
        public_5a881f : nop
        mov dword ptr ds : [public_673344], ebx
        public_5a8825 : nop
        call public_4c4bc0
        call dword ptr ds : [public_5c6c90]
        mov al, bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5a8770)
    }
}

#undef public_5a87a4
#undef public_5a87c0
#undef public_5a87ca
#undef public_5a87d2
#undef public_5a87da
#undef public_5a881f
#undef public_5a8825
