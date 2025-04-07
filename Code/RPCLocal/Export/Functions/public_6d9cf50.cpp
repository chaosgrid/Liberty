#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9cf50);

PROC_DECLARE(0x6d9cf50, internal_6d9cf50, public_6d9cf50);
extern "C" NAKED register_t __cdecl internal_6d9cf50()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax], offset public_6db508c
        mov dword ptr ds : [eax+0xC], 0x20031
        ret 
        UNREACHABLE_TRAP(0x6d9cf50)
    }
}
