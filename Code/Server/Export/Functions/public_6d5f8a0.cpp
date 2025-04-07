#include "Server-PCH.h"


#define public_6d5f8d2 _public_6d5f8d2

PROC_DECLARE(0x6d5f8a0, internal_6d5f8a0, public_6d5f8a0);
extern "C" NAKED register_t __cdecl internal_6d5f8a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push eax
        call dword ptr ds : [public_6d643b4]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], eax
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d64a38]
        mov edx, dword ptr ss : [esp+0x10]
        add esp, 8
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [edx], eax
        je public_6d5f8d2
        xor eax, eax
        pop esi
        ret 
        public_6d5f8d2 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5f8a0)
    }
}

#undef public_6d5f8d2
