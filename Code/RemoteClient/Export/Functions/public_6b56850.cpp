#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b5689a _public_6b5689a
#define public_6b568b1 _public_6b568b1
#define public_6b568c4 _public_6b568c4
#define public_6b56908 _public_6b56908
#define public_6b5691b _public_6b5691b
#define public_6b5693b _public_6b5693b
#define public_6b5694e _public_6b5694e
#define public_6b56983 _public_6b56983
#define public_6b56996 _public_6b56996
#define public_6b569b9 _public_6b569b9
#define public_6b569da _public_6b569da
#define public_6b569ed _public_6b569ed
#define public_6b56a13 _public_6b56a13
#define public_6b56a36 _public_6b56a36
#define public_6b56a6a _public_6b56a6a

PROC_DECLARE(0x6b56850, internal_6b56850, public_6b56850);
extern "C" NAKED register_t __cdecl internal_6b56850()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebp, ds:[ebx+0x10]
        push esi
        push edi
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+0xC], 0
        mov eax, dword ptr ds : [ebx+0x14]
        push ebp
        push eax
        lea edi, ds:[ebx+0x18]
        push edi
        mov ecx, ebx
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b5689a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5689a : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b568b1
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6b568b1 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b568c4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b568c4 : nop
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [ebx+0x420]
        mov esi, dword ptr ds : [public_6b6b1e4]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [edi], eax
        lea eax, ds:[ebx+0x20]
        push eax
        call esi
        mov byte ptr ss : [esp+0x1C], al
        lea eax, ds:[ebx+0x220]
        push eax
        call esi
        mov esi, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        add esp, 8
        inc esi
        mov ecx, esi
        cmp ecx, edx
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [ebp], esi
        jbe public_6b56908
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6b56908 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        je public_6b5691b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5691b : nop
        mov ecx, dword ptr ds : [edi]
        mov dl, byte ptr ss : [esp+0x18]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [edi], ecx
        mov ecx, dword ptr ss : [ebp]
        mov esi, dword ptr ss : [ebp+4]
        inc ecx
        cmp ecx, esi
        mov dword ptr ss : [ebp], ecx
        jbe public_6b5693b
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6b5693b : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        je public_6b5694e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5694e : nop
        mov ecx, dword ptr ds : [edi]
        mov byte ptr ds : [ecx], al
        inc ecx
        test dl, dl
        mov dword ptr ds : [edi], ecx
        je public_6b569b9
        lea esi, ds:[ebx+0x20]
        push esi
        call dword ptr ds : [public_6b6b19c]
        movzx eax, byte ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        shl eax, 1
        add ecx, eax
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [ebp], ecx
        jbe public_6b56983
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6b56983 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        je public_6b56996
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b56996 : nop
        mov edi, dword ptr ds : [edi]
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
        mov al, byte ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+0x18], ecx
        public_6b569b9 : nop
        test al, al
        je public_6b56a13
        mov esi, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        movzx eax, al
        shl eax, 1
        add esi, eax
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ss : [ebp], esi
        jbe public_6b569da
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6b569da : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        je public_6b569ed
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b569ed : nop
        mov edi, dword ptr ds : [ebx+0x18]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        lea esi, ds:[ebx+0x220]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ds : [ebx+0x18], ecx
        public_6b56a13 : nop
        mov edx, dword ptr ds : [ebx+0x14]
        push ebp
        push edx
        lea eax, ds:[ebx+0x18]
        push eax
        mov ecx, ebx
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b56a36
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b56a36 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ss : [ebp]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jbe public_6b56a6a
        mov dword ptr ds : [ecx+0x10], ebp
        public_6b56a6a : nop
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
        UNREACHABLE_TRAP(0x6b56850)
    }
}

#undef public_6b5689a
#undef public_6b568b1
#undef public_6b568c4
#undef public_6b56908
#undef public_6b5691b
#undef public_6b5693b
#undef public_6b5694e
#undef public_6b56983
#undef public_6b56996
#undef public_6b569b9
#undef public_6b569da
#undef public_6b569ed
#undef public_6b56a13
#undef public_6b56a36
#undef public_6b56a6a
