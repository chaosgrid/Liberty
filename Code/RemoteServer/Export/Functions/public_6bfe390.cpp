#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfe390, internal_6bfe390, public_6bfe390);
extern "C" NAKED register_t __cdecl internal_6bfe390()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e39c]
        mov dword ptr ds : [public_6c14008], eax
        ret 
        UNREACHABLE_TRAP(0x6bfe390)
    }
}
