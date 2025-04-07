#include "FLServer-PCH.h"

PROC_DECLARE(0x418660, internal_418660, public_418660);
extern "C" NAKED register_t __cdecl internal_418660()
{
    __asm
    {
        jmp dword ptr ds : [public_41b040]
        UNREACHABLE_TRAP(0x418660)
    }
}
