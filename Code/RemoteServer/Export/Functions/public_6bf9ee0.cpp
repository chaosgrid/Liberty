#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf9ee0, internal_6bf9ee0, public_6bf9ee0);
extern "C" NAKED register_t __cdecl internal_6bf9ee0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e29c]
        mov dword ptr ds : [public_6c13f18], eax
        ret 
        UNREACHABLE_TRAP(0x6bf9ee0)
    }
}
