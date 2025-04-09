#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436be0);

#define public_436c20 _public_436c20
#define public_436c2e _public_436c2e
#define public_436c41 _public_436c41
#define public_436c78 _public_436c78
#define public_436c89 _public_436c89
#define public_436c9d _public_436c9d
#define public_436cb9 _public_436cb9
#define public_436ccd _public_436ccd
#define public_436ceb _public_436ceb
#define public_436d0c _public_436d0c

PROC_DECLARE(0x436be0, internal_436be0, public_436be0);
extern "C" NAKED register_t __cdecl internal_436be0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp], edx
        push esi
        xor ecx, ecx
        add ebp, 4
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov al, byte ptr ds : [edi]
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+0xC], ecx
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edx]
        mov ebx, eax
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], ecx
        jae public_436c20
        mov ebx, esi
        public_436c20 : nop
        cmp ebp, edi
        jne public_436c89
        cmp ebx, ecx
        jbe public_436c2e
        call dword ptr ds : [public_5c7064]
        public_436c2e : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_436c41
        mov esi, eax
        public_436c41 : nop
        test esi, esi
        jbe public_436c78
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_5c709c]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_436c78
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c706c]
        public_436c78 : nop
        push 0
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_5c707c]
        jmp public_436d0c
        public_436c89 : nop
        cmp ebx, ecx
        jbe public_436ccd
        cmp ebx, eax
        jne public_436ccd
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        jne public_436c9d
        mov eax, dword ptr ds : [public_5c7078]
        public_436c9d : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_436ccd
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_436cb9
        mov eax, dword ptr ds : [public_5c7078]
        public_436cb9 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_436d0c
        public_436ccd : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_436d0c
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_5c7078]
        je public_436ceb
        mov esi, edi
        public_436ceb : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_436d0c : nop
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [ebp+0x10], edx
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ss : [ebp+0x14], eax
        mov ecx, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x18], ecx
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x436be0)
    }
}

#undef public_436c20
#undef public_436c2e
#undef public_436c41
#undef public_436c78
#undef public_436c89
#undef public_436c9d
#undef public_436cb9
#undef public_436ccd
#undef public_436ceb
#undef public_436d0c
