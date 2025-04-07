#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be8d50);

PROC_DECLARE(0x6be8d50, internal_6be8d50, public_6be8d50);
extern "C" NAKED register_t __cdecl internal_6be8d50()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6c0d0b8
        mov dword ptr ds : [eax+0xC], 0x1000E
        ret 
        UNREACHABLE_TRAP(0x6be8d50)
    }
}
