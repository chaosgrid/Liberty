#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69fea, internal_6b69fea, public_6b69fea);
extern "C" NAKED register_t __cdecl internal_6b69fea()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b088]
        UNREACHABLE_TRAP(0x6b69fea)
    }
}
