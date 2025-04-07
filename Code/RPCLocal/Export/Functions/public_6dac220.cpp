#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac220, internal_6dac220, public_6dac220);
extern "C" NAKED register_t __cdecl internal_6dac220()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db645c]
        mov dword ptr ds : [public_6dbc2b0], eax
        ret 
        UNREACHABLE_TRAP(0x6dac220)
    }
}
