#include "Common-PCH.h"


#define public_62d116a _public_62d116a

PROC_DECLARE(0x62d1130, internal_62d1130, public_62d1130);
extern "C" NAKED register_t __cdecl internal_62d1130()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_63a0148
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc6d8], dl
        mov dword ptr ds : [public_63fc6cc], offset public_63a013c
        mov dword ptr ds : [public_63fc6d0], 0xB
        jb public_62d116a
        mov eax, 0x1F
        public_62d116a : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a0148
        mov edi, offset public_63fc6d8
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc6d8], dl
        mov dword ptr ds : [public_63fc6d4], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc910], offset public_63fc6cc
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d1130)
    }
}

#undef public_62d116a
