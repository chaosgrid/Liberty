#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfd3a0);
CLANG_FORWARD_PROC_SYMBOL(public_6cffff0);
CLANG_FORWARD_PROC_SYMBOL(public_6d10200);

PROC_DECLARE(0x6cffff0, internal_6cffff0, public_6cffff0);
extern "C" NAKED register_t __cdecl internal_6cffff0()
{
    __asm
    {
        call public_6cfd3a0
        call public_6d10200
        mov dword ptr ds : [public_6d8d92c], 0
        ret 
        UNREACHABLE_TRAP(0x6cffff0)
    }
}
