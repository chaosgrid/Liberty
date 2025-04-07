#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f30, internal_6b69f30, public_6b69f30);
extern "C" NAKED register_t __cdecl internal_6b69f30()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b310]
        UNREACHABLE_TRAP(0x6b69f30)
    }
}
