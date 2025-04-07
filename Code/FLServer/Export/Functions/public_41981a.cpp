#include "FLServer-PCH.h"

PROC_DECLARE(0x41981a, internal_41981a, public_41981a);
extern "C" NAKED register_t __cdecl internal_41981a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b11c]
        UNREACHABLE_TRAP(0x41981a)
    }
}
