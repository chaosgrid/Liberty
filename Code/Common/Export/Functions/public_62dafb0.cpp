#include "Common-PCH.h"

PROC_DECLARE(0x62dafb0, internal_62dafb0, public_62dafb0);
extern "C" NAKED register_t __cdecl internal_62dafb0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 7
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e134
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov byte ptr ds : [eax+0x44], 1
        ret 
        UNREACHABLE_TRAP(0x62dafb0)
    }
}
