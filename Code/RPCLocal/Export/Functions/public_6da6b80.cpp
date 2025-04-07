#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da6bc9 _public_6da6bc9
#define public_6da6be1 _public_6da6be1
#define public_6da6bf1 _public_6da6bf1
#define public_6da6c10 _public_6da6c10
#define public_6da6c20 _public_6da6c20
#define public_6da6c3f _public_6da6c3f
#define public_6da6c4f _public_6da6c4f
#define public_6da6c6c _public_6da6c6c
#define public_6da6c7c _public_6da6c7c
#define public_6da6ca3 _public_6da6ca3
#define public_6da6cd6 _public_6da6cd6

PROC_DECLARE(0x6da6b80, internal_6da6b80, public_6da6b80);
extern "C" NAKED register_t __cdecl internal_6da6b80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da6bc9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da6bc9 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6da6be1
        mov dword ptr ds : [esi+0xC], ebp
        public_6da6be1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da6bf1
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6da6bf1 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da6c10
        mov dword ptr ds : [esi+0xC], ebp
        public_6da6c10 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da6c20
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6da6c20 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da6c3f
        mov dword ptr ds : [esi+0xC], ebp
        public_6da6c3f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da6c4f
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6da6c4f : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da6c6c
        mov dword ptr ds : [esi+0xC], ebp
        public_6da6c6c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da6c7c
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6da6c7c : nop
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x2C]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da6ca3
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6da6ca3 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6da16b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6da6cd6
        mov dword ptr ds : [ecx+0x10], esi
        public_6da6cd6 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6da6b80)
    }
}

#undef public_6da6bc9
#undef public_6da6be1
#undef public_6da6bf1
#undef public_6da6c10
#undef public_6da6c20
#undef public_6da6c3f
#undef public_6da6c4f
#undef public_6da6c6c
#undef public_6da6c7c
#undef public_6da6ca3
#undef public_6da6cd6
