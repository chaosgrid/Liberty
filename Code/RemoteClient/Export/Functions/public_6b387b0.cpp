#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b387b0, internal_6b387b0, public_6b387b0);
extern "C" NAKED register_t __cdecl internal_6b387b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6b85c]
        mov dword ptr ds : [public_6b73d64], eax
        ret 
        UNREACHABLE_TRAP(0x6b387b0)
    }
}
