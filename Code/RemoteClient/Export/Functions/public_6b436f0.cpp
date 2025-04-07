#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b436f0, internal_6b436f0, public_6b436f0);
extern "C" NAKED register_t __cdecl internal_6b436f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c22c]
        mov dword ptr ds : [public_6b73e74], eax
        ret 
        UNREACHABLE_TRAP(0x6b436f0)
    }
}
