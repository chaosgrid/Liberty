#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec9530);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d430);

#define public_6eca188 _public_6eca188
#define public_6eca1b0 _public_6eca1b0
#define public_6eca1c8 _public_6eca1c8
#define public_6eca1e9 _public_6eca1e9
#define public_6eca1f1 _public_6eca1f1
#define public_6eca231 _public_6eca231
#define public_6eca265 _public_6eca265
#define public_6eca27d _public_6eca27d
#define public_6eca2a4 _public_6eca2a4

PROC_DECLARE(0x6eca130, internal_6eca130, public_6eca130);
extern "C" NAKED register_t __cdecl internal_6eca130()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ds : [public_6fb3048]
        push esi
        push edi
        mov edi, ecx
        push 0
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], edi
        call ebp
        mov esi, dword ptr ds : [public_6fb3000]
        push eax
        call esi
        add esp, 4
        push 1
        mov ecx, ebx
        mov dword ptr ds : [edi+0xC], eax
        call ebp
        push eax
        call esi
        add esp, 4
        push 2
        mov ecx, ebx
        mov dword ptr ds : [edi+0x10], eax
        call ebp
        push eax
        call public_6f1d430
        add esp, 4
        test al, al
        mov ecx, ebx
        push 2
        je public_6eca188
        call dword ptr ds : [public_6fb3044]
        jmp public_6eca1f1
        public_6eca188 : nop
        call dword ptr ds : [public_6fb30a4]
        sub esp, 0x44
        mov esi, eax
        test esi, esi
        mov eax, esp
        lea edx, ds:[eax+4]
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ds : [eax], 0
        mov byte ptr ds : [edx], 0
        jne public_6eca1b0
        mov dword ptr ds : [eax], esi
        mov byte ptr ds : [edx], 0
        jmp public_6eca1e9
        public_6eca1b0 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6eca1c8
        mov eax, 0x3F
        public_6eca1c8 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x5C]
        mov edi, dword ptr ss : [esp+0x54]
        mov byte ptr ds : [eax+ecx+4], 0
        mov dword ptr ds : [ecx], eax
        public_6eca1e9 : nop
        mov ecx, dword ptr ds : [edi+4]
        call public_6ec9530
        public_6eca1f1 : nop
        fst dword ptr ds : [edi+0x14]
        push 3
        mov ecx, ebx
        fstp dword ptr ds : [edi+0x18]
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6eca2a4
        push 3
        mov ecx, ebx
        call ebp
        push eax
        call public_6f1d430
        add esp, 4
        test al, al
        mov ecx, ebx
        push 3
        je public_6eca231
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [edi+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6eca231 : nop
        call dword ptr ds : [public_6fb30a4]
        sub esp, 0x44
        mov edx, esp
        mov esi, eax
        test esi, esi
        lea ebx, ds:[edx+4]
        mov dword ptr ds : [edx], 0
        mov byte ptr ds : [ebx], 0
        jne public_6eca265
        mov dword ptr ds : [edx], eax
        mov byte ptr ds : [ebx], al
        mov ecx, dword ptr ds : [edi+4]
        call public_6ec9530
        fstp dword ptr ds : [edi+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6eca265 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6eca27d
        mov eax, 0x3F
        public_6eca27d : nop
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        mov edi, ebx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x54]
        mov byte ptr ds : [eax+ebx], 0
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edi+4]
        call public_6ec9530
        fstp dword ptr ds : [edi+0x18]
        public_6eca2a4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6eca130)
    }
}

#undef public_6eca188
#undef public_6eca1b0
#undef public_6eca1c8
#undef public_6eca1e9
#undef public_6eca1f1
#undef public_6eca231
#undef public_6eca265
#undef public_6eca27d
#undef public_6eca2a4
