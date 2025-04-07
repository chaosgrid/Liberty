#include "Server-PCH.h"


#define public_6cfb911 _public_6cfb911

PROC_DECLARE(0x6cfb8e0, internal_6cfb8e0, public_6cfb8e0);
extern "C" NAKED register_t __cdecl internal_6cfb8e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push eax
        mov edi, 0xFFFFFFFE
        mov dword ptr ds : [esi], 0
        call dword ptr ds : [public_6d644f4]
        add esp, 4
        test eax, eax
        je public_6cfb911
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov dword ptr ds : [esi], eax
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6cfb911 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cfb8e0)
    }
}

#undef public_6cfb911
