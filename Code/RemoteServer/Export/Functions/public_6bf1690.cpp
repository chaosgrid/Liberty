#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf1690, internal_6bf1690, public_6bf1690);
extern "C" NAKED register_t __cdecl internal_6bf1690()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dfa4]
        mov dword ptr ds : [public_6c13ca8], eax
        ret 
        UNREACHABLE_TRAP(0x6bf1690)
    }
}
