#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f36, internal_6b69f36, public_6b69f36);
extern "C" NAKED register_t __cdecl internal_6b69f36()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b314]
        UNREACHABLE_TRAP(0x6b69f36)
    }
}
