#include "FLServer-PCH.h"

PROC_DECLARE(0x41942e, internal_41942e, public_41942e);
extern "C" NAKED register_t __cdecl internal_41942e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b974]
        UNREACHABLE_TRAP(0x41942e)
    }
}
