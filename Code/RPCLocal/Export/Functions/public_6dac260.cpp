#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac260, internal_6dac260, public_6dac260);
extern "C" NAKED register_t __cdecl internal_6dac260()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db646c]
        mov dword ptr ds : [public_6dbc2c4], eax
        ret 
        UNREACHABLE_TRAP(0x6dac260)
    }
}
