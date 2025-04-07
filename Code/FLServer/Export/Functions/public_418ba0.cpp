#include "FLServer-PCH.h"

PROC_DECLARE(0x418ba0, internal_418ba0, public_418ba0);
extern "C" NAKED register_t __cdecl internal_418ba0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b460]
        UNREACHABLE_TRAP(0x418ba0)
    }
}
