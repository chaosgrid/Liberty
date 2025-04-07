#include "FLServer-PCH.h"

PROC_DECLARE(0x418a68, internal_418a68, public_418a68);
extern "C" NAKED register_t __cdecl internal_418a68()
{
    __asm
    {
        jmp dword ptr ds : [public_41b38c]
        UNREACHABLE_TRAP(0x418a68)
    }
}
