#include "FLServer-PCH.h"

PROC_DECLARE(0x418e40, internal_418e40, public_418e40);
extern "C" NAKED register_t __cdecl internal_418e40()
{
    __asm
    {
        jmp dword ptr ds : [public_41b628]
        UNREACHABLE_TRAP(0x418e40)
    }
}
