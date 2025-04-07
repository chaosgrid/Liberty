#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac330, internal_6dac330, public_6dac330);
extern "C" NAKED register_t __cdecl internal_6dac330()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db64c8]
        mov dword ptr ds : [public_6dbc2e0], eax
        ret 
        UNREACHABLE_TRAP(0x6dac330)
    }
}
