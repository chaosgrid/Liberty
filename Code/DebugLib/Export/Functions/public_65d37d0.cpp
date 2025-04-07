#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d37d0);
CLANG_FORWARD_PROC_SYMBOL(public_65d3df0);
CLANG_FORWARD_PROC_SYMBOL(public_65d3e10);
CLANG_FORWARD_PROC_SYMBOL(public_65d4460);
CLANG_FORWARD_PROC_SYMBOL(public_65d6e7a);
CLANG_FORWARD_PROC_SYMBOL(public_65d73a0);

#define public_65d37f6 _public_65d37f6
#define public_65d3806 _public_65d3806
#define public_65d381d _public_65d381d
#define public_65d384d _public_65d384d
#define public_65d385d _public_65d385d
#define public_65d3871 _public_65d3871
#define public_65d388c _public_65d388c
#define public_65d38ac _public_65d38ac
#define public_65d38c8 _public_65d38c8
#define public_65d38e3 _public_65d38e3

PROC_DECLARE(0x65d37d0, internal_65d37d0, public_65d37d0);
extern "C" NAKED register_t __cdecl internal_65d37d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        xor esi, esi
        mov al, byte ptr ds : [edi]
        mov dword ptr ds : [ebx+4], esi
        mov byte ptr ds : [ebx], al
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ds : [ebx+0xC], esi
        mov eax, dword ptr ds : [edi+8]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        jbe public_65d37f6
        or ebp, 0xFFFFFFFF
        public_65d37f6 : nop
        cmp ebx, edi
        jne public_65d385d
        or edi, 0xFFFFFFFF
        cmp ebp, esi
        jbe public_65d3806
        call public_65d6e7a
        public_65d3806 : nop
        mov ecx, ebx
        call public_65d4460
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ebp
        cmp eax, 0xFFFFFFFF
        jae public_65d381d
        mov edi, eax
        cmp edi, esi
        jbe public_65d384d
        public_65d381d : nop
        mov ecx, dword ptr ds : [ebx+4]
        sub eax, edi
        add ecx, ebp
        push eax
        lea edx, ds:[ecx+edi]
        push edx
        push ecx
        call public_65d73a0
        mov esi, dword ptr ds : [ebx+8]
        add esp, 0xC
        sub esi, edi
        mov ecx, ebx
        push 0
        push esi
        call public_65d3e10
        test al, al
        je public_65d384d
        push esi
        mov ecx, ebx
        call public_65d3df0
        public_65d384d : nop
        mov ecx, ebx
        call public_65d4460
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret 4
        public_65d385d : nop
        cmp ebp, esi
        jbe public_65d38ac
        cmp ebp, eax
        jne public_65d38ac
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_65d3871
        mov eax, offset public_65e13a4
        public_65d3871 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_65d38ac
        mov dword ptr ds : [ebx+4], esi
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ds : [ebx+0xC], esi
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_65d388c
        mov eax, offset public_65e13a4
        public_65d388c : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        inc cl
        pop edi
        mov byte ptr ds : [eax-1], cl
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret 4
        public_65d38ac : nop
        push 1
        push ebp
        mov ecx, ebx
        call public_65d3e10
        test al, al
        je public_65d38e3
        mov edi, dword ptr ds : [edi+4]
        mov esi, offset public_65e13a4
        test edi, edi
        je public_65d38c8
        mov esi, edi
        public_65d38c8 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov eax, ecx
        push ebp
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, ebx
        call public_65d3df0
        public_65d38e3 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65d37d0)
    }
}

#undef public_65d37f6
#undef public_65d3806
#undef public_65d381d
#undef public_65d384d
#undef public_65d385d
#undef public_65d3871
#undef public_65d388c
#undef public_65d38ac
#undef public_65d38c8
#undef public_65d38e3
