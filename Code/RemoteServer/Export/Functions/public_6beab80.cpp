#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beab80);

PROC_DECLARE(0x6beab80, internal_6beab80, public_6beab80);
extern "C" NAKED register_t __cdecl internal_6beab80()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6c0d950
        mov dword ptr ds : [eax+0xC], 0x3000B
        ret 
        UNREACHABLE_TRAP(0x6beab80)
    }
}
