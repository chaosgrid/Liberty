#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b54da0, internal_6b54da0, public_6b54da0);
extern "C" NAKED register_t __cdecl internal_6b54da0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e468]
        mov dword ptr ds : [public_6b7405c], eax
        ret 
        UNREACHABLE_TRAP(0x6b54da0)
    }
}
