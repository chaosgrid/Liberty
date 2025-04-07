#include "Common-PCH.h"


#define public_62d156a _public_62d156a

PROC_DECLARE(0x62d1530, internal_62d1530, public_62d1530);
extern "C" NAKED register_t __cdecl internal_62d1530()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_63a021c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc578], dl
        mov dword ptr ds : [public_63fc56c], offset public_63a0210
        mov dword ptr ds : [public_63fc570], 0x13
        jb public_62d156a
        mov eax, 0x1F
        public_62d156a : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a021c
        mov edi, offset public_63fc578
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc578], dl
        mov dword ptr ds : [public_63fc574], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc930], offset public_63fc56c
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d1530)
    }
}

#undef public_62d156a
