#include "Content-PCH.h"

PROC_DECLARE(0x6fa934a, internal_6fa934a, public_6fa934a);
extern "C" NAKED register_t __cdecl internal_6fa934a()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb3338]
        UNREACHABLE_TRAP(0x6fa934a)
    }
}
