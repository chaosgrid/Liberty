#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beb480);

PROC_DECLARE(0x6beb480, internal_6beb480, public_6beb480);
extern "C" NAKED register_t __cdecl internal_6beb480()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6c0dac0
        mov dword ptr ds : [eax+0xC], 0x30041
        ret 
        UNREACHABLE_TRAP(0x6beb480)
    }
}
