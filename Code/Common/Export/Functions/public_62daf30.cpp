#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62daf30);

PROC_DECLARE(0x62daf30, internal_62daf30, public_62daf30);
extern "C" NAKED register_t __cdecl internal_62daf30()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 4
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e11c
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], 0x43160000
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], 0x43C80000
        ret 
        UNREACHABLE_TRAP(0x62daf30)
    }
}
