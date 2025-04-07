#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db04d0, internal_6db04d0, public_6db04d0);
extern "C" NAKED register_t __cdecl internal_6db04d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6750]
        mov dword ptr ds : [public_6dbc550], eax
        ret 
        UNREACHABLE_TRAP(0x6db04d0)
    }
}
