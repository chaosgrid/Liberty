#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69dbc, internal_6b69dbc, public_6b69dbc);
extern "C" NAKED register_t __cdecl internal_6b69dbc()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2dc]
        UNREACHABLE_TRAP(0x6b69dbc)
    }
}
