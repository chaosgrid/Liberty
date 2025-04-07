#include "Common-PCH.h"


#define public_62d0eea _public_62d0eea

PROC_DECLARE(0x62d0eb0, internal_62d0eb0, public_62d0eb0);
extern "C" NAKED register_t __cdecl internal_62d0eb0()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_63a00c8
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc7b4], dl
        mov dword ptr ds : [public_63fc7a8], offset public_63a00bc
        mov dword ptr ds : [public_63fc7ac], 6
        jb public_62d0eea
        mov eax, 0x1F
        public_62d0eea : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a00c8
        mov edi, offset public_63fc7b4
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc7b4], dl
        mov dword ptr ds : [public_63fc7b0], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc8fc], offset public_63fc7a8
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d0eb0)
    }
}

#undef public_62d0eea
