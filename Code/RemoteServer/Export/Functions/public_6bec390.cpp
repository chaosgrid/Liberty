#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bec390, internal_6bec390, public_6bec390);
extern "C" NAKED register_t __cdecl internal_6bec390()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x6bec390)
    }
}
