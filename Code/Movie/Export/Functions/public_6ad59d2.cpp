#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad246b);
CLANG_FORWARD_PROC_SYMBOL(public_6ad24de);
CLANG_FORWARD_PROC_SYMBOL(public_6ad24e7);
CLANG_FORWARD_PROC_SYMBOL(public_6ad58fa);
CLANG_FORWARD_PROC_SYMBOL(public_6ad59d2);

#define public_6ad59eb _public_6ad59eb
#define public_6ad59f2 _public_6ad59f2
#define public_6ad5a22 _public_6ad5a22
#define public_6ad5a42 _public_6ad5a42
#define public_6ad5a48 _public_6ad5a48
#define public_6ad5a67 _public_6ad5a67
#define public_6ad5a7c _public_6ad5a7c
#define public_6ad5ab8 _public_6ad5ab8
#define public_6ad5aba _public_6ad5aba
#define public_6ad5ae6 _public_6ad5ae6
#define public_6ad5af1 _public_6ad5af1
#define public_6ad5b13 _public_6ad5b13
#define public_6ad5b1e _public_6ad5b1e
#define public_6ad5b27 _public_6ad5b27
#define public_6ad5b2c _public_6ad5b2c
#define public_6ad5b41 _public_6ad5b41
#define public_6ad5b55 _public_6ad5b55
#define public_6ad5b58 _public_6ad5b58

PROC_DECLARE(0x6ad59d2, internal_6ad59d2, public_6ad59d2);
extern "C" NAKED register_t __cdecl internal_6ad59d2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x414
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp dword ptr ss : [ebp+0x10], edi
        mov dword ptr ss : [ebp-8], edi
        mov dword ptr ss : [ebp-0x10], edi
        jne public_6ad59f2
        public_6ad59eb : nop
        xor eax, eax
        jmp public_6ad5b58
        public_6ad59f2 : nop
        mov eax, dword ptr ss : [ebp+8]
        sar eax, 5
        lea ebx, ds : [eax*4+public_6ae2480]
        mov eax, dword ptr ss : [ebp+8]
        and eax, 0x1F
        lea esi, ds:[eax+eax*8]
        mov eax, dword ptr ds : [ebx]
        shl esi, 2
        test byte ptr ds : [eax+esi+4], 0x20
        je public_6ad5a22
        push 2
        push edi
        push dword ptr ss : [ebp+8]
        call public_6ad58fa
        add esp, 0xC
        public_6ad5a22 : nop
        mov eax, dword ptr ds : [ebx]
        add eax, esi
        test byte ptr ds : [eax+4], 0x80
        je public_6ad5af1
        mov eax, dword ptr ss : [ebp+0xC]
        cmp dword ptr ss : [ebp+0x10], edi
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp+8], edi
        jbe public_6ad5b2c
        public_6ad5a42 : nop
        lea eax, ss:[ebp-0x414]
        public_6ad5a48 : nop
        mov ecx, dword ptr ss : [ebp-4]
        sub ecx, dword ptr ss : [ebp+0xC]
        cmp ecx, dword ptr ss : [ebp+0x10]
        jae public_6ad5a7c
        mov ecx, dword ptr ss : [ebp-4]
        inc dword ptr ss : [ebp-4]
        mov cl, byte ptr ds : [ecx]
        cmp cl, 0xA
        jne public_6ad5a67
        inc dword ptr ss : [ebp-0x10]
        mov byte ptr ds : [eax], 0xD
        inc eax
        public_6ad5a67 : nop
        mov byte ptr ds : [eax], cl
        inc eax
        mov ecx, eax
        lea edx, ss:[ebp-0x414]
        sub ecx, edx
        cmp ecx, 0x400
        jl public_6ad5a48
        public_6ad5a7c : nop
        mov edi, eax
        lea eax, ss:[ebp-0x414]
        sub edi, eax
        lea eax, ss:[ebp-0xC]
        push 0
        push eax
        lea eax, ss:[ebp-0x414]
        push edi
        push eax
        mov eax, dword ptr ds : [ebx]
        push dword ptr ds : [eax+esi]
        call dword ptr ds : [public_6ada0c0]
        test eax, eax
        je public_6ad5ae6
        mov eax, dword ptr ss : [ebp-0xC]
        add dword ptr ss : [ebp-8], eax
        cmp eax, edi
        jl public_6ad5ab8
        mov eax, dword ptr ss : [ebp-4]
        sub eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ss : [ebp+0x10]
        jb public_6ad5a42
        public_6ad5ab8 : nop
        xor edi, edi
        public_6ad5aba : nop
        mov eax, dword ptr ss : [ebp-8]
        cmp eax, edi
        jne public_6ad5b55
        cmp dword ptr ss : [ebp+8], edi
        je public_6ad5b2c
        push 5
        pop esi
        cmp dword ptr ss : [ebp+8], esi
        jne public_6ad5b1e
        call public_6ad24de
        mov dword ptr ds : [eax], 9
        call public_6ad24e7
        mov dword ptr ds : [eax], esi
        jmp public_6ad5b27
        public_6ad5ae6 : nop
        call dword ptr ds : [public_6ada140]
        mov dword ptr ss : [ebp+8], eax
        jmp public_6ad5ab8
        public_6ad5af1 : nop
        lea ecx, ss:[ebp-0xC]
        push edi
        push ecx
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ds : [eax]
        call dword ptr ds : [public_6ada0c0]
        test eax, eax
        je public_6ad5b13
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp-8], eax
        jmp public_6ad5aba
        public_6ad5b13 : nop
        call dword ptr ds : [public_6ada140]
        mov dword ptr ss : [ebp+8], eax
        jmp public_6ad5aba
        public_6ad5b1e : nop
        push dword ptr ss : [ebp+8]
        call public_6ad246b
        pop ecx
        public_6ad5b27 : nop
        or eax, 0xFFFFFFFF
        jmp public_6ad5b58
        public_6ad5b2c : nop
        mov eax, dword ptr ds : [ebx]
        test byte ptr ds : [eax+esi+4], 0x40
        je public_6ad5b41
        mov eax, dword ptr ss : [ebp+0xC]
        cmp byte ptr ds : [eax], 0x1A
        je public_6ad59eb
        public_6ad5b41 : nop
        call public_6ad24de
        mov dword ptr ds : [eax], 0x1C
        call public_6ad24e7
        mov dword ptr ds : [eax], edi
        jmp public_6ad5b27
        public_6ad5b55 : nop
        sub eax, dword ptr ss : [ebp-0x10]
        public_6ad5b58 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad59d2)
    }
}

#undef public_6ad59eb
#undef public_6ad59f2
#undef public_6ad5a22
#undef public_6ad5a42
#undef public_6ad5a48
#undef public_6ad5a67
#undef public_6ad5a7c
#undef public_6ad5ab8
#undef public_6ad5aba
#undef public_6ad5ae6
#undef public_6ad5af1
#undef public_6ad5b13
#undef public_6ad5b1e
#undef public_6ad5b27
#undef public_6ad5b2c
#undef public_6ad5b41
#undef public_6ad5b55
#undef public_6ad5b58
