#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c011e0, internal_6c011e0, public_6c011e0);
extern "C" NAKED register_t __cdecl internal_6c011e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e42c]
        mov dword ptr ds : [public_6c140cc], eax
        ret 
        UNREACHABLE_TRAP(0x6c011e0)
    }
}
