#include "Common-PCH.h"


#define public_62d13ea _public_62d13ea

PROC_DECLARE(0x62d13b0, internal_62d13b0, public_62d13b0);
extern "C" NAKED register_t __cdecl internal_62d13b0()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_63a01cc
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc5fc], dl
        mov dword ptr ds : [public_63fc5f0], offset public_63a01c0
        mov dword ptr ds : [public_63fc5f4], 0x10
        jb public_62d13ea
        mov eax, 0x1F
        public_62d13ea : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a01cc
        mov edi, offset public_63fc5fc
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc5fc], dl
        mov dword ptr ds : [public_63fc5f8], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc924], offset public_63fc5f0
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d13b0)
    }
}

#undef public_62d13ea
