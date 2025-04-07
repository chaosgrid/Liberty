#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be5480);

PROC_DECLARE(0x6be5480, internal_6be5480, public_6be5480);
extern "C" NAKED register_t __cdecl internal_6be5480()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], ecx
        ret 
        UNREACHABLE_TRAP(0x6be5480)
    }
}
