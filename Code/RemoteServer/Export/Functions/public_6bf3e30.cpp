#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf3e30, internal_6bf3e30, public_6bf3e30);
extern "C" NAKED register_t __cdecl internal_6bf3e30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e050]
        mov dword ptr ds : [public_6c13d34], eax
        ret 
        UNREACHABLE_TRAP(0x6bf3e30)
    }
}
