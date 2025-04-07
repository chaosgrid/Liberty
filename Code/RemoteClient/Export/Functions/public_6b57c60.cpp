#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b57c60, internal_6b57c60, public_6b57c60);
extern "C" NAKED register_t __cdecl internal_6b57c60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e54c]
        mov dword ptr ds : [public_6b740fc], eax
        ret 
        UNREACHABLE_TRAP(0x6b57c60)
    }
}
