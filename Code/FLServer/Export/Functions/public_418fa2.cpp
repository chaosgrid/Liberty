#include "FLServer-PCH.h"

PROC_DECLARE(0x418fa2, internal_418fa2, public_418fa2);
extern "C" NAKED register_t __cdecl internal_418fa2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b71c]
        UNREACHABLE_TRAP(0x418fa2)
    }
}
