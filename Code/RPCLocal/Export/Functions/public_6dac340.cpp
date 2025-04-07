#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac340, internal_6dac340, public_6dac340);
extern "C" NAKED register_t __cdecl internal_6dac340()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db64c8]
        mov dword ptr ds : [public_6dbc2e4], eax
        ret 
        UNREACHABLE_TRAP(0x6dac340)
    }
}
