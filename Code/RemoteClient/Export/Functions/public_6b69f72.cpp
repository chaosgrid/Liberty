#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f72, internal_6b69f72, public_6b69f72);
extern "C" NAKED register_t __cdecl internal_6b69f72()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b334]
        UNREACHABLE_TRAP(0x6b69f72)
    }
}
