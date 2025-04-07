#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69daa, internal_6b69daa, public_6b69daa);
extern "C" NAKED register_t __cdecl internal_6b69daa()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2e8]
        UNREACHABLE_TRAP(0x6b69daa)
    }
}
