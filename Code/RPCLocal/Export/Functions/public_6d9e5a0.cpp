#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9e5a0);

PROC_DECLARE(0x6d9e5a0, internal_6d9e5a0, public_6d9e5a0);
extern "C" NAKED register_t __cdecl internal_6d9e5a0()
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
        mov edx, dword ptr ds : [public_6db3100]
        mov dx, word ptr ds : [edx]
        mov word ptr ds : [eax+0x2C], dx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x34], 0xBF800000
        mov byte ptr ds : [eax+0x38], cl
        mov dword ptr ds : [eax], offset public_6db528c
        mov dword ptr ds : [eax+0xC], 0x20041
        ret 
        UNREACHABLE_TRAP(0x6d9e5a0)
    }
}
