#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beadf0);

PROC_DECLARE(0x6beadf0, internal_6beadf0, public_6beadf0);
extern "C" NAKED register_t __cdecl internal_6beadf0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6c0d9b0
        mov dword ptr ds : [eax+0xC], 0x30008
        ret 
        UNREACHABLE_TRAP(0x6beadf0)
    }
}
