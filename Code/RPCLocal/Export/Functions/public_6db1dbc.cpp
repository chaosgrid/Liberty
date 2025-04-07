#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1dbc, internal_6db1dbc, public_6db1dbc);
extern "C" NAKED register_t __cdecl internal_6db1dbc()
{
    __asm
    {
        jmp dword ptr ds : [public_6db3014]
        UNREACHABLE_TRAP(0x6db1dbc)
    }
}
