#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be49b0);

PROC_DECLARE(0x6be49b0, internal_6be49b0, public_6be49b0);
extern "C" NAKED register_t __cdecl internal_6be49b0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax], offset public_6c0c8a8
        mov dword ptr ds : [eax+0xC], 0x2002F
        ret 
        UNREACHABLE_TRAP(0x6be49b0)
    }
}
