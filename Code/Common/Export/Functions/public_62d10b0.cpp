#include "Common-PCH.h"


#define public_62d10ea _public_62d10ea

PROC_DECLARE(0x62d10b0, internal_62d10b0, public_62d10b0);
extern "C" NAKED register_t __cdecl internal_62d10b0()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_63a012c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc704], dl
        mov dword ptr ds : [public_63fc6f8], offset public_63a0120
        mov dword ptr ds : [public_63fc6fc], 0xA
        jb public_62d10ea
        mov eax, 0x1F
        public_62d10ea : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a012c
        mov edi, offset public_63fc704
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc704], dl
        mov dword ptr ds : [public_63fc700], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc90c], offset public_63fc6f8
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d10b0)
    }
}

#undef public_62d10ea
