#include "Common-PCH.h"


#define public_626276c _public_626276c
#define public_62627a2 _public_62627a2
#define public_62627c5 _public_62627c5
#define public_62627d2 _public_62627d2
#define public_62627df _public_62627df
#define public_62627f6 _public_62627f6
#define public_626283b _public_626283b
#define public_626289c _public_626289c
#define public_62628d8 _public_62628d8
#define public_62628e1 _public_62628e1
#define public_6262916 _public_6262916
#define public_6262918 _public_6262918
#define public_626293b _public_626293b
#define public_6262948 _public_6262948
#define public_6262955 _public_6262955
#define public_626296c _public_626296c

PROC_DECLARE(0x6262750, internal_6262750, public_6262750);
extern "C" NAKED register_t __cdecl internal_6262750()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63991c0]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        mov ebp, ecx
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, edi
        jae public_626276c
        mov edi, eax
        public_626276c : nop
        xor ebx, ebx
        cmp edi, ebx
        jbe public_62627a2
        mov ecx, dword ptr ss : [ebp+4]
        sub eax, edi
        push eax
        lea edx, ds:[ecx+edi]
        push edx
        push ecx
        call dword ptr ds : [public_6399330]
        mov esi, dword ptr ss : [ebp+8]
        add esp, 0xC
        push ebx
        sub esi, edi
        push esi
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62627a2
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], esi
        mov byte ptr ds : [esi+eax], bl
        public_62627a2 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        or esi, 0xFFFFFFFF
        cmp eax, esi
        je public_62627df
        cmp dword ptr ss : [ebp+0x14], ebx
        je public_62627d2
        mov eax, dword ptr ss : [ebp+0x18]
        cmp eax, ebx
        je public_62627c5
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [ebp+0x18], ebx
        mov dword ptr ss : [ebp+0x1C], ebx
        public_62627c5 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        push ecx
        call dword ptr ds : [public_639913c]
        mov dword ptr ss : [ebp+0x14], ebx
        public_62627d2 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        call dword ptr ds : [public_639913c]
        mov dword ptr ss : [ebp+0x10], esi
        public_62627df : nop
        mov eax, dword ptr ss : [ebp+0x18]
        cmp eax, ebx
        je public_62627f6
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ss : [ebp+0x18], ebx
        mov dword ptr ss : [ebp+0x1C], ebx
        public_62627f6 : nop
        mov esi, dword ptr ss : [esp+0x14]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov dword ptr ss : [ebp+0x20], ebx
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_626283b
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_626283b : nop
        xor edi, edi
        push edi
        push edi
        push 3
        push edi
        push 1
        push 0x80000000
        push esi
        call dword ptr ds : [public_6399100]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x10], eax
        je public_626289c
        push edi
        push edi
        push edi
        push 2
        push edi
        push eax
        call dword ptr ds : [public_63990d0]
        cmp eax, edi
        mov dword ptr ss : [ebp+0x14], eax
        je public_626289c
        mov edx, dword ptr ss : [ebp+0x10]
        push edi
        push edx
        call dword ptr ds : [public_63990d4]
        push eax
        push edi
        push edi
        mov dword ptr ss : [ebp+0x1C], eax
        mov eax, dword ptr ss : [ebp+0x14]
        push 4
        push eax
        call dword ptr ds : [public_6399144]
        cmp eax, edi
        mov dword ptr ss : [ebp+0x18], eax
        je public_626289c
        mov dword ptr ss : [ebp+0x20], edi
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_626289c : nop
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, edi
        mov ecx, dword ptr ds : [public_63991c0]
        mov ebx, dword ptr ds : [ecx]
        je public_62628d8
        mov al, byte ptr ds : [esi-1]
        test al, al
        je public_62628d8
        cmp al, 0xFF
        je public_62628d8
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_63991b8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        push esi
        mov ecx, ebp
        call dword ptr ds : [public_63991a4]
        xor edi, edi
        public_62628d8 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ebx
        jae public_62628e1
        mov ebx, eax
        public_62628e1 : nop
        cmp ebx, edi
        jbe public_6262918
        mov ecx, dword ptr ss : [ebp+4]
        sub eax, ebx
        push eax
        lea edx, ds:[ecx+ebx]
        push edx
        push ecx
        call dword ptr ds : [public_6399330]
        mov esi, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub esi, ebx
        push esi
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6262916
        push esi
        mov ecx, ebp
        call dword ptr ds : [public_63991d8]
        public_6262916 : nop
        xor edi, edi
        public_6262918 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        or esi, 0xFFFFFFFF
        cmp eax, esi
        je public_6262955
        cmp dword ptr ss : [ebp+0x14], edi
        je public_6262948
        mov eax, dword ptr ss : [ebp+0x18]
        cmp eax, edi
        je public_626293b
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [ebp+0x18], edi
        mov dword ptr ss : [ebp+0x1C], edi
        public_626293b : nop
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        call dword ptr ds : [public_639913c]
        mov dword ptr ss : [ebp+0x14], edi
        public_6262948 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        call dword ptr ds : [public_639913c]
        mov dword ptr ss : [ebp+0x10], esi
        public_6262955 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        cmp eax, edi
        je public_626296c
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ss : [ebp+0x18], edi
        mov dword ptr ss : [ebp+0x1C], edi
        public_626296c : nop
        mov dword ptr ss : [ebp+0x20], edi
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6262750)
    }
}

#undef public_626276c
#undef public_62627a2
#undef public_62627c5
#undef public_62627d2
#undef public_62627df
#undef public_62627f6
#undef public_626283b
#undef public_626289c
#undef public_62628d8
#undef public_62628e1
#undef public_6262916
#undef public_6262918
#undef public_626293b
#undef public_6262948
#undef public_6262955
#undef public_626296c
