#include "FLServer-PCH.h"

PROC_DECLARE(0x418bb2, internal_418bb2, public_418bb2);
extern "C" NAKED register_t __cdecl internal_418bb2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b46c]
        UNREACHABLE_TRAP(0x418bb2)
    }
}
