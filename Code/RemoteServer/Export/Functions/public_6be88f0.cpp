#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be88f0);

PROC_DECLARE(0x6be88f0, internal_6be88f0, public_6be88f0);
extern "C" NAKED register_t __cdecl internal_6be88f0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6c0d058
        mov dword ptr ds : [eax+0xC], 0x10017
        mov dword ptr ds : [eax+0x20], ecx
        mov byte ptr ds : [eax+0x28], cl
        ret 
        UNREACHABLE_TRAP(0x6be88f0)
    }
}
