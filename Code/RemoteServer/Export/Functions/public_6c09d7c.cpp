#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09d7c, internal_6c09d7c, public_6c09d7c);
extern "C" NAKED register_t __cdecl internal_6c09d7c()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b1fc]
        UNREACHABLE_TRAP(0x6c09d7c)
    }
}
