#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daeaa0, internal_6daeaa0, public_6daeaa0);
extern "C" NAKED register_t __cdecl internal_6daeaa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db660c]
        mov dword ptr ds : [public_6dbc434], eax
        ret 
        UNREACHABLE_TRAP(0x6daeaa0)
    }
}
