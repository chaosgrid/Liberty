#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe46, internal_6d5fe46, public_6d5fe46);
extern "C" NAKED register_t __cdecl internal_6d5fe46()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64110]
        UNREACHABLE_TRAP(0x6d5fe46)
    }
}
