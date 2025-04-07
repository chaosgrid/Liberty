#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d810d0, internal_6d810d0, public_6d810d0);
extern "C" NAKED register_t __cdecl internal_6d810d0()
{
    __asm
    {
        mov word ptr ds : [public_6dbb90c], 3
        mov byte ptr ds : [public_6dbb90e], 1
        ret 
        UNREACHABLE_TRAP(0x6d810d0)
    }
}
