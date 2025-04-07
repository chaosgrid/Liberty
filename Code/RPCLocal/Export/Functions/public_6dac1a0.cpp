#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac1a0, internal_6dac1a0, public_6dac1a0);
extern "C" NAKED register_t __cdecl internal_6dac1a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db642c]
        mov dword ptr ds : [public_6dbc284], eax
        ret 
        UNREACHABLE_TRAP(0x6dac1a0)
    }
}
