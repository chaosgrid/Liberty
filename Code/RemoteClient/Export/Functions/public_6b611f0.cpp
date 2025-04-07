#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b611f0, internal_6b611f0, public_6b611f0);
extern "C" NAKED register_t __cdecl internal_6b611f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e82c]
        mov dword ptr ds : [public_6b743d0], eax
        ret 
        UNREACHABLE_TRAP(0x6b611f0)
    }
}
