#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd10e0, internal_6bd10e0, public_6bd10e0);
extern "C" NAKED register_t __cdecl internal_6bd10e0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_6c0b2a0
        ret 4
        UNREACHABLE_TRAP(0x6bd10e0)
    }
}
