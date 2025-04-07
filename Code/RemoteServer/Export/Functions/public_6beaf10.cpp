#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beaf10);

PROC_DECLARE(0x6beaf10, internal_6beaf10, public_6beaf10);
extern "C" NAKED register_t __cdecl internal_6beaf10()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov byte ptr ds : [eax+0x20], cl
        mov dword ptr ds : [eax], offset public_6c0bda4
        mov dword ptr ds : [eax+0xC], 0x3001E
        ret 
        UNREACHABLE_TRAP(0x6beaf10)
    }
}
