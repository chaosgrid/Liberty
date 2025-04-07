#include "Common-PCH.h"


#define public_62d0e6a _public_62d0e6a

PROC_DECLARE(0x62d0e30, internal_62d0e30, public_62d0e30);
extern "C" NAKED register_t __cdecl internal_62d0e30()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_63a00b0
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc7e0], dl
        mov dword ptr ds : [public_63fc7d4], offset public_63a00a4
        mov dword ptr ds : [public_63fc7d8], 5
        jb public_62d0e6a
        mov eax, 0x1F
        public_62d0e6a : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a00b0
        mov edi, offset public_63fc7e0
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc7e0], dl
        mov dword ptr ds : [public_63fc7dc], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc8f8], offset public_63fc7d4
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d0e30)
    }
}

#undef public_62d0e6a
