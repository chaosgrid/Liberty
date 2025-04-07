#include "Common-PCH.h"


#define public_62d0d6a _public_62d0d6a

PROC_DECLARE(0x62d0d30, internal_62d0d30, public_62d0d30);
extern "C" NAKED register_t __cdecl internal_62d0d30()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_63a0080
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc838], dl
        mov dword ptr ds : [public_63fc82c], offset public_63a0074
        mov dword ptr ds : [public_63fc830], 3
        jb public_62d0d6a
        mov eax, 0x1F
        public_62d0d6a : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a0080
        mov edi, offset public_63fc838
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc838], dl
        mov dword ptr ds : [public_63fc834], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc8f0], offset public_63fc82c
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d0d30)
    }
}

#undef public_62d0d6a
