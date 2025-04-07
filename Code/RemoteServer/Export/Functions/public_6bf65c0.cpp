#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf65c0, internal_6bf65c0, public_6bf65c0);
extern "C" NAKED register_t __cdecl internal_6bf65c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e13c]
        mov dword ptr ds : [public_6c13e04], eax
        ret 
        UNREACHABLE_TRAP(0x6bf65c0)
    }
}
