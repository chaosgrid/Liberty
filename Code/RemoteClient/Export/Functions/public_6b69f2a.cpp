#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f2a, internal_6b69f2a, public_6b69f2a);
extern "C" NAKED register_t __cdecl internal_6b69f2a()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b30c]
        UNREACHABLE_TRAP(0x6b69f2a)
    }
}
