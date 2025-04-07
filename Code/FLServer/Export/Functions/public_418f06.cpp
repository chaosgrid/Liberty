#include "FLServer-PCH.h"

PROC_DECLARE(0x418f06, internal_418f06, public_418f06);
extern "C" NAKED register_t __cdecl internal_418f06()
{
    __asm
    {
        jmp dword ptr ds : [public_41b6ac]
        UNREACHABLE_TRAP(0x418f06)
    }
}
