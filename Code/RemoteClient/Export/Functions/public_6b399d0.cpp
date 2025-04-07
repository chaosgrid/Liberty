#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d38);

PROC_DECLARE(0x6b399d0, internal_6b399d0, public_6b399d0);
extern "C" NAKED register_t __cdecl internal_6b399d0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        call public_6b69d38
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x6b399d0)
    }
}
