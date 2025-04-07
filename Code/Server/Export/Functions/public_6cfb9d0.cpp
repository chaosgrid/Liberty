#include "Server-PCH.h"


#define public_6cfba06 _public_6cfba06

PROC_DECLARE(0x6cfb9d0, internal_6cfb9d0, public_6cfb9d0);
extern "C" NAKED register_t __cdecl internal_6cfb9d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        call dword ptr ds : [public_6d64500]
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_6cfba06
        mov edx, dword ptr ds : [eax]
        push esi
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, ecx
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov eax, ecx
        pop esi
        ret 
        public_6cfba06 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        ret 
        UNREACHABLE_TRAP(0x6cfb9d0)
    }
}

#undef public_6cfba06
