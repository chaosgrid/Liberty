#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09ad4, internal_6c09ad4, public_6c09ad4);
extern "C" NAKED register_t __cdecl internal_6c09ad4()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b178]
        UNREACHABLE_TRAP(0x6c09ad4)
    }
}
