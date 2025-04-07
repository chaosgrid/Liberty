#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bde8f0);

PROC_DECLARE(0x6bde8f0, internal_6bde8f0, public_6bde8f0);
extern "C" NAKED register_t __cdecl internal_6bde8f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        add eax, 8
        ret 
        UNREACHABLE_TRAP(0x6bde8f0)
    }
}
