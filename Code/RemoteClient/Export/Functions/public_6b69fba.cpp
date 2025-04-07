#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69fba, internal_6b69fba, public_6b69fba);
extern "C" NAKED register_t __cdecl internal_6b69fba()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b068]
        UNREACHABLE_TRAP(0x6b69fba)
    }
}
