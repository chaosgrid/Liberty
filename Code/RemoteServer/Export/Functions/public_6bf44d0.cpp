#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf44d0, internal_6bf44d0, public_6bf44d0);
extern "C" NAKED register_t __cdecl internal_6bf44d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e060]
        mov dword ptr ds : [public_6c13d44], eax
        ret 
        UNREACHABLE_TRAP(0x6bf44d0)
    }
}
