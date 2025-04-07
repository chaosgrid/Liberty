#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b54780, internal_6b54780, public_6b54780);
extern "C" NAKED register_t __cdecl internal_6b54780()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e434]
        mov dword ptr ds : [public_6b74020], eax
        ret 
        UNREACHABLE_TRAP(0x6b54780)
    }
}
