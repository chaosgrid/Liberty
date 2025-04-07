#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6d931c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d931f0);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6d92d68 _public_6d92d68
#define public_6d92d80 _public_6d92d80
#define public_6d92da6 _public_6d92da6
#define public_6d92dca _public_6d92dca
#define public_6d92df0 _public_6d92df0
#define public_6d92e8e _public_6d92e8e
#define public_6d92ebc _public_6d92ebc
#define public_6d92ef8 _public_6d92ef8
#define public_6d92f20 _public_6d92f20
#define public_6d92f4a _public_6d92f4a
#define public_6d92f86 _public_6d92f86
#define public_6d92fae _public_6d92fae
#define public_6d92fd6 _public_6d92fd6
#define public_6d93012 _public_6d93012
#define public_6d93050 _public_6d93050
#define public_6d93075 _public_6d93075
#define public_6d93079 _public_6d93079
#define public_6d9308e _public_6d9308e
#define public_6d930b4 _public_6d930b4
#define public_6d930dd _public_6d930dd
#define public_6d93101 _public_6d93101
#define public_6d9310e _public_6d9310e
#define public_6d9314a _public_6d9314a
#define public_6d93156 _public_6d93156

PROC_DECLARE(0x6d92d20, internal_6d92d20, public_6d92d20);
extern "C" NAKED register_t __cdecl internal_6d92d20()
{
    __asm
    {
        sub esp, 0x58
        mov eax, dword ptr ss : [esp+0x60]
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x68]
        push edi
        lea esi, ds:[ebx+0x10]
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        xor ebp, ebp
        lea edi, ds:[ebx+0x18]
        push edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+0xC], ebp
        call public_6da13c0
        cmp eax, ebp
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6d92d68
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x58
        ret 0xC
        public_6d92d68 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6d92d80
        mov dword ptr ds : [esi+0xC], ecx
        public_6d92d80 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, ebp
        jne public_6d93156
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [ebx+0x20], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6d92da6
        mov dword ptr ds : [esi+0xC], ecx
        public_6d92da6 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, ebp
        jne public_6d93156
        mov eax, dword ptr ds : [edi]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [edi], eax
        mov byte ptr ds : [ebx+0x24], dl
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6d92dca
        mov dword ptr ds : [esi+0xC], ecx
        public_6d92dca : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, ebp
        jne public_6d93156
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        mov byte ptr ss : [esp+0x13], cl
        mov dword ptr ds : [edi], eax
        jbe public_6d930dd
        mov byte ptr ss : [esp+0x6C], 0
        lea ecx, ds:[ecx]
        public_6d92df0 : nop
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], 0
        mov word ptr ss : [esp+0x2C], bp
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        call public_6d931c0
        mov eax, dword ptr ds : [ebx+0x2C]
        lea ecx, ds:[ebx+0x28]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0x70], 0
        mov byte ptr ss : [esp+0x71], 0
        call public_6d931f0
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov edx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        add ebp, 8
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d92e8e
        mov dword ptr ds : [esi+0xC], 0x17
        public_6d92e8e : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d93101
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp], edx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d92ebc
        mov dword ptr ds : [esi+0xC], 0x17
        public_6d92ebc : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d93101
        mov eax, dword ptr ds : [edi]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [edi], eax
        push ecx
        call dword ptr ds : [public_6db3000]
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6d92ef8
        mov dword ptr ds : [esi+0xC], ecx
        public_6d92ef8 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d93101
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6d92f20
        mov dword ptr ds : [esi+0xC], ecx
        public_6d92f20 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d93101
        mov eax, dword ptr ds : [edi]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov word ptr ss : [ebp+0xC], dx
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6d92f4a
        mov dword ptr ds : [esi+0xC], ecx
        public_6d92f4a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d93101
        mov eax, dword ptr ds : [edi]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [edi], eax
        push ecx
        call dword ptr ds : [public_6db3000]
        mov dword ptr ss : [ebp+0x10], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6d92f86
        mov dword ptr ds : [esi+0xC], ecx
        public_6d92f86 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d93101
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x14], edx
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6d92fae
        mov dword ptr ds : [esi+0xC], ecx
        public_6d92fae : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d93101
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], edx
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 0xC
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6d92fd6
        mov dword ptr ds : [esi+0xC], ecx
        public_6d92fd6 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d93101
        mov ebx, dword ptr ds : [edi]
        push ebx
        lea ecx, ss:[ebp+0x1C]
        call public_6d8f510
        add ebx, 0xC
        mov dword ptr ds : [edi], ebx
        call dword ptr ds : [public_6db305c]
        test al, al
        je public_6d93075
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d93012
        mov dword ptr ds : [esi+0xC], 0x17
        public_6d93012 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d93101
        mov eax, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[ebp+0x28]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6d8f510
        mov eax, dword ptr ss : [esp+0x18]
        add eax, 0xC
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d93050
        mov dword ptr ds : [esi+0xC], 0x17
        public_6d93050 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d93101
        mov eax, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[ebp+0x34]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6d8f4f0
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, 0x10
        mov dword ptr ds : [edi], ecx
        jmp public_6d93079
        public_6d93075 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        public_6d93079 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d9308e
        mov dword ptr ds : [esi+0xC], 0x17
        public_6d9308e : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d93101
        mov eax, dword ptr ds : [edi]
        mov dl, byte ptr ds : [eax]
        mov byte ptr ss : [ebp+0x44], dl
        inc eax
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d930b4
        mov dword ptr ds : [esi+0xC], 0x17
        public_6d930b4 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d93101
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ss : [ebp+0x45], cl
        mov cl, byte ptr ss : [esp+0x13]
        mov dword ptr ds : [edi], eax
        mov al, byte ptr ss : [esp+0x6C]
        inc al
        xor ebp, ebp
        cmp al, cl
        mov byte ptr ss : [esp+0x6C], al
        jb public_6d92df0
        public_6d930dd : nop
        mov edx, dword ptr ss : [esp+0x70]
        push esi
        push edx
        push edi
        mov ecx, ebx
        call public_6da13c0
        cmp eax, ebp
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6d9310e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x58
        ret 0xC
        public_6d93101 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 0xC
        public_6d9310e : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx+4], edi
        mov eax, dword ptr ds : [esi]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add edx, 2
        cmp esi, edx
        jbe public_6d9314a
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6d9314a : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6d93156 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 0xC
        UNREACHABLE_TRAP(0x6d92d20)
    }
}

#undef public_6d92d68
#undef public_6d92d80
#undef public_6d92da6
#undef public_6d92dca
#undef public_6d92df0
#undef public_6d92e8e
#undef public_6d92ebc
#undef public_6d92ef8
#undef public_6d92f20
#undef public_6d92f4a
#undef public_6d92f86
#undef public_6d92fae
#undef public_6d92fd6
#undef public_6d93012
#undef public_6d93050
#undef public_6d93075
#undef public_6d93079
#undef public_6d9308e
#undef public_6d930b4
#undef public_6d930dd
#undef public_6d93101
#undef public_6d9310e
#undef public_6d9314a
#undef public_6d93156
