#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beb920);

PROC_DECLARE(0x6beb920, internal_6beb920, public_6beb920);
extern "C" NAKED register_t __cdecl internal_6beb920()
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
        mov dword ptr ds : [eax], offset public_6c0db80
        mov dword ptr ds : [eax+0xC], 0x3002F
        ret 
        UNREACHABLE_TRAP(0x6beb920)
    }
}
