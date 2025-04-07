#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da8850 _public_6da8850
#define public_6da886a _public_6da886a
#define public_6da88a6 _public_6da88a6
#define public_6da88ce _public_6da88ce
#define public_6da88f8 _public_6da88f8
#define public_6da8920 _public_6da8920
#define public_6da894a _public_6da894a
#define public_6da8972 _public_6da8972
#define public_6da89a3 _public_6da89a3
#define public_6da89ca _public_6da89ca
#define public_6da89f1 _public_6da89f1
#define public_6da8a12 _public_6da8a12
#define public_6da8a97 _public_6da8a97
#define public_6da8ad5 _public_6da8ad5
#define public_6da8ae1 _public_6da8ae1

PROC_DECLARE(0x6da8810, internal_6da8810, public_6da8810);
extern "C" NAKED register_t __cdecl internal_6da8810()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea esi, ds:[edi+0x10]
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        xor ebp, ebp
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+0xC], ebp
        call public_6da13c0
        cmp eax, ebp
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da8850
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6da8850 : nop
        mov dword ptr ds : [edi+0x20], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da886a
        mov dword ptr ds : [esi+0xC], 0x17
        public_6da886a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebp
        jne public_6da8ae1
        mov eax, dword ptr ds : [ebx]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        push ecx
        call dword ptr ds : [public_6db3000]
        mov dword ptr ds : [edi+0x24], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6da88a6
        mov dword ptr ds : [esi+0xC], ecx
        public_6da88a6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebp
        jne public_6da8ae1
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x28], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6da88ce
        mov dword ptr ds : [esi+0xC], ecx
        public_6da88ce : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebp
        jne public_6da8ae1
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov word ptr ds : [edi+0x2C], dx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6da88f8
        mov dword ptr ds : [esi+0xC], ecx
        public_6da88f8 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebp
        jne public_6da8ae1
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x30], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6da8920
        mov dword ptr ds : [esi+0xC], ecx
        public_6da8920 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebp
        jne public_6da8ae1
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov word ptr ds : [edi+0x34], dx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6da894a
        mov dword ptr ds : [esi+0xC], ecx
        public_6da894a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebp
        jne public_6da8ae1
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x38], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 0xC
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6da8972
        mov dword ptr ds : [esi+0xC], ecx
        public_6da8972 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebp
        jne public_6da8ae1
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x3C]
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x17
        jbe public_6da89a3
        mov dword ptr ds : [esi+0xC], ebp
        public_6da89a3 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da8ae1
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        inc edx
        mov byte ptr ss : [esp+0x18], cl
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da89ca
        mov dword ptr ds : [esi+0xC], ebp
        public_6da89ca : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da8ae1
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+4]
        mov byte ptr ss : [esp+0x13], dl
        mov edx, dword ptr ds : [esi]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da89f1
        mov dword ptr ds : [esi+0xC], ebp
        public_6da89f1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da8ae1
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6da8a12
        mov dword ptr ds : [esi+0xC], ebp
        public_6da8a12 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da8ae1
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        movsx eax, byte ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        movsx eax, byte ptr ss : [esp+0x13]
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        fmul qword ptr ds : [public_6db3fe0]
        movsx edx, dl
        movsx eax, cl
        fstp dword ptr ds : [edi+0x4C]
        fild dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x18], edx
        fmul qword ptr ds : [public_6db3fe0]
        push esi
        push ecx
        push ebx
        fstp dword ptr ds : [edi+0x50]
        mov ecx, edi
        fild dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x24], eax
        fmul qword ptr ds : [public_6db3fe0]
        fstp dword ptr ds : [edi+0x54]
        fild dword ptr ss : [esp+0x24]
        fmul qword ptr ds : [public_6db3fe0]
        fstp dword ptr ds : [edi+0x48]
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da8a97
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6da8a97 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6da16b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov edi, edx
        mov edx, dword ptr ds : [esi]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add eax, 2
        cmp esi, eax
        jbe public_6da8ad5
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6da8ad5 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6da8ae1 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6da8810)
    }
}

#undef public_6da8850
#undef public_6da886a
#undef public_6da88a6
#undef public_6da88ce
#undef public_6da88f8
#undef public_6da8920
#undef public_6da894a
#undef public_6da8972
#undef public_6da89a3
#undef public_6da89ca
#undef public_6da89f1
#undef public_6da8a12
#undef public_6da8a97
#undef public_6da8ad5
#undef public_6da8ae1
