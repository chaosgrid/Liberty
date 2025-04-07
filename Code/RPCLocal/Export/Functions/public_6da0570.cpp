#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da0570);

PROC_DECLARE(0x6da0570, internal_6da0570, public_6da0570);
extern "C" NAKED register_t __cdecl internal_6da0570()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6db5af4
        mov dword ptr ds : [eax+0xC], 0x3001C
        ret 
        UNREACHABLE_TRAP(0x6da0570)
    }
}
