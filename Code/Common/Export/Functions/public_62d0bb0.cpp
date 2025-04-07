#include "Common-PCH.h"


#define public_62d0be6 _public_62d0be6

PROC_DECLARE(0x62d0bb0, internal_62d0bb0, public_62d0bb0);
extern "C" NAKED register_t __cdecl internal_62d0bb0()
{
    __asm
    {
        push ebx
        push esi
        xor edx, edx
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, offset public_63a0038
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc8bc], dl
        mov dword ptr ds : [public_63fc8b0], offset public_63a002c
        mov dword ptr ds : [public_63fc8b4], edx
        jb public_62d0be6
        mov eax, 0x1F
        public_62d0be6 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a0038
        mov edi, offset public_63fc8bc
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc8bc], dl
        mov dword ptr ds : [public_63fc8b8], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc8e4], offset public_63fc8b0
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d0bb0)
    }
}

#undef public_62d0be6
