#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69d98, internal_6b69d98, public_6b69d98);
extern "C" NAKED register_t __cdecl internal_6b69d98()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2f4]
        UNREACHABLE_TRAP(0x6b69d98)
    }
}
