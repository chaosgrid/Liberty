#include "FLServer-PCH.h"

PROC_DECLARE(0x41907a, internal_41907a, public_41907a);
extern "C" NAKED register_t __cdecl internal_41907a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7b8]
        UNREACHABLE_TRAP(0x41907a)
    }
}
