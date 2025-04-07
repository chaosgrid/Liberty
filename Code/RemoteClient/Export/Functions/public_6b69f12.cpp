#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f12, internal_6b69f12, public_6b69f12);
extern "C" NAKED register_t __cdecl internal_6b69f12()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b278]
        UNREACHABLE_TRAP(0x6b69f12)
    }
}
