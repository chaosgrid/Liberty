#include "Common-PCH.h"


#define public_62d15ea _public_62d15ea

PROC_DECLARE(0x62d15b0, internal_62d15b0, public_62d15b0);
extern "C" NAKED register_t __cdecl internal_62d15b0()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_63a0238
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc54c], dl
        mov dword ptr ds : [public_63fc540], offset public_63a022c
        mov dword ptr ds : [public_63fc544], 0x14
        jb public_62d15ea
        mov eax, 0x1F
        public_62d15ea : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a0238
        mov edi, offset public_63fc54c
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc54c], dl
        mov dword ptr ds : [public_63fc548], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc934], offset public_63fc540
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d15b0)
    }
}

#undef public_62d15ea
