#include "FLServer-PCH.h"

PROC_DECLARE(0x41874a, internal_41874a, public_41874a);
extern "C" NAKED register_t __cdecl internal_41874a()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba70]
        UNREACHABLE_TRAP(0x41874a)
    }
}
