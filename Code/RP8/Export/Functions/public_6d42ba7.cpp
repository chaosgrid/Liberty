#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42ba7);

#define public_6d42bfa _public_6d42bfa
#define public_6d42c0f _public_6d42c0f
#define public_6d42c12 _public_6d42c12
#define public_6d42c1a _public_6d42c1a
#define public_6d42c3c _public_6d42c3c
#define public_6d42c51 _public_6d42c51
#define public_6d42c53 _public_6d42c53
#define public_6d42c5b _public_6d42c5b
#define public_6d42c7b _public_6d42c7b
#define public_6d42c90 _public_6d42c90
#define public_6d42c91 _public_6d42c91
#define public_6d42c97 _public_6d42c97
#define public_6d42c9a _public_6d42c9a
#define public_6d42cb4 _public_6d42cb4

PROC_DECLARE(0x6d42ba7, internal_6d42ba7, public_6d42ba7);
extern "C" NAKED register_t __cdecl internal_6d42ba7()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [ebx+9]
        cmp cl, 8
        jae public_6d42cb4
        mov eax, dword ptr ds : [ebx]
        movzx ecx, cl
        dec ecx
        push esi
        push edi
        je public_6d42c5b
        dec ecx
        je public_6d42c1a
        dec ecx
        dec ecx
        jne public_6d42c9a
        mov edx, dword ptr ss : [ebp+0xC]
        lea ecx, ds:[eax-1]
        mov esi, ecx
        shr esi, 1
        add esi, edx
        and ecx, 1
        lea edi, ds:[eax+edx-1]
        push 4
        shl ecx, 2
        pop edx
        sub edx, ecx
        test eax, eax
        jbe public_6d42c9a
        mov dword ptr ss : [ebp-4], eax
        public_6d42bfa : nop
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        shr bl, cl
        and bl, 0xF
        cmp edx, 4
        mov byte ptr ds : [edi], bl
        jne public_6d42c0f
        xor edx, edx
        dec esi
        jmp public_6d42c12
        public_6d42c0f : nop
        push 4
        pop edx
        public_6d42c12 : nop
        dec edi
        dec dword ptr ss : [ebp-4]
        jne public_6d42bfa
        jmp public_6d42c97
        public_6d42c1a : nop
        mov edx, dword ptr ss : [ebp+0xC]
        lea ecx, ds:[eax-1]
        mov esi, ecx
        shr esi, 2
        add esi, edx
        and ecx, 3
        lea edi, ds:[eax+edx-1]
        push 6
        shl ecx, 1
        pop edx
        sub edx, ecx
        test eax, eax
        jbe public_6d42c9a
        mov dword ptr ss : [ebp-4], eax
        public_6d42c3c : nop
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        shr bl, cl
        and bl, 3
        cmp edx, 6
        mov byte ptr ds : [edi], bl
        jne public_6d42c51
        xor edx, edx
        dec esi
        jmp public_6d42c53
        public_6d42c51 : nop
        inc edx
        inc edx
        public_6d42c53 : nop
        dec edi
        dec dword ptr ss : [ebp-4]
        jne public_6d42c3c
        jmp public_6d42c97
        public_6d42c5b : nop
        mov edx, dword ptr ss : [ebp+0xC]
        lea ecx, ds:[eax-1]
        mov esi, ecx
        shr esi, 3
        add esi, edx
        lea edi, ds:[eax+edx-1]
        push 7
        and ecx, 7
        pop edx
        sub edx, ecx
        test eax, eax
        jbe public_6d42c9a
        mov dword ptr ss : [ebp-4], eax
        public_6d42c7b : nop
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        shr bl, cl
        and bl, 1
        cmp edx, 7
        mov byte ptr ds : [edi], bl
        jne public_6d42c90
        xor edx, edx
        dec esi
        jmp public_6d42c91
        public_6d42c90 : nop
        inc edx
        public_6d42c91 : nop
        dec edi
        dec dword ptr ss : [ebp-4]
        jne public_6d42c7b
        public_6d42c97 : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_6d42c9a : nop
        mov cl, byte ptr ds : [ebx+0xA]
        mov dl, cl
        movzx ecx, cl
        shl dl, 3
        imul ecx, eax
        pop edi
        mov byte ptr ds : [ebx+9], 8
        mov byte ptr ds : [ebx+0xB], dl
        mov dword ptr ds : [ebx+4], ecx
        pop esi
        public_6d42cb4 : nop
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d42ba7)
    }
}

#undef public_6d42bfa
#undef public_6d42c0f
#undef public_6d42c12
#undef public_6d42c1a
#undef public_6d42c3c
#undef public_6d42c51
#undef public_6d42c53
#undef public_6d42c5b
#undef public_6d42c7b
#undef public_6d42c90
#undef public_6d42c91
#undef public_6d42c97
#undef public_6d42c9a
#undef public_6d42cb4
