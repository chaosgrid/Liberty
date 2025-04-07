#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dabba0, internal_6dabba0, public_6dabba0);
extern "C" NAKED register_t __cdecl internal_6dabba0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db63a4]
        mov dword ptr ds : [public_6dbc20c], eax
        ret 
        UNREACHABLE_TRAP(0x6dabba0)
    }
}
