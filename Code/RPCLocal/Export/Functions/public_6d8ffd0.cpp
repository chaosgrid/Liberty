#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1620);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d90014 _public_6d90014
#define public_6d9002c _public_6d9002c
#define public_6d90054 _public_6d90054
#define public_6d9007c _public_6d9007c
#define public_6d900c0 _public_6d900c0
#define public_6d900da _public_6d900da
#define public_6d900e0 _public_6d900e0
#define public_6d900f5 _public_6d900f5
#define public_6d90130 _public_6d90130
#define public_6d90148 _public_6d90148
#define public_6d90169 _public_6d90169
#define public_6d9017d _public_6d9017d
#define public_6d9018a _public_6d9018a
#define public_6d90195 _public_6d90195
#define public_6d901d1 _public_6d901d1
#define public_6d901dd _public_6d901dd

PROC_DECLARE(0x6d8ffd0, internal_6d8ffd0, public_6d8ffd0);
extern "C" NAKED register_t __cdecl internal_6d8ffd0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x10]
        push esi
        push ebp
        lea ebx, ds:[edi+0x18]
        push ebx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6d90014
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6d90014 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6d9002c
        mov dword ptr ds : [esi+0xC], ecx
        public_6d9002c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6d901dd
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6d90054
        mov dword ptr ds : [esi+0xC], ecx
        public_6d90054 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6d901dd
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x38], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6d9007c
        mov dword ptr ds : [esi+0xC], ecx
        public_6d9007c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6d901dd
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+0x28]
        mov dword ptr ds : [edi+0x24], ecx
        add eax, 4
        push edx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da1620
        lea eax, ds:[edi+0x30]
        push eax
        mov ecx, edi
        call public_6da1620
        mov eax, dword ptr ds : [edi+0x38]
        xor ebx, ebx
        cmp eax, ebx
        jbe public_6d90169
        mov dword ptr ss : [esp+0x10], ebx
        lea ebx, ds:[ebx]
        public_6d900c0 : nop
        push 0xC
        call public_6db1f8a
        add esp, 4
        cmp eax, ebx
        je public_6d900da
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6d900e0
        public_6d900da : nop
        mov dword ptr ss : [esp+0x18], ebx
        mov eax, ebx
        public_6d900e0 : nop
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebp
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6d900f5
        mov dword ptr ds : [esi+0xC], 0x17
        public_6d900f5 : nop
        cmp dword ptr ds : [edi+0x1C], ebx
        jne public_6d9018a
        mov ecx, dword ptr ds : [edi+0x18]
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        inc ecx
        add eax, 4
        mov dword ptr ds : [edi+0x18], ecx
        push eax
        mov ecx, edi
        call public_6da1620
        test eax, eax
        jne public_6d9017d
        mov ebx, dword ptr ds : [edi+0x40]
        mov ebp, dword ptr ds : [ebx+4]
        push 0xC
        call public_6db1f8a
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_6d90130
        mov ebp, eax
        public_6d90130 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d90148
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        public_6d90148 : nop
        mov ebx, dword ptr ds : [edi+0x44]
        mov eax, dword ptr ss : [esp+0x10]
        inc ebx
        mov dword ptr ds : [edi+0x44], ebx
        mov ecx, dword ptr ds : [edi+0x38]
        inc eax
        xor ebx, ebx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jb public_6d900c0
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6d90169 : nop
        push esi
        push ebp
        lea eax, ds:[edi+0x18]
        push eax
        mov ecx, edi
        call public_6da13c0
        cmp eax, ebx
        mov dword ptr ds : [edi+0x1C], eax
        je public_6d90195
        public_6d9017d : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6d9018a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6d90195 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
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
        jbe public_6d901d1
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6d901d1 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6d901dd : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6d8ffd0)
    }
}

#undef public_6d90014
#undef public_6d9002c
#undef public_6d90054
#undef public_6d9007c
#undef public_6d900c0
#undef public_6d900da
#undef public_6d900e0
#undef public_6d900f5
#undef public_6d90130
#undef public_6d90148
#undef public_6d90169
#undef public_6d9017d
#undef public_6d9018a
#undef public_6d90195
#undef public_6d901d1
#undef public_6d901dd
