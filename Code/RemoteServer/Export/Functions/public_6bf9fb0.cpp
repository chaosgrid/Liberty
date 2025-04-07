#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bf9ff9 _public_6bf9ff9
#define public_6bfa011 _public_6bfa011
#define public_6bfa021 _public_6bfa021
#define public_6bfa040 _public_6bfa040
#define public_6bfa050 _public_6bfa050
#define public_6bfa06d _public_6bfa06d
#define public_6bfa07d _public_6bfa07d
#define public_6bfa09c _public_6bfa09c
#define public_6bfa09e _public_6bfa09e
#define public_6bfa0ad _public_6bfa0ad
#define public_6bfa0bd _public_6bfa0bd
#define public_6bfa0dd _public_6bfa0dd
#define public_6bfa0ed _public_6bfa0ed
#define public_6bfa114 _public_6bfa114
#define public_6bfa134 _public_6bfa134
#define public_6bfa165 _public_6bfa165

PROC_DECLARE(0x6bf9fb0, internal_6bf9fb0, public_6bf9fb0);
extern "C" NAKED register_t __cdecl internal_6bf9fb0()
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
        je public_6bf9ff9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf9ff9 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x16
        jbe public_6bfa011
        mov dword ptr ds : [ebx+0xC], edi
        public_6bfa011 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfa021
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfa021 : nop
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
        jbe public_6bfa040
        mov dword ptr ds : [ebx+0xC], edi
        public_6bfa040 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfa050
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfa050 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bfa06d
        mov dword ptr ds : [ebx+0xC], edi
        public_6bfa06d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfa07d
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfa07d : nop
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ss : [ebp+0x2C]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+0x24]
        test eax, eax
        je public_6bfa09c
        push eax
        call dword ptr ds : [public_6c0b210]
        add esp, 4
        inc al
        jmp public_6bfa09e
        public_6bfa09c : nop
        xor al, al
        public_6bfa09e : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        inc ecx
        cmp ecx, edx
        mov dword ptr ds : [ebx], ecx
        jbe public_6bfa0ad
        mov dword ptr ds : [ebx+0xC], edi
        public_6bfa0ad : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6bfa0bd
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfa0bd : nop
        mov ecx, dword ptr ds : [esi]
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        mov dword ptr ds : [esi], ecx
        je public_6bfa114
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        movzx eax, al
        shl eax, 1
        add ecx, eax
        cmp ecx, edx
        mov dword ptr ds : [ebx], ecx
        jbe public_6bfa0dd
        mov dword ptr ds : [ebx+0xC], edi
        public_6bfa0dd : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6bfa0ed
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfa0ed : nop
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x24]
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
        public_6bfa114 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6bebea0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bfa134
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfa134 : nop
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
        jbe public_6bfa165
        mov dword ptr ds : [ecx+0x10], ebx
        public_6bfa165 : nop
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
        UNREACHABLE_TRAP(0x6bf9fb0)
    }
}

#undef public_6bf9ff9
#undef public_6bfa011
#undef public_6bfa021
#undef public_6bfa040
#undef public_6bfa050
#undef public_6bfa06d
#undef public_6bfa07d
#undef public_6bfa09c
#undef public_6bfa09e
#undef public_6bfa0ad
#undef public_6bfa0bd
#undef public_6bfa0dd
#undef public_6bfa0ed
#undef public_6bfa114
#undef public_6bfa134
#undef public_6bfa165
