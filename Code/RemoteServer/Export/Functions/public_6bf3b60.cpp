#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf3b60, internal_6bf3b60, public_6bf3b60);
extern "C" NAKED register_t __cdecl internal_6bf3b60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e040]
        mov dword ptr ds : [public_6c13d24], eax
        ret 
        UNREACHABLE_TRAP(0x6bf3b60)
    }
}
