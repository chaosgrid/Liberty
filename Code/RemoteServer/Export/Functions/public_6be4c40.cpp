#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be4c40);

PROC_DECLARE(0x6be4c40, internal_6be4c40, public_6be4c40);
extern "C" NAKED register_t __cdecl internal_6be4c40()
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
        mov dword ptr ds : [eax], offset public_6c0bb7c
        mov dword ptr ds : [eax+0xC], 0x20025
        ret 
        UNREACHABLE_TRAP(0x6be4c40)
    }
}
