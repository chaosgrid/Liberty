#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d88d20);
CLANG_FORWARD_PROC_SYMBOL(public_6d8fc10);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8b070 _public_6d8b070
#define public_6d8b08c _public_6d8b08c
#define public_6d8b097 _public_6d8b097
#define public_6d8b09f _public_6d8b09f
#define public_6d8b0d0 _public_6d8b0d0
#define public_6d8b0ec _public_6d8b0ec
#define public_6d8b0f7 _public_6d8b0f7
#define public_6d8b0ff _public_6d8b0ff
#define public_6d8b133 _public_6d8b133
#define public_6d8b140 _public_6d8b140
#define public_6d8b156 _public_6d8b156
#define public_6d8b170 _public_6d8b170
#define public_6d8b18c _public_6d8b18c
#define public_6d8b197 _public_6d8b197
#define public_6d8b19f _public_6d8b19f
#define public_6d8b1e8 _public_6d8b1e8
#define public_6d8b201 _public_6d8b201

PROC_DECLARE(0x6d8b020, internal_6d8b020, public_6d8b020);
extern "C" NAKED register_t __cdecl internal_6d8b020()
{
    __asm
    {
        sub esp, 0x10
        lea eax, ss:[esp]
        push eax
        push 0x35
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [ecx+8]
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8b201
        mov edx, dword ptr ss : [esp]
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [edx+0x20], ecx
        movzx eax, byte ptr ds : [ebx+0x3C]
        mov ecx, dword ptr ss : [esp+4]
        push ebp
        push esi
        mov dword ptr ds : [ecx+0x24], eax
        mov esi, dword ptr ds : [ebx+0xC]
        test esi, esi
        mov edx, dword ptr ss : [esp+0xC]
        push edi
        lea ebp, ds:[edx+0x28]
        mov edi, 6
        je public_6d8b09f
        nop 
        public_6d8b070 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6d8b08c
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6d8b097
        public_6d8b08c : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6d88d20
        add eax, 3
        public_6d8b097 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        test esi, esi
        jne public_6d8b070
        public_6d8b09f : nop
        push edi
        mov dword ptr ss : [ebp], edi
        call public_6db1f8a
        mov edx, dword ptr ss : [ebp]
        add esp, 4
        push edx
        push eax
        lea ecx, ds:[ebx+0xC]
        mov dword ptr ss : [ebp+4], eax
        call dword ptr ds : [public_6db30dc]
        mov esi, dword ptr ds : [ebx+0x24]
        test esi, esi
        mov eax, dword ptr ss : [esp+0x10]
        lea edi, ds:[eax+0x30]
        mov ebp, 6
        je public_6d8b0ff
        nop 
        public_6d8b0d0 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6d8b0ec
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6d8b0f7
        public_6d8b0ec : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6d88d20
        add eax, 3
        public_6d8b0f7 : nop
        mov esi, dword ptr ds : [esi]
        add ebp, eax
        test esi, esi
        jne public_6d8b0d0
        public_6d8b0ff : nop
        push ebp
        mov dword ptr ds : [edi], ebp
        call public_6db1f8a
        mov edx, dword ptr ds : [edi]
        add esp, 4
        push edx
        push eax
        lea ecx, ds:[ebx+0x24]
        mov dword ptr ds : [edi+4], eax
        call dword ptr ds : [public_6db30dc]
        mov eax, dword ptr ds : [ebx+8]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], edi
        jbe public_6d8b1e8
        xor esi, esi
        mov dword ptr ss : [esp+0x14], esi
        jmp public_6d8b140
        public_6d8b133 : nop
        mov ebx, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ss : [esp+0x14]
        xor edi, edi
        lea ecx, ds:[ecx]
        public_6d8b140 : nop
        push 0xC
        call public_6db1f8a
        add esp, 4
        cmp eax, edi
        je public_6d8b156
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [eax+8], edi
        mov edi, eax
        public_6d8b156 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov cl, byte ptr ds : [esi+eax+0x18]
        mov byte ptr ds : [edi], cl
        mov ebx, dword ptr ds : [ebx+4]
        add ebx, esi
        mov esi, dword ptr ds : [ebx]
        test esi, esi
        mov ebp, 6
        je public_6d8b19f
        nop 
        public_6d8b170 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6d8b18c
        xor edx, edx
        cmp eax, 0x4E
        sete dl
        dec edx
        and edx, 0xFFFFFFF0
        add edx, 0x17
        mov eax, edx
        jmp public_6d8b197
        public_6d8b18c : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6d88d20
        add eax, 3
        public_6d8b197 : nop
        mov esi, dword ptr ds : [esi]
        add ebp, eax
        test esi, esi
        jne public_6d8b170
        public_6d8b19f : nop
        push ebp
        mov dword ptr ds : [edi+4], ebp
        call public_6db1f8a
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        push ecx
        push eax
        mov ecx, ebx
        mov dword ptr ds : [edi+8], eax
        call dword ptr ds : [public_6db30dc]
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        call public_6d8fc10
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        add edx, 0x1C
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [edx+8]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jb public_6d8b133
        public_6d8b1e8 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [edx]
        push edx
        call dword ptr ds : [eax+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6d8b201 : nop
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d8b020)
    }
}

#undef public_6d8b070
#undef public_6d8b08c
#undef public_6d8b097
#undef public_6d8b09f
#undef public_6d8b0d0
#undef public_6d8b0ec
#undef public_6d8b0f7
#undef public_6d8b0ff
#undef public_6d8b133
#undef public_6d8b140
#undef public_6d8b156
#undef public_6d8b170
#undef public_6d8b18c
#undef public_6d8b197
#undef public_6d8b19f
#undef public_6d8b1e8
#undef public_6d8b201
