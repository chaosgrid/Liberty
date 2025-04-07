#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09930, internal_6c09930, public_6c09930);
extern "C" NAKED register_t __cdecl internal_6c09930()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b124]
        UNREACHABLE_TRAP(0x6c09930)
    }
}
