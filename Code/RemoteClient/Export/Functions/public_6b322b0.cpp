#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b322b0, internal_6b322b0, public_6b322b0);
extern "C" NAKED register_t __cdecl internal_6b322b0()
{
    __asm
    {
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6b322b0)
    }
}
