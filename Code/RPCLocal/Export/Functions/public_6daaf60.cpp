#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daaf60, internal_6daaf60, public_6daaf60);
extern "C" NAKED register_t __cdecl internal_6daaf60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6370]
        mov dword ptr ds : [public_6dbc1e0], eax
        ret 
        UNREACHABLE_TRAP(0x6daaf60)
    }
}
