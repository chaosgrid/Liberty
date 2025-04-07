#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b54b90, internal_6b54b90, public_6b54b90);
extern "C" NAKED register_t __cdecl internal_6b54b90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e458]
        mov dword ptr ds : [public_6b74050], eax
        ret 
        UNREACHABLE_TRAP(0x6b54b90)
    }
}
