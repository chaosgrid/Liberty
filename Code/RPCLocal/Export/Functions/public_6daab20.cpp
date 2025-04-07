#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daab20, internal_6daab20, public_6daab20);
extern "C" NAKED register_t __cdecl internal_6daab20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6348]
        mov dword ptr ds : [public_6dbc1d4], eax
        ret 
        UNREACHABLE_TRAP(0x6daab20)
    }
}
