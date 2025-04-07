#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b170);
CLANG_FORWARD_PROC_SYMBOL(public_46b2b0);
CLANG_FORWARD_PROC_SYMBOL(public_473cb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4bc0);
CLANG_FORWARD_PROC_SYMBOL(public_564b00);
CLANG_FORWARD_PROC_SYMBOL(public_5a8840);
CLANG_FORWARD_PROC_SYMBOL(public_5aa440);
CLANG_FORWARD_PROC_SYMBOL(public_5aa510);
CLANG_FORWARD_PROC_SYMBOL(public_5b6fd0);

#define public_5a8850 _public_5a8850
#define public_5a8888 _public_5a8888
#define public_5a888d _public_5a888d
#define public_5a88c6 _public_5a88c6
#define public_5a88ce _public_5a88ce
#define public_5a8914 _public_5a8914
#define public_5a891a _public_5a891a
#define public_5a8929 _public_5a8929
#define public_5a8933 _public_5a8933
#define public_5a893d _public_5a893d
#define public_5a894a _public_5a894a

PROC_DECLARE(0x5a8840, internal_5a8840, public_5a8840);
extern "C" NAKED register_t __cdecl internal_5a8840()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67ecd0]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        jne public_5a8850
        xor al, al
        pop ebx
        ret 
        public_5a8850 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        mov ecx, offset public_67e7b8
        je public_5a8888
        mov byte ptr ds : [public_67e960], bl
        call public_5aa510
        cmp eax, 1
        je public_5a894a
        cmp byte ptr ds : [public_67e969], 2
        jne public_5a888d
        mov byte ptr ds : [public_67e960], 1
        mov ecx, offset public_67e7b8
        public_5a8888 : nop
        call public_5aa510
        public_5a888d : nop
        cmp eax, 1
        je public_5a894a
        cmp eax, 2
        je public_5a88ce
        movzx eax, byte ptr ds : [public_67e969]
        sub eax, ebx
        je public_5a893d
        dec eax
        je public_5a8933
        sub eax, 6
        je public_5a8929
        cmp byte ptr ds : [public_67ecbe], bl
        jne public_5a88ce
        push ebx
        push 1
        push 0x739
        public_5a88c6 : nop
        call public_473cb0
        add esp, 0xC
        public_5a88ce : nop
        call public_564b00
        test al, al
        jne public_5a891a
        call public_46b170
        cmp dword ptr ds : [public_67ecd0], ebx
        je public_5a8914
        mov ecx, offset public_67e7b8
        call public_5aa440
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [public_67ecd0]
        push ecx
        call public_5b6fd0
        add esp, 4
        mov dword ptr ds : [public_67ecd0], ebx
        mov dword ptr ds : [public_67ecd4], ebx
        public_5a8914 : nop
        mov dword ptr ds : [public_673344], ebx
        public_5a891a : nop
        call public_4c4bc0
        call dword ptr ds : [public_5c6c90]
        mov al, bl
        pop ebx
        ret 
        public_5a8929 : nop
        push ebx
        push 1
        push 0x743
        jmp public_5a88c6
        public_5a8933 : nop
        push ebx
        push 1
        push 0x753
        jmp public_5a88c6
        public_5a893d : nop
        push ebx
        push 1
        push 0x742
        jmp public_5a88c6
        public_5a894a : nop
        mov bl, 1
        call public_46b2b0
        mov al, bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5a8840)
    }
}

#undef public_5a8850
#undef public_5a8888
#undef public_5a888d
#undef public_5a88c6
#undef public_5a88ce
#undef public_5a8914
#undef public_5a891a
#undef public_5a8929
#undef public_5a8933
#undef public_5a893d
#undef public_5a894a
