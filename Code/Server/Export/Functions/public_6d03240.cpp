#include "Server-PCH.h"

PROC_DECLARE(0x6d03240, internal_6d03240, public_6d03240);
extern "C" NAKED register_t __cdecl internal_6d03240()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d67730]
        mov dword ptr ds : [public_6d8d99c], eax
        ret 
        UNREACHABLE_TRAP(0x6d03240)
    }
}
