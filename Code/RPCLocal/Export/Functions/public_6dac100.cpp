#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac100, internal_6dac100, public_6dac100);
extern "C" NAKED register_t __cdecl internal_6dac100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db63fc]
        mov dword ptr ds : [public_6dbc250], eax
        ret 
        UNREACHABLE_TRAP(0x6dac100)
    }
}
