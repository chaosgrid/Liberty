#include "FLServer-PCH.h"

PROC_DECLARE(0x41965a, internal_41965a, public_41965a);
extern "C" NAKED register_t __cdecl internal_41965a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b91c]
        UNREACHABLE_TRAP(0x41965a)
    }
}
