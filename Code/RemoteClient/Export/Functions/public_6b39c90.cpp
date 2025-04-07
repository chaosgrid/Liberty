#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d4a);

PROC_DECLARE(0x6b39c90, internal_6b39c90, public_6b39c90);
extern "C" NAKED register_t __cdecl internal_6b39c90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_6b73d74]
        mov ecx, dword ptr ds : [ecx+0xC]
        push eax
        call public_6b69d4a
        ret 
        UNREACHABLE_TRAP(0x6b39c90)
    }
}
