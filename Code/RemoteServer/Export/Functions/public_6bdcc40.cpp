#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdcc40, internal_6bdcc40, public_6bdcc40);
extern "C" NAKED register_t __cdecl internal_6bdcc40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bb74]
        mov dword ptr ds : [public_6c13ab0], eax
        ret 
        UNREACHABLE_TRAP(0x6bdcc40)
    }
}
