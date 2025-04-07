#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85280);
CLANG_FORWARD_PROC_SYMBOL(public_6d85290);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6da7ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da7bdd _public_6da7bdd
#define public_6da7bf7 _public_6da7bf7
#define public_6da7c21 _public_6da7c21
#define public_6da7c4d _public_6da7c4d
#define public_6da7c79 _public_6da7c79
#define public_6da7ca0 _public_6da7ca0
#define public_6da7ca5 _public_6da7ca5
#define public_6da7cba _public_6da7cba
#define public_6da7d00 _public_6da7d00
#define public_6da7d05 _public_6da7d05
#define public_6da7d0d _public_6da7d0d
#define public_6da7d12 _public_6da7d12
#define public_6da7d1e _public_6da7d1e
#define public_6da7da2 _public_6da7da2
#define public_6da7dba _public_6da7dba
#define public_6da7e00 _public_6da7e00
#define public_6da7e0f _public_6da7e0f
#define public_6da7e24 _public_6da7e24
#define public_6da7e33 _public_6da7e33
#define public_6da7e40 _public_6da7e40
#define public_6da7e4d _public_6da7e4d
#define public_6da7e53 _public_6da7e53
#define public_6da7e74 _public_6da7e74
#define public_6da7e81 _public_6da7e81
#define public_6da7ec2 _public_6da7ec2
#define public_6da7ece _public_6da7ece

PROC_DECLARE(0x6da7b90, internal_6da7b90, public_6da7b90);
extern "C" NAKED register_t __cdecl internal_6da7b90()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        lea ebp, ds:[ebx+0x10]
        push ebp
        push edi
        lea esi, ds:[ebx+0x18]
        push esi
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6da7bdd
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6da7bdd : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        mov edx, 0x17
        jbe public_6da7bf7
        mov dword ptr ss : [ebp+0xC], edx
        public_6da7bf7 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6da7ece
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [ebx+0x20], ecx
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add eax, 2
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6da7c21
        mov dword ptr ss : [ebp+0xC], edx
        public_6da7c21 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6da7ece
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [esi], eax
        mov word ptr ds : [ebx+0x24], cx
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add eax, 2
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6da7c4d
        mov dword ptr ss : [ebp+0xC], edx
        public_6da7c4d : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6da7ece
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [esi], eax
        xor eax, eax
        mov ax, cx
        xor esi, esi
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x10], esi
        cmp eax, esi
        mov dword ptr ss : [esp+0x20], eax
        jg public_6da7ca5
        public_6da7c79 : nop
        push ebp
        push edi
        lea eax, ds:[ebx+0x18]
        push eax
        mov ecx, ebx
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6da7e81
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6da7ca0 : nop
        mov edx, 0x17
        public_6da7ca5 : nop
        mov esi, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add esi, 4
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp], esi
        jbe public_6da7cba
        mov dword ptr ss : [ebp+0xC], edx
        public_6da7cba : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6da7e74
        mov eax, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        lea esi, ds:[ebx+0x28]
        mov dword ptr ds : [ebx+0x18], eax
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+0x28], edx
        mov edi, eax
        jae public_6da7dba
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6da7d00
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6da7d05
        public_6da7d00 : nop
        mov ecx, 1
        public_6da7d05 : nop
        test edx, edx
        jne public_6da7d0d
        xor eax, eax
        jmp public_6da7d12
        public_6da7d0d : nop
        sub eax, edx
        sar eax, 2
        public_6da7d12 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_6da7d1e
        xor eax, eax
        public_6da7d1e : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6db1f8a
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edi
        push eax
        mov ecx, esi
        call public_6d85290
        lea ecx, ss:[esp+0x28]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_6da7ee0
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+8]
        add edx, 4
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_6d85290
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6d85280
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6db1dc2
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        lea edx, ds:[ebx+ecx*4]
        mov dword ptr ds : [esi+0xC], edx
        jne public_6da7da2
        xor ecx, ecx
        lea eax, ds:[ebx+ecx*4+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        jmp public_6da7e53
        public_6da7da2 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        lea eax, ds:[ebx+ecx*4+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        jmp public_6da7e53
        public_6da7dba : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6da7e0f
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6d85290
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x28]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6da7ee0
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6da7e4d
        lea esp, ss:[esp]
        public_6da7e00 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6da7e00
        jmp public_6da7e4d
        public_6da7e0f : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6d85290
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6da7e33
        public_6da7e24 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6da7e24
        public_6da7e33 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_6da7e4d
        lea ebx, ds:[ebx]
        public_6da7e40 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_6da7e40
        public_6da7e4d : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        public_6da7e53 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jl public_6da7ca0
        mov edi, dword ptr ss : [esp+0x2C]
        jmp public_6da7c79
        public_6da7e74 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6da7e81 : nop
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        push ecx
        call public_6da16b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov esi, edx
        mov edx, dword ptr ss : [ebp]
        add edx, 2
        add ebx, edx
        mov dword ptr ds : [ecx+0x1C], ebx
        mov ebp, dword ptr ss : [ebp]
        add eax, 2
        cmp ebp, eax
        jbe public_6da7ec2
        add ebp, 2
        mov dword ptr ds : [ecx+0x14], ebp
        public_6da7ec2 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6da7ece : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6da7b90)
    }
}

#undef public_6da7bdd
#undef public_6da7bf7
#undef public_6da7c21
#undef public_6da7c4d
#undef public_6da7c79
#undef public_6da7ca0
#undef public_6da7ca5
#undef public_6da7cba
#undef public_6da7d00
#undef public_6da7d05
#undef public_6da7d0d
#undef public_6da7d12
#undef public_6da7d1e
#undef public_6da7da2
#undef public_6da7dba
#undef public_6da7e00
#undef public_6da7e0f
#undef public_6da7e24
#undef public_6da7e33
#undef public_6da7e40
#undef public_6da7e4d
#undef public_6da7e53
#undef public_6da7e74
#undef public_6da7e81
#undef public_6da7ec2
#undef public_6da7ece
