#include "Common-PCH.h"


#define public_62d12ea _public_62d12ea

PROC_DECLARE(0x62d12b0, internal_62d12b0, public_62d12b0);
extern "C" NAKED register_t __cdecl internal_62d12b0()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_63a019c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ds : [public_63fc654], dl
        mov dword ptr ds : [public_63fc648], offset public_63a0190
        mov dword ptr ds : [public_63fc64c], 0xE
        jb public_62d12ea
        mov eax, 0x1F
        public_62d12ea : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a019c
        mov edi, offset public_63fc654
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_63fc654], dl
        mov dword ptr ds : [public_63fc650], eax
        mov eax, dword ptr ds : [public_63fc8e0]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_63fc91c], offset public_63fc648
        mov dword ptr ds : [public_63fc8e0], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62d12b0)
    }
}

#undef public_62d12ea
