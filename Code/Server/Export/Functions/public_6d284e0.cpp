#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d284e0);

PROC_DECLARE(0x6d284e0, internal_6d284e0, public_6d284e0);
extern "C" NAKED register_t __cdecl internal_6d284e0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], offset public_6d692c4
        ret 
        UNREACHABLE_TRAP(0x6d284e0)
    }
}
