#include "Alchemy-PCH.h"

PROC_DECLARE(0x621fd20, internal_621fd20, public_621fd20);
extern "C" NAKED register_t __cdecl internal_621fd20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x24]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x621fd20)
    }
}
