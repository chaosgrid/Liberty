#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd10f0, internal_6bd10f0, public_6bd10f0);
extern "C" NAKED register_t __cdecl internal_6bd10f0()
{
    __asm
    {
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6bd10f0)
    }
}
