#include "FLServer-PCH.h"

PROC_DECLARE(0x418570, internal_418570, public_418570);
extern "C" NAKED register_t __cdecl internal_418570()
{
    __asm
    {
        jmp dword ptr ds : [public_41b0b4]
        UNREACHABLE_TRAP(0x418570)
    }
}
