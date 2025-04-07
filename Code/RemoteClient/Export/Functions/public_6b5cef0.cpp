#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5cef0, internal_6b5cef0, public_6b5cef0);
extern "C" NAKED register_t __cdecl internal_6b5cef0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e6b8]
        mov dword ptr ds : [public_6b74294], eax
        ret 
        UNREACHABLE_TRAP(0x6b5cef0)
    }
}
