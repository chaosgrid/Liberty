#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5a810, internal_6b5a810, public_6b5a810);
extern "C" NAKED register_t __cdecl internal_6b5a810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e5d0]
        mov dword ptr ds : [public_6b741b4], eax
        ret 
        UNREACHABLE_TRAP(0x6b5a810)
    }
}
