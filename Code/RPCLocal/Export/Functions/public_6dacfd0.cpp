#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dacfd0, internal_6dacfd0, public_6dacfd0);
extern "C" NAKED register_t __cdecl internal_6dacfd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6548]
        mov dword ptr ds : [public_6dbc360], eax
        ret 
        UNREACHABLE_TRAP(0x6dacfd0)
    }
}
