#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daab10, internal_6daab10, public_6daab10);
extern "C" NAKED register_t __cdecl internal_6daab10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6348]
        mov dword ptr ds : [public_6dbc1d0], eax
        ret 
        UNREACHABLE_TRAP(0x6daab10)
    }
}
