#include "Server-PCH.h"


#define public_6d5f903 _public_6d5f903

PROC_DECLARE(0x6d5f8e0, internal_6d5f8e0, public_6d5f8e0);
extern "C" NAKED register_t __cdecl internal_6d5f8e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push eax
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d64a38]
        mov ecx, dword ptr ss : [esp+0xC]
        add esp, 4
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [ecx], eax
        je public_6d5f903
        xor eax, eax
        pop esi
        ret 
        public_6d5f903 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5f8e0)
    }
}

#undef public_6d5f903
