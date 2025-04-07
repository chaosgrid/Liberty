#include "FLServer-PCH.h"

PROC_DECLARE(0x418ba6, internal_418ba6, public_418ba6);
extern "C" NAKED register_t __cdecl internal_418ba6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b464]
        UNREACHABLE_TRAP(0x418ba6)
    }
}
