#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf2cf0, internal_6bf2cf0, public_6bf2cf0);
extern "C" NAKED register_t __cdecl internal_6bf2cf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dff4]
        mov dword ptr ds : [public_6c13cfc], eax
        ret 
        UNREACHABLE_TRAP(0x6bf2cf0)
    }
}
