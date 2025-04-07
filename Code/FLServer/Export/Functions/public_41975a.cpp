#include "FLServer-PCH.h"

PROC_DECLARE(0x41975a, internal_41975a, public_41975a);
extern "C" NAKED register_t __cdecl internal_41975a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b138]
        UNREACHABLE_TRAP(0x41975a)
    }
}
