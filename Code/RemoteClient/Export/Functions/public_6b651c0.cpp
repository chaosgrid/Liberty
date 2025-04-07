#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b651c0, internal_6b651c0, public_6b651c0);
extern "C" NAKED register_t __cdecl internal_6b651c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e9b4]
        mov dword ptr ds : [public_6b74510], eax
        ret 
        UNREACHABLE_TRAP(0x6b651c0)
    }
}
