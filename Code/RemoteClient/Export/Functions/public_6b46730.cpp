#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b46779 _public_6b46779
#define public_6b46791 _public_6b46791
#define public_6b467a1 _public_6b467a1
#define public_6b467c0 _public_6b467c0
#define public_6b467d0 _public_6b467d0
#define public_6b467ed _public_6b467ed
#define public_6b467fd _public_6b467fd
#define public_6b4681c _public_6b4681c
#define public_6b4681e _public_6b4681e
#define public_6b4682d _public_6b4682d
#define public_6b4683d _public_6b4683d
#define public_6b4685d _public_6b4685d
#define public_6b4686d _public_6b4686d
#define public_6b46894 _public_6b46894
#define public_6b468b4 _public_6b468b4
#define public_6b468e5 _public_6b468e5

PROC_DECLARE(0x6b46730, internal_6b46730, public_6b46730);
extern "C" NAKED register_t __cdecl internal_6b46730()
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
        call public_6b4e740
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b46779
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b46779 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x16
        jbe public_6b46791
        mov dword ptr ds : [ebx+0xC], edi
        public_6b46791 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b467a1
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b467a1 : nop
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
        jbe public_6b467c0
        mov dword ptr ds : [ebx+0xC], edi
        public_6b467c0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b467d0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b467d0 : nop
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
        jbe public_6b467ed
        mov dword ptr ds : [ebx+0xC], edi
        public_6b467ed : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b467fd
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b467fd : nop
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ss : [ebp+0x2C]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+0x24]
        test eax, eax
        je public_6b4681c
        push eax
        call dword ptr ds : [public_6b6b1e4]
        add esp, 4
        inc al
        jmp public_6b4681e
        public_6b4681c : nop
        xor al, al
        public_6b4681e : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        inc ecx
        cmp ecx, edx
        mov dword ptr ds : [ebx], ecx
        jbe public_6b4682d
        mov dword ptr ds : [ebx+0xC], edi
        public_6b4682d : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6b4683d
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b4683d : nop
        mov ecx, dword ptr ds : [esi]
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        mov dword ptr ds : [esi], ecx
        je public_6b46894
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        movzx eax, al
        shl eax, 1
        add ecx, eax
        cmp ecx, edx
        mov dword ptr ds : [ebx], ecx
        jbe public_6b4685d
        mov dword ptr ds : [ebx+0xC], edi
        public_6b4685d : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6b4686d
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b4686d : nop
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
        public_6b46894 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6b4e790
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b468b4
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b468b4 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6b4ecd0
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
        jbe public_6b468e5
        mov dword ptr ds : [ecx+0x10], ebx
        public_6b468e5 : nop
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
        UNREACHABLE_TRAP(0x6b46730)
    }
}

#undef public_6b46779
#undef public_6b46791
#undef public_6b467a1
#undef public_6b467c0
#undef public_6b467d0
#undef public_6b467ed
#undef public_6b467fd
#undef public_6b4681c
#undef public_6b4681e
#undef public_6b4682d
#undef public_6b4683d
#undef public_6b4685d
#undef public_6b4686d
#undef public_6b46894
#undef public_6b468b4
#undef public_6b468e5
