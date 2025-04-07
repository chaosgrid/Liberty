#include "Common-PCH.h"


#define public_63048f8 _public_63048f8

PROC_DECLARE(0x63048d0, internal_63048d0, public_63048d0);
extern "C" NAKED register_t __cdecl internal_63048d0()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_63a2728
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        mov byte ptr ds : [public_63fce24], dl
        jb public_63048f8
        mov eax, 0x7F
        public_63048f8 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_63a2728
        mov edi, offset public_63fce24
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        mov byte ptr ds : [eax+public_63fce24], dl
        mov dword ptr ds : [public_63fce20], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63048d0)
    }
}

#undef public_63048f8
