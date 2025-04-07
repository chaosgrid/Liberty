#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f18, internal_6b69f18, public_6b69f18);
extern "C" NAKED register_t __cdecl internal_6b69f18()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b300]
        UNREACHABLE_TRAP(0x6b69f18)
    }
}
