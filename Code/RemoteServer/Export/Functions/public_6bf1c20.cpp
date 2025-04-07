#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf1c20, internal_6bf1c20, public_6bf1c20);
extern "C" NAKED register_t __cdecl internal_6bf1c20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dfb4]
        mov dword ptr ds : [public_6c13cbc], eax
        ret 
        UNREACHABLE_TRAP(0x6bf1c20)
    }
}
