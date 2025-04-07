#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b46942 _public_6b46942
#define public_6b4695a _public_6b4695a
#define public_6b46982 _public_6b46982
#define public_6b469a8 _public_6b469a8
#define public_6b469cc _public_6b469cc
#define public_6b469f9 _public_6b469f9
#define public_6b46a27 _public_6b46a27
#define public_6b46a56 _public_6b46a56
#define public_6b46a76 _public_6b46a76
#define public_6b46ab4 _public_6b46ab4
#define public_6b46ac0 _public_6b46ac0

PROC_DECLARE(0x6b46900, internal_6b46900, public_6b46900);
extern "C" NAKED register_t __cdecl internal_6b46900()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ebp, ecx
        lea ebx, ss:[ebp+0x10]
        push ebx
        push edi
        lea esi, ss:[ebp+0x18]
        push esi
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b46942
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b46942 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edx, 0x17
        jbe public_6b4695a
        mov dword ptr ds : [ebx+0xC], edx
        public_6b4695a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b46ac0
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x20], ecx
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], eax
        jbe public_6b46982
        mov dword ptr ds : [ebx+0xC], edx
        public_6b46982 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b46ac0
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x28], ecx
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc eax
        cmp eax, ecx
        mov dword ptr ds : [ebx], eax
        jbe public_6b469a8
        mov dword ptr ds : [ebx+0xC], edx
        public_6b469a8 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b46ac0
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        mov byte ptr ss : [ebp+0x2C], cl
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc eax
        cmp eax, ecx
        mov dword ptr ds : [ebx], eax
        jbe public_6b469cc
        mov dword ptr ds : [ebx+0xC], edx
        public_6b469cc : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b46ac0
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        mov dword ptr ds : [esi], eax
        je public_6b46a56
        mov eax, dword ptr ds : [ebx]
        movzx edi, cl
        mov ecx, dword ptr ds : [ebx+4]
        shl edi, 1
        add eax, edi
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], edi
        jbe public_6b469f9
        mov dword ptr ds : [ebx+0xC], edx
        public_6b469f9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b46ac0
        push edi
        call dword ptr ds : [public_6b6b1d8]
        mov dword ptr ss : [ebp+0x24], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, edi
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b46a27
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6b46a27 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b46ac0
        mov eax, dword ptr ds : [esi]
        mov ecx, edi
        mov edi, dword ptr ss : [ebp+0x24]
        mov edx, ecx
        shr ecx, 2
        mov esi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        add eax, ecx
        mov dword ptr ss : [ebp+0x18], eax
        public_6b46a56 : nop
        push ebx
        push edi
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b46a76
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b46a76 : nop
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
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
        jbe public_6b46ab4
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6b46ab4 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b46ac0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b46900)
    }
}

#undef public_6b46942
#undef public_6b4695a
#undef public_6b46982
#undef public_6b469a8
#undef public_6b469cc
#undef public_6b469f9
#undef public_6b46a27
#undef public_6b46a56
#undef public_6b46a76
#undef public_6b46ab4
#undef public_6b46ac0
