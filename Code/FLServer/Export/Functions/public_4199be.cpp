#include "FLServer-PCH.h"

PROC_DECLARE(0x4199be, internal_4199be, public_4199be);
extern "C" NAKED register_t __cdecl internal_4199be()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8fc]
        UNREACHABLE_TRAP(0x4199be)
    }
}
