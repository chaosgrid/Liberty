#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b33c00);
CLANG_FORWARD_PROC_SYMBOL(public_6b33c10);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b69c90);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b6998d _public_6b6998d
#define public_6b699a7 _public_6b699a7
#define public_6b699d1 _public_6b699d1
#define public_6b699fd _public_6b699fd
#define public_6b69a29 _public_6b69a29
#define public_6b69a50 _public_6b69a50
#define public_6b69a55 _public_6b69a55
#define public_6b69a6a _public_6b69a6a
#define public_6b69ab0 _public_6b69ab0
#define public_6b69ab5 _public_6b69ab5
#define public_6b69abd _public_6b69abd
#define public_6b69ac2 _public_6b69ac2
#define public_6b69ace _public_6b69ace
#define public_6b69b52 _public_6b69b52
#define public_6b69b6a _public_6b69b6a
#define public_6b69bb0 _public_6b69bb0
#define public_6b69bbf _public_6b69bbf
#define public_6b69bd4 _public_6b69bd4
#define public_6b69be3 _public_6b69be3
#define public_6b69bf0 _public_6b69bf0
#define public_6b69bfd _public_6b69bfd
#define public_6b69c03 _public_6b69c03
#define public_6b69c24 _public_6b69c24
#define public_6b69c31 _public_6b69c31
#define public_6b69c72 _public_6b69c72
#define public_6b69c7e _public_6b69c7e

PROC_DECLARE(0x6b69940, internal_6b69940, public_6b69940);
extern "C" NAKED register_t __cdecl internal_6b69940()
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
        call public_6b4e780
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b6998d
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6b6998d : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        mov edx, 0x17
        jbe public_6b699a7
        mov dword ptr ss : [ebp+0xC], edx
        public_6b699a7 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b69c7e
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
        jbe public_6b699d1
        mov dword ptr ss : [ebp+0xC], edx
        public_6b699d1 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b69c7e
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
        jbe public_6b699fd
        mov dword ptr ss : [ebp+0xC], edx
        public_6b699fd : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b69c7e
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
        jg public_6b69a55
        public_6b69a29 : nop
        push ebp
        push edi
        lea eax, ds:[ebx+0x18]
        push eax
        mov ecx, ebx
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b69c31
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6b69a50 : nop
        mov edx, 0x17
        public_6b69a55 : nop
        mov esi, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add esi, 4
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp], esi
        jbe public_6b69a6a
        mov dword ptr ss : [ebp+0xC], edx
        public_6b69a6a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b69c24
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
        jae public_6b69b6a
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6b69ab0
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6b69ab5
        public_6b69ab0 : nop
        mov ecx, 1
        public_6b69ab5 : nop
        test edx, edx
        jne public_6b69abd
        xor eax, eax
        jmp public_6b69ac2
        public_6b69abd : nop
        sub eax, edx
        sar eax, 2
        public_6b69ac2 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_6b69ace
        xor eax, eax
        public_6b69ace : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6b6a134
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edi
        push eax
        mov ecx, esi
        call public_6b33c10
        lea ecx, ss:[esp+0x28]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_6b69c90
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+8]
        add edx, 4
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_6b33c10
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6b33c00
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6b6a092
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        lea edx, ds:[ebx+ecx*4]
        mov dword ptr ds : [esi+0xC], edx
        jne public_6b69b52
        xor ecx, ecx
        lea eax, ds:[ebx+ecx*4+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        jmp public_6b69c03
        public_6b69b52 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        lea eax, ds:[ebx+ecx*4+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        jmp public_6b69c03
        public_6b69b6a : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6b69bbf
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6b33c10
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
        call public_6b69c90
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6b69bfd
        lea esp, ss:[esp]
        public_6b69bb0 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6b69bb0
        jmp public_6b69bfd
        public_6b69bbf : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6b33c10
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6b69be3
        public_6b69bd4 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6b69bd4
        public_6b69be3 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_6b69bfd
        lea ebx, ds:[ebx]
        public_6b69bf0 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_6b69bf0
        public_6b69bfd : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        public_6b69c03 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jl public_6b69a50
        mov edi, dword ptr ss : [esp+0x2C]
        jmp public_6b69a29
        public_6b69c24 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6b69c31 : nop
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        push ecx
        call public_6b4ecd0
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
        jbe public_6b69c72
        add ebp, 2
        mov dword ptr ds : [ecx+0x14], ebp
        public_6b69c72 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b69c7e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6b69940)
    }
}

#undef public_6b6998d
#undef public_6b699a7
#undef public_6b699d1
#undef public_6b699fd
#undef public_6b69a29
#undef public_6b69a50
#undef public_6b69a55
#undef public_6b69a6a
#undef public_6b69ab0
#undef public_6b69ab5
#undef public_6b69abd
#undef public_6b69ac2
#undef public_6b69ace
#undef public_6b69b52
#undef public_6b69b6a
#undef public_6b69bb0
#undef public_6b69bbf
#undef public_6b69bd4
#undef public_6b69be3
#undef public_6b69bf0
#undef public_6b69bfd
#undef public_6b69c03
#undef public_6b69c24
#undef public_6b69c31
#undef public_6b69c72
#undef public_6b69c7e
