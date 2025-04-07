#include "FLServer-PCH.h"

PROC_DECLARE(0x41865a, internal_41865a, public_41865a);
extern "C" NAKED register_t __cdecl internal_41865a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b090]
        UNREACHABLE_TRAP(0x41865a)
    }
}
