#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b43eb0, internal_6b43eb0, public_6b43eb0);
extern "C" NAKED register_t __cdecl internal_6b43eb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c26c]
        mov dword ptr ds : [public_6b73e94], eax
        ret 
        UNREACHABLE_TRAP(0x6b43eb0)
    }
}
