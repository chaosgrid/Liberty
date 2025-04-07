#include "Server-PCH.h"


#define public_6cf8c1d _public_6cf8c1d

PROC_DECLARE(0x6cf8c00, internal_6cf8c00, public_6cf8c00);
extern "C" NAKED register_t __cdecl internal_6cf8c00()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call dword ptr ds : [public_6d644ac]
        add esp, 4
        test al, al
        je public_6cf8c1d
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        xor eax, eax
        pop esi
        ret 
        public_6cf8c1d : nop
        mov eax, 0xFFFFFFFE
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf8c00)
    }
}

#undef public_6cf8c1d
