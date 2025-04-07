#include "FLServer-PCH.h"

PROC_DECLARE(0x418612, internal_418612, public_418612);
extern "C" NAKED register_t __cdecl internal_418612()
{
    __asm
    {
        jmp dword ptr ds : [public_41b01c]
        UNREACHABLE_TRAP(0x418612)
    }
}
