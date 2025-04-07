#include "Content-PCH.h"


#define public_6ec0f2a _public_6ec0f2a
#define public_6ec0f45 _public_6ec0f45
#define public_6ec0f60 _public_6ec0f60

PROC_DECLARE(0x6ec0ee0, internal_6ec0ee0, public_6ec0ee0);
extern "C" NAKED register_t __cdecl internal_6ec0ee0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
        mov ebp, ecx
        push 0
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        push 1
        mov ecx, esi
        mov dword ptr ss : [ebp+0x40], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec0f60
        push 1
        mov ecx, esi
        call edi
        mov esi, eax
        xor eax, eax
        cmp esi, eax
        jne public_6ec0f2a
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x10], al
        mov dword ptr ss : [ebp+0xC], eax
        pop ebp
        ret 4
        public_6ec0f2a : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ec0f45
        mov eax, 0x2F
        public_6ec0f45 : nop
        push ebx
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx], 0
        pop ebx
        mov dword ptr ss : [ebp+0xC], eax
        public_6ec0f60 : nop
        pop edi
        pop esi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6ec0ee0)
    }
}

#undef public_6ec0f2a
#undef public_6ec0f45
#undef public_6ec0f60
