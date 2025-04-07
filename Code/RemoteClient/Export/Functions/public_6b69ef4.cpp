#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69ef4, internal_6b69ef4, public_6b69ef4);
extern "C" NAKED register_t __cdecl internal_6b69ef4()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b208]
        UNREACHABLE_TRAP(0x6b69ef4)
    }
}
