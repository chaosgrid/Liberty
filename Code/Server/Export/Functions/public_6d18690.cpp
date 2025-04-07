#include "Server-PCH.h"


#define public_6d186b5 _public_6d186b5

PROC_DECLARE(0x6d18690, internal_6d18690, public_6d18690);
extern "C" NAKED register_t __cdecl internal_6d18690()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, 0xFFFFFFFC
        call dword ptr ds : [public_6d64774]
        add esp, 4
        test eax, eax
        je public_6d186b5
        mov ecx, dword ptr ds : [eax+0x6C]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        pop esi
        ret 
        public_6d186b5 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d18690)
    }
}

#undef public_6d186b5
