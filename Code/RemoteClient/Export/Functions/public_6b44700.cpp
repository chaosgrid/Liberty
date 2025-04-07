#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b44ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6b44bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b44748 _public_6b44748
#define public_6b44760 _public_6b44760
#define public_6b44786 _public_6b44786
#define public_6b447aa _public_6b447aa
#define public_6b447d0 _public_6b447d0
#define public_6b4486e _public_6b4486e
#define public_6b4489c _public_6b4489c
#define public_6b448d8 _public_6b448d8
#define public_6b44900 _public_6b44900
#define public_6b4492a _public_6b4492a
#define public_6b44966 _public_6b44966
#define public_6b4498e _public_6b4498e
#define public_6b449b6 _public_6b449b6
#define public_6b449f2 _public_6b449f2
#define public_6b44a30 _public_6b44a30
#define public_6b44a55 _public_6b44a55
#define public_6b44a59 _public_6b44a59
#define public_6b44a6e _public_6b44a6e
#define public_6b44a94 _public_6b44a94
#define public_6b44abd _public_6b44abd
#define public_6b44ae1 _public_6b44ae1
#define public_6b44aee _public_6b44aee
#define public_6b44b2a _public_6b44b2a
#define public_6b44b36 _public_6b44b36

PROC_DECLARE(0x6b44700, internal_6b44700, public_6b44700);
extern "C" NAKED register_t __cdecl internal_6b44700()
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
        call public_6b4e780
        cmp eax, ebp
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b44748
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x58
        ret 0xC
        public_6b44748 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6b44760
        mov dword ptr ds : [esi+0xC], ecx
        public_6b44760 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, ebp
        jne public_6b44b36
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
        jbe public_6b44786
        mov dword ptr ds : [esi+0xC], ecx
        public_6b44786 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, ebp
        jne public_6b44b36
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
        jbe public_6b447aa
        mov dword ptr ds : [esi+0xC], ecx
        public_6b447aa : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, ebp
        jne public_6b44b36
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        mov byte ptr ss : [esp+0x13], cl
        mov dword ptr ds : [edi], eax
        jbe public_6b44abd
        mov byte ptr ss : [esp+0x6C], 0
        lea ecx, ds:[ecx]
        public_6b447d0 : nop
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
        call public_6b44ba0
        mov eax, dword ptr ds : [ebx+0x2C]
        lea ecx, ds:[ebx+0x28]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0x70], 0
        mov byte ptr ss : [esp+0x71], 0
        call public_6b44bd0
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov edx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        add ebp, 8
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b4486e
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b4486e : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b44ae1
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
        jbe public_6b4489c
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b4489c : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b44ae1
        mov eax, dword ptr ds : [edi]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [edi], eax
        push ecx
        call dword ptr ds : [public_6b6b018]
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6b448d8
        mov dword ptr ds : [esi+0xC], ecx
        public_6b448d8 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b44ae1
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
        jbe public_6b44900
        mov dword ptr ds : [esi+0xC], ecx
        public_6b44900 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b44ae1
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
        jbe public_6b4492a
        mov dword ptr ds : [esi+0xC], ecx
        public_6b4492a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b44ae1
        mov eax, dword ptr ds : [edi]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [edi], eax
        push ecx
        call dword ptr ds : [public_6b6b018]
        mov dword ptr ss : [ebp+0x10], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6b44966
        mov dword ptr ds : [esi+0xC], ecx
        public_6b44966 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b44ae1
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
        jbe public_6b4498e
        mov dword ptr ds : [esi+0xC], ecx
        public_6b4498e : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b44ae1
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
        jbe public_6b449b6
        mov dword ptr ds : [esi+0xC], ecx
        public_6b449b6 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b44ae1
        mov ebx, dword ptr ds : [edi]
        push ebx
        lea ecx, ss:[ebp+0x1C]
        call public_6b3a160
        add ebx, 0xC
        mov dword ptr ds : [edi], ebx
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        je public_6b44a55
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b449f2
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b449f2 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b44ae1
        mov eax, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[ebp+0x28]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6b3a160
        mov eax, dword ptr ss : [esp+0x18]
        add eax, 0xC
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b44a30
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b44a30 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b44ae1
        mov eax, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[ebp+0x34]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6b39ec0
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, 0x10
        mov dword ptr ds : [edi], ecx
        jmp public_6b44a59
        public_6b44a55 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        public_6b44a59 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b44a6e
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b44a6e : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b44ae1
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
        jbe public_6b44a94
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b44a94 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b44ae1
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
        jb public_6b447d0
        public_6b44abd : nop
        mov edx, dword ptr ss : [esp+0x70]
        push esi
        push edx
        push edi
        mov ecx, ebx
        call public_6b4e7a0
        cmp eax, ebp
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b44aee
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x58
        ret 0xC
        public_6b44ae1 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 0xC
        public_6b44aee : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        call public_6b4ecd0
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
        jbe public_6b44b2a
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6b44b2a : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b44b36 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 0xC
        UNREACHABLE_TRAP(0x6b44700)
    }
}

#undef public_6b44748
#undef public_6b44760
#undef public_6b44786
#undef public_6b447aa
#undef public_6b447d0
#undef public_6b4486e
#undef public_6b4489c
#undef public_6b448d8
#undef public_6b44900
#undef public_6b4492a
#undef public_6b44966
#undef public_6b4498e
#undef public_6b449b6
#undef public_6b449f2
#undef public_6b44a30
#undef public_6b44a55
#undef public_6b44a59
#undef public_6b44a6e
#undef public_6b44a94
#undef public_6b44abd
#undef public_6b44ae1
#undef public_6b44aee
#undef public_6b44b2a
#undef public_6b44b36
