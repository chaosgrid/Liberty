#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5df0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce6020);
CLANG_FORWARD_PROC_SYMBOL(public_6d59940);

#define public_6d59966 _public_6d59966
#define public_6d59977 _public_6d59977
#define public_6d5998e _public_6d5998e
#define public_6d599bf _public_6d599bf
#define public_6d599cf _public_6d599cf
#define public_6d599e3 _public_6d599e3
#define public_6d599fe _public_6d599fe
#define public_6d59a1e _public_6d59a1e
#define public_6d59a3a _public_6d59a3a
#define public_6d59a55 _public_6d59a55

PROC_DECLARE(0x6d59940, internal_6d59940, public_6d59940);
extern "C" NAKED register_t __cdecl internal_6d59940()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [edi]
        mov ebx, ecx
        xor esi, esi
        mov byte ptr ds : [ebx], al
        mov dword ptr ds : [ebx+4], esi
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ds : [ebx+0xC], esi
        mov eax, dword ptr ds : [edi+8]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        jbe public_6d59966
        or ebp, 0xFFFFFFFF
        public_6d59966 : nop
        cmp ebx, edi
        jne public_6d599cf
        or edi, 0xFFFFFFFF
        cmp ebp, esi
        jbe public_6d59977
        call dword ptr ds : [public_6d64b04]
        public_6d59977 : nop
        mov ecx, ebx
        call public_6ce6020
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ebp
        cmp eax, 0xFFFFFFFF
        jae public_6d5998e
        mov edi, eax
        cmp edi, esi
        jbe public_6d599bf
        public_6d5998e : nop
        mov ecx, dword ptr ds : [ebx+4]
        add ecx, ebp
        sub eax, edi
        push eax
        lea edx, ds:[ecx+edi]
        push edx
        push ecx
        call dword ptr ds : [public_6d64c90]
        mov esi, dword ptr ds : [ebx+8]
        add esp, 0xC
        push 0
        sub esi, edi
        push esi
        mov ecx, ebx
        call public_6ce5df0
        test al, al
        je public_6d599bf
        push esi
        mov ecx, ebx
        call public_6ce5dd0
        public_6d599bf : nop
        mov ecx, ebx
        call public_6ce6020
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
        public_6d599cf : nop
        cmp ebp, esi
        jbe public_6d59a1e
        cmp ebp, eax
        jne public_6d59a1e
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6d599e3
        mov eax, offset public_6d64f30
        public_6d599e3 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6d59a1e
        mov dword ptr ds : [ebx+4], esi
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ds : [ebx+0xC], esi
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6d599fe
        mov eax, offset public_6d64f30
        public_6d599fe : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        pop edi
        pop esi
        inc cl
        mov byte ptr ds : [eax-1], cl
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
        public_6d59a1e : nop
        push 1
        push ebp
        mov ecx, ebx
        call public_6ce5df0
        test al, al
        je public_6d59a55
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, offset public_6d64f30
        je public_6d59a3a
        mov esi, edi
        public_6d59a3a : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebp
        mov ecx, ebx
        call public_6ce5dd0
        public_6d59a55 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d59940)
    }
}

#undef public_6d59966
#undef public_6d59977
#undef public_6d5998e
#undef public_6d599bf
#undef public_6d599cf
#undef public_6d599e3
#undef public_6d599fe
#undef public_6d59a1e
#undef public_6d59a3a
#undef public_6d59a55
