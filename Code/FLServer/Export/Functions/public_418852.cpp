#include "FLServer-PCH.h"

PROC_DECLARE(0x418852, internal_418852, public_418852);
extern "C" NAKED register_t __cdecl internal_418852()
{
    __asm
    {
        jmp dword ptr ds : [public_41b9e4]
        UNREACHABLE_TRAP(0x418852)
    }
}
