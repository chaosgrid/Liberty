#include "Common-PCH.h"


#define public_62d11ea _public_62d11ea

PROC_DECLARE(0x62d11b0, internal_62d11b0, public_62d11b0);
extern "C" NAKED register_t __cdecl internal_62d11b0()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_63a016c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc6ac], dl
        mov dword ptr ds : [public_63fc6a0], offset public_63a0160
        mov dword ptr ds : [public_63fc6a4], 0xC
        jb public_62d11ea
        mov eax, 0x1F
        public_62d11ea : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a016c
        mov edi, offset public_63fc6ac
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc6ac], dl
        mov dword ptr ds : [public_63fc6a8], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc914], offset public_63fc6a0
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d11b0)
    }
}

#undef public_62d11ea
