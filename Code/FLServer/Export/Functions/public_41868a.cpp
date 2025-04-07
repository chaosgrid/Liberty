#include "FLServer-PCH.h"

PROC_DECLARE(0x41868a, internal_41868a, public_41868a);
extern "C" NAKED register_t __cdecl internal_41868a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b028]
        UNREACHABLE_TRAP(0x41868a)
    }
}
