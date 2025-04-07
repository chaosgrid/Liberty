#include "FLServer-PCH.h"

PROC_DECLARE(0x418e70, internal_418e70, public_418e70);
extern "C" NAKED register_t __cdecl internal_418e70()
{
    __asm
    {
        jmp dword ptr ds : [public_41b648]
        UNREACHABLE_TRAP(0x418e70)
    }
}
