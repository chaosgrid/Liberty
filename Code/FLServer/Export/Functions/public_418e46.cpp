#include "FLServer-PCH.h"

PROC_DECLARE(0x418e46, internal_418e46, public_418e46);
extern "C" NAKED register_t __cdecl internal_418e46()
{
    __asm
    {
        jmp dword ptr ds : [public_41b62c]
        UNREACHABLE_TRAP(0x418e46)
    }
}
