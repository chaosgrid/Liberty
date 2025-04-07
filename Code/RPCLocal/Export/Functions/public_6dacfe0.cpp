#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dacfe0, internal_6dacfe0, public_6dacfe0);
extern "C" NAKED register_t __cdecl internal_6dacfe0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6548]
        mov dword ptr ds : [public_6dbc364], eax
        ret 
        UNREACHABLE_TRAP(0x6dacfe0)
    }
}
