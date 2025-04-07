#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae270, internal_6dae270, public_6dae270);
extern "C" NAKED register_t __cdecl internal_6dae270()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65ec]
        mov dword ptr ds : [public_6dbc3fc], eax
        ret 
        UNREACHABLE_TRAP(0x6dae270)
    }
}
