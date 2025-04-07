#include "Content-PCH.h"


#define public_6ecae60 _public_6ecae60
#define public_6ecae7c _public_6ecae7c
#define public_6ecae96 _public_6ecae96

PROC_DECLARE(0x6ecae40, internal_6ecae40, public_6ecae40);
extern "C" NAKED register_t __cdecl internal_6ecae40()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        push ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ecae60
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        jmp public_6ecae96
        public_6ecae60 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ecae7c
        mov eax, 0x2F
        public_6ecae7c : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0xC], eax
        pop edi
        public_6ecae96 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push 1
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        pop esi
        mov dword ptr ss : [ebp+0x40], eax
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ecae40)
    }
}

#undef public_6ecae60
#undef public_6ecae7c
#undef public_6ecae96
