#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a110, internal_6b6a110, public_6b6a110);
extern "C" NAKED register_t __cdecl internal_6b6a110()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b160]
        UNREACHABLE_TRAP(0x6b6a110)
    }
}
