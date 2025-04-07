#include "Common-PCH.h"


#define public_62d14ea _public_62d14ea

PROC_DECLARE(0x62d14b0, internal_62d14b0, public_62d14b0);
extern "C" NAKED register_t __cdecl internal_62d14b0()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_63a01fc
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc5a4], dl
        mov dword ptr ds : [public_63fc598], offset public_63a01f0
        mov dword ptr ds : [public_63fc59c], 0x12
        jb public_62d14ea
        mov eax, 0x1F
        public_62d14ea : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a01fc
        mov edi, offset public_63fc5a4
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc5a4], dl
        mov dword ptr ds : [public_63fc5a0], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc92c], offset public_63fc598
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d14b0)
    }
}

#undef public_62d14ea
