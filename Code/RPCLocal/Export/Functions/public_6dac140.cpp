#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac140, internal_6dac140, public_6dac140);
extern "C" NAKED register_t __cdecl internal_6dac140()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db640c]
        mov dword ptr ds : [public_6dbc264], eax
        ret 
        UNREACHABLE_TRAP(0x6dac140)
    }
}
