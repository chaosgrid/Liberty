#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42750);

PROC_DECLARE(0x6d42750, internal_6d42750, public_6d42750);
extern "C" NAKED register_t __cdecl internal_6d42750()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        lea ecx, ds:[eax+eax]
        mov eax, dword ptr ss : [esp+4]
        add dword ptr ds : [eax], ecx
        ret 
        UNREACHABLE_TRAP(0x6d42750)
    }
}
