#include "FLServer-PCH.h"

PROC_DECLARE(0x4199b8, internal_4199b8, public_4199b8);
extern "C" NAKED register_t __cdecl internal_4199b8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8f8]
        UNREACHABLE_TRAP(0x4199b8)
    }
}
