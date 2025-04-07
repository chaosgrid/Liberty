#include "FLServer-PCH.h"

PROC_DECLARE(0x418702, internal_418702, public_418702);
extern "C" NAKED register_t __cdecl internal_418702()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb0c]
        UNREACHABLE_TRAP(0x418702)
    }
}
