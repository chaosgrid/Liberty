#include "Server-PCH.h"


#define public_6d5ec4b _public_6d5ec4b

PROC_DECLARE(0x6d5ec20, internal_6d5ec20, public_6d5ec20);
extern "C" NAKED register_t __cdecl internal_6d5ec20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ecx
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d643dc]
        add esp, 4
        test eax, eax
        je public_6d5ec4b
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 
        public_6d5ec4b : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5ec20)
    }
}

#undef public_6d5ec4b
