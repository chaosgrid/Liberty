#include "Content-PCH.h"


#define public_6ec7b11 _public_6ec7b11
#define public_6ec7b30 _public_6ec7b30

PROC_DECLARE(0x6ec7af0, internal_6ec7af0, public_6ec7af0);
extern "C" NAKED register_t __cdecl internal_6ec7af0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+8]
        push esi
        call dword ptr ds : [public_6fb3054]
        mov esi, eax
        xor eax, eax
        cmp esi, eax
        jne public_6ec7b11
        pop esi
        mov byte ptr ds : [ebx+0x10], al
        mov dword ptr ds : [ebx+0xC], eax
        pop ebx
        ret 4
        public_6ec7b11 : nop
        push ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        lea ebp, ds:[ebx+0x10]
        jb public_6ec7b30
        mov eax, 0x7F
        public_6ec7b30 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+ebp], 0
        pop ebp
        pop esi
        mov dword ptr ds : [ebx+0xC], eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec7af0)
    }
}

#undef public_6ec7b11
#undef public_6ec7b30
