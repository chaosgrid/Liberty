#include "FLServer-PCH.h"

PROC_DECLARE(0x418a20, internal_418a20, public_418a20);
extern "C" NAKED register_t __cdecl internal_418a20()
{
    __asm
    {
        jmp dword ptr ds : [public_41b35c]
        UNREACHABLE_TRAP(0x418a20)
    }
}
