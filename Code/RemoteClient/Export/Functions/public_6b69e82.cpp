#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e82, internal_6b69e82, public_6b69e82);
extern "C" NAKED register_t __cdecl internal_6b69e82()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b258]
        UNREACHABLE_TRAP(0x6b69e82)
    }
}
