#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b322a0, internal_6b322a0, public_6b322a0);
extern "C" NAKED register_t __cdecl internal_6b322a0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_6b6b3b0
        ret 4
        UNREACHABLE_TRAP(0x6b322a0)
    }
}
