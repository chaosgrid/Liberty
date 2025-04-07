#include "FLServer-PCH.h"

PROC_DECLARE(0x418ee2, internal_418ee2, public_418ee2);
extern "C" NAKED register_t __cdecl internal_418ee2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b694]
        UNREACHABLE_TRAP(0x418ee2)
    }
}
