#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dab490, internal_6dab490, public_6dab490);
extern "C" NAKED register_t __cdecl internal_6dab490()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6380]
        mov dword ptr ds : [public_6dbc1f4], eax
        ret 
        UNREACHABLE_TRAP(0x6dab490)
    }
}
