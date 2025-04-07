#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea910);

PROC_DECLARE(0x6bea910, internal_6bea910, public_6bea910);
extern "C" NAKED register_t __cdecl internal_6bea910()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6c0d8f0
        mov dword ptr ds : [eax+0xC], 0x30015
        ret 
        UNREACHABLE_TRAP(0x6bea910)
    }
}
