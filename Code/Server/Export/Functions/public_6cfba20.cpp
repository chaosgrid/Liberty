#include "Server-PCH.h"


#define public_6cfba54 _public_6cfba54

PROC_DECLARE(0x6cfba20, internal_6cfba20, public_6cfba20);
extern "C" NAKED register_t __cdecl internal_6cfba20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ecx
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d64500]
        add esp, 4
        test eax, eax
        je public_6cfba54
        mov edx, dword ptr ds : [eax]
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0x14]
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, eax
        mov ecx, 9
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6cfba54 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cfba20)
    }
}

#undef public_6cfba54
