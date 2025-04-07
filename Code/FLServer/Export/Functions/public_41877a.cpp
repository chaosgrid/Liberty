#include "FLServer-PCH.h"

PROC_DECLARE(0x41877a, internal_41877a, public_41877a);
extern "C" NAKED register_t __cdecl internal_41877a()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb54]
        UNREACHABLE_TRAP(0x41877a)
    }
}
