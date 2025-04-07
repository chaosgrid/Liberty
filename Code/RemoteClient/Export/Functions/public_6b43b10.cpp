#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b43b5a _public_6b43b5a
#define public_6b43b72 _public_6b43b72
#define public_6b43b9f _public_6b43b9f
#define public_6b43bcc _public_6b43bcc
#define public_6b43be1 _public_6b43be1
#define public_6b43c16 _public_6b43c16
#define public_6b43c29 _public_6b43c29
#define public_6b43c60 _public_6b43c60
#define public_6b43c81 _public_6b43c81
#define public_6b43ca9 _public_6b43ca9
#define public_6b43cdf _public_6b43cdf
#define public_6b43cf7 _public_6b43cf7
#define public_6b43d17 _public_6b43d17
#define public_6b43d38 _public_6b43d38
#define public_6b43d45 _public_6b43d45
#define public_6b43d83 _public_6b43d83
#define public_6b43d8f _public_6b43d8f

PROC_DECLARE(0x6b43b10, internal_6b43b10, public_6b43b10);
extern "C" NAKED register_t __cdecl internal_6b43b10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push edi
        lea ebx, ss:[ebp+0x10]
        push ebx
        push eax
        mov dword ptr ds : [ebx+8], ecx
        lea edi, ss:[ebp+0x18]
        push edi
        mov ecx, ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b43b5a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b43b5a : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov esi, 0x17
        jbe public_6b43b72
        mov dword ptr ds : [ebx+0xC], esi
        public_6b43b72 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b43d8f
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov eax, edx
        test eax, eax
        mov dword ptr ss : [ebp+0x24], edx
        jbe public_6b43c16
        mov ecx, dword ptr ds : [ebx]
        add ecx, eax
        cmp ecx, dword ptr ds : [ebx+4]
        jbe public_6b43b9f
        mov dword ptr ds : [ebx+0xC], esi
        public_6b43b9f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b43d8f
        mov edx, dword ptr ss : [ebp+0x24]
        push edx
        call public_6b6a134
        add esp, 4
        test eax, eax
        mov dword ptr ss : [ebp+0x20], eax
        jne public_6b43bcc
        pop edi
        pop esi
        pop ebp
        mov eax, 5
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b43bcc : nop
        mov eax, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b43be1
        mov dword ptr ds : [ebx+0xC], esi
        public_6b43be1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b43d8f
        mov eax, dword ptr ss : [ebp+0x24]
        mov esi, dword ptr ds : [edi]
        mov edi, dword ptr ss : [ebp+0x20]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x20], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov esi, 0x17
        public_6b43c16 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b43c29
        mov dword ptr ds : [ebx+0xC], esi
        public_6b43c29 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b43d8f
        mov eax, dword ptr ss : [ebp+0x18]
        lea edi, ss:[ebp+0x18]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        test cx, cx
        mov dword ptr ds : [edi], eax
        mov dword ptr ss : [esp+0x18], ecx
        jbe public_6b43d17
        mov dword ptr ss : [esp+0x20], 0
        lea esp, ss:[esp]
        public_6b43c60 : nop
        push 8
        call public_6b6a134
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, eax
        mov eax, dword ptr ds : [ebx]
        add eax, 4
        add esp, 4
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ebx], eax
        jbe public_6b43c81
        mov dword ptr ds : [ebx+0xC], esi
        public_6b43c81 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b43d38
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6b43ca9
        mov dword ptr ds : [ebx+0xC], esi
        public_6b43ca9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b43d38
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov esi, dword ptr ss : [ebp+0x2C]
        mov eax, dword ptr ds : [esi+4]
        push 0xC
        mov dword ptr ss : [esp+0x14], eax
        call public_6b6a134
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], esi
        jne public_6b43cdf
        mov ecx, eax
        public_6b43cdf : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6b43cf7
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        public_6b43cf7 : nop
        mov esi, dword ptr ss : [ebp+0x30]
        mov eax, dword ptr ss : [esp+0x20]
        inc esi
        inc eax
        cmp ax, word ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp+0x30], esi
        mov dword ptr ss : [esp+0x20], eax
        mov esi, 0x17
        jb public_6b43c60
        public_6b43d17 : nop
        mov eax, dword ptr ss : [esp+0x24]
        push ebx
        push eax
        push edi
        mov ecx, ebp
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b43d45
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b43d38 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b43d45 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov esi, edx
        mov edx, dword ptr ds : [ebx]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov ebx, dword ptr ds : [ebx]
        add eax, 2
        cmp ebx, eax
        jbe public_6b43d83
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6b43d83 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b43d8f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6b43b10)
    }
}

#undef public_6b43b5a
#undef public_6b43b72
#undef public_6b43b9f
#undef public_6b43bcc
#undef public_6b43be1
#undef public_6b43c16
#undef public_6b43c29
#undef public_6b43c60
#undef public_6b43c81
#undef public_6b43ca9
#undef public_6b43cdf
#undef public_6b43cf7
#undef public_6b43d17
#undef public_6b43d38
#undef public_6b43d45
#undef public_6b43d83
#undef public_6b43d8f
