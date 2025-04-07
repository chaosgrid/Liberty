#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be6c20);

PROC_DECLARE(0x6be6c20, internal_6be6c20, public_6be6c20);
extern "C" NAKED register_t __cdecl internal_6be6c20()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6c0cb48
        mov dword ptr ds : [eax+0xC], 0x20017
        ret 
        UNREACHABLE_TRAP(0x6be6c20)
    }
}
