#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac110, internal_6dac110, public_6dac110);
extern "C" NAKED register_t __cdecl internal_6dac110()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db63fc]
        mov dword ptr ds : [public_6dbc254], eax
        ret 
        UNREACHABLE_TRAP(0x6dac110)
    }
}
