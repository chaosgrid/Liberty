#include "FLServer-PCH.h"

PROC_DECLARE(0x418e76, internal_418e76, public_418e76);
extern "C" NAKED register_t __cdecl internal_418e76()
{
    __asm
    {
        jmp dword ptr ds : [public_41b64c]
        UNREACHABLE_TRAP(0x418e76)
    }
}
