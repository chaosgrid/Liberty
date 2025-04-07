#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be6550);

PROC_DECLARE(0x6be6550, internal_6be6550, public_6be6550);
extern "C" NAKED register_t __cdecl internal_6be6550()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6c0ca98
        mov dword ptr ds : [eax+0xC], 0x20008
        ret 
        UNREACHABLE_TRAP(0x6be6550)
    }
}
