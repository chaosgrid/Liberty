#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69dd4, internal_6b69dd4, public_6b69dd4);
extern "C" NAKED register_t __cdecl internal_6b69dd4()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2cc]
        UNREACHABLE_TRAP(0x6b69dd4)
    }
}
