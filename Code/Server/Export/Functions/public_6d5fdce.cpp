#include "Server-PCH.h"

PROC_DECLARE(0x6d5fdce, internal_6d5fdce, public_6d5fdce);
extern "C" NAKED register_t __cdecl internal_6d5fdce()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640c0]
        UNREACHABLE_TRAP(0x6d5fdce)
    }
}
