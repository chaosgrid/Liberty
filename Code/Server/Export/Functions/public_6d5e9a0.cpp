#include "Server-PCH.h"


#define public_6d5e9c7 _public_6d5e9c7

PROC_DECLARE(0x6d5e9a0, internal_6d5e9a0, public_6d5e9a0);
extern "C" NAKED register_t __cdecl internal_6d5e9a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ecx
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d64a00]
        mov edx, dword ptr ss : [esp+0x10]
        add esp, 4
        test eax, 0x3FFFFFFF
        mov dword ptr ds : [edx], eax
        je public_6d5e9c7
        xor eax, eax
        pop esi
        ret 
        public_6d5e9c7 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5e9a0)
    }
}

#undef public_6d5e9c7
