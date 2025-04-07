#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac270, internal_6dac270, public_6dac270);
extern "C" NAKED register_t __cdecl internal_6dac270()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6470]
        mov dword ptr ds : [public_6dbc2bc], eax
        ret 
        UNREACHABLE_TRAP(0x6dac270)
    }
}
