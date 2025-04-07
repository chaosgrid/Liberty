#include "Common-PCH.h"


#define public_62d0c6a _public_62d0c6a

PROC_DECLARE(0x62d0c30, internal_62d0c30, public_62d0c30);
extern "C" NAKED register_t __cdecl internal_62d0c30()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_63a0050
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc890], dl
        mov dword ptr ds : [public_63fc884], offset public_63a0044
        mov dword ptr ds : [public_63fc888], 1
        jb public_62d0c6a
        mov eax, 0x1F
        public_62d0c6a : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a0050
        mov edi, offset public_63fc890
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc890], dl
        mov dword ptr ds : [public_63fc88c], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc8e8], offset public_63fc884
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d0c30)
    }
}

#undef public_62d0c6a
