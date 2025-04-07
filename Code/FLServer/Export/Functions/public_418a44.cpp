#include "FLServer-PCH.h"

PROC_DECLARE(0x418a44, internal_418a44, public_418a44);
extern "C" NAKED register_t __cdecl internal_418a44()
{
    __asm
    {
        jmp dword ptr ds : [public_41b374]
        UNREACHABLE_TRAP(0x418a44)
    }
}
