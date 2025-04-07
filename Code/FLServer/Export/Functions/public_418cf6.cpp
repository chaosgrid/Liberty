#include "FLServer-PCH.h"

PROC_DECLARE(0x418cf6, internal_418cf6, public_418cf6);
extern "C" NAKED register_t __cdecl internal_418cf6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b54c]
        UNREACHABLE_TRAP(0x418cf6)
    }
}
