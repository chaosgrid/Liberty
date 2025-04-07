#include "FLServer-PCH.h"

PROC_DECLARE(0x418738, internal_418738, public_418738);
extern "C" NAKED register_t __cdecl internal_418738()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb40]
        UNREACHABLE_TRAP(0x418738)
    }
}
