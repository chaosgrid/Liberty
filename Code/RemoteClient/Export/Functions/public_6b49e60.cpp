#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b49e60);

PROC_DECLARE(0x6b49e60, internal_6b49e60, public_6b49e60);
extern "C" NAKED register_t __cdecl internal_6b49e60()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov byte ptr ds : [eax+0x39], cl
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax], offset public_6b6c084
        mov dword ptr ds : [eax+0xC], 0x2002E
        ret 
        UNREACHABLE_TRAP(0x6b49e60)
    }
}
