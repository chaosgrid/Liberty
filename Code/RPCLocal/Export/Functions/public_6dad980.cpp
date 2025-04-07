#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dad980, internal_6dad980, public_6dad980);
extern "C" NAKED register_t __cdecl internal_6dad980()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6594]
        mov dword ptr ds : [public_6dbc3a4], eax
        ret 
        UNREACHABLE_TRAP(0x6dad980)
    }
}
