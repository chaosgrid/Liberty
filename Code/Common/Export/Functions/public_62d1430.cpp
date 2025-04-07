#include "Common-PCH.h"


#define public_62d146a _public_62d146a

PROC_DECLARE(0x62d1430, internal_62d1430, public_62d1430);
extern "C" NAKED register_t __cdecl internal_62d1430()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_63a01e4
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc5d0], dl
        mov dword ptr ds : [public_63fc5c4], offset public_63a01d8
        mov dword ptr ds : [public_63fc5c8], 0x11
        jb public_62d146a
        mov eax, 0x1F
        public_62d146a : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a01e4
        mov edi, offset public_63fc5d0
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc5d0], dl
        mov dword ptr ds : [public_63fc5cc], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc928], offset public_63fc5c4
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d1430)
    }
}

#undef public_62d146a
