#include "Common-PCH.h"


#define public_62d0dea _public_62d0dea

PROC_DECLARE(0x62d0db0, internal_62d0db0, public_62d0db0);
extern "C" NAKED register_t __cdecl internal_62d0db0()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_63a0098
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc80c], dl
        mov dword ptr ds : [public_63fc800], offset public_63a008c
        mov dword ptr ds : [public_63fc804], 4
        jb public_62d0dea
        mov eax, 0x1F
        public_62d0dea : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a0098
        mov edi, offset public_63fc80c
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc80c], dl
        mov dword ptr ds : [public_63fc808], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc8f4], offset public_63fc800
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d0db0)
    }
}

#undef public_62d0dea
