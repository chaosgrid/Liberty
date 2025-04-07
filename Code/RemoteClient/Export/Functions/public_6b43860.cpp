#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b43860, internal_6b43860, public_6b43860);
extern "C" NAKED register_t __cdecl internal_6b43860()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c250]
        mov dword ptr ds : [public_6b73e7c], eax
        ret 
        UNREACHABLE_TRAP(0x6b43860)
    }
}
