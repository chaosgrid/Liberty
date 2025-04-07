#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bee789 _public_6bee789
#define public_6bee7a1 _public_6bee7a1
#define public_6bee7b1 _public_6bee7b1
#define public_6bee7d0 _public_6bee7d0
#define public_6bee7e0 _public_6bee7e0
#define public_6bee7ff _public_6bee7ff
#define public_6bee80f _public_6bee80f
#define public_6bee82e _public_6bee82e
#define public_6bee83e _public_6bee83e
#define public_6bee85c _public_6bee85c
#define public_6bee86c _public_6bee86c
#define public_6bee887 _public_6bee887
#define public_6bee897 _public_6bee897
#define public_6bee8b4 _public_6bee8b4
#define public_6bee8c4 _public_6bee8c4
#define public_6bee8e3 _public_6bee8e3
#define public_6bee8f3 _public_6bee8f3
#define public_6bee918 _public_6bee918
#define public_6bee928 _public_6bee928
#define public_6bee952 _public_6bee952
#define public_6bee972 _public_6bee972
#define public_6bee9a3 _public_6bee9a3

PROC_DECLARE(0x6bee740, internal_6bee740, public_6bee740);
extern "C" NAKED register_t __cdecl internal_6bee740()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebx, ss:[ebp+0x10]
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        push edi
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        call public_6bebe50
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bee789
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bee789 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x16
        jbe public_6bee7a1
        mov dword ptr ds : [ebx+0xC], edi
        public_6bee7a1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bee7b1
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bee7b1 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bee7d0
        mov dword ptr ds : [ebx+0xC], edi
        public_6bee7d0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bee7e0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bee7e0 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bee7ff
        mov dword ptr ds : [ebx+0xC], edi
        public_6bee7ff : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bee80f
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bee80f : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bee82e
        mov dword ptr ds : [ebx+0xC], edi
        public_6bee82e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bee83e
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bee83e : nop
        mov eax, dword ptr ds : [esi]
        fld dword ptr ss : [ebp+0x34]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bee85c
        mov dword ptr ds : [ebx+0xC], edi
        public_6bee85c : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bee86c
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bee86c : nop
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ss : [ebp+0x38]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bee887
        mov dword ptr ds : [ebx+0xC], edi
        public_6bee887 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bee897
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bee897 : nop
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ss : [ebp+0x39]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bee8b4
        mov dword ptr ds : [ebx+0xC], edi
        public_6bee8b4 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bee8c4
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bee8c4 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bee8e3
        mov dword ptr ds : [ebx+0xC], edi
        public_6bee8e3 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bee8f3
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bee8f3 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+0x28]
        test eax, eax
        jbe public_6bee952
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bee918
        mov dword ptr ds : [ebx+0xC], edi
        public_6bee918 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bee928
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bee928 : nop
        mov eax, dword ptr ss : [ebp+0x28]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x3C]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, 0x16
        public_6bee952 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6bebea0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bee972
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bee972 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [ebx]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jbe public_6bee9a3
        mov dword ptr ds : [ecx+0x10], ebx
        public_6bee9a3 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6bee740)
    }
}

#undef public_6bee789
#undef public_6bee7a1
#undef public_6bee7b1
#undef public_6bee7d0
#undef public_6bee7e0
#undef public_6bee7ff
#undef public_6bee80f
#undef public_6bee82e
#undef public_6bee83e
#undef public_6bee85c
#undef public_6bee86c
#undef public_6bee887
#undef public_6bee897
#undef public_6bee8b4
#undef public_6bee8c4
#undef public_6bee8e3
#undef public_6bee8f3
#undef public_6bee918
#undef public_6bee928
#undef public_6bee952
#undef public_6bee972
#undef public_6bee9a3
