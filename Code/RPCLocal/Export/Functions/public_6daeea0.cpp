#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daeea0, internal_6daeea0, public_6daeea0);
extern "C" NAKED register_t __cdecl internal_6daeea0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6630]
        mov dword ptr ds : [public_6dbc464], eax
        ret 
        UNREACHABLE_TRAP(0x6daeea0)
    }
}
