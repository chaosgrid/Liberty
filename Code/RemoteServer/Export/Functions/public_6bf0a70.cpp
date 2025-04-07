#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda220);
CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bf0ab4 _public_6bf0ab4
#define public_6bf0acc _public_6bf0acc
#define public_6bf0af6 _public_6bf0af6
#define public_6bf0b20 _public_6bf0b20
#define public_6bf0b52 _public_6bf0b52
#define public_6bf0b8a _public_6bf0b8a
#define public_6bf0bc8 _public_6bf0bc8
#define public_6bf0bd4 _public_6bf0bd4

PROC_DECLARE(0x6bf0a70, internal_6bf0a70, public_6bf0a70);
extern "C" NAKED register_t __cdecl internal_6bf0a70()
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
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf0ab4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bf0ab4 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6bf0acc
        mov dword ptr ds : [esi+0xC], ecx
        public_6bf0acc : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf0bd4
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], edx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6bf0af6
        mov dword ptr ds : [esi+0xC], ecx
        public_6bf0af6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf0bd4
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x24], edx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 0xC
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6bf0b20
        mov dword ptr ds : [esi+0xC], ecx
        public_6bf0b20 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf0bd4
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x28]
        call public_6bda4c0
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf0b52
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bf0b52 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf0bd4
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x34]
        call public_6bda220
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        add ebp, 0x10
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf0b8a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bf0b8a : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
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
        jbe public_6bf0bc8
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6bf0bc8 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bf0bd4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bf0a70)
    }
}

#undef public_6bf0ab4
#undef public_6bf0acc
#undef public_6bf0af6
#undef public_6bf0b20
#undef public_6bf0b52
#undef public_6bf0b8a
#undef public_6bf0bc8
#undef public_6bf0bd4
