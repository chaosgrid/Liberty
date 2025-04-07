#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be6e80);

PROC_DECLARE(0x6be6e80, internal_6be6e80, public_6be6e80);
extern "C" NAKED register_t __cdecl internal_6be6e80()
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
        mov dword ptr ds : [eax], offset public_6c0cb88
        mov dword ptr ds : [eax+0xC], 0x2001E
        ret 
        UNREACHABLE_TRAP(0x6be6e80)
    }
}
