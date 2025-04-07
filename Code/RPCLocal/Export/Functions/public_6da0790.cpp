#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da0790);

PROC_DECLARE(0x6da0790, internal_6da0790, public_6da0790);
extern "C" NAKED register_t __cdecl internal_6da0790()
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
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax], offset public_6db5b54
        mov dword ptr ds : [eax+0xC], 0x30003
        ret 
        UNREACHABLE_TRAP(0x6da0790)
    }
}
