#include "Movie-PCH.h"

PROC_DECLARE(0x6ad6254, internal_6ad6254, public_6ad6254);
extern "C" NAKED register_t __cdecl internal_6ad6254()
{
    __asm
    {
        push edi
        push 0x40
        pop ecx
        xor eax, eax
        mov edi, offset public_6ae1320
        rep stosd
        stosb 
        xor eax, eax
        mov edi, offset public_6ae1210
        mov dword ptr ds : [public_6ae120c], eax
        mov dword ptr ds : [public_6ae121c], eax
        mov dword ptr ds : [public_6ae1424], eax
        stosd 
        stosd 
        stosd 
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6ad6254)
    }
}
