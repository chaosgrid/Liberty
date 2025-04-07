#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daeeb0, internal_6daeeb0, public_6daeeb0);
extern "C" NAKED register_t __cdecl internal_6daeeb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6634]
        mov dword ptr ds : [public_6dbc45c], eax
        ret 
        UNREACHABLE_TRAP(0x6daeeb0)
    }
}
