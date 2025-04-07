#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd6ea0);

PROC_DECLARE(0x6bd6ea0, internal_6bd6ea0, public_6bd6ea0);
extern "C" NAKED register_t __cdecl internal_6bd6ea0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x6bd6ea0)
    }
}
