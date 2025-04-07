#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9cea0);

PROC_DECLARE(0x6d9cea0, internal_6d9cea0, public_6d9cea0);
extern "C" NAKED register_t __cdecl internal_6d9cea0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6db4fbc
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov edx, dword ptr ds : [public_6db3100]
        mov dx, word ptr ds : [edx]
        mov word ptr ds : [eax+0x30], dx
        mov dword ptr ds : [eax+0x34], 0x3F800000
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x4C], ecx
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x54], ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov dword ptr ds : [eax+0x5C], ecx
        mov dword ptr ds : [eax+0x60], ecx
        mov dword ptr ds : [eax+0x64], ecx
        mov dword ptr ds : [eax], offset public_6db507c
        mov dword ptr ds : [eax+0xC], 0x2002D
        ret 
        UNREACHABLE_TRAP(0x6d9cea0)
    }
}
