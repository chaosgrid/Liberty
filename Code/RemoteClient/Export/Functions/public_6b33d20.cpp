#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b33d20, internal_6b33d20, public_6b33d20);
extern "C" NAKED register_t __cdecl internal_6b33d20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6b77c]
        mov dword ptr ds : [public_6b738f4], eax
        ret 
        UNREACHABLE_TRAP(0x6b33d20)
    }
}
