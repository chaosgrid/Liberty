#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf9ef0, internal_6bf9ef0, public_6bf9ef0);
extern "C" NAKED register_t __cdecl internal_6bf9ef0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e29c]
        mov dword ptr ds : [public_6c13f1c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf9ef0)
    }
}
