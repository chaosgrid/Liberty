#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69dda, internal_6b69dda, public_6b69dda);
extern "C" NAKED register_t __cdecl internal_6b69dda()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2c8]
        UNREACHABLE_TRAP(0x6b69dda)
    }
}
