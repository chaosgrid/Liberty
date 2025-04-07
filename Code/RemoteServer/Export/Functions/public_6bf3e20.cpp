#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf3e20, internal_6bf3e20, public_6bf3e20);
extern "C" NAKED register_t __cdecl internal_6bf3e20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e04c]
        mov dword ptr ds : [public_6c13d3c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf3e20)
    }
}
