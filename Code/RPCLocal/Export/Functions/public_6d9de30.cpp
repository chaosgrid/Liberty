#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9de30);

PROC_DECLARE(0x6d9de30, internal_6d9de30, public_6d9de30);
extern "C" NAKED register_t __cdecl internal_6d9de30()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6db51cc
        mov dword ptr ds : [eax+0xC], 0x20013
        ret 
        UNREACHABLE_TRAP(0x6d9de30)
    }
}
