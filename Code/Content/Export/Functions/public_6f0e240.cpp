#include "Content-PCH.h"


#define public_6f0e266 _public_6f0e266

PROC_DECLARE(0x6f0e240, internal_6f0e240, public_6f0e240);
extern "C" NAKED register_t __cdecl internal_6f0e240()
{
    __asm
    {
        push ebx
        push esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor dl, dl
        mov edi, offset public_6fb4708
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        mov byte ptr ds : [public_6fd0694], dl
        jb public_6f0e266
        mov eax, 0x2F
        public_6f0e266 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_6fb4708
        mov edi, offset public_6fd0694
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        mov byte ptr ds : [eax+public_6fd0694], dl
        mov dword ptr ds : [public_6fd0690], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f0e240)
    }
}

#undef public_6f0e266
