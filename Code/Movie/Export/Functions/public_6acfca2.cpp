#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acfca2);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad24de);

#define public_6acfcd2 _public_6acfcd2
#define public_6acfcf3 _public_6acfcf3
#define public_6acfd1e _public_6acfd1e
#define public_6acfd2e _public_6acfd2e
#define public_6acfd36 _public_6acfd36
#define public_6acfd4d _public_6acfd4d
#define public_6acfd58 _public_6acfd58
#define public_6acfd70 _public_6acfd70
#define public_6acfd83 _public_6acfd83
#define public_6acfd9c _public_6acfd9c
#define public_6acfd9d _public_6acfd9d

PROC_DECLARE(0x6acfca2, internal_6acfca2, public_6acfca2);
extern "C" NAKED register_t __cdecl internal_6acfca2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov edx, dword ptr ss : [ebp+8]
        push ebx
        push esi
        xor esi, esi
        xor eax, eax
        cmp edx, esi
        push edi
        je public_6acfd70
        mov edi, dword ptr ss : [ebp+0x10]
        cmp edi, esi
        je public_6acfd9d
        cmp dword ptr ds : [public_6ae0f64], esi
        jne public_6acfcf3
        cmp edi, esi
        jbe public_6acfd9d
        public_6acfcd2 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        add ecx, eax
        movzx si, byte ptr ds : [ecx]
        mov word ptr ds : [edx], si
        cmp byte ptr ds : [ecx], 0
        je public_6acfd9d
        inc eax
        inc edx
        inc edx
        cmp eax, edi
        jb public_6acfcd2
        jmp public_6acfd9d
        public_6acfcf3 : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [public_6ada110]
        push edi
        push edx
        push 0xFFFFFFFF
        push ebx
        push 9
        push dword ptr ds : [public_6ae0f74]
        call esi
        test eax, eax
        jne public_6acfd9c
        call dword ptr ds : [public_6ada140]
        cmp eax, 0x7A
        je public_6acfd2e
        public_6acfd1e : nop
        call public_6ad24de
        mov dword ptr ds : [eax], 0x2A
        or eax, 0xFFFFFFFF
        jmp public_6acfd9d
        public_6acfd2e : nop
        lea ecx, ds:[edi-1]
        mov eax, ebx
        mov dword ptr ss : [ebp+0xC], ecx
        public_6acfd36 : nop
        mov cl, byte ptr ds : [eax]
        test cl, cl
        je public_6acfd58
        mov edx, dword ptr ds : [public_6add750]
        movzx ecx, cl
        test byte ptr ds : [edx+ecx*2+1], 0x80
        je public_6acfd4d
        inc eax
        public_6acfd4d : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        inc eax
        dec dword ptr ss : [ebp+0xC]
        test ecx, ecx
        jne public_6acfd36
        public_6acfd58 : nop
        push edi
        sub eax, ebx
        push dword ptr ss : [ebp+8]
        push eax
        push ebx
        push 1
        push dword ptr ds : [public_6ae0f74]
        call esi
        test eax, eax
        jne public_6acfd9d
        jmp public_6acfd1e
        public_6acfd70 : nop
        cmp dword ptr ds : [public_6ae0f64], esi
        jne public_6acfd83
        push dword ptr ss : [ebp+0xC]
        call public_6ad23f0
        pop ecx
        jmp public_6acfd9d
        public_6acfd83 : nop
        push esi
        push esi
        push 0xFFFFFFFF
        push dword ptr ss : [ebp+0xC]
        push 9
        push dword ptr ds : [public_6ae0f74]
        call dword ptr ds : [public_6ada110]
        cmp eax, esi
        je public_6acfd1e
        public_6acfd9c : nop
        dec eax
        public_6acfd9d : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6acfca2)
    }
}

#undef public_6acfcd2
#undef public_6acfcf3
#undef public_6acfd1e
#undef public_6acfd2e
#undef public_6acfd36
#undef public_6acfd4d
#undef public_6acfd58
#undef public_6acfd70
#undef public_6acfd83
#undef public_6acfd9c
#undef public_6acfd9d
