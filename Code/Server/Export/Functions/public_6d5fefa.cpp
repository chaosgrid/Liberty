#include "Server-PCH.h"

PROC_DECLARE(0x6d5fefa, internal_6d5fefa, public_6d5fefa);
extern "C" NAKED register_t __cdecl internal_6d5fefa()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64308]
        UNREACHABLE_TRAP(0x6d5fefa)
    }
}
