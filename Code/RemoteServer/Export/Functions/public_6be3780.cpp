#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be37c2 _public_6be37c2
#define public_6be37d9 _public_6be37d9
#define public_6be3815 _public_6be3815
#define public_6be3845 _public_6be3845
#define public_6be3883 _public_6be3883
#define public_6be388f _public_6be388f

PROC_DECLARE(0x6be3780, internal_6be3780, public_6be3780);
extern "C" NAKED register_t __cdecl internal_6be3780()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
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
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6be37c2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6be37c2 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6be37d9
        mov dword ptr ds : [esi+0xC], 0x17
        public_6be37d9 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6be388f
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        mov edx, ecx
        add eax, 4
        push edx
        mov dword ptr ds : [edi+0x20], ecx
        mov dword ptr ds : [ebx], eax
        call public_6c09d26
        mov dword ptr ds : [edi+0x24], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6be3815
        mov dword ptr ds : [esi+0xC], 0x17
        public_6be3815 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6be388f
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ebp
        mov dword ptr ds : [edi+0x24], ecx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6be3845
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6be3845 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6bec3b0
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
        jbe public_6be3883
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6be3883 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6be388f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6be3780)
    }
}

#undef public_6be37c2
#undef public_6be37d9
#undef public_6be3815
#undef public_6be3845
#undef public_6be3883
#undef public_6be388f
