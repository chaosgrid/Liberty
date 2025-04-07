#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da08e0);

PROC_DECLARE(0x6da08e0, internal_6da08e0, public_6da08e0);
extern "C" NAKED register_t __cdecl internal_6da08e0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6db408c
        mov dword ptr ds : [eax+0xC], 0x30027
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        ret 
        UNREACHABLE_TRAP(0x6da08e0)
    }
}
