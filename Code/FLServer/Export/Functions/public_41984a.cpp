#include "FLServer-PCH.h"

PROC_DECLARE(0x41984a, internal_41984a, public_41984a);
extern "C" NAKED register_t __cdecl internal_41984a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b100]
        UNREACHABLE_TRAP(0x41984a)
    }
}
