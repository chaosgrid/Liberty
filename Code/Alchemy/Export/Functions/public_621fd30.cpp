#include "Alchemy-PCH.h"

PROC_DECLARE(0x621fd30, internal_621fd30, public_621fd30);
extern "C" NAKED register_t __cdecl internal_621fd30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [public_6257a3c], eax
        mov dword ptr ds : [public_6257a38], ecx
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x621fd30)
    }
}
