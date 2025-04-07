#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69dce, internal_6b69dce, public_6b69dce);
extern "C" NAKED register_t __cdecl internal_6b69dce()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2d0]
        UNREACHABLE_TRAP(0x6b69dce)
    }
}
