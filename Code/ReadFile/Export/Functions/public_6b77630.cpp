#include "ReadFile-PCH.h"


#define public_6b7764e _public_6b7764e
#define public_6b77673 _public_6b77673

PROC_DECLARE(0x6b77630, internal_6b77630, public_6b77630);
extern "C" NAKED register_t __cdecl internal_6b77630()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        or ecx, 0xFFFFFFFF
        lea esi, ds:[eax+0x20]
        xor eax, eax
        mov edi, esi
        repne scasb
        mov eax, dword ptr ss : [esp+0x14]
        not ecx
        cmp eax, ecx
        jl public_6b7764e
        mov eax, ecx
        public_6b7764e : nop
        test eax, eax
        jle public_6b77673
        mov edx, dword ptr ss : [esp+0x10]
        test edx, edx
        je public_6b77673
        mov ecx, eax
        push ebx
        mov ebx, ecx
        mov edi, edx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        pop ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [edx+eax-1], 0
        public_6b77673 : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6b77630)
    }
}

#undef public_6b7764e
#undef public_6b77673
