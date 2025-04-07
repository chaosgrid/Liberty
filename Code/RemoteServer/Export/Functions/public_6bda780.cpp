#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda780);

PROC_DECLARE(0x6bda780, internal_6bda780, public_6bda780);
extern "C" NAKED register_t __cdecl internal_6bda780()
{
    __asm
    {
        lea eax, ds:[ecx+0x20]
        ret 
        UNREACHABLE_TRAP(0x6bda780)
    }
}
