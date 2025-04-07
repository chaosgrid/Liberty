#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efd1a0);

#define public_6eccf7b _public_6eccf7b
#define public_6eccf96 _public_6eccf96

PROC_DECLARE(0x6eccf30, internal_6eccf30, public_6eccf30);
extern "C" NAKED register_t __cdecl internal_6eccf30()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
        mov ebp, ecx
        xor ebx, ebx
        push ebx
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3000]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        call public_6efd1a0
        add esp, 8
        push 1
        mov ecx, esi
        mov dword ptr ss : [ebp+0x40], eax
        call edi
        mov esi, eax
        cmp esi, ebx
        jne public_6eccf7b
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        pop ebp
        pop ebx
        ret 4
        public_6eccf7b : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6eccf96
        mov eax, 0x2F
        public_6eccf96 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0xC], eax
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eccf30)
    }
}

#undef public_6eccf7b
#undef public_6eccf96
