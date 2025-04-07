#include "Server-PCH.h"


#define public_6d5e512 _public_6d5e512

PROC_DECLARE(0x6d5e4d0, internal_6d5e4d0, public_6d5e4d0);
extern "C" NAKED register_t __cdecl internal_6d5e4d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        je public_6d5e512
        cmp byte ptr ds : [esi], 0
        je public_6d5e512
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [public_6d6449c]
        add esp, 4
        test eax, eax
        je public_6d5e512
        mov ecx, eax
        call dword ptr ds : [public_6d642d4]
        test eax, eax
        je public_6d5e512
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        push esi
        call dword ptr ds : [public_6d64c6c]
        add esp, 0xC
        xor eax, eax
        pop esi
        ret 
        public_6d5e512 : nop
        mov eax, 0xFFFFFFFE
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5e4d0)
    }
}

#undef public_6d5e512
