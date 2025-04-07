#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdcc30, internal_6bdcc30, public_6bdcc30);
extern "C" NAKED register_t __cdecl internal_6bdcc30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bb70]
        mov dword ptr ds : [public_6c13ab8], eax
        ret 
        UNREACHABLE_TRAP(0x6bdcc30)
    }
}
