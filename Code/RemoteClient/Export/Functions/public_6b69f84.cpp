#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f84, internal_6b69f84, public_6b69f84);
extern "C" NAKED register_t __cdecl internal_6b69f84()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b374]
        UNREACHABLE_TRAP(0x6b69f84)
    }
}
