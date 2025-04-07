#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69d80, internal_6b69d80, public_6b69d80);
extern "C" NAKED register_t __cdecl internal_6b69d80()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b35c]
        UNREACHABLE_TRAP(0x6b69d80)
    }
}
