#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beaeb0);

PROC_DECLARE(0x6beaeb0, internal_6beaeb0, public_6beaeb0);
extern "C" NAKED register_t __cdecl internal_6beaeb0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6c0d9d0
        mov dword ptr ds : [eax+0xC], 0x30004
        ret 
        UNREACHABLE_TRAP(0x6beaeb0)
    }
}
