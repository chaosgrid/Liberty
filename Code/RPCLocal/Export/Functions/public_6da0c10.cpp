#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da0c10);

PROC_DECLARE(0x6da0c10, internal_6da0c10, public_6da0c10);
extern "C" NAKED register_t __cdecl internal_6da0c10()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6db5ca4
        mov dword ptr ds : [eax+0xC], 0x30001
        ret 
        UNREACHABLE_TRAP(0x6da0c10)
    }
}
