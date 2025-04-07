#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdaab0, internal_6bdaab0, public_6bdaab0);
extern "C" NAKED register_t __cdecl internal_6bdaab0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0baf0]
        mov dword ptr ds : [public_6c13a78], eax
        ret 
        UNREACHABLE_TRAP(0x6bdaab0)
    }
}
