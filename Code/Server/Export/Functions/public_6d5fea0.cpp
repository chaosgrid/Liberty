#include "Server-PCH.h"

PROC_DECLARE(0x6d5fea0, internal_6d5fea0, public_6d5fea0);
extern "C" NAKED register_t __cdecl internal_6d5fea0()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6414c]
        UNREACHABLE_TRAP(0x6d5fea0)
    }
}
