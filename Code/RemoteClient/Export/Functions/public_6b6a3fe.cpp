#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a3fe, internal_6b6a3fe, public_6b6a3fe);
extern "C" NAKED register_t __cdecl internal_6b6a3fe()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b1b4]
        UNREACHABLE_TRAP(0x6b6a3fe)
    }
}
