#include "FLServer-PCH.h"

PROC_DECLARE(0x41972a, internal_41972a, public_41972a);
extern "C" NAKED register_t __cdecl internal_41972a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b15c]
        UNREACHABLE_TRAP(0x41972a)
    }
}
