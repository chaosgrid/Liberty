#include "FLServer-PCH.h"

PROC_DECLARE(0x41990a, internal_41990a, public_41990a);
extern "C" NAKED register_t __cdecl internal_41990a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8a8]
        UNREACHABLE_TRAP(0x41990a)
    }
}
