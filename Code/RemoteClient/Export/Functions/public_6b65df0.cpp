#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b65df0, internal_6b65df0, public_6b65df0);
extern "C" NAKED register_t __cdecl internal_6b65df0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e9c0]
        mov dword ptr ds : [public_6b74520], eax
        ret 
        UNREACHABLE_TRAP(0x6b65df0)
    }
}
