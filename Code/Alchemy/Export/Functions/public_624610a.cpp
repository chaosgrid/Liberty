#include "Alchemy-PCH.h"

PROC_DECLARE(0x624610a, internal_624610a, public_624610a);
extern "C" NAKED register_t __cdecl internal_624610a()
{
    __asm
    {
        jmp dword ptr ds : [public_624b034]
        UNREACHABLE_TRAP(0x624610a)
    }
}
