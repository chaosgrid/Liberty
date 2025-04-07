#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec070);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6c03a92 _public_6c03a92
#define public_6c03ab4 _public_6c03ab4
#define public_6c03ad4 _public_6c03ad4
#define public_6c03aec _public_6c03aec
#define public_6c03b17 _public_6c03b17
#define public_6c03b42 _public_6c03b42
#define public_6c03b6d _public_6c03b6d
#define public_6c03ba0 _public_6c03ba0
#define public_6c03bde _public_6c03bde
#define public_6c03bea _public_6c03bea

PROC_DECLARE(0x6c03a50, internal_6c03a50, public_6c03a50);
extern "C" NAKED register_t __cdecl internal_6c03a50()
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
        je public_6c03a92
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6c03a92 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        push ecx
        push esi
        push ebx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        call public_6bec070
        test eax, eax
        je public_6c03ab4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6c03ab4 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_6c03ad4
        push eax
        lea eax, ds:[edi+0x20]
        push eax
        call dword ptr ds : [public_6c0b220]
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        call public_6c09aaa
        add esp, 0xC
        public_6c03ad4 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6c03aec
        mov dword ptr ds : [esi+0xC], ecx
        public_6c03aec : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c03bea
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0xA0], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6c03b17
        mov dword ptr ds : [esi+0xC], ecx
        public_6c03b17 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c03bea
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0xA4], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6c03b42
        mov dword ptr ds : [esi+0xC], ecx
        public_6c03b42 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c03bea
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0xA8], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6c03b6d
        mov dword ptr ds : [esi+0xC], ecx
        public_6c03b6d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c03bea
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ebp
        mov dword ptr ds : [edi+0xAC], ecx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c03ba0
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6c03ba0 : nop
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
        jbe public_6c03bde
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6c03bde : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6c03bea : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6c03a50)
    }
}

#undef public_6c03a92
#undef public_6c03ab4
#undef public_6c03ad4
#undef public_6c03aec
#undef public_6c03b17
#undef public_6c03b42
#undef public_6c03b6d
#undef public_6c03ba0
#undef public_6c03bde
#undef public_6c03bea
