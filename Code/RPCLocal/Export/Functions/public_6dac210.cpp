#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac210, internal_6dac210, public_6dac210);
extern "C" NAKED register_t __cdecl internal_6dac210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6450]
        mov dword ptr ds : [public_6dbc29c], eax
        ret 
        UNREACHABLE_TRAP(0x6dac210)
    }
}
