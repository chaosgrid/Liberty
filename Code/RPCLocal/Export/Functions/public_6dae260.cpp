#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae260, internal_6dae260, public_6dae260);
extern "C" NAKED register_t __cdecl internal_6dae260()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65e8]
        mov dword ptr ds : [public_6dbc404], eax
        ret 
        UNREACHABLE_TRAP(0x6dae260)
    }
}
