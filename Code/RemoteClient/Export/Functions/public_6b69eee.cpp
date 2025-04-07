#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69eee, internal_6b69eee, public_6b69eee);
extern "C" NAKED register_t __cdecl internal_6b69eee()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b20c]
        UNREACHABLE_TRAP(0x6b69eee)
    }
}
