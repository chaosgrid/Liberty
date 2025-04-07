#include "FLServer-PCH.h"

PROC_DECLARE(0x418a56, internal_418a56, public_418a56);
extern "C" NAKED register_t __cdecl internal_418a56()
{
    __asm
    {
        jmp dword ptr ds : [public_41b380]
        UNREACHABLE_TRAP(0x418a56)
    }
}
