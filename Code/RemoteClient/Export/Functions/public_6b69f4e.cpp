#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f4e, internal_6b69f4e, public_6b69f4e);
extern "C" NAKED register_t __cdecl internal_6b69f4e()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b324]
        UNREACHABLE_TRAP(0x6b69f4e)
    }
}
