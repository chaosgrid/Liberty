#include "Common-PCH.h"


#define public_62d0fea _public_62d0fea

PROC_DECLARE(0x62d0fb0, internal_62d0fb0, public_62d0fb0);
extern "C" NAKED register_t __cdecl internal_62d0fb0()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_639a06c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc75c], dl
        mov dword ptr ds : [public_63fc750], offset public_63a00ec
        mov dword ptr ds : [public_63fc754], 8
        jb public_62d0fea
        mov eax, 0x1F
        public_62d0fea : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_639a06c
        mov edi, offset public_63fc75c
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc75c], dl
        mov dword ptr ds : [public_63fc758], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc904], offset public_63fc750
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d0fb0)
    }
}

#undef public_62d0fea
