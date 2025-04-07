#include "FLServer-PCH.h"

PROC_DECLARE(0x418750, internal_418750, public_418750);
extern "C" NAKED register_t __cdecl internal_418750()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba6c]
        UNREACHABLE_TRAP(0x418750)
    }
}
