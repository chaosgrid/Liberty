#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69df2, internal_6b69df2, public_6b69df2);
extern "C" NAKED register_t __cdecl internal_6b69df2()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2b8]
        UNREACHABLE_TRAP(0x6b69df2)
    }
}
