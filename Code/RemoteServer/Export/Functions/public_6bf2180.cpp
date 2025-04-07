#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf2180, internal_6bf2180, public_6bf2180);
extern "C" NAKED register_t __cdecl internal_6bf2180()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dfc4]
        mov dword ptr ds : [public_6c13cc8], eax
        ret 
        UNREACHABLE_TRAP(0x6bf2180)
    }
}
