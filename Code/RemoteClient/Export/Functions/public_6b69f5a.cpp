#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f5a, internal_6b69f5a, public_6b69f5a);
extern "C" NAKED register_t __cdecl internal_6b69f5a()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b28c]
        UNREACHABLE_TRAP(0x6b69f5a)
    }
}
