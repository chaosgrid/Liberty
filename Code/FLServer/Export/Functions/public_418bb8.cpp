#include "FLServer-PCH.h"

PROC_DECLARE(0x418bb8, internal_418bb8, public_418bb8);
extern "C" NAKED register_t __cdecl internal_418bb8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b470]
        UNREACHABLE_TRAP(0x418bb8)
    }
}
