#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f90, internal_6b69f90, public_6b69f90);
extern "C" NAKED register_t __cdecl internal_6b69f90()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b32c]
        UNREACHABLE_TRAP(0x6b69f90)
    }
}
