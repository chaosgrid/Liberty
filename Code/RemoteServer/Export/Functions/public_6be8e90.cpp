#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be8e90);

PROC_DECLARE(0x6be8e90, internal_6be8e90, public_6be8e90);
extern "C" NAKED register_t __cdecl internal_6be8e90()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6c0d0d8
        mov dword ptr ds : [eax+0xC], 0x1000F
        ret 
        UNREACHABLE_TRAP(0x6be8e90)
    }
}
