#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d810f0, internal_6d810f0, public_6d810f0);
extern "C" NAKED register_t __cdecl internal_6d810f0()
{
    __asm
    {
        mov word ptr ds : [public_6dbb910], 4
        mov byte ptr ds : [public_6dbb912], 1
        ret 
        UNREACHABLE_TRAP(0x6d810f0)
    }
}
