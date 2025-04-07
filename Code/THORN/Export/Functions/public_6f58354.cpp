#include "THORN-PCH.h"

PROC_DECLARE(0x6f58354, internal_6f58354, public_6f58354);
extern "C" NAKED register_t __cdecl internal_6f58354()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a178]
        UNREACHABLE_TRAP(0x6f58354)
    }
}
