#include "FLServer-PCH.h"

PROC_DECLARE(0x418ee8, internal_418ee8, public_418ee8);
extern "C" NAKED register_t __cdecl internal_418ee8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b698]
        UNREACHABLE_TRAP(0x418ee8)
    }
}
