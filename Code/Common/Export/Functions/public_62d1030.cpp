#include "Common-PCH.h"


#define public_62d106a _public_62d106a

PROC_DECLARE(0x62d1030, internal_62d1030, public_62d1030);
extern "C" NAKED register_t __cdecl internal_62d1030()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_63a0108
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc730], dl
        mov dword ptr ds : [public_63fc724], offset public_63a00fc
        mov dword ptr ds : [public_63fc728], 9
        jb public_62d106a
        mov eax, 0x1F
        public_62d106a : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a0108
        mov edi, offset public_63fc730
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc730], dl
        mov dword ptr ds : [public_63fc72c], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc908], offset public_63fc724
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d1030)
    }
}

#undef public_62d106a
