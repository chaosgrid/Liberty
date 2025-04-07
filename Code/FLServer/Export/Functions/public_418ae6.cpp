#include "FLServer-PCH.h"

PROC_DECLARE(0x418ae6, internal_418ae6, public_418ae6);
extern "C" NAKED register_t __cdecl internal_418ae6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b3e4]
        UNREACHABLE_TRAP(0x418ae6)
    }
}
