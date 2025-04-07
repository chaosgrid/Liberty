#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebc60);

PROC_DECLARE(0x6bebc60, internal_6bebc60, public_6bebc60);
extern "C" NAKED register_t __cdecl internal_6bebc60()
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
        mov byte ptr ds : [eax+0x24], cl
        mov byte ptr ds : [eax+0x25], cl
        mov dword ptr ds : [eax], offset public_6c0dbf0
        mov dword ptr ds : [eax+0xC], 0x30044
        ret 
        UNREACHABLE_TRAP(0x6bebc60)
    }
}
