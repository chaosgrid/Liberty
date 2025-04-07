#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69dfe, internal_6b69dfe, public_6b69dfe);
extern "C" NAKED register_t __cdecl internal_6b69dfe()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2b0]
        UNREACHABLE_TRAP(0x6b69dfe)
    }
}
