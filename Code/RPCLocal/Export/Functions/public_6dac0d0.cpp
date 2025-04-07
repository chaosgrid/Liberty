#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac0d0, internal_6dac0d0, public_6dac0d0);
extern "C" NAKED register_t __cdecl internal_6dac0d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db63ec]
        mov dword ptr ds : [public_6dbc240], eax
        ret 
        UNREACHABLE_TRAP(0x6dac0d0)
    }
}
