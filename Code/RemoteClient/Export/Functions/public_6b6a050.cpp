#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a050, internal_6b6a050, public_6b6a050);
extern "C" NAKED register_t __cdecl internal_6b6a050()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b034]
        UNREACHABLE_TRAP(0x6b6a050)
    }
}
