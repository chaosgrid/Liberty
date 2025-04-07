#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1650, internal_6db1650, public_6db1650);
extern "C" NAKED register_t __cdecl internal_6db1650()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db678c]
        mov dword ptr ds : [public_6dbc5a4], eax
        ret 
        UNREACHABLE_TRAP(0x6db1650)
    }
}
