#include "Server-PCH.h"


#define public_6cfbccc _public_6cfbccc

PROC_DECLARE(0x6cfbca0, internal_6cfbca0, public_6cfbca0);
extern "C" NAKED register_t __cdecl internal_6cfbca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d64500]
        add esp, 4
        test eax, eax
        je public_6cfbccc
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x84]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 
        public_6cfbccc : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cfbca0)
    }
}

#undef public_6cfbccc
