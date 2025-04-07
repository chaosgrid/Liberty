#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf9090, internal_6bf9090, public_6bf9090);
extern "C" NAKED register_t __cdecl internal_6bf9090()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e254]
        mov dword ptr ds : [public_6c13ee8], eax
        ret 
        UNREACHABLE_TRAP(0x6bf9090)
    }
}
