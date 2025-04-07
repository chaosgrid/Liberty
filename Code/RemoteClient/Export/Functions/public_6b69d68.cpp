#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69d68, internal_6b69d68, public_6b69d68);
extern "C" NAKED register_t __cdecl internal_6b69d68()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b36c]
        UNREACHABLE_TRAP(0x6b69d68)
    }
}
