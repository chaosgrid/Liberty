#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09ae6, internal_6c09ae6, public_6c09ae6);
extern "C" NAKED register_t __cdecl internal_6c09ae6()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b154]
        UNREACHABLE_TRAP(0x6c09ae6)
    }
}
