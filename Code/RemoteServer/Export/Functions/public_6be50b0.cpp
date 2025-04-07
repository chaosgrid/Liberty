#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be50b0);

PROC_DECLARE(0x6be50b0, internal_6be50b0, public_6be50b0);
extern "C" NAKED register_t __cdecl internal_6be50b0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6c0c928
        mov dword ptr ds : [eax+0xC], 0x2000A
        ret 
        UNREACHABLE_TRAP(0x6be50b0)
    }
}
