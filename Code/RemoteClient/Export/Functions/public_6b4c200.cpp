#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4c200);

PROC_DECLARE(0x6b4c200, internal_6b4c200, public_6b4c200);
extern "C" NAKED register_t __cdecl internal_6b4c200()
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
        mov dword ptr ds : [eax], offset public_6b6c0c4
        mov dword ptr ds : [eax+0xC], 0x2001A
        ret 
        UNREACHABLE_TRAP(0x6b4c200)
    }
}
