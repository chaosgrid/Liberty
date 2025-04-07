#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf60e0, internal_6bf60e0, public_6bf60e0);
extern "C" NAKED register_t __cdecl internal_6bf60e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e118]
        mov dword ptr ds : [public_6c13de8], eax
        ret 
        UNREACHABLE_TRAP(0x6bf60e0)
    }
}
