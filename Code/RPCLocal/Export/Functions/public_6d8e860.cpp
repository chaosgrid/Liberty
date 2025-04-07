#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85290);
CLANG_FORWARD_PROC_SYMBOL(public_6d8cb70);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8e8c6 _public_6d8e8c6
#define public_6d8e8d1 _public_6d8e8d1
#define public_6d8e8d9 _public_6d8e8d9
#define public_6d8e8e4 _public_6d8e8e4
#define public_6d8e8f2 _public_6d8e8f2
#define public_6d8e909 _public_6d8e909
#define public_6d8e91f _public_6d8e91f
#define public_6d8e927 _public_6d8e927
#define public_6d8e92f _public_6d8e92f
#define public_6d8e937 _public_6d8e937
#define public_6d8e93f _public_6d8e93f
#define public_6d8e94b _public_6d8e94b
#define public_6d8e953 _public_6d8e953
#define public_6d8e960 _public_6d8e960
#define public_6d8e96e _public_6d8e96e
#define public_6d8e980 _public_6d8e980
#define public_6d8e998 _public_6d8e998
#define public_6d8e9ad _public_6d8e9ad
#define public_6d8e9c1 _public_6d8e9c1
#define public_6d8e9d5 _public_6d8e9d5
#define public_6d8e9dd _public_6d8e9dd
#define public_6d8e9e3 _public_6d8e9e3
#define public_6d8ea09 _public_6d8ea09
#define public_6d8ea0c _public_6d8ea0c
#define public_6d8ea1d _public_6d8ea1d

PROC_DECLARE(0x6d8e860, internal_6d8e860, public_6d8e860);
extern "C" NAKED register_t __cdecl internal_6d8e860()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        lea eax, ss:[esp+8]
        push eax
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        push 0x1D
        xor esi, esi
        push 1
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x14], esi
        call public_6d96300
        test eax, eax
        jne public_6d8ea1d
        mov edx, dword ptr ss : [esp+8]
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [edx+0x20], ecx
        mov ax, word ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov word ptr ds : [ecx+0x24], ax
        mov edx, dword ptr ss : [esp+0x10]
        add edi, 8
        lea ebp, ds:[edx+0x28]
        cmp ebp, edi
        je public_6d8ea0c
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        je public_6d8e8c6
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 2
        public_6d8e8c6 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_6d8e8d1
        xor ecx, ecx
        jmp public_6d8e8d9
        public_6d8e8d1 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6d8e8d9 : nop
        cmp esi, ecx
        ja public_6d8e91f
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6d8e8f2
        public_6d8e8e4 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6d8e8e4
        public_6d8e8f2 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6d8e909
        mov eax, dword ptr ss : [ebp+4]
        xor edi, edi
        lea ecx, ds:[eax+edi*4]
        mov dword ptr ss : [ebp+8], ecx
        jmp public_6d8ea0c
        public_6d8e909 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ss : [ebp+4]
        sar edi, 2
        lea ecx, ds:[eax+edi*4]
        mov dword ptr ss : [ebp+8], ecx
        jmp public_6d8ea0c
        public_6d8e91f : nop
        test eax, eax
        jne public_6d8e927
        xor esi, esi
        jmp public_6d8e92f
        public_6d8e927 : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 2
        public_6d8e92f : nop
        test edx, edx
        jne public_6d8e937
        xor ecx, ecx
        jmp public_6d8e93f
        public_6d8e937 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, edx
        sar ecx, 2
        public_6d8e93f : nop
        cmp esi, ecx
        ja public_6d8e9c1
        test edx, edx
        jne public_6d8e94b
        xor ecx, ecx
        jmp public_6d8e953
        public_6d8e94b : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6d8e953 : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6d8e96e
        lea ebx, ds:[ebx]
        public_6d8e960 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6d8e960
        public_6d8e96e : nop
        mov eax, dword ptr ds : [edi+8]
        cmp ecx, eax
        mov ebx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x20], eax
        mov esi, ecx
        je public_6d8e998
        mov edi, edi
        public_6d8e980 : nop
        push esi
        push ebx
        call public_6d8cb70
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 4
        add esp, 8
        add ebx, 4
        cmp esi, eax
        jne public_6d8e980
        public_6d8e998 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6d8e9ad
        mov edx, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [esp+0x14]
        xor edi, edi
        lea eax, ds:[edx+edi*4]
        jmp public_6d8ea09
        public_6d8e9ad : nop
        mov edi, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [esp+0x14]
        sub edi, eax
        sar edi, 2
        lea eax, ds:[edx+edi*4]
        jmp public_6d8ea09
        public_6d8e9c1 : nop
        push edx
        call public_6db1dc2
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_6d8e9d5
        xor eax, eax
        jmp public_6d8e9dd
        public_6d8e9d5 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_6d8e9dd : nop
        test eax, eax
        jge public_6d8e9e3
        xor eax, eax
        public_6d8e9e3 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6db1f8a
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, ebp
        call public_6d85290
        mov dword ptr ss : [ebp+0xC], eax
        public_6d8ea09 : nop
        mov dword ptr ss : [ebp+8], eax
        public_6d8ea0c : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ebx]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x170]
        pop edi
        pop ebp
        public_6d8ea1d : nop
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d8e860)
    }
}

#undef public_6d8e8c6
#undef public_6d8e8d1
#undef public_6d8e8d9
#undef public_6d8e8e4
#undef public_6d8e8f2
#undef public_6d8e909
#undef public_6d8e91f
#undef public_6d8e927
#undef public_6d8e92f
#undef public_6d8e937
#undef public_6d8e93f
#undef public_6d8e94b
#undef public_6d8e953
#undef public_6d8e960
#undef public_6d8e96e
#undef public_6d8e980
#undef public_6d8e998
#undef public_6d8e9ad
#undef public_6d8e9c1
#undef public_6d8e9d5
#undef public_6d8e9dd
#undef public_6d8e9e3
#undef public_6d8ea09
#undef public_6d8ea0c
#undef public_6d8ea1d
