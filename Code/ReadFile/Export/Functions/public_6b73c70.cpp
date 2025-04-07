#include "ReadFile-PCH.h"


#define public_6b73c9b _public_6b73c9b
#define public_6b73cb7 _public_6b73cb7

PROC_DECLARE(0x6b73c70, internal_6b73c70, public_6b73c70);
extern "C" NAKED register_t __cdecl internal_6b73c70()
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
        jl public_6b73c9b
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        inc eax
        public_6b73c9b : nop
        test eax, eax
        jle public_6b73cb7
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        je public_6b73cb7
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        public_6b73cb7 : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6b73c70)
    }
}

#undef public_6b73c9b
#undef public_6b73cb7
