#include "FLServer-PCH.h"

PROC_DECLARE(0x418aec, internal_418aec, public_418aec);
extern "C" NAKED register_t __cdecl internal_418aec()
{
    __asm
    {
        jmp dword ptr ds : [public_41b3e8]
        UNREACHABLE_TRAP(0x418aec)
    }
}
