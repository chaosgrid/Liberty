#include "FLServer-PCH.h"

PROC_DECLARE(0x418eee, internal_418eee, public_418eee);
extern "C" NAKED register_t __cdecl internal_418eee()
{
    __asm
    {
        jmp dword ptr ds : [public_41b69c]
        UNREACHABLE_TRAP(0x418eee)
    }
}
