#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9c7f0);

PROC_DECLARE(0x6d9c7f0, internal_6d9c7f0, public_6d9c7f0);
extern "C" NAKED register_t __cdecl internal_6d9c7f0()
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
        mov dword ptr ds : [eax], offset public_6db4fec
        mov dword ptr ds : [eax+0xC], 0x20001
        ret 
        UNREACHABLE_TRAP(0x6d9c7f0)
    }
}
