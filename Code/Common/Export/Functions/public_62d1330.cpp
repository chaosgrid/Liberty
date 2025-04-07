#include "Common-PCH.h"


#define public_62d136a _public_62d136a

PROC_DECLARE(0x62d1330, internal_62d1330, public_62d1330);
extern "C" NAKED register_t __cdecl internal_62d1330()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_63a01b4
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc628], dl
        mov dword ptr ds : [public_63fc61c], offset public_63a01a8
        mov dword ptr ds : [public_63fc620], 0xF
        jb public_62d136a
        mov eax, 0x1F
        public_62d136a : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a01b4
        mov edi, offset public_63fc628
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc628], dl
        mov dword ptr ds : [public_63fc624], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc920], offset public_63fc61c
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d1330)
    }
}

#undef public_62d136a
