#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4b770);

PROC_DECLARE(0x6b4b770, internal_6b4b770, public_6b4b770);
extern "C" NAKED register_t __cdecl internal_6b4b770()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6b6dac4
        mov dword ptr ds : [eax+0xC], 0x2004C
        ret 
        UNREACHABLE_TRAP(0x6b4b770)
    }
}
