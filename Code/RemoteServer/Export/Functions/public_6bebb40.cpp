#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebb40);

PROC_DECLARE(0x6bebb40, internal_6bebb40, public_6bebb40);
extern "C" NAKED register_t __cdecl internal_6bebb40()
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
        mov dword ptr ds : [eax], offset public_6c0dbc0
        mov dword ptr ds : [eax+0xC], 0x3003B
        ret 
        UNREACHABLE_TRAP(0x6bebb40)
    }
}
