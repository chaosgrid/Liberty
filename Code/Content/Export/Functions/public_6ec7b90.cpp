#include "Content-PCH.h"


#define public_6ec7bb4 _public_6ec7bb4
#define public_6ec7bd1 _public_6ec7bd1
#define public_6ec7bf4 _public_6ec7bf4

PROC_DECLARE(0x6ec7b90, internal_6ec7b90, public_6ec7b90);
extern "C" NAKED register_t __cdecl internal_6ec7b90()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3048]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, ecx
        push 0
        mov ecx, edi
        call ebx
        mov esi, eax
        test esi, esi
        jne public_6ec7bb4
        mov dword ptr ss : [ebp+0xC], eax
        mov byte ptr ss : [ebp+0x10], al
        jmp public_6ec7bf4
        public_6ec7bb4 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        lea edx, ss:[ebp+0x10]
        jb public_6ec7bd1
        mov eax, 0x7F
        public_6ec7bd1 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        mov ebx, dword ptr ds : [public_6fb3048]
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0xC], eax
        public_6ec7bf4 : nop
        push 2
        mov ecx, edi
        lea esi, ss:[ebp+0x98]
        call ebx
        push eax
        push esi
        call dword ptr ds : [public_6fb36a8]
        add esp, 8
        push 1
        mov ecx, edi
        call ebx
        push eax
        mov eax, dword ptr ds : [esi]
        push eax
        call dword ptr ds : [public_6fb35f0]
        add esp, 8
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x94], eax
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec7b90)
    }
}

#undef public_6ec7bb4
#undef public_6ec7bd1
#undef public_6ec7bf4
