#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09f10, internal_6c09f10, public_6c09f10);
extern "C" NAKED register_t __cdecl internal_6c09f10()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b134]
        UNREACHABLE_TRAP(0x6c09f10)
    }
}
