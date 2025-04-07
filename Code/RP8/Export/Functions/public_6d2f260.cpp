#include "RP8-PCH.h"

PROC_DECLARE(0x6d2f260, internal_6d2f260, public_6d2f260);
extern "C" NAKED register_t __cdecl internal_6d2f260()
{
    __asm
    {
        jmp dword ptr ds : [public_6d5e068]
        UNREACHABLE_TRAP(0x6d2f260)
    }
}
