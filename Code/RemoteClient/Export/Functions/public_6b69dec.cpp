#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69dec, internal_6b69dec, public_6b69dec);
extern "C" NAKED register_t __cdecl internal_6b69dec()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2bc]
        UNREACHABLE_TRAP(0x6b69dec)
    }
}
